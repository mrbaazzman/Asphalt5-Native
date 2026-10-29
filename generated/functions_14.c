#include "functions.h"

/* sub_00071d98 @ 00071d98 (arm) */
void fn_00071d98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071da4 @ 00071da4 (arm) */
void fn_00071da4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071db0 @ 00071db0 (arm) */
void fn_00071db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071dbc @ 00071dbc (arm) */
void fn_00071dbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071dc8 @ 00071dc8 (arm) */
void fn_00071dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071dd4 @ 00071dd4 (arm) */
void fn_00071dd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071de0 @ 00071de0 (arm) */
void fn_00071de0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071dec @ 00071dec (arm) */
void fn_00071dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071df8 @ 00071df8 (arm) */
void fn_00071df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e04 @ 00071e04 (arm) */
void fn_00071e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e10 @ 00071e10 (arm) */
void fn_00071e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e1c @ 00071e1c (arm) */
void fn_00071e1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e28 @ 00071e28 (arm) */
void fn_00071e28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e34 @ 00071e34 (arm) */
void fn_00071e34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e40 @ 00071e40 (arm) */
void fn_00071e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e4c @ 00071e4c (arm) */
void fn_00071e4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e58 @ 00071e58 (arm) */
void fn_00071e58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e64 @ 00071e64 (arm) */
void fn_00071e64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e70 @ 00071e70 (arm) */
void fn_00071e70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e7c @ 00071e7c (arm) */
void fn_00071e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e88 @ 00071e88 (arm) */
void fn_00071e88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071e94 @ 00071e94 (arm) */
void fn_00071e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ea0 @ 00071ea0 (arm) */
void fn_00071ea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071eac @ 00071eac (arm) */
void fn_00071eac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071eb8 @ 00071eb8 (arm) */
void fn_00071eb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ec4 @ 00071ec4 (arm) */
void fn_00071ec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ed0 @ 00071ed0 (arm) */
void fn_00071ed0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071edc @ 00071edc (arm) */
void fn_00071edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ee8 @ 00071ee8 (arm) */
void fn_00071ee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ef4 @ 00071ef4 (arm) */
void fn_00071ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f00 @ 00071f00 (arm) */
void fn_00071f00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f0c @ 00071f0c (arm) */
void fn_00071f0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f18 @ 00071f18 (arm) */
void fn_00071f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f24 @ 00071f24 (arm) */
void fn_00071f24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f30 @ 00071f30 (arm) */
void fn_00071f30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f3c @ 00071f3c (arm) */
void fn_00071f3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f48 @ 00071f48 (arm) */
void fn_00071f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f54 @ 00071f54 (arm) */
void fn_00071f54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f60 @ 00071f60 (arm) */
void fn_00071f60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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
