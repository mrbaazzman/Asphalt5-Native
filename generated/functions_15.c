#include "functions.h"

/* sub_00071f6c @ 00071f6c (arm) */
void fn_00071f6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f78 @ 00071f78 (arm) */
void fn_00071f78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f84 @ 00071f84 (arm) */
void fn_00071f84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f90 @ 00071f90 (arm) */
void fn_00071f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071f9c @ 00071f9c (arm) */
void fn_00071f9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fa8 @ 00071fa8 (arm) */
void fn_00071fa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fb4 @ 00071fb4 (arm) */
void fn_00071fb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fc0 @ 00071fc0 (arm) */
void fn_00071fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fcc @ 00071fcc (arm) */
void fn_00071fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fd8 @ 00071fd8 (arm) */
void fn_00071fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071fe4 @ 00071fe4 (arm) */
void fn_00071fe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* importGLInit @ 00071ff0 (arm) */
void fn_00071ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071ff0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00071ff4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* importGLDeinit @ 00071ff8 (arm) */
void fn_00071ff8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071ff8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* OS_Android_GetTime @ 00071ffc (arm) */
void fn_00071ffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00071ffc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00072000:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00072004:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00072008:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0007200c:;
    {
        cpu->r[14] = 0x00072010u; imp_clock_gettime(cpu); /* clock_gettime */
    }
L_00072010:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00072014:;
    {
        cpu->r[3] = 0x0000de83u;
    }
L_00072018:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x431bu << 16);
    }
L_0007201c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00072020:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00072024:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_00072028:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0007202c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 18u, &shc), cpu->r[1], 1, 0);
    }
L_00072030:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_00072034:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00072038:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007203cu)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeInit @ 0007203c (arm) */
void fn_0007203c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007203c:;
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
L_00072040:;
    {
        cpu->r[9] = rd32(0x00072048u + + 0x28cu);
    }
L_00072044:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_00072048:;
    {
        cpu->r[3] = rd32(0x00072050u + + 0x288u);
    }
L_0007204c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00072054u, cpu->r[9], 0, 0);
    }
L_00072050:;
    {
        cpu->r[4] = rd32(0x00072058u + + 0x284u);
    }
L_00072054:;
    {
        cpu->r[6] = rd32(0x0007205cu + + 0x284u);
    }
L_00072058:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0007205c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00072064u, cpu->r[4], 0, 0);
    }
L_00072060:;
    {
        cpu->r[6] = add_flags(cpu, 0x00072068u, cpu->r[6], 0, 0);
    }
L_00072064:;
    {
        cpu->r[7] = rd32(0x0007206cu + + 0x278u);
    }
L_00072068:;
    {
        cpu->r[8] = rd32(0x00072070u + + 0x278u);
    }
L_0007206c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072070:;
    {
        cpu->r[7] = add_flags(cpu, 0x00072078u, cpu->r[7], 0, 0);
    }
L_00072074:;
    {
        cpu->r[8] = add_flags(cpu, 0x0007207cu, cpu->r[8], 0, 0);
    }
L_00072078:;
    {
        cpu->r[10] = rd32(0x00072080u + + 0x26cu);
    }
L_0007207c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072084:;
    {
        cpu->r[10] = add_flags(cpu, 0x0007208cu, cpu->r[10], 0, 0);
    }
L_00072088:;
    {
        cpu->r[14] = 0x00072090u;
    }
L_0007208c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072090u)) return;
    }
L_00072090:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00072094:;
    {
        cpu->r[2] = rd32(0x0007209cu + + 0x254u);
    }
L_00072098:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0007209c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000720a4u, cpu->r[2], 0, 0);
    }
L_000720a0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000720a4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000720a8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000720ac:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000720b0:;
    {
        cpu->r[14] = 0x000720b8u;
    }
L_000720b4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000720b8u)) return;
    }
L_000720b8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000720bc:;
    {
        cpu->r[2] = rd32(0x000720c4u + + 0x230u);
    }
L_000720c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000720c4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000720c8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000720cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000720d4u, cpu->r[2], 0, 0);
    }
L_000720d0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000720d4:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000720d8:;
    {
        cpu->r[14] = 0x000720e0u;
    }
L_000720dc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000720e0u)) return;
    }
L_000720e0:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000720e4:;
    {
        cpu->r[2] = rd32(0x000720ecu + + 0x20cu);
    }
L_000720e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000720ec:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000720f0:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000720f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000720fcu, cpu->r[2], 0, 0);
    }
L_000720f8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000720fc:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072100:;
    {
        cpu->r[14] = 0x00072108u;
    }
L_00072104:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072108u)) return;
    }
L_00072108:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_0007210c:;
    {
        cpu->r[2] = rd32(0x00072114u + + 0x1e8u);
    }
L_00072110:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00072114:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072118:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_0007211c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072124u, cpu->r[2], 0, 0);
    }
L_00072120:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00072124:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072128:;
    {
        cpu->r[14] = 0x00072130u;
    }
L_0007212c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072130u)) return;
    }
L_00072130:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072134:;
    {
        cpu->r[2] = rd32(0x0007213cu + + 0x1c4u);
    }
L_00072138:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0007213c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072140:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072144:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007214cu, cpu->r[2], 0, 0);
    }
L_00072148:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0007214c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072150:;
    {
        cpu->r[14] = 0x00072158u;
    }
L_00072154:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072158u)) return;
    }
L_00072158:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_0007215c:;
    {
        cpu->r[2] = rd32(0x00072164u + + 0x1a0u);
    }
L_00072160:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00072164:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072168:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_0007216c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072174u, cpu->r[2], 0, 0);
    }
L_00072170:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00072174:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072178:;
    {
        cpu->r[14] = 0x00072180u;
    }
L_0007217c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072180u)) return;
    }
L_00072180:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072184:;
    {
        cpu->r[2] = rd32(0x0007218cu + + 0x17cu);
    }
L_00072188:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0007218c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072190:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072194:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007219cu, cpu->r[2], 0, 0);
    }
L_00072198:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_0007219c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000721a0:;
    {
        cpu->r[14] = 0x000721a8u;
    }
L_000721a4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000721a8u)) return;
    }
L_000721a8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000721ac:;
    {
        cpu->r[2] = rd32(0x000721b4u + + 0x158u);
    }
L_000721b0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000721b4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000721b8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000721bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000721c4u, cpu->r[2], 0, 0);
    }
L_000721c0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000721c4:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000721c8:;
    {
        cpu->r[14] = 0x000721d0u;
    }
L_000721cc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000721d0u)) return;
    }
L_000721d0:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000721d4:;
    {
        cpu->r[2] = rd32(0x000721dcu + + 0x134u);
    }
L_000721d8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000721dc:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000721e0:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000721e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000721ecu, cpu->r[2], 0, 0);
    }
L_000721e8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_000721ec:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000721f0:;
    {
        cpu->r[14] = 0x000721f8u;
    }
L_000721f4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000721f8u)) return;
    }
L_000721f8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000721fc:;
    {
        cpu->r[2] = rd32(0x00072204u + + 0x110u);
    }
L_00072200:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00072204:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072208:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_0007220c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072214u, cpu->r[2], 0, 0);
    }
L_00072210:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00072214:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072218:;
    {
        cpu->r[14] = 0x00072220u;
    }
L_0007221c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072220u)) return;
    }
L_00072220:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072224:;
    {
        cpu->r[2] = rd32(0x0007222cu + + 0xecu);
    }
L_00072228:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0007222c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072230:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072234:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007223cu, cpu->r[2], 0, 0);
    }
L_00072238:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_0007223c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072240:;
    {
        cpu->r[14] = 0x00072248u;
    }
L_00072244:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072248u)) return;
    }
L_00072248:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_0007224c:;
    {
        cpu->r[2] = rd32(0x00072254u + + 0xc8u);
    }
L_00072250:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00072254:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072258:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_0007225c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072264u, cpu->r[2], 0, 0);
    }
L_00072260:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_00072264:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072268:;
    {
        cpu->r[14] = 0x00072270u;
    }
L_0007226c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072270u)) return;
    }
L_00072270:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072274:;
    {
        cpu->r[2] = rd32(0x0007227cu + + 0xa4u);
    }
L_00072278:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0007227c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072280:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072284:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007228cu, cpu->r[2], 0, 0);
    }
L_00072288:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007228c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072290:;
    {
        cpu->r[14] = 0x00072298u;
    }
L_00072294:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072298u)) return;
    }
L_00072298:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_0007229c:;
    {
        cpu->r[2] = rd32(0x000722a4u + + 0x80u);
    }
L_000722a0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000722a4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000722a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000722b0u, cpu->r[2], 0, 0);
    }
L_000722ac:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000722b0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000722b4:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000722b8:;
    {
        cpu->r[14] = 0x000722c0u;
    }
L_000722bc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000722c0u)) return;
    }
L_000722c0:;
    {
        cpu->r[3] = rd32(0x000722c8u + + 0x60u);
    }
L_000722c4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000722c8:;
    {
        wr32(cpu->r[3], cpu->r[11]);
    }
L_000722cc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_000722d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000722d4u)) return;
    }
}

/* nativeOpenGLive @ 0007232c (arm) */
void fn_0007232c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007232c:;
    {
        cpu->r[2] = rd32(0x00072334u + + 0x38u);
    }
L_00072330:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00072334:;
    {
        cpu->r[0] = rd32(0x0007233cu + + 0x34u);
    }
L_00072338:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072340u, cpu->r[2], 0, 0);
    }
L_0007233c:;
    {
        cpu->r[1] = rd32(0x00072344u + + 0x30u);
    }
L_00072340:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072344:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00072348:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072350u, cpu->r[1], 0, 0);
    }
L_0007234c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00072350:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x34u);
    }
L_00072354:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00072358:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0007235c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00072360:;
    {
        cpu->r[14] = 0x00072368u;
    }
L_00072364:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072368u)) return;
    }
L_00072368:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007236cu)) return;
    }
}

/* nativeNotifyTrophy @ 00072378 (arm) */
void fn_00072378(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072378:;
    {
        cpu->r[2] = rd32(0x00072380u + + 0x38u);
    }
L_0007237c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00072380:;
    {
        cpu->r[0] = rd32(0x00072388u + + 0x34u);
    }
L_00072384:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007238cu, cpu->r[2], 0, 0);
    }
L_00072388:;
    {
        cpu->r[1] = rd32(0x00072390u + + 0x30u);
    }
L_0007238c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072390:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00072394:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007239cu, cpu->r[1], 0, 0);
    }
L_00072398:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0007239c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_000723a0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000723a4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000723a8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000723ac:;
    {
        cpu->r[14] = 0x000723b4u;
    }
L_000723b0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000723b4u)) return;
    }
L_000723b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000723b8u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeAccelerometer @ 000723c4 (arm) */
void fn_000723c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000723c4:;
    {
        cpu->r[1] = rd32(0x000723ccu + + 0x34u);
    }
L_000723c8:;
    {
        cpu->r[0] = rd32(0x000723d0u + + 0x34u);
    }
L_000723cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000723d4u, cpu->r[1], 0, 0);
    }
L_000723d0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000723d4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000723d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_000723dc:;
    {
        cpu->r[0] = rd32(0x000723e4u + + 0x24u);
    }
L_000723e0:;
    {
        cpu->r[4] = rd32(0x000723e8u + + 0x24u);
    }
L_000723e4:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_000723e8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000723ec:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_000723f0:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000723f4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000723f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000723fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeOrientation @ 00072410 (arm) */
void fn_00072410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072410:;
    {
        cpu->r[1] = rd32(0x00072418u + + 0x30u);
    }
L_00072414:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[3] = v;
    }
L_00072418:;
    {
        cpu->r[12] = rd32(0x00072420u + + 0x2cu);
    }
L_0007241c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_00072420:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072428u, cpu->r[1], 0, 0);
    }
L_00072424:;
    {
        cpu->r[0] = rd32(0x0007242cu + + 0x24u);
    }
L_00072428:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0007242c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00072430:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_00072434:;
    {
        cpu->r[3] = rd32(0x0007243cu + + 0x18u);
    }
L_00072438:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0007243c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00072440:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00072444:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeCanInterrupt @ 00072458 (arm) */
void fn_00072458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072458:;
    {
        cpu->r[3] = rd32(0x00072460u + + 0x10u);
    }
L_0007245c:;
    {
        cpu->r[2] = rd32(0x00072464u + + 0x10u);
    }
L_00072460:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072468u, cpu->r[3], 0, 0);
    }
L_00072464:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072468:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0007246c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* nativeSendAppBackground @ 00072478 (arm) */
void fn_00072478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072478:;
    {
        cpu->r[3] = rd32(0x00072480u + + 0x34u);
    }
L_0007247c:;
    {
        cpu->r[2] = rd32(0x00072484u + + 0x34u);
    }
L_00072480:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072488u, cpu->r[3], 0, 0);
    }
L_00072484:;
    {
        cpu->r[1] = rd32(0x0007248cu + + 0x30u);
    }
L_00072488:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0007248c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072490:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072498u, cpu->r[1], 0, 0);
    }
L_00072494:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072498:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_0007249c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000724a0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000724a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000724a8:;
    {
        cpu->r[14] = 0x000724b0u;
    }
L_000724ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000724b0u)) return;
    }
L_000724b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000724b4u)) return;
    }
}

/* nativeExit @ 000724c0 (arm) */
void fn_000724c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000724c0:;
    {
        cpu->r[3] = rd32(0x000724c8u + + 0x34u);
    }
L_000724c4:;
    {
        cpu->r[2] = rd32(0x000724ccu + + 0x34u);
    }
L_000724c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000724d0u, cpu->r[3], 0, 0);
    }
L_000724cc:;
    {
        cpu->r[1] = rd32(0x000724d4u + + 0x30u);
    }
L_000724d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000724d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000724d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000724e0u, cpu->r[1], 0, 0);
    }
L_000724dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000724e0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000724e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000724e8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000724ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000724f0:;
    {
        cpu->r[14] = 0x000724f8u;
    }
L_000724f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000724f8u)) return;
    }
L_000724f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000724fcu)) return;
    }
}

/* nativeLaunchIGP @ 00072508 (arm) */
void fn_00072508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072508:;
    {
        cpu->r[2] = rd32(0x00072510u + + 0x38u);
    }
L_0007250c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00072510:;
    {
        cpu->r[0] = rd32(0x00072518u + + 0x34u);
    }
L_00072514:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007251cu, cpu->r[2], 0, 0);
    }
L_00072518:;
    {
        cpu->r[1] = rd32(0x00072520u + + 0x30u);
    }
L_0007251c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072520:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00072524:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007252cu, cpu->r[1], 0, 0);
    }
L_00072528:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0007252c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_00072530:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00072534:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00072538:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007253c:;
    {
        cpu->r[14] = 0x00072544u;
    }
L_00072540:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072544u)) return;
    }
L_00072544:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00072548u)) return;
    }
}

/* nativeLaunchGetGames @ 00072554 (arm) */
void fn_00072554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072554:;
    {
        cpu->r[3] = rd32(0x0007255cu + + 0x34u);
    }
L_00072558:;
    {
        cpu->r[2] = rd32(0x00072560u + + 0x34u);
    }
L_0007255c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072564u, cpu->r[3], 0, 0);
    }
L_00072560:;
    {
        cpu->r[1] = rd32(0x00072568u + + 0x30u);
    }
L_00072564:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072568:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007256c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072574u, cpu->r[1], 0, 0);
    }
L_00072570:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072574:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x30u);
    }
L_00072578:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0007257c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00072580:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072584:;
    {
        cpu->r[14] = 0x0007258cu;
    }
L_00072588:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007258cu)) return;
    }
L_0007258c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00072590u)) return;
    }
}

/* nativeSetIGPLanguage @ 0007259c (arm) */
void fn_0007259c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007259c:;
    {
        cpu->r[2] = rd32(0x000725a4u + + 0x38u);
    }
L_000725a0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000725a4:;
    {
        cpu->r[0] = rd32(0x000725acu + + 0x34u);
    }
L_000725a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000725b0u, cpu->r[2], 0, 0);
    }
L_000725ac:;
    {
        cpu->r[1] = rd32(0x000725b4u + + 0x30u);
    }
L_000725b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000725b4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000725b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000725c0u, cpu->r[1], 0, 0);
    }
L_000725bc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000725c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_000725c4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000725c8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000725cc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000725d0:;
    {
        cpu->r[14] = 0x000725d8u;
    }
L_000725d4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000725d8u)) return;
    }
L_000725d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000725dcu)) return;
    }
}

/* nativeRequestEndDemo @ 000725e8 (arm) */
void fn_000725e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000725e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* nativeLaunchBilling @ 000725ec (arm) */
void fn_000725ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000725ec:;
    {
        cpu->r[3] = rd32(0x000725f4u + + 0x34u);
    }
L_000725f0:;
    {
        cpu->r[2] = rd32(0x000725f8u + + 0x34u);
    }
L_000725f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000725fcu, cpu->r[3], 0, 0);
    }
L_000725f8:;
    {
        cpu->r[1] = rd32(0x00072600u + + 0x30u);
    }
L_000725fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072600:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072604:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007260cu, cpu->r[1], 0, 0);
    }
L_00072608:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007260c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x14u);
    }
L_00072610:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072614:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00072618:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007261c:;
    {
        cpu->r[14] = 0x00072624u;
    }
L_00072620:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072624u)) return;
    }
L_00072624:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00072628u)) return;
    }
}

/* nativeReleaseBilling @ 00072634 (arm) */
void fn_00072634(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072634:;
    {
        cpu->r[3] = rd32(0x0007263cu + + 0x34u);
    }
L_00072638:;
    {
        cpu->r[2] = rd32(0x00072640u + + 0x34u);
    }
L_0007263c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072644u, cpu->r[3], 0, 0);
    }
L_00072640:;
    {
        cpu->r[1] = rd32(0x00072648u + + 0x30u);
    }
L_00072644:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072648:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007264c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072654u, cpu->r[1], 0, 0);
    }
L_00072650:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072654:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x18u);
    }
L_00072658:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0007265c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00072660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072664:;
    {
        cpu->r[14] = 0x0007266cu;
    }
L_00072668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007266cu)) return;
    }
L_0007266c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00072670u)) return;
    }
}

/* nativeIsDemo @ 0007267c (arm) */
void fn_0007267c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007267c:;
    {
        cpu->r[3] = rd32(0x00072684u + + 0x34u);
    }
L_00072680:;
    {
        cpu->r[2] = rd32(0x00072688u + + 0x34u);
    }
L_00072684:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007268cu, cpu->r[3], 0, 0);
    }
L_00072688:;
    {
        cpu->r[1] = rd32(0x00072690u + + 0x30u);
    }
L_0007268c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072690:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072694:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007269cu, cpu->r[1], 0, 0);
    }
L_00072698:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007269c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_000726a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000726a4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000726a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000726ac:;
    {
        cpu->r[14] = 0x000726b4u;
    }
L_000726b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000726b4u)) return;
    }
L_000726b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000726b8u)) return;
    }
}

/* nativeIsDoubleOption @ 000726c4 (arm) */
void fn_000726c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000726c4:;
    {
        cpu->r[3] = rd32(0x000726ccu + + 0x34u);
    }
L_000726c8:;
    {
        cpu->r[2] = rd32(0x000726d0u + + 0x34u);
    }
L_000726cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000726d4u, cpu->r[3], 0, 0);
    }
L_000726d0:;
    {
        cpu->r[1] = rd32(0x000726d8u + + 0x30u);
    }
L_000726d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000726d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000726dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000726e4u, cpu->r[1], 0, 0);
    }
L_000726e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000726e4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x20u);
    }
L_000726e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000726ec:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000726f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000726f4:;
    {
        cpu->r[14] = 0x000726fcu;
    }
L_000726f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000726fcu)) return;
    }
L_000726fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00072700u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeSmsUnlockerEnd @ 0007270c (arm) */
void fn_0007270c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007270c:;
    {
        cpu->r[3] = rd32(0x00072714u + + 0x14u);
    }
L_00072710:;
    {
        cpu->r[2] = rd32(0x00072718u + + 0x14u);
    }
L_00072714:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007271cu, cpu->r[3], 0, 0);
    }
L_00072718:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0007271c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00072720:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00072724:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* nativeSendUnlockMessage @ 00072730 (arm) */
void fn_00072730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072730:;
    {
        cpu->r[3] = rd32(0x00072738u + + 0x44u);
    }
L_00072734:;
    {
        cpu->r[2] = rd32(0x0007273cu + + 0x44u);
    }
L_00072738:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072740u, cpu->r[3], 0, 0);
    }
L_0007273c:;
    {
        cpu->r[1] = rd32(0x00072744u + + 0x40u);
    }
L_00072740:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00072744:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072748:;
    {
        cpu->r[2] = rd32(0x00072750u + + 0x38u);
    }
L_0007274c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00072754u, cpu->r[1], 0, 0);
    }
L_00072750:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072754:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00072758:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0007275c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00072760:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072764:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3cu);
    }
L_00072768:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007276c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00072770:;
    {
        cpu->r[14] = 0x00072778u;
    }
L_00072774:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072778u)) return;
    }
L_00072778:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007277cu)) return;
    }
}

/* nativeGetDoubleOptionText3 @ 0007278c (arm) */
void fn_0007278c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007278c:;
    {
        cpu->r[3] = rd32(0x00072794u + + 0xbcu);
    }
L_00072790:;
    {
        cpu->r[2] = rd32(0x00072798u + + 0xbcu);
    }
L_00072794:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007279cu, cpu->r[3], 0, 0);
    }
L_00072798:;
    {
        cpu->r[1] = rd32(0x000727a0u + + 0xb8u);
    }
L_0007279c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000727a0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000727a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000727acu, cpu->r[1], 0, 0);
    }
