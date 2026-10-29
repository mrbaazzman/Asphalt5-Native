#include "functions.h"

/* _ZN11GS_MainMenu17GarageRenderCar3DEiP8Vector3db @ 00112af0 (arm) */
void fn_00112af0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00112af0:;
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
L_00112af4:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00112af8:;
    {
        cpu->r[4] = rd32(0x00112b00u + + 0x45cu);
    }
L_00112afc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00112b00:;
    {
        cpu->r[3] = rd32(0x00112b08u + + 0x458u);
    }
L_00112b04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_00112b08:;
    {
        cpu->r[4] = add_flags(cpu, 0x00112b10u, cpu->r[4], 0, 0);
    }
L_00112b0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00112b10:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00112b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00112b18:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_00112b1c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_00112b20:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00112b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001132f4;
        }
    }
L_00112b28:;
    {
        cpu->r[12] = rd32(0x00112b30u + + 0x460u);
    }
L_00112b2c:;
    {
        cpu->r[2] = rd32(0x00112b34u + + 0x430u);
    }
L_00112b30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00112b34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00112b38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00112b3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00112b40:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00112b44:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00112b48:;
    {
        vfp_sync_flags(cpu);
    }
L_00112b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112b74;
        }
    }
L_00112b50:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00112b54:;
    {
        vfp_sync_flags(cpu);
    }
L_00112b58:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00113474;
        }
    }
L_00112b5c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00112b64u + + 0x3e4u);
    }
L_00112b60:;
    {
        vfp_vadd(cpu, 14, 14, 13);
    }
L_00112b64:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00112b68:;
    {
        vfp_sync_flags(cpu);
    }
L_00112b6c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00112b70:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00112b74:;
    {
        cpu->r[14] = rd32(0x00112b7cu + + 0x41cu);
    }
L_00112b78:;
    {
        cpu->r[2] = rd32(0x00112b80u + + 0x3e8u);
    }
L_00112b7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112b80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00112b84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00112b88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00112b8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00112b90:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00112b94:;
    {
        vfp_sync_flags(cpu);
    }
L_00112b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112bc0;
        }
    }
L_00112b9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00112ba0:;
    {
        vfp_sync_flags(cpu);
    }
L_00112ba4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00113490;
        }
    }
L_00112ba8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00112bb0u + + 0x39cu);
    }
L_00112bac:;
    {
        vfp_vadd(cpu, 14, 14, 13);
    }
L_00112bb0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00112bb4:;
    {
        vfp_sync_flags(cpu);
    }
L_00112bb8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00112bbc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00112bc0:;
    {
        cpu->r[10] = rd32(0x00112bc8u + + 0x3a4u);
    }
L_00112bc4:;
    {
        cpu->r[2] = rd32(0x00112bccu + + 0x3a4u);
    }
L_00112bc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00112bcc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00112bd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00112bd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00112bd8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00112bdc:;
    {
        vfp_sync_flags(cpu);
    }
L_00112be0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00113418;
        }
    }
L_00112be4:;
    {
        cpu->r[7] = rd32(0x00112becu + + 0x388u);
    }
L_00112be8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00112bec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e0u);
    }
L_00112bf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00112bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001133dc;
        }
    }
L_00112bfc:;
    {
        cpu->r[14] = rd32(0x00112c04u + + 0x374u);
    }
L_00112c00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00112c08:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00112c0c:;
    {
        cpu->r[3] = 0x000002e2u;
    }
L_00112c10:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112c14:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00112c18:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_00112c1c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000026u, 1, 0);
    }
L_00112c20:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00112c24:;
    {
        cpu->r[14] = 0x00112c28u; fn_0012ed70(cpu);
    }
L_00112c28:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_00112c2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00112c34:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00112c38:;
    {
        cpu->r[3] = 0x000002e2u;
    }
L_00112c3c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000026u, 1, 0);
    }
L_00112c40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00112c44:;
    {
        cpu->r[14] = 0x00112c48u; fn_0012fa2c(cpu);
    }
L_00112c48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00112c4c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00112c50:;
    {
        cpu->r[14] = 0x00112c54u; fn_000960f4(cpu);
    }
L_00112c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00112c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001132b0;
        }
    }
L_00112c5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00112c60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00112c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c68:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00112c6c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000026u, 1, 0);
    }
L_00112c70:;
    {
        cpu->r[14] = 0x00112c74u; fn_0012df6c(cpu);
    }
L_00112c74:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00112c78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c7c:;
    {
        cpu->r[14] = 0x00112c80u; fn_0012df84(cpu);
    }
L_00112c80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c84:;
    {
        cpu->r[14] = 0x00112c88u; fn_0012df9c(cpu);
    }
L_00112c88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00112c8c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4268u << 16);
    }
L_00112c90:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00112c94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112c98:;
    {
        cpu->r[14] = 0x00112c9cu; fn_0012ec44(cpu);
    }
L_00112c9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112ca0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00112ca4:;
    {
        cpu->r[14] = 0x00112ca8u; fn_0012eab0(cpu);
    }
L_00112ca8:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_00112cac:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xcu);
    }
L_00112cb0:;
    {
        cpu->r[12] = 0x00001c38u;
    }
L_00112cb4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00112cb8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00112cbc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00112cc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112cc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112cc8:;
    {
        cpu->r[8] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00112ccc:;
    {
        cpu->r[14] = 0x00112cd0u; fn_00151aa0(cpu);
    }
L_00112cd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00112cd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112cd8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00112cdc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112ce0:;
    {
        cpu->r[11] = 0x000011e8u;
    }
L_00112ce4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00112ce8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00112cec:;
    {
        cpu->r[14] = 0x00112cf0u; fn_00151aa8(cpu);
    }
L_00112cf0:;
    {
        cpu->r[12] = rd32(0x00112cf8u + + 0x284u);
    }
L_00112cf4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00112cf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112cfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112d00:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x428cu << 16);
    }
L_00112d04:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00112d08:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00112d0c:;
    {
        cpu->r[14] = 0x00112d10u; fn_00151ab0(cpu);
    }
L_00112d10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112d14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112d18:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00112d1c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00112d20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x41a0u << 16);
    }
L_00112d24:;
    {
        cpu->r[14] = 0x00112d28u; fn_00151dc8(cpu);
    }
L_00112d28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112d2c:;
    {
        cpu->r[14] = 0x00112d30u; fn_00151c40(cpu);
    }
L_00112d30:;
    {
        cpu->r[12] = rd32(0x00112d38u + + 0x248u);
    }
L_00112d34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00112d38:;
    {
        cpu->r[14] = 0x00001314u;
    }
L_00112d3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00112d40:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00112d48u + + 0x264u);
    }
L_00112d44:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_00112d48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00112d4c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00112d50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112d54:;
    {
        cpu->r[14] = 0x00112d5cu;
    }
L_00112d58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112d5cu)) return;
    }
L_00112d5c:;
    {
        cpu->r[14] = rd32(0x00112d64u + + 0x220u);
    }
L_00112d60:;
    {
        cpu->r[1] = rd32(0x00112d68u + + 0x220u);
    }
L_00112d64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00112d68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00112d6c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_00112d70:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_00112d74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00112d78:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_00112d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112d80:;
    {
        cpu->r[14] = 0x00112d88u;
    }
L_00112d84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112d88u)) return;
    }
L_00112d88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112d8c:;
    {
        cpu->r[14] = 0x00112d90u; fn_0012e11c(cpu);
    }
L_00112d90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00112d94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00112d98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112d9c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_00112da0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_00112da4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00112da8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112dac:;
    {
        cpu->r[14] = 0x00112db4u;
    }
L_00112db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112db4u)) return;
    }
L_00112db4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112db8:;
    {
        cpu->r[14] = 0x00112dbcu; fn_00153600(cpu);
    }
L_00112dbc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00112dc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112dc4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112dc8:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00112dcc:;
    {
        cpu->r[14] = 0x00112dd0u; fn_00154734(cpu);
    }
L_00112dd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00112dd4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00112dd8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112ddc:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_00112de0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00112de4:;
    {
        cpu->r[14] = 0x00112de8u; fn_00154350(cpu);
    }
L_00112de8:;
    {
        cpu->r[1] = 0x00000fd0u;
    }
L_00112dec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112df0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4049u << 16);
    }
L_00112df4:;
    {
        cpu->r[14] = 0x00112df8u; fn_00154514(cpu);
    }
L_00112df8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112dfc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00112e00:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00112e04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc040u << 16);
    }
L_00112e08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112e0c:;
    {
        cpu->r[14] = 0x00112e10u; fn_00153e90(cpu);
    }
L_00112e10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00112e14:;
    {
        cpu->r[14] = 0x00112e18u; fn_000ea4dc(cpu);
    }
L_00112e18:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00112e1c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00112e20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112e28u + + 0x128u);
    }
L_00112e24:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00112e28:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00112e2c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_00112e30:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00112e34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_00112e38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00112e3c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112e40:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112e44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112e4cu + + 0x108u);
    }
L_00112e48:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[9]);
    }
L_00112e4c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00112e50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00112e54:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112e58:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00112e5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00112e60:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112e64:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_00112e68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00112e6c:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112e70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00112e74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112e7cu + + 0xdcu);
    }
L_00112e78:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00112e7c:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112e80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00112e84:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112e88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112e90u + + 0x110u);
    }
L_00112e8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112e90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112e98u + + 0x10cu);
    }
L_00112e94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112e98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112ea0u + + 0x108u);
    }
L_00112e9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112ea0:;
    {
        cpu->r[14] = 0x00112ea4u; fn_000b54a8(cpu);
    }
L_00112ea4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00112ea8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00112eac:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112eb0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112eb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00112eb8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112ebc:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112ec0:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112ec4:;
    {
        cpu->r[14] = 0x00112ec8u; fn_00153600(cpu);
    }
L_00112ec8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112ecc:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00112ed0:;
    {
        cpu->r[14] = 0x00112ed4u; fn_00154734(cpu);
    }
L_00112ed4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00112ed8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112edc:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_00112ee0:;
    {
        cpu->r[14] = 0x00112ee4u; fn_00154350(cpu);
    }
L_00112ee4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112ee8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00112eec:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00112ef0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112ef4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4040u << 16);
    }
L_00112ef8:;
    {
        cpu->r[14] = 0x00112efcu; fn_00153e90(cpu);
    }
L_00112efc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00112f00:;
    {
        cpu->r[14] = 0x00001c40u;
    }
L_00112f04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_00112f08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00112f0c:;
    {
        cpu->r[14] = 0x00112f10u; fn_00153600(cpu);
    }
L_00112f10:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00112f14:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_00112f18:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00112f1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00112f20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00112f24:;
    {
        cpu->r[14] = 0x00112f28u; fn_00154734(cpu);
    }
L_00112f28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00112f2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00112f30:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_00112f34:;
    {
        cpu->r[12] = 0x00001c40u;
    }
L_00112f38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00112f3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00112f40:;
    {
        cpu->r[14] = 0x00112f44u; fn_00154350(cpu);
    }
L_00112f44:;
    {
        goto L_00112fbc;
    }
L_00112fbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00112fc0:;
    {
        cpu->r[14] = 0x00112fc4u; fn_000ea4dc(cpu);
    }
L_00112fc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000134u, 0, 0);
    }
L_00112fc8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_00112fcc:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00112fd0:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[14]);
    }
L_00112fd4:;
    {
        cpu->r[14] = 0x00112fd8u; fn_00153624(cpu);
    }
L_00112fd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00112fdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000c60u, 0, 0);
    }
L_00112fe0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00112fe4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_00112fe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00112fec:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112ff0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00112ff4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00112ff8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00112ffc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113000:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00113004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00113008:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0011300c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113010:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_00113014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112fe8;
        }
    }
L_00113018:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0011301c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00113020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011303c;
        }
    }
L_00113024:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00113028:;
    {
        cpu->r[14] = 0x0011302cu; fn_000b2bc8(cpu);
    }
L_0011302c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00113030:;
    {
        cpu->r[14] = 0x00113034u; fn_0018ba20(cpu);
    }
L_00113034:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113038:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_0011303c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113040:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000cb0u, 0, 0);
    }
L_00113044:;
    {
        cpu->r[14] = 0x00113048u; fn_00153624(cpu);
    }
L_00113048:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0011304c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_00113050:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113058:;
    {
        cpu->r[7] = 0x00001c40u;
    }
L_0011305c:;
    {
        cpu->r[14] = 0x00113060u; fn_001123f0(cpu);
    }
L_00113060:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00113064:;
    {
        cpu->r[10] = 0x00001c4cu;
    }
L_00113068:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0011306c:;
    {
        cpu->r[14] = 0x00113070u; fn_000ea4dc(cpu);
    }
L_00113070:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00113074:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113078:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0011307c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113084:;
    {
        cpu->r[14] = 0x0011308cu;
    }
L_00113088:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011308cu)) return;
    }
L_0011308c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xb5cu);
    }
L_00113090:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00113094:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113098:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[3] = v;
    }
L_0011309c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_001130a0:;
    {
        wr32(cpu->r[8] + + 0xb5cu, cpu->r[3]);
    }
L_001130a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001130acu + - 0x10cu);
    }
L_001130a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001130ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001130b4u + - 0x118u);
    }
L_001130b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001130b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001130bcu + - 0x118u);
    }
L_001130b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001130bc:;
    {
        cpu->r[14] = 0x001130c0u; fn_000af474(cpu);
    }
L_001130c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_001130c4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xb5cu);
    }
L_001130c8:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_001130cc:;
    {
        wr32(cpu->r[8] + + 0xb5cu, cpu->r[3]);
    }
L_001130d0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_001130d4:;
    {
        cpu->r[14] = 0x001130d8u; fn_000978a8(cpu);
    }
L_001130d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001130dc:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_001130e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_001130e4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_001130e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001130ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001130f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001130f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x444u);
    }
L_001130f8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001130fc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00113100:;
    {
        cpu->r[14] = 0x00113104u; fn_000a439c(cpu);
    }
L_00113104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113440;
        }
    }
L_0011310c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x904u);
    }
L_00113110:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00113114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001134c8;
        }
    }
L_00113118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011311c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113124u + - 0x178u);
    }
L_00113120:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00113124:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00113128:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0011312c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00113130:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113134:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00113138:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011313c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113140:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113148:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011314c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00113150:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113154:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_00113158:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0011315c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00113160:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00113164:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[7]);
    }
L_00113168:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00113170u + - 0x1d0u);
    }
L_0011316c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00113170:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00113178u + - 0x1d4u);
    }
L_00113174:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0011317cu + - 0x1d4u);
    }
L_00113178:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0011317c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113180:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00113184:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00113188:;
    {
        cpu->r[14] = 0x0011318cu; fn_000b54a8(cpu);
    }
L_0011318c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113190:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00113194:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_00113198:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0011319c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001131a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001131a4:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[7]);
    }
L_001131a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001131ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001131b0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001131b4:;
    {
        cpu->r[14] = 0x001131b8u; fn_000afa90(cpu);
    }
L_001131b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001131bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001131c0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001131c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001131c8:;
    {
        cpu->r[7] = 0x00001288u;
    }
L_001131cc:;
    {
        cpu->r[14] = 0x001131d0u; fn_001123f0(cpu);
    }
L_001131d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001131d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001131d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001131e0u + - 0x234u);
    }
L_001131dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001131e0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001131e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001131e8:;
    {
        cpu->r[8] = 0x00000002u;
    }
L_001131ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_001131f0:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001131f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001131f8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001131fc:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00113200:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00113204:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00113208:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0011320c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113210:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00113214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113218:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011321c:;
    {
        cpu->r[14] = 0x00113220u; fn_00147cd8(cpu);
    }
L_00113220:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00113224:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[8]);
    }
L_00113228:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0011322c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00113230:;
    {
        cpu->r[14] = 0x00113234u; fn_00147cd8(cpu);
    }
L_00113234:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_00113238:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[8]);
    }
L_0011323c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00113240:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00113244:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113248:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011324c:;
    {
        cpu->r[14] = 0x00113254u;
    }
L_00113250:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113254u)) return;
    }
L_00113254:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113258:;
    {
        cpu->r[14] = 0x0011325cu; fn_0012dfe0(cpu);
    }
L_0011325c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00113260:;
    {
        cpu->r[3] = rd32(0x00113268u + - 0x2dcu);
    }
L_00113264:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113268:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0011326c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00113270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113274:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00113278:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0011327c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00113280:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00113284:;
    {
        cpu->r[14] = 0x00113288u; fn_0012ed70(cpu);
    }
L_00113288:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0011328c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113290:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00113294:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113298:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0011329c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001132a0:;
    {
        cpu->r[14] = 0x001132a4u; fn_0012fa2c(cpu);
    }
L_001132a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_001132a8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001132ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001132b0u)) return;
    }
L_001132b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001132b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001132b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001132bc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001132c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000026u, 1, 0);
    }
L_001132c4:;
    {
        cpu->r[14] = 0x001132c8u; fn_0012df6c(cpu);
    }
L_001132c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001132cc:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001132d0:;
    {
        cpu->r[14] = 0x001132d4u; fn_0012df84(cpu);
    }
L_001132d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001132d8:;
    {
        cpu->r[14] = 0x001132dcu; fn_0012df9c(cpu);
    }
L_001132dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001132e0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4248u << 16);
    }
L_001132e4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001132e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001132ec:;
    {
        cpu->r[14] = 0x001132f0u; fn_0012ec44(cpu);
    }
L_001132f0:;
    {
        goto L_00112c9c;
    }
L_001132f4:;
    {
        cpu->r[0] = rd32(0x001132fcu + - 0x36cu);
    }
L_001132f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113300u + - 0x350u);
    }
L_001132fc:;
    {
        cpu->r[2] = rd32(0x00113304u + - 0x370u);
    }
L_00113300:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00113304:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00113308:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011330c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00113310:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00113314:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00113318:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011331c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113320:;
    {
        vfp_sync_flags(cpu);
    }
L_00113324:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_00113328:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0011332c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00113330:;
    {
        vfp_sync_flags(cpu);
    }
L_00113334:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0011333cu + - 0x38cu);
        }
    }
L_00113338:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_0011333c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00113340:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113348u + - 0x394u);
    }
L_00113344:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_00113348:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0011334c:;
    {
        cpu->r[3] = rd32(0x00113354u + - 0x3bcu);
    }
L_00113350:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00113354:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00113358:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0011335c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113360:;
    {
        vfp_sync_flags(cpu);
    }
L_00113364:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00113404;
        }
    }
L_00113368:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0011336c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113370:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113378u + - 0x3c0u);
    }
L_00113374:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00113378:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011337c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113380:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00113398;
        }
    }
L_00113384:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00113388:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00113390u + + 0x1b0u);
    }
L_0011338c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00113390:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00113394:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113398:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001133a0u + + 0x1a8u);
    }
L_0011339c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001133a0:;
    {
        vfp_sync_flags(cpu);
    }
L_001133a4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001133fc;
        }
    }
L_001133a8:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001133ac:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001133b4u + + 0x18cu);
    }
L_001133b0:;
    {
        cpu->r[7] = rd32(0x001133b8u + + 0x1acu);
    }
L_001133b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001133b8:;
    {
        cpu->r[10] = rd32(0x001133c0u + + 0x1a8u);
    }
L_001133bc:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001133c0:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_001133c4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001133c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001133cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001133d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e0u);
    }
L_001133d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001133d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112bfc;
        }
    }
L_001133dc:;
    {
        cpu->r[12] = rd32(0x001133e4u + + 0x188u);
    }
L_001133e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001133e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001133e8:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001133ec:;
    {
        cpu->r[3] = 0x000002e2u;
    }
L_001133f0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001133f4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001133f8:;
    {
        goto L_00112c18;
    }
L_001133fc:;
    {
        cpu->r[10] = rd32(0x00113404u + + 0x164u);
    }
L_00113400:;
    {
        goto L_00112be4;
    }
L_00113404:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0011340cu + + 0x140u);
    }
L_00113408:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011340c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113410:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00113368;
        }
    }
L_00113414:;
    {
        goto L_0011336c;
    }
L_00113418:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0011341c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113420:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001134ac;
        }
    }
L_00113424:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0011342cu + + 0x124u);
    }
L_00113428:;
    {
        vfp_vadd(cpu, 14, 14, 13);
    }
L_0011342c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113430:;
    {
        vfp_sync_flags(cpu);
    }
L_00113434:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00113438:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0011343c:;
    {
        goto L_00112be4;
    }
L_00113440:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00113444:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00113448:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0011344c:;
    {
        cpu->r[14] = 0x00113450u; fn_000a587c(cpu);
    }
L_00113450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113454:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00113118;
        }
    }
L_00113458:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011345c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00113460:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00113464:;
    {
        cpu->r[14] = 0x00113468u; fn_000a50ac(cpu);
    }
L_00113468:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011346c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011310c;
        }
    }
L_00113470:;
    {
        goto L_00113118;
    }
L_00113474:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0011347cu + + 0xd8u);
    }
L_00113478:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_0011347c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113480:;
    {
        vfp_sync_flags(cpu);
    }
L_00113484:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00113488:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0011348c:;
    {
        goto L_00112b74;
    }
L_00113490:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00113498u + + 0xc0u);
    }
L_00113494:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_00113498:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0011349c:;
    {
        vfp_sync_flags(cpu);
    }
L_001134a0:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_001134a4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001134a8:;
    {
        goto L_00112bc0;
    }
L_001134ac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001134b4u + + 0x9cu);
    }
L_001134b0:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_001134b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001134b8:;
    {
        vfp_sync_flags(cpu);
    }
L_001134bc:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_001134c0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001134c4:;
    {
        goto L_00112be4;
    }
L_001134c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001134cc:;
    {
        cpu->r[9] = 0x00001288u;
    }
L_001134d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001134d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001134dcu + + 0x80u);
    }
L_001134d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001134dc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001134e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_001134e4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001134e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001134ec:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001134f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001134f4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001134f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001134fc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113500:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113504:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113508:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_0011350c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113514u + + 0x4cu);
    }
L_00113510:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00113514:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113518:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011351c:;
    {
        cpu->r[14] = 0x00113520u; fn_00147cd8(cpu);
    }
L_00113520:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00113524:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[10]);
    }
L_00113528:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011352c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00113530:;
    {
        cpu->r[14] = 0x00113534u; fn_00147cd8(cpu);
    }
L_00113534:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[10]);
    }
L_00113538:;
    {
        goto L_0011314c;
    }
}

/* _ZN11GS_MainMenu11RenderCar3DEii @ 00113570 (arm) */
void fn_00113570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00113570:;
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
L_00113574:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00113578:;
    {
        cpu->r[4] = rd32(0x00113580u + + 0x464u);
    }
L_0011357c:;
    {
        cpu->r[10] = rd32(0x00113584u + + 0x464u);
    }
L_00113580:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00113584:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011358cu, cpu->r[4], 0, 0);
    }
L_00113588:;
    {
        cpu->r[0] = rd32(0x00113590u + + 0x45cu);
    }
L_0011358c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000c4u, 1, 0);
    }
L_00113590:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_00113594:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00113598:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_0011359c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001135a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001135a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001135a8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001135ac:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001135b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001135b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001135ec;
        }
    }
L_001135b8:;
    {
        cpu->r[3] = rd32(0x001135c0u + + 0x430u);
    }
L_001135bc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001135c0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001135c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001135c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001140f0;
        }
    }
L_001135cc:;
    {
        cpu->r[14] = 0x001135d0u; fn_0009b4d0(cpu);
    }
L_001135d0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001135d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001135d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003e8u, 1, 1);
    }
L_001135dc:;
    {
        if (cond_test(cpu, 9)) {
        *vfp_s(cpu, 15) = *(float*)G(0x001135e4u + + 0x3e4u);
        }
    }
L_001135e0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001135e4:;
    {
        if (cond_test(cpu, 9)) {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001135e8:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[9], cpu->r[3]);
        }
    }
L_001135ec:;
    {
        cpu->r[2] = rd32(0x001135f4u + + 0x400u);
    }
L_001135f0:;
    {
        cpu->r[9] = 0x00001288u;
    }
L_001135f4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001135f8:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001135fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00113600:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00113604:;
    {
        cpu->r[14] = 0x00113608u; fn_00147cd8(cpu);
    }
L_00113608:;
    {
        cpu->r[3] = rd32(0x00113610u + + 0x3e8u);
    }
L_0011360c:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00113610:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_00113614:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[6]);
    }
L_00113618:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0011361c:;
    {
        cpu->r[14] = 0x00113620u; fn_00147cd8(cpu);
    }
L_00113620:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00113624:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00113628:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0011362c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00113630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113634:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00113638:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0011363c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113644u + + 0x388u);
    }
L_00113640:;
    {
        cpu->r[1] = rd32(0x00113648u + + 0x3b4u);
    }
L_00113644:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113648:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0011364c:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00113650:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
    }
L_00113654:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113658:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011365c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113660:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_00113664:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00113668:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0011366c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113670:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00113678u + + 0x354u);
        }
    }
L_00113674:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_00113678:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[6]);
    }
L_0011367c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00113680:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113688u + + 0x348u);
    }
L_00113684:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
        }
    }
L_00113688:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0011368c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00113690:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00113694:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113698:;
    {
        vfp_sync_flags(cpu);
    }
L_0011369c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001136b0;
        }
    }
L_001136a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001136a8u + + 0x32cu);
    }
L_001136a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001136a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001136ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001136b8;
        }
    }
L_001136b0:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_001136b4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001136b8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001136c0u + + 0x318u);
    }
L_001136bc:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_001136c0:;
    {
        cpu->r[3] = rd32(0x001136c8u + + 0x338u);
    }
L_001136c4:;
    {
        cpu->r[1] = 0x00001c38u;
    }
L_001136c8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001136cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001136d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001136d4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001136d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001136dc:;
    {
        vfp_vdiv(cpu, 17, 15, 13);
    }
L_001136e0:;
    {
        vfp_sync_flags(cpu);
    }
L_001136e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114028;
        }
    }
L_001136e8:;
    {
        cpu->r[2] = rd32(0x001136f0u + + 0x314u);
    }
L_001136ec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_001136f0:;
    {
        cpu->r[2] = rd32(0x001136f8u + + 0x310u);
    }
L_001136f4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001136fcu + + 0x338u);
    }
L_001136f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,16));
    }
L_001136fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00113700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113f88;
        }
    }
L_00113704:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113708:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0011370c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00113710:;
    {
        cpu->r[14] = 0x00113714u; fn_000b09ac(cpu);
    }
L_00113714:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00113718:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011371c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00113720:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113724:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0011372cu + + 0x308u);
        }
    }
L_00113728:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00113730u + + 0x300u);
        }
    }
L_0011372c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000012cu;
        }
    }
L_00113730:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_00113734:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00113738:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_0011373c:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00113740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00113744:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_00113748:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011374c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00113750:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00113754:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000122u;
        }
    }
L_00113758:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000190u;
        }
    }
L_0011375c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x0000014cu;
        }
    }
L_00113760:;
    {
        vfp_sync_flags(cpu);
    }
L_00113764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113eac;
        }
    }
L_00113768:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0011376c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113770:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00113f40;
        }
    }
L_00113774:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0011377cu + + 0x260u);
    }
L_00113778:;
    {
        vfp_vsub(cpu, 14, 16, 14);
    }
L_0011377c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113780:;
    {
        vfp_sync_flags(cpu);
    }
L_00113784:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00113788:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0011378c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113790:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_00113794:;
    {
        vfp_vsub(cpu, 13, 14, 16);
    }
L_00113798:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001137a0u + + 0x23cu);
    }
L_0011379c:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_001137a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_001137a4:;
    {
        vfp_sync_flags(cpu);
    }
L_001137a8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_001137ac:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,14);
        }
    }
L_001137b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001137b8u + + 0x210u);
    }
L_001137b4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_001137b8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_001137bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001137c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001137c4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001137c8:;
    {
        vfp_sync_flags(cpu);
    }
L_001137cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00113ef0;
        }
    }
L_001137d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001137d8u + + 0x208u);
    }
L_001137d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001137d8:;
    {
        vfp_sync_flags(cpu);
    }
L_001137dc:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001137f8;
        }
    }
L_001137e0:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001137e4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001137ecu + + 0x1d4u);
    }
L_001137e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001137ec:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001137f0:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_001137f4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001137f8:;
    {
        cpu->r[0] = rd32(0x00113800u + + 0x20cu);
    }
L_001137fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113800:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00113804:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00113808:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0011380c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_00113810:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113814:;
    {
        cpu->r[14] = 0x00113818u; fn_0012ed70(cpu);
    }
L_00113818:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0011381c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113820:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113824:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00113828:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0011382c:;
    {
        cpu->r[14] = 0x00113830u; fn_0012fa2c(cpu);
    }
