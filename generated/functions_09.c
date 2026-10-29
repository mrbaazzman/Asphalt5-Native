#include "functions.h"

/* sub_00071a5c @ 00071a5c (arm) */
void fn_00071a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071a68 @ 00071a68 (arm) */
void fn_00071a68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071a74 @ 00071a74 (arm) */
void fn_00071a74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071a80 @ 00071a80 (arm) */
void fn_00071a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071a8c @ 00071a8c (arm) */
void fn_00071a8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071a98 @ 00071a98 (arm) */
void fn_00071a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071aa4 @ 00071aa4 (arm) */
void fn_00071aa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ab0 @ 00071ab0 (arm) */
void fn_00071ab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071abc @ 00071abc (arm) */
void fn_00071abc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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

/* sub_00071ac8 @ 00071ac8 (arm) */
void fn_00071ac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
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