L_000727a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000727ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000727b0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000727b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000727b8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000727bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000727c0:;
    {
        cpu->r[14] = 0x000727c8u;
    }
L_000727c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000727c8u)) return;
    }
L_000727c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000727cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000727d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000727d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000727d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000727dc:;
    {
        cpu->r[14] = 0x000727e4u;
    }
L_000727e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2acu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000727e4u)) return;
    }
L_000727e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000727e8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000727ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000727f0:;
    {
        cpu->r[14] = 0x000727f4u; imp_malloc(cpu); /* malloc */
    }
L_000727f4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000727f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000727fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00072800:;
    {
        cpu->r[14] = 0x00072804u; imp_memset(cpu); /* memset */
    }
L_00072804:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072808:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007280c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00072810:;
    {
        wr8(cpu->r[5] + cpu->r[7], cpu->r[2]);
    }
L_00072814:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00072818:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0007281c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00072820:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00072824:;
    {
        cpu->r[14] = 0x0007282cu;
    }
L_00072828:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007282cu)) return;
    }
L_0007282c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00072830:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00072834:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072838:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007283c:;
    {
        cpu->r[14] = 0x00072844u;
    }
L_00072840:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072844u)) return;
    }
L_00072844:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00072848:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0007284c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072850u)) return;
    }
}

/* nativeGetDoubleOptionText2 @ 0007285c (arm) */
void fn_0007285c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007285c:;
    {
        cpu->r[3] = rd32(0x00072864u + + 0xbcu);
    }
L_00072860:;
    {
        cpu->r[2] = rd32(0x00072868u + + 0xbcu);
    }
L_00072864:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007286cu, cpu->r[3], 0, 0);
    }
L_00072868:;
    {
        cpu->r[1] = rd32(0x00072870u + + 0xb8u);
    }
L_0007286c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00072870:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072874:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007287cu, cpu->r[1], 0, 0);
    }
L_00072878:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0007287c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00072880:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x28u);
    }
L_00072884:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072888:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0007288c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072890:;
    {
        cpu->r[14] = 0x00072898u;
    }
L_00072894:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072898u)) return;
    }
L_00072898:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0007289c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000728a0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000728a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000728a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000728ac:;
    {
        cpu->r[14] = 0x000728b4u;
    }
L_000728b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2acu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000728b4u)) return;
    }
L_000728b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000728b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000728bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000728c0:;
    {
        cpu->r[14] = 0x000728c4u; imp_malloc(cpu); /* malloc */
    }
L_000728c4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000728c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000728cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000728d0:;
    {
        cpu->r[14] = 0x000728d4u; imp_memset(cpu); /* memset */
    }
L_000728d4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000728d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000728dc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000728e0:;
    {
        wr8(cpu->r[5] + cpu->r[7], cpu->r[2]);
    }
L_000728e4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000728e8:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000728ec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000728f0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000728f4:;
    {
        cpu->r[14] = 0x000728fcu;
    }
L_000728f8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000728fcu)) return;
    }
L_000728fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00072900:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00072904:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072908:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007290c:;
    {
        cpu->r[14] = 0x00072914u;
    }
L_00072910:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072914u)) return;
    }
L_00072914:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00072918:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0007291c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072920u)) return;
    }
}

/* nativeGetDoubleOptionText1 @ 0007292c (arm) */
void fn_0007292c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007292c:;
    {
        cpu->r[3] = rd32(0x00072934u + + 0xbcu);
    }
L_00072930:;
    {
        cpu->r[2] = rd32(0x00072938u + + 0xbcu);
    }
L_00072934:;
    {
        cpu->r[3] = add_flags(cpu, 0x0007293cu, cpu->r[3], 0, 0);
    }
L_00072938:;
    {
        cpu->r[1] = rd32(0x00072940u + + 0xb8u);
    }
L_0007293c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00072940:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072944:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007294cu, cpu->r[1], 0, 0);
    }
L_00072948:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0007294c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00072950:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x24u);
    }
L_00072954:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072958:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0007295c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072960:;
    {
        cpu->r[14] = 0x00072968u;
    }
L_00072964:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072968u)) return;
    }
L_00072968:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0007296c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00072970:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00072974:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072978:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007297c:;
    {
        cpu->r[14] = 0x00072984u;
    }
L_00072980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2acu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072984u)) return;
    }
L_00072984:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00072988:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0007298c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00072990:;
    {
        cpu->r[14] = 0x00072994u; imp_malloc(cpu); /* malloc */
    }
L_00072994:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00072998:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0007299c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000729a0:;
    {
        cpu->r[14] = 0x000729a4u; imp_memset(cpu); /* memset */
    }
L_000729a4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000729a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000729ac:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000729b0:;
    {
        wr8(cpu->r[5] + cpu->r[7], cpu->r[2]);
    }
L_000729b4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000729b8:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000729bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000729c0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000729c4:;
    {
        cpu->r[14] = 0x000729ccu;
    }
L_000729c8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000729ccu)) return;
    }
L_000729cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000729d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000729d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000729d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000729dc:;
    {
        cpu->r[14] = 0x000729e4u;
    }
L_000729e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000729e4u)) return;
    }
L_000729e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000729e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000729ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000729f0u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeTouchReleased @ 000729fc (arm) */
void fn_000729fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000729fc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a00:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00072a04:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00072a08:;
    {
        return fn_00092b9c(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeTouchPressed @ 00072a0c (arm) */
void fn_00072a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00072a10:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00072a14:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00072a18:;
    {
        cpu->r[14] = 0x00072a1cu; fn_00071ffc(cpu);
    }
L_00072a1c:;
    {
        cpu->r[12] = rd32(0x00072a24u + + 0x38u);
    }
L_00072a20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00072a24:;
    {
        cpu->r[3] = rd32(0x00072a2cu + + 0x34u);
    }
L_00072a28:;
    {
        cpu->r[12] = add_flags(cpu, 0x00072a30u, cpu->r[12], 0, 0);
    }
L_00072a2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00072a30:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00072a34:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00072a38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00072a3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00072a40:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_00072a44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00072a48:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00072a4c:;
    {
        cpu->r[14] = 0x00072a50u; fn_00092c4c(cpu);
    }
L_00072a50:;
    {
        cpu->r[14] = 0x00072a54u; fn_00071ffc(cpu);
    }
L_00072a54:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00072a58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072a5cu)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeTouchMoved @ 00072a64 (arm) */
void fn_00072a64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a64:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a68:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00072a6c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00072a70:;
    {
        return fn_00092cfc(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeSetOnKeyDown @ 00072a74 (arm) */
void fn_00072a74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a74:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a78:;
    {
        return fn_00092ae4(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeSetOnKeyUp @ 00072a7c (arm) */
void fn_00072a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a7c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a80:;
    {
        return fn_00092ab4(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5_nativeCheckwifi @ 00072a84 (arm) */
void fn_00072a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a84:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a88:;
    {
        return fn_001ad724(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5GLSurfaceView_nativeResume @ 00072a8c (arm) */
void fn_00072a8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072a8c:;
    {
        cpu->r[3] = rd32(0x00072a94u + + 0x18u);
    }
L_00072a90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00072a94:;
    {
        cpu->r[1] = rd32(0x00072a9cu + + 0x14u);
    }
L_00072a98:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072a9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072aa4u, cpu->r[3], 0, 0);
    }
L_00072aa0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00072aa4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00072aa8:;
    {
        return fn_00092a6c(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5GLSurfaceView_nativePause @ 00072ab4 (arm) */
void fn_00072ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072ab4:;
    {
        cpu->r[3] = rd32(0x00072abcu + + 0x18u);
    }
L_00072ab8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00072abc:;
    {
        cpu->r[1] = rd32(0x00072ac4u + + 0x14u);
    }
L_00072ac0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00072ac4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072accu, cpu->r[3], 0, 0);
    }
L_00072ac8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00072acc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00072ad0:;
    {
        return fn_00092a6c(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5Renderer_nativeGetJNIEnv @ 00072adc (arm) */
void fn_00072adc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072adc:;
    {
        cpu->r[3] = rd32(0x00072ae4u + + 0x10u);
    }
L_00072ae0:;
    {
        cpu->r[2] = rd32(0x00072ae8u + + 0x10u);
    }
L_00072ae4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072aecu, cpu->r[3], 0, 0);
    }
L_00072ae8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072aec:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00072af0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5Renderer_nativeResize @ 00072afc (arm) */
void fn_00072afc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072afc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* appRecoverOGLContext @ 00072b00 (arm) */
void fn_00072b00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072b00:;
    {
        cpu->r[3] = rd32(0x00072b08u + + 0x14u);
    }
L_00072b04:;
    {
        cpu->r[2] = rd32(0x00072b0cu + + 0x14u);
    }
L_00072b08:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072b10u, cpu->r[3], 0, 0);
    }
L_00072b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072b10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00072b14:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00072b18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5Renderer_nativeDestroy @ 00072b24 (arm) */
void fn_00072b24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072b24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00072b28:;
    {
        cpu->r[5] = rd32(0x00072b30u + + 0x2c4u);
    }
L_00072b2c:;
    {
        cpu->r[14] = 0x00072b30u; fn_00092a24(cpu);
    }
L_00072b30:;
    {
        cpu->r[14] = 0x00072b34u; fn_00071ff8(cpu);
    }
L_00072b34:;
    {
        cpu->r[3] = rd32(0x00072b3cu + + 0x2bcu);
    }
L_00072b38:;
    {
        cpu->r[5] = add_flags(cpu, 0x00072b40u, cpu->r[5], 0, 0);
    }
L_00072b3c:;
    {
        cpu->r[4] = rd32(0x00072b44u + + 0x2b8u);
    }
L_00072b40:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00072b44:;
    {
        cpu->r[4] = add_flags(cpu, 0x00072b4cu, cpu->r[4], 0, 0);
    }
L_00072b48:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072b4c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072b50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072b54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072b58:;
    {
        cpu->r[14] = 0x00072b60u;
    }
L_00072b5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072b60u)) return;
    }
L_00072b60:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072b64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00072b68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072b6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072b70:;
    {
        cpu->r[14] = 0x00072b78u;
    }
L_00072b74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072b78u)) return;
    }
L_00072b78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072b7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00072b80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072b84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072b88:;
    {
        cpu->r[14] = 0x00072b90u;
    }
L_00072b8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072b90u)) return;
    }
L_00072b90:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072b94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00072b98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072b9c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072ba0:;
    {
        cpu->r[14] = 0x00072ba8u;
    }
L_00072ba4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072ba8u)) return;
    }
L_00072ba8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072bac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_00072bb0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072bb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072bb8:;
    {
        cpu->r[14] = 0x00072bc0u;
    }
L_00072bbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072bc0u)) return;
    }
L_00072bc0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072bc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_00072bc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072bcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072bd0:;
    {
        cpu->r[14] = 0x00072bd8u;
    }
L_00072bd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072bd8u)) return;
    }
L_00072bd8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072bdc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_00072be0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072be4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072be8:;
    {
        cpu->r[14] = 0x00072bf0u;
    }
L_00072bec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072bf0u)) return;
    }
L_00072bf0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072bf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00072bf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c00:;
    {
        cpu->r[14] = 0x00072c08u;
    }
L_00072c04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c08u)) return;
    }
L_00072c08:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_00072c10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c18:;
    {
        cpu->r[14] = 0x00072c20u;
    }
L_00072c1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c20u)) return;
    }
L_00072c20:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00072c28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c30:;
    {
        cpu->r[14] = 0x00072c38u;
    }
L_00072c34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c38u)) return;
    }
L_00072c38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00072c40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c48:;
    {
        cpu->r[14] = 0x00072c50u;
    }
L_00072c4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c50u)) return;
    }
L_00072c50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00072c58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c60:;
    {
        cpu->r[14] = 0x00072c68u;
    }
L_00072c64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c68u)) return;
    }
L_00072c68:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00072c70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c78:;
    {
        cpu->r[14] = 0x00072c80u;
    }
L_00072c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c80u)) return;
    }
L_00072c80:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_00072c88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072c8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072c90:;
    {
        cpu->r[14] = 0x00072c98u;
    }
L_00072c94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072c98u)) return;
    }
L_00072c98:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072c9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x38u);
    }
L_00072ca0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072ca4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072ca8:;
    {
        cpu->r[14] = 0x00072cb0u;
    }
L_00072cac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072cb0u)) return;
    }
L_00072cb0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072cb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00072cb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072cbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072cc0:;
    {
        cpu->r[14] = 0x00072cc8u;
    }
L_00072cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072cc8u)) return;
    }
L_00072cc8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072ccc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00072cd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072cd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072cd8:;
    {
        cpu->r[14] = 0x00072ce0u;
    }
L_00072cdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072ce0u)) return;
    }
L_00072ce0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072ce4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00072ce8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072cec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072cf0:;
    {
        cpu->r[14] = 0x00072cf8u;
    }
L_00072cf4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072cf8u)) return;
    }
L_00072cf8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072cfc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00072d00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d08:;
    {
        cpu->r[14] = 0x00072d10u;
    }
L_00072d0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d10u)) return;
    }
L_00072d10:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072d14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00072d18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d20:;
    {
        cpu->r[14] = 0x00072d28u;
    }
L_00072d24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d28u)) return;
    }
L_00072d28:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072d2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_00072d30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d38:;
    {
        cpu->r[14] = 0x00072d40u;
    }
L_00072d3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d40u)) return;
    }
L_00072d40:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072d44:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_00072d48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d50:;
    {
        cpu->r[14] = 0x00072d58u;
    }
L_00072d54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d58u)) return;
    }
L_00072d58:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072d5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_00072d60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d68:;
    {
        cpu->r[14] = 0x00072d70u;
    }
L_00072d6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d70u)) return;
    }
L_00072d70:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072d74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_00072d78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072d80:;
    {
        cpu->r[14] = 0x00072d88u;
    }
L_00072d84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072d88u)) return;
    }
L_00072d88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00072d8c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00072d90:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_00072d94:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00072d98:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00072d9c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00072da0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00072da4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00072da8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00072dac:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00072db0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00072db4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00072db8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00072dbc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00072dc0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00072dc4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00072dc8:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_00072dcc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00072dd0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_00072dd4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_00072dd8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00072ddc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00072de0:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00072de4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_00072de8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_00072dec:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_00072df0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072df4u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5Renderer_nativeRender @ 00072e00 (arm) */
void fn_00072e00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072e00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00072e04:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00072e08:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00072e0c:;
    {
        return fn_00092e94(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_Asphalt5Renderer_nativeInit @ 00072e10 (arm) */
void fn_00072e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072e10:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00072e14:;
    {
        cpu->r[4] = rd32(0x00072e1cu + + 0x7cu);
    }
L_00072e18:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00072e1c:;
    {
        cpu->r[2] = rd32(0x00072e24u + + 0x78u);
    }
L_00072e20:;
    {
        cpu->r[4] = add_flags(cpu, 0x00072e28u, cpu->r[4], 0, 0);
    }
L_00072e24:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00072e28:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_00072e2c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00072e30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00072e44;
        }
    }
L_00072e34:;
    {
        cpu->r[2] = rd32(0x00072e3cu + + 0x64u);
    }
L_00072e38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00072e3c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00072e40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072e44u)) return;
    }
L_00072e44:;
    {
        cpu->r[14] = 0x00072e48u; fn_00071ff0(cpu);
    }
L_00072e48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00072e4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00072e50:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00072e54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00072e58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_00072e5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00072e60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00072e64:;
    {
        cpu->r[14] = 0x00072e68u; fn_00093084(cpu);
    }
L_00072e68:;
    {
        cpu->r[2] = rd32(0x00072e70u + + 0x34u);
    }
L_00072e6c:;
    {
        cpu->r[3] = rd32(0x00072e74u + + 0x34u);
    }
L_00072e70:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00072e74:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00072e78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00072e7c:;
    {
        cpu->r[2] = rd32(0x00072e84u + + 0x28u);
    }
L_00072e80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00072e84:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_00072e88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00072e8c:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00072e90:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_00072e94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00072e98u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_GLMediaPlayer_nativeInit @ 00072eb0 (arm) */
void fn_00072eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00072eb0:;
    {
        cpu->r[3] = rd32(0x00072eb8u + + 0x454u);
    }
L_00072eb4:;
    {
        cpu->r[2] = rd32(0x00072ebcu + + 0x454u);
    }
L_00072eb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072ec0u, cpu->r[3], 0, 0);
    }
L_00072ebc:;
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
L_00072ec0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00072ec4:;
    {
        cpu->r[4] = rd32(0x00072eccu + + 0x448u);
    }
L_00072ec8:;
    {
        cpu->r[7] = rd32(0x00072ed0u + + 0x448u);
    }
L_00072ecc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00072ed0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00072ed8u, cpu->r[4], 0, 0);
    }
L_00072ed4:;
    {
        cpu->r[7] = add_flags(cpu, 0x00072edcu, cpu->r[7], 0, 0);
    }
L_00072ed8:;
    {
        cpu->r[6] = rd32(0x00072ee0u + + 0x43cu);
    }
L_00072edc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00072ee0:;
    {
        cpu->r[8] = rd32(0x00072ee8u + + 0x438u);
    }
L_00072ee4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00072ee8:;
    {
        cpu->r[6] = add_flags(cpu, 0x00072ef0u, cpu->r[6], 0, 0);
    }
L_00072eec:;
    {
        cpu->r[14] = 0x00072ef4u;
    }
L_00072ef0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072ef4u)) return;
    }
L_00072ef4:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00072ef8:;
    {
        cpu->r[2] = rd32(0x00072f00u + + 0x424u);
    }
L_00072efc:;
    {
        cpu->r[8] = add_flags(cpu, 0x00072f04u, cpu->r[8], 0, 0);
    }
L_00072f00:;
    {
        cpu->r[9] = rd32(0x00072f08u + + 0x420u);
    }
L_00072f04:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072f0cu, cpu->r[2], 0, 0);
    }
L_00072f08:;
    {
        cpu->r[10] = rd32(0x00072f10u + + 0x41cu);
    }
L_00072f0c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00072f14u, cpu->r[9], 0, 0);
    }
L_00072f10:;
    {
        cpu->r[10] = add_flags(cpu, 0x00072f18u, cpu->r[10], 0, 0);
    }
L_00072f14:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00072f18:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00072f1c:;
    {
        cpu->r[3] = rd32(0x00072f24u + + 0x40cu);
    }
L_00072f20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00072f24:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00072f28:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00072f2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072f34u, cpu->r[3], 0, 0);
    }
L_00072f30:;
    {
        cpu->r[14] = 0x00072f38u;
    }
L_00072f34:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072f38u)) return;
    }
L_00072f38:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072f3c:;
    {
        cpu->r[2] = rd32(0x00072f44u + + 0x3f0u);
    }
L_00072f40:;
    {
        cpu->r[3] = rd32(0x00072f48u + + 0x3f0u);
    }
L_00072f44:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072f48:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072f50u, cpu->r[2], 0, 0);
    }
L_00072f4c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072f50:;
    {
        cpu->r[3] = add_flags(cpu, 0x00072f58u, cpu->r[3], 0, 0);
    }
L_00072f54:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00072f58:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072f5c:;
    {
        cpu->r[14] = 0x00072f64u;
    }
L_00072f60:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072f64u)) return;
    }
L_00072f64:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072f68:;
    {
        cpu->r[2] = rd32(0x00072f70u + + 0x3ccu);
    }
L_00072f6c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00072f70:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072f74:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072f78:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072f80u, cpu->r[2], 0, 0);
    }
L_00072f7c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00072f80:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072f84:;
    {
        cpu->r[14] = 0x00072f8cu;
    }
L_00072f88:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072f8cu)) return;
    }
L_00072f8c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072f90:;
    {
        cpu->r[2] = rd32(0x00072f98u + + 0x3a8u);
    }
L_00072f94:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00072f98:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072f9c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072fa0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072fa8u, cpu->r[2], 0, 0);
    }
L_00072fa4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00072fa8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072fac:;
    {
        cpu->r[14] = 0x00072fb4u;
    }
L_00072fb0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072fb4u)) return;
    }
L_00072fb4:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072fb8:;
    {
        cpu->r[2] = rd32(0x00072fc0u + + 0x384u);
    }
L_00072fbc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00072fc0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072fc4:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072fc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072fd0u, cpu->r[2], 0, 0);
    }
L_00072fcc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00072fd0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072fd4:;
    {
        cpu->r[14] = 0x00072fdcu;
    }
L_00072fd8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00072fdcu)) return;
    }
L_00072fdc:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00072fe0:;
    {
        cpu->r[2] = rd32(0x00072fe8u + + 0x360u);
    }
L_00072fe4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00072fe8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00072fec:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00072ff0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00072ff8u, cpu->r[2], 0, 0);
    }
L_00072ff4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00072ff8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00072ffc:;
    {
        cpu->r[14] = 0x00073004u;
    }
L_00073000:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073004u)) return;
    }
L_00073004:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073008:;
    {
        cpu->r[2] = rd32(0x00073010u + + 0x33cu);
    }
L_0007300c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00073010:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073014:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073018:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073020u, cpu->r[2], 0, 0);
    }
L_0007301c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00073020:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073024:;
    {
        cpu->r[14] = 0x0007302cu;
    }
L_00073028:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007302cu)) return;
    }
L_0007302c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073030:;
    {
        cpu->r[2] = rd32(0x00073038u + + 0x318u);
    }
L_00073034:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00073038:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007303c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073040:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073048u, cpu->r[2], 0, 0);
    }
L_00073044:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00073048:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007304c:;
    {
        cpu->r[14] = 0x00073054u;
    }
L_00073050:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073054u)) return;
    }
L_00073054:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073058:;
    {
        cpu->r[2] = rd32(0x00073060u + + 0x2f4u);
    }