L_00113830:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_00113834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00113838:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011383c:;
    {
        cpu->r[14] = 0x00113840u; fn_000960f4(cpu);
    }
L_00113840:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113f08;
        }
    }
L_00113848:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0011384c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113850:;
    {
        cpu->r[14] = 0x00113854u; fn_0012df6c(cpu);
    }
L_00113854:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00113858:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011385c:;
    {
        cpu->r[14] = 0x00113860u; fn_0012df84(cpu);
    }
L_00113860:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113864:;
    {
        cpu->r[14] = 0x00113868u; fn_0012df9c(cpu);
    }
L_00113868:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011386c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4268u << 16);
    }
L_00113870:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00113874:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113878:;
    {
        cpu->r[14] = 0x0011387cu; fn_0012ec44(cpu);
    }
L_0011387c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113880:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00113884:;
    {
        cpu->r[14] = 0x00113888u; fn_0012eab0(cpu);
    }
L_00113888:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_0011388c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113890:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113894:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00113898:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0011389c:;
    {
        cpu->r[11] = 0x000011e8u;
    }
L_001138a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001138a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001138a8:;
    {
        cpu->r[14] = 0x001138acu; fn_00151aa0(cpu);
    }
L_001138ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001138b0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001138b4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001138b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001138bc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001138c4u + + 0x170u);
    }
L_001138c0:;
    {
        cpu->r[14] = 0x001138c4u; fn_00151aa8(cpu);
    }
L_001138c4:;
    {
        cpu->r[12] = rd32(0x001138ccu + + 0x144u);
    }
L_001138c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001138cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001138d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001138d4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x428cu << 16);
    }
L_001138d8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001138dc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_001138e0:;
    {
        cpu->r[14] = 0x001138e4u; fn_00151ab0(cpu);
    }
L_001138e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001138e8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001138ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001138f0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001138f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4218u << 16);
    }
L_001138f8:;
    {
        cpu->r[14] = 0x001138fcu; fn_00151dc8(cpu);
    }
L_001138fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00113900:;
    {
        cpu->r[14] = 0x00113904u; fn_00151c40(cpu);
    }
L_00113904:;
    {
        cpu->r[12] = rd32(0x0011390cu + + 0x108u);
    }
L_00113908:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011390c:;
    {
        cpu->r[14] = 0x00001314u;
    }
L_00113910:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00113914:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_00113918:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011391c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00113920:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113924:;
    {
        cpu->r[14] = 0x0011392cu;
    }
L_00113928:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011392cu)) return;
    }
L_0011392c:;
    {
        cpu->r[14] = rd32(0x00113934u + + 0xe4u);
    }
L_00113930:;
    {
        cpu->r[1] = rd32(0x00113938u + + 0xe4u);
    }
L_00113934:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00113938:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0011393c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_00113940:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_00113944:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00113948:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011394c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113950:;
    {
        cpu->r[14] = 0x00113958u;
    }
L_00113954:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113958u)) return;
    }
L_00113958:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011395c:;
    {
        cpu->r[14] = 0x00113960u; fn_0012e11c(cpu);
    }
L_00113960:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00113964:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113968:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011396c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00113970:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_00113974:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113978:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011397c:;
    {
        cpu->r[14] = 0x00113984u;
    }
L_00113980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113984u)) return;
    }
L_00113984:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113988:;
    {
        cpu->r[14] = 0x0011398cu; fn_00153600(cpu);
    }
L_0011398c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00113990:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113994:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00113998:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_0011399c:;
    {
        cpu->r[14] = 0x001139a0u; fn_00154734(cpu);
    }
L_001139a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001139a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001139a8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001139ac:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_001139b0:;
    {
        cpu->r[14] = 0x001139b4u; fn_00154350(cpu);
    }
L_001139b4:;
    {
        cpu->r[1] = 0x00000fd0u;
    }
L_001139b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001139bc:;
    {
        goto L_00113a44;
    }
L_00113a44:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4049u << 16);
    }
L_00113a48:;
    {
        cpu->r[14] = 0x00113a4cu; fn_00154514(cpu);
    }
L_00113a4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113a50:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113a54:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00113a58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xc040u << 16);
    }
L_00113a5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113a60:;
    {
        cpu->r[14] = 0x00113a64u; fn_00153e90(cpu);
    }
L_00113a64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113a68:;
    {
        cpu->r[14] = 0x00113a6cu; fn_000ea4dc(cpu);
    }
L_00113a6c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00113a70:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_00113a74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113a7cu + - 0x58u);
    }
L_00113a78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00113a7c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00113a80:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113a84:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113a88:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00113a8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_00113a90:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113a94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113a98:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00113a9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113aa4u + - 0x7cu);
    }
L_00113aa0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00113aa4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00113aa8:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[10]);
    }
L_00113aac:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113ab0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_00113ab4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_00113ab8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113abc:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113ac0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00113ac4:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113ac8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00113acc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113ad4u + - 0xa8u);
    }
L_00113ad0:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113ad4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00113ad8:;
    {
        cpu->r[14] = 0x00030000u;
    }
L_00113adc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113ae4u + - 0xacu);
    }
L_00113ae0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00113ae4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113ae8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113af0u + - 0xb4u);
    }
L_00113aec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113af8u + - 0xb8u);
    }
L_00113af4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113af8:;
    {
        cpu->r[14] = 0x00113afcu; fn_000b54a8(cpu);
    }
L_00113afc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00113b00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00113b04:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113b08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00113b0c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113b10:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113b14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00113b18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113b1c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113b20:;
    {
        cpu->r[14] = 0x00113b24u; fn_00153600(cpu);
    }
L_00113b24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113b28:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_00113b2c:;
    {
        cpu->r[14] = 0x00113b30u; fn_00154734(cpu);
    }
L_00113b30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113b34:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00113b38:;
    {
        cpu->r[14] = 0x00113b3cu; fn_00154350(cpu);
    }
L_00113b3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113b40:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00113b44:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113b48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00113b4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4040u << 16);
    }
L_00113b50:;
    {
        cpu->r[14] = 0x00113b54u; fn_00153e90(cpu);
    }
L_00113b54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113b58:;
    {
        cpu->r[12] = 0x00001c40u;
    }
L_00113b5c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00113b60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00113b64:;
    {
        cpu->r[14] = 0x00113b68u; fn_00153600(cpu);
    }
L_00113b68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113b6c:;
    {
        cpu->r[14] = 0x00001c40u;
    }
L_00113b70:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_00113b74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_00113b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00113b7c:;
    {
        cpu->r[14] = 0x00113b80u; fn_00154734(cpu);
    }
L_00113b80:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113b84:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_00113b88:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00113b8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00113b90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00113b94:;
    {
        cpu->r[14] = 0x00113b98u; fn_00154350(cpu);
    }
L_00113b98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113b9c:;
    {
        cpu->r[14] = 0x00113ba0u; fn_000ea4dc(cpu);
    }
L_00113ba0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000134u, 0, 0);
    }
L_00113ba4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00113ba8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113bac:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00113bb0:;
    {
        cpu->r[14] = 0x00113bb4u; fn_00153624(cpu);
    }
L_00113bb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00113bb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000c60u, 0, 0);
    }
L_00113bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00113bc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_00113bc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00113bc8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00113bd0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113bd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00113bd8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113bdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00113be0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00113be4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00113be8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113bec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_00113bf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00113bc4;
        }
    }
L_00113bf4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00113bf8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00113bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113c18;
        }
    }
L_00113c00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00113c04:;
    {
        cpu->r[14] = 0x00113c08u; fn_000b2bc8(cpu);
    }
L_00113c08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00113c0c:;
    {
        cpu->r[14] = 0x00113c10u; fn_0018ba20(cpu);
    }
L_00113c10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00113c14:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00113c18:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00113c1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000cb0u, 0, 0);
    }
L_00113c20:;
    {
        cpu->r[14] = 0x00113c24u; fn_00153624(cpu);
    }
L_00113c24:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113c28:;
    {
        cpu->r[10] = 0x00001c40u;
    }
L_00113c2c:;
    {
        cpu->r[8] = 0x00001c4cu;
    }
L_00113c30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00113c34:;
    {
        cpu->r[14] = 0x00113c38u; fn_000ea4dc(cpu);
    }
L_00113c38:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113c3c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113c40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00113c44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113c48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113c4c:;
    {
        cpu->r[14] = 0x00113c54u;
    }
L_00113c50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113c54u)) return;
    }
L_00113c54:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113c58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00113c5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_00113c60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113c64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113c68:;
    {
        cpu->r[14] = 0x00113c70u;
    }
L_00113c6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113c70u)) return;
    }
L_00113c70:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113c74:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_00113c78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00113c7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113c80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_00113c84:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00113c88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113c90u + - 0x258u);
    }
L_00113c8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113c90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113c98u + - 0x268u);
    }
L_00113c94:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000019u, 0, 0);
    }
L_00113c98:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[14]);
    }
L_00113c9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xb5cu);
    }
L_00113ca0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113ca4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113cacu + - 0x270u);
    }
L_00113ca8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113cac:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[3] = v;
    }
L_00113cb0:;
    {
        wr32(cpu->r[6] + + 0xb5cu, cpu->r[3]);
    }
L_00113cb4:;
    {
        cpu->r[14] = 0x00113cb8u; fn_000af474(cpu);
    }
L_00113cb8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113cbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xb5cu);
    }
L_00113cc0:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_00113cc4:;
    {
        wr32(cpu->r[6] + + 0xb5cu, cpu->r[3]);
    }
L_00113cc8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00113ccc:;
    {
        cpu->r[14] = 0x00113cd0u; fn_000978a8(cpu);
    }
L_00113cd0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113cd4:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_00113cd8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00113cdc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_00113ce0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00113ce4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00113ce8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113cec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x444u);
    }
L_00113cf0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00113cf4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00113cf8:;
    {
        cpu->r[14] = 0x00113cfcu; fn_000a439c(cpu);
    }
L_00113cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00113f5c;
        }
    }
L_00113d04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00113d08:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_00113d0c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00113d10:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00113d18u + - 0x2e4u);
    }
L_00113d14:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00113d1cu + - 0x2e4u);
    }
L_00113d18:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00113d20u + - 0x2e4u);
    }
L_00113d1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113d20:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00113d28u + - 0x2e8u);
    }
L_00113d24:;
    {
        cpu->r[8] = 0x00030000u;
    }
L_00113d28:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00113d2c:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_00113d30:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00113d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_00113d38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_00113d3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00113d40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00113d44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113d48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113d4c:;
    {
        cpu->r[14] = 0x00113d54u;
    }
L_00113d50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113d54u)) return;
    }
L_00113d54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00113d58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00113d5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113d60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_00113d64:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00113d68:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113d6c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00113d70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00113d74:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113d78:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00113d7c:;
    {
        *(uint32_t*)G(cpu->r[11]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113d80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00113d84:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[7]);
    }
L_00113d88:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113d8c:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113d90:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_00113d94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_00113d98:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00113d9c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00113da0:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113da4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00113da8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00113dac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_00113db0:;
    {
        cpu->r[14] = 0x00113db4u; fn_000b54a8(cpu);
    }
L_00113db4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00113db8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113dbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_00113dc0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00113dc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00113dc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00113dcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_00113dd0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00113dd4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_00113dd8:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[7]);
    }
L_00113ddc:;
    {
        cpu->r[14] = 0x00113de0u; fn_000afa90(cpu);
    }
L_00113de0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00113de4:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00113de8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00113dec:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00113df0:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113df4:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113df8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00113dfc:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113e00:;
    {
        *(uint32_t*)G(cpu->r[11]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00113e04:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00113e08:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00113e0c:;
    {
        cpu->r[14] = 0x00113e10u; fn_00147cd8(cpu);
    }
L_00113e10:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00113e14:;
    {
        cpu->r[12] = 0x00001288u;
    }
L_00113e18:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00113e1c:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[3]);
    }
L_00113e20:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00113e24:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00113e28:;
    {
        cpu->r[14] = 0x00113e2cu; fn_00147cd8(cpu);
    }
L_00113e2c:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_00113e30:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_00113e34:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[14]);
    }
L_00113e38:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00113e3c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00113e40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00113e44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00113e48:;
    {
        cpu->r[14] = 0x00113e50u;
    }
L_00113e4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00113e50u)) return;
    }
L_00113e50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113e54:;
    {
        cpu->r[14] = 0x00113e58u; fn_0012dfe0(cpu);
    }
L_00113e58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00113e5c:;
    {
        cpu->r[3] = rd32(0x00113e64u + - 0x444u);
    }
L_00113e60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113e64:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00113e68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113e6c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00113e70:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00113e74:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_00113e78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00113e7c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00113e80:;
    {
        cpu->r[14] = 0x00113e84u; fn_0012ed70(cpu);
    }
L_00113e84:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_00113e88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113e8c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00113e90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113e94:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00113e98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00113e9c:;
    {
        cpu->r[14] = 0x00113ea0u; fn_0012fa2c(cpu);
    }
L_00113ea0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_00113ea4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00113ea8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00113eacu)) return;
    }
L_00113eac:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00113eb0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00113eb4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113ebcu + + 0x24cu);
    }
L_00113eb8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[12];
    }
L_00113ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00113ec0:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_00113ec4:;
    {
        vfp_vsub(cpu, 17, 14, 17);
    }
L_00113ec8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00113ecc:;
    {
        vfp_vmla(cpu, 15, 14, 17);
    }
L_00113ed0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113ed8u + + 0x234u);
    }
L_00113ed4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00113ed8:;
    {
        vfp_sync_flags(cpu);
    }
L_00113edc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00113ee0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00113ee4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113ee8:;
    {
        vfp_sync_flags(cpu);
    }
L_00113eec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001137d0;
        }
    }
L_00113ef0:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00113ef4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00113efcu + + 0x204u);
    }
L_00113ef8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00113efc:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00113f00:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00113f04:;
    {
        goto L_001137d0;
    }
L_00113f08:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00113f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113f10:;
    {
        cpu->r[14] = 0x00113f14u; fn_0012df6c(cpu);
    }
L_00113f14:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00113f18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113f1c:;
    {
        cpu->r[14] = 0x00113f20u; fn_0012df84(cpu);
    }
L_00113f20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113f24:;
    {
        cpu->r[14] = 0x00113f28u; fn_0012df9c(cpu);
    }
L_00113f28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00113f2c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4248u << 16);
    }
L_00113f30:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00113f34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00113f38:;
    {
        cpu->r[14] = 0x00113f3cu; fn_0012ec44(cpu);
    }
L_00113f3c:;
    {
        goto L_0011387c;
    }
L_00113f40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113f48u + + 0x1c8u);
    }
L_00113f44:;
    {
        vfp_vadd(cpu, 14, 16, 14);
    }
L_00113f48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00113f4c:;
    {
        vfp_sync_flags(cpu);
    }
L_00113f50:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00113f54:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00113f58:;
    {
        goto L_0011378c;
    }
L_00113f5c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113f60:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113f64:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00113f68:;
    {
        cpu->r[14] = 0x00113f6cu; fn_000a587c(cpu);
    }
L_00113f6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113f70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00113d04;
        }
    }
L_00113f74:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00113f78:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00113f7c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00113f80:;
    {
        cpu->r[14] = 0x00113f84u; fn_000a50ac(cpu);
    }
L_00113f84:;
    {
        goto L_00113d04;
    }
L_00113f88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00113f8c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00113f90:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00113f94:;
    {
        cpu->r[14] = 0x00113f98u; fn_000b09ac(cpu);
    }
L_00113f98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00113f9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00113fa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00113fa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00113704;
        }
    }
L_00113fa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113fb0u + + 0x164u);
    }
L_00113fac:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_00113fb0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00113fb8u + + 0x160u);
    }
L_00113fb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00113fb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00113fc0u + + 0x15cu);
    }
L_00113fbc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00113fc4u + + 0x15cu);
    }
L_00113fc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00113fc4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00113fc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00113fcc:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_00113fd0:;
    {
        vfp_vmla(cpu, 15, 16, 12);
    }
L_00113fd4:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_00113fd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00113fe0u + + 0x144u);
    }
L_00113fdc:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00113fe0:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_00113fe4:;
    {
        vfp_vdiv(cpu, 14, 14, 12);
    }
L_00113fe8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00113ff0u + + 0x138u);
    }
L_00113fec:;
    {
        vfp_vmla(cpu, 15, 16, 12);
    }
L_00113ff0:;
    {
        vfp_vsub(cpu, 12, 15, 13);
    }
L_00113ff4:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,13);
    }
L_00113ff8:;
    {
        vfp_vmla(cpu, 11, 12, 14);
    }
L_00113ffc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,13));
    }
L_00114000:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00114004:;
    {
        vfp_sync_flags(cpu);
    }
L_00114008:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
    }
L_0011400c:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_00114010:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_00114014:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00114018:;
    {
        vfp_sync_flags(cpu);
    }
L_0011401c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_00114020:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00114024:;
    {
        goto L_00113704;
    }
L_00114028:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011402c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00114030:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00114034:;
    {
        cpu->r[14] = 0x00114038u; fn_000b09ac(cpu);
    }
L_00114038:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011403c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00114040:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001140dc;
        }
    }
L_00114048:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00114050u + + 0xd4u);
    }
L_0011404c:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_00114050:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00114058u + + 0xb0u);
    }
L_00114054:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0011405cu + + 0xccu);
    }
L_00114058:;
    {
        cpu->r[14] = rd32(0x00114060u + + 0xccu);
    }
L_0011405c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00114064u + + 0xbcu);
    }
L_00114060:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00114068u + + 0xb4u);
    }
L_00114064:;
    {
        cpu->r[2] = rd32(0x0011406cu + + 0xc4u);
    }
L_00114068:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_0011406c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_00114070:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00114074:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00114078:;
    {
        vfp_vsub(cpu, 12, 12, 17);
    }
L_0011407c:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_00114080:;
    {
        vfp_vsub(cpu, 11, 15, 14);
    }
L_00114084:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011408cu + + 0x88u);
    }
L_00114088:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_0011408c:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_00114090:;
    {
        vfp_vdiv(cpu, 14, 14, 11);
    }
L_00114094:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0011409cu + + 0x7cu);
    }
L_00114098:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_0011409c:;
    {
        vfp_vsub(cpu, 12, 15, 13);
    }
L_001140a0:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,13);
    }
L_001140a4:;
    {
        vfp_vmla(cpu, 11, 12, 14);
    }
L_001140a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,13));
    }
L_001140ac:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001140b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001140b4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
    }
L_001140b8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_001140bc:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_001140c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001140c4:;
    {
        vfp_sync_flags(cpu);
    }
L_001140c8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_001140cc:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001140d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001140d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001140d8:;
    {
        goto L_001136f4;
    }
L_001140dc:;
    {
        cpu->r[12] = rd32(0x001140e4u + + 0x48u);
    }
L_001140e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001140e4:;
    {
        cpu->r[2] = rd32(0x001140ecu + + 0x44u);
    }
L_001140e8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001140ec:;
    {
        goto L_001136f4;
    }
L_001140f0:;
    {
        cpu->r[14] = 0x001140f4u; fn_0009b4d0(cpu);
    }
L_001140f4:;
    {
        wr32(cpu->r[9], cpu->r[0]);
    }
L_001140f8:;
    {
        goto L_001135ec;
    }
}

/* _ZN11GS_MainMenu6RenderEv @ 00114138 (arm) */
void fn_00114138(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114138:;
    {
        cpu->r[3] = rd32(0x00114140u + + 0xa4u);
    }
L_0011413c:;
    {
        cpu->r[2] = rd32(0x00114144u + + 0xa4u);
    }
L_00114140:;
    {
        cpu->r[3] = add_flags(cpu, 0x00114148u, cpu->r[3], 0, 0);
    }
L_00114144:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00114148:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0011414c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114150:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00114154:;
    {
        cpu->r[14] = 0x00114158u; fn_0012f780(cpu);
    }
L_00114158:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011415c:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_00114160:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_00114164:;
    {
        cpu->r[14] = 0x00114168u; fn_00113570(cpu);
    }
L_00114168:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011416c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00114170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001141a0;
        }
    }
L_00114174:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00114178:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011417c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00114180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00114184:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114188:;
    {
        cpu->r[14] = 0x00114190u;
    }
L_0011418c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00114190u)) return;
    }
L_00114190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00114194:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00114198:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011419c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00114178;
        }
    }
L_001141a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_001141a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001141a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001141bc;
        }
    }
L_001141ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001141b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001141b4:;
    {
        cpu->r[14] = 0x001141bcu;
    }
L_001141b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001141bcu)) return;
    }
L_001141bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001141c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001141c4:;
    {
        cpu->r[14] = 0x001141ccu;
    }
L_001141c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001141ccu)) return;
    }
L_001141cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001141d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001141d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001141d8:;
    {
        cpu->r[14] = 0x001141e0u;
    }
L_001141dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001141e0u)) return;
    }
L_001141e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001141e4u)) return;
    }
}

/* _ZN11GS_MainMenu11RenderMoneyEii @ 001141ec (arm) */
void fn_001141ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001141ec:;
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
L_001141f0:;
    {
        cpu->r[4] = rd32(0x001141f8u + + 0x9cu);
    }
L_001141f4:;
    {
        cpu->r[3] = rd32(0x001141fcu + + 0x9cu);
    }
L_001141f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000088u, 1, 0);
    }
L_001141fc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00114204u, cpu->r[4], 0, 0);
    }
L_00114200:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00114204:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00114208:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0011420c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114210:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xcu);
    }
L_00114214:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00114218:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011421c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011426c;
        }
    }
L_00114220:;
    {
        cpu->r[10] = rd32(0x00114228u + + 0x74u);
    }
L_00114224:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00114228:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011422c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00114230:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00114234:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00114238:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x5cu);
    }
L_0011423c:;
    {
        cpu->r[14] = 0x00114240u; fn_000f3d88(cpu);
    }
L_00114240:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xc0u);
    }
L_00114244:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00114248:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0011424c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00114250:;
    {
        cpu->r[12] = 0x00000020u;
    }
L_00114254:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00114258:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0011425c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00114260:;
    {
        cpu->r[14] = 0x00114264u; fn_000ad19c(cpu);
    }
L_00114264:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_00114268:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011426cu)) return;
    }
L_0011426c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114270:;
    {
        cpu->r[14] = 0x00114274u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114274:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114220;
        }
    }
L_0011427c:;
    {
        cpu->r[10] = rd32(0x00114284u + + 0x18u);
    }
L_00114280:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00114284:;
    {
        cpu->r[14] = 0x00114288u; fn_00094228(cpu);
    }
L_00114288:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011428c:;
    {
        cpu->r[14] = 0x00114290u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114290:;
    {
        goto L_00114224;
    }
}

/* _ZN11GS_MainMenu6ResumeEv @ 001142a0 (arm) */
void fn_001142a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001142a0:;
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
L_001142a4:;
    {
        cpu->r[9] = rd32(0x001142acu + + 0x3e0u);
    }
L_001142a8:;
    {
        cpu->r[6] = rd32(0x001142b0u + + 0x3e0u);
    }
L_001142ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_001142b0:;
    {
        cpu->r[9] = add_flags(cpu, 0x001142b8u, cpu->r[9], 0, 0);
    }
L_001142b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001142b8:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_001142bc:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_001142c0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001142c4:;
    {
        cpu->r[14] = 0x001142c8u; fn_000f3430(cpu);
    }
L_001142c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001142cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001146c4;
        }
    }
L_001142d0:;
    {
        cpu->r[3] = rd32(0x001142d8u + + 0x3bcu);
    }
L_001142d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001142dcu + + 0x3a4u);
    }
L_001142d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001142e0u + + 0x3a4u);
    }
L_001142dc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001142e0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001142e4:;
    {
        cpu->r[3] = rd32(0x001142ecu + + 0x3acu);
    }
L_001142e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001142f0u + + 0x398u);
    }
L_001142ec:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001142f0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001142f4:;
    {
        cpu->r[3] = rd32(0x001142fcu + + 0x3a0u);
    }
L_001142f8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001142fc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00114300:;
    {
        cpu->r[3] = rd32(0x00114308u + + 0x398u);
    }
L_00114304:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00114308:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011430c:;
    {
        cpu->r[3] = rd32(0x00114314u + + 0x390u);
    }
L_00114310:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00114314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00114318:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011431c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00114320:;
    {
        cpu->r[14] = 0x00114324u; fn_001289fc(cpu);
    }
L_00114324:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_00114328:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011432c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001146f0;
        }
    }
L_00114330:;
    {
        cpu->r[3] = rd32(0x00114338u + + 0x37cu);
    }
L_00114334:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00114338:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011433c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00114340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011471c;
        }
    }
L_00114344:;
    {
        cpu->r[2] = rd32(0x0011434cu + + 0x35cu);
    }
L_00114348:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0011434c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00114350:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00114354:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114664;
        }
    }
L_0011435c:;
    {
        cpu->r[3] = rd32(0x00114364u + + 0x354u);
    }
L_00114360:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00114364:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00114368:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011436c:;
    {
        cpu->r[14] = 0x00114370u; fn_00096a08(cpu);
    }
L_00114370:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00114374:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114378:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0011437c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114380:;
    {
        cpu->r[14] = 0x00114384u; fn_0018aa44(cpu);
    }
L_00114384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00114388:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_0011438c:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[0]);
    }
L_00114390:;
    {
        cpu->r[6] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00114394:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00114398:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001144d8;
        }
    }
L_0011439c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_001143a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001143a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001144d8;
        }
    }
L_001143a8:;
    {
        cpu->r[2] = rd32(0x001143b0u + + 0x2fcu);
    }
L_001143ac:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_001143b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_001143b4:;
    {
        cpu->r[12] = rd32(0x001143bcu + + 0x2f4u);
    }
L_001143b8:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_001143bc:;
    {
        cpu->r[8] = 0x0000000cu;
    }
L_001143c0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001143c4:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001143c8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001143cc:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_001143d0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_001143d4:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_001143d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[11]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001143dc:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 31u, &shc); cpu->r[11] = v;
    }
L_001143e0:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[11], 1, 0);
    }
L_001143e4:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001143e8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001143ec:;
    {
        goto L_0011444c;
    }
L_001143f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001143f4:;
    {
        cpu->r[9] = 0x00000082u;
    }
L_001143f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001143fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00114400:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00114404:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00114408:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_0011440c:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_00114410:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000082u, 1, 0);
    }
L_00114414:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[1]);
    }
L_00114418:;
    {
        wr32(cpu->r[2] + cpu->r[7], cpu->r[14]);
    }
L_0011441c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_00114420:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00114424:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_00114428:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_0011442c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00114430:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_00114434:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000082u, 1, 0);
    }
L_00114438:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0011443c:;
    {
        cpu->r[14] = 0x00114440u; fn_000ec75c(cpu);
    }
L_00114440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00114444:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00114448:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001144d4;
        }
    }
L_0011444c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_00114450:;
    {
        cpu->r[9] = 0x00000408u;
    }
L_00114454:;
    {
        cpu->r[12] = 0x000004b9u;
    }
L_00114458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011445c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00114460:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00114464:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[6], 0x0000003cu, 1, 0);
    }
L_00114468:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0011446c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_00114470:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
        }
    }
L_00114474:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001143f0;
        }
    }
L_00114478:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011447c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00114480:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00114484:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_00114488:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011448c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_00114490:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_00114494:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000082u, 1, 0);
    }
L_00114498:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[1]);
    }
L_0011449c:;
    {
        wr32(cpu->r[2] + cpu->r[7], cpu->r[9]);
    }
L_001144a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001144a4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_001144a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001144ac:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_001144b0:;
    {
        cpu->r[12] = 0x00000082u;
    }
L_001144b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001144b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001144bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000082u, 1, 0);
    }
L_001144c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001144c4:;
    {
        cpu->r[14] = 0x001144c8u; fn_000ec75c(cpu);
    }
L_001144c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_001144cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001144d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011444c;
        }
    }
L_001144d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_001144d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001144dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001144e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001145f4;
        }
    }
L_001144e4:;
    {
        cpu->r[14] = rd32(0x001144ecu + + 0x1d0u);
    }
L_001144e8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001144ec:;
    {
        cpu->r[1] = rd32(0x001144f4u + + 0x1ccu);
    }
L_001144f0:;
    {
        cpu->r[5] = 0x0000000cu;
    }
L_001144f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001144f8:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001144fc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00114500:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00114504:;
    {
        goto L_0011458c;
    }
L_00114508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011450c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
        }
    }
L_00114510:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001145b0;
        }
    }
L_00114514:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00114518:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011451c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00114520:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00114524:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00114528:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0011452c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00114530:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_00114534:;
    {
        cpu->r[14] = 0x00114538u; fn_000a8a2c(cpu);
    }