L_0007305c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00073060:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073064:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073068:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073070u, cpu->r[2], 0, 0);
    }
L_0007306c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_00073070:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073074:;
    {
        cpu->r[14] = 0x0007307cu;
    }
L_00073078:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007307cu)) return;
    }
L_0007307c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073080:;
    {
        cpu->r[2] = rd32(0x00073088u + + 0x2d0u);
    }
L_00073084:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00073088:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007308c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073090:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073098u, cpu->r[2], 0, 0);
    }
L_00073094:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00073098:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007309c:;
    {
        cpu->r[14] = 0x000730a4u;
    }
L_000730a0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000730a4u)) return;
    }
L_000730a4:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000730a8:;
    {
        cpu->r[2] = rd32(0x000730b0u + + 0x2acu);
    }
L_000730ac:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000730b0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000730b4:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000730b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000730c0u, cpu->r[2], 0, 0);
    }
L_000730bc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000730c0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000730c4:;
    {
        cpu->r[14] = 0x000730ccu;
    }
L_000730c8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000730ccu)) return;
    }
L_000730cc:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000730d0:;
    {
        cpu->r[2] = rd32(0x000730d8u + + 0x288u);
    }
L_000730d4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000730d8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000730dc:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000730e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000730e8u, cpu->r[2], 0, 0);
    }
L_000730e4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_000730e8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000730ec:;
    {
        cpu->r[14] = 0x000730f4u;
    }
L_000730f0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000730f4u)) return;
    }
L_000730f4:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000730f8:;
    {
        cpu->r[2] = rd32(0x00073100u + + 0x264u);
    }
L_000730fc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00073100:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073104:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073108:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073110u, cpu->r[2], 0, 0);
    }
L_0007310c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00073110:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073114:;
    {
        cpu->r[14] = 0x0007311cu;
    }
L_00073118:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007311cu)) return;
    }
L_0007311c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073120:;
    {
        cpu->r[2] = rd32(0x00073128u + + 0x240u);
    }
L_00073124:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00073128:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007312c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073130:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073138u, cpu->r[2], 0, 0);
    }
L_00073134:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_00073138:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007313c:;
    {
        cpu->r[14] = 0x00073144u;
    }
L_00073140:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073144u)) return;
    }
L_00073144:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073148:;
    {
        cpu->r[2] = rd32(0x00073150u + + 0x21cu);
    }
L_0007314c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00073150:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073154:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073158:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073160u, cpu->r[2], 0, 0);
    }
L_0007315c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_00073160:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073164:;
    {
        cpu->r[14] = 0x0007316cu;
    }
L_00073168:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007316cu)) return;
    }
L_0007316c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073170:;
    {
        cpu->r[2] = rd32(0x00073178u + + 0x1f8u);
    }
L_00073174:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00073178:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007317c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073180:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073188u, cpu->r[2], 0, 0);
    }
L_00073184:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_00073188:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007318c:;
    {
        cpu->r[14] = 0x00073194u;
    }
L_00073190:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073194u)) return;
    }
L_00073194:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073198:;
    {
        cpu->r[2] = rd32(0x000731a0u + + 0x1d4u);
    }
L_0007319c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000731a0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000731a4:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000731a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000731b0u, cpu->r[2], 0, 0);
    }
L_000731ac:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_000731b0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000731b4:;
    {
        cpu->r[14] = 0x000731bcu;
    }
L_000731b8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000731bcu)) return;
    }
L_000731bc:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000731c0:;
    {
        cpu->r[2] = rd32(0x000731c8u + + 0x1b0u);
    }
L_000731c4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000731c8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000731cc:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000731d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000731d8u, cpu->r[2], 0, 0);
    }
L_000731d4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000731d8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000731dc:;
    {
        cpu->r[14] = 0x000731e4u;
    }
L_000731e0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000731e4u)) return;
    }
L_000731e4:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000731e8:;
    {
        cpu->r[2] = rd32(0x000731f0u + + 0x18cu);
    }
L_000731ec:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000731f0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000731f4:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000731f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073200u, cpu->r[2], 0, 0);
    }
L_000731fc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00073200:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073204:;
    {
        cpu->r[14] = 0x0007320cu;
    }
L_00073208:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007320cu)) return;
    }
L_0007320c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073210:;
    {
        cpu->r[2] = rd32(0x00073218u + + 0x168u);
    }
L_00073214:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00073218:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007321c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073220:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073228u, cpu->r[2], 0, 0);
    }
L_00073224:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_00073228:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007322c:;
    {
        cpu->r[14] = 0x00073234u;
    }
L_00073230:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073234u)) return;
    }
L_00073234:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073238:;
    {
        cpu->r[2] = rd32(0x00073240u + + 0x144u);
    }
L_0007323c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00073240:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073244:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073248:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073250u, cpu->r[2], 0, 0);
    }
L_0007324c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_00073250:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073254:;
    {
        cpu->r[14] = 0x0007325cu;
    }
L_00073258:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007325cu)) return;
    }
L_0007325c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073260:;
    {
        cpu->r[2] = rd32(0x00073268u + + 0x120u);
    }
L_00073264:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00073268:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0007326c:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073270:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073278u, cpu->r[2], 0, 0);
    }
L_00073274:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_00073278:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0007327c:;
    {
        cpu->r[14] = 0x00073284u;
    }
L_00073280:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073284u)) return;
    }
L_00073284:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073288:;
    {
        cpu->r[2] = rd32(0x00073290u + + 0xfcu);
    }
L_0007328c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00073290:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073294:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073298:;
    {
        cpu->r[2] = add_flags(cpu, 0x000732a0u, cpu->r[2], 0, 0);
    }
L_0007329c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_000732a0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000732a4:;
    {
        cpu->r[14] = 0x000732acu;
    }
L_000732a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000732acu)) return;
    }
L_000732ac:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000732b0:;
    {
        cpu->r[2] = rd32(0x000732b8u + + 0xd8u);
    }
L_000732b4:;
    {
        cpu->r[3] = rd32(0x000732bcu + + 0xd8u);
    }
L_000732b8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000732bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000732c4u, cpu->r[2], 0, 0);
    }
L_000732c0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000732c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000732ccu, cpu->r[3], 0, 0);
    }
L_000732c8:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_000732cc:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000732d0:;
    {
        cpu->r[14] = 0x000732d8u;
    }
L_000732d4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000732d8u)) return;
    }
L_000732d8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_000732dc:;
    {
        cpu->r[2] = rd32(0x000732e4u + + 0xb4u);
    }
L_000732e0:;
    {
        cpu->r[3] = rd32(0x000732e8u + + 0xb4u);
    }
L_000732e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000732ecu, cpu->r[2], 0, 0);
    }
L_000732e8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000732ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000732f4u, cpu->r[3], 0, 0);
    }
L_000732f0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000732f4:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_000732f8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000732fc:;
    {
        cpu->r[14] = 0x00073304u;
    }
L_00073300:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073304u)) return;
    }
L_00073304:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_00073308:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007330cu)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_GLMediaPlayer_nativeGetTotalSounds @ 000733a0 (arm) */
void fn_000733a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000733a0:;
    {
        cpu->r[0] = 0x000000bbu;
    }
L_000733a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* GetNativeResourceSoundRawLength @ 000733a8 (arm) */
void fn_000733a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000733a8:;
    {
        cpu->r[2] = rd32(0x000733b0u + + 0x38u);
    }
L_000733ac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000733b0:;
    {
        cpu->r[0] = rd32(0x000733b8u + + 0x34u);
    }
L_000733b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000733bcu, cpu->r[2], 0, 0);
    }
L_000733b8:;
    {
        cpu->r[1] = rd32(0x000733c0u + + 0x30u);
    }
L_000733bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000733c0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000733c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000733ccu, cpu->r[1], 0, 0);
    }
L_000733c8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000733cc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x6cu);
    }
L_000733d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000733d4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x68u);
    }
L_000733d8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000733dc:;
    {
        cpu->r[14] = 0x000733e4u;
    }
L_000733e0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000733e4u)) return;
    }
L_000733e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000733e8u)) return;
    }
}

/* nativeLoadSound @ 000733f4 (arm) */
void fn_000733f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000733f4:;
    {
        cpu->r[2] = rd32(0x000733fcu + + 0x48u);
    }
L_000733f8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000733fc:;
    {
        cpu->r[12] = rd32(0x00073404u + + 0x44u);
    }
L_00073400:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073408u, cpu->r[2], 0, 0);
    }
L_00073404:;
    {
        cpu->r[0] = rd32(0x0007340cu + + 0x40u);
    }
L_00073408:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0007340c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00073410:;
    {
        cpu->r[0] = add_flags(cpu, 0x00073418u, cpu->r[0], 0, 0);
    }
L_00073414:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073418:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007341c:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00073420:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_00073424:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073428:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007342c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00073430:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00073434:;
    {
        cpu->r[14] = 0x0007343cu;
    }
L_00073438:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007343cu)) return;
    }
L_0007343c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073440:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073444u)) return;
    }
}

/* nativeLoadSoundBig @ 00073450 (arm) */
void fn_00073450(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073450:;
    {
        cpu->r[2] = rd32(0x00073458u + + 0x38u);
    }
L_00073454:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073458:;
    {
        cpu->r[0] = rd32(0x00073460u + + 0x34u);
    }
L_0007345c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073464u, cpu->r[2], 0, 0);
    }
L_00073460:;
    {
        cpu->r[1] = rd32(0x00073468u + + 0x30u);
    }
L_00073464:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073468:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0007346c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073474u, cpu->r[1], 0, 0);
    }
L_00073470:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073474:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x18u);
    }
L_00073478:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007347c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073480:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073484:;
    {
        cpu->r[14] = 0x0007348cu;
    }
L_00073488:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007348cu)) return;
    }
L_0007348c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073490u)) return;
    }
}

/* nativePlaySound @ 0007349c (arm) */
void fn_0007349c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007349c:;
    {
        cpu->r[12] = rd32(0x000734a4u + + 0x54u);
    }
L_000734a0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000734a4:;
    {
        cpu->r[2] = rd32(0x000734acu + + 0x50u);
    }
L_000734a8:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_000734ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000734b4u, cpu->r[12], 0, 0);
    }
L_000734b0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000734b4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000734b8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000734bc:;
    {
        cpu->r[14] = rd32(0x000734c4u + + 0x3cu);
    }
L_000734c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000734c4:;
    {
        cpu->r[14] = add_flags(cpu, 0x000734ccu, cpu->r[14], 0, 0);
    }
L_000734c8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000734cc:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x1cu);
    }
L_000734d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000734d4:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000734d8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000734dc:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000734e0:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000734e4:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_000734e8:;
    {
        cpu->r[14] = 0x000734f0u;
    }
L_000734ec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000734f0u)) return;
    }
L_000734f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000734f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000734f8u)) return;
    }
}

/* nativePlaySoundBig @ 00073504 (arm) */
void fn_00073504(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073504:;
    {
        cpu->r[2] = rd32(0x0007350cu + + 0x4cu);
    }
L_00073508:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007350c:;
    {
        cpu->r[0] = rd32(0x00073514u + + 0x48u);
    }
L_00073510:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00073514:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007351cu, cpu->r[2], 0, 0);
    }
L_00073518:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_0007351c:;
    {
        cpu->r[1] = rd32(0x00073524u + + 0x3cu);
    }
L_00073520:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073524:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00073528:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073530u, cpu->r[1], 0, 0);
    }
L_0007352c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073530:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073534:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x20u);
    }
L_00073538:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007353c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073540:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073544:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_00073548:;
    {
        cpu->r[14] = 0x00073550u;
    }
L_0007354c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073550u)) return;
    }
L_00073550:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073554:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073558u)) return;
    }
}

/* nativePauseSound @ 00073564 (arm) */
void fn_00073564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073564:;
    {
        cpu->r[2] = rd32(0x0007356cu + + 0x48u);
    }
L_00073568:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007356c:;
    {
        cpu->r[12] = rd32(0x00073574u + + 0x44u);
    }
L_00073570:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073578u, cpu->r[2], 0, 0);
    }
L_00073574:;
    {
        cpu->r[0] = rd32(0x0007357cu + + 0x40u);
    }
L_00073578:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0007357c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00073580:;
    {
        cpu->r[0] = add_flags(cpu, 0x00073588u, cpu->r[0], 0, 0);
    }
L_00073584:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073588:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007358c:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00073590:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_00073594:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073598:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007359c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000735a0:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000735a4:;
    {
        cpu->r[14] = 0x000735acu;
    }
L_000735a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000735acu)) return;
    }
L_000735ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000735b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000735b4u)) return;
    }
}

/* nativePauseSoundBig @ 000735c0 (arm) */
void fn_000735c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000735c0:;
    {
        cpu->r[2] = rd32(0x000735c8u + + 0x38u);
    }
L_000735c4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000735c8:;
    {
        cpu->r[0] = rd32(0x000735d0u + + 0x34u);
    }
L_000735cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000735d4u, cpu->r[2], 0, 0);
    }
L_000735d0:;
    {
        cpu->r[1] = rd32(0x000735d8u + + 0x30u);
    }
L_000735d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000735d8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000735dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000735e4u, cpu->r[1], 0, 0);
    }
L_000735e0:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000735e4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x28u);
    }
L_000735e8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000735ec:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000735f0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000735f4:;
    {
        cpu->r[14] = 0x000735fcu;
    }
L_000735f8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000735fcu)) return;
    }
L_000735fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073600u)) return;
    }
}

/* nativeResumeSound @ 0007360c (arm) */
void fn_0007360c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007360c:;
    {
        cpu->r[2] = rd32(0x00073614u + + 0x48u);
    }
L_00073610:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073614:;
    {
        cpu->r[12] = rd32(0x0007361cu + + 0x44u);
    }
L_00073618:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073620u, cpu->r[2], 0, 0);
    }
L_0007361c:;
    {
        cpu->r[0] = rd32(0x00073624u + + 0x40u);
    }
L_00073620:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00073624:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00073628:;
    {
        cpu->r[0] = add_flags(cpu, 0x00073630u, cpu->r[0], 0, 0);
    }
L_0007362c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073630:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073634:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00073638:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0007363c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073640:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073644:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00073648:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_0007364c:;
    {
        cpu->r[14] = 0x00073654u;
    }
L_00073650:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073654u)) return;
    }
L_00073654:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073658:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0007365cu)) return;
    }
}

/* nativeResumeSoundBig @ 00073668 (arm) */
void fn_00073668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073668:;
    {
        cpu->r[2] = rd32(0x00073670u + + 0x38u);
    }
L_0007366c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073670:;
    {
        cpu->r[0] = rd32(0x00073678u + + 0x34u);
    }
L_00073674:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007367cu, cpu->r[2], 0, 0);
    }
L_00073678:;
    {
        cpu->r[1] = rd32(0x00073680u + + 0x30u);
    }
L_0007367c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073680:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073684:;
    {
        cpu->r[1] = add_flags(cpu, 0x0007368cu, cpu->r[1], 0, 0);
    }
L_00073688:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0007368c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x30u);
    }
L_00073690:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073694:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073698:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007369c:;
    {
        cpu->r[14] = 0x000736a4u;
    }
L_000736a0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000736a4u)) return;
    }
L_000736a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000736a8u)) return;
    }
}

/* nativeStopSound @ 000736b4 (arm) */
void fn_000736b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000736b4:;
    {
        cpu->r[2] = rd32(0x000736bcu + + 0x48u);
    }
L_000736b8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000736bc:;
    {
        cpu->r[12] = rd32(0x000736c4u + + 0x44u);
    }
L_000736c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000736c8u, cpu->r[2], 0, 0);
    }
L_000736c4:;
    {
        cpu->r[0] = rd32(0x000736ccu + + 0x40u);
    }
L_000736c8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000736cc:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000736d0:;
    {
        cpu->r[0] = add_flags(cpu, 0x000736d8u, cpu->r[0], 0, 0);
    }
L_000736d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000736d8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000736dc:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_000736e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x34u);
    }
L_000736e4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000736e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000736ec:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000736f0:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000736f4:;
    {
        cpu->r[14] = 0x000736fcu;
    }
L_000736f8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000736fcu)) return;
    }
L_000736fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073700:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073704u)) return;
    }
}

/* nativeStopSoundBig @ 00073710 (arm) */
void fn_00073710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073710:;
    {
        cpu->r[2] = rd32(0x00073718u + + 0x38u);
    }
L_00073714:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073718:;
    {
        cpu->r[0] = rd32(0x00073720u + + 0x34u);
    }
L_0007371c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073724u, cpu->r[2], 0, 0);
    }
L_00073720:;
    {
        cpu->r[1] = rd32(0x00073728u + + 0x30u);
    }
L_00073724:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073728:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0007372c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073734u, cpu->r[1], 0, 0);
    }
L_00073730:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073734:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_00073738:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007373c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073740:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073744:;
    {
        cpu->r[14] = 0x0007374cu;
    }
L_00073748:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007374cu)) return;
    }
L_0007374c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073750u)) return;
    }
}

/* nativeUnloadSound @ 0007375c (arm) */
void fn_0007375c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007375c:;
    {
        cpu->r[2] = rd32(0x00073764u + + 0x48u);
    }
L_00073760:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073764:;
    {
        cpu->r[12] = rd32(0x0007376cu + + 0x44u);
    }
L_00073768:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073770u, cpu->r[2], 0, 0);
    }
L_0007376c:;
    {
        cpu->r[0] = rd32(0x00073774u + + 0x40u);
    }
L_00073770:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00073774:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00073778:;
    {
        cpu->r[0] = add_flags(cpu, 0x00073780u, cpu->r[0], 0, 0);
    }
L_0007377c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073780:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073784:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00073788:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0007378c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073790:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073794:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00073798:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_0007379c:;
    {
        cpu->r[14] = 0x000737a4u;
    }
L_000737a0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000737a4u)) return;
    }
L_000737a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000737a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000737acu)) return;
    }
}

/* nativeUnloadSoundBig @ 000737b8 (arm) */
void fn_000737b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000737b8:;
    {
        cpu->r[2] = rd32(0x000737c0u + + 0x38u);
    }
L_000737bc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000737c0:;
    {
        cpu->r[0] = rd32(0x000737c8u + + 0x34u);
    }
L_000737c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000737ccu, cpu->r[2], 0, 0);
    }
L_000737c8:;
    {
        cpu->r[1] = rd32(0x000737d0u + + 0x30u);
    }
L_000737cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000737d0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000737d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000737dcu, cpu->r[1], 0, 0);
    }
L_000737d8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000737dc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_000737e0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000737e4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000737e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000737ec:;
    {
        cpu->r[14] = 0x000737f4u;
    }
L_000737f0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000737f4u)) return;
    }
L_000737f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000737f8u)) return;
    }
}

/* nativeIsSoundLoaded @ 00073804 (arm) */
void fn_00073804(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073804:;
    {
        cpu->r[2] = rd32(0x0007380cu + + 0x48u);
    }
L_00073808:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007380c:;
    {
        cpu->r[12] = rd32(0x00073814u + + 0x44u);
    }
L_00073810:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073818u, cpu->r[2], 0, 0);
    }
L_00073814:;
    {
        cpu->r[0] = rd32(0x0007381cu + + 0x40u);
    }
L_00073818:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0007381c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00073820:;
    {
        cpu->r[0] = add_flags(cpu, 0x00073828u, cpu->r[0], 0, 0);
    }
L_00073824:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073828:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007382c:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00073830:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00073834:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073838:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0007383c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00073840:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00073844:;
    {
        cpu->r[14] = 0x0007384cu;
    }
L_00073848:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007384cu)) return;
    }
L_0007384c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073850:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073854u)) return;
    }
}

/* nativeIsSoundLoadedBig @ 00073860 (arm) */
void fn_00073860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073860:;
    {
        cpu->r[2] = rd32(0x00073868u + + 0x38u);
    }
L_00073864:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073868:;
    {
        cpu->r[0] = rd32(0x00073870u + + 0x34u);
    }
L_0007386c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073874u, cpu->r[2], 0, 0);
    }
L_00073870:;
    {
        cpu->r[1] = rd32(0x00073878u + + 0x30u);
    }
L_00073874:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073878:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0007387c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073884u, cpu->r[1], 0, 0);
    }
L_00073880:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073884:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00073888:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007388c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073890:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073894:;
    {
        cpu->r[14] = 0x0007389cu;
    }
L_00073898:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007389cu)) return;
    }
L_0007389c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000738a0u)) return;
    }
}

/* nativeSetVolume @ 000738ac (arm) */
void fn_000738ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000738ac:;
    {
        cpu->r[12] = rd32(0x000738b4u + + 0x54u);
    }
L_000738b0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000738b4:;
    {
        cpu->r[2] = rd32(0x000738bcu + + 0x50u);
    }
L_000738b8:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_000738bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000738c4u, cpu->r[12], 0, 0);
    }
L_000738c0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000738c4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000738c8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000738cc:;
    {
        cpu->r[14] = rd32(0x000738d4u + + 0x3cu);
    }
L_000738d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000738d4:;
    {
        cpu->r[14] = add_flags(cpu, 0x000738dcu, cpu->r[14], 0, 0);
    }
L_000738d8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000738dc:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x3cu);
    }
L_000738e0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000738e4:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000738e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000738ec:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000738f0:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000738f4:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_000738f8:;
    {
        cpu->r[14] = 0x00073900u;
    }
L_000738fc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073900u)) return;
    }
L_00073900:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00073904:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073908u)) return;
    }
}

/* nativeSetVolumeBig @ 00073914 (arm) */
void fn_00073914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073914:;
    {
        cpu->r[2] = rd32(0x0007391cu + + 0x4cu);
    }