L_00114538:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011453c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00114540:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00114544:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_00114548:;
    {
        cpu->r[10] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0011454c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00114550:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00114554:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_00114558:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_0011455c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00114560:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00114564:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00114568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0011456c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00114570:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00114574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00114578:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011457c:;
    {
        cpu->r[14] = 0x00114580u; fn_000ec75c(cpu);
    }
L_00114580:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00114584:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00114588:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001145f4;
        }
    }
L_0011458c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00114590:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_00114594:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00114598:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x8u);
    }
L_0011459c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0x4u);
    }
L_001145a0:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 23u, &shc); cpu->r[10] = v;
    }
L_001145a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00010000u; set_nz(cpu, v); }
    }
L_001145a8:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 23u, &shc); cpu->r[10] = v;
    }
L_001145ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00114508;
        }
    }
L_001145b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00020000u; set_nz(cpu, v); }
    }
L_001145b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001145ec;
        }
    }
L_001145b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001145bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001145ec;
        }
    }
L_001145c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001145c4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001145c8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001145cc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001145d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114610;
        }
    }
L_001145d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001145d8:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_001145dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001145e0:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_001145e4:;
    {
        cpu->r[14] = 0x001145e8u; fn_0018aa44(cpu);
    }
L_001145e8:;
    {
        goto L_00114514;
    }
L_001145ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001145f0:;
    {
        goto L_00114514;
    }
L_001145f4:;
    {
        cpu->r[14] = 0x001145f8u; fn_0015ca98(cpu);
    }
L_001145f8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001145fc:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00114600:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00114604:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_00114608:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0011460c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00114610u)) return;
    }
L_00114610:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00114614:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00114618:;
    {
        cpu->r[14] = 0x0011461cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011461c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001145d4;
        }
    }
L_00114624:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00114628:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_0011462c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00114630:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00114634:;
    {
        cpu->r[14] = 0x00114638u; fn_0018aa20(cpu);
    }
L_00114638:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011463c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00114640:;
    {
        cpu->r[14] = 0x00114644u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114644:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00114648:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0011464c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00114650:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_00114654:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00114658:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011465c:;
    {
        cpu->r[14] = 0x00114660u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114660:;
    {
        goto L_001145d4;
    }
L_00114664:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00114668:;
    {
        cpu->r[14] = 0x0011466cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011466c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011474c;
        }
    }
L_00114674:;
    {
        cpu->r[12] = rd32(0x0011467cu + + 0x3cu);
    }
L_00114678:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0011467c:;
    {
        goto L_00114364;
    }
L_001146c4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001146c8:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_001146cc:;
    {
        cpu->r[14] = 0x001146d0u; fn_000f3430(cpu);
    }
L_001146d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001146d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001142d0;
        }
    }
L_001146d8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001146dc:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_001146e0:;
    {
        cpu->r[14] = 0x001146e4u; fn_000f3430(cpu);
    }
L_001146e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001146e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011430c;
        }
    }
L_001146ec:;
    {
        goto L_001142d0;
    }
L_001146f0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001146f4:;
    {
        cpu->r[14] = 0x001146f8u; fn_00093f34(cpu);
    }
L_001146f8:;
    {
        cpu->r[3] = rd32(0x00114700u + - 0x4cu);
    }
L_001146fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_00114700:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00114704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00114708:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0011470c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00114710:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00114714:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[1]);
    }
L_00114718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00114344;
        }
    }
L_0011471c:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_00114720:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00114724:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_00114728:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011472c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114344;
        }
    }
L_00114730:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00114734:;
    {
        cpu->r[14] = 0x00114738u; fn_00099b28(cpu);
    }
L_00114738:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011473c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00114740:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00114744:;
    {
        cpu->r[14] = 0x00114748u; fn_000a2764(cpu);
    }
L_00114748:;
    {
        goto L_00114344;
    }
L_0011474c:;
    {
        cpu->r[14] = rd32(0x00114754u + - 0x9cu);
    }
L_00114750:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_00114754:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_00114758:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011475c:;
    {
        cpu->r[14] = 0x00114760u; fn_0018aa20(cpu);
    }
L_00114760:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00114764:;
    {
        cpu->r[14] = 0x00114768u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114768:;
    {
        cpu->r[3] = rd32(0x00114770u + - 0xb4u);
    }
L_0011476c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00114770:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00114774:;
    {
        cpu->r[3] = rd32(0x0011477cu + - 0xbcu);
    }
L_00114778:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011477c:;
    {
        cpu->r[14] = 0x00114780u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114780:;
    {
        goto L_00114364;
    }
}

/* _ZN11GS_MainMenu12refreshFontsEv @ 00114784 (arm) */
void fn_00114784(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114784:;
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
L_00114788:;
    {
        cpu->r[4] = rd32(0x00114790u + + 0x2b4u);
    }
L_0011478c:;
    {
        cpu->r[7] = rd32(0x00114794u + + 0x2b4u);
    }
L_00114790:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00114794:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011479cu, cpu->r[4], 0, 0);
    }
L_00114798:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011479c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001147a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001147a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001148d4;
        }
    }
L_001147a8:;
    {
        cpu->r[6] = rd32(0x001147b0u + + 0x29cu);
    }
L_001147ac:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_001147b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001147b4:;
    {
        cpu->r[14] = 0x001147b8u; fn_00096a08(cpu);
    }
L_001147b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001147bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001147c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001147c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001147c8:;
    {
        cpu->r[14] = 0x001147ccu; fn_0018aa44(cpu);
    }
L_001147cc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001147d0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001147d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001147d8:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[0]);
    }
L_001147dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114a08;
        }
    }
L_001147e0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001147e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001147e8:;
    {
        cpu->r[14] = 0x001147ecu; fn_00096a08(cpu);
    }
L_001147ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001147f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001147f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001147f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001147fc:;
    {
        cpu->r[14] = 0x00114800u; fn_0018aa44(cpu);
    }
L_00114800:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114804:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114808:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011480c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00114810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001149cc;
        }
    }
L_00114814:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00114818:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011481c:;
    {
        cpu->r[14] = 0x00114820u; fn_00096a08(cpu);
    }
L_00114820:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114824:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114828:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011482c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114830:;
    {
        cpu->r[14] = 0x00114834u; fn_0018aa44(cpu);
    }
L_00114834:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114838:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011483c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114840:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00114844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114990;
        }
    }
L_00114848:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0011484c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114850:;
    {
        cpu->r[14] = 0x00114854u; fn_00096a08(cpu);
    }
L_00114854:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114858:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011485c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114860:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114864:;
    {
        cpu->r[14] = 0x00114868u; fn_0018aa44(cpu);
    }
L_00114868:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011486c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114870:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114874:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00114878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114954;
        }
    }
L_0011487c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00114880:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114884:;
    {
        cpu->r[14] = 0x00114888u; fn_00096a08(cpu);
    }
L_00114888:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011488c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114890:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114894:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114898:;
    {
        cpu->r[14] = 0x0011489cu; fn_0018aa44(cpu);
    }
L_0011489c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001148a0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001148a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001148a8:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_001148ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114918;
        }
    }
L_001148b0:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_001148b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001148b8:;
    {
        cpu->r[14] = 0x001148bcu; fn_00096a08(cpu);
    }
L_001148bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001148c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001148c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001148c8:;
    {
        cpu->r[14] = 0x001148ccu; fn_0018aa44(cpu);
    }
L_001148cc:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[0]);
    }
L_001148d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001148d4u)) return;
    }
L_001148d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001148d8:;
    {
        cpu->r[14] = 0x001148dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001148dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001148e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001147a8;
        }
    }
L_001148e4:;
    {
        cpu->r[6] = rd32(0x001148ecu + + 0x160u);
    }
L_001148e8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001148ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001148f0:;
    {
        cpu->r[14] = 0x001148f4u; fn_0018aa20(cpu);
    }
L_001148f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001148f8:;
    {
        cpu->r[14] = 0x001148fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001148fc:;
    {
        cpu->r[3] = rd32(0x00114904u + + 0x14cu);
    }
L_00114900:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114904:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114908:;
    {
        cpu->r[3] = rd32(0x00114910u + + 0x144u);
    }
L_0011490c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114910:;
    {
        cpu->r[14] = 0x00114914u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114914:;
    {
        goto L_001147ac;
    }
L_00114918:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011491c:;
    {
        cpu->r[14] = 0x00114920u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001148b0;
        }
    }
L_00114928:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011492c:;
    {
        cpu->r[14] = 0x00114930u; fn_0018aa20(cpu);
    }
L_00114930:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00114934:;
    {
        cpu->r[14] = 0x00114938u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114938:;
    {
        cpu->r[3] = rd32(0x00114940u + + 0x110u);
    }
L_0011493c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114940:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114944:;
    {
        cpu->r[3] = rd32(0x0011494cu + + 0x108u);
    }
L_00114948:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011494c:;
    {
        cpu->r[14] = 0x00114950u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114950:;
    {
        goto L_001148b0;
    }
L_00114954:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114958:;
    {
        cpu->r[14] = 0x0011495cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011495c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011487c;
        }
    }
L_00114964:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114968:;
    {
        cpu->r[14] = 0x0011496cu; fn_0018aa20(cpu);
    }
L_0011496c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114970:;
    {
        cpu->r[14] = 0x00114974u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114974:;
    {
        cpu->r[3] = rd32(0x0011497cu + + 0xd4u);
    }
L_00114978:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011497c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114980:;
    {
        cpu->r[3] = rd32(0x00114988u + + 0xccu);
    }
L_00114984:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114988:;
    {
        cpu->r[14] = 0x0011498cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011498c:;
    {
        goto L_0011487c;
    }
L_00114990:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114994:;
    {
        cpu->r[14] = 0x00114998u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011499c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114848;
        }
    }
L_001149a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001149a4:;
    {
        cpu->r[14] = 0x001149a8u; fn_0018aa20(cpu);
    }
L_001149a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001149ac:;
    {
        cpu->r[14] = 0x001149b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001149b0:;
    {
        cpu->r[3] = rd32(0x001149b8u + + 0x98u);
    }
L_001149b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001149b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001149bc:;
    {
        cpu->r[3] = rd32(0x001149c4u + + 0x90u);
    }
L_001149c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001149c4:;
    {
        cpu->r[14] = 0x001149c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001149c8:;
    {
        goto L_00114848;
    }
L_001149cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001149d0:;
    {
        cpu->r[14] = 0x001149d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001149d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001149d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114814;
        }
    }
L_001149dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001149e0:;
    {
        cpu->r[14] = 0x001149e4u; fn_0018aa20(cpu);
    }
L_001149e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001149e8:;
    {
        cpu->r[14] = 0x001149ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001149ec:;
    {
        cpu->r[3] = rd32(0x001149f4u + + 0x5cu);
    }
L_001149f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001149f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001149f8:;
    {
        cpu->r[3] = rd32(0x00114a00u + + 0x54u);
    }
L_001149fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114a00:;
    {
        cpu->r[14] = 0x00114a04u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114a04:;
    {
        goto L_00114814;
    }
L_00114a08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114a0c:;
    {
        cpu->r[14] = 0x00114a10u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114a10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001147e0;
        }
    }
L_00114a18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114a1c:;
    {
        cpu->r[14] = 0x00114a20u; fn_0018aa20(cpu);
    }
L_00114a20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114a24:;
    {
        cpu->r[14] = 0x00114a28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114a28:;
    {
        cpu->r[3] = rd32(0x00114a30u + + 0x20u);
    }
L_00114a2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114a30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114a34:;
    {
        cpu->r[3] = rd32(0x00114a3cu + + 0x18u);
    }
L_00114a38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114a3c:;
    {
        cpu->r[14] = 0x00114a40u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114a40:;
    {
        goto L_001147e0;
    }
}

/* _ZN11GS_MainMenu11UpdateIntroEv @ 00114a58 (arm) */
void fn_00114a58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114a58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00114a5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114a60:;
    {
        cpu->r[14] = 0x00114a64u; fn_00114784(cpu);
    }
L_00114a64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_00114a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00114a6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00114a70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00114a74:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
        }
    }
L_00114a78:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00114a7c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
        }
    }
L_00114a80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00114a84u)) return;
    }
}

/* _ZN11GS_MainMenu11InitSpritesEv @ 00114a84 (arm) */
void fn_00114a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114a84:;
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
L_00114a88:;
    {
        cpu->r[4] = rd32(0x00114a90u + + 0x314u);
    }
L_00114a8c:;
    {
        cpu->r[7] = rd32(0x00114a94u + + 0x314u);
    }
L_00114a90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00114a94:;
    {
        cpu->r[4] = add_flags(cpu, 0x00114a9cu, cpu->r[4], 0, 0);
    }
L_00114a98:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114a9c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00114aa0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114be4;
        }
    }
L_00114aa8:;
    {
        cpu->r[6] = rd32(0x00114ab0u + + 0x2fcu);
    }
L_00114aac:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00114ab0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114ab4:;
    {
        cpu->r[14] = 0x00114ab8u; fn_00096a08(cpu);
    }
L_00114ab8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114abc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114ac0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114ac4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114ac8:;
    {
        cpu->r[14] = 0x00114accu; fn_0018aa44(cpu);
    }
L_00114acc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114ad0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114ad4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114ad8:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00114adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114d68;
        }
    }
L_00114ae0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00114ae4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114ae8:;
    {
        cpu->r[14] = 0x00114aecu; fn_00096a08(cpu);
    }
L_00114aec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114af0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114af4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114af8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114afc:;
    {
        cpu->r[14] = 0x00114b00u; fn_0018aa44(cpu);
    }
L_00114b00:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114b04:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114b08:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114b0c:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00114b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114d2c;
        }
    }
L_00114b14:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00114b18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114b1c:;
    {
        cpu->r[14] = 0x00114b20u; fn_00096a08(cpu);
    }
L_00114b20:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114b24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114b28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114b2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114b30:;
    {
        cpu->r[14] = 0x00114b34u; fn_0018aa44(cpu);
    }
L_00114b34:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114b38:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114b3c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114b40:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00114b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114cf0;
        }
    }
L_00114b48:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00114b4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00114b50:;
    {
        cpu->r[14] = 0x00114b54u; fn_00096a08(cpu);
    }
L_00114b54:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114b58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114b5c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00114b60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114b64:;
    {
        cpu->r[14] = 0x00114b68u; fn_0018aa44(cpu);
    }
L_00114b68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114b6c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114b70:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114b74:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00114b78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114cb4;
        }
    }
L_00114b7c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114b80:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_00114b84:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114b88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114b8c:;
    {
        cpu->r[14] = 0x00114b90u; fn_0018aa44(cpu);
    }
L_00114b90:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114b94:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00114b98:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114b9c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00114ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114c78;
        }
    }
L_00114ba4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114ba8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00114bac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00114bb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114bb4:;
    {
        cpu->r[14] = 0x00114bb8u; fn_0018aa44(cpu);
    }
L_00114bb8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00114bbc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00114bc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00114bc4:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00114bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114c28;
        }
    }
L_00114bcc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114bd0:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_00114bd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114bd8:;
    {
        cpu->r[14] = 0x00114bdcu; fn_0018aa44(cpu);
    }
L_00114bdc:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[0]);
    }
L_00114be0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00114be4u)) return;
    }
L_00114be4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114be8:;
    {
        cpu->r[14] = 0x00114becu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114aa8;
        }
    }
L_00114bf4:;
    {
        cpu->r[6] = rd32(0x00114bfcu + + 0x1b0u);
    }
L_00114bf8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114bfc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114c00:;
    {
        cpu->r[14] = 0x00114c04u; fn_0018aa20(cpu);
    }
L_00114c04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114c08:;
    {
        cpu->r[14] = 0x00114c0cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114c0c:;
    {
        cpu->r[3] = rd32(0x00114c14u + + 0x19cu);
    }
L_00114c10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114c14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114c18:;
    {
        cpu->r[3] = rd32(0x00114c20u + + 0x194u);
    }
L_00114c1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114c20:;
    {
        cpu->r[14] = 0x00114c24u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114c24:;
    {
        goto L_00114aac;
    }
L_00114c28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00114c2c:;
    {
        cpu->r[14] = 0x00114c30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114c30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114bcc;
        }
    }
L_00114c38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114c3c:;
    {
        cpu->r[14] = 0x00114c40u; fn_0018aa20(cpu);
    }
L_00114c40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00114c44:;
    {
        cpu->r[14] = 0x00114c48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114c48:;
    {
        cpu->r[3] = rd32(0x00114c50u + + 0x160u);
    }
L_00114c4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114c50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114c54:;
    {
        cpu->r[3] = rd32(0x00114c5cu + + 0x158u);
    }
L_00114c58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114c5c:;
    {
        cpu->r[14] = 0x00114c60u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114c60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00114c64:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_00114c68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00114c6c:;
    {
        cpu->r[14] = 0x00114c70u; fn_0018aa44(cpu);
    }
L_00114c70:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[0]);
    }
L_00114c74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00114c78u)) return;
    }
L_00114c78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114c7c:;
    {
        cpu->r[14] = 0x00114c80u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114c80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114ba4;
        }
    }
L_00114c88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114c8c:;
    {
        cpu->r[14] = 0x00114c90u; fn_0018aa20(cpu);
    }
L_00114c90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114c94:;
    {
        cpu->r[14] = 0x00114c98u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114c98:;
    {
        cpu->r[3] = rd32(0x00114ca0u + + 0x110u);
    }
L_00114c9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114ca0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114ca4:;
    {
        cpu->r[3] = rd32(0x00114cacu + + 0x108u);
    }
L_00114ca8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114cac:;
    {
        cpu->r[14] = 0x00114cb0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114cb0:;
    {
        goto L_00114ba4;
    }
L_00114cb4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114cb8:;
    {
        cpu->r[14] = 0x00114cbcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114cbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114cc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114b7c;
        }
    }
L_00114cc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114cc8:;
    {
        cpu->r[14] = 0x00114cccu; fn_0018aa20(cpu);
    }
L_00114ccc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114cd0:;
    {
        cpu->r[14] = 0x00114cd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114cd4:;
    {
        cpu->r[3] = rd32(0x00114cdcu + + 0xd4u);
    }
L_00114cd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114cdc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114ce0:;
    {
        cpu->r[3] = rd32(0x00114ce8u + + 0xccu);
    }
L_00114ce4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114ce8:;
    {
        cpu->r[14] = 0x00114cecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114cec:;
    {
        goto L_00114b7c;
    }
L_00114cf0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114cf4:;
    {
        cpu->r[14] = 0x00114cf8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114cf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114b48;
        }
    }
L_00114d00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d04:;
    {
        cpu->r[14] = 0x00114d08u; fn_0018aa20(cpu);
    }
L_00114d08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114d0c:;
    {
        cpu->r[14] = 0x00114d10u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114d10:;
    {
        cpu->r[3] = rd32(0x00114d18u + + 0x98u);
    }
L_00114d14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d1c:;
    {
        cpu->r[3] = rd32(0x00114d24u + + 0x90u);
    }
L_00114d20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d24:;
    {
        cpu->r[14] = 0x00114d28u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114d28:;
    {
        goto L_00114b48;
    }
L_00114d2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114d30:;
    {
        cpu->r[14] = 0x00114d34u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114d34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114b14;
        }
    }
L_00114d3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d40:;
    {
        cpu->r[14] = 0x00114d44u; fn_0018aa20(cpu);
    }
L_00114d44:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114d48:;
    {
        cpu->r[14] = 0x00114d4cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114d4c:;
    {
        cpu->r[3] = rd32(0x00114d54u + + 0x5cu);
    }
L_00114d50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d58:;
    {
        cpu->r[3] = rd32(0x00114d60u + + 0x54u);
    }
L_00114d5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d60:;
    {
        cpu->r[14] = 0x00114d64u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114d64:;
    {
        goto L_00114b14;
    }
L_00114d68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114d6c:;
    {
        cpu->r[14] = 0x00114d70u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00114d70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00114d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114ae0;
        }
    }
L_00114d78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d7c:;
    {
        cpu->r[14] = 0x00114d80u; fn_0018aa20(cpu);
    }
L_00114d80:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00114d84:;
    {
        cpu->r[14] = 0x00114d88u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00114d88:;
    {
        cpu->r[3] = rd32(0x00114d90u + + 0x20u);
    }
L_00114d8c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00114d90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d94:;
    {
        cpu->r[3] = rd32(0x00114d9cu + + 0x18u);
    }
L_00114d98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00114d9c:;
    {
        cpu->r[14] = 0x00114da0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00114da0:;
    {
        goto L_00114ae0;
    }
}

/* _ZN14GS_GetFullGame8isKindOfEi @ 00114db8 (arm) */
void fn_00114db8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114db8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005au, 1, 1);
    }
L_00114dbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00114dc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00114dc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_29 @ 00114dc8 (arm) */
void fn_00114dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114dc8:;
    {
        cpu->r[3] = rd32(0x00114dd0u + + 0x20u);
    }
L_00114dcc:;
    {
        cpu->r[1] = rd32(0x00114dd4u + + 0x20u);
    }
L_00114dd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00114dd8u, cpu->r[3], 0, 0);
    }
L_00114dd4:;
    {
        cpu->r[2] = rd32(0x00114ddcu + + 0x1cu);
    }
L_00114dd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00114ddc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00114de4u, cpu->r[2], 0, 0);
    }
L_00114de0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00114de4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00114de8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00114dec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GS_GetFullGameD1Ev @ 00114dfc (arm) */
void fn_00114dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114dfc:;
    {
        cpu->r[3] = rd32(0x00114e04u + + 0x24u);
    }
L_00114e00:;
    {
        cpu->r[2] = rd32(0x00114e08u + + 0x24u);
    }
L_00114e04:;
    {
        cpu->r[3] = add_flags(cpu, 0x00114e0cu, cpu->r[3], 0, 0);
    }
L_00114e08:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00114e0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00114e10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114e14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00114e18:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00114e1c:;
    {
        cpu->r[14] = 0x00114e20u; fn_000ec21c(cpu);
    }
L_00114e20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00114e24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00114e28u)) return;
    }
}

/* _ZN14GS_GetFullGame22ProcessOnMouseButtonUpEv @ 00114e30 (arm) */
void fn_00114e30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114e30:;
    {
        cpu->r[3] = rd32(0x00114e38u + + 0x40u);
    }
L_00114e34:;
    {
        cpu->r[2] = rd32(0x00114e3cu + + 0x40u);
    }
L_00114e38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00114e3c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00114e40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114e44:;
    {
        cpu->r[3] = add_flags(cpu, 0x00114e4cu, cpu->r[3], 0, 0);
    }
L_00114e48:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00114e4c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[5]);
    }
L_00114e50:;
    {
        cpu->r[14] = 0x00114e54u; fn_00110c40(cpu);
    }
L_00114e54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa18u);
    }
L_00114e58:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00114e5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00114e60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00114e64:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_00114e68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00114e6c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[3]);
        }
    }
L_00114e70:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00114e74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00114e78u)) return;
    }
}

/* _ZN14GS_GetFullGame18ProcessOnMouseDragEv @ 00114e80 (arm) */
void fn_00114e80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114e80:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00114e84:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_00114e88:;
    {
        return fn_00110818(cpu);
    }
}

/* _ZN14GS_GetFullGame24ProcessOnMouseButtonDownEv @ 00114e8c (arm) */
void fn_00114e8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114e8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00114e90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114e94:;
    {
        cpu->r[14] = 0x00114e98u; fn_00110498(cpu);
    }
L_00114e98:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00114e9c:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_00114ea0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00114ea4u)) return;
    }
}

/* _ZN14GS_GetFullGame6ResumeEv @ 00114ea4 (arm) */
void fn_00114ea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114ea4:;
    {
        return fn_001142a0(cpu);
    }
}

/* _ZN14GS_GetFullGame6UpdateEv @ 00114ea8 (arm) */
void fn_00114ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00114ea8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00114eac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00114eb0:;
    {
        cpu->r[5] = rd32(0x00114eb8u + + 0x378u);
    }
L_00114eb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00114eb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00114ebc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00114ec4u, cpu->r[5], 0, 0);
    }
L_00114ec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00114ec4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00115078;
        case 1: goto L_00114eec;
        case 2: goto L_00115004;
        case 3: goto L_00114ffc;
        case 4: goto L_00114ffc;
        case 5: goto L_00114ffc;
        case 6: goto L_00114ffc;
        case 7: goto L_00114eec;
        default: guest_unimplemented(cpu, 0x00114ec4u); return; }
        }
    }
L_00114ec8:;
    {
        goto L_00114ffc;
    }
L_00114eec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00114ef0:;
    {
        cpu->r[14] = 0x00114ef4u; fn_000eb59c(cpu);
    }
L_00114ef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00114ef8:;
    {
        cpu->r[14] = 0x00114efcu; fn_00128a5c(cpu);
    }
L_00114efc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa18u);
    }
L_00114f00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00114f04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00114f08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00114f0c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00114f10:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[1]);
    }
L_00114f14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00114f18:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_00114f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115090;
        }
    }
L_00114f20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00114f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001151f0;
        }
    }
L_00114f28:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00114f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115210;
        }
    }
L_00114f30:;
    {
        cpu->r[3] = rd32(0x00114f38u + + 0x2fcu);
    }
L_00114f34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00114f38:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00114f3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00114f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114f90;
        }
    }
L_00114f44:;
    {
        cpu->r[1] = rd32(0x00114f4cu + + 0x2ecu);
    }
L_00114f48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000980u, 0, 0);
    }
L_00114f4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00114f50:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00114f54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00114f58:;
    {
        cpu->r[1] = rd32(0x00114f60u + + 0x2dcu);
    }
L_00114f5c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_00114f60:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00114f64:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00114f68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00114f6c:;
    {
        cpu->r[1] = rd16(cpu->r[1]);
    }
L_00114f70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00114f74:;
    {
        vfp_sync_flags(cpu);
    }
L_00114f78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114f90;
        }
    }
L_00114f7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_00114f80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00114f84:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00114f88:;
    {
        vfp_sync_flags(cpu);
    }
L_00114f8c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001151a8;
        }
    }
L_00114f90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x970u);
    }
L_00114f94:;
    {
        cpu->r[1] = 0x00007879u;
    }
L_00114f98:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x7878u << 16);
    }
L_00114f9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00114fa0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00114fa4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[0]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00114fa8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00114fac:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 3u, &shc), cpu->r[0], 1, 0);
    }
L_00114fb0:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_00114fb4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00114fb8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00114fbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_00114fc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00114fd4;
        }
    }
L_00114fc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00114fc8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_00114fcc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_00114fd0:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_00114fd4:;
    {
        cpu->r[1] = rd32(0x00114fdcu + + 0x264u);
    }
L_00114fd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x964u);
    }
L_00114fdc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00114fe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00114fe4:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_00114fe8:;
    {
        cpu->r[3] = rd16(cpu->r[1]);
    }
L_00114fec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00114ff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001150b4;
        }
    }
L_00114ff4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00114ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115174;
        }
    }
L_00114ffc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00115000:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00115004u)) return;
    }
L_00115004:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_00115008:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011500c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00115010:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[3]);
        }
    }
L_00115014:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00114ffc;
        }
    }
L_00115018:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0011501c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00115020:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00115024:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
        }
    }
L_00115028:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
        }
    }
L_0011502c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115084;
        }
    }
L_00115030:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00115034:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00115038:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00114ffc;
        }
    }
L_0011503c:;
    {
        cpu->r[0] = rd32(0x00115044u + + 0x200u);
    }
L_00115040:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00115044:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00115048:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0011504c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00115050:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00115054:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00115058:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011505c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115060:;
    {
        cpu->r[14] = 0x00115064u; fn_000fd248(cpu);
    }
L_00115064:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00115068:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011506c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00115070:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00115074:;
    {
        return fn_000f34e8(cpu);
    }
L_00115078:;
    {
        cpu->r[14] = 0x0011507cu; fn_00114a58(cpu);
    }
L_0011507c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114ffc;
        }
    }
L_00115084:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00115088:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0011508c:;
    {
        goto L_00114ffc;
    }
L_00115090:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa1cu);
    }
L_00115094:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00115098:;
    {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[3]);
    }
L_0011509c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 1);
    }
L_001150a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001150a4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[2]);
        }
    }
L_001150a8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[3]);
        }
    }
L_001150ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001150b0:;
    {
        goto L_00114f30;
    }
L_001150b4:;
    {
        cpu->r[1] = rd32(0x001150bcu + + 0x17cu);
    }
L_001150b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000009c0u, 0, 0);
    }
L_001150bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001150c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_001150c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001150c8:;
    {
        cpu->r[1] = rd32(0x001150d0u + + 0x16cu);
    }
L_001150cc:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_001150d0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001150d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001150d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001150dc:;
    {
        cpu->r[1] = rd16(cpu->r[1]);
    }
L_001150e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001150e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001150e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114ff4;
        }
    }
L_001150ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000009d0u, 0, 0);
    }
L_001150f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001150f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001150f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001150fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00115100:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114ff4;
        }
    }
L_00115104:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00115108:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0011510c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00115110:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000009d0u, 0, 0);
    }
L_00115114:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00115118:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0011511c:;
    {
        vfp_sync_flags(cpu);
    }
L_00115120:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114ff4;
        }
    }
L_00115124:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000009d0u, 0, 0);
    }
L_00115128:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0011512c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00115130:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00115134:;
    {
        vfp_sync_flags(cpu);
    }
L_00115138:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114ff4;
        }
    }
L_0011513c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00115140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114ffc;
        }
    }
L_00115144:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00115148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00114ffc;
        }
    }
L_0011514c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00115150:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_00115154:;
    {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[2]);
    }
L_00115158:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[3] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_0011515c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00115160:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00115164:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_00115168:;
    {
        cpu->r[3] = rd32(0x00115170u + + 0xd8u);
    }
L_0011516c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00115170:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00115174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x97cu);
    }
L_00115178:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0011517c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00115180:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000063u, 1, 1);
    }
L_00115184:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00115198;
        }
    }
L_00115188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011518c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000063u);
        }
    }
L_00115190:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_00115194:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_00115198:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x968u);
    }
L_0011519c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001151a0:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001151a4:;
    {
        goto L_00114ffc;
    }
L_001151a8:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_001151ac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001151b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001151b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000980u, 0, 0);
    }
L_001151b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001151bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001151c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001151c4:;
    {
        vfp_sync_flags(cpu);
    }
L_001151c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114f90;
        }
    }
L_001151cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_001151d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001151d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001151d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001151dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001151e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00114f90;
        }
    }
L_001151e4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001151e8:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_001151ec:;
    {
        goto L_00114fb4;
    }
L_001151f0:;
    {
        cpu->r[3] = rd32(0x001151f8u + + 0x50u);
    }
L_001151f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa10u);
    }
L_001151f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001151fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00115200:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00115204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00115208:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[3]);
    }
L_0011520c:;
    {
        goto L_00114f30;
    }
L_00115210:;
    {
        cpu->r[3] = rd32(0x00115218u + + 0x30u);
    }
L_00115214:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa10u);
    }
L_00115218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011521c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00115220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00115224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00115228:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[3]);
    }
L_0011522c:;
    {
        goto L_00114f30;
    }
}

/* _ZN14GS_GetFullGame8DoActionEii @ 0011524c (arm) */
void fn_0011524c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011524c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00115250:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x94u);
    }
L_00115254:;
    {
        cpu->r[4] = rd32(0x0011525cu + + 0x110u);
    }
L_00115258:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0011525c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_00115260:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
        }
    }
L_00115264:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00115268:;
    {
        cpu->r[4] = add_flags(cpu, 0x00115270u, cpu->r[4], 0, 0);
    }
L_0011526c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00115270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00115274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115280;
        }
    }
L_00115278:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0011527c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00115280u)) return;
    }
L_00115280:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00115284:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_00115288:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0011528c:;
    {
        cpu->r[7] = 0x00000002u;
    }
L_00115290:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00115294:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00115298:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0011529c:;
    {
        cpu->r[14] = 0x001152a0u; fn_00093f34(cpu);
    }
L_001152a0:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_001152a4:;
    {
        wr32(cpu->r[8] + + 0x94u, cpu->r[7]);
    }
L_001152a8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001152ac:;
    {
        wr32(cpu->r[8] + + 0xc4u, cpu->r[5]);
    }
L_001152b0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001152b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001152b8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001152bc:;
    {
        wr32(cpu->r[8] + + 0x8f4u, cpu->r[3]);
    }
L_001152c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001152f4;
        }
    }
L_001152c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001152c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00115278;
        }
    }
L_001152cc:;
    {
        cpu->r[0] = rd32(0x001152d4u + + 0x9cu);
    }
L_001152d0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001152d4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001152d8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001152dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001152e0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001152e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001152e8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001152ec:;
    {
        cpu->r[14] = 0x001152f0u; fn_000fd248(cpu);
    }
L_001152f0:;
    {
        goto L_00115278;
    }
L_001152f4:;
    {
        cpu->r[0] = rd32(0x001152fcu + + 0x74u);
    }
L_001152f8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001152fc:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00115300:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00115304:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00115308:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011530c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00115310:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00115314:;
    {
        cpu->r[14] = 0x00115318u; fn_000fd248(cpu);
    }
L_00115318:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0011531c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00115320:;
    {
        cpu->r[14] = 0x00115324u; fn_000f3430(cpu);
    }
L_00115324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115340;
        }
    }
L_0011532c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00115330:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00115334:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00115338:;
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
L_0011533c:;
    {
        return fn_000f34e8(cpu);
    }
L_00115340:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00115344:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00115348:;
    {
        cpu->r[14] = 0x0011534cu; fn_0018ba6c(cpu);
    }
L_0011534c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00115350:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00115354:;
    {
        cpu->r[14] = 0x00115358u; fn_00110010(cpu);
    }
L_00115358:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011535c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00115360:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00115364:;
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
L_00115368:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN14GS_GetFullGameD0Ev @ 00115374 (arm) */
void fn_00115374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00115374:;
    {
        cpu->r[3] = rd32(0x0011537cu + + 0x2cu);
    }
L_00115378:;
    {
        cpu->r[2] = rd32(0x00115380u + + 0x2cu);
    }
L_0011537c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00115384u, cpu->r[3], 0, 0);
    }
L_00115380:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00115384:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00115388:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011538c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00115390:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00115394:;
    {
        cpu->r[14] = 0x00115398u; fn_000ec21c(cpu);
    }
L_00115398:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011539c:;
    {
        cpu->r[14] = 0x001153a0u; fn_0018ba20(cpu);
    }
L_001153a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001153a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001153a8u)) return;
    }
}

/* _ZN14GS_GetFullGame17ApplyMenuSettingsEv @ 001153b0 (arm) */
void fn_001153b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001153b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001153b4:;
    {
        cpu->r[6] = rd32(0x001153bcu + + 0x1d8u);
    }
L_001153b8:;
    {
        cpu->r[3] = rd32(0x001153c0u + + 0x1d8u);
    }
L_001153bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001153c0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001153c8u, cpu->r[6], 0, 0);
    }
L_001153c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001153c8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001153cc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001153d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001153d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115550;
        }
    }
L_001153d8:;
    {
        cpu->r[5] = rd32(0x001153e0u + + 0x1bcu);
    }
L_001153dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001153e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001153e4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001153e8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001153ec:;
    {
        cpu->r[14] = 0x001153f0u; fn_0018aa44(cpu);
    }
L_001153f0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x958u);
    }
L_001153f4:;
    {
        cpu->r[3] = rd32(0x001153fcu + + 0x1a4u);
    }
L_001153f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001153fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00115400:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115404:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011540cu, cpu->r[3], 0, 0);
    }
L_00115408:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_0011540c:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00115410:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115414:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[14]);
    }
L_00115418:;
    {
        cpu->r[14] = 0x00000584u;
    }
L_0011541c:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[14]);
    }
L_00115420:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115424:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115428:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0011542c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00115430:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_00115434:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00115438:;
    {
        cpu->r[14] = 0x0011543cu; fn_000a8a2c(cpu);
    }
L_0011543c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00115440:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00115444:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00115448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000006eu, 0, 0);
    }
L_0011544c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00115450:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00115454:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00115458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_0011545c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115460:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000006eu, 0, 0);
    }
L_00115464:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00115468:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[5]);
    }
L_0011546c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115470:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[5]);
    }
L_00115474:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00115478:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[5]);
    }
L_0011547c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[5]);
    }
L_00115480:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00115484:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[5]);
    }
L_00115488:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0011548c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115490:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[12]);
    }
L_00115494:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115498:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0011549c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001154a0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001154a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001154a8:;
    {
        wr32(cpu->r[4] + + 0x998u, cpu->r[12]);
    }
L_001154ac:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[12]);
    }
L_001154b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001154b4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001154b8:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[12]);
    }
L_001154bc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001154c0:;
    {
        wr32(cpu->r[4] + + 0x994u, cpu->r[12]);
    }
L_001154c4:;
    {
        cpu->r[14] = 0x001154c8u; fn_000a8a2c(cpu);
    }
L_001154c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001154cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_001154d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_001154d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000006eu, 0, 0);
    }
L_001154d8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_001154dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001154e0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001154e4:;
    {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[5]);
    }
L_001154e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000006eu, 0, 0);
    }
L_001154ec:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_001154f0:;
    {
        cpu->r[3] = rd32(0x001154f8u + + 0xacu);
    }
L_001154f4:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[5]);
    }
L_001154f8:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[5]);
    }
L_001154fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00115500:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00115504:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00115508:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[5]);
    }
L_0011550c:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[5]);
    }
L_00115510:;
    {
        wr32(cpu->r[4] + + 0x9d4u, cpu->r[2]);
    }
L_00115514:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00115518:;
    {
        wr32(cpu->r[4] + + 0xa14u, cpu->r[5]);
    }
L_0011551c:;
    {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[5]);
    }
L_00115520:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00115524:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00115528:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011552c:;
    {
        wr32(cpu->r[4] + + 0x9dcu, cpu->r[3]);
    }
L_00115530:;
    {
        wr32(cpu->r[4] + + 0x9ccu, cpu->r[3]);
    }
L_00115534:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00115538:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0011553c:;
    {
        wr32(cpu->r[4] + + 0x9d0u, cpu->r[12]);
    }
L_00115540:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00115544:;
    {
        wr32(cpu->r[4] + + 0x9d8u, cpu->r[2]);
    }
L_00115548:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0011554c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00115550u)) return;
    }
L_00115550:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00115554:;
    {
        cpu->r[14] = 0x00115558u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00115558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011555c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001153d8;
        }
    }
L_00115560:;
    {
        cpu->r[5] = rd32(0x00115568u + + 0x34u);
    }
L_00115564:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00115568:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011556c:;
    {
        cpu->r[14] = 0x00115570u; fn_0018aa20(cpu);
    }
L_00115570:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00115574:;
    {
        cpu->r[14] = 0x00115578u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115578:;
    {
        cpu->r[3] = rd32(0x00115580u + + 0x28u);
    }
L_0011557c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115580:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00115584:;
    {
        cpu->r[3] = rd32(0x0011558cu + + 0x20u);
    }
L_00115588:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011558c:;
    {
        cpu->r[14] = 0x00115590u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115590:;
    {
        goto L_001153dc;
    }
}

/* _ZN14GS_GetFullGameC1Ev @ 001155b0 (arm) */
void fn_001155b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001155b0:;
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
L_001155b4:;
    {
        cpu->r[4] = rd32(0x001155bcu + + 0x260u);
    }
L_001155b8:;
    {
        cpu->r[7] = rd32(0x001155c0u + + 0x260u);
    }
L_001155bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001155c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001155c8u, cpu->r[4], 0, 0);
    }
L_001155c4:;
    {
        cpu->r[14] = 0x001155c8u; fn_0010ffa8(cpu);
    }
L_001155c8:;
    {
        cpu->r[2] = rd32(0x001155d0u + + 0x254u);
    }
L_001155cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001155d4u + + 0x244u);
    }
L_001155d0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001155d4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001155d8:;
    {
        wr32(cpu->r[5] + + 0x9f8u, cpu->r[1]);
    }
L_001155dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001155e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001155e4:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001155e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001155ec:;
    {
        wr8(cpu->r[5] + + 0xa0cu, cpu->r[3]);
    }
L_001155f0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_001155f4:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_001155f8:;
    {
        wr8(cpu->r[5] + + 0x9bcu, cpu->r[3]);
    }
L_001155fc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00115600:;
    {
        wr8(cpu->r[5] + + 0x9bdu, cpu->r[3]);
    }
L_00115604:;
    {
        wr32(cpu->r[5] + + 0x9b8u, cpu->r[2]);
    }
L_00115608:;
    {
        wr32(cpu->r[5] + + 0x9b4u, cpu->r[2]);
    }
L_0011560c:;
    {
        wr8(cpu->r[5] + + 0x9c8u, cpu->r[3]);
    }
L_00115610:;
    {
        wr8(cpu->r[5] + + 0xa00u, cpu->r[3]);
    }
L_00115614:;
    {
        wr8(cpu->r[5] + + 0xa01u, cpu->r[3]);
    }
L_00115618:;
    {
        wr32(cpu->r[5] + + 0x9fcu, cpu->r[2]);
    }
L_0011561c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001156e4;
        }
    }
L_00115620:;
    {
        cpu->r[6] = rd32(0x00115628u + + 0x200u);
    }
L_00115624:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00115628:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011562c:;
    {
        cpu->r[14] = 0x00115630u; fn_00096a08(cpu);
    }
L_00115630:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115634:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00115638:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011563c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115640:;
    {
        cpu->r[14] = 0x00115644u; fn_0018aa44(cpu);
    }
L_00115644:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00115648:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011564c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115650:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[0]);
    }
L_00115654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001157dc;
        }
    }
L_00115658:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011565c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00115660:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00115664:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00115668:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011566c:;
    {
        cpu->r[14] = 0x00115670u; fn_0018aa58(cpu);
    }
L_00115670:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00115674:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00115678:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011567c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001157a0;
        }
    }
L_00115680:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115684:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00115688:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011568c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00115690:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115694:;
    {
        cpu->r[14] = 0x00115698u; fn_0018aa58(cpu);
    }
L_00115698:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011569c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001156a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001156a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115764;
        }
    }
L_001156a8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001156ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001156b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001156b4:;
    {
        cpu->r[14] = 0x001156b8u; fn_0018b5c8(cpu);
    }
L_001156b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001156bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001156c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001156c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115728;
        }
    }
L_001156c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001156cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001156d0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001156d4:;
    {
        cpu->r[14] = 0x001156d8u; fn_0018aa44(cpu);
    }
L_001156d8:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[0]);
    }
L_001156dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001156e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001156e4u)) return;
    }
L_001156e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001156e8:;
    {
        cpu->r[14] = 0x001156ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001156ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001156f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115620;
        }
    }
L_001156f4:;
    {
        cpu->r[6] = rd32(0x001156fcu + + 0x12cu);
    }
L_001156f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001156fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115700:;
    {
        cpu->r[14] = 0x00115704u; fn_0018aa20(cpu);
    }
L_00115704:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115708:;
    {
        cpu->r[14] = 0x0011570cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011570c:;
    {
        cpu->r[3] = rd32(0x00115714u + + 0x118u);
    }
L_00115710:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115714:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115718:;
    {
        cpu->r[3] = rd32(0x00115720u + + 0x110u);
    }
L_0011571c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115720:;
    {
        cpu->r[14] = 0x00115724u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115724:;
    {
        goto L_00115624;
    }
L_00115728:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0011572c:;
    {
        cpu->r[14] = 0x00115730u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00115730:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001156c8;
        }
    }
L_00115738:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011573c:;
    {
        cpu->r[14] = 0x00115740u; fn_0018aa20(cpu);
    }
L_00115740:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00115744:;
    {
        cpu->r[14] = 0x00115748u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115748:;
    {
        cpu->r[3] = rd32(0x00115750u + + 0xdcu);
    }
L_0011574c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115750:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115754:;
    {
        cpu->r[3] = rd32(0x0011575cu + + 0xd4u);
    }
L_00115758:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011575c:;
    {
        cpu->r[14] = 0x00115760u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115760:;
    {
        goto L_001156c8;
    }
L_00115764:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115768:;
    {
        cpu->r[14] = 0x0011576cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0011576c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001156a8;
        }
    }
L_00115774:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115778:;
    {
        cpu->r[14] = 0x0011577cu; fn_0018aa20(cpu);
    }
L_0011577c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115780:;
    {
        cpu->r[14] = 0x00115784u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115784:;
    {
        cpu->r[3] = rd32(0x0011578cu + + 0xa0u);
    }
L_00115788:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011578c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115790:;
    {
        cpu->r[3] = rd32(0x00115798u + + 0x98u);
    }
L_00115794:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115798:;
    {
        cpu->r[14] = 0x0011579cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011579c:;
    {
        goto L_001156a8;
    }
L_001157a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001157a4:;
    {
        cpu->r[14] = 0x001157a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001157a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001157ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115680;
        }
    }
L_001157b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001157b4:;
    {
        cpu->r[14] = 0x001157b8u; fn_0018aa20(cpu);
    }
L_001157b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001157bc:;
    {
        cpu->r[14] = 0x001157c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001157c0:;
    {
        cpu->r[3] = rd32(0x001157c8u + + 0x64u);
    }
L_001157c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001157c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001157cc:;
    {
        cpu->r[3] = rd32(0x001157d4u + + 0x5cu);
    }
L_001157d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001157d4:;
    {
        cpu->r[14] = 0x001157d8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001157d8:;
    {
        goto L_00115680;
    }
L_001157dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001157e0:;
    {
        cpu->r[14] = 0x001157e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001157e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001157e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115658;
        }
    }
L_001157ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001157f0:;
    {
        cpu->r[14] = 0x001157f4u; fn_0018aa20(cpu);
    }
L_001157f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001157f8:;
    {
        cpu->r[14] = 0x001157fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001157fc:;
    {
        cpu->r[3] = rd32(0x00115804u + + 0x28u);
    }
L_00115800:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115804:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115808:;
    {
        cpu->r[3] = rd32(0x00115810u + + 0x20u);
    }
L_0011580c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115810:;
    {
        cpu->r[14] = 0x00115814u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115814:;
    {
        goto L_00115658;
    }
}

/* _ZN14GS_GetFullGameC2Ev @ 00115834 (arm) */
void fn_00115834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00115834:;
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
L_00115838:;
    {
        cpu->r[4] = rd32(0x00115840u + + 0x260u);
    }
L_0011583c:;
    {
        cpu->r[7] = rd32(0x00115844u + + 0x260u);
    }
L_00115840:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00115844:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011584cu, cpu->r[4], 0, 0);
    }
L_00115848:;
    {
        cpu->r[14] = 0x0011584cu; fn_0010ffa8(cpu);
    }
L_0011584c:;
    {
        cpu->r[2] = rd32(0x00115854u + + 0x254u);
    }
L_00115850:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00115858u + + 0x244u);
    }
L_00115854:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00115858:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011585c:;
    {
        wr32(cpu->r[5] + + 0x9f8u, cpu->r[1]);
    }
L_00115860:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00115864:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00115868:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_0011586c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00115870:;
    {
        wr8(cpu->r[5] + + 0xa0cu, cpu->r[3]);
    }
L_00115874:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115878:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0011587c:;
    {
        wr8(cpu->r[5] + + 0x9bcu, cpu->r[3]);
    }
L_00115880:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00115884:;
    {
        wr8(cpu->r[5] + + 0x9bdu, cpu->r[3]);
    }
L_00115888:;
    {
        wr32(cpu->r[5] + + 0x9b8u, cpu->r[2]);
    }
L_0011588c:;
    {
        wr32(cpu->r[5] + + 0x9b4u, cpu->r[2]);
    }
L_00115890:;
    {
        wr8(cpu->r[5] + + 0x9c8u, cpu->r[3]);
    }
L_00115894:;
    {
        wr8(cpu->r[5] + + 0xa00u, cpu->r[3]);
    }
L_00115898:;
    {
        wr8(cpu->r[5] + + 0xa01u, cpu->r[3]);
    }
L_0011589c:;
    {
        wr32(cpu->r[5] + + 0x9fcu, cpu->r[2]);
    }
L_001158a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115968;
        }
    }
L_001158a4:;
    {
        cpu->r[6] = rd32(0x001158acu + + 0x200u);
    }
L_001158a8:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001158ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001158b0:;
    {
        cpu->r[14] = 0x001158b4u; fn_00096a08(cpu);
    }
L_001158b4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001158b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001158bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001158c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001158c4:;
    {
        cpu->r[14] = 0x001158c8u; fn_0018aa44(cpu);
    }
L_001158c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001158cc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001158d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001158d4:;
    {
        wr32(cpu->r[5] + + 0x954u, cpu->r[0]);
    }
L_001158d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115a60;
        }
    }
L_001158dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001158e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001158e4:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001158e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001158ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001158f0:;
    {
        cpu->r[14] = 0x001158f4u; fn_0018aa58(cpu);
    }
L_001158f4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001158f8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001158fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115a24;
        }
    }
L_00115904:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115908:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011590c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00115910:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00115914:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115918:;
    {
        cpu->r[14] = 0x0011591cu; fn_0018aa58(cpu);
    }
L_0011591c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00115920:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00115924:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001159e8;
        }
    }
L_0011592c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115930:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00115934:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115938:;
    {
        cpu->r[14] = 0x0011593cu; fn_0018b5c8(cpu);
    }
L_0011593c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00115940:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00115944:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001159ac;
        }
    }
L_0011594c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00115950:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115954:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00115958:;
    {
        cpu->r[14] = 0x0011595cu; fn_0018aa44(cpu);
    }
L_0011595c:;
    {
        wr32(cpu->r[5] + + 0x958u, cpu->r[0]);
    }
L_00115960:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00115964:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00115968u)) return;
    }
L_00115968:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011596c:;
    {
        cpu->r[14] = 0x00115970u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00115970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001158a4;
        }
    }
L_00115978:;
    {
        cpu->r[6] = rd32(0x00115980u + + 0x12cu);
    }
L_0011597c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00115980:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115984:;
    {
        cpu->r[14] = 0x00115988u; fn_0018aa20(cpu);
    }
L_00115988:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011598c:;
    {
        cpu->r[14] = 0x00115990u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115990:;
    {
        cpu->r[3] = rd32(0x00115998u + + 0x118u);
    }
L_00115994:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115998:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011599c:;
    {
        cpu->r[3] = rd32(0x001159a4u + + 0x110u);
    }
L_001159a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001159a4:;
    {
        cpu->r[14] = 0x001159a8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001159a8:;
    {
        goto L_001158a8;
    }
L_001159ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001159b0:;
    {
        cpu->r[14] = 0x001159b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001159b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001159b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011594c;
        }
    }
L_001159bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001159c0:;
    {
        cpu->r[14] = 0x001159c4u; fn_0018aa20(cpu);
    }
L_001159c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001159c8:;
    {
        cpu->r[14] = 0x001159ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001159cc:;
    {
        cpu->r[3] = rd32(0x001159d4u + + 0xdcu);
    }
L_001159d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001159d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001159d8:;
    {
        cpu->r[3] = rd32(0x001159e0u + + 0xd4u);
    }
L_001159dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001159e0:;
    {
        cpu->r[14] = 0x001159e4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001159e4:;
    {
        goto L_0011594c;
    }
L_001159e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001159ec:;
    {
        cpu->r[14] = 0x001159f0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001159f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001159f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011592c;
        }
    }
L_001159f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001159fc:;
    {
        cpu->r[14] = 0x00115a00u; fn_0018aa20(cpu);
    }
L_00115a00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115a04:;
    {
        cpu->r[14] = 0x00115a08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115a08:;
    {
        cpu->r[3] = rd32(0x00115a10u + + 0xa0u);
    }
L_00115a0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115a10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a14:;
    {
        cpu->r[3] = rd32(0x00115a1cu + + 0x98u);
    }
L_00115a18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a1c:;
    {
        cpu->r[14] = 0x00115a20u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115a20:;
    {
        goto L_0011592c;
    }
L_00115a24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115a28:;
    {
        cpu->r[14] = 0x00115a2cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00115a2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115904;
        }
    }
L_00115a34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115a38:;
    {
        cpu->r[14] = 0x00115a3cu; fn_0018aa20(cpu);
    }
L_00115a3c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115a40:;
    {
        cpu->r[14] = 0x00115a44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115a44:;
    {
        cpu->r[3] = rd32(0x00115a4cu + + 0x64u);
    }
L_00115a48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115a4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a50:;
    {
        cpu->r[3] = rd32(0x00115a58u + + 0x5cu);
    }
L_00115a54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a58:;
    {
        cpu->r[14] = 0x00115a5cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115a5c:;
    {
        goto L_00115904;
    }
L_00115a60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115a64:;
    {
        cpu->r[14] = 0x00115a68u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00115a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00115a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001158dc;
        }
    }
L_00115a70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115a74:;
    {
        cpu->r[14] = 0x00115a78u; fn_0018aa20(cpu);
    }
L_00115a78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115a7c:;
    {
        cpu->r[14] = 0x00115a80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00115a80:;
    {
        cpu->r[3] = rd32(0x00115a88u + + 0x28u);
    }
L_00115a84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115a88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a8c:;
    {
        cpu->r[3] = rd32(0x00115a94u + + 0x20u);
    }
L_00115a90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00115a94:;
    {
        cpu->r[14] = 0x00115a98u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00115a98:;
    {
        goto L_001158dc;
    }
}

/* _ZN14GS_GetFullGame6RenderEv @ 00115ab8 (arm) */
void fn_00115ab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00115ab8:;
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
L_00115abc:;
    {
        cpu->r[6] = rd32(0x00115ac4u + + 0x634u);
    }
L_00115ac0:;
    {
        cpu->r[3] = rd32(0x00115ac8u + + 0x634u);
    }
L_00115ac4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000a40u, 1, 0);
    }
L_00115ac8:;
    {
        cpu->r[6] = add_flags(cpu, 0x00115ad0u, cpu->r[6], 0, 0);
    }
L_00115acc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00115ad0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00115ad4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00115ad8:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_00115adc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00115ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116010;
        }
    }
L_00115ae4:;
    {
        cpu->r[1] = rd32(0x00115aecu + + 0x614u);
    }
L_00115ae8:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00115aec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00115af0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00115af4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011601c;
        }
    }
L_00115afc:;
    {
        cpu->r[2] = rd32(0x00115b04u + + 0x600u);
    }
L_00115b00:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00115b04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00115b08:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00115b0c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00115b10:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115b14:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00115b18:;
    {
        cpu->r[14] = 0x00115b1cu; fn_0018aa44(cpu);
    }
L_00115b1c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115b20:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00115b24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115b28:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115b2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115b30:;
    {
        cpu->r[14] = 0x00115b34u; fn_000ad8a0(cpu);
    }
L_00115b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00115b38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00115b3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00115b68;
        }
    }
L_00115b40:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00115b44:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00115b48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00115b4c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00115b50:;
    {
        cpu->r[14] = 0x00115b58u;
    }
L_00115b54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00115b58u)) return;
    }
L_00115b58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00115b5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00115b60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00115b64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00115b40;
        }
    }
L_00115b68:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00115b6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115b70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00115b74:;
    {
        cpu->r[2] = 0x0000006eu;
    }
L_00115b78:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115b7c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000a30u, 0, 0);
    }
L_00115b80:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00115b84:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115b88:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00115b8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115b90:;
    {
        cpu->r[14] = 0x00115b94u; fn_000ad8a0(cpu);
    }
L_00115b94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115b98:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115b9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00115ba0:;
    {
        cpu->r[3] = 0x00000078u;
    }
L_00115ba4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115ba8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115bac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00115bb0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00115bb4:;
    {
        cpu->r[14] = 0x00115bb8u; fn_000a8a2c(cpu);
    }
L_00115bb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa38u);
    }
L_00115bbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115bc0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa40u);
    }
L_00115bc4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa3cu);
    }
L_00115bc8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00115bcc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_00115bd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa44u);
    }
L_00115bd4:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_00115bd8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00115bdc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00115be0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00115be4:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_00115be8:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[12]);
    }
L_00115bec:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00115bf0:;
    {
        cpu->r[14] = 0x00115bf4u; fn_0012fa2c(cpu);
    }
L_00115bf4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x968u);
    }
L_00115bf8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_00115bfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa10u);
    }
L_00115c00:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_00115c04:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00115c08:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0xa14u);
        }
    }
L_00115c0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00115c44;
        }
    }
L_00115c10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa14u);
    }
L_00115c14:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_00115c18:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[5]);
    }
L_00115c1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00115c20:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[5]);
    }
L_00115c24:;
    {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[5]);
    }
L_00115c28:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00115c2c:;
    {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[5]);
    }
L_00115c30:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 30u, &shc); cpu->r[3] = v;
    }
L_00115c34:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00115c38:;
    {
        uint32_t v = cpu->r[9] & 0x00000003u; cpu->r[9] = v;
    }
L_00115c3c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00115c40:;
    {
        wr32(cpu->r[4] + + 0xa14u, cpu->r[9]);
    }
L_00115c44:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 1);
    }
L_00115c48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000078u, 0, 0);
        }
    }
L_00115c4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00115c84;
        }
    }
L_00115c50:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00115c54:;
    {
        wr32(cpu->r[4] + + 0xa14u, cpu->r[9]);
    }