L_00073918:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007391c:;
    {
        cpu->r[0] = rd32(0x00073924u + + 0x48u);
    }
L_00073920:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00073924:;
    {
        cpu->r[2] = add_flags(cpu, 0x0007392cu, cpu->r[2], 0, 0);
    }
L_00073928:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_0007392c:;
    {
        cpu->r[1] = rd32(0x00073934u + + 0x3cu);
    }
L_00073930:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073934:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00073938:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073940u, cpu->r[1], 0, 0);
    }
L_0007393c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073940:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073944:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x40u);
    }
L_00073948:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0007394c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073950:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073954:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_00073958:;
    {
        cpu->r[14] = 0x00073960u;
    }
L_0007395c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073960u)) return;
    }
L_00073960:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073964:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073968u)) return;
    }
}

/* nativeResetSound @ 00073974 (arm) */
void fn_00073974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073974:;
    {
        cpu->r[2] = rd32(0x0007397cu + + 0x38u);
    }
L_00073978:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0007397c:;
    {
        cpu->r[0] = rd32(0x00073984u + + 0x34u);
    }
L_00073980:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073988u, cpu->r[2], 0, 0);
    }
L_00073984:;
    {
        cpu->r[1] = rd32(0x0007398cu + + 0x30u);
    }
L_00073988:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0007398c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073990:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073998u, cpu->r[1], 0, 0);
    }
L_00073994:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073998:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x44u);
    }
L_0007399c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000739a0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000739a4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000739a8:;
    {
        cpu->r[14] = 0x000739b0u;
    }
L_000739ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000739b0u)) return;
    }
L_000739b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000739b4u)) return;
    }
}

/* nativeSetPitch @ 000739c0 (arm) */
void fn_000739c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000739c0:;
    {
        cpu->r[12] = rd32(0x000739c8u + + 0x54u);
    }
L_000739c4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000739c8:;
    {
        cpu->r[2] = rd32(0x000739d0u + + 0x50u);
    }
L_000739cc:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,13);
    }
L_000739d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000739d8u, cpu->r[12], 0, 0);
    }
L_000739d4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000739d8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000739dc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000739e0:;
    {
        cpu->r[14] = rd32(0x000739e8u + + 0x3cu);
    }
L_000739e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000739e8:;
    {
        cpu->r[14] = add_flags(cpu, 0x000739f0u, cpu->r[14], 0, 0);
    }
L_000739ec:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000739f0:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x48u);
    }
L_000739f4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000739f8:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000739fc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073a00:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00073a04:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_00073a08:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_00073a0c:;
    {
        cpu->r[14] = 0x00073a14u;
    }
L_00073a10:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073a14u)) return;
    }
L_00073a14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00073a18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073a1cu)) return;
    }
}

/* nativeStopAllSounds @ 00073a28 (arm) */
void fn_00073a28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073a28:;
    {
        cpu->r[3] = rd32(0x00073a30u + + 0x34u);
    }
L_00073a2c:;
    {
        cpu->r[2] = rd32(0x00073a34u + + 0x34u);
    }
L_00073a30:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073a38u, cpu->r[3], 0, 0);
    }
L_00073a34:;
    {
        cpu->r[1] = rd32(0x00073a3cu + + 0x30u);
    }
L_00073a38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073a3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073a40:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073a48u, cpu->r[1], 0, 0);
    }
L_00073a44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073a48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4cu);
    }
L_00073a4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073a50:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073a54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073a58:;
    {
        cpu->r[14] = 0x00073a60u;
    }
L_00073a5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073a60u)) return;
    }
L_00073a60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073a64u)) return;
    }
}

/* nativeStopAllSoundPool @ 00073a70 (arm) */
void fn_00073a70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073a70:;
    {
        cpu->r[2] = rd32(0x00073a78u + + 0x38u);
    }
L_00073a74:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073a78:;
    {
        cpu->r[0] = rd32(0x00073a80u + + 0x34u);
    }
L_00073a7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073a84u, cpu->r[2], 0, 0);
    }
L_00073a80:;
    {
        cpu->r[1] = rd32(0x00073a88u + + 0x30u);
    }
L_00073a84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073a88:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073a8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073a94u, cpu->r[1], 0, 0);
    }
L_00073a90:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073a94:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x50u);
    }
L_00073a98:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073a9c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073aa0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073aa4:;
    {
        cpu->r[14] = 0x00073aacu;
    }
L_00073aa8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073aacu)) return;
    }
L_00073aac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073ab0u)) return;
    }
}

/* nativeStopAllBigSound @ 00073abc (arm) */
void fn_00073abc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073abc:;
    {
        cpu->r[2] = rd32(0x00073ac4u + + 0x38u);
    }
L_00073ac0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073ac4:;
    {
        cpu->r[0] = rd32(0x00073accu + + 0x34u);
    }
L_00073ac8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073ad0u, cpu->r[2], 0, 0);
    }
L_00073acc:;
    {
        cpu->r[1] = rd32(0x00073ad4u + + 0x30u);
    }
L_00073ad0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073ad4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073ad8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073ae0u, cpu->r[1], 0, 0);
    }
L_00073adc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073ae0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x54u);
    }
L_00073ae4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073ae8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073aec:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073af0:;
    {
        cpu->r[14] = 0x00073af8u;
    }
L_00073af4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073af8u)) return;
    }
L_00073af8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073afcu)) return;
    }
}

/* nativeDestroySoundPool @ 00073b08 (arm) */
void fn_00073b08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073b08:;
    {
        cpu->r[3] = rd32(0x00073b10u + + 0x34u);
    }
L_00073b0c:;
    {
        cpu->r[2] = rd32(0x00073b14u + + 0x34u);
    }
L_00073b10:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073b18u, cpu->r[3], 0, 0);
    }
L_00073b14:;
    {
        cpu->r[1] = rd32(0x00073b1cu + + 0x30u);
    }
L_00073b18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073b1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073b20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073b28u, cpu->r[1], 0, 0);
    }
L_00073b24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073b28:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_00073b2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073b30:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073b34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073b38:;
    {
        cpu->r[14] = 0x00073b40u;
    }
L_00073b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073b40u)) return;
    }
L_00073b40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073b44u)) return;
    }
}

/* nativeInitSoundPoolArray @ 00073b50 (arm) */
void fn_00073b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073b50:;
    {
        cpu->r[3] = rd32(0x00073b58u + + 0x34u);
    }
L_00073b54:;
    {
        cpu->r[2] = rd32(0x00073b5cu + + 0x34u);
    }
L_00073b58:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073b60u, cpu->r[3], 0, 0);
    }
L_00073b5c:;
    {
        cpu->r[1] = rd32(0x00073b64u + + 0x30u);
    }
L_00073b60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073b64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073b68:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073b70u, cpu->r[1], 0, 0);
    }
L_00073b6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073b70:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x5cu);
    }
L_00073b74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073b78:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073b7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073b80:;
    {
        cpu->r[14] = 0x00073b88u;
    }
L_00073b84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073b88u)) return;
    }
L_00073b88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073b8cu)) return;
    }
}

/* nativeLoadMovie @ 00073b98 (arm) */
void fn_00073b98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073b98:;
    {
        cpu->r[3] = rd32(0x00073ba0u + + 0x6cu);
    }
L_00073b9c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073ba0:;
    {
        cpu->r[2] = rd32(0x00073ba8u + + 0x68u);
    }
L_00073ba4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073bacu, cpu->r[3], 0, 0);
    }
L_00073ba8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00073bac:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073bb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073bb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073bbc:;
    {
        cpu->r[14] = 0x00073bc4u;
    }
L_00073bc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x29cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073bc4u)) return;
    }
L_00073bc4:;
    {
        cpu->r[1] = rd32(0x00073bccu + + 0x48u);
    }
L_00073bc8:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073bcc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073bd4u, cpu->r[1], 0, 0);
    }
L_00073bd0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x60u);
    }
L_00073bd4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073bd8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00073bdc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073be0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073be4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073be8:;
    {
        cpu->r[14] = 0x00073bf0u;
    }
L_00073bec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x234u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073bf0u)) return;
    }
L_00073bf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073bf4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00073bf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073c00:;
    {
        cpu->r[14] = 0x00073c08u;
    }
L_00073c04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073c08u)) return;
    }
L_00073c08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00073c0cu)) return;
    }
}

/* nativeIsMediaPlaying @ 00073c18 (arm) */
void fn_00073c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073c18:;
    {
        cpu->r[2] = rd32(0x00073c20u + + 0x38u);
    }
L_00073c1c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073c20:;
    {
        cpu->r[0] = rd32(0x00073c28u + + 0x34u);
    }
L_00073c24:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073c2cu, cpu->r[2], 0, 0);
    }
L_00073c28:;
    {
        cpu->r[1] = rd32(0x00073c30u + + 0x30u);
    }
L_00073c2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00073c30:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073c34:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073c3cu, cpu->r[1], 0, 0);
    }
L_00073c38:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00073c3c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x64u);
    }
L_00073c40:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073c44:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073c48:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073c4c:;
    {
        cpu->r[14] = 0x00073c54u;
    }
L_00073c50:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073c54u)) return;
    }
L_00073c54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00073c58u)) return;
    }
}

/* GetNativeSoundRaw @ 00073c64 (arm) */
void fn_00073c64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073c64:;
    {
        cpu->r[2] = rd32(0x00073c6cu + + 0xa8u);
    }
L_00073c68:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073c6c:;
    {
        cpu->r[0] = rd32(0x00073c74u + + 0xa4u);
    }
L_00073c70:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073c78u, cpu->r[2], 0, 0);
    }
L_00073c74:;
    {
        cpu->r[1] = rd32(0x00073c7cu + + 0xa0u);
    }
L_00073c78:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00073c7c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00073c80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073c88u, cpu->r[1], 0, 0);
    }
L_00073c84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00073c88:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073c8c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x70u);
    }
L_00073c90:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073c94:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x68u);
    }
L_00073c98:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073c9c:;
    {
        cpu->r[14] = 0x00073ca4u;
    }
L_00073ca0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073ca4u)) return;
    }
L_00073ca4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073ca8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00073cac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073cb0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073cb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073cb8:;
    {
        cpu->r[14] = 0x00073cc0u;
    }
L_00073cbc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2acu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073cc0u)) return;
    }
L_00073cc0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00073cc4:;
    {
        cpu->r[14] = 0x00073cc8u; imp_malloc(cpu); /* malloc */
    }
L_00073cc8:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073ccc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00073cd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00073cd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00073cd8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00073cdc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073ce0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073ce4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00073ce8:;
    {
        cpu->r[14] = 0x00073cf0u;
    }
L_00073cec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073cf0u)) return;
    }
L_00073cf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073cf4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00073cf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073cfc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073d00:;
    {
        cpu->r[14] = 0x00073d08u;
    }
L_00073d04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073d08u)) return;
    }
L_00073d08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00073d0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00073d10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00073d14u)) return;
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_GLMediaPlayer_nativeSetStopOnMusic @ 00073d20 (arm) */
void fn_00073d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073d20:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00073d24:;
    {
        return fn_000924c0(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_GLMediaPlayer_nativeGetTotalSoundsOfSameInstance @ 00073d28 (arm) */
void fn_00073d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073d28:;
    {
        return fn_000924b8(cpu);
    }
}

/* Java_com_gameloft_android_HEP_GloftA5HD_ML_GLResLoader_nativeInit @ 00073d2c (arm) */
void fn_00073d2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073d2c:;
    {
        cpu->r[3] = rd32(0x00073d34u + + 0xb8u);
    }
L_00073d30:;
    {
        cpu->r[2] = rd32(0x00073d38u + + 0xb8u);
    }
L_00073d34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073d3cu, cpu->r[3], 0, 0);
    }
L_00073d38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00073d3c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073d40:;
    {
        cpu->r[4] = rd32(0x00073d48u + + 0xacu);
    }
L_00073d44:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00073d48:;
    {
        cpu->r[4] = add_flags(cpu, 0x00073d50u, cpu->r[4], 0, 0);
    }
L_00073d4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073d50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073d54:;
    {
        cpu->r[14] = 0x00073d5cu;
    }
L_00073d58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073d5cu)) return;
    }
L_00073d5c:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00073d60:;
    {
        cpu->r[2] = rd32(0x00073d68u + + 0x90u);
    }
L_00073d64:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073d6cu, cpu->r[2], 0, 0);
    }
L_00073d68:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073d6c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00073d70:;
    {
        cpu->r[3] = rd32(0x00073d78u + + 0x84u);
    }
L_00073d74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073d78:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073d7c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073d80:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073d88u, cpu->r[3], 0, 0);
    }
L_00073d84:;
    {
        cpu->r[14] = 0x00073d8cu;
    }
L_00073d88:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073d8cu)) return;
    }
L_00073d8c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073d90:;
    {
        cpu->r[2] = rd32(0x00073d98u + + 0x68u);
    }
L_00073d94:;
    {
        cpu->r[3] = rd32(0x00073d9cu + + 0x68u);
    }
L_00073d98:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073d9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073da4u, cpu->r[2], 0, 0);
    }
L_00073da0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073da4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073dacu, cpu->r[3], 0, 0);
    }
L_00073da8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00073dac:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073db0:;
    {
        cpu->r[14] = 0x00073db8u;
    }
L_00073db4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073db8u)) return;
    }
L_00073db8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00073dbc:;
    {
        cpu->r[2] = rd32(0x00073dc4u + + 0x44u);
    }
L_00073dc0:;
    {
        cpu->r[3] = rd32(0x00073dc8u + + 0x44u);
    }
L_00073dc4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00073dccu, cpu->r[2], 0, 0);
    }
L_00073dc8:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_00073dcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073dd4u, cpu->r[3], 0, 0);
    }
L_00073dd0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00073dd4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00073dd8:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00073ddc:;
    {
        cpu->r[14] = 0x00073de4u;
    }
L_00073de0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073de4u)) return;
    }
L_00073de4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00073de8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00073decu)) return;
    }
}

/* GetNativeResourceLength @ 00073e10 (arm) */
void fn_00073e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073e10:;
    {
        cpu->r[3] = rd32(0x00073e18u + + 0x74u);
    }
L_00073e14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073e18:;
    {
        cpu->r[2] = rd32(0x00073e20u + + 0x70u);
    }
L_00073e1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073e24u, cpu->r[3], 0, 0);
    }
L_00073e20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00073e24:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073e28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073e2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073e30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073e34:;
    {
        cpu->r[14] = 0x00073e3cu;
    }
L_00073e38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x29cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073e3cu)) return;
    }
L_00073e3c:;
    {
        cpu->r[1] = rd32(0x00073e44u + + 0x50u);
    }
L_00073e40:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073e44:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073e4cu, cpu->r[1], 0, 0);
    }
L_00073e48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_00073e4c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073e50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00073e54:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073e58:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073e5c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073e60:;
    {
        cpu->r[14] = 0x00073e68u;
    }
L_00073e64:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x204u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073e68u)) return;
    }
L_00073e68:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073e6c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00073e70:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00073e74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073e78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073e7c:;
    {
        cpu->r[14] = 0x00073e84u;
    }
L_00073e80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073e84u)) return;
    }
L_00073e84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00073e88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00073e8cu)) return;
    }
}

/* GetNativeResourceBytes @ 00073e98 (arm) */
void fn_00073e98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073e98:;
    {
        cpu->r[3] = rd32(0x00073ea0u + + 0xd4u);
    }
L_00073e9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00073ea0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00073ea4:;
    {
        cpu->r[2] = rd32(0x00073eacu + + 0xccu);
    }
L_00073ea8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073eb0u, cpu->r[3], 0, 0);
    }
L_00073eac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00073eb0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00073eb4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073eb8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073ec0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073ec4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073ec8:;
    {
        cpu->r[14] = 0x00073ed0u;
    }
L_00073ecc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x29cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073ed0u)) return;
    }
L_00073ed0:;
    {
        cpu->r[1] = rd32(0x00073ed8u + + 0xa4u);
    }
L_00073ed4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073ed8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073ee0u, cpu->r[1], 0, 0);
    }
L_00073edc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00073ee0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00073ee4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073ee8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00073eec:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073ef0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073ef4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00073ef8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00073efc:;
    {
        cpu->r[14] = 0x00073f04u;
    }
L_00073f00:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073f04u)) return;
    }
L_00073f04:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00073f08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00073f0c:;
    {
        cpu->r[14] = 0x00073f10u; imp_malloc(cpu); /* malloc */
    }
L_00073f10:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073f14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00073f18:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00073f1c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00073f20:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00073f24:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073f28:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073f2c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00073f30:;
    {
        cpu->r[14] = 0x00073f38u;
    }
L_00073f34:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073f38u)) return;
    }
L_00073f38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073f3c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00073f40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073f44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073f48:;
    {
        cpu->r[14] = 0x00073f50u;
    }
L_00073f4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073f50u)) return;
    }
L_00073f50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073f54:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00073f58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073f5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073f60:;
    {
        cpu->r[14] = 0x00073f68u;
    }
L_00073f64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073f68u)) return;
    }
L_00073f68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00073f6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00073f70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00073f74u)) return;
    }
}

/* GetNativeResourceFull @ 00073f80 (arm) */
void fn_00073f80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00073f80:;
    {
        cpu->r[3] = rd32(0x00073f88u + + 0xd8u);
    }
L_00073f84:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073f88:;
    {
        cpu->r[2] = rd32(0x00073f90u + + 0xd4u);
    }
L_00073f8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00073f94u, cpu->r[3], 0, 0);
    }
L_00073f90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00073f94:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00073f98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00073f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073fa0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073fa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073fa8:;
    {
        cpu->r[14] = 0x00073fb0u;
    }
L_00073fac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x29cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073fb0u)) return;
    }
L_00073fb0:;
    {
        cpu->r[1] = rd32(0x00073fb8u + + 0xb0u);
    }
L_00073fb4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00073fb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00073fc0u, cpu->r[1], 0, 0);
    }
L_00073fbc:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_00073fc0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00073fc4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00073fc8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00073fcc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00073fd0:;
    {
        cpu->r[14] = 0x00073fd8u;
    }
L_00073fd4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073fd8u)) return;
    }
L_00073fd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00073fdc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00073fe0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00073fe4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00073fe8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00073fec:;
    {
        cpu->r[14] = 0x00073ff4u;
    }
L_00073ff0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2acu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00073ff4u)) return;
    }
L_00073ff4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00073ff8:;
    {
        cpu->r[14] = 0x00073ffcu; imp_malloc(cpu); /* malloc */
    }
L_00073ffc:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00074000:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00074004:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00074008:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007400c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00074010:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00074014:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00074018:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0007401c:;
    {
        cpu->r[14] = 0x00074024u;
    }
L_00074020:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x320u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074024u)) return;
    }
L_00074024:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00074028:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0007402c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00074030:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00074034:;
    {
        cpu->r[14] = 0x0007403cu;
    }
L_00074038:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007403cu)) return;
    }
L_0007403c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00074040:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00074044:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00074048:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0007404c:;
    {
        cpu->r[14] = 0x00074054u;
    }
L_00074050:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074054u)) return;
    }
L_00074054:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00074058:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0007405c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00074060u)) return;
    }
}

/* adler32 @ 0007406c (arm) */
void fn_0007406c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007406c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00074070:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00074074:;
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
L_00074078:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0007407c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[5] = v;
    }
L_00074080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074210;
        }
    }
L_00074084:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074088:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0007408c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00074090u)) return;
        }
    }
L_00074090:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_00074094:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000741bc;
        }
    }
L_00074098:;
    {
        cpu->r[10] = 0x000015afu;
    }
L_0007409c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_000740a0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00074248;
        }
    }
L_000740a4:;
    {
        cpu->r[7] = 0x00008071u;
    }
L_000740a8:;
    {
        cpu->r[8] = 0x0000fff1u;
    }
L_000740ac:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x8007u << 16);
    }
L_000740b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00001580u, 1, 0);
    }
L_000740b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00001580u, 0, 0);
    }
L_000740b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000030u, 1, 0);
    }
L_000740bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_000740c0:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_000740c4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1u);
    }
L_000740c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000740cc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_000740d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000740d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000740d8:;
    {
        cpu->r[9] = rd8(cpu->r[3] + + 0x3u);
    }
L_000740dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000740e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_000740e4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x4u);
    }
L_000740e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_000740ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000740f0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x5u);
    }
L_000740f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_000740f8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x6u);
    }
L_000740fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
    }
L_00074100:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00074104:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_00074108:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0x7u);
    }
L_0007410c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00074110:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00074114:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x8u);
    }
L_00074118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_0007411c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00074120:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x9u);
    }
L_00074124:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00074128:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_0007412c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xau);
    }
L_00074130:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00074134:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_00074138:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0xbu);
    }
L_0007413c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00074140:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00074144:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xcu);
    }
L_00074148:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_0007414c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00074150:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xdu);
    }
L_00074154:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00074158:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_0007415c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xeu);
    }
L_00074160:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00074164:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0xfu);
    }
L_00074168:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0007416c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00074170:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00074174:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00074178:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0007417c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_00074180:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00074184:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00074188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000740c0;
        }
    }
L_0007418c:;
    {
        { uint64_t v = (uint64_t)cpu->r[7] * (uint64_t)cpu->r[4]; cpu->r[12] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00074190:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_00074194:;
    {
        { uint64_t v = (uint64_t)cpu->r[7] * (uint64_t)cpu->r[5]; cpu->r[12] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_00074198:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 15u, &shc); cpu->r[0] = v;
    }
L_0007419c:;
    {
        uint32_t v = cpu->r[4] - cpu->r[8] * cpu->r[0]; cpu->r[4] = v;
    }
L_000741a0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 15u, &shc); cpu->r[1] = v;
    }