L_00115c58:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00115c5c:;
    {
        cpu->r[11] = 0x00000078u;
    }
L_00115c60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_00115c64:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0xa14u, cpu->r[3]);
        }
    }
L_00115c68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00115c6c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xa14u);
    }
L_00115c70:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00115c74:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[3]);
    }
L_00115c78:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_00115c7c:;
    {
        wr32(cpu->r[4] + + 0xa18u, cpu->r[3]);
    }
L_00115c80:;
    {
        wr32(cpu->r[4] + + 0xa1cu, cpu->r[3]);
    }
L_00115c84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00115c88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_00115c8c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000078u, cpu->r[7], 1, 0);
    }
L_00115c90:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = 0x00000003u;
        }
    }
L_00115c94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115c98:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115c9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_00115ca0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115ca4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115ca8:;
    {
        cpu->r[14] = 0x00115cacu; fn_000ad8a0(cpu);
    }
L_00115cac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00115cb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00115cb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115cb8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00115cbc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115cc0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115cc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115cc8:;
    {
        cpu->r[14] = 0x00115cccu; fn_000ad8a0(cpu);
    }
L_00115ccc:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00115cd0:;
    {
        cpu->r[3] = rd32(0x00115cd8u + + 0x430u);
    }
L_00115cd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_00115cd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115cdc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 30u, &shc); cpu->r[1] = v;
    }
L_00115ce0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_00115ce4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_00115ce8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00115cec:;
    {
        uint32_t v = cpu->r[9] & 0x00000003u; cpu->r[9] = v;
    }
L_00115cf0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115cf4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_00115cf8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115cfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115d00:;
    {
        cpu->r[14] = 0x00115d04u; fn_000ad8a0(cpu);
    }
L_00115d04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115d08:;
    {
        cpu->r[11] = rd32(0x00115d10u + + 0x3fcu);
    }
L_00115d0c:;
    {
        cpu->r[14] = 0x00115d10u; fn_0012f780(cpu);
    }
L_00115d10:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00115d14:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00115d18:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115d1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00115d20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115d24:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00115d28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00115d2c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00115d30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115d34:;
    {
        cpu->r[14] = 0x00115d38u; fn_0012fa2c(cpu);
    }
L_00115d38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115d3c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00115d40:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00115d44:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00115d48:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115d4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115d50:;
    {
        cpu->r[14] = 0x00115d54u; fn_000ad8a0(cpu);
    }
L_00115d54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x958u);
    }
L_00115d58:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00115d5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00115d60:;
    {
        cpu->r[3] = 0x0000006eu;
    }
L_00115d64:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00115d68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00115d6c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00115d70:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00115d74:;
    {
        cpu->r[14] = 0x00115d78u; fn_000a8a2c(cpu);
    }
L_00115d78:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa40u);
    }
L_00115d7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115d80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa38u);
    }
L_00115d84:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa3cu);
    }
L_00115d88:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x0000000au, 1, 0);
    }
L_00115d8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa44u);
    }
L_00115d90:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00115d94:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00115d98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_00115d9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], 0x0000000au, 0, 0);
    }
L_00115da0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000014u, 1, 0);
    }
L_00115da4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00115da8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115dac:;
    {
        cpu->r[14] = 0x00115db0u; fn_0012fa2c(cpu);
    }
L_00115db0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00115db4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00115db8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00115dbc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115dc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011607c;
        }
    }
L_00115dc4:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00115dc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00115dcc:;
    {
        cpu->r[14] = 0x00115dd0u; fn_00096a08(cpu);
    }
L_00115dd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00115dd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00115dd8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00115ddc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000830u, 0, 0);
    }
L_00115de0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_00115de4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00115de8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00115dec:;
    {
        cpu->r[14] = 0x00115df0u; fn_0018aa44(cpu);
    }
L_00115df0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00115df4:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_00115df8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00115dfc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00115e00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00115e04:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x54u);
    }
L_00115e08:;
    {
        cpu->r[14] = rd8(cpu->r[5] + + 0x50u);
    }
L_00115e0c:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[2]);
    }
L_00115e10:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_00115e14:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00115e18:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_00115e1c:;
    {
        cpu->r[14] = 0x00115e20u; fn_000aeb58(cpu);
    }
L_00115e20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00115e24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115e28:;
    {
        cpu->r[14] = 0x00115e2cu; fn_000ae160(cpu);
    }
L_00115e2c:;
    {
        cpu->r[1] = rd32(0x00115e34u + + 0x2dcu);
    }
L_00115e30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00115e34:;
    {
        cpu->r[1] = add_flags(cpu, 0x00115e3cu, cpu->r[1], 0, 0);
    }
L_00115e38:;
    {
        cpu->r[14] = 0x00115e3cu; fn_000ae248(cpu);
    }
L_00115e3c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00115e40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00115e44:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00115e48:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00115e4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000a40u, 0, 0);
    }
L_00115e50:;
    {
        cpu->r[14] = 0x00115e54u; fn_000a9818(cpu);
    }
L_00115e54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00115e58:;
    {
        cpu->r[0] = 0x0000fdf0u;
    }
L_00115e5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00115e60:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_00115e64:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x54u);
    }
L_00115e68:;
    {
        cpu->r[14] = rd16(cpu->r[3]);
    }
L_00115e6c:;
    {
        cpu->r[3] = 0x0000ffb0u;
    }
L_00115e70:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[7] + cpu->r[0]);
    }
L_00115e74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00115e78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00115e7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_00115e80:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x964u);
    }
L_00115e84:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_00115e88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa3cu);
    }
L_00115e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000050u, 0, 0);
    }
L_00115e90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00115e94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000050u, 0, 0);
    }
L_00115e98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_00115e9c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa38u);
    }
L_00115ea0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000050u, 1, 0);
    }
L_00115ea4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000000au, 0, 0);
    }
L_00115ea8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00115eac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_00115eb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000005u, 0, 0);
    }
L_00115eb4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_00115eb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00115ebc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00115ec0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00115ec4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00115ec8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[0]);
    }
L_00115ecc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], cpu->r[14], 0, 0);
    }
L_00115ed0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00115ed4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000050u, 0, 0);
        }
    }
L_00115ed8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00115edc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
        }
    }
L_00115ee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000050u, 0, 0);
    }
L_00115ee4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[1]);
        }
    }
L_00115ee8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00115eec:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x960u, cpu->r[0]);
        }
    }
L_00115ef0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_00115ef4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00115ef8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00115efc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x95cu);
        }
    }
L_00115f00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
        }
    }
L_00115f04:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
        }
    }
L_00115f08:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x960u, cpu->r[2]);
        }
    }
L_00115f0c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00115f10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00115f14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115f18:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00115f1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00115f20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00115f24:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00115f28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_00115f2c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00115f30:;
    {
        cpu->r[14] = 0x00115f34u; fn_000ac4bc(cpu);
    }
L_00115f34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00115f38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00115f3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00115f40:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00115f44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00115f48:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00115f4c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00115f50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00115f54:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00115f58:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_00115f5c:;
    {
        cpu->r[14] = 0x00115f60u; fn_000ac4bc(cpu);
    }
L_00115f60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00115f64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115f68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00115f6c:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[1]);
    }
L_00115f70:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[2]);
    }
L_00115f74:;
    {
        cpu->r[14] = 0x00115f78u; fn_0012f780(cpu);
    }
L_00115f78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00115f7c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00115f80:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00115f84:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00115f88:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00115f8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00115f90:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00115f94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00115f98:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115f9c:;
    {
        cpu->r[14] = 0x00115fa0u; fn_0012fa2c(cpu);
    }
L_00115fa0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_00115fa4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00115fa8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00115fac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00115fb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116038;
        }
    }
L_00115fb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00115fb8:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00115fbc:;
    {
        cpu->r[14] = 0x00115fc0u; fn_00096a08(cpu);
    }
L_00115fc0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00115fc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00115fc8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00115fcc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_00115fd0:;
    {
        cpu->r[14] = 0x00115fd4u; fn_0018aa44(cpu);
    }
L_00115fd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00115fd8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00115fdc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00115fe0:;
    {
        cpu->r[14] = 0x00115fe4u; fn_000aeb58(cpu);
    }
L_00115fe4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00115fe8:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00115fec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00115ff0:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00115ff4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00115ff8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00115ffc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00116000:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 0);
    }
L_00116004:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011600c:;
    {
        cpu->r[14] = 0x00116010u; fn_000ad19c(cpu);
    }
L_00116010:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000024cu, 0, 0);
    }
L_00116014:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_00116018:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011601cu)) return;
    }
L_0011601c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00116020:;
    {
        cpu->r[14] = 0x00116024u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116024:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001160c0;
        }
    }
L_0011602c:;
    {
        cpu->r[3] = rd32(0x00116034u + + 0xd0u);
    }
L_00116030:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00116034:;
    {
        goto L_00115b04;
    }
L_00116038:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011603c:;
    {
        cpu->r[14] = 0x00116040u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116040:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115fb4;
        }
    }
L_00116048:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0011604c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00116050:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116054:;
    {
        cpu->r[14] = 0x00116058u; fn_0018aa20(cpu);
    }
L_00116058:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011605c:;
    {
        cpu->r[14] = 0x00116060u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116060:;
    {
        cpu->r[3] = rd32(0x00116068u + + 0xacu);
    }
L_00116064:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116068:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0011606c:;
    {
        cpu->r[3] = rd32(0x00116074u + + 0xa4u);
    }
L_00116070:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00116074:;
    {
        cpu->r[14] = 0x00116078u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116078:;
    {
        goto L_00115fb4;
    }
L_0011607c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00116080:;
    {
        cpu->r[14] = 0x00116084u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00115dc4;
        }
    }
L_0011608c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00116090:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[14]);
    }
L_00116094:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116098:;
    {
        cpu->r[14] = 0x0011609cu; fn_0018aa20(cpu);
    }
L_0011609c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001160a0:;
    {
        cpu->r[14] = 0x001160a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001160a4:;
    {
        cpu->r[3] = rd32(0x001160acu + + 0x68u);
    }
L_001160a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001160ac:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001160b0:;
    {
        cpu->r[3] = rd32(0x001160b8u + + 0x60u);
    }
L_001160b4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001160b8:;
    {
        cpu->r[14] = 0x001160bcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001160bc:;
    {
        goto L_00115dc4;
    }
L_001160c0:;
    {
        cpu->r[7] = rd32(0x001160c8u + + 0x3cu);
    }
L_001160c4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_001160c8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001160cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001160d0:;
    {
        cpu->r[14] = 0x001160d4u; fn_0018aa20(cpu);
    }
L_001160d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001160d8:;
    {
        cpu->r[14] = 0x001160dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001160dc:;
    {
        cpu->r[3] = rd32(0x001160e4u + + 0x30u);
    }
L_001160e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001160e4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001160e8:;
    {
        cpu->r[3] = rd32(0x001160f0u + + 0x28u);
    }
L_001160ec:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001160f0:;
    {
        cpu->r[14] = 0x001160f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001160f4:;
    {
        goto L_00115b04;
    }
}

/* _ZN15GS_MusicBoxMenu8isKindOfEi @ 0011611c (arm) */
void fn_0011611c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011611c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000017u, 1, 1);
    }
L_00116120:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00116124:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00116128:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_MusicBoxMenu8DoActionEii @ 0011612c (arm) */
void fn_0011612c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011612c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00116130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00116134:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00116138:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0011613c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00116140:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00116144:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00116148:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011614c:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[0] + + 0x8ccu, cpu->r[1]);
        }
    }
L_00116150:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00116154:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8ccu);
        }
    }
L_00116158:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0011615c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_00116160:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00116164:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00116168:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
        }
    }
L_0011616c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
        }
    }
L_00116170:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00116174:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_00116178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000207u;
        }
    }
L_0011617c:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00116180:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8ccu);
    }
L_00116184:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00116188:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_0011618c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000205u;
        }
    }
L_00116190:;
    {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
    }
L_00116194:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8ccu);
    }
L_00116198:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0011619c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000004u;
        }
    }
L_001161a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000203u;
        }
    }
L_001161a4:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_001161a8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8ccu);
    }
L_001161ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001161b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000000au;
        }
    }
L_001161b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000209u;
        }
    }
L_001161b8:;
    {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
    }
L_001161bc:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[1]);
    }
L_001161c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_MusicBoxMenu14ProcessTouchedEi @ 001161c4 (arm) */
void fn_001161c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001161c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_30 @ 001161c8 (arm) */
void fn_001161c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001161c8:;
    {
        cpu->r[3] = rd32(0x001161d0u + + 0x20u);
    }
L_001161cc:;
    {
        cpu->r[1] = rd32(0x001161d4u + + 0x20u);
    }
L_001161d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001161d8u, cpu->r[3], 0, 0);
    }
L_001161d4:;
    {
        cpu->r[2] = rd32(0x001161dcu + + 0x1cu);
    }
L_001161d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001161dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001161e4u, cpu->r[2], 0, 0);
    }
L_001161e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001161e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001161e8:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001161ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_MusicBoxMenu13GetMenuStringEi @ 001161fc (arm) */
void fn_001161fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001161fc:;
    {
        return fn_0010e02c(cpu);
    }
}

/* _ZN15GS_MusicBoxMenu18ProcessOnMouseDragEv @ 00116200 (arm) */
void fn_00116200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116200:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00116204:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00116208:;
    {
        cpu->r[14] = 0x0011620cu; fn_00110818(cpu);
    }
L_0011620c:;
    {
        cpu->r[3] = 0x0000308cu;
    }
L_00116210:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116214:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00116218:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011621cu)) return;
    }
}

/* _ZN15GS_MusicBoxMenu24ProcessOnMouseButtonDownEv @ 0011621c (arm) */
void fn_0011621c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011621c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00116220:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00116224:;
    {
        cpu->r[14] = 0x00116228u; fn_00110498(cpu);
    }
L_00116228:;
    {
        cpu->r[3] = 0x00003084u;
    }
L_0011622c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00116230:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00116234:;
    {
        cpu->r[3] = 0x0000308cu;
    }
L_00116238:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011623c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00116240:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00116244u)) return;
    }
}

/* _ZN15GS_MusicBoxMenu22ProcessOnMouseButtonUpEv @ 00116244 (arm) */
void fn_00116244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116244:;
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
L_00116248:;
    {
        cpu->r[3] = 0x00003084u;
    }
L_0011624c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00116250:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00116254:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[7]);
    }
L_00116258:;
    {
        cpu->r[14] = 0x0011625cu; fn_00110c40(cpu);
    }
L_0011625c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x94u);
    }
L_00116260:;
    {
        cpu->r[4] = rd32(0x00116268u + + 0xe0u);
    }
L_00116264:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00116268:;
    {
        cpu->r[4] = add_flags(cpu, 0x00116270u, cpu->r[4], 0, 0);
    }
L_0011626c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116270u)) return;
        }
    }
L_00116270:;
    {
        cpu->r[10] = rd32(0x00116278u + + 0xd4u);
    }
L_00116274:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00116278:;
    {
        cpu->r[0] = rd16(cpu->r[3]);
    }
L_0011627c:;
    {
        cpu->r[3] = 0x00000131u;
    }
L_00116280:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x000000a0u, 1, 0);
    }
L_00116284:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00116288:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011628c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116290u)) return;
        }
    }
L_00116290:;
    {
        cpu->r[11] = rd32(0x00116298u + + 0xb8u);
    }
L_00116294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00116298:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_0011629c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000f3u, 1, 1);
    }
L_001162a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001162a4u)) return;
        }
    }
L_001162a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003bu, 1, 1);
    }
L_001162a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001162acu)) return;
        }
    }
L_001162ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x950u);
    }
L_001162b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001162b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001162b8u)) return;
        }
    }
L_001162b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001162bc:;
    {
        cpu->r[9] = 0x00003078u;
    }
L_001162c0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000008cu, 1, 0);
    }
L_001162c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], 0x00000032u, 0, 0);
    }
L_001162c8:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001162cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001162d0:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001162d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000154u, 1, 1);
    }
L_001162d8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011632c;
        }
    }
L_001162dc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001162e0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001162e4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001162e8:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_001162ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000037u, 0, 0);
    }
L_001162f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001162f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001162f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001162fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011632c;
        }
    }
L_00116300:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00116304:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011632c;
        }
    }
L_00116308:;
    {
        cpu->r[0] = 0x0000308cu;
    }
L_0011630c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_00116310:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00116314:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00116318:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011632c;
        }
    }
L_0011631c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x954u);
    }
L_00116320:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00116324:;
    {
        cpu->r[14] = 0x00116328u; fn_001161c4(cpu);
    }
L_00116328:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x950u);
    }
L_0011632c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00116330:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00116334:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00116338:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011633cu)) return;
        }
    }
L_0011633c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00116340:;
    {
        cpu->r[0] = rd16(cpu->r[2]);
    }
L_00116344:;
    {
        goto L_001162c0;
    }
}

/* _ZN15GS_MusicBoxMenu6UpdateEv @ 00116354 (arm) */
void fn_00116354(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116354:;
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
L_00116358:;
    {
        cpu->r[5] = rd32(0x00116360u + + 0x3f0u);
    }
L_0011635c:;
    {
        cpu->r[3] = rd32(0x00116364u + + 0x3f0u);
    }
L_00116360:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00116364:;
    {
        cpu->r[5] = add_flags(cpu, 0x0011636cu, cpu->r[5], 0, 0);
    }
L_00116368:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011636c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00116370:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00116374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00116378:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00003088u;
        }
    }
L_0011637c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_00116380:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_00116384:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001163b0;
        }
    }
L_00116388:;
    {
        cpu->r[1] = 0x00003088u;
    }
L_0011638c:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00116390:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00116394:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00116398:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0011639c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001163a0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001163a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001163a8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 3u, &shc), cpu->r[2], 1, 0);
    }
L_001163ac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001163b0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001163b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001163b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_001163bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001163d4;
        }
    }
L_001163c0:;
    {
        cpu->r[2] = 0x00003088u;
    }
L_001163c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001163c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_001163cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_001163d0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001163d4:;
    {
        cpu->r[2] = 0x00003088u;
    }
L_001163d8:;
    {
        cpu->r[0] = 0x00003078u;
    }
L_001163dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_001163e0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001163e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001163e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_001163ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001163f0:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001163f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001163f8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001163fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000307cu;
        }
    }
L_00116400:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
        }
    }
L_00116404:;
    {
        cpu->r[0] = 0x00003084u;
    }
L_00116408:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[0]);
    }
L_0011640c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116594;
        }
    }
L_00116414:;
    {
        cpu->r[0] = 0x0000307cu;
    }
L_00116418:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0011641c:;
    {
        cpu->r[3] = (~0x00000031u);
    }
L_00116420:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_00116424:;
    {
        cpu->r[3] = 0x00003078u;
    }
L_00116428:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011642c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00116430:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00116450;
        }
    }
L_00116434:;
    {
        cpu->r[3] = 0x00003078u;
    }
L_00116438:;
    {
        cpu->r[0] = 0x0000307cu;
    }
L_0011643c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116440:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_00116444:;
    {
        cpu->r[2] = 0x00003088u;
    }
L_00116448:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011644c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_00116450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00116454:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001165f0;
        }
    }
L_00116458:;
    {
        cpu->r[0] = 0x0000307cu;
    }
L_0011645c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116460:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00116464:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_00116468:;
    {
        cpu->r[0] = 0x00003088u;
    }
L_0011646c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_00116470:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00116474:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00116484;
        }
    }
L_00116478:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0011647c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00116480:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00116484:;
    {
        cpu->r[2] = 0x00003080u;
    }
L_00116488:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011648c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00116490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001165e0;
        }
    }
L_00116494:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00116498:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0011649c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001165e0;
        }
    }
L_001164a0:;
    {
        cpu->r[2] = 0x00003074u;
    }
L_001164a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001164a8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001164ac:;
    {
        cpu->r[7] = 0x00003090u;
    }
L_001164b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_001164b4:;
    {
        cpu->r[6] = 0x00003190u;
    }
L_001164b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001164bc:;
    {
        cpu->r[12] = 0x00003290u;
    }
L_001164c0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001164c4:;
    {
        cpu->r[0] = 0x00003390u;
    }
L_001164c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001164cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001164d0:;
    {
        vfp_sync_flags(cpu);
    }
L_001164d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001164f0;
        }
    }
L_001164d8:;
    {
        wr8(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_001164dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_001164e0:;
    {
        wr8(cpu->r[4] + cpu->r[6], cpu->r[2]);
    }
L_001164e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_001164e8:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_001164ec:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_001164f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001164f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001164c8;
        }
    }
L_001164f8:;
    {
        cpu->r[3] = 0x00003070u;
    }
L_001164fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00116504u + + 0x23cu);
    }
L_00116500:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00116504:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_00116508:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0011650c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00116514u + + 0x230u);
    }
L_00116510:;
    {
        cpu->r[2] = 0x00003074u;
    }
L_00116514:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00116518:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_0011651c:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_00116520:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_00116524:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00116528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00116530u + + 0x218u);
    }
L_0011652c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00116530:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00116534:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00116538:;
    {
        vfp_sync_flags(cpu);
    }
L_0011653c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0011655c;
        }
    }
L_00116540:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00116548u + + 0x204u);
    }
L_00116544:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00116548:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[10]);
    }
L_0011654c:;
    {
        cpu->r[3] = 0x00003080u;
    }
L_00116550:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00116554:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[10]);
    }
L_00116558:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0011655c:;
    {
        cpu->r[2] = 0x0000308cu;
    }
L_00116560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_00116564:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00116568:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011656c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00116570:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00116574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116698;
        }
    }
L_00116578:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0011657c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116618;
        }
    }
L_00116580:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00116584:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00116588:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0011658c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00116590:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116594u)) return;
    }
L_00116594:;
    {
        cpu->r[0] = (~0x00000031u);
    }
L_00116598:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_0011659c:;
    {
        cpu->r[0] = 0x0000307cu;
    }
L_001165a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001165a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001165a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001165b4;
        }
    }
L_001165ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001165b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00116714;
        }
    }
L_001165b4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_001165b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001165bc:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_001165c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001165c4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_001165c8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001165cc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[0]; cpu->r[6] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_001165d0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_001165d4:;
    {
        cpu->r[0] = 0x00003078u;
    }
L_001165d8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001165dc:;
    {
        goto L_0011642c;
    }
L_001165e0:;
    {
        cpu->r[3] = 0x00003074u;
    }
L_001165e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001165e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001165ec:;
    {
        goto L_001164f8;
    }
L_001165f0:;
    {
        cpu->r[2] = 0x0000307cu;
    }
L_001165f4:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001165f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001165fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00116600:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00116604:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00116608:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[10] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0011660c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00116610:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_00116614:;
    {
        goto L_00116470;
    }
L_00116618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f4u);
    }
L_0011661c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00116620:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00116624:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_00116628:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0011658c;
        }
    }
L_0011662c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00116630:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116634:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00116638:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0011663c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00116640:;
    {
        cpu->r[14] = 0x00116644u; fn_000fd224(cpu);
    }
L_00116644:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00116648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116720;
        }
    }
L_0011664c:;
    {
        cpu->r[2] = rd32(0x00116654u + + 0x104u);
    }
L_00116650:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00116654:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00116658:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0011665c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00116660:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00116664:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00116668:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011666c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00116670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00116674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00116678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011667c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00116680:;
    {
        cpu->r[14] = 0x00116684u; fn_0015eda0(cpu);
    }
L_00116684:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00116688:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011668c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00116690:;
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
L_00116694:;
    {
        return fn_000f34e8(cpu);
    }
L_00116698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011669c:;
    {
        cpu->r[14] = 0x001166a0u; fn_00128a5c(cpu);
    }
L_001166a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001166a4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_001166a8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001166ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001166b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011658c;
        }
    }
L_001166b4:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_001166b8:;
    {
        cpu->r[5] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001166bc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001166c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011658c;
        }
    }
L_001166c4:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_001166c8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001166cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001166d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011658c;
        }
    }
L_001166d4:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_001166d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001166dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001166e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011658c;
        }
    }
L_001166e4:;
    {
        cpu->r[14] = 0x001166e8u; fn_000c1cd8(cpu);
    }
L_001166e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001166ec:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_001166f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_001166f4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_001166f8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001166fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00116700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011658c;
        }
    }
L_00116704:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_00116708:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0011670c:;
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
L_00116710:;
    {
        return fn_000bd908(cpu);
    }
L_00116714:;
    {
        cpu->r[3] = 0x00003078u;
    }
L_00116718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011671c:;
    {
        goto L_0011642c;
    }
L_00116720:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00116724:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00116728:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0011672c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00116730:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00116734:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00116738:;
    {
        cpu->r[14] = 0x0011673cu; fn_000fd248(cpu);
    }
L_0011673c:;
    {
        goto L_0011664c;
    }
}

/* _ZN15GS_MusicBoxMenu6CreateEv @ 0011675c (arm) */
void fn_0011675c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011675c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00116760:;
    {
        cpu->r[14] = 0x00116764u; fn_001101ac(cpu);
    }
L_00116764:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00116768:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011676cu)) return;
    }
}

/* _ZN15GS_MusicBoxMenu17ApplyMenuSettingsEv @ 0011676c (arm) */
void fn_0011676c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0011676c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00116770:;
    {
        cpu->r[5] = rd32(0x00116778u + + 0xa0u);
    }
L_00116774:;
    {
        cpu->r[3] = rd32(0x0011677cu + + 0xa0u);
    }
L_00116778:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0011677c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00116784u, cpu->r[5], 0, 0);
    }
L_00116780:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00116784:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00116788:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_0011678c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00116790:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00116794:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[6]);
    }
L_00116798:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011679c:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_001167a0:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001167a4:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[14]);
    }
L_001167a8:;
    {
        cpu->r[14] = 0x001167b0u;
    }
L_001167ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001167b0u)) return;
    }
L_001167b0:;
    {
        cpu->r[3] = rd32(0x001167b8u + + 0x68u);
    }
L_001167b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001167b8:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_001167bc:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[6]);
    }
L_001167c0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001167c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001167c8:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_001167cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001167d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x484u);
    }
L_001167d4:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_001167d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001167f4;
        }
    }
L_001167dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001167e0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001167e4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001167e8:;
    {
        cpu->r[14] = 0x001167ecu; fn_0018c1bc(cpu);
    }
L_001167ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001167f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00116808;
        }
    }
L_001167f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001167f8:;
    {
        cpu->r[2] = 0x0000020bu;
    }
L_001167fc:;
    {
        wr32(cpu->r[3] + + 0x8cu, cpu->r[2]);
    }
L_00116800:;
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
L_00116804:;
    {
        return fn_0015ca98(cpu);
    }
L_00116808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0011680c:;
    {
        cpu->r[2] = 0x0000020du;
    }
L_00116810:;
    {
        wr32(cpu->r[3] + + 0x8cu, cpu->r[2]);
    }
L_00116814:;
    {
        goto L_00116800;
    }
}

/* _ZN15GS_MusicBoxMenuD1Ev @ 00116824 (arm) */
void fn_00116824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116824:;
    {
        cpu->r[3] = rd32(0x0011682cu + + 0x24u);
    }
L_00116828:;
    {
        cpu->r[2] = rd32(0x00116830u + + 0x24u);
    }
L_0011682c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00116834u, cpu->r[3], 0, 0);
    }
L_00116830:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00116834:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00116838:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011683c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00116840:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00116844:;
    {
        cpu->r[14] = 0x00116848u; fn_000ec21c(cpu);
    }
L_00116848:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011684c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00116850u)) return;
    }
}

/* _ZN15GS_MusicBoxMenuD0Ev @ 00116858 (arm) */
void fn_00116858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116858:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0011685c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00116860:;
    {
        cpu->r[14] = 0x00116864u; fn_00116824(cpu);
    }
L_00116864:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00116868:;
    {
        cpu->r[14] = 0x0011686cu; fn_0018ba20(cpu);
    }
L_0011686c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00116870:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00116874u)) return;
    }
}

/* _ZN15GS_MusicBoxMenuD2Ev @ 00116874 (arm) */
void fn_00116874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116874:;
    {
        cpu->r[3] = rd32(0x0011687cu + + 0x24u);
    }
L_00116878:;
    {
        cpu->r[2] = rd32(0x00116880u + + 0x24u);
    }
L_0011687c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00116884u, cpu->r[3], 0, 0);
    }
L_00116880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00116884:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00116888:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011688c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00116890:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00116894:;
    {
        cpu->r[14] = 0x00116898u; fn_000ec21c(cpu);
    }
L_00116898:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011689c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001168a0u)) return;
    }
}

/* _ZN15GS_MusicBoxMenuC1Ev @ 001168a8 (arm) */
void fn_001168a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001168a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001168ac:;
    {
        cpu->r[5] = rd32(0x001168b4u + + 0xa8u);
    }
L_001168b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001168b4:;
    {
        cpu->r[14] = 0x001168b8u; fn_0010ffa8(cpu);
    }
L_001168b8:;
    {
        cpu->r[3] = rd32(0x001168c0u + + 0xa0u);
    }
L_001168bc:;
    {
        cpu->r[5] = add_flags(cpu, 0x001168c4u, cpu->r[5], 0, 0);
    }
L_001168c0:;
    {
        cpu->r[2] = 0x00003390u;
    }
L_001168c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001168ccu + + 0x8cu);
    }
L_001168c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001168cc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001168d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001168d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001168d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001168dc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001168e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001168e4:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001168e8:;
    {
        cpu->r[2] = 0x00003074u;
    }
L_001168ec:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001168f0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001168f4:;
    {
        cpu->r[1] = 0x00003070u;
    }
L_001168f8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001168fc:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[2]);
    }
L_00116900:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_00116904:;
    {
        cpu->r[1] = 0x00003078u;
    }
L_00116908:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0011690c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00116910:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[1]);
    }
L_00116914:;
    {
        cpu->r[1] = 0x0000307cu;
    }
L_00116918:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0011691c:;
    {
        cpu->r[1] = 0x00003080u;
    }
L_00116920:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00116924:;
    {
        cpu->r[1] = 0x00003084u;
    }
L_00116928:;
    {
        cpu->r[2] = 0x00003090u;
    }
L_0011692c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00116930:;
    {
        cpu->r[1] = 0x00003088u;
    }
L_00116934:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00116938:;
    {
        cpu->r[2] = 0x00003190u;
    }
L_0011693c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00116940:;
    {
        cpu->r[1] = 0x0000308cu;
    }
L_00116944:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00116948:;
    {
        cpu->r[2] = 0x00003290u;
    }
L_0011694c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00116950:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00116954:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116958u)) return;
    }
}

/* _ZN15GS_MusicBoxMenuC2Ev @ 00116964 (arm) */
void fn_00116964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116964:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00116968:;
    {
        cpu->r[5] = rd32(0x00116970u + + 0xa8u);
    }
L_0011696c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00116970:;
    {
        cpu->r[14] = 0x00116974u; fn_0010ffa8(cpu);
    }
L_00116974:;
    {
        cpu->r[3] = rd32(0x0011697cu + + 0xa0u);
    }
L_00116978:;
    {
        cpu->r[5] = add_flags(cpu, 0x00116980u, cpu->r[5], 0, 0);
    }
L_0011697c:;
    {
        cpu->r[2] = 0x00003390u;
    }
L_00116980:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00116988u + + 0x8cu);
    }
L_00116984:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00116988:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0011698c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00116990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00116994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00116998:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0011699c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001169a0:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001169a4:;
    {
        cpu->r[2] = 0x00003074u;
    }
L_001169a8:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001169ac:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001169b0:;
    {
        cpu->r[1] = 0x00003070u;
    }
L_001169b4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001169b8:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[2]);
    }
L_001169bc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001169c0:;
    {
        cpu->r[1] = 0x00003078u;
    }
L_001169c4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001169c8:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001169cc:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[1]);
    }
L_001169d0:;
    {
        cpu->r[1] = 0x0000307cu;
    }
L_001169d4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001169d8:;
    {
        cpu->r[1] = 0x00003080u;
    }
L_001169dc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001169e0:;
    {
        cpu->r[1] = 0x00003084u;
    }
L_001169e4:;
    {
        cpu->r[2] = 0x00003090u;
    }
L_001169e8:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001169ec:;
    {
        cpu->r[1] = 0x00003088u;
    }
L_001169f0:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001169f4:;
    {
        cpu->r[2] = 0x00003190u;
    }
L_001169f8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001169fc:;
    {
        cpu->r[1] = 0x0000308cu;
    }
L_00116a00:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00116a04:;
    {
        cpu->r[2] = 0x00003290u;
    }
L_00116a08:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00116a0c:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00116a10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116a14u)) return;
    }
}

/* _ZN15GS_MusicBoxMenu6ResumeEv @ 00116a20 (arm) */
void fn_00116a20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116a20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00116a24:;
    {
        cpu->r[4] = rd32(0x00116a2cu + + 0x198u);
    }
L_00116a28:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00116a2c:;
    {
        cpu->r[14] = 0x00116a30u; fn_001142a0(cpu);
    }
L_00116a30:;
    {
        cpu->r[3] = rd32(0x00116a38u + + 0x190u);
    }
L_00116a34:;
    {
        cpu->r[4] = add_flags(cpu, 0x00116a3cu, cpu->r[4], 0, 0);
    }
L_00116a38:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00116a3c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116a40:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00116a44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00116a48:;
    {
        cpu->r[14] = 0x00116a4cu; fn_0018cbb0(cpu);
    }
L_00116a4c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00116a50:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_00116a54:;
    {
        cpu->r[14] = 0x00116a58u; fn_000f3430(cpu);
    }
L_00116a58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116b8c;
        }
    }
L_00116a60:;
    {
        cpu->r[3] = rd32(0x00116a68u + + 0x164u);
    }
L_00116a64:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00116a6cu + + 0x14cu);
    }
L_00116a68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00116a70u + + 0x14cu);
    }
L_00116a6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116a70:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00116a74:;
    {
        cpu->r[3] = rd32(0x00116a7cu + + 0x154u);
    }
L_00116a78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00116a80u + + 0x140u);
    }
L_00116a7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116a80:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00116a84:;
    {
        cpu->r[3] = rd32(0x00116a8cu + + 0x148u);
    }
L_00116a88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116a8c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00116a90:;
    {
        cpu->r[3] = rd32(0x00116a98u + + 0x140u);
    }
L_00116a94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116a98:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00116a9c:;
    {
        cpu->r[3] = rd32(0x00116aa4u + + 0x138u);
    }
L_00116aa0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00116aa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00116aa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116aac:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00116ab0:;
    {
        cpu->r[14] = 0x00116ab4u; fn_001289fc(cpu);
    }
L_00116ab4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8fcu);
    }
L_00116ab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00116abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116ad8;
        }
    }
L_00116ac0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00116ac4:;
    {
        cpu->r[14] = 0x00116ac8u; fn_00093f34(cpu);
    }
L_00116ac8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00116acc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00116ad0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00116ad4:;
    {
        wr32(cpu->r[5] + + 0x8f8u, cpu->r[3]);
    }
L_00116ad8:;
    {
        cpu->r[3] = rd32(0x00116ae0u + + 0x100u);
    }
L_00116adc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116ae0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00116ae4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116b48;
        }
    }
L_00116aec:;
    {
        cpu->r[6] = rd32(0x00116af4u + + 0xf0u);
    }
L_00116af0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00116af4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00116af8:;
    {
        cpu->r[14] = 0x00116afcu; fn_00096a08(cpu);
    }
L_00116afc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116b00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116b04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116b08:;
    {
        cpu->r[14] = 0x00116b0cu; fn_0018aa44(cpu);
    }
L_00116b0c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00116b10:;
    {
        cpu->r[14] = 0x00116b14u; fn_0015ca98(cpu);
    }
L_00116b14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
    }
L_00116b18:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00116b1c:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[2]);
    }
L_00116b20:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[2]);
    }
L_00116b24:;
    {
        cpu->r[2] = 0x00000207u;
    }
L_00116b28:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_00116b2c:;
    {
        cpu->r[2] = 0x00000205u;
    }
L_00116b30:;
    {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
    }
L_00116b34:;
    {
        cpu->r[2] = 0x00000203u;
    }
L_00116b38:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_00116b3c:;
    {
        cpu->r[2] = 0x00000209u;
    }
L_00116b40:;
    {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
    }
L_00116b44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116b48u)) return;
    }
L_00116b48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116b4c:;
    {
        cpu->r[14] = 0x00116b50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116b50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116aec;
        }
    }
L_00116b58:;
    {
        cpu->r[6] = rd32(0x00116b60u + + 0x84u);
    }
L_00116b5c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116b60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116b64:;
    {
        cpu->r[14] = 0x00116b68u; fn_0018aa20(cpu);
    }
L_00116b68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116b6c:;
    {
        cpu->r[14] = 0x00116b70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116b70:;
    {
        cpu->r[3] = rd32(0x00116b78u + + 0x70u);
    }
L_00116b74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116b78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116b7c:;
    {
        cpu->r[3] = rd32(0x00116b84u + + 0x68u);
    }
L_00116b80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116b84:;
    {
        cpu->r[14] = 0x00116b88u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116b88:;
    {
        goto L_00116af0;
    }
L_00116b8c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00116b90:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_00116b94:;
    {
        cpu->r[14] = 0x00116b98u; fn_000f3430(cpu);
    }
L_00116b98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116b9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00116a60;
        }
    }
L_00116ba0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00116ba4:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_00116ba8:;
    {
        cpu->r[14] = 0x00116bacu; fn_000f3430(cpu);
    }
L_00116bac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116a9c;
        }
    }
L_00116bb4:;
    {
        goto L_00116a60;
    }
}

/* _ZN15GS_MusicBoxMenu11InitSpritesEv @ 00116bf0 (arm) */
void fn_00116bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116bf0:;
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
L_00116bf4:;
    {
        cpu->r[4] = rd32(0x00116bfcu + + 0x2b0u);
    }
L_00116bf8:;
    {
        cpu->r[7] = rd32(0x00116c00u + + 0x2b0u);
    }
L_00116bfc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00116c00:;
    {
        cpu->r[4] = add_flags(cpu, 0x00116c08u, cpu->r[4], 0, 0);
    }
L_00116c04:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116c08:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00116c0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116d28;
        }
    }
L_00116c14:;
    {
        cpu->r[6] = rd32(0x00116c1cu + + 0x298u);
    }
L_00116c18:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00116c1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00116c20:;
    {
        cpu->r[14] = 0x00116c24u; fn_00096a08(cpu);
    }
L_00116c24:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116c28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116c2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116c30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116c34:;
    {
        cpu->r[14] = 0x00116c38u; fn_0018aa44(cpu);
    }
L_00116c38:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116c3c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00116c40:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116c44:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00116c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116e70;
        }
    }
L_00116c4c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00116c50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00116c54:;
    {
        cpu->r[14] = 0x00116c58u; fn_00096a08(cpu);
    }
L_00116c58:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116c5c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116c60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116c64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116c68:;
    {
        cpu->r[14] = 0x00116c6cu; fn_0018aa44(cpu);
    }
L_00116c6c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116c70:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00116c74:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116c78:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00116c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116e34;
        }
    }
L_00116c80:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00116c84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00116c88:;
    {
        cpu->r[14] = 0x00116c8cu; fn_00096a08(cpu);
    }
L_00116c8c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116c90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116c94:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116c98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116c9c:;
    {
        cpu->r[14] = 0x00116ca0u; fn_0018aa44(cpu);
    }
L_00116ca0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116ca4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00116ca8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116cac:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00116cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116df8;
        }
    }
L_00116cb4:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00116cb8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00116cbc:;
    {
        cpu->r[14] = 0x00116cc0u; fn_00096a08(cpu);
    }
L_00116cc0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116cc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116cc8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116ccc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116cd0:;
    {
        cpu->r[14] = 0x00116cd4u; fn_0018aa44(cpu);
    }
L_00116cd4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116cd8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00116cdc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116ce0:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00116ce4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116dbc;
        }
    }
L_00116ce8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116cec:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00116cf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116cf4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116cf8:;
    {
        cpu->r[14] = 0x00116cfcu; fn_0018aa44(cpu);
    }
L_00116cfc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00116d00:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00116d04:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116d08:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00116d0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116d6c;
        }
    }
L_00116d10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00116d14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116d18:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00116d1c:;
    {
        cpu->r[14] = 0x00116d20u; fn_0018aa44(cpu);
    }
L_00116d20:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00116d24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116d28u)) return;
    }
L_00116d28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116d2c:;
    {
        cpu->r[14] = 0x00116d30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116d30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116c14;
        }
    }
L_00116d38:;
    {
        cpu->r[6] = rd32(0x00116d40u + + 0x174u);
    }
L_00116d3c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116d40:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116d44:;
    {
        cpu->r[14] = 0x00116d48u; fn_0018aa20(cpu);
    }
L_00116d48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116d4c:;
    {
        cpu->r[14] = 0x00116d50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116d50:;
    {
        cpu->r[3] = rd32(0x00116d58u + + 0x160u);
    }
L_00116d54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116d58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116d5c:;
    {
        cpu->r[3] = rd32(0x00116d64u + + 0x158u);
    }
L_00116d60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116d64:;
    {
        cpu->r[14] = 0x00116d68u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116d68:;
    {
        goto L_00116c18;
    }
L_00116d6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116d70:;
    {
        cpu->r[14] = 0x00116d74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116d74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116d10;
        }
    }
L_00116d7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116d80:;
    {
        cpu->r[14] = 0x00116d84u; fn_0018aa20(cpu);
    }
L_00116d84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116d88:;
    {
        cpu->r[14] = 0x00116d8cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116d8c:;
    {
        cpu->r[3] = rd32(0x00116d94u + + 0x124u);
    }
L_00116d90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116d94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116d98:;
    {
        cpu->r[3] = rd32(0x00116da0u + + 0x11cu);
    }
L_00116d9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116da0:;
    {
        cpu->r[14] = 0x00116da4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116da4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00116da8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00116dac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00116db0:;
    {
        cpu->r[14] = 0x00116db4u; fn_0018aa44(cpu);
    }
L_00116db4:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00116db8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00116dbcu)) return;
    }
L_00116dbc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116dc0:;
    {
        cpu->r[14] = 0x00116dc4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116dc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116dc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116ce8;
        }
    }
L_00116dcc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116dd0:;
    {
        cpu->r[14] = 0x00116dd4u; fn_0018aa20(cpu);
    }
L_00116dd4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116dd8:;
    {
        cpu->r[14] = 0x00116ddcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116ddc:;
    {
        cpu->r[3] = rd32(0x00116de4u + + 0xd4u);
    }
L_00116de0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116de4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116de8:;
    {
        cpu->r[3] = rd32(0x00116df0u + + 0xccu);
    }
L_00116dec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116df0:;
    {
        cpu->r[14] = 0x00116df4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116df4:;
    {
        goto L_00116ce8;
    }
L_00116df8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116dfc:;
    {
        cpu->r[14] = 0x00116e00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116e00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116cb4;
        }
    }
L_00116e08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e0c:;
    {
        cpu->r[14] = 0x00116e10u; fn_0018aa20(cpu);
    }
L_00116e10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116e14:;
    {
        cpu->r[14] = 0x00116e18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116e18:;
    {
        cpu->r[3] = rd32(0x00116e20u + + 0x98u);
    }
L_00116e1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116e24:;
    {
        cpu->r[3] = rd32(0x00116e2cu + + 0x90u);
    }
L_00116e28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116e2c:;
    {
        cpu->r[14] = 0x00116e30u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116e30:;
    {
        goto L_00116cb4;
    }
L_00116e34:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116e38:;
    {
        cpu->r[14] = 0x00116e3cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116e3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116c80;
        }
    }
L_00116e44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e48:;
    {
        cpu->r[14] = 0x00116e4cu; fn_0018aa20(cpu);
    }
L_00116e4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116e50:;
    {
        cpu->r[14] = 0x00116e54u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116e54:;
    {
        cpu->r[3] = rd32(0x00116e5cu + + 0x5cu);
    }
L_00116e58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116e60:;
    {
        cpu->r[3] = rd32(0x00116e68u + + 0x54u);
    }
L_00116e64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116e68:;
    {
        cpu->r[14] = 0x00116e6cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116e6c:;
    {
        goto L_00116c80;
    }
L_00116e70:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116e74:;
    {
        cpu->r[14] = 0x00116e78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00116e78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00116e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116c4c;
        }
    }
L_00116e80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e84:;
    {
        cpu->r[14] = 0x00116e88u; fn_0018aa20(cpu);
    }
L_00116e88:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00116e8c:;
    {
        cpu->r[14] = 0x00116e90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00116e90:;
    {
        cpu->r[3] = rd32(0x00116e98u + + 0x20u);
    }
L_00116e94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00116e98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116e9c:;
    {
        cpu->r[3] = rd32(0x00116ea4u + + 0x18u);
    }
L_00116ea0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00116ea4:;
    {
        cpu->r[14] = 0x00116ea8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00116ea8:;
    {
        goto L_00116c4c;
    }
}

/* _ZN15GS_MusicBoxMenu13DrawSongsListEb @ 00116ec0 (arm) */
void fn_00116ec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00116ec0:;
    {
        cpu->r[1] = rd32(0x00116ec8u + + 0x304u);
    }
L_00116ec4:;
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
L_00116ec8:;
    {
        cpu->r[6] = rd32(0x00116ed0u + + 0x300u);
    }
L_00116ecc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00116ed4u, cpu->r[1], 0, 0);
    }
L_00116ed0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00116ed4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00116ed8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00116edc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00116ee0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00116ee4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117140;
        }
    }
L_00116eec:;
    {
        cpu->r[5] = rd32(0x00116ef4u + + 0x2e0u);
    }
L_00116ef0:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00116ef4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00116ef8:;
    {
        cpu->r[14] = 0x00116efcu; fn_00096a08(cpu);
    }
L_00116efc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00116f00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116f04:;
    {
        cpu->r[7] = rd32(cpu->r[14] + cpu->r[5]);
    }
L_00116f08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00116f0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00116f10:;
    {
        cpu->r[14] = 0x00116f14u; fn_0018aa44(cpu);
    }
L_00116f14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00116f18:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00116f1c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00116f20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00116f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011718c;
        }
    }
L_00116f28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00116f2c:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_00116f30:;
    {
        cpu->r[3] = rd32(0x00116f38u + + 0x2a0u);
    }
L_00116f34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00116f38:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_00116f3c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00116f40:;
    {
        cpu->r[14] = 0x00116f44u; fn_0018aa44(cpu);
    }
L_00116f44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00116f48:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00116f4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00116f50:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_00116f54:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00116f58:;
    {
        cpu->r[14] = 0x00116f5cu; fn_0012f780(cpu);
    }
L_00116f5c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00116f60:;
    {
        cpu->r[1] = 0x000000a0u;
    }
L_00116f64:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_00116f68:;
    {
        cpu->r[3] = 0x00000131u;
    }
L_00116f6c:;
    {
        cpu->r[12] = 0x000000b7u;
    }
L_00116f70:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00116f74:;
    {
        cpu->r[14] = 0x00116f78u; fn_0012fa2c(cpu);
    }
L_00116f78:;
    {
        cpu->r[1] = 0x0000307cu;
    }
L_00116f7c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_00116f80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_00116f84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
    }
L_00116f88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00116f8c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00116f90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00116f94:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00116f98:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00116f9c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00116fa0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_00116fa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00116fb4;
        }
    }
L_00116fa8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00116fac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00116fb0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00116fb4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
    }
L_00116fb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00116fbc:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_00116fc0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[14] = cpu->r[2];
        }
    }
L_00116fc4:;
    {
        uint32_t v = cpu->r[3] & ~ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00116fc8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_00116fcc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00116fd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001170ec;
        }
    }
L_00116fd4:;
    {
        cpu->r[6] = 0x00000032u;
    }
L_00116fd8:;
    {
        cpu->r[1] = rd32(0x00116fe0u + + 0x1fcu);
    }
L_00116fdc:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00116fe0:;
    {
        cpu->r[9] = 0x00003074u;
    }
L_00116fe4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_00116fe8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00116fec:;
    {
        cpu->r[11] = 0x00003068u;
    }
L_00116ff0:;
    {
        cpu->r[7] = 0x00003078u;
    }
L_00116ff4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00116ff8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000050u, 0, 0);
    }
L_00116ffc:;
    {
        goto L_00117080;
    }
L_00117000:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_00117004:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00117008:;
    {
        cpu->r[2] = 0x00003070u;
    }
L_0011700c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00117010:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00117014:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00117018:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_0011701c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00117020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00117024:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_00117028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0011702c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117030:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00117034:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00117038:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0011703c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00117040:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00117044:;
    {
        cpu->r[14] = 0x00117048u; fn_000ad8a0(cpu);
    }
L_00117048:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011704c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00117050:;
    {
        cpu->r[1] = 0x00000017u;
    }
L_00117054:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_00117058:;
    {
        cpu->r[2] = 0x000001c2u;
    }
L_0011705c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00117060:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_00117064:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00117068:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000032u, 0, 0);
    }
L_0011706c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00117070:;
    {
        cpu->r[14] = 0x00117074u; fn_000ad8a0(cpu);
    }
L_00117074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00117078:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0011707c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001170f4;
        }
    }
L_00117080:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_00117084:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00117088:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0011708c:;
    {
        cpu->r[12] = 0x000000e4u;
    }
L_00117090:;
    {
        vfp_sync_flags(cpu);
    }
L_00117094:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00117098:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_0011709c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
        }
    }
L_001170a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_001170a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001170a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
        }
    }
L_001170ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001170b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117000;
        }
    }
L_001170b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001170b8:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_001170bc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001170c0:;
    {
        cpu->r[14] = 0x00000032u;
    }
L_001170c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000005fu, 0, 0);
    }
L_001170c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001170cc:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_001170d0:;
    {
        cpu->r[2] = 0x000000a0u;
    }
L_001170d4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_001170d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001170dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001170e0:;
    {
        cpu->r[14] = 0x001170e4u; fn_000ad8a0(cpu);
    }
L_001170e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001170e8:;
    {
        goto L_00117000;
    }
L_001170ec:;
    {
        cpu->r[0] = rd32(0x001170f4u + + 0xe8u);
    }
L_001170f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001170f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001170f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001170fc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00117100:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00117104:;
    {
        cpu->r[14] = 0x00117108u; fn_0012f780(cpu);
    }
L_00117108:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0011710c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00117110:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00117114:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00117118:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011711c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00117120:;
    {
        cpu->r[12] = rd32(0x00117128u + + 0xb8u);
    }
L_00117124:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00117128:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0011712c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00117130:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117134:;
    {
        cpu->r[14] = 0x00117138u; fn_0012fa2c(cpu);
    }
L_00117138:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0011713c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117140u)) return;
    }
L_00117140:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00117144:;
    {
        cpu->r[14] = 0x00117148u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011714c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116eec;
        }
    }
L_00117150:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00117154:;
    {
        cpu->r[5] = rd32(0x0011715cu + + 0x78u);
    }
L_00117158:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_0011715c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00117160:;
    {
        cpu->r[14] = 0x00117164u; fn_0018aa20(cpu);
    }
L_00117164:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00117168:;
    {
        cpu->r[14] = 0x0011716cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011716c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00117170:;
    {
        cpu->r[3] = rd32(0x00117178u + + 0x6cu);
    }
L_00117174:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00117178:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0011717c:;
    {
        cpu->r[3] = rd32(0x00117184u + + 0x64u);
    }
L_00117180:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00117184:;
    {
        cpu->r[14] = 0x00117188u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00117188:;
    {
        goto L_00116ef0;
    }
L_0011718c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117190:;
    {
        cpu->r[14] = 0x00117194u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117194:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00116f28;
        }
    }
L_0011719c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001171a0:;
    {
        cpu->r[14] = 0x001171a4u; fn_0018aa20(cpu);
    }
L_001171a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001171a8:;
    {
        cpu->r[14] = 0x001171acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001171ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001171b0:;
    {
        cpu->r[3] = rd32(0x001171b8u + + 0x2cu);
    }
L_001171b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001171b8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001171bc:;
    {
        cpu->r[3] = rd32(0x001171c4u + + 0x24u);
    }
L_001171c0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001171c4:;
    {
        cpu->r[14] = 0x001171c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001171c8:;
    {
        goto L_00116f28;
    }
}

/* _ZN15GS_MusicBoxMenu6RenderEv @ 001171ec (arm) */
void fn_001171ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001171ec:;
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
L_001171f0:;
    {
        cpu->r[5] = rd32(0x001171f8u + + 0x218u);
    }
L_001171f4:;
    {
        cpu->r[3] = rd32(0x001171fcu + + 0x218u);
    }
L_001171f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000011cu, 1, 0);
    }
L_001171fc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00117204u, cpu->r[5], 0, 0);
    }
L_00117200:;
    {
        cpu->r[7] = rd32(0x00117208u + + 0x210u);
    }
L_00117204:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117208:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011720c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117210:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_00117214:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00117218:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0011721c:;
    {
        wr32(cpu->r[13] + + 0x114u, cpu->r[3]);
    }
L_00117220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011732c;
        }
    }
L_00117224:;
    {
        cpu->r[10] = rd32(0x0011722cu + + 0x1f0u);
    }
L_00117228:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011722c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00117230:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001173c8;
        }
    }
L_00117238:;
    {
        cpu->r[6] = rd32(0x00117240u + + 0x1e0u);
    }
L_0011723c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00117240:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117244:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_00117248:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0011724c:;
    {
        cpu->r[14] = 0x00117250u; fn_0018aa44(cpu);
    }
L_00117250:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00117254:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00117258:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011725c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00117260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117384;
        }
    }
L_00117264:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00117268:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011726c:;
    {
        cpu->r[14] = 0x00117270u; fn_00096a08(cpu);
    }
L_00117270:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00117274:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117278:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011727c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00117280:;
    {
        cpu->r[14] = 0x00117284u; fn_0018aa44(cpu);
    }
L_00117284:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00117288:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011728c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117348;
        }
    }
L_00117294:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00117298:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0011729c:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001172a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001172a4:;
    {
        cpu->r[14] = 0x001172a8u; fn_0018aa44(cpu);
    }
L_001172a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001172ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001172b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001172b4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001172b8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001172bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001172c0:;
    {
        cpu->r[14] = 0x001172c4u; fn_000ad8a0(cpu);
    }
L_001172c4:;
    {
        cpu->r[14] = rd32(0x001172ccu + + 0x158u);
    }
L_001172c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001172cc:;
    {
        cpu->r[14] = add_flags(cpu, 0x001172d4u, cpu->r[14], 0, 0);
    }
L_001172d0:;
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
L_001172d4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001172d8:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001172dc:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001172e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001172e4:;
    {
        wr8(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_001172e8:;
    {
        cpu->r[14] = 0x001172ecu; fn_0012f780(cpu);
    }
L_001172ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001172f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001172f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00117320;
        }
    }
L_001172f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001172fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00117300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117304:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117308:;
    {
        cpu->r[14] = 0x00117310u;
    }
L_0011730c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00117310u)) return;
    }
L_00117310:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00117314:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00117318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0011731c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001172f8;
        }
    }
L_00117320:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117324:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00117328:;
    {
        cpu->r[14] = 0x0011732cu; fn_00116ec0(cpu);
    }
L_0011732c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117330:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x114u);
    }
L_00117334:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00117338:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011733c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011740c;
        }
    }
L_00117340:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_00117344:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117348u)) return;
    }
L_00117348:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011734c:;
    {
        cpu->r[14] = 0x00117350u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117350:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117294;
        }
    }
L_00117358:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0011735c:;
    {
        cpu->r[14] = 0x00117360u; fn_0018aa20(cpu);
    }
L_00117360:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00117364:;
    {
        cpu->r[14] = 0x00117368u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117368:;
    {
        cpu->r[3] = rd32(0x00117370u + + 0xb8u);
    }
L_0011736c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00117370:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117374:;
    {
        cpu->r[3] = rd32(0x0011737cu + + 0xb0u);
    }
L_00117378:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011737c:;
    {
        cpu->r[14] = 0x00117380u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00117380:;
    {
        goto L_00117294;
    }
L_00117384:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00117388:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011738c:;
    {
        cpu->r[14] = 0x00117390u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117264;
        }
    }
L_00117398:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0011739c:;
    {
        cpu->r[14] = 0x001173a0u; fn_0018aa20(cpu);
    }
L_001173a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001173a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001173a8:;
    {
        cpu->r[14] = 0x001173acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001173ac:;
    {
        cpu->r[3] = rd32(0x001173b4u + + 0x74u);
    }
L_001173b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001173b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001173b8:;
    {
        cpu->r[3] = rd32(0x001173c0u + + 0x6cu);
    }
L_001173bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001173c0:;
    {
        cpu->r[14] = 0x001173c4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001173c4:;
    {
        goto L_00117264;
    }
L_001173c8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001173cc:;
    {
        cpu->r[14] = 0x001173d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001173d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001173d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117238;
        }
    }
L_001173d8:;
    {
        cpu->r[6] = rd32(0x001173e0u + + 0x40u);
    }
L_001173dc:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001173e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001173e4:;
    {
        cpu->r[14] = 0x001173e8u; fn_0018aa20(cpu);
    }
L_001173e8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001173ec:;
    {
        cpu->r[14] = 0x001173f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001173f0:;
    {
        cpu->r[3] = rd32(0x001173f8u + + 0x30u);
    }
L_001173f4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001173f8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001173fc:;
    {
        cpu->r[3] = rd32(0x00117404u + + 0x28u);
    }
L_00117400:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117404:;
    {
        cpu->r[14] = 0x00117408u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00117408:;
    {
        goto L_0011723c;
    }
L_0011740c:;
    {
        cpu->r[14] = 0x00117410u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00117410:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
        }
    }
L_00117414:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_00117418:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0011741c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_00117420:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_00117424:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = 0x0011742cu & shifter(cpu->r[12], 1, 7u, &shc); cpu->r[11] = v;
        }
    }
L_00117428:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0011742c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN22GS_NewUnlockedCarsMenu8isKindOfEi @ 00117430 (arm) */
void fn_00117430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117430:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000016u, 1, 1);
    }