L_000741a4:;
    {
        uint32_t v = cpu->r[5] - cpu->r[8] * cpu->r[1]; cpu->r[5] = v;
    }
L_000741a8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000740b0;
        }
    }
L_000741ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000741b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074240;
        }
    }
L_000741b4:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[5], 2, 16u, &shc); cpu->r[0] = v;
    }
L_000741b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000741bcu)) return;
    }
L_000741bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000741c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000741e0;
        }
    }
L_000741c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000741c8:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000741cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000741d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000741d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000741d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000741dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000741c8;
        }
    }
L_000741e0:;
    {
        cpu->r[3] = 0x0000fff0u;
    }
L_000741e4:;
    {
        cpu->r[0] = 0x0000fff1u;
    }
L_000741e8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000741ec:;
    {
        cpu->r[3] = 0x00008071u;
    }
L_000741f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8007u << 16);
    }
L_000741f4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000ff00u, 1, 0);
        }
    }
L_000741f8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000f1u, 1, 0);
        }
    }
L_000741fc:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00074200:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 15u, &shc); cpu->r[3] = v;
    }
L_00074204:;
    {
        uint32_t v = cpu->r[5] - cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00074208:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_0007420c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00074210u)) return;
    }
L_00074210:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_00074214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_00074218:;
    {
        cpu->r[3] = 0x0000fff0u;
    }
L_0007421c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00074220:;
    {
        cpu->r[3] = 0x0000fff0u;
    }
L_00074224:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000ff00u, 1, 0);
        }
    }
L_00074228:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000f1u, 1, 0);
        }
    }
L_0007422c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00074230:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00074234:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000ff00u, 1, 0);
        }
    }
L_00074238:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000f1u, 1, 0);
        }
    }
L_0007423c:;
    {
        goto L_00074208;
    }
L_00074240:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_00074244:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00074380;
        }
    }
L_00074248:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0007424c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00074250:;
    {
        cpu->r[12] = rd8(cpu->r[1]);
    }
L_00074254:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 0);
    }
L_00074258:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0x1u);
    }
L_0007425c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000fu, 1, 1);
    }
L_00074260:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00074264:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x2u);
    }
L_00074268:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_0007426c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00074270:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x3u);
    }
L_00074274:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00074278:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_0007427c:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0x4u);
    }
L_00074280:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_00074284:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_00074288:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x5u);
    }
L_0007428c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_00074290:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00074294:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x6u);
    }
L_00074298:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0007429c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_000742a0:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0x7u);
    }
L_000742a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000742a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000742ac:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x8u);
    }
L_000742b0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_000742b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000742b8:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x9u);
    }
L_000742bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000742c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_000742c4:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0xau);
    }
L_000742c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000742cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000742d0:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0xbu);
    }
L_000742d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_000742d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000742dc:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0xcu);
    }
L_000742e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000742e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_000742e8:;
    {
        cpu->r[14] = rd8(cpu->r[1] + + 0xdu);
    }
L_000742ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000742f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000742f4:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0xeu);
    }
L_000742f8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_000742fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00074300:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0xfu);
    }
L_00074304:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00074308:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_0007430c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00074310:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_00074314:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00074318:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_0007431c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00074250;
        }
    }
L_00074320:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_00074324:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00074328:;
    {
        uint32_t v = cpu->r[2] & ~ 0x0000000fu; cpu->r[2] = v;
    }
L_0007432c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_00074330:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00074334:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00074338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007435c;
        }
    }
L_0007433c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00074340:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00074344:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00074348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0007434c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00074350:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00074354:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00074358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074344;
        }
    }
L_0007435c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00074360:;
    {
        cpu->r[1] = 0x0000fff1u;
    }
L_00074364:;
    {
        cpu->r[14] = 0x00074368u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00074368:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0007436c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00074370:;
    {
        cpu->r[1] = 0x0000fff1u;
    }
L_00074374:;
    {
        cpu->r[14] = 0x00074378u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00074378:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0007437c:;
    {
        goto L_000741b4;
    }
L_00074380:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00074384:;
    {
        goto L_0007433c;
    }
}

/* adler32_combine @ 00074388 (arm) */
void fn_00074388(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074388:;
    {
        cpu->r[3] = 0x00008071u;
    }
L_0007438c:;
    {
        cpu->r[12] = 0x0000fff1u;
    }
L_00074390:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8007u << 16);
    }
L_00074394:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_00074398:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0007439c:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[2]; cpu->r[5] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_000743a0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[0] = v;
    }
L_000743a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000ff00u, 0, 0);
    }
L_000743a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x0000ff00u, 0, 0);
    }
L_000743ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000f0u, 0, 0);
    }
L_000743b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000f1u, 0, 0);
    }
L_000743b4:;
    {
        cpu->r[0] = cpu->r[6] + (uint32_t)((uint16_t)cpu->r[1]);
    }
L_000743b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 3, 16u, &shc), 0, 0);
    }
L_000743bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000743c0:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 15u, &shc); cpu->r[4] = v;
    }
L_000743c4:;
    {
        uint32_t v = cpu->r[2] - cpu->r[12] * cpu->r[4]; cpu->r[4] = v;
    }
L_000743c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_000743cc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4]; cpu->r[4] = v;
    }
L_000743d0:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[4]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000743d4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 15u, &shc); cpu->r[3] = v;
    }
L_000743d8:;
    {
        uint32_t v = cpu->r[4] - cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_000743dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000743e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000743f8;
        }
    }
L_000743e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000ff00u, 1, 0);
    }
L_000743e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000f1u, 1, 0);
    }
L_000743ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000743f0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000ff00u, 1, 0);
        }
    }
L_000743f4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000f1u, 1, 0);
        }
    }
L_000743f8:;
    {
        cpu->r[2] = 0x0000ffe2u;
    }
L_000743fc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00074400:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00074404:;
    {
        cpu->r[2] = 0x0000fff1u;
    }
L_00074408:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0001fc00u, 1, 0);
        }
    }
L_0007440c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000003e0u, 1, 0);
        }
    }
L_00074410:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
        }
    }
L_00074414:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00074418:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000ff00u, 1, 0);
        }
    }
L_0007441c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000f1u, 1, 0);
        }
    }
L_00074420:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[3], 2, 16u, &shc); cpu->r[0] = v;
    }
L_00074424:;
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
L_00074428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* compressBound @ 0007442c (arm) */
void fn_0007442c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007442c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000bu, 0, 0);
    }
L_00074430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 12u, &shc), 0, 0);
    }
L_00074434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 14u, &shc), 0, 0);
    }
L_00074438:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* compress2 @ 0007443c (arm) */
void fn_0007443c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007443c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00074440:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000038u, 1, 0);
    }
L_00074444:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_00074448:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0007444c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00074450:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00074454:;
    {
        cpu->r[2] = rd32(0x0007445cu + + 0x84u);
    }
L_00074458:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_0007445c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00074460:;
    {
        cpu->r[3] = 0x00000038u;
    }
L_00074464:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00074468:;
    {
        cpu->r[2] = add_flags(cpu, 0x00074470u, cpu->r[2], 0, 0);
    }
L_0007446c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00074470:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_00074474:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00074478:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0007447c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00074480:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00074484:;
    {
        cpu->r[14] = 0x00074488u; fn_00077610(cpu);
    }
L_00074488:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007448c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007449c;
        }
    }
L_00074490:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00074494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00074498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007449cu)) return;
    }
L_0007449c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000744a0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000744a4:;
    {
        cpu->r[14] = 0x000744a8u; fn_0007596c(cpu);
    }
L_000744a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000744ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000744b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000744c8;
        }
    }
L_000744b4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000744b8:;
    {
        cpu->r[14] = 0x000744bcu; fn_00074f04(cpu);
    }
L_000744bc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000744c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = (~0x00000004u);
        }
    }
L_000744c4:;
    {
        goto L_00074490;
    }
L_000744c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000744cc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000744d0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000744d4:;
    {
        cpu->r[14] = 0x000744d8u; fn_00074f04(cpu);
    }
L_000744d8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000744dc:;
    {
        goto L_00074490;
    }
}

/* compress @ 000744e4 (arm) */
void fn_000744e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000744e4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000744e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000744ec:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000744f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000744f4:;
    {
        cpu->r[14] = 0x000744f8u; fn_0007443c(cpu);
    }
L_000744f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000744fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00074500u)) return;
    }
}

/* get_crc_table @ 00074500 (arm) */
void fn_00074500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074500:;
    {
        cpu->r[0] = rd32(0x00074508u + + 0x4u);
    }
L_00074504:;
    {
        cpu->r[0] = add_flags(cpu, 0x0007450cu, cpu->r[0], 0, 0);
    }
L_00074508:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* crc32 @ 00074510 (arm) */
void fn_00074510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074510:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074514:;
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
L_00074518:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0007451c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00074520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007457c;
        }
    }
L_00074524:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00074528:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0007452c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074588;
        }
    }
L_00074534:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00074538:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_0007453c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074578;
        }
    }
L_00074540:;
    {
        { uint32_t v = cpu->r[1] & 0x00000003u; set_nz(cpu, v); }
    }
L_00074544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007460c;
        }
    }
L_00074548:;
    {
        cpu->r[12] = rd32(0x00074550u + + 0x704u);
    }
L_0007454c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00074554u, cpu->r[12], 0, 0);
    }
L_00074550:;
    {
        goto L_0007455c;
    }
L_00074554:;
    {
        { uint32_t v = cpu->r[1] & 0x00000003u; set_nz(cpu, v); }
    }
L_00074558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007460c;
        }
    }
L_0007455c:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_00074560:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00074564:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[3]; cpu->r[3] = v;
    }
L_00074568:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_0007456c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00074570:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
    }
L_00074574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074554;
        }
    }
L_00074578:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_0007457c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00074580:;
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
L_00074584:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00074588:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[12] = v;
    }
L_0007458c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00074590:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_00074594:;
    {
        uint32_t v = cpu->r[3] & 0x0000ff00u; cpu->r[3] = v;
    }
L_00074598:;
    {
        uint32_t v = cpu->r[0] & 0x0000ff00u; cpu->r[0] = v;
    }
L_0007459c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000745a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000745a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 8u, &shc), 0, 0);
    }
L_000745a8:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_000745ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000745e8;
        }
    }
L_000745b0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000003u; set_nz(cpu, v); }
    }
L_000745b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007490c;
        }
    }
L_000745b8:;
    {
        cpu->r[12] = rd32(0x000745c0u + + 0x698u);
    }
L_000745bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000745c4u, cpu->r[12], 0, 0);
    }
L_000745c0:;
    {
        goto L_000745cc;
    }
L_000745c4:;
    {
        { uint32_t v = cpu->r[1] & 0x00000003u; set_nz(cpu, v); }
    }
L_000745c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007490c;
        }
    }
L_000745cc:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000001u;
        cpu->r[3] = rd8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_000745d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000745d4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[0], 3, 24u, &shc); cpu->r[3] = v;
    }
L_000745d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000745dc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000745e0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000745e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000745c4;
        }
    }
L_000745e8:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_000745ec:;
    {
        uint32_t v = cpu->r[0] & 0x0000ff00u; cpu->r[1] = v;
    }
L_000745f0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_000745f4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000745f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_000745fc:;
    {
        uint32_t v = cpu->r[3] & 0x0000ff00u; cpu->r[3] = v;
    }
L_00074600:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00074604:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_00074608:;
    {
        goto L_0007457c;
    }
L_0007460c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_00074610:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00074614:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00074858;
        }
    }
L_00074618:;
    {
        cpu->r[3] = rd32(0x00074620u + + 0x63cu);
    }
L_0007461c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00074620:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00074624:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00074628:;
    {
        cpu->r[3] = add_flags(cpu, 0x00074630u, cpu->r[3], 0, 0);
    }
L_0007462c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00074630:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_00074634:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 0);
    }
L_00074638:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x4u);
    }
L_0007463c:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_00074640:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[2] = v;
    }
L_00074644:;
    {
        cpu->r[8] = rd32(cpu->r[12] + + 0x8u);
    }
L_00074648:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[6] = v;
    }
L_0007464c:;
    {
        cpu->r[1] = (cpu->r[2] >> 8) & 0xffu;
    }
L_00074650:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[0] = v;
    }
L_00074654:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000300u, 0, 0);
    }
L_00074658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_0007465c:;
    {
        cpu->r[2] = (cpu->r[2] >> 16) & 0xffu;
    }
L_00074660:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00074664:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000100u, 0, 0);
    }
L_00074668:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0007466c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00074670:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[0]; cpu->r[0] = v;
    }
L_00074674:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074678:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[5]; cpu->r[0] = v;
    }
L_0007467c:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0xcu);
    }
L_00074680:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[0] = v;
    }
L_00074684:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x10u);
    }
L_00074688:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_0007468c:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x14u);
    }
L_00074690:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[10] = v;
    }
L_00074694:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00074698:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[2] = v;
    }
L_0007469c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000300u, 0, 0);
    }
L_000746a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_000746a4:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000746a8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_000746ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000100u, 0, 0);
    }
L_000746b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000746b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000746b8:;
    {
        uint32_t v = cpu->r[10] ^ cpu->r[2]; cpu->r[2] = v;
    }
L_000746bc:;
    {
        cpu->r[9] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000746c0:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[8]; cpu->r[2] = v;
    }
L_000746c4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x18u);
    }
L_000746c8:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[1]; cpu->r[2] = v;
    }
L_000746cc:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x1cu);
    }
L_000746d0:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[9]; cpu->r[2] = v;
    }
L_000746d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_000746d8:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[9] = v;
    }
L_000746dc:;
    {
        cpu->r[8] = (cpu->r[2] >> 8) & 0xffu;
    }
L_000746e0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[10] = v;
    }
L_000746e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000300u, 0, 0);
    }
L_000746e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000200u, 0, 0);
    }
L_000746ec:;
    {
        cpu->r[2] = (cpu->r[2] >> 16) & 0xffu;
    }
L_000746f0:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_000746f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000100u, 0, 0);
    }
L_000746f8:;
    {
        cpu->r[9] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_000746fc:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00074700:;
    {
        uint32_t v = cpu->r[9] ^ cpu->r[10]; cpu->r[9] = v;
    }
L_00074704:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074708:;
    {
        uint32_t v = cpu->r[9] ^ cpu->r[7]; cpu->r[9] = v;
    }
L_0007470c:;
    {
        uint32_t v = cpu->r[9] ^ cpu->r[8]; cpu->r[8] = v;
    }
L_00074710:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[2]; cpu->r[8] = v;
    }
L_00074714:;
    {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[9] = v;
    }
L_00074718:;
    {
        cpu->r[2] = (cpu->r[8] >> 8) & 0xffu;
    }
L_0007471c:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[10] = v;
    }
L_00074720:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000300u, 0, 0);
    }
L_00074724:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000200u, 0, 0);
    }
L_00074728:;
    {
        cpu->r[8] = (cpu->r[8] >> 16) & 0xffu;
    }
L_0007472c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00074730:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000100u, 0, 0);
    }
L_00074734:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00074738:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0007473c:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[10]; cpu->r[7] = v;
    }
L_00074740:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00074744:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[6]; cpu->r[7] = v;
    }
L_00074748:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[2]; cpu->r[2] = v;
    }
L_0007474c:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[8]; cpu->r[2] = v;
    }
L_00074750:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[10] = v;
    }
L_00074754:;
    {
        cpu->r[7] = (cpu->r[2] >> 8) & 0xffu;
    }
L_00074758:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[8] = v;
    }
L_0007475c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000300u, 0, 0);
    }
L_00074760:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000200u, 0, 0);
    }
L_00074764:;
    {
        cpu->r[2] = (cpu->r[2] >> 16) & 0xffu;
    }
L_00074768:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0007476c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000100u, 0, 0);
    }
L_00074770:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00074774:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00074778:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[8]; cpu->r[6] = v;
    }
L_0007477c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074780:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[5]; cpu->r[5] = v;
    }
L_00074784:;
    {
        uint32_t v = cpu->r[5] ^ cpu->r[7]; cpu->r[5] = v;
    }
L_00074788:;
    {
        uint32_t v = cpu->r[5] ^ cpu->r[2]; cpu->r[5] = v;
    }
L_0007478c:;
    {
        uint32_t v = cpu->r[5] & 0x000000ffu; cpu->r[7] = v;
    }
L_00074790:;
    {
        cpu->r[6] = (cpu->r[5] >> 8) & 0xffu;
    }
L_00074794:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00074798:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000300u, 0, 0);
    }
L_0007479c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000200u, 0, 0);
    }
L_000747a0:;
    {
        cpu->r[5] = (cpu->r[5] >> 16) & 0xffu;
    }
L_000747a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000747a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000100u, 0, 0);
    }
L_000747ac:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000747b0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000747b4:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[2]; cpu->r[7] = v;
    }
L_000747b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000747bc:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[0]; cpu->r[0] = v;
    }
L_000747c0:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[6]; cpu->r[0] = v;
    }
L_000747c4:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_000747c8:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[6] = v;
    }
L_000747cc:;
    {
        cpu->r[5] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000747d0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000747d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000300u, 0, 0);
    }
L_000747d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000200u, 0, 0);
    }
L_000747dc:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000747e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000747e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000100u, 0, 0);
    }
L_000747e8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000747ec:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000747f0:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[2]; cpu->r[6] = v;
    }
L_000747f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000747f8:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[1]; cpu->r[1] = v;
    }
L_000747fc:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[5]; cpu->r[1] = v;
    }
L_00074800:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[2]; cpu->r[1] = v;
    }
L_00074804:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[2] = v;
    }
L_00074808:;
    {
        cpu->r[5] = (cpu->r[1] >> 8) & 0xffu;
    }
L_0007480c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[0] = v;
    }
L_00074810:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000300u, 0, 0);
    }
L_00074814:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000200u, 0, 0);
    }
L_00074818:;
    {
        cpu->r[1] = (cpu->r[1] >> 16) & 0xffu;
    }
L_0007481c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000100u, 0, 0);
    }
L_00074820:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00074824:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074828:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0007482c:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_00074830:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00074834:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[5]; cpu->r[0] = v;
    }
L_00074838:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[0] = v;
    }
L_0007483c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00074630;
        }
    }
L_00074840:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], 0x00000020u, 1, 0);
    }
L_00074844:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00074848:;
    {
        uint32_t v = cpu->r[2] & ~ 0x0000001fu; cpu->r[5] = v;
    }
L_0007484c:;
    {
        uint32_t v = cpu->r[2] & 0x0000001fu; cpu->r[2] = v;
    }
L_00074850:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_00074854:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00074858:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0007485c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000748d0;
        }
    }
L_00074860:;
    {
        cpu->r[3] = rd32(0x00074868u + + 0x3f8u);
    }
L_00074864:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00074868:;
    {
        cpu->r[3] = add_flags(cpu, 0x00074870u, cpu->r[3], 0, 0);
    }
L_0007486c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00074870:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00074874:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_00074878:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[4]; cpu->r[0] = v;
    }
L_0007487c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00074880:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[7] = v;
    }
L_00074884:;
    {
        cpu->r[4] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00074888:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[6] = v;
    }
L_0007488c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000300u, 0, 0);
    }
L_00074890:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00074894:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000200u, 0, 0);
    }
L_00074898:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000100u, 0, 0);
    }
L_0007489c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000748a0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000748a4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000748a8:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[0]; cpu->r[0] = v;
    }
L_000748ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000748b0:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[4]; cpu->r[0] = v;
    }
L_000748b4:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[0] = v;
    }
L_000748b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007486c;
        }
    }
L_000748bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_000748c0:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[3] = v;
    }
L_000748c4:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_000748c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000748cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_000748d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000748d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074578;
        }
    }
L_000748d8:;
    {
        cpu->r[12] = rd32(0x000748e0u + + 0x384u);
    }
L_000748dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000748e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000748e8u, cpu->r[12], 0, 0);
    }
L_000748e4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000748e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000748ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000748f0:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[1]; cpu->r[1] = v;
    }
L_000748f4:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[1] = v;
    }
L_000748f8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000748fc:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
    }
L_00074900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000748e4;
        }
    }
L_00074904:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_00074908:;
    {
        goto L_0007457c;
    }
L_0007490c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_00074910:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_00074914:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00074918:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00074b78;
        }
    }
L_0007491c:;
    {
        cpu->r[3] = rd32(0x00074924u + + 0x344u);
    }
L_00074920:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00074924:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00074928:;
    {
        cpu->r[3] = add_flags(cpu, 0x00074930u, cpu->r[3], 0, 0);
    }
L_0007492c:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00074930:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000020u, 1, 0);
    }
L_00074934:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_00074938:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000001fu, 1, 1);
    }
L_0007493c:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_00074940:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_00074944:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[7] = v;
    }
L_00074948:;
    {
        cpu->r[5] = (cpu->r[0] >> 8) & 0xffu;
    }
L_0007494c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00074950:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000400u, 0, 0);
    }
L_00074954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000700u, 0, 0);
    }
L_00074958:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000500u, 0, 0);
    }
L_0007495c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00074960:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00074964:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074968:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000600u, 0, 0);
    }
L_0007496c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00074970:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[2]; cpu->r[8] = v;
    }
L_00074974:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00074978:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[6]; cpu->r[8] = v;
    }
L_0007497c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0xcu);
    }
L_00074980:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[5]; cpu->r[8] = v;
    }
L_00074984:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_00074988:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[2]; cpu->r[8] = v;
    }
L_0007498c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_00074990:;
    {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[10] = v;
    }
L_00074994:;
    {
        cpu->r[0] = (cpu->r[8] >> 8) & 0xffu;
    }
L_00074998:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[2] = v;
    }
L_0007499c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000400u, 0, 0);
    }
L_000749a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000700u, 0, 0);
    }
L_000749a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000500u, 0, 0);
    }
L_000749a8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_000749ac:;
    {
        cpu->r[8] = (cpu->r[8] >> 16) & 0xffu;
    }
L_000749b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000749b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000600u, 0, 0);
    }
L_000749b8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000749bc:;
    {
        uint32_t v = cpu->r[10] ^ cpu->r[2]; cpu->r[2] = v;
    }
L_000749c0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_000749c4:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[4]; cpu->r[2] = v;
    }
L_000749c8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x18u);
    }
L_000749cc:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[0]; cpu->r[2] = v;
    }
L_000749d0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x1cu);
    }
L_000749d4:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[8]; cpu->r[2] = v;
    }
L_000749d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_000749dc:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[8] = v;
    }
L_000749e0:;
    {
        cpu->r[10] = (cpu->r[2] >> 8) & 0xffu;
    }
L_000749e4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[9] = v;
    }
L_000749e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000400u, 0, 0);
    }
L_000749ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000700u, 0, 0);
    }
L_000749f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000500u, 0, 0);
    }
L_000749f4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_000749f8:;
    {
        cpu->r[2] = (cpu->r[2] >> 16) & 0xffu;
    }
L_000749fc:;
    {
        cpu->r[9] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00074a00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000600u, 0, 0);
    }
L_00074a04:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00074a08:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[9]; cpu->r[8] = v;
    }
L_00074a0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074a10:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[7]; cpu->r[8] = v;
    }
L_00074a14:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[10]; cpu->r[10] = v;
    }
L_00074a18:;
    {
        uint32_t v = cpu->r[10] ^ cpu->r[2]; cpu->r[10] = v;
    }
L_00074a1c:;
    {
        uint32_t v = cpu->r[10] & 0x000000ffu; cpu->r[2] = v;
    }
L_00074a20:;
    {
        cpu->r[8] = (cpu->r[10] >> 8) & 0xffu;
    }
L_00074a24:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 24u, &shc); cpu->r[9] = v;
    }
L_00074a28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_00074a2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000700u, 0, 0);
    }
L_00074a30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000500u, 0, 0);
    }
L_00074a34:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074a38:;
    {
        cpu->r[10] = (cpu->r[10] >> 16) & 0xffu;
    }
L_00074a3c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00074a40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000600u, 0, 0);
    }
L_00074a44:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00074a48:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[7]; cpu->r[2] = v;
    }
L_00074a4c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00074a50:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[6]; cpu->r[2] = v;
    }
L_00074a54:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[8]; cpu->r[8] = v;
    }
L_00074a58:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[10]; cpu->r[8] = v;
    }
L_00074a5c:;
    {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[2] = v;
    }
L_00074a60:;
    {
        cpu->r[7] = (cpu->r[8] >> 8) & 0xffu;
    }
L_00074a64:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 24u, &shc); cpu->r[10] = v;
    }
L_00074a68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_00074a6c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000700u, 0, 0);
    }
L_00074a70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000500u, 0, 0);
    }
L_00074a74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074a78:;
    {
        cpu->r[8] = (cpu->r[8] >> 16) & 0xffu;
    }
L_00074a7c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00074a80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000600u, 0, 0);
    }
L_00074a84:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00074a88:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[6]; cpu->r[2] = v;
    }
L_00074a8c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00074a90:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[5]; cpu->r[5] = v;
    }
L_00074a94:;
    {
        uint32_t v = cpu->r[5] ^ cpu->r[7]; cpu->r[5] = v;
    }
L_00074a98:;
    {
        uint32_t v = cpu->r[5] ^ cpu->r[8]; cpu->r[5] = v;
    }
L_00074a9c:;
    {
        uint32_t v = cpu->r[5] & 0x000000ffu; cpu->r[7] = v;
    }
L_00074aa0:;
    {
        cpu->r[6] = (cpu->r[5] >> 8) & 0xffu;
    }
L_00074aa4:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00074aa8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000400u, 0, 0);
    }
L_00074aac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000700u, 0, 0);
    }
L_00074ab0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000500u, 0, 0);
    }
L_00074ab4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00074ab8:;
    {
        cpu->r[5] = (cpu->r[5] >> 16) & 0xffu;
    }
L_00074abc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074ac0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000600u, 0, 0);
    }
L_00074ac4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00074ac8:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[2]; cpu->r[7] = v;
    }
L_00074acc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00074ad0:;
    {
        uint32_t v = cpu->r[7] ^ cpu->r[4]; cpu->r[4] = v;
    }
L_00074ad4:;
    {
        uint32_t v = cpu->r[4] ^ cpu->r[6]; cpu->r[4] = v;
    }
L_00074ad8:;
    {
        uint32_t v = cpu->r[4] ^ cpu->r[2]; cpu->r[4] = v;
    }
L_00074adc:;
    {
        uint32_t v = cpu->r[4] & 0x000000ffu; cpu->r[6] = v;
    }
L_00074ae0:;
    {
        cpu->r[5] = (cpu->r[4] >> 8) & 0xffu;
    }
L_00074ae4:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00074ae8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000400u, 0, 0);
    }
L_00074aec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000700u, 0, 0);
    }
L_00074af0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000500u, 0, 0);
    }
L_00074af4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00074af8:;
    {
        cpu->r[4] = (cpu->r[4] >> 16) & 0xffu;
    }
L_00074afc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074b00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000600u, 0, 0);
    }
L_00074b04:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00074b08:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[2]; cpu->r[6] = v;
    }
L_00074b0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00074b10:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[0]; cpu->r[0] = v;
    }
L_00074b14:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[5]; cpu->r[0] = v;
    }
L_00074b18:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_00074b1c:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[2] = v;
    }
L_00074b20:;
    {
        cpu->r[4] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00074b24:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[6] = v;
    }
L_00074b28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_00074b2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000700u, 0, 0);
    }
L_00074b30:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00074b34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000500u, 0, 0);
    }
L_00074b38:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074b3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000600u, 0, 0);
    }
L_00074b40:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00074b44:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00074b48:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[5]; cpu->r[0] = v;
    }
L_00074b4c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00074b50:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[4]; cpu->r[0] = v;
    }
L_00074b54:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_00074b58:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0007492c;
        }
    }
L_00074b5c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], 0x00000020u, 1, 0);
    }
L_00074b60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00074b64:;
    {
        uint32_t v = cpu->r[2] & ~ 0x0000001fu; cpu->r[3] = v;
    }
L_00074b68:;
    {
        uint32_t v = cpu->r[2] & 0x0000001fu; cpu->r[2] = v;
    }
L_00074b6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_00074b70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00074b74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00074b78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00074b7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00074bfc;
        }
    }
L_00074b80:;
    {
        cpu->r[3] = rd32(0x00074b88u + + 0xe4u);
    }
L_00074b84:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00074b88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00074b8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00074b94u, cpu->r[3], 0, 0);
    }
L_00074b90:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x4u;
        cpu->r[4] = rd32(cpu->r[12] + + 0x4u);
        cpu->r[12] = wb_tmp;
    }
L_00074b94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_00074b98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00074b9c:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[4]; cpu->r[0] = v;
    }
L_00074ba0:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[4] = v;
    }
L_00074ba4:;
    {
        cpu->r[5] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00074ba8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[7] = v;
    }
L_00074bac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_00074bb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000700u, 0, 0);
    }
L_00074bb4:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00074bb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000500u, 0, 0);
    }
L_00074bbc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00074bc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000600u, 0, 0);
    }
L_00074bc4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00074bc8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00074bcc:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[6]; cpu->r[0] = v;
    }
L_00074bd0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00074bd4:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[5]; cpu->r[0] = v;
    }
L_00074bd8:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[4]; cpu->r[0] = v;
    }
L_00074bdc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00074b90;
        }
    }
L_00074be0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00074be4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00074be8:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[3] = v;
    }
L_00074bec:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_00074bf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00074bf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00074bf8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00074bfc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00074c00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000745e8;
        }
    }
L_00074c04:;
    {
        cpu->r[12] = rd32(0x00074c0cu + + 0x64u);
    }
L_00074c08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00074c0c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00074c14u, cpu->r[12], 0, 0);
    }
L_00074c10:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x4u);
    }
L_00074c14:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00074c18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00074c1c:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[0], 3, 24u, &shc); cpu->r[1] = v;
    }
L_00074c20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000400u, 0, 0);
    }
L_00074c24:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00074c28:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00074c2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074c10;
        }
    }
L_00074c30:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_00074c34:;
    {
        uint32_t v = cpu->r[0] & 0x0000ff00u; cpu->r[1] = v;
    }
L_00074c38:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00074c3c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00074c40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_00074c44:;
    {
        uint32_t v = cpu->r[3] & 0x0000ff00u; cpu->r[3] = v;
    }
L_00074c48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00074c4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_00074c50:;
    {
        goto L_0007457c;
    }
}

/* crc32_combine @ 00074c74 (arm) */
void fn_00074c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074c74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00074c78:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_00074c7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000104u, 1, 0);
    }
L_00074c80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e50;
        }
    }
L_00074c84:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_00074c88:;
    {
        cpu->r[3] = 0x00008320u;
    }
L_00074c8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xedb8u << 16);
    }
L_00074c90:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00074c94:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x100u;
        wr32(cpu->r[6] + - 0x100u, cpu->r[3]);
        cpu->r[6] = wb_tmp;
    }
L_00074c98:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00074c9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x0000007cu, 0, 0);
    }
L_00074ca0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_00074ca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00074ca8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00074cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074ca0;
        }
    }
L_00074cb0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00074cb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_00074cb8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00074cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074cc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_00074cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074ce8;
        }
    }
L_00074cc8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00074ccc:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_00074cd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074cd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[12]);
        }
    }
L_00074cd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00074cdc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] ^ cpu->r[5]; cpu->r[4] = v;
        }
    }
L_00074ce0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00074ce4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074cd0;
        }
    }
L_00074ce8:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[4]);
    }
L_00074cec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00074cf0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000080u, 1, 1);
    }
L_00074cf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074cb8;
        }
    }
L_00074cf8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00074cfc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00074d00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074d04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_00074d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074d2c;
        }
    }
L_00074d0c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00074d10:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_00074d14:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074d18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[12]);
        }
    }
L_00074d1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00074d20:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] ^ cpu->r[5]; cpu->r[4] = v;
        }
    }
L_00074d24:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00074d28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074d14;
        }
    }
L_00074d2c:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[4]);
    }
L_00074d30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00074d34:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000080u, 1, 1);
    }
L_00074d38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074cfc;
        }
    }
L_00074d3c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00074d40:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00074d44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074d48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_00074d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074d70;
        }
    }
L_00074d50:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00074d54:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_00074d58:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[12]);
        }
    }
L_00074d60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00074d64:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] ^ cpu->r[5]; cpu->r[4] = v;
        }
    }
L_00074d68:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00074d6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074d58;
        }
    }
L_00074d70:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[4]);
    }
L_00074d74:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00074d78:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000080u, 1, 1);
    }
L_00074d7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074d40;
        }
    }
L_00074d80:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e40;
        }
    }
L_00074d88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00074d8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e40;
        }
    }
L_00074d90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00074d94:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00074d98:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074d9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[3]);
        }
    }
L_00074da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00074da4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[8] ^ cpu->r[12]; cpu->r[8] = v;
        }
    }
L_00074da8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 1u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00074dac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074d98;
        }
    }
L_00074db0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00074db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e4c;
        }
    }
L_00074db8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00074dbc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00074dc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074dc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_00074dc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074dec;
        }
    }
L_00074dcc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00074dd0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00074dd4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074dd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[0]);
        }
    }
L_00074ddc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00074de0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] ^ cpu->r[4]; cpu->r[12] = v;
        }
    }
L_00074de4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00074de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074dd4;
        }
    }
L_00074dec:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[12]);
    }
L_00074df0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00074df4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000080u, 1, 1);
    }
L_00074df8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074dbc;
        }
    }
L_00074dfc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074e00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e30;
        }
    }
L_00074e04:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00074e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e30;
        }
    }
L_00074e0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00074e10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00074e14:;
    {
        { uint32_t v = cpu->r[8] & 0x00000001u; set_nz(cpu, v); }
    }
L_00074e18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_00074e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00074e20:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] ^ cpu->r[12]; cpu->r[0] = v;
        }
    }
L_00074e24:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 1u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_00074e28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074e14;
        }
    }
L_00074e2c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00074e30:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00074e34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e4c;
        }
    }
L_00074e38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00074e3c:;
    {
        goto L_00074d3c;
    }
L_00074e40:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00074e44:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00074e48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074db8;
        }
    }
L_00074e4c:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[1]; cpu->r[0] = v;
    }
L_00074e50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_00074e54:;
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
L_00074e58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* deflateSetHeader @ 00074e5c (arm) */
void fn_00074e5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074e5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00074e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074e6c;
        }
    }
L_00074e64:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00074e68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00074e6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00074e70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e64;
        }
    }
L_00074e78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_00074e7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00074e80:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[1]);
        }
    }
L_00074e84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00074e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074e64;
        }
    }
L_00074e8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* deflatePrime @ 00074e90 (arm) */
void fn_00074e90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074e90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00074e94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074ea0;
        }
    }
L_00074e98:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00074e9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00074ea0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00074ea4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074e98;
        }
    }
L_00074eac:;
    {
        cpu->r[12] = 0x000016bcu;
    }
L_00074eb0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00074eb4:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[1]);
    }
L_00074eb8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00074ebc:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[12], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00074ec0:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_00074ec4:;
    {
        wr16(cpu->r[3] + cpu->r[12], cpu->r[1]);
    }
L_00074ec8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* deflateTune @ 00074ecc (arm) */
void fn_00074ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00074ed0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074edc;
        }
    }
L_00074ed4:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00074ed8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00074edc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00074ee0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00074ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074ed4;
        }
    }
L_00074ee8:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00074eec:;
    {
        wr32(cpu->r[12] + + 0x8cu, cpu->r[1]);
    }
L_00074ef0:;
    {
        wr32(cpu->r[12] + + 0x80u, cpu->r[2]);
    }
L_00074ef4:;
    {
        wr32(cpu->r[12] + + 0x7cu, cpu->r[0]);
    }
L_00074ef8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00074efc:;
    {
        wr32(cpu->r[12] + + 0x90u, cpu->r[3]);
    }
L_00074f00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* deflateEnd @ 00074f04 (arm) */
void fn_00074f04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00074f04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00074f08:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00074f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074f18;
        }
    }
L_00074f10:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00074f14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00074f18u)) return;
    }
L_00074f18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00074f1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00074f20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f10;
        }
    }
L_00074f24:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00074f28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000045u, 1, 1);
    }
L_00074f2c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x0000002au, 1, 1);
        }
    }
L_00074f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f40;
        }
    }
L_00074f34:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000005bu, 1, 1);
    }
L_00074f38:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000049u, 1, 1);
        }
    }
L_00074f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074fd8;
        }
    }
L_00074f40:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_00074f44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f5c;
        }
    }
L_00074f4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00074f50:;
    {
        cpu->r[14] = 0x00074f58u;
    }
L_00074f54:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074f58u)) return;
    }
L_00074f58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00074f5c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x44u);
    }
L_00074f60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f78;
        }
    }
L_00074f68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00074f6c:;
    {
        cpu->r[14] = 0x00074f74u;
    }
L_00074f70:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074f74u)) return;
    }
L_00074f74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00074f78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x40u);
    }
L_00074f7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f94;
        }
    }
L_00074f84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00074f88:;
    {
        cpu->r[14] = 0x00074f90u;
    }
L_00074f8c:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074f90u)) return;
    }
L_00074f90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00074f94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x38u);
    }
L_00074f98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00074f9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074fb0;
        }
    }
L_00074fa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00074fa4:;
    {
        cpu->r[14] = 0x00074facu;
    }
L_00074fa8:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074facu)) return;
    }
L_00074fac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00074fb0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00074fb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00074fb8:;
    {
        cpu->r[14] = 0x00074fc0u;
    }
L_00074fbc:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00074fc0u)) return;
    }
L_00074fc0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000071u, 1, 1);
    }
L_00074fc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00074fc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_00074fcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00074fd0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00074fd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00074fd8u)) return;
    }
L_00074fd8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000071u, 1, 1);
    }
L_00074fdc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000067u, 1, 1);
        }
    }
L_00074fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00074f40;
        }
    }
L_00074fe4:;
    {
        cpu->r[2] = 0x0000029au;
    }
L_00074fe8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00074fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00074f10;
        }
    }
L_00074ff0:;
    {
        goto L_00074f40;
    }
}

/* deflateCopy @ 000753e4 (arm) */
void fn_000753e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000753e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000753e8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_000753ec:;
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
L_000753f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000753f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000753f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000753fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075408;
        }
    }
L_00075400:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00075404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00075408u)) return;
    }
L_00075408:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0007540c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00075410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075400;
        }
    }
L_00075414:;
    {
        cpu->r[14] = cpu->r[1];
    }
L_00075418:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_0007541c:;
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
L_00075420:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00075424:;
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
L_00075428:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0007542c:;
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
L_00075430:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00075434:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00075438:;
    {
        cpu->r[2] = 0x000016c0u;
    }
L_0007543c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00075440:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00075444:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00075448:;
    {
        cpu->r[14] = 0x00075450u;
    }
L_0007544c:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00075450u)) return;
    }
L_00075450:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000755b4;
        }
    }
L_00075458:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0007545c:;
    {
        cpu->r[2] = 0x000016c0u;
    }
L_00075460:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[7]);
    }
L_00075464:;
    {
        cpu->r[10] = 0x0000169cu;
    }
L_00075468:;
    {
        cpu->r[14] = 0x0007546cu; imp_memcpy(cpu); /* memcpy */
    }
L_0007546c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00075470:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00075474:;
    {
        wr32(cpu->r[7], cpu->r[4]);
    }
L_00075478:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_0007547c:;
    {
        cpu->r[14] = 0x00075484u;
    }
L_00075480:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00075484u)) return;
    }
L_00075484:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00075488:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0007548c:;
    {
        wr32(cpu->r[7] + + 0x38u, cpu->r[0]);
    }
L_00075490:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00075494:;
    {
        cpu->r[14] = 0x0007549cu;
    }
L_00075498:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007549cu)) return;
    }
L_0007549c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4cu);
    }
L_000754a0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000754a4:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[0]);
    }
L_000754a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_000754ac:;
    {
        cpu->r[14] = 0x000754b4u;
    }
L_000754b0:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000754b4u)) return;
    }
L_000754b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000754b8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000754bc:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[0]);
    }
L_000754c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_000754c4:;
    {
        cpu->r[14] = 0x000754ccu;
    }
L_000754c8:;
    {
        uint32_t t = rd32(cpu->r[4] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000754ccu)) return;
    }
L_000754cc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000754d0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x38u);
    }
L_000754d4:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[8]);
    }
L_000754d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000754dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000755ac;
        }
    }
L_000754e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_000754e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000754e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000755ac;
        }
    }
L_000754ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x44u);
    }
L_000754f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000754f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000755ac;
        }
    }
L_000754f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000754fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000755ac;
        }
    }
L_00075500:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00075504:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x38u);
    }
L_00075508:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0007550c:;
    {
        cpu->r[14] = 0x00075510u; imp_memcpy(cpu); /* memcpy */
    }
L_00075510:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00075514:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_00075518:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x40u);
    }
L_0007551c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00075520:;
    {
        cpu->r[14] = 0x00075524u; imp_memcpy(cpu); /* memcpy */
    }
L_00075524:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4cu);
    }
L_00075528:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x44u);
    }
L_0007552c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x44u);
    }
L_00075530:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00075534:;
    {
        cpu->r[14] = 0x00075538u; imp_memcpy(cpu); /* memcpy */
    }
L_00075538:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007553c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_00075540:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_00075544:;
    {
        cpu->r[14] = 0x00075548u; imp_memcpy(cpu); /* memcpy */
    }
L_00075548:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_0007554c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075550:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[12] = v;
    }
L_00075554:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_00075558:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_0007555c:;
    {
        cpu->r[12] = 0x000016a4u;
    }
L_00075560:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x8u);
    }
L_00075564:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00075568:;
    {
        wr32(cpu->r[7] + cpu->r[12], cpu->r[8]);
    }
L_0007556c:;
    {
        cpu->r[12] = 0x00001698u;
    }
L_00075570:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00075574:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000980u, 0, 0);
    }
L_00075578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000a70u, 0, 0);
    }
L_0007557c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_00075580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00075584:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00075588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0007558c:;
    {
        wr32(cpu->r[7] + + 0xb30u, cpu->r[3]);
    }
L_00075590:;
    {
        wr32(cpu->r[7] + cpu->r[12], cpu->r[4]);
    }
L_00075594:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000094u, 0, 0);
    }
L_00075598:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[1]);
    }
L_0007559c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000755a0:;
    {
        wr32(cpu->r[7] + + 0xb24u, cpu->r[2]);
    }
L_000755a4:;
    {
        wr32(cpu->r[7] + + 0xb18u, cpu->r[3]);
    }
L_000755a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000755acu)) return;
    }
L_000755ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000755b0:;
    {
        cpu->r[14] = 0x000755b4u; fn_00074f04(cpu);
    }
L_000755b4:;
    {
        cpu->r[0] = (~0x00000003u);
    }
L_000755b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000755bcu)) return;
    }
}

/* sub_000755bc @ 000755bc (arm) */
void fn_000755bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000755bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000755c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000755c4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_000755c8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x14u);
    }
L_000755cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000755d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000755d4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_000755d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000755dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000755e0u)) return;
        }
    }
L_000755e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_000755e4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000755e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000755ec:;
    {
        cpu->r[14] = 0x000755f0u; imp_memcpy(cpu); /* memcpy */
    }