L_00117434:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00117438:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0011743c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_31 @ 00117440 (arm) */
void fn_00117440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117440:;
    {
        cpu->r[3] = rd32(0x00117448u + + 0x50u);
    }
L_00117444:;
    {
        cpu->r[1] = rd32(0x0011744cu + + 0x50u);
    }
L_00117448:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117450u, cpu->r[3], 0, 0);
    }
L_0011744c:;
    {
        cpu->r[2] = rd32(0x00117454u + + 0x4cu);
    }
L_00117450:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00117454:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011745cu, cpu->r[2], 0, 0);
    }
L_00117458:;
    {
        cpu->r[1] = rd32(0x00117460u + + 0x44u);
    }
L_0011745c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00117460:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00117464:;
    {
        cpu->r[3] = rd32(0x0011746cu + + 0x3cu);
    }
L_00117468:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0011746c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117474u, cpu->r[3], 0, 0);
    }
L_00117470:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00117474:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000073u, 1, 0);
    }
L_00117478:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], 0x00000050u, 1, 0);
    }
L_0011747c:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[0]);
    }
L_00117480:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_00117484:;
    {
        wr32(cpu->r[3] + + 0x58u, cpu->r[1]);
    }
L_00117488:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_0011748c:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_00117490:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[1]);
    }
L_00117494:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu9SetLightsEv @ 001174ac (arm) */
void fn_001174ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001174ac:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001174b0:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001174b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_001174b8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001174c0u + + 0x124u);
    }
L_001174bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001174c0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001174c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001174ccu + + 0x11cu);
    }
L_001174c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001174d0u + + 0x11cu);
    }
L_001174cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001174d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001174d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001174d8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x001174e0u + + 0x110u);
    }
L_001174dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001174f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001174f8:;
    {
        cpu->r[3] = 0x00000404u;
    }
L_001174fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117500:;
    {
        wr16(cpu->r[13], cpu->r[3]);
    }
L_00117504:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117508:;
    {
        cpu->r[3] = (~0x0000007fu);
    }
L_0011750c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00117510:;
    {
        wr8(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00117514:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00117518:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0011751c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117520:;
    {
        cpu->r[14] = 0x00117524u; fn_00147e80(cpu);
    }
L_00117524:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00117528:;
    {
        cpu->r[0] = 0x00000b53u;
    }
L_0011752c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00117534u + + 0xc0u);
    }
L_00117530:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117534:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00117538:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0011753c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00117540:;
    {
        cpu->r[14] = 0x00117544u; imp_glLightModelfv(cpu); /* glLightModelfv */
    }
L_00117544:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00117548:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_0011754c:;
    {
        cpu->r[1] = 0x00001203u;
    }
L_00117550:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00117558u + + 0xa0u);
    }
L_00117554:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00117558:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011755c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00117560:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117564:;
    {
        cpu->r[14] = 0x00117568u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00117568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0011756c:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_00117570:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_00117574:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011757cu + + 0x80u);
    }
L_00117578:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0011757c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00117580:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00117584:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00117588:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011758c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00117590:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00117594:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00117598:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0011759c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001175a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001175a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001175a8:;
    {
        cpu->r[14] = 0x001175acu; imp_glLightfv(cpu); /* glLightfv */
    }
L_001175ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001175b0:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001175b4:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_001175b8:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_001175bc:;
    {
        cpu->r[14] = 0x001175c0u; imp_glLightfv(cpu); /* glLightfv */
    }
L_001175c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001175c4:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001175c8:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_001175cc:;
    {
        cpu->r[14] = 0x001175d0u; imp_glLightfv(cpu); /* glLightfv */
    }
L_001175d0:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_001175d4:;
    {
        cpu->r[14] = 0x001175d8u; imp_glEnable(cpu); /* glEnable */
    }
L_001175d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001175dc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001175e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001175e4u)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu8DoActionEii @ 00117600 (arm) */
void fn_00117600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117600:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00117604:;
    {
        cpu->r[12] = rd32(0x0011760cu + + 0x160u);
    }
L_00117608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011760c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00117610:;
    {
        cpu->r[12] = add_flags(cpu, 0x00117618u, cpu->r[12], 0, 0);
    }
L_00117614:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00117618:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011761c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00117620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011762c;
        }
    }
L_00117624:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00117628:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011762cu)) return;
    }
L_0011762c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00117630:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00117634:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011775c;
        }
    }
L_00117638:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011763c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00117640:;
    {
        cpu->r[3] = 0x00000546u;
    }
L_00117644:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00117648:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
        }
    }
L_0011764c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00117650:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_00117654:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_00117658:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_0011765c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00117660:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[5]);
    }
L_00117664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011773c;
        }
    }
L_00117668:;
    {
        cpu->r[3] = 0x00000547u;
    }
L_0011766c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00117670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001176ec;
        }
    }
L_00117674:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000580u, 1, 1);
    }
L_00117678:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117624;
        }
    }
L_0011767c:;
    {
        cpu->r[0] = rd32(0x00117684u + + 0xecu);
    }
L_00117680:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00117684:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00117688:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0011768c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00117690:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00117694:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00117698:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011769c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001176a0:;
    {
        cpu->r[14] = 0x001176a4u; fn_000fd248(cpu);
    }
L_001176a4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001176a8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001176ac:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001176b0:;
    {
        cpu->r[14] = 0x001176b4u; fn_00093f34(cpu);
    }
L_001176b4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_001176b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001176bc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001176c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001176c4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001176c8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001176cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117624;
        }
    }
L_001176d0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001176d4:;
    {
        cpu->r[14] = 0x001176d8u; fn_00093f34(cpu);
    }
L_001176d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001176dc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001176e0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001176e4:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001176e8:;
    {
        goto L_00117624;
    }
L_001176ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x958u);
    }
L_001176f0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x960u);
    }
L_001176f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001176f8:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_001176fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00117700:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00117704:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
        }
    }
L_00117708:;
    {
        cpu->r[0] = rd32(0x00117710u + + 0x60u);
    }
L_0011770c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00117710:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00117714:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_00117718:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0011771c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00117720:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00117724:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00117728:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0011772c:;
    {
        cpu->r[14] = 0x00117730u; fn_000fd248(cpu);
    }
L_00117730:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00117734:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00117738:;
    {
        goto L_00117624;
    }
L_0011773c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x958u);
    }
L_00117740:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00117744:;
    {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
    }
L_00117748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011774c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x960u);
        }
    }
L_00117750:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00117754:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x958u, cpu->r[3]);
        }
    }
L_00117758:;
    {
        goto L_00117708;
    }
L_0011775c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00117760:;
    {
        cpu->r[14] = 0x00117768u;
    }
L_00117764:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00117768u)) return;
    }
L_00117768:;
    {
        goto L_00117624;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu6UpdateEv @ 00117774 (arm) */
void fn_00117774(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117774:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x958u);
    }
L_00117778:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x95cu);
    }
L_0011777c:;
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
L_00117780:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_00117784:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00117788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011778c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_00117790:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117794:;
    {
        cpu->r[14] = 0x00117798u; fn_0009613c(cpu);
    }
L_00117798:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011779c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001177a0:;
    {
        cpu->r[5] = rd32(0x001177a8u + + 0x210u);
    }
L_001177a4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001177a8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001177b0u, cpu->r[5], 0, 0);
    }
L_001177ac:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[0]);
    }
L_001177b0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001177b4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001177b8:;
    {
        cpu->r[14] = 0x001177c0u;
    }
L_001177bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001177c0u)) return;
    }
L_001177c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001177c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_001177c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001177cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001179a8;
        }
    }
L_001177d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001177d4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001177d8:;
    {
        cpu->r[14] = 0x001177dcu; fn_000a2764(cpu);
    }
L_001177dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001177e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001177e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001177f8;
        }
    }
L_001177e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001177ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001177f0:;
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
L_001177f4:;
    {
        return fn_00114a58(cpu);
    }
L_001177f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001177fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117808;
        }
    }
L_00117800:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00117804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117808u)) return;
    }
L_00117808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011780c:;
    {
        cpu->r[14] = 0x00117810u; fn_0010da28(cpu);
    }
L_00117810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117800;
        }
    }
L_00117818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0011781c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000580u, 1, 1);
    }
L_00117820:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117800;
        }
    }
L_00117824:;
    {
        cpu->r[10] = rd32(0x0011782cu + + 0x190u);
    }
L_00117828:;
    {
        cpu->r[7] = 0x00001c40u;
    }
L_0011782c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x964u);
    }
L_00117830:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_00117834:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00117838:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0011783c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00117840:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_00117844:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00117848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001178fc;
        }
    }
L_0011784c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00117850:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00117854:;
    {
        cpu->r[14] = 0x0011785cu;
    }
L_00117858:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011785cu)) return;
    }
L_0011785c:;
    {
        cpu->r[3] = rd32(0x00117864u + + 0x15cu);
    }
L_00117860:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00117864:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00117868:;
    {
        cpu->r[1] = 0x0000012cu;
    }
L_0011786c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00117870:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117874:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[6]);
    }
L_00117878:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0011787c:;
    {
        cpu->r[14] = 0x00117880u; fn_00132a24(cpu);
    }
L_00117880:;
    {
        cpu->r[3] = rd32(0x00117888u + + 0x13cu);
    }
L_00117884:;
    {
        cpu->r[1] = 0x00005612u;
    }
L_00117888:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0011788c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117890:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00117894:;
    {
        cpu->r[14] = 0x00117898u; fn_00135de0(cpu);
    }
L_00117898:;
    {
        cpu->r[1] = 0x00005614u;
    }
L_0011789c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001178a0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001178a4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001178a8:;
    {
        cpu->r[14] = 0x001178acu; fn_00135de0(cpu);
    }
L_001178ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001178b0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001178b4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001178b8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001178bc:;
    {
        cpu->r[14] = 0x001178c0u; fn_001367cc(cpu);
    }
L_001178c0:;
    {
        cpu->r[1] = 0x00005617u;
    }
L_001178c4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001178c8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001178cc:;
    {
        cpu->r[14] = 0x001178d0u; fn_00135de0(cpu);
    }
L_001178d0:;
    {
        cpu->r[1] = 0x00005617u;
    }
L_001178d4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001178d8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001178dc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001178e0:;
    {
        cpu->r[14] = 0x001178e4u; fn_00135de0(cpu);
    }
L_001178e4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001178e8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001178ec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001178f0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001178f4:;
    {
        cpu->r[14] = 0x001178f8u; fn_001367cc(cpu);
    }
L_001178f8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001178fc:;
    {
        cpu->r[14] = 0x00117900u; fn_0009618c(cpu);
    }
L_00117900:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117904:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117964;
        }
    }
L_00117908:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0011790c:;
    {
        cpu->r[6] = 0x00001c38u;
    }
L_00117910:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00117914:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00117918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011791c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117964;
        }
    }
L_00117920:;
    {
        cpu->r[14] = 0x00117924u; fn_000b0558(cpu);
    }
L_00117924:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00117928:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0011792c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00117930:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00117934:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0xb58u);
    }
L_00117938:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0xd08u);
    }
L_0011793c:;
    {
        cpu->r[14] = 0x00117944u;
    }
L_00117940:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00117944u)) return;
    }
L_00117944:;
    {
        cpu->r[3] = rd32(0x0011794cu + + 0x74u);
    }
L_00117948:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0011794c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_00117950:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00117954:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117958:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[7]);
    }
L_0011795c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00117960:;
    {
        cpu->r[14] = 0x00117964u; fn_00132a24(cpu);
    }
L_00117964:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117968:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011796c:;
    {
        cpu->r[14] = 0x00117970u; fn_00099b14(cpu);
    }
L_00117970:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00117974:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00117978:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0011797c:;
    {
        cpu->r[14] = 0x00117980u; fn_000f35e4(cpu);
    }
L_00117980:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_00117984:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00117988:;
    {
        cpu->r[14] = 0x0011798cu; fn_0018ba6c(cpu);
    }
L_0011798c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117990:;
    {
        cpu->r[14] = 0x00117994u; fn_00108b6c(cpu);
    }
L_00117994:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00117998:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0011799c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001179a0:;
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
L_001179a4:;
    {
        return fn_000f361c(cpu);
    }
L_001179a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001179ac:;
    {
        cpu->r[14] = 0x001179b0u; fn_00099b28(cpu);
    }
L_001179b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001179b4:;
    {
        goto L_001177d0;
    }
}

/* _ZN22GS_NewUnlockedCarsMenuD1Ev @ 001179c8 (arm) */
void fn_001179c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001179c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001179cc:;
    {
        cpu->r[5] = rd32(0x001179d4u + + 0x4cu);
    }
L_001179d0:;
    {
        cpu->r[3] = rd32(0x001179d8u + + 0x4cu);
    }
L_001179d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001179d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001179e0u, cpu->r[5], 0, 0);
    }
L_001179dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x95cu);
    }
L_001179e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001179e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001179e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001179ec:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001179f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117a00;
        }
    }
L_001179f4:;
    {
        cpu->r[14] = 0x001179f8u; fn_0018ba60(cpu);
    }
L_001179f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001179fc:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00117a00:;
    {
        cpu->r[3] = rd32(0x00117a08u + + 0x20u);
    }
L_00117a04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117a0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00117a10:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00117a14:;
    {
        cpu->r[14] = 0x00117a18u; fn_000ec21c(cpu);
    }
L_00117a18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117a20u)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenuD0Ev @ 00117a2c (arm) */
void fn_00117a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117a2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00117a30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117a34:;
    {
        cpu->r[14] = 0x00117a38u; fn_001179c8(cpu);
    }
L_00117a38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a3c:;
    {
        cpu->r[14] = 0x00117a40u; fn_0018ba20(cpu);
    }
L_00117a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00117a48u)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenuD2Ev @ 00117a48 (arm) */
void fn_00117a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117a48:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00117a4c:;
    {
        cpu->r[5] = rd32(0x00117a54u + + 0x4cu);
    }
L_00117a50:;
    {
        cpu->r[3] = rd32(0x00117a58u + + 0x4cu);
    }
L_00117a54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117a58:;
    {
        cpu->r[5] = add_flags(cpu, 0x00117a60u, cpu->r[5], 0, 0);
    }
L_00117a5c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x95cu);
    }
L_00117a60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117a64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117a68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00117a6c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00117a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117a80;
        }
    }
L_00117a74:;
    {
        cpu->r[14] = 0x00117a78u; fn_0018ba60(cpu);
    }
L_00117a78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00117a7c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_00117a80:;
    {
        cpu->r[3] = rd32(0x00117a88u + + 0x20u);
    }
L_00117a84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00117a90:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00117a94:;
    {
        cpu->r[14] = 0x00117a98u; fn_000ec21c(cpu);
    }
L_00117a98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117a9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117aa0u)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenuC1Eii @ 00117aac (arm) */
void fn_00117aac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117aac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00117ab0:;
    {
        cpu->r[5] = rd32(0x00117ab8u + + 0x70u);
    }
L_00117ab4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117ab8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00117abc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00117ac0:;
    {
        cpu->r[14] = 0x00117ac4u; fn_0010ffa8(cpu);
    }
L_00117ac4:;
    {
        cpu->r[3] = rd32(0x00117accu + + 0x60u);
    }
L_00117ac8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00117ad0u, cpu->r[5], 0, 0);
    }
L_00117acc:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[6]);
    }
L_00117ad0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117ad4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[7]);
    }
L_00117ad8:;
    {
        cpu->r[0] = 0x00000190u;
    }
L_00117adc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117ae0:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00117ae4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00117ae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00117aec:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[2]);
    }
L_00117af0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00117af4:;
    {
        cpu->r[14] = 0x00117af8u; imp__Znaj(cpu); /* _Znaj */
    }
L_00117af8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[0]);
    }
L_00117afc:;
    {
        cpu->r[0] = 0x3f800000u;
    }
L_00117b00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00117b04:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00117b08:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00117b0c:;
    {
        cpu->r[14] = 0x00117b10u; imp_glClearColor(cpu); /* glClearColor */
    }
L_00117b10:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_00117b14:;
    {
        cpu->r[14] = 0x00117b18u; imp_glClear(cpu); /* glClear */
    }
L_00117b18:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_00117b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117b20:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_00117b24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117b28u)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenuC2Eii @ 00117b30 (arm) */
void fn_00117b30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117b30:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00117b34:;
    {
        cpu->r[5] = rd32(0x00117b3cu + + 0x70u);
    }
L_00117b38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117b3c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00117b40:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00117b44:;
    {
        cpu->r[14] = 0x00117b48u; fn_0010ffa8(cpu);
    }
L_00117b48:;
    {
        cpu->r[3] = rd32(0x00117b50u + + 0x60u);
    }
L_00117b4c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00117b54u, cpu->r[5], 0, 0);
    }
L_00117b50:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[6]);
    }
L_00117b54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117b58:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[7]);
    }
L_00117b5c:;
    {
        cpu->r[0] = 0x00000190u;
    }
L_00117b60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117b64:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00117b68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00117b6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00117b70:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[2]);
    }
L_00117b74:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00117b78:;
    {
        cpu->r[14] = 0x00117b7cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00117b7c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[0]);
    }
L_00117b80:;
    {
        cpu->r[0] = 0x3f800000u;
    }
L_00117b84:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00117b88:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00117b8c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00117b90:;
    {
        cpu->r[14] = 0x00117b94u; imp_glClearColor(cpu); /* glClearColor */
    }
L_00117b94:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_00117b98:;
    {
        cpu->r[14] = 0x00117b9cu; imp_glClear(cpu); /* glClear */
    }
L_00117b9c:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_00117ba0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117ba4:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_00117ba8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117bacu)) return;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu17ApplyMenuSettingsEv @ 00117bb4 (arm) */
void fn_00117bb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00117bb4:;
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
L_00117bb8:;
    {
        cpu->r[5] = rd32(0x00117bc0u + + 0x41cu);
    }
L_00117bbc:;
    {
        cpu->r[11] = rd32(0x00117bc4u + + 0x41cu);
    }
L_00117bc0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00117bc4:;
    {
        cpu->r[5] = add_flags(cpu, 0x00117bccu, cpu->r[5], 0, 0);
    }
L_00117bc8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00117bcc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x950u);
    }
L_00117bd0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117bd4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00117bd8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117e9c;
        }
    }
L_00117be0:;
    {
        cpu->r[7] = rd32(0x00117be8u + + 0x3fcu);
    }
L_00117be4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117be8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_00117bec:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00117bf0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117ed0;
        }
    }
L_00117bf4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117bf8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x954u);
    }
L_00117bfc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00117c00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117f18;
        }
    }
L_00117c08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117c0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x60u);
    }
L_00117c10:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00117c14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117f48;
        }
    }
L_00117c18:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_00117c1c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00117c20:;
    {
        cpu->r[14] = 0x00117c24u; imp__Znaj(cpu); /* _Znaj */
    }
L_00117c24:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_00117c28:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[8]);
    }
L_00117c2c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00117c30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00117c34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00117c38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117c3c:;
    {
        cpu->r[14] = 0x00117c40u; fn_000a0cf8(cpu);
    }
L_00117c40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00117c44:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00117c48:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00117c4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117c50:;
    {
        cpu->r[14] = 0x00117c54u; fn_000a0cf8(cpu);
    }
L_00117c54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
    }
L_00117c58:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00117c5c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00117c60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117de0;
        }
    }
L_00117c64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x954u);
    }
L_00117c68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00117c6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117d6c;
        }
    }
L_00117c70:;
    {
        wr8(cpu->r[6] + cpu->r[8], cpu->r[9]);
    }
L_00117c74:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00117c78:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000064u, 1, 1);
    }
L_00117c7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117c30;
        }
    }
L_00117c80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00117c84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00117c88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00117fa4;
        }
    }
L_00117c8c:;
    {
        cpu->r[3] = rd32(0x00117c94u + + 0x354u);
    }
L_00117c90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00117c94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00117c98:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00117c9c:;
    {
        cpu->r[14] = 0x00117ca0u; fn_0009e9e8(cpu);
    }
L_00117ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00117ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00117ca8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00117f80;
        }
    }
L_00117cac:;
    {
        cpu->r[3] = rd32(0x00117cb4u + + 0x338u);
    }
L_00117cb0:;
    {
        cpu->r[2] = 0x00000620u;
    }
L_00117cb4:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00117cb8:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00117cbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117cc4u, cpu->r[3], 0, 0);
    }
L_00117cc0:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_00117cc4:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00117cc8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00117ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00117cd0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00117cd4:;
    {
        wr32(cpu->r[4] + + 0x8d8u, cpu->r[8]);
    }
L_00117cd8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_00117cdc:;
    {
        cpu->r[5] = 0x00001c4cu;
    }
L_00117ce0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00117ce4:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[8]);
    }
L_00117ce8:;
    {
        cpu->r[14] = 0x00117cf0u;
    }
L_00117cec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00117cf0u)) return;
    }
L_00117cf0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117cf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00117cf8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00117cfc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00117d00:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[8]);
    }
L_00117d04:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[2]);
    }
L_00117d08:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00117d0c:;
    {
        cpu->r[14] = 0x00117d10u; fn_0009613c(cpu);
    }
L_00117d10:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[0]);
    }
L_00117d14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117d18:;
    {
        cpu->r[14] = 0x00117d1cu; fn_0009af1c(cpu);
    }
L_00117d1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117d20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00117d24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00117d28:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00117d2c:;
    {
        cpu->r[14] = 0x00117d34u;
    }
L_00117d30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00117d34u)) return;
    }
L_00117d34:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00117d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117d44;
        }
    }
L_00117d3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117d40:;
    {
        cpu->r[14] = 0x00117d44u; fn_0018ba60(cpu);
    }
L_00117d44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117d48:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00117d4c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00117d50:;
    {
        cpu->r[1] = 0x000000b7u;
    }
L_00117d54:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00117d58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00117d5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117d60:;
    {
        cpu->r[14] = 0x00117d64u; fn_000fd288(cpu);
    }
L_00117d64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00117d68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00117d6cu)) return;
    }
L_00117d6c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117d70:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_00117d74:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117e6c;
        }
    }
L_00117d7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117d80:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_00117d84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00117d88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117c70;
        }
    }
L_00117d8c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117d90:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00117d94:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117e10;
        }
    }
L_00117d9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117da0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00117da4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00117da8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00117dac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_00117db0:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[0]);
    }
L_00117db4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00117db8:;
    {
        cpu->r[14] = 0x00117dbcu; fn_000a0cf8(cpu);
    }
L_00117dbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x960u);
    }
L_00117dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x95cu);
    }
L_00117dc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00117dc8:;
    {
        wr8(cpu->r[6] + cpu->r[8], cpu->r[1]);
    }
L_00117dcc:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[8]);
    }
L_00117dd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x960u);
    }
L_00117dd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00117dd8:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_00117ddc:;
    {
        goto L_00117c74;
    }
L_00117de0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117de4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00117de8:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117dec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117e34;
        }
    }
L_00117df0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117df4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x94u);
    }
L_00117df8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00117dfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00117c64;
        }
    }
L_00117e00:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117e04:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00117e08:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117e0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117d9c;
        }
    }
L_00117e10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00117e14:;
    {
        cpu->r[14] = 0x00117e18u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117e18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117e1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117d9c;
        }
    }
L_00117e20:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117e24:;
    {
        cpu->r[14] = 0x00117e28u; fn_00094228(cpu);
    }
L_00117e28:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00117e2c:;
    {
        cpu->r[14] = 0x00117e30u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117e30:;
    {
        goto L_00117d9c;
    }
L_00117e34:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00117e38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00117e3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00117e40:;
    {
        cpu->r[14] = 0x00117e44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117e44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00117e48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117e4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117df0;
        }
    }
L_00117e50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117e54:;
    {
        cpu->r[14] = 0x00117e58u; fn_00094228(cpu);
    }
L_00117e58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00117e5c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00117e60:;
    {
        cpu->r[14] = 0x00117e64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117e64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00117e68:;
    {
        goto L_00117df0;
    }
L_00117e6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00117e70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00117e74:;
    {
        cpu->r[14] = 0x00117e78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117e78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00117e7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117d7c;
        }
    }
L_00117e84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117e88:;
    {
        cpu->r[14] = 0x00117e8cu; fn_00094228(cpu);
    }
L_00117e8c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00117e90:;
    {
        cpu->r[14] = 0x00117e94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117e94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00117e98:;
    {
        goto L_00117d7c;
    }
L_00117e9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117ea0:;
    {
        cpu->r[14] = 0x00117ea4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117ea4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117be0;
        }
    }
L_00117eac:;
    {
        cpu->r[7] = rd32(0x00117eb4u + + 0x130u);
    }
L_00117eb0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117eb4:;
    {
        cpu->r[14] = 0x00117eb8u; fn_00094228(cpu);
    }
L_00117eb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117ebc:;
    {
        cpu->r[14] = 0x00117ec0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117ec0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117ec4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x94u);
    }
L_00117ec8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00117ecc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00117bf4;
        }
    }
L_00117ed0:;
    {
        cpu->r[1] = rd32(0x00117ed8u + + 0x118u);
    }
L_00117ed4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00117ed8:;
    {
        cpu->r[2] = rd32(0x00117ee0u + + 0x114u);
    }
L_00117edc:;
    {
        cpu->r[14] = 0x00000063u;
    }
L_00117ee0:;
    {
        cpu->r[3] = rd32(0x00117ee8u + + 0x110u);
    }
L_00117ee4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00117eecu, cpu->r[1], 0, 0);
    }
L_00117ee8:;
    {
        cpu->r[12] = rd32(0x00117ef0u + + 0x10cu);
    }
L_00117eec:;
    {
        cpu->r[2] = add_flags(cpu, 0x00117ef4u, cpu->r[2], 0, 0);
    }
L_00117ef0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117ef8u, cpu->r[3], 0, 0);
    }
L_00117ef4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00117ef8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00117f00u, cpu->r[12], 0, 0);
    }
L_00117efc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117f00:;
    {
        cpu->r[14] = 0x00117f04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00117f04:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00117f08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x954u);
    }
L_00117f0c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00117f10:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00117f14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00117c08;
        }
    }
L_00117f18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117f1c:;
    {
        cpu->r[14] = 0x00117f20u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00117f20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00117f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00117c08;
        }
    }
L_00117f28:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117f2c:;
    {
        cpu->r[14] = 0x00117f30u; fn_00094228(cpu);
    }
L_00117f30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00117f34:;
    {
        cpu->r[14] = 0x00117f38u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00117f38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00117f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x60u);
    }
L_00117f40:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00117f44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00117c18;
        }
    }
L_00117f48:;
    {
        cpu->r[1] = rd32(0x00117f50u + + 0xb0u);
    }
L_00117f4c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00117f50:;
    {
        cpu->r[2] = rd32(0x00117f58u + + 0xacu);
    }
L_00117f54:;
    {
        cpu->r[14] = 0x00000064u;
    }
L_00117f58:;
    {
        cpu->r[3] = rd32(0x00117f60u + + 0xa8u);
    }
L_00117f5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00117f64u, cpu->r[1], 0, 0);
    }
L_00117f60:;
    {
        cpu->r[12] = rd32(0x00117f68u + + 0xa4u);
    }
L_00117f64:;
    {
        cpu->r[2] = add_flags(cpu, 0x00117f6cu, cpu->r[2], 0, 0);
    }
L_00117f68:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117f70u, cpu->r[3], 0, 0);
    }
L_00117f6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00117f70:;
    {
        cpu->r[12] = add_flags(cpu, 0x00117f78u, cpu->r[12], 0, 0);
    }
L_00117f74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117f78:;
    {
        cpu->r[14] = 0x00117f7cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00117f7c:;
    {
        goto L_00117c18;
    }
L_00117f80:;
    {
        cpu->r[3] = rd32(0x00117f88u + + 0x88u);
    }
L_00117f84:;
    {
        cpu->r[2] = 0x0000061fu;
    }
L_00117f88:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[2]);
    }