L_000755f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000755f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000755f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000755fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_00075600:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_00075604:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_00075608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_0007560c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00075610:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_00075614:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_00075618:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007561c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_00075620:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_00075624:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_00075628:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0007562c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00075630:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_00075634:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_00075638:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0007563c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00075640u)) return;
    }
}

/* deflateSetDictionary @ 00075844 (arm) */
void fn_00075844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00075844:;
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
L_00075848:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007584c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00075850:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00075854:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075860;
        }
    }
L_00075858:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0007585c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00075860u)) return;
    }
L_00075860:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00075864:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00075868:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_0007586c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075858;
        }
    }
L_00075870:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00075874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00075878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075858;
        }
    }
L_0007587c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00075880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075948;
        }
    }
L_00075884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075954;
        }
    }
L_0007588c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00075890:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00075940;
        }
    }
L_00075894:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00075898:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x38u);
    }
L_0007589c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000104u, 1, 0);
    }
L_000758a0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 0);
    }
L_000758a4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_000758a8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
        }
    }
L_000758ac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_000758b0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
        }
    }
L_000758b4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000758b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000758bc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_000758c0:;
    {
        cpu->r[14] = 0x000758c4u; imp_memcpy(cpu); /* memcpy */
    }
L_000758c4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x38u);
    }
L_000758c8:;
    {
        wr32(cpu->r[7] + + 0x6cu, cpu->r[5]);
    }
L_000758cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000758d0:;
    {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[5]);
    }
L_000758d4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000758d8:;
    {
        cpu->r[0] = rd8(cpu->r[2]);
    }
L_000758dc:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x58u);
    }
L_000758e0:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x40u);
    }
L_000758e4:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[0]);
    }
L_000758e8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x34u);
    }
L_000758ec:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_000758f0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x44u);
    }
L_000758f4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x54u);
    }
L_000758f8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[0], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000758fc:;
    {
        uint32_t v = cpu->r[0] & cpu->r[5]; cpu->r[0] = v;
    }
L_00075900:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[0]);
    }
L_00075904:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x2u);
    }
L_00075908:;
    {
        uint32_t v = cpu->r[3] & cpu->r[8]; cpu->r[4] = v;
    }
L_0007590c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00075910:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[0], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00075914:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_00075918:;
    {
        uint32_t v = cpu->r[2] & cpu->r[5]; cpu->r[2] = v;
    }
L_0007591c:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_00075920:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00075924:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00075928:;
    {
        cpu->r[11] = rd16(cpu->r[12] + cpu->r[2]);
    }
L_0007592c:;
    {
        wr16(cpu->r[9] + cpu->r[4], cpu->r[11]);
    }
L_00075930:;
    {
        wr16(cpu->r[12] + cpu->r[2], cpu->r[3]);
    }
L_00075934:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075938:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0007593c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00075904;
        }
    }
L_00075940:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00075944:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00075948u)) return;
    }
L_00075948:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0007594c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002au, 1, 1);
    }
L_00075950:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075858;
        }
    }
L_00075954:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_00075958:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0007595c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00075960:;
    {
        cpu->r[14] = 0x00075964u; fn_0007406c(cpu);
    }
L_00075964:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[0]);
    }
L_00075968:;
    {
        goto L_0007588c;
    }
}

/* deflate @ 0007596c (arm) */
void fn_0007596c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007596c:;
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
L_00075970:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075974:;
    {
        cpu->r[8] = rd32(0x0007597cu + + 0xb74u);
    }
L_00075978:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0007597c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00075980:;
    {
        cpu->r[8] = add_flags(cpu, 0x00075988u, cpu->r[8], 0, 0);
    }
L_00075984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075994;
        }
    }
L_00075988:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0007598c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00075990:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00075994u)) return;
    }
L_00075994:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00075998:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 1);
    }
L_0007599c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000759a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_000759a4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_000759a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000759ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075988;
        }
    }
L_000759b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000759b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00075988;
        }
    }
L_000759b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000759bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000759c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076048;
        }
    }
L_000759c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000759c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000759cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007603c;
        }
    }
L_000759d0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_000759d4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_000759d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000759dc:;
    {
        cpu->r[10] = 0x0000029au;
    }
L_000759e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_000759e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_000759e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & 0x00000001u; cpu->r[10] = v;
        }
    }
L_000759ec:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000759f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00076048;
        }
    }
L_000759f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_000759f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000759fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075ea4;
        }
    }
L_00075a00:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000002au, 1, 1);
    }
L_00075a04:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x28u);
    }
L_00075a08:;
    {
        wr32(cpu->r[6], cpu->r[4]);
    }
L_00075a0c:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[5]);
    }
L_00075a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075bf4;
        }
    }
L_00075a14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000045u, 1, 1);
    }
L_00075a18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
        }
    }
L_00075a1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075d1c;
        }
    }
L_00075a20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000049u, 1, 1);
    }
L_00075a24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076034;
        }
    }
L_00075a28:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000005bu, 1, 1);
    }
L_00075a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076084;
        }
    }
L_00075a30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000067u, 1, 1);
    }
L_00075a34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007607c;
        }
    }
L_00075a38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075a3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075bd8;
        }
    }
L_00075a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00075a44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_00075a48:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
        }
    }
L_00075a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a5c;
        }
    }
L_00075a50:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00075a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[7];
        }
    }
L_00075a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075ea4;
        }
    }
L_00075a5c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_00075a60:;
    {
        cpu->r[1] = 0x0000029au;
    }
L_00075a64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00075a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075e9c;
        }
    }
L_00075a6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075a70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a94;
        }
    }
L_00075a74:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x74u);
    }
L_00075a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075a7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a94;
        }
    }
L_00075a80:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00075a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075af4;
        }
    }
L_00075a88:;
    {
        cpu->r[3] = 0x0000029au;
    }
L_00075a8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00075a90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075b3c;
        }
    }
L_00075a94:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x84u);
    }
L_00075a98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00075a9c:;
    {
        cpu->r[2] = rd32(0x00075aa4u + + 0xa50u);
    }
L_00075aa0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00075aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00075aa8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00075ab0u, cpu->r[2], 0, 0);
    }
L_00075aac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00075ab0:;
    {
        cpu->r[14] = 0x00075ab8u;
    }
L_00075ab4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00075ab8u)) return;
    }
L_00075ab8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_00075abc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00075ac0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x0000029au;
        }
    }
L_00075ac4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
        }
    }
L_00075ac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075acc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
        }
    }
L_00075ad0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00075ad4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00075ad8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075afc;
        }
    }
L_00075adc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00075ae0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075ae4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075af4;
        }
    }
L_00075ae8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00075aec:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[3]);
    }
L_00075af0:;
    {
        goto L_0007598c;
    }
L_00075af4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00075af8:;
    {
        goto L_0007598c;
    }
L_00075afc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00075b00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075b3c;
        }
    }
L_00075b04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00075b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0007643c;
        }
    }
L_00075b0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00075b10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00075b14:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00075b18:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00075b1c:;
    {
        cpu->r[14] = 0x00075b20u; fn_0007c694(cpu);
    }
L_00075b20:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_00075b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076418;
        }
    }
L_00075b28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075b2c:;
    {
        cpu->r[14] = 0x00075b30u; fn_000755bc(cpu);
    }
L_00075b30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00075b34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075ae8;
        }
    }
L_00075b3c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00075b40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075af4;
        }
    }
L_00075b44:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00075b48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075b4c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00075b50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0007598c;
        }
    }
L_00075b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00075b58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076374;
        }
    }
L_00075b5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00075b60:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075b64:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075b68:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00075b6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075b70:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 16u, &shc); cpu->r[14] = v;
    }
L_00075b74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00075b78:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_00075b7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00075b80:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075b84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075b88:;
    {
        wr8(cpu->r[12] + cpu->r[2], cpu->r[14]);
    }
L_00075b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_00075b90:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075b94:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00075b98:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[14] = v;
    }
L_00075b9c:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[14]);
    }
L_00075ba0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075ba4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[2] = v;
    }
L_00075ba8:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_00075bac:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[0]);
    }
L_00075bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075bb4:;
    {
        cpu->r[14] = 0x00075bb8u; fn_000755bc(cpu);
    }
L_00075bb8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00075bbc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075bc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075bc4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_00075bc8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
        }
    }
L_00075bcc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_00075bd0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00075bd4:;
    {
        goto L_0007598c;
    }
L_00075bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075bdc:;
    {
        cpu->r[14] = 0x00075be0u; fn_000755bc(cpu);
    }
L_00075be0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00075be4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075be8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_00075bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a5c;
        }
    }
L_00075bf0:;
    {
        goto L_00075ae8;
    }
L_00075bf4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x18u);
    }
L_00075bf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00075bfc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00075c00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000760dc;
        }
    }
L_00075c04:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x30u);
    }
L_00075c08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x88u);
    }
L_00075c0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00075c10:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 12u, &shc); cpu->r[1] = v;
    }
L_00075c14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00007800u, 1, 0);
    }
L_00075c18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00075cf4;
        }
    }
L_00075c1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00075c20:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x6cu);
    }
L_00075c24:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[3] = v;
    }
L_00075c28:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075c2c:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_00075c30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075c34:;
    {
        cpu->r[2] = 0x00001085u;
    }
L_00075c38:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00000020u; cpu->r[3] = v;
        }
    }
L_00075c3c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0842u << 16);
    }
L_00075c40:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075c44:;
    {
        { uint64_t v = (uint64_t)cpu->r[2] * (uint64_t)cpu->r[3]; cpu->r[9] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00075c48:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_00075c4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00075c50:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_00075c54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00075c58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[3], 3, 1u, &shc), 0, 0);
    }
L_00075c5c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 4u, &shc); cpu->r[3] = v;
    }
L_00075c60:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 5u, &shc), cpu->r[3], 1, 0);
    }
L_00075c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001fu, 0, 0);
    }
L_00075c68:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[14] = v;
    }
L_00075c6c:;
    {
        wr8(cpu->r[12] + cpu->r[0], cpu->r[14]);
    }
L_00075c70:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075c74:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_00075c78:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x6cu);
    }
L_00075c7c:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_00075c80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075cd8;
        }
    }
L_00075c88:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x30u);
    }
L_00075c8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00075c90:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075c94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00075c98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00075c9c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 24u, &shc); cpu->r[10] = v;
    }
L_00075ca0:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 16u, &shc); cpu->r[12] = v;
    }
L_00075ca4:;
    {
        wr8(cpu->r[14] + cpu->r[2], cpu->r[10]);
    }
L_00075ca8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075cac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075cb0:;
    {
        wr8(cpu->r[2] + cpu->r[0], cpu->r[12]);
    }
L_00075cb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_00075cb8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075cbc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00075cc0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00075cc4:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_00075cc8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075ccc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[2] = v;
    }
L_00075cd0:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_00075cd4:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[14]);
    }
L_00075cd8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00075cdc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00075ce0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00075ce4:;
    {
        cpu->r[14] = 0x00075ce8u; fn_0007406c(cpu);
    }
L_00075ce8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_00075cec:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00075cf0:;
    {
        goto L_00075a14;
    }
L_00075cf4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x84u);
    }
L_00075cf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00075cfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00075c1c;
        }
    }
L_00075d00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00075d04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000040u;
        }
    }
L_00075d08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00075c20;
        }
    }
L_00075d0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00075d10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000080u;
        }
    }
L_00075d14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000c0u;
        }
    }
L_00075d18:;
    {
        goto L_00075c20;
    }
L_00075d1c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075d20:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_00075d24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075d28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000760cc;
        }
    }
L_00075d2c:;
    {
        cpu->r[2] = rd16(cpu->r[12] + + 0x14u);
    }
L_00075d30:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075d34:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075d38:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00075d3c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075d40:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00075dd0;
        }
    }
L_00075d44:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00075d48:;
    {
        goto L_00075d80;
    }
L_00075d4c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x10u);
    }
L_00075d50:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075d54:;
    {
        cpu->r[0] = rd8(cpu->r[12] + cpu->r[0]);
    }
L_00075d58:;
    {
        wr8(cpu->r[10] + cpu->r[2], cpu->r[0]);
    }
L_00075d5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00075d60:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075d64:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075d68:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_00075d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00075d70:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_00075d74:;
    {
        cpu->r[10] = rd16(cpu->r[12] + + 0x14u);
    }
L_00075d78:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_00075d7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00075dcc;
        }
    }
L_00075d80:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075d84:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00075d88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075d4c;
        }
    }
L_00075d8c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00075d90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00075d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075da0;
        }
    }
L_00075d98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00075d9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00076060;
        }
    }
L_00075da0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075da4:;
    {
        cpu->r[14] = 0x00075da8u; fn_000755bc(cpu);
    }
L_00075da8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075dac:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075db0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00075db4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075db8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00075dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000760c4;
        }
    }
L_00075dc0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075dc4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075dc8:;
    {
        goto L_00075d4c;
    }
L_00075dcc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00075dd0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00075dd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075de4;
        }
    }
L_00075ddc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00075de0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00076350;
        }
    }
L_00075de4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x14u);
    }
L_00075de8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075dec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00075df0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_00075df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a20;
        }
    }
L_00075df8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00075dfc:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[2]);
    }
L_00075e00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000049u, 0, 0);
    }
L_00075e04:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_00075e08:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x1cu);
    }
L_00075e0c:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_00075e10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076304;
        }
    }
L_00075e18:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075e1c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00075e20:;
    {
        goto L_00075e54;
    }
L_00075e24:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075e28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075e2c:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x1cu);
    }
L_00075e30:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00075e34:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075e38:;
    {
        cpu->r[0] = rd8(cpu->r[9] + cpu->r[0]);
    }
L_00075e3c:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[10]);
    }
L_00075e40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075e44:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_00075e48:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_00075e4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075ebc;
        }
    }
L_00075e50:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075e54:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075e58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00075e5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
        }
    }
L_00075e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075e24;
        }
    }
L_00075e64:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x2cu);
    }
L_00075e68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075e78;
        }
    }
L_00075e70:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00075e74:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0007608c;
        }
    }
L_00075e78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075e7c:;
    {
        cpu->r[14] = 0x00075e80u; fn_000755bc(cpu);
    }
L_00075e80:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075e84:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075e88:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075e8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00075e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076410;
        }
    }
L_00075e94:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075e98:;
    {
        goto L_00075e24;
    }
L_00075e9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075a74;
        }
    }
L_00075ea4:;
    {
        cpu->r[3] = rd32(0x00075eacu + + 0x64cu);
    }
L_00075ea8:;
    {
        cpu->r[0] = (~0x00000004u);
    }
L_00075eac:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00075eb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00075eb4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00075eb8:;
    {
        goto L_0007598c;
    }
L_00075ebc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00075ec0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00075ec4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075ec8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00075ecc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075edc;
        }
    }
L_00075ed4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00075ed8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00076310;
        }
    }
L_00075edc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00075ee0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_00075ee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a28;
        }
    }
L_00075ee8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075eec:;
    {
        cpu->r[2] = 0x0000005bu;
    }
L_00075ef0:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[10]);
    }
L_00075ef4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_00075ef8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x24u);
    }
L_00075efc:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_00075f00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000762d8;
        }
    }
L_00075f08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075f0c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00075f10:;
    {
        goto L_00075f44;
    }
L_00075f14:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00075f18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075f1c:;
    {
        cpu->r[9] = rd32(cpu->r[10] + + 0x24u);
    }
L_00075f20:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00075f24:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075f28:;
    {
        cpu->r[0] = rd8(cpu->r[9] + cpu->r[0]);
    }
L_00075f2c:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[10]);
    }
L_00075f30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00075f34:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_00075f38:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_00075f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075f8c;
        }
    }
L_00075f40:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075f44:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075f48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00075f4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
        }
    }
L_00075f50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075f14;
        }
    }
L_00075f54:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x2cu);
    }
L_00075f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00075f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075f68;
        }
    }
L_00075f60:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00075f64:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000760a8;
        }
    }
L_00075f68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00075f6c:;
    {
        cpu->r[14] = 0x00075f70u; fn_000755bc(cpu);
    }
L_00075f70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00075f74:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075f78:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00075f7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00075f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076408;
        }
    }
L_00075f84:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075f88:;
    {
        goto L_00075f14;
    }
L_00075f8c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00075f90:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00075f94:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00075f98:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00075f9c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075fa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075fac;
        }
    }
L_00075fa4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00075fa8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000762e4;
        }
    }
L_00075fac:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00075fb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000067u;
        }
    }
L_00075fb4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
        }
    }
L_00075fb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_00075fbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
        }
    }
L_00075fc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00075a30;
        }
    }
L_00075fc4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x2cu);
    }
L_00075fc8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00075fcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000071u;
        }
    }
L_00075fd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
        }
    }
L_00075fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00075a38;
        }
    }
L_00075fd8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_00075fdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00075fe0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00075fe4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00076330;
        }
    }
L_00075fe8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x30u);
    }
L_00075fec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00075ff0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x8u);
    }
L_00075ff4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00075ff8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00075ffc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00076000:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00076004:;
    {
        wr8(cpu->r[9] + cpu->r[3], cpu->r[10]);
    }
L_00076008:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_0007600c:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076010:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[3] = v;
    }
L_00076014:;
    {
        wr8(cpu->r[10] + cpu->r[12], cpu->r[3]);
    }
L_00076018:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[14]);
    }
L_0007601c:;
    {
        cpu->r[14] = 0x00076020u; fn_00074510(cpu);
    }
L_00076020:;
    {
        cpu->r[3] = 0x00000071u;
    }
L_00076024:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_00076028:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0007602c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00076030:;
    {
        goto L_00075a38;
    }
L_00076034:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076038:;
    {
        goto L_00075e08;
    }
L_0007603c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00076040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00076044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000759d0;
        }
    }
L_00076048:;
    {
        cpu->r[3] = rd32(0x00076050u + + 0x4a8u);
    }
L_0007604c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00076050:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00076054:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_00076058:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0007605c:;
    {
        goto L_0007598c;
    }
L_00076060:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076064:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00076068:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0007606c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00076070:;
    {
        cpu->r[14] = 0x00076074u; fn_00074510(cpu);
    }
L_00076074:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00076078:;
    {
        goto L_00075da0;
    }
L_0007607c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076080:;
    {
        goto L_00075fc4;
    }
L_00076084:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076088:;
    {
        goto L_00075ef8;
    }
L_0007608c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076090:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00076094:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_00076098:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0007609c:;
    {
        cpu->r[14] = 0x000760a0u; fn_00074510(cpu);
    }
L_000760a0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_000760a4:;
    {
        goto L_00075e78;
    }
L_000760a8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_000760ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000760b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_000760b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000760b8:;
    {
        cpu->r[14] = 0x000760bcu; fn_00074510(cpu);
    }
L_000760bc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_000760c0:;
    {
        goto L_00075f68;
    }
L_000760c4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000760c8:;
    {
        goto L_00075dd0;
    }
L_000760cc:;
    {
        cpu->r[3] = 0x00000049u;
    }
L_000760d0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_000760d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_000760d8:;
    {
        goto L_00075e08;
    }
L_000760dc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000760e0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000760e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000760e8:;
    {
        cpu->r[14] = 0x000760ecu; fn_00074510(cpu);
    }
L_000760ec:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x14u);
    }
L_000760f0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x8u);
    }
L_000760f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000760f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000760fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00076100:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00076104:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_00076108:;
    {
        wr8(cpu->r[9] + cpu->r[12], cpu->r[0]);
    }
L_0007610c:;
    {
        cpu->r[0] = (~0x00000074u);
    }
L_00076110:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076114:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[0]);
    }
L_00076118:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000007du, 0, 0);
    }
L_0007611c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076120:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_00076124:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076128:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0007612c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00076130:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076448;
        }
    }
L_00076134:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00076138:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007613c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x1cu);
    }
L_00076140:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00076144:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00076148:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0007614c:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00076150:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_00076154:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00076158:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0007615c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00076160:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_00076164:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00076168:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x10u);
    }
L_0007616c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x24u);
    }
L_00076170:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00076174:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00076178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000004u;
        }
    }
L_0007617c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00076180:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00076184:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00076188:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0007618c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000008u;
        }
    }
L_00076190:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_00076194:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00076198:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0007619c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000761a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000010u;
        }
    }
L_000761a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000761a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_000761ac:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_000761b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000761b4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000761b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000761bc:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[12]);
    }
L_000761c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000761c4:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000761c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000761cc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000761d0:;
    {
        cpu->r[9] = rd32(cpu->r[9] + + 0x4u);
    }
L_000761d4:;
    {
        wr8(cpu->r[1] + cpu->r[0], cpu->r[9]);
    }
L_000761d8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000761dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000761e0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x8u);
    }
L_000761e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000761e8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
    }
L_000761ec:;
    {
        wr8(cpu->r[9] + cpu->r[1], cpu->r[0]);
    }
L_000761f0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000761f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_000761f8:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x6u);
    }
L_000761fc:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_00076200:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076204:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076208:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x7u);
    }
L_0007620c:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[1]);
    }
L_00076210:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x84u);
    }
L_00076214:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_00076218:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_0007621c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076220:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00076224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076238;
        }
    }
L_00076228:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x88u);
    }
L_0007622c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00076230:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000764d8;
        }
    }
L_00076234:;
    {
        cpu->r[10] = 0x00000004u;
    }
L_00076238:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[10]);
    }
L_0007623c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00076240:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076244:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00076248:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0007624c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076250:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00076254:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_00076258:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0007625c:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_00076260:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_00076264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00076268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000762a0;
        }
    }
L_0007626c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x14u);
    }
L_00076270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00076274:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076278:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0007627c:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_00076280:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00076284:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_00076288:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007628c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00076290:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
    }
L_00076294:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_00076298:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0007629c:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[1]);
    }
L_000762a0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x2cu);
    }
L_000762a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000762a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000762c4;
        }
    }