L_00117f8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00117f90:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117f98u, cpu->r[3], 0, 0);
    }
L_00117f94:;
    {
        wr32(cpu->r[4] + + 0x8d4u, cpu->r[2]);
    }
L_00117f98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_00117f9c:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[3]);
    }
L_00117fa0:;
    {
        goto L_00117cc8;
    }
L_00117fa4:;
    {
        cpu->r[1] = rd32(0x00117facu + + 0x68u);
    }
L_00117fa8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00117fac:;
    {
        cpu->r[2] = rd32(0x00117fb4u + + 0x64u);
    }
L_00117fb0:;
    {
        cpu->r[14] = 0x0000007au;
    }
L_00117fb4:;
    {
        cpu->r[3] = rd32(0x00117fbcu + + 0x60u);
    }
L_00117fb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00117fc0u, cpu->r[1], 0, 0);
    }
L_00117fbc:;
    {
        cpu->r[12] = rd32(0x00117fc4u + + 0x5cu);
    }
L_00117fc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00117fc8u, cpu->r[2], 0, 0);
    }
L_00117fc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00117fccu, cpu->r[3], 0, 0);
    }
L_00117fc8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00117fcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00117fd4u, cpu->r[12], 0, 0);
    }
L_00117fd0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00117fd4:;
    {
        cpu->r[14] = 0x00117fd8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00117fd8:;
    {
        goto L_00117c8c;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu6RenderEv @ 00118024 (arm) */
void fn_00118024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118024:;
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
L_00118028:;
    {
        cpu->r[6] = rd32(0x00118030u + + 0x220u);
    }
L_0011802c:;
    {
        cpu->r[3] = rd32(0x00118034u + + 0x220u);
    }
L_00118030:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00118034:;
    {
        cpu->r[6] = add_flags(cpu, 0x0011803cu, cpu->r[6], 0, 0);
    }
L_00118038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011803c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00118040:;
    {
        cpu->r[3] = rd32(0x00118048u + + 0x210u);
    }
L_00118044:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00118048:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0011804c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118050:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00118054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011820c;
        }
    }
L_00118058:;
    {
        cpu->r[5] = rd32(0x00118060u + + 0x1fcu);
    }
L_0011805c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00118060:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00118064:;
    {
        cpu->r[14] = 0x00118068u; fn_00096a08(cpu);
    }
L_00118068:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0011806c:;
    {
        cpu->r[10] = rd32(0x00118074u + + 0x1ecu);
    }
L_00118070:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118074:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00118078:;
    {
        cpu->r[14] = 0x0011807cu; fn_0018aa44(cpu);
    }
L_0011807c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00118080:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118084:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00118088:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0011808c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00118090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00118094:;
    {
        cpu->r[14] = 0x00118098u; fn_00113570(cpu);
    }
L_00118098:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0011809c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_001180a0:;
    {
        cpu->r[14] = 0x0000004cu;
    }
L_001180a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001180a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001180ac:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001180b0:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_001180b4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x444u);
    }
L_001180b8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001180bc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[12] = v;
    }
L_001180c0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001180c4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001180c8:;
    {
        cpu->r[7] = rd32(cpu->r[14] + + 0xcu);
    }
L_001180cc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001180d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001180d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001180d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001180dc:;
    {
        cpu->r[14] = 0x001180e0u; fn_000a8a2c(cpu);
    }
L_001180e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001180e4:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_001180e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001180ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001180f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001180f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001180f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001180fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00118100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00118104:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00118108:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0011810c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00118110:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000001acu, cpu->r[2], 1, 0);
    }
L_00118114:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00118118:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0011811c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00118120:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000050u, cpu->r[3], 1, 0);
    }
L_00118124:;
    {
        cpu->r[14] = 0x00118128u; fn_000ad8a0(cpu);
    }
L_00118128:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0011812c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118130:;
    {
        cpu->r[14] = 0x00118134u; fn_000aeb58(cpu);
    }
L_00118134:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_00118138:;
    {
        cpu->r[2] = 0x000001adu;
    }
L_0011813c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00118140:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00118144:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00118148:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011814c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00118150:;
    {
        cpu->r[14] = 0x00118154u; fn_000ad19c(cpu);
    }
L_00118154:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00118158:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0011815c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00118188;
        }
    }
L_00118160:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00118164:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00118168:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011816c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118170:;
    {
        cpu->r[14] = 0x00118178u;
    }
L_00118174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00118178u)) return;
    }
L_00118178:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011817c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00118180:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00118184:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00118160;
        }
    }
L_00118188:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011818c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00118190:;
    {
        cpu->r[14] = 0x00118198u;
    }
L_00118194:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00118198u)) return;
    }
L_00118198:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0011819c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001181a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001181a4:;
    {
        cpu->r[14] = 0x001181acu;
    }
L_001181a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001181acu)) return;
    }
L_001181ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x968u);
    }
L_001181b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001181b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00118204;
        }
    }
L_001181b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001181bc:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001181c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001181c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00118204;
        }
    }
L_001181c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_001181cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001181d0:;
    {
        cpu->r[1] = (~shifter(cpu->r[3], 3, 24u, &shc));
    }
L_001181d4:;
    {
        cpu->r[1] = (~shifter(cpu->r[1], 2, 24u, &shc));
    }
L_001181d8:;
    {
        cpu->r[14] = 0x001181dcu; fn_0012dd58(cpu);
    }
L_001181dc:;
    {
        cpu->r[12] = rd32(0x001181e4u + + 0x80u);
    }
L_001181e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001181e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001181e8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001181ec:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001181f0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001181f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001181f8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001181fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00118200:;
    {
        cpu->r[14] = 0x00118204u; fn_00130908(cpu);
    }
L_00118204:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00118208:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011820cu)) return;
    }
L_0011820c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118210:;
    {
        cpu->r[14] = 0x00118214u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118214:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118058;
        }
    }
L_0011821c:;
    {
        cpu->r[5] = rd32(0x00118224u + + 0x38u);
    }
L_00118220:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00118224:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118228:;
    {
        cpu->r[14] = 0x0011822cu; fn_0018aa20(cpu);
    }
L_0011822c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118230:;
    {
        cpu->r[14] = 0x00118234u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118234:;
    {
        cpu->r[3] = rd32(0x0011823cu + + 0x2cu);
    }
L_00118238:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011823c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00118240:;
    {
        cpu->r[3] = rd32(0x00118248u + + 0x24u);
    }
L_00118244:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00118248:;
    {
        cpu->r[14] = 0x0011824cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0011824c:;
    {
        goto L_0011805c;
    }
}

/* _ZN22GS_NewUnlockedCarsMenu11InitSpritesEv @ 00118270 (arm) */
void fn_00118270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118270:;
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
L_00118274:;
    {
        cpu->r[4] = rd32(0x0011827cu + + 0x2b0u);
    }
L_00118278:;
    {
        cpu->r[7] = rd32(0x00118280u + + 0x2b0u);
    }
L_0011827c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00118280:;
    {
        cpu->r[4] = add_flags(cpu, 0x00118288u, cpu->r[4], 0, 0);
    }
L_00118284:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118288:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0011828c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001183a8;
        }
    }
L_00118294:;
    {
        cpu->r[6] = rd32(0x0011829cu + + 0x298u);
    }
L_00118298:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0011829c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001182a0:;
    {
        cpu->r[14] = 0x001182a4u; fn_00096a08(cpu);
    }
L_001182a4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001182a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001182ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001182b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001182b4:;
    {
        cpu->r[14] = 0x001182b8u; fn_0018aa44(cpu);
    }
L_001182b8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001182bc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001182c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001182c4:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_001182c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001184f0;
        }
    }
L_001182cc:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001182d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001182d4:;
    {
        cpu->r[14] = 0x001182d8u; fn_00096a08(cpu);
    }
L_001182d8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001182dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001182e0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001182e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001182e8:;
    {
        cpu->r[14] = 0x001182ecu; fn_0018aa44(cpu);
    }
L_001182ec:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001182f0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001182f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001182f8:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_001182fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001184b4;
        }
    }
L_00118300:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00118304:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118308:;
    {
        cpu->r[14] = 0x0011830cu; fn_00096a08(cpu);
    }
L_0011830c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118310:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118314:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118318:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011831c:;
    {
        cpu->r[14] = 0x00118320u; fn_0018aa44(cpu);
    }
L_00118320:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118324:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00118328:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011832c:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00118330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118478;
        }
    }
L_00118334:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00118338:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011833c:;
    {
        cpu->r[14] = 0x00118340u; fn_00096a08(cpu);
    }
L_00118340:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118344:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118348:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011834c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118350:;
    {
        cpu->r[14] = 0x00118354u; fn_0018aa44(cpu);
    }
L_00118354:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118358:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0011835c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118360:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00118364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011843c;
        }
    }
L_00118368:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011836c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00118370:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118374:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118378:;
    {
        cpu->r[14] = 0x0011837cu; fn_0018aa44(cpu);
    }
L_0011837c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118380:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00118384:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118388:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0011838c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001183ec;
        }
    }
L_00118390:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00118394:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118398:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0011839c:;
    {
        cpu->r[14] = 0x001183a0u; fn_0018aa44(cpu);
    }
L_001183a0:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001183a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001183a8u)) return;
    }
L_001183a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001183ac:;
    {
        cpu->r[14] = 0x001183b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001183b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001183b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118294;
        }
    }
L_001183b8:;
    {
        cpu->r[6] = rd32(0x001183c0u + + 0x174u);
    }
L_001183bc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001183c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001183c4:;
    {
        cpu->r[14] = 0x001183c8u; fn_0018aa20(cpu);
    }
L_001183c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001183cc:;
    {
        cpu->r[14] = 0x001183d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001183d0:;
    {
        cpu->r[3] = rd32(0x001183d8u + + 0x160u);
    }
L_001183d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001183d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001183dc:;
    {
        cpu->r[3] = rd32(0x001183e4u + + 0x158u);
    }
L_001183e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001183e4:;
    {
        cpu->r[14] = 0x001183e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001183e8:;
    {
        goto L_00118298;
    }
L_001183ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001183f0:;
    {
        cpu->r[14] = 0x001183f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001183f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001183f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118390;
        }
    }
L_001183fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118400:;
    {
        cpu->r[14] = 0x00118404u; fn_0018aa20(cpu);
    }
L_00118404:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118408:;
    {
        cpu->r[14] = 0x0011840cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011840c:;
    {
        cpu->r[3] = rd32(0x00118414u + + 0x124u);
    }
L_00118410:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118414:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118418:;
    {
        cpu->r[3] = rd32(0x00118420u + + 0x11cu);
    }
L_0011841c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118420:;
    {
        cpu->r[14] = 0x00118424u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118424:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00118428:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011842c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00118430:;
    {
        cpu->r[14] = 0x00118434u; fn_0018aa44(cpu);
    }
L_00118434:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00118438:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011843cu)) return;
    }
L_0011843c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118440:;
    {
        cpu->r[14] = 0x00118444u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118444:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118368;
        }
    }
L_0011844c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118450:;
    {
        cpu->r[14] = 0x00118454u; fn_0018aa20(cpu);
    }
L_00118454:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118458:;
    {
        cpu->r[14] = 0x0011845cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0011845c:;
    {
        cpu->r[3] = rd32(0x00118464u + + 0xd4u);
    }
L_00118460:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118464:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118468:;
    {
        cpu->r[3] = rd32(0x00118470u + + 0xccu);
    }
L_0011846c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118470:;
    {
        cpu->r[14] = 0x00118474u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118474:;
    {
        goto L_00118368;
    }
L_00118478:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011847c:;
    {
        cpu->r[14] = 0x00118480u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118480:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118334;
        }
    }
L_00118488:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0011848c:;
    {
        cpu->r[14] = 0x00118490u; fn_0018aa20(cpu);
    }
L_00118490:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118494:;
    {
        cpu->r[14] = 0x00118498u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118498:;
    {
        cpu->r[3] = rd32(0x001184a0u + + 0x98u);
    }
L_0011849c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001184a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001184a4:;
    {
        cpu->r[3] = rd32(0x001184acu + + 0x90u);
    }
L_001184a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001184ac:;
    {
        cpu->r[14] = 0x001184b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001184b0:;
    {
        goto L_00118334;
    }
L_001184b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001184b8:;
    {
        cpu->r[14] = 0x001184bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001184bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001184c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118300;
        }
    }
L_001184c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001184c8:;
    {
        cpu->r[14] = 0x001184ccu; fn_0018aa20(cpu);
    }
L_001184cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001184d0:;
    {
        cpu->r[14] = 0x001184d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001184d4:;
    {
        cpu->r[3] = rd32(0x001184dcu + + 0x5cu);
    }
L_001184d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001184dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001184e0:;
    {
        cpu->r[3] = rd32(0x001184e8u + + 0x54u);
    }
L_001184e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001184e8:;
    {
        cpu->r[14] = 0x001184ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001184ec:;
    {
        goto L_00118300;
    }
L_001184f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001184f4:;
    {
        cpu->r[14] = 0x001184f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001184f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001184fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001182cc;
        }
    }
L_00118500:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118504:;
    {
        cpu->r[14] = 0x00118508u; fn_0018aa20(cpu);
    }
L_00118508:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0011850c:;
    {
        cpu->r[14] = 0x00118510u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118510:;
    {
        cpu->r[3] = rd32(0x00118518u + + 0x20u);
    }
L_00118514:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118518:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0011851c:;
    {
        cpu->r[3] = rd32(0x00118524u + + 0x18u);
    }
L_00118520:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118524:;
    {
        cpu->r[14] = 0x00118528u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118528:;
    {
        goto L_001182cc;
    }
}

/* _ZN11GS_PageMenu8isKindOfEi @ 00118540 (arm) */
void fn_00118540(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118540:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002fu, 1, 1);
    }
L_00118544:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00118548:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0011854c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_32 @ 00118550 (arm) */
void fn_00118550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118550:;
    {
        cpu->r[3] = rd32(0x00118558u + + 0x3cu);
    }
L_00118554:;
    {
        cpu->r[1] = rd32(0x0011855cu + + 0x3cu);
    }
L_00118558:;
    {
        cpu->r[3] = add_flags(cpu, 0x00118560u, cpu->r[3], 0, 0);
    }
L_0011855c:;
    {
        cpu->r[2] = rd32(0x00118564u + + 0x38u);
    }
L_00118560:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00118564:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011856cu, cpu->r[2], 0, 0);
    }
L_00118568:;
    {
        cpu->r[1] = rd32(0x00118570u + + 0x30u);
    }
L_0011856c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00118570:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00118574:;
    {
        cpu->r[3] = rd32(0x0011857cu + + 0x28u);
    }
L_00118578:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_0011857c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00118580:;
    {
        cpu->r[3] = add_flags(cpu, 0x00118588u, cpu->r[3], 0, 0);
    }
L_00118584:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00118588:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x000000afu, 1, 0);
    }
L_0011858c:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_00118590:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_PageMenuD1Ev @ 001185a8 (arm) */
void fn_001185a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001185a8:;
    {
        cpu->r[3] = rd32(0x001185b0u + + 0x24u);
    }
L_001185ac:;
    {
        cpu->r[2] = rd32(0x001185b4u + + 0x24u);
    }
L_001185b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001185b8u, cpu->r[3], 0, 0);
    }
L_001185b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001185b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001185bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001185c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001185c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001185c8:;
    {
        cpu->r[14] = 0x001185ccu; fn_000ec21c(cpu);
    }
L_001185cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001185d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001185d4u)) return;
    }
}

/* _ZN11GS_PageMenu6UpdateEv @ 001185dc (arm) */
void fn_001185dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001185dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001185e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001185e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001185e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001185ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118634;
        }
    }
L_001185f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001185f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118608;
        }
    }
L_001185f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001185fc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00118600u)) return;
        }
    }
L_00118600:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00118604:;
    {
        return fn_00114a58(cpu);
    }
L_00118608:;
    {
        cpu->r[14] = 0x0011860cu; fn_0010da28(cpu);
    }
L_0011860c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118610:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00118614u)) return;
        }
    }
L_00118614:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00118618:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_0011861c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00118620:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00118624u)) return;
        }
    }
L_00118624:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00118628:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0011862c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00118630:;
    {
        return fn_000f34e8(cpu);
    }
L_00118634:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00118638:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0011863c:;
    {
        return fn_000eb59c(cpu);
    }
}

/* _ZN11GS_PageMenu8DoActionEii @ 00118640 (arm) */
void fn_00118640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118640:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00118644:;
    {
        cpu->r[12] = rd32(0x0011864cu + + 0x15cu);
    }
L_00118648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011864c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00118650:;
    {
        cpu->r[12] = add_flags(cpu, 0x00118658u, cpu->r[12], 0, 0);
    }
L_00118654:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00118658:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011865c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00118660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011866c;
        }
    }
L_00118664:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00118668:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0011866cu)) return;
    }
L_0011866c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00118670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00118674:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00118798;
        }
    }
L_00118678:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0011867c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00118680:;
    {
        cpu->r[3] = 0x0000054au;
    }
L_00118684:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00118688:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
        }
    }
L_0011868c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00118690:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_00118694:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_00118698:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_0011869c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001186a0:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[5]);
    }
L_001186a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118768;
        }
    }
L_001186a8:;
    {
        cpu->r[3] = 0x0000054bu;
    }
L_001186ac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001186b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011870c;
        }
    }
L_001186b4:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_001186b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001186bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00118664;
        }
    }
L_001186c0:;
    {
        cpu->r[0] = rd32(0x001186c8u + + 0xe4u);
    }
L_001186c4:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001186c8:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001186cc:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_001186d0:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001186d4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001186d8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001186dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001186e0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001186e4:;
    {
        cpu->r[14] = 0x001186e8u; fn_000fd248(cpu);
    }
L_001186e8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001186ec:;
    {
        cpu->r[14] = 0x001186f0u; fn_00093f34(cpu);
    }
L_001186f0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001186f4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001186f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001186fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00118700:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00118704:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00118708:;
    {
        goto L_00118664;
    }
L_0011870c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x954u);
    }
L_00118710:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x958u);
    }
L_00118714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00118718:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_0011871c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00118720:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00118724:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_00118728:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0011872c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x950u);
        }
    }
L_00118730:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_00118734:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00118738:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0011873c:;
    {
        cpu->r[3] = rd32(0x00118744u + + 0x68u);
    }
L_00118740:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00118744:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_00118748:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0011874c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00118750:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00118754:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00118758:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011875c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00118760:;
    {
        cpu->r[14] = 0x00118764u; fn_000fd248(cpu);
    }
L_00118764:;
    {
        goto L_00118664;
    }
L_00118768:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x954u);
    }
L_0011876c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_00118770:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00118774:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_00118778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0011877c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00118780:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_00118784:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00118788:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x958u);
        }
    }
L_0011878c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00118790:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_00118794:;
    {
        goto L_00118734;
    }
L_00118798:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0011879c:;
    {
        cpu->r[14] = 0x001187a4u;
    }
L_001187a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001187a4u)) return;
    }
L_001187a4:;
    {
        goto L_00118664;
    }
}

/* _ZN11GS_PageMenuC1Eiiib @ 001187b0 (arm) */
void fn_001187b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001187b0:;
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
L_001187b4:;
    {
        cpu->r[4] = rd32(0x001187bcu + + 0x4cu);
    }
L_001187b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001187bc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001187c0:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001187c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001187c8:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x20u);
    }
L_001187cc:;
    {
        cpu->r[14] = 0x001187d0u; fn_0010ffa8(cpu);
    }
L_001187d0:;
    {
        cpu->r[2] = rd32(0x001187d8u + + 0x34u);
    }
L_001187d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001187dcu, cpu->r[4], 0, 0);
    }
L_001187d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001187dc:;
    {
        wr32(cpu->r[7] + + 0x8e0u, cpu->r[6]);
    }
L_001187e0:;
    {
        wr32(cpu->r[7] + + 0x958u, cpu->r[10]);
    }
L_001187e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001187e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001187ec:;
    {
        wr32(cpu->r[7] + + 0x954u, cpu->r[5]);
    }
L_001187f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001187f4:;
    {
        wr8(cpu->r[7] + + 0x8cau, cpu->r[3]);
    }
L_001187f8:;
    {
        wr8(cpu->r[7] + + 0x960u, cpu->r[8]);
    }
L_001187fc:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_00118800:;
    {
        wr32(cpu->r[7] + + 0x950u, cpu->r[5]);
    }
L_00118804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00118808u)) return;
    }
}

/* _ZN11GS_PageMenuC2Eiiib @ 00118810 (arm) */
void fn_00118810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118810:;
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
L_00118814:;
    {
        cpu->r[4] = rd32(0x0011881cu + + 0x4cu);
    }
L_00118818:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011881c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00118820:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00118824:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00118828:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x20u);
    }
L_0011882c:;
    {
        cpu->r[14] = 0x00118830u; fn_0010ffa8(cpu);
    }
L_00118830:;
    {
        cpu->r[2] = rd32(0x00118838u + + 0x34u);
    }
L_00118834:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011883cu, cpu->r[4], 0, 0);
    }
L_00118838:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011883c:;
    {
        wr32(cpu->r[7] + + 0x8e0u, cpu->r[6]);
    }
L_00118840:;
    {
        wr32(cpu->r[7] + + 0x958u, cpu->r[10]);
    }
L_00118844:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118848:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0011884c:;
    {
        wr32(cpu->r[7] + + 0x954u, cpu->r[5]);
    }
L_00118850:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00118854:;
    {
        wr8(cpu->r[7] + + 0x8cau, cpu->r[3]);
    }
L_00118858:;
    {
        wr8(cpu->r[7] + + 0x960u, cpu->r[8]);
    }
L_0011885c:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_00118860:;
    {
        wr32(cpu->r[7] + + 0x950u, cpu->r[5]);
    }
L_00118864:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00118868u)) return;
    }
}

/* _ZN11GS_PageMenuD0Ev @ 00118870 (arm) */
void fn_00118870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00118870:;
    {
        cpu->r[3] = rd32(0x00118878u + + 0x2cu);
    }
L_00118874:;
    {
        cpu->r[2] = rd32(0x0011887cu + + 0x2cu);
    }
L_00118878:;
    {
        cpu->r[3] = add_flags(cpu, 0x00118880u, cpu->r[3], 0, 0);
    }
L_0011887c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00118880:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00118884:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00118888:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011888c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00118890:;
    {
        cpu->r[14] = 0x00118894u; fn_000ec21c(cpu);
    }
L_00118894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00118898:;
    {
        cpu->r[14] = 0x0011889cu; fn_0018ba20(cpu);
    }
L_0011889c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001188a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001188a4u)) return;
    }
}

/* _ZN11GS_PageMenu17ApplyMenuSettingsEv @ 001188ac (arm) */
void fn_001188ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001188ac:;
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
L_001188b0:;
    {
        cpu->r[4] = rd32(0x001188b8u + + 0x204u);
    }
L_001188b4:;
    {
        cpu->r[1] = rd32(0x001188bcu + + 0x204u);
    }
L_001188b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001188bc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001188c4u, cpu->r[4], 0, 0);
    }
L_001188c0:;
    {
        cpu->r[7] = rd32(0x001188c8u + + 0x1fcu);
    }
L_001188c4:;
    {
        cpu->r[3] = rd32(0x001188ccu + + 0x1fcu);
    }
L_001188c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001188cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001188d0:;
    {
        wr32(cpu->r[5] + + 0x8d8u, cpu->r[2]);
    }
L_001188d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001188dcu, cpu->r[3], 0, 0);
    }
L_001188d8:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_001188dc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001188e0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001188e4:;
    {
        wr32(cpu->r[5] + + 0x8d4u, cpu->r[0]);
    }
L_001188e8:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001188ec:;
    {
        wr32(cpu->r[5] + + 0x8e8u, cpu->r[3]);
    }
L_001188f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001188f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000271u;
        }
    }
L_001188f8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
        }
    }
L_001188fc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00118900:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_00118904:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00118908:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0011890c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001189b4;
        }
    }
L_00118910:;
    {
        cpu->r[6] = rd32(0x00118918u + + 0x1b4u);
    }
L_00118914:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00118918:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0011891c:;
    {
        cpu->r[14] = 0x00118920u; fn_00096a08(cpu);
    }
L_00118920:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118924:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118928:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0011892c:;
    {
        cpu->r[14] = 0x00118930u; fn_0018aa44(cpu);
    }
L_00118930:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118a78;
        }
    }
L_00118938:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0011893c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00118940:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118a38;
        }
    }
L_00118948:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0011894c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118950:;
    {
        cpu->r[14] = 0x00118954u; fn_00096a08(cpu);
    }
L_00118954:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00118958:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0011895c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118960:;
    {
        cpu->r[14] = 0x00118964u; fn_0018aa44(cpu);
    }
L_00118964:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118a90;
        }
    }
L_0011896c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00118970:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00118974:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00118978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001189f8;
        }
    }
L_0011897c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118980:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00118984:;
    {
        cpu->r[14] = 0x00118988u; fn_0018b5c8(cpu);
    }
L_00118988:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8e0u);
    }
L_0011898c:;
    {
        cpu->r[3] = 0x000005a7u;
    }
L_00118990:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00118994:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00118998u)) return;
        }
    }
L_00118998:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x960u);
    }
L_0011899c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001189a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8e8u);
        }
    }
L_001189a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x38u);
        }
    }
L_001189a8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x08000000u; cpu->r[2] = v;
        }
    }
L_001189ac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x38u, cpu->r[2]);
        }
    }
L_001189b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001189b4u)) return;
    }
L_001189b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001189b8:;
    {
        cpu->r[14] = 0x001189bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001189bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001189c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118910;
        }
    }
L_001189c4:;
    {
        cpu->r[6] = rd32(0x001189ccu + + 0x100u);
    }
L_001189c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001189cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001189d0:;
    {
        cpu->r[14] = 0x001189d4u; fn_0018aa20(cpu);
    }
L_001189d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001189d8:;
    {
        cpu->r[14] = 0x001189dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001189dc:;
    {
        cpu->r[3] = rd32(0x001189e4u + + 0xecu);
    }
L_001189e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001189e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001189e8:;
    {
        cpu->r[3] = rd32(0x001189f0u + + 0xe4u);
    }
L_001189ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001189f0:;
    {
        cpu->r[14] = 0x001189f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001189f4:;
    {
        goto L_00118914;
    }
L_001189f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001189fc:;
    {
        cpu->r[14] = 0x00118a00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118a00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0011897c;
        }
    }
L_00118a08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118a0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118a10:;
    {
        cpu->r[14] = 0x00118a14u; fn_0018aa20(cpu);
    }
L_00118a14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00118a18:;
    {
        cpu->r[14] = 0x00118a1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118a1c:;
    {
        cpu->r[3] = rd32(0x00118a24u + + 0xacu);
    }
L_00118a20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118a24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118a28:;
    {
        cpu->r[3] = rd32(0x00118a30u + + 0xa4u);
    }
L_00118a2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118a30:;
    {
        cpu->r[14] = 0x00118a34u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118a34:;
    {
        goto L_0011897c;
    }
L_00118a38:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118a3c:;
    {
        cpu->r[14] = 0x00118a40u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00118a40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00118a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00118948;
        }
    }
L_00118a48:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00118a4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118a50:;
    {
        cpu->r[14] = 0x00118a54u; fn_0018aa20(cpu);
    }
L_00118a54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00118a58:;
    {
        cpu->r[14] = 0x00118a5cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00118a5c:;
    {
        cpu->r[3] = rd32(0x00118a64u + + 0x6cu);
    }
L_00118a60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118a64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118a68:;
    {
        cpu->r[3] = rd32(0x00118a70u + + 0x64u);
    }
L_00118a6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00118a70:;
    {
        cpu->r[14] = 0x00118a74u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00118a74:;
    {
        goto L_00118948;
    }
L_00118a78:;
    {
        cpu->r[14] = 0x00118a7cu; fn_00097ad0(cpu);
    }
L_00118a7c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00118a80:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00118a84:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00118a88:;
    {
        cpu->r[14] = 0x00118a8cu; fn_0018aa58(cpu);
    }
L_00118a8c:;
    {
        goto L_00118938;
    }
L_00118a90:;
    {
        cpu->r[14] = 0x00118a94u; fn_00097ad0(cpu);
    }
L_00118a94:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_00118a98:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00118a9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00118aa0:;
    {
        cpu->r[14] = 0x00118aa4u; fn_00096a08(cpu);
    }
L_00118aa4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00118aa8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00118aac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00118ab0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00118ab4:;
    {
        cpu->r[14] = 0x00118ab8u; fn_0018aa58(cpu);
    }
L_00118ab8:;
    {
        goto L_0011896c;
    }
}