L_000762ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_000762b0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000762b4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x14u);
    }
L_000762b8:;
    {
        cpu->r[14] = 0x000762bcu; fn_00074510(cpu);
    }
L_000762bc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_000762c0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_000762c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000762c8:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[3]);
    }
L_000762cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000045u, 0, 0);
    }
L_000762d0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_000762d4:;
    {
        goto L_00075d20;
    }
L_000762d8:;
    {
        cpu->r[2] = 0x00000067u;
    }
L_000762dc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_000762e0:;
    {
        goto L_00075fc4;
    }
L_000762e4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_000762e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000762ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_000762f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000762f4:;
    {
        cpu->r[14] = 0x000762f8u; fn_00074510(cpu);
    }
L_000762f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_000762fc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00076300:;
    {
        goto L_00075fac;
    }
L_00076304:;
    {
        cpu->r[2] = 0x0000005bu;
    }
L_00076308:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_0007630c:;
    {
        goto L_00075ef8;
    }
L_00076310:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076314:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00076318:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0007631c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00076320:;
    {
        cpu->r[14] = 0x00076324u; fn_00074510(cpu);
    }
L_00076324:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00076328:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007632c:;
    {
        goto L_00075edc;
    }
L_00076330:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00076334:;
    {
        cpu->r[14] = 0x00076338u; fn_000755bc(cpu);
    }
L_00076338:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0007633c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_00076340:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00076344:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00076348:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00075a38;
        }
    }
L_0007634c:;
    {
        goto L_00075fe8;
    }
L_00076350:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076354:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00076358:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0007635c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00076360:;
    {
        cpu->r[14] = 0x00076364u; fn_00074510(cpu);
    }
L_00076364:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00076368:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0007636c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00076370:;
    {
        goto L_00075de4;
    }
L_00076374:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00076378:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007637c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00076380:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00076384:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00076388:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0007638c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00076390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00076394:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x30u);
    }
L_00076398:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0007639c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000763a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000763a8:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 8u, &shc); cpu->r[10] = v;
    }
L_000763ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000763b0:;
    {
        wr8(cpu->r[8] + cpu->r[5], cpu->r[10]);
    }
L_000763b4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763b8:;
    {
        cpu->r[8] = rd16(cpu->r[4] + + 0x32u);
    }
L_000763bc:;
    {
        wr8(cpu->r[5] + cpu->r[14], cpu->r[8]);
    }
L_000763c0:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763c4:;
    {
        cpu->r[5] = rd8(cpu->r[4] + + 0x33u);
    }
L_000763c8:;
    {
        wr8(cpu->r[14] + cpu->r[12], cpu->r[5]);
    }
L_000763cc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763d0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_000763d4:;
    {
        wr8(cpu->r[12] + cpu->r[0], cpu->r[14]);
    }
L_000763d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_000763dc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763e0:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[12] = v;
    }
L_000763e4:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_000763e8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763ec:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0xau);
    }
L_000763f0:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_000763f4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_000763f8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xbu);
    }
L_000763fc:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00076400:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[7]);
    }
L_00076404:;
    {
        goto L_00075bb0;
    }
L_00076408:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0007640c:;
    {
        goto L_00075f94;
    }
L_00076410:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00076414:;
    {
        goto L_00075ec4;
    }
L_00076418:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4cu);
    }
L_0007641c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00076420:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x44u);
    }
L_00076424:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x80000001u, 1, 0);
    }
L_00076428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0007642c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00076430:;
    {
        wr16(cpu->r[3] + - 0x2u, cpu->r[8]);
    }
L_00076434:;
    {
        cpu->r[14] = 0x00076438u; imp_memset(cpu); /* memset */
    }
L_00076438:;
    {
        goto L_00075b28;
    }
L_0007643c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00076440:;
    {
        cpu->r[14] = 0x00076444u; fn_0007c81c(cpu);
    }
L_00076444:;
    {
        goto L_00075b28;
    }
L_00076448:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x8u);
    }
L_0007644c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00076450:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00076454:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00076458:;
    {
        wr8(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_0007645c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00076460:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076464:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00076468:;
    {
        wr8(cpu->r[9] + cpu->r[12], cpu->r[2]);
    }
L_0007646c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076470:;
    {
        wr8(cpu->r[12] + cpu->r[0], cpu->r[2]);
    }
L_00076474:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076478:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0007647c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076480:;
    {
        wr8(cpu->r[1] + cpu->r[10], cpu->r[2]);
    }
L_00076484:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x84u);
    }
L_00076488:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0007648c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_00076490:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076494:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00076498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000764ac;
        }
    }
L_0007649c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x88u);
    }
L_000764a0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000764a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000764e4;
        }
    }
L_000764a8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000764ac:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000764b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000764b4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_000764b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000764bc:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_000764c0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000764c4:;
    {
        wr8(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_000764c8:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_000764cc:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_000764d0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_000764d4:;
    {
        goto L_00075a38;
    }
L_000764d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000764dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00076238;
        }
    }
L_000764e0:;
    {
        goto L_00076234;
    }
L_000764e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000764e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000764ac;
        }
    }
L_000764ec:;
    {
        goto L_000764a8;
    }
}

/* deflateParams @ 000764fc (arm) */
void fn_000764fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000764fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00076500:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00076504:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00076508:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0007650c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007651c;
        }
    }
L_00076510:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00076514:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00076518:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007651cu)) return;
    }
L_0007651c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00076520:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00076524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076510;
        }
    }
L_00076528:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0007652c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00076530:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000006u;
        }
    }
L_00076534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076544;
        }
    }
L_00076538:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_0007653c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00076540:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00076544:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00076548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00076510;
        }
    }
L_0007654c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_00076550:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00076510;
        }
    }
L_00076554:;
    {
        cpu->r[3] = rd32(0x0007655cu + + 0x90u);
    }
L_00076558:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_0007655c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_00076560:;
    {
        cpu->r[3] = add_flags(cpu, 0x00076568u, cpu->r[3], 0, 0);
    }
L_00076564:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[3]; cpu->r[6] = v;
    }
L_00076568:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4] + cpu->r[3]; cpu->r[3] = v;
    }
L_0007656c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_00076570:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00076574:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00076578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00076588;
        }
    }
L_0007657c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00076580:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00076584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000765d4;
        }
    }
L_00076588:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007658c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00076590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000765cc;
        }
    }
L_00076594:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00076598:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[4]);
    }
L_0007659c:;
    {
        cpu->r[3] = rd32(0x000765a4u + + 0x4cu);
    }
L_000765a0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4]; cpu->r[4] = v;
    }
L_000765a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000765acu, cpu->r[3], 0, 0);
    }
L_000765a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000765ac:;
    {
        cpu->r[4] = rd16(cpu->r[3] + cpu->r[4]);
    }
L_000765b0:;
    {
        cpu->r[12] = rd16(cpu->r[1] + + 0x2u);
    }
L_000765b4:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x6u);
    }
L_000765b8:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x4u);
    }
L_000765bc:;
    {
        wr32(cpu->r[5] + + 0x8cu, cpu->r[4]);
    }
L_000765c0:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[12]);
    }
L_000765c4:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[1]);
    }
L_000765c8:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_000765cc:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[2]);
    }
L_000765d0:;
    {
        goto L_00076514;
    }
L_000765d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000765d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000765dc:;
    {
        cpu->r[14] = 0x000765e0u; fn_0007596c(cpu);
    }
L_000765e0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000765e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000765e8:;
    {
        goto L_0007658c;
    }
}

/* deflateBound @ 0007719c (arm) */
void fn_0007719c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007719c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_000771a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_000771a4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000771a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000003fu, 0, 0);
    }
L_000771ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000771b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 3, 3u, &shc), 0, 0);
    }
L_000771b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 3, 6u, &shc), 0, 0);
    }
L_000771b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000771d4;
        }
    }
L_000771bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000771c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000771c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000771d4;
        }
    }
L_000771c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000771cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_000771d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000771dc;
        }
    }
L_000771d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000771d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000771dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x50u);
    }
L_000771e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000771e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000771d4;
        }
    }
L_000771e8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000771ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000771f0:;
    {
        return fn_0007442c(cpu);
    }
}

/* deflateReset @ 000771f4 (arm) */
void fn_000771f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000771f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000771f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000771fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077208;
        }
    }
L_00077200:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00077204:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00077208u)) return;
    }
L_00077208:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0007720c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00077210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077200;
        }
    }
L_00077214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00077218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007721c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077200;
        }
    }
L_00077220:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00077224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00077228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077200;
        }
    }
L_0007722c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00077230:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00077234:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00077238:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0007723c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_00077240:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00077244:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_00077248:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_0007724c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00077250:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[1]);
    }
L_00077254:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00077258:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0007725c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x18u, cpu->r[2]);
        }
    }
L_00077260:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0007732c;
        }
    }
L_00077264:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000071u;
        }
    }
L_00077268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007732c;
        }
    }
L_0007726c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00077270:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00077274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077334;
        }
    }
L_00077278:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007727c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00077280:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00077284:;
    {
        cpu->r[14] = 0x00077288u; fn_0007406c(cpu);
    }
L_00077288:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0007728c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00077290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00077294:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[4]);
    }
L_00077298:;
    {
        cpu->r[14] = 0x0007729cu; fn_0007b5c8(cpu);
    }
L_0007729c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000772a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000772a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000772a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000772ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x80000001u, 1, 0);
    }
L_000772b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000772b4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000772b8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000772bc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000772c0:;
    {
        wr16(cpu->r[12] + - 0x2u, cpu->r[14]);
    }
L_000772c4:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_000772c8:;
    {
        cpu->r[14] = 0x000772ccu; imp_memset(cpu); /* memset */
    }
L_000772cc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x84u);
    }
L_000772d0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000772d4:;
    {
        cpu->r[3] = rd32(0x000772dcu + + 0x6cu);
    }
L_000772d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000772dc:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[4]);
    }
L_000772e0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[12]; cpu->r[12] = v;
    }
L_000772e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000772ecu, cpu->r[3], 0, 0);
    }
L_000772e8:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[1]);
    }
L_000772ec:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[4]);
    }
L_000772f0:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[4]);
    }
L_000772f4:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[4]);
    }
L_000772f8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000772fc:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[1]);
    }
L_00077300:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00077304:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[4]);
    }
L_00077308:;
    {
        cpu->r[6] = rd16(cpu->r[3] + cpu->r[12]);
    }
L_0007730c:;
    {
        cpu->r[3] = rd16(cpu->r[2] + + 0x6u);
    }
L_00077310:;
    {
        cpu->r[12] = rd16(cpu->r[2] + + 0x2u);
    }
L_00077314:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x4u);
    }
L_00077318:;
    {
        wr32(cpu->r[5] + + 0x8cu, cpu->r[6]);
    }
L_0007731c:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[12]);
    }
L_00077320:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[2]);
    }
L_00077324:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_00077328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007732cu)) return;
    }
L_0007732c:;
    {
        cpu->r[3] = 0x0000002au;
    }
L_00077330:;
    {
        goto L_0007726c;
    }
L_00077334:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00077338:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0007733c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00077340:;
    {
        cpu->r[14] = 0x00077344u; fn_00074510(cpu);
    }
L_00077344:;
    {
        goto L_00077288;
    }
}

/* deflateInit2_ @ 0007734c (arm) */
void fn_0007734c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0007734c:;
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
L_00077350:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00077354:;
    {
        cpu->r[4] = rd32(0x0007735cu + + 0x2a4u);
    }
L_00077358:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0007735c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00077360:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00077364:;
    {
        cpu->r[4] = add_flags(cpu, 0x0007736cu, cpu->r[4], 0, 0);
    }
L_00077368:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_0007736c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00077370:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_00077374:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00077378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077388;
        }
    }
L_0007737c:;
    {
        cpu->r[0] = (~0x00000005u);
    }
L_00077380:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00077384:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00077388u)) return;
    }
L_00077388:;
    {
        cpu->r[0] = rd8(cpu->r[12]);
    }
L_0007738c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000031u, 1, 1);
    }
L_00077390:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[1], 0x00000038u, 1, 1);
        }
    }
L_00077394:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00077398:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0007739c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007737c;
        }
    }
L_000773a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000773a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000773b0;
        }
    }
L_000773a8:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000773ac:;
    {
        goto L_00077380;
    }
L_000773b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_000773b4:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[1]);
    }
L_000773b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000773bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775c4;
        }
    }
L_000773c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_000773c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000773c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775b4;
        }
    }
L_000773cc:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_000773d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000006u;
        }
    }
L_000773d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000773d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_000773dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000773e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000773f4;
        }
    }
L_000773e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000773e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_000773ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
        }
    }
L_000773f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000002u;
        }
    }
L_000773f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000773f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000773fc:;
    {
        if (cond_test(cpu, 10)) {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
        }
    }
L_00077400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000773a8;
        }
    }
L_00077404:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00077408:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0007740c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00077410:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_00077414:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_00077418:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007741c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000773a8;
        }
    }
L_00077420:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_00077424:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00077428:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0007742c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[6], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00077430:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000773a8;
        }
    }
L_00077434:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 31u, &shc); cpu->r[2] = v;
    }
L_00077438:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 1);
    }
L_0007743c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_00077440:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00077444:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00077448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000773a8;
        }
    }
L_0007744c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00077450:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_00077454:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000009u;
        }
    }
L_00077458:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0007745c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00077460:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000016c0u, 0, 0);
    }
L_00077464:;
    {
        cpu->r[14] = 0x0007746cu;
    }
L_00077468:;
    {
        uint32_t t = rd32(cpu->r[5] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0007746cu)) return;
    }
L_0007746c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00077470:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775f8;
        }
    }
L_00077478:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_0007747c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00077480:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000007u, 0, 0);
    }
L_00077484:;
    {
        wr32(cpu->r[10] + + 0x18u, cpu->r[9]);
    }
L_00077488:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0007748c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00077490:;
    {
        wr32(cpu->r[10] + + 0x30u, cpu->r[3]);
    }
L_00077494:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00077498:;
    {
        wr32(cpu->r[10] + + 0x4cu, cpu->r[12]);
    }
L_0007749c:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[0]);
    }
L_000774a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000774a4:;
    {
        wr32(cpu->r[10] + + 0x50u, cpu->r[2]);
    }
L_000774a8:;
    {
        wr32(cpu->r[10] + + 0x54u, cpu->r[0]);
    }
L_000774ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_000774b0:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[10]);
    }
L_000774b4:;
    {
        wr32(cpu->r[10] + + 0x34u, cpu->r[0]);
    }
L_000774b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000009u, 0, 0);
    }
L_000774bc:;
    {
        wr32(cpu->r[10], cpu->r[5]);
    }
L_000774c0:;
    {
        wr32(cpu->r[10] + + 0x2cu, cpu->r[9]);
    }
L_000774c4:;
    {
        cpu->r[14] = 0x000774c8u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000774c8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000774cc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000774d0:;
    {
        wr32(cpu->r[10] + + 0x58u, cpu->r[0]);
    }
L_000774d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_000774d8:;
    {
        cpu->r[14] = 0x000774e0u;
    }
L_000774dc:;
    {
        uint32_t t = rd32(cpu->r[5] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000774e0u)) return;
    }
L_000774e0:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x2cu);
    }
L_000774e4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000774e8:;
    {
        wr32(cpu->r[10] + + 0x38u, cpu->r[0]);
    }
L_000774ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_000774f0:;
    {
        cpu->r[14] = 0x000774f8u;
    }
L_000774f4:;
    {
        uint32_t t = rd32(cpu->r[5] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000774f8u)) return;
    }
L_000774f8:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x4cu);
    }
L_000774fc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00077500:;
    {
        wr32(cpu->r[10] + + 0x40u, cpu->r[0]);
    }
L_00077504:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_00077508:;
    {
        cpu->r[14] = 0x00077510u;
    }
L_0007750c:;
    {
        uint32_t t = rd32(cpu->r[5] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00077510u)) return;
    }
L_00077510:;
    {
        cpu->r[2] = 0x0000169cu;
    }
L_00077514:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000006u, 0, 0);
    }
L_00077518:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0007751c:;
    {
        wr32(cpu->r[10] + cpu->r[2], cpu->r[1]);
    }
L_00077520:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00077524:;
    {
        wr32(cpu->r[10] + + 0x44u, cpu->r[0]);
    }
L_00077528:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x28u);
    }
L_0007752c:;
    {
        cpu->r[14] = 0x00077534u;
    }
L_00077530:;
    {
        uint32_t t = rd32(cpu->r[5] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00077534u)) return;
    }
L_00077534:;
    {
        cpu->r[1] = 0x0000169cu;
    }
L_00077538:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x38u);
    }
L_0007753c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_00077540:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00077544:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00077548:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[2]);
    }
L_0007754c:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[0]);
    }
L_00077550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775d8;
        }
    }
L_00077554:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x40u);
    }
L_00077558:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0007755c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775d8;
        }
    }
L_00077560:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x44u);
    }
L_00077564:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00077568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775d8;
        }
    }
L_0007756c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000775d8;
        }
    }
L_00077574:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00077578:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[1] = v;
    }
L_0007757c:;
    {
        wr32(cpu->r[10] + + 0x84u, cpu->r[6]);
    }
L_00077580:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[2] = v;
    }
L_00077584:;
    {
        cpu->r[3] = 0x000016a4u;
    }
L_00077588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0007758c:;
    {
        wr32(cpu->r[10] + + 0x88u, cpu->r[8]);
    }
L_00077590:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_00077594:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_00077598:;
    {
        wr8(cpu->r[10] + + 0x24u, cpu->r[3]);
    }
L_0007759c:;
    {
        cpu->r[3] = 0x00001698u;
    }
L_000775a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000775a4:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_000775a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000775ac:;
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
L_000775b0:;
    {
        return fn_000771f4(cpu);
    }
L_000775b4:;
    {
        cpu->r[1] = rd32(0x000775bcu + + 0x48u);
    }
L_000775b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000775bc:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[1]);
    }
L_000775c0:;
    {
        goto L_000773cc;
    }
L_000775c4:;
    {
        cpu->r[1] = rd32(0x000775ccu + + 0x3cu);
    }
L_000775c8:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_000775cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000775d0:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[1]);
    }
L_000775d4:;
    {
        goto L_000773c0;
    }
L_000775d8:;
    {
        cpu->r[3] = 0x0000029au;
    }
L_000775dc:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[3]);
    }
L_000775e0:;
    {
        cpu->r[3] = rd32(0x000775e8u + + 0x24u);
    }
L_000775e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000775e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000775ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_000775f0:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_000775f4:;
    {
        cpu->r[14] = 0x000775f8u; fn_00074f04(cpu);
    }
L_000775f8:;
    {
        cpu->r[0] = (~0x00000003u);
    }
L_000775fc:;
    {
        goto L_00077380;
    }
}

/* deflateInit_ @ 00077610 (arm) */
void fn_00077610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00077610:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00077614:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00077618:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_0007761c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00077620:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00077624:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00077628:;
    {
        cpu->r[3] = 0x0000000fu;
    }
L_0007762c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00077630:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00077634:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00077638:;
    {
        cpu->r[14] = 0x0007763cu; fn_0007734c(cpu);
    }
L_0007763c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00077640:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00077644u)) return;
    }
}

/* inflateBackInit_ @ 00077644 (arm) */
void fn_00077644(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00077644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00077648:;
    {
        cpu->r[12] = rd32(0x00077650u + + 0xe8u);
    }
L_0007764c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00077650:;
    {
        cpu->r[12] = add_flags(cpu, 0x00077658u, cpu->r[12], 0, 0);
    }
L_00077654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00077658:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0007765c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00077660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007766c;
        }
    }
L_00077664:;
    {
        cpu->r[0] = (~0x00000005u);
    }
L_00077668:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0007766cu)) return;
    }
L_0007766c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00077670:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00077674:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_00077678:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[2], 0x00000038u, 1, 1);
        }
    }
L_0007767c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077664;
        }
    }
L_00077680:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00077684:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_00077688:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077694;
        }
    }
L_0007768c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00077690:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00077694u)) return;
    }
L_00077694:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_00077698:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0007769c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000776a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_000776a4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_000776a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000776ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0007768c;
        }
    }
L_000776b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_000776b4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_000776b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000776bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000776d4;
        }
    }
L_000776c0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_000776c4:;
    {
        cpu->r[3] = rd32(0x000776ccu + + 0x70u);
    }
L_000776c8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000776cc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000776d0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_000776d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_000776d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000776dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(0x000776e4u + + 0x5cu);
        }
    }
L_000776e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_000776e4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
        }
    }
L_000776e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_000776ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000776f0:;
    {
        cpu->r[2] = 0x00002530u;
    }
L_000776f4:;
    {
        cpu->r[14] = 0x000776f8u; guest_call(cpu, cpu->r[3]);
    }
L_000776f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000776fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_00077700:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00077704u)) return;
        }
    }
L_00077704:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00077708:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0007770c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00077710:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00077714:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00077718:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[5]);
    }
L_0007771c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_00077720:;
    {
        cpu->r[1] = 0x00008000u;
    }
L_00077724:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00077728:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_0007772c:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[6]);
    }
L_00077730:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[2]);
    }
L_00077734:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00077738u)) return;
    }
}

/* inflateBackEnd @ 00077744 (arm) */
void fn_00077744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00077744:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00077748:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0007774c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00077758;
        }
    }
L_00077750:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00077754:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00077758u)) return;
    }
L_00077758:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0007775c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00077760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077750;
        }
    }
L_00077764:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00077768:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0007776c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00077750;
        }
    }
L_00077770:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00077774:;
    {
        cpu->r[14] = 0x00077778u; guest_call(cpu, cpu->r[3]);
    }
L_00077778:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0007777c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00077780:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00077784u)) return;
    }
}
