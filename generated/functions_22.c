#include "functions.h"

/* _ZN4Game17RefreshGameSoundsEv @ 00099c84 (arm) */
void fn_00099c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00099c84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00099c88:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00099c8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00099c90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00099c94:;
    {
        cpu->r[6] = rd32(0x00099c9cu + + 0x5ccu);
    }
L_00099c98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00099c9c:;
    {
        cpu->r[14] = 0x00099ca0u; fn_0018cb94(cpu);
    }
L_00099ca0:;
    {
        cpu->r[2] = rd32(0x00099ca8u + + 0x5c4u);
    }
L_00099ca4:;
    {
        cpu->r[6] = add_flags(cpu, 0x00099cacu, cpu->r[6], 0, 0);
    }
L_00099ca8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00099cac:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00099cb0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00099cb4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00099cb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00099cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_00099cc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099cb4;
        }
    }
L_00099cc4:;
    {
        cpu->r[5] = 0x0000006eu;
    }
L_00099cc8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00099ccc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099cd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099cd4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099cd8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099cdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00099ce0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00099ce4:;
    {
        cpu->r[14] = 0x00099ce8u; fn_000fd074(cpu);
    }
L_00099ce8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000077u, 1, 1);
    }
L_00099cec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099ccc;
        }
    }
L_00099cf0:;
    {
        cpu->r[5] = 0x0000007eu;
    }
L_00099cf4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099cf8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099cfc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099d00:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099d04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00099d08:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00099d0c:;
    {
        cpu->r[14] = 0x00099d10u; fn_000fd074(cpu);
    }
L_00099d10:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000089u, 1, 1);
    }
L_00099d14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099cf4;
        }
    }
L_00099d18:;
    {
        cpu->r[5] = 0x0000008du;
    }
L_00099d1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099d20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099d24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099d28:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099d2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00099d30:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00099d34:;
    {
        cpu->r[14] = 0x00099d38u; fn_000fd074(cpu);
    }
L_00099d38:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000092u, 1, 1);
    }
L_00099d3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099d1c;
        }
    }
L_00099d40:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00099d44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00099d48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00099d4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x0000006bu;
        }
    }
L_00099d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a260;
        }
    }
L_00099d54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099d58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099d5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099d60:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099d64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00099d68:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00099d6c:;
    {
        cpu->r[14] = 0x00099d70u; fn_000fd074(cpu);
    }
L_00099d70:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000006eu, 1, 1);
    }
L_00099d74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099d54;
        }
    }
L_00099d78:;
    {
        cpu->r[8] = rd32(0x00099d80u + + 0x4f0u);
    }
L_00099d7c:;
    {
        cpu->r[2] = 0x000019f5u;
    }
L_00099d80:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00099d84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00099d88:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00099d8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_00099d90:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_00099d94:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_00099d98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00099d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00099da0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0009a140;
        case 1: goto L_0009a170;
        case 2: goto L_0009a1a0;
        case 3: goto L_0009a1d0;
        case 4: goto L_0009a200;
        case 5: goto L_00099dc0;
        default: guest_unimplemented(cpu, 0x00099da0u); return; }
        }
    }
L_00099da4:;
    {
        goto L_0009a110;
    }
L_00099dc0:;
    {
        cpu->r[5] = 0x0000005du;
    }
L_00099dc4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00099dc8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099dcc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099dd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00099dd4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099dd8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00099ddc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00099de0:;
    {
        cpu->r[14] = 0x00099de4u; fn_000fd074(cpu);
    }
L_00099de4:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000006bu, 1, 1);
    }
L_00099de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00099dc8;
        }
    }
L_00099dec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099df0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099df4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099df8:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_00099dfc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00099e00:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e04:;
    {
        cpu->r[14] = 0x00099e08u; fn_000fd074(cpu);
    }
L_00099e08:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e10:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e14:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_00099e18:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e1c:;
    {
        cpu->r[14] = 0x00099e20u; fn_000fd074(cpu);
    }
L_00099e20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e28:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e2c:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_00099e30:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e34:;
    {
        cpu->r[14] = 0x00099e38u; fn_000fd074(cpu);
    }
L_00099e38:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e40:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e44:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_00099e48:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e4c:;
    {
        cpu->r[14] = 0x00099e50u; fn_000fd074(cpu);
    }
L_00099e50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e58:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e5c:;
    {
        cpu->r[1] = 0x00000092u;
    }
L_00099e60:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e64:;
    {
        cpu->r[14] = 0x00099e68u; fn_000fd074(cpu);
    }
L_00099e68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e70:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e74:;
    {
        cpu->r[1] = 0x00000093u;
    }
L_00099e78:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e7c:;
    {
        cpu->r[14] = 0x00099e80u; fn_000fd074(cpu);
    }
L_00099e80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099e88:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099e8c:;
    {
        cpu->r[1] = 0x0000009au;
    }
L_00099e90:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099e94:;
    {
        cpu->r[14] = 0x00099e98u; fn_000fd074(cpu);
    }
L_00099e98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099e9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099ea0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099ea4:;
    {
        cpu->r[1] = 0x0000007eu;
    }
L_00099ea8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099eac:;
    {
        cpu->r[14] = 0x00099eb0u; fn_000fd074(cpu);
    }
L_00099eb0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099eb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099eb8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099ebc:;
    {
        cpu->r[1] = 0x0000007fu;
    }
L_00099ec0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099ec4:;
    {
        cpu->r[14] = 0x00099ec8u; fn_000fd074(cpu);
    }
L_00099ec8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099ecc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099ed0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099ed4:;
    {
        cpu->r[1] = 0x00000080u;
    }
L_00099ed8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099edc:;
    {
        cpu->r[14] = 0x00099ee0u; fn_000fd074(cpu);
    }
L_00099ee0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099ee4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099ee8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099eec:;
    {
        cpu->r[1] = 0x00000081u;
    }
L_00099ef0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099ef4:;
    {
        cpu->r[14] = 0x00099ef8u; fn_000fd074(cpu);
    }
L_00099ef8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099efc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f00:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f04:;
    {
        cpu->r[1] = 0x00000082u;
    }
L_00099f08:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f0c:;
    {
        cpu->r[14] = 0x00099f10u; fn_000fd074(cpu);
    }
L_00099f10:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f18:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f1c:;
    {
        cpu->r[1] = 0x00000079u;
    }
L_00099f20:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f24:;
    {
        cpu->r[14] = 0x00099f28u; fn_000fd074(cpu);
    }
L_00099f28:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f30:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f34:;
    {
        cpu->r[1] = 0x0000007au;
    }
L_00099f38:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f3c:;
    {
        cpu->r[14] = 0x00099f40u; fn_000fd074(cpu);
    }
L_00099f40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f48:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f4c:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00099f50:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f54:;
    {
        cpu->r[14] = 0x00099f58u; fn_000fd074(cpu);
    }
L_00099f58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f60:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f64:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00099f68:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f6c:;
    {
        cpu->r[14] = 0x00099f70u; fn_000fd074(cpu);
    }
L_00099f70:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f78:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f7c:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_00099f80:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f84:;
    {
        cpu->r[14] = 0x00099f88u; fn_000fd074(cpu);
    }
L_00099f88:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099f8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099f90:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099f94:;
    {
        cpu->r[1] = 0x0000008bu;
    }
L_00099f98:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099f9c:;
    {
        cpu->r[14] = 0x00099fa0u; fn_000fd074(cpu);
    }
L_00099fa0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099fa4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099fa8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099fac:;
    {
        cpu->r[1] = 0x0000008cu;
    }
L_00099fb0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099fb4:;
    {
        cpu->r[14] = 0x00099fb8u; fn_000fd074(cpu);
    }
L_00099fb8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099fbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099fc0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099fc4:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00099fc8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099fcc:;
    {
        cpu->r[14] = 0x00099fd0u; fn_000fd074(cpu);
    }
L_00099fd0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099fd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099fd8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099fdc:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_00099fe0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099fe4:;
    {
        cpu->r[14] = 0x00099fe8u; fn_000fd074(cpu);
    }
L_00099fe8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00099fec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_00099ff0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00099ff4:;
    {
        cpu->r[1] = 0x00000089u;
    }
L_00099ff8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00099ffc:;
    {
        cpu->r[14] = 0x0009a000u; fn_000fd074(cpu);
    }
L_0009a000:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a004:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a008:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a00c:;
    {
        cpu->r[1] = 0x0000007du;
    }
L_0009a010:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009a014:;
    {
        cpu->r[14] = 0x0009a018u; fn_000fd074(cpu);
    }
L_0009a018:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009a01c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0009a020:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a024:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0009a028:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0009a02c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009a030:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009a034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009a038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009a03c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009a040:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0009a044:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009a048:;
    {
        uint32_t v = cpu->r[1] & 0x04000000u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0009a04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a230;
        }
    }
L_0009a050:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009a054:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a058:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a05c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009a060:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0009a064:;
    {
        cpu->r[1] = 0x00001bd0u;
    }
L_0009a068:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0009a06c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009a070:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000004du, 0, 0);
    }
L_0009a074:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0009a078:;
    {
        cpu->r[14] = 0x0009a07cu; fn_000fd074(cpu);
    }
L_0009a07c:;
    {
        cpu->r[5] = 0x00000004u;
    }
L_0009a080:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009a084:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a088:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a08c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a090:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009a094:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009a098:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009a09c:;
    {
        cpu->r[14] = 0x0009a0a0u; fn_000fd074(cpu);
    }
L_0009a0a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000012u, 1, 1);
    }
L_0009a0a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a084;
        }
    }
L_0009a0a8:;
    {
        cpu->r[5] = 0x000000b2u;
    }
L_0009a0ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a0b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a0b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a0b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009a0bc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009a0c0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009a0c4:;
    {
        cpu->r[14] = 0x0009a0c8u; fn_000fd074(cpu);
    }
L_0009a0c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000bbu, 1, 1);
    }
L_0009a0cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a0ac;
        }
    }
L_0009a0d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009a0d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a0d8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009a0dc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009a0e0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009a0e4:;
    {
        cpu->r[14] = 0x0009a0e8u; fn_000fd074(cpu);
    }
L_0009a0e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a0ec:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009a0f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0009a0f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a0f8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009a0fc:;
    {
        cpu->r[14] = 0x0009a100u; fn_000fd074(cpu);
    }
L_0009a100:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a104:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009a108:;
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
L_0009a10c:;
    {
        return fn_000fd070(cpu);
    }
L_0009a110:;
    {
        cpu->r[5] = 0x00000043u;
    }
L_0009a114:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a118:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a11c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a120:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a124:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a128:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a12c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a130:;
    {
        cpu->r[14] = 0x0009a134u; fn_000fd074(cpu);
    }
L_0009a134:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000050u, 1, 1);
    }
L_0009a138:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a118;
        }
    }
L_0009a13c:;
    {
        goto L_00099dec;
    }
L_0009a140:;
    {
        cpu->r[5] = 0x00000012u;
    }
L_0009a144:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a148:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a14c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a150:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a154:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a158:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a15c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a160:;
    {
        cpu->r[14] = 0x0009a164u; fn_000fd074(cpu);
    }
L_0009a164:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001du, 1, 1);
    }
L_0009a168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a148;
        }
    }
L_0009a16c:;
    {
        goto L_00099dec;
    }
L_0009a170:;
    {
        cpu->r[5] = 0x0000001du;
    }
L_0009a174:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a178:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a17c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a180:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a184:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a188:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a18c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a190:;
    {
        cpu->r[14] = 0x0009a194u; fn_000fd074(cpu);
    }
L_0009a194:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000002au, 1, 1);
    }
L_0009a198:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a178;
        }
    }
L_0009a19c:;
    {
        goto L_00099dec;
    }
L_0009a1a0:;
    {
        cpu->r[5] = 0x0000002au;
    }
L_0009a1a4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a1a8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a1ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a1b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a1b4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a1b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a1bc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a1c0:;
    {
        cpu->r[14] = 0x0009a1c4u; fn_000fd074(cpu);
    }
L_0009a1c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000037u, 1, 1);
    }
L_0009a1c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a1a8;
        }
    }
L_0009a1cc:;
    {
        goto L_00099dec;
    }
L_0009a1d0:;
    {
        cpu->r[5] = 0x00000037u;
    }
L_0009a1d4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a1d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a1dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a1e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a1e4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a1e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a1ec:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a1f0:;
    {
        cpu->r[14] = 0x0009a1f4u; fn_000fd074(cpu);
    }
L_0009a1f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000043u, 1, 1);
    }
L_0009a1f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a1d8;
        }
    }
L_0009a1fc:;
    {
        goto L_00099dec;
    }
L_0009a200:;
    {
        cpu->r[5] = 0x00000050u;
    }
L_0009a204:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a208:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a20c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a210:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009a214:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a218:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0009a21c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009a220:;
    {
        cpu->r[14] = 0x0009a224u; fn_000fd074(cpu);
    }
L_0009a224:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000005cu, 1, 1);
    }
L_0009a228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a208;
        }
    }
L_0009a22c:;
    {
        goto L_00099dec;
    }
L_0009a230:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009a234:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a238:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009a23c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0009a240:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_0009a244:;
    {
        cpu->r[12] = 0x00001bd0u;
    }
L_0009a248:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0009a24c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0009a250:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0009a254:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000099u, 0, 0);
    }
L_0009a258:;
    {
        cpu->r[14] = 0x0009a25cu; fn_000fd074(cpu);
    }
L_0009a25c:;
    {
        goto L_0009a07c;
    }
L_0009a260:;
    {
        cpu->r[8] = rd32(0x0009a268u + + 0x8u);
    }
L_0009a264:;
    {
        goto L_00099dec;
    }
}

/* _ZN4Game22GetTexturesCountToLoadEv @ 0009a274 (arm) */
void fn_0009a274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009a274:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009a278:;
    {
        cpu->r[5] = rd32(0x0009a280u + + 0x68u);
    }
L_0009a27c:;
    {
        cpu->r[6] = rd32(0x0009a284u + + 0x68u);
    }
L_0009a280:;
    {
        cpu->r[5] = add_flags(cpu, 0x0009a288u, cpu->r[5], 0, 0);
    }
L_0009a284:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009a288:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a28c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0009a290:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a294:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009a29c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0009a2a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009a2e0;
        }
    }
L_0009a2a4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009a2a8:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0009a2ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009a2b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a2b4:;
    {
        cpu->r[14] = 0x0009a2b8u; fn_00135bb0(cpu);
    }
L_0009a2b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009a2bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009a2c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009a2c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a2c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_0009a2cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0009a2d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a2d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a2d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0009a2dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009a2ac;
        }
    }
L_0009a2e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009a2e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009a2e8u)) return;
    }
}

/* _ZN4Game8LoadGameERiiS0_ih @ 0009a2f0 (arm) */
void fn_0009a2f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009a2f0:;
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
L_0009a2f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_0009a2f8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0009a2fc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0009a300:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x84u);
    }
L_0009a304:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_0009a308:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009a30c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0009a310:;
    {
        cpu->r[5] = rd32(0x0009a318u + + 0x974u);
    }
L_0009a314:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009a318:;
    {
        cpu->r[14] = 0x0009a31cu; fn_00096a08(cpu);
    }
L_0009a31c:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_0009a320:;
    {
        cpu->r[5] = add_flags(cpu, 0x0009a328u, cpu->r[5], 0, 0);
    }
L_0009a324:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009a328:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a32c:;
    {
        cpu->r[14] = 0x0009a330u; fn_00096a08(cpu);
    }
L_0009a330:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_0009a334:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0009a338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a33c:;
    {
        cpu->r[14] = 0x0009a340u; fn_00096a08(cpu);
    }
L_0009a340:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0009a344:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0009a348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a34c:;
    {
        cpu->r[14] = 0x0009a350u; fn_00096a08(cpu);
    }
L_0009a350:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0009a354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a358:;
    {
        cpu->r[14] = 0x0009a35cu; fn_000962d0(cpu);
    }
L_0009a35c:;
    {
        cpu->r[11] = rd32(cpu->r[6]);
    }
L_0009a360:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_0009a364:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009a368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a378;
        }
    }
L_0009a36c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009a370:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0009a374:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009a378u)) return;
    }
L_0009a378:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009a37c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009a388;
        }
    }
L_0009a380:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0009a384:;
    {
        goto L_0009a370;
    }
L_0009a388:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_0009a38c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009a380;
        }
    }
L_0009a390:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009a394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a4e4;
        }
    }
L_0009a398:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_0009a39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ac;
        }
    }
L_0009a3a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009a3bc;
        }
    }
L_0009a3a4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000010u, 1, 1);
    }
L_0009a3a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009a5ec;
        }
    }
L_0009a3ac:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000020u, 1, 1);
    }
L_0009a3b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a834;
        }
    }
L_0009a3b4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000021u, 1, 1);
    }
L_0009a3b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009aafc;
        }
    }
L_0009a3bc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000022u, 1, 1);
    }
L_0009a3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ac18;
        }
    }
L_0009a3c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[11], 0x00000023u, 1, 0);
    }
L_0009a3c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000013u, 1, 1);
    }
L_0009a3cc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009abfc;
        }
    }
L_0009a3d0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000037u, 1, 1);
    }
L_0009a3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009abd4;
        }
    }
L_0009a3d8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000038u, 1, 1);
    }
L_0009a3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ab90;
        }
    }
L_0009a3e0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000039u, 1, 1);
    }
L_0009a3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a9c0;
        }
    }
L_0009a3e8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009a3ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009a3f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a450;
        }
    }
L_0009a3f4:;
    {
        sub_flags(cpu, cpu->r[11], 0x0000003bu, 1, 1);
    }
L_0009a3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009aa14;
        }
    }
L_0009a3fc:;
    {
        cpu->r[1] = rd32(0x0009a404u + + 0x88cu);
    }
L_0009a400:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0009a404:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0009a408:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0009a40c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009a410:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a414:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a418:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000003bu, 0, 0);
    }
L_0009a41c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_0009a420:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009a7c4;
        }
    }
L_0009a424:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_0009a428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003cu, 0, 0);
    }
L_0009a42c:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0009a430:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0009a434:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0009a438:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009a43c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_0009a440:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009a450;
        }
    }
L_0009a444:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009a448:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0009a44c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009a924;
        }
    }
L_0009a450:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0009a454:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_0009a458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a36c;
        }
    }
L_0009a45c:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_0009a460:;
    {
        cpu->r[14] = 0x0009a464u; fn_0018ba64(cpu);
    }
L_0009a464:;
    {
        cpu->r[14] = 0x0009a468u; fn_0018ba68(cpu);
    }
L_0009a468:;
    {
        cpu->r[14] = 0x0009a46cu; fn_000979a0(cpu);
    }
L_0009a46c:;
    {
        cpu->r[14] = 0x0009a470u; fn_00094064(cpu);
    }
L_0009a470:;
    {
        cpu->r[14] = 0x0009a474u; fn_0018ba18(cpu);
    }
L_0009a474:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009a478:;
    {
        cpu->r[1] = 0x00001c60u;
    }
L_0009a47c:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_0009a480:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009a484:;
    {
        cpu->r[12] = 0x00001d6cu;
    }
L_0009a488:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0009a48c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000a100u, 0, 0);
    }
L_0009a490:;
    {
        cpu->r[14] = 0x00000028u;
    }
L_0009a494:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_0009a498:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_0009a49c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0009a4a0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009a4a4:;
    {
        cpu->r[14] = 0x0009a4a8u; fn_0012d190(cpu);
    }
L_0009a4a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009a4ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000a100u, 0, 0);
    }
L_0009a4b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_0009a4b4:;
    {
        cpu->r[14] = 0x0009a4b8u; fn_0012c2f8(cpu);
    }
L_0009a4b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009a4bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009a4c0:;
    {
        cpu->r[14] = 0x0009a4c4u; fn_000d1950(cpu);
    }
L_0009a4c4:;
    {
        cpu->r[3] = rd32(0x0009a4ccu + + 0x7c8u);
    }
L_0009a4c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a4cc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009a4d0:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0009a4d4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009a4d8:;
    {
        cpu->r[14] = 0x0009a4dcu; fn_00151c40(cpu);
    }
L_0009a4dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009a4e0:;
    {
        goto L_0009a370;
    }
L_0009a4e4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0009a4e8:;
    {
        cpu->r[14] = 0x0009a4ecu; fn_000924c8(cpu);
    }
L_0009a4ec:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009a4f0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0009a4f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a4f8:;
    {
        cpu->r[14] = 0x0009a4fcu; fn_000924cc(cpu);
    }
L_0009a4fc:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0009a500:;
    {
        wr8(cpu->r[4] + + 0x41eu, cpu->r[11]);
    }
L_0009a504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a508:;
    {
        wr8(cpu->r[4] + + 0x41cu, cpu->r[11]);
    }
L_0009a50c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009a510:;
    {
        wr8(cpu->r[4] + + 0x41du, cpu->r[11]);
    }
L_0009a514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a918;
        }
    }
L_0009a518:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_0009a51c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0009a524:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
        }
    }
L_0009a528:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0009a52c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0009a530:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0009a534:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x41du, cpu->r[3]);
        }
    }
L_0009a538:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x41cu, cpu->r[3]);
        }
    }
L_0009a53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a564;
        }
    }
L_0009a540:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0009a544:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0009a548:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x41eu, cpu->r[3]);
        }
    }
L_0009a54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a564;
        }
    }
L_0009a550:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0009a554:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0009a558:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x41cu, cpu->r[3]);
        }
    }
L_0009a55c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001be4u;
        }
    }
L_0009a560:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0009a564:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0009a568:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0009a56c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009a570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a58c;
        }
    }
L_0009a574:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009a578:;
    {
        cpu->r[14] = 0x0009a57cu; fn_000cbb24(cpu);
    }
L_0009a57c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009a580:;
    {
        cpu->r[14] = 0x0009a584u; fn_0018ba20(cpu);
    }
L_0009a584:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009a588:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_0009a58c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009a590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a594:;
    {
        cpu->r[14] = 0x0009a598u; fn_00099b14(cpu);
    }
L_0009a598:;
    {
        cpu->r[3] = rd32(0x0009a5a0u + + 0x6f8u);
    }
L_0009a59c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009a5a0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a5a4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0009a5a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009a5ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a5b0:;
    {
        cpu->r[14] = 0x0009a5b8u;
    }
L_0009a5b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x7cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009a5b8u)) return;
    }
L_0009a5b8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0009a5bc:;
    {
        cpu->r[3] = 0x000084f0u;
    }
L_0009a5c0:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_0009a5c4:;
    {
        cpu->r[14] = 0x0009a5c8u; fn_0018ba18(cpu);
    }
L_0009a5c8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0009a5cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0009a5d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0009a5d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a36c;
        }
    }
L_0009a5d8:;
    {
        cpu->r[3] = 0x00005fbcu;
    }
L_0009a5dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a5e0:;
    {
        cpu->r[14] = 0x0009a5e4u; fn_00096570(cpu);
    }
L_0009a5e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009a5e8:;
    {
        goto L_0009a370;
    }
L_0009a5ec:;
    {
        cpu->r[14] = 0x0009a5f0u; fn_00097ad0(cpu);
    }
L_0009a5f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009a5f4:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0009a5f8:;
    {
        cpu->r[4] = rd32(cpu->r[6]);
    }
L_0009a5fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000004du, 0, 0);
    }
L_0009a600:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_0009a604:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009a608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0009a60c:;
    {
        cpu->r[14] = 0x0009a610u; imp_memset(cpu); /* memset */
    }
L_0009a610:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009a614:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009a618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0009a61c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0009a620:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_0009a624:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0009a628:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0009a62c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0009a630:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009a634:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0009a638:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0009a63c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0009a640:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000036u, 0, 0);
    }
L_0009a644:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0009a648:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0009a64c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_0009a650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0009a654:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0009a658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_0009a65c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_0009a660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_0009a664:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0009a668:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0009a66c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_0009a670:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_0009a674:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009a678:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_0009a67c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009a680:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_0009a684:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[8]);
    }
L_0009a688:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000015u, 0, 0);
    }
L_0009a68c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_0009a690:;
    {
        cpu->r[1] = rd32(cpu->r[4] + - 0x3cu);
    }
L_0009a694:;
    {
        cpu->r[14] = 0x0009a698u; fn_0018aa58(cpu);
    }
L_0009a698:;
    {
        cpu->r[14] = 0x0009a69cu; fn_00097ad0(cpu);
    }
L_0009a69c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009a6a0:;
    {
        cpu->r[14] = 0x0009a6a4u; fn_0018b5c8(cpu);
    }
L_0009a6a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009a6a8:;
    {
        goto L_0009a370;
    }
L_0009a6ac:;
    {
        cpu->r[3] = 0x00001d6cu;
    }
L_0009a6b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[11]);
    }
L_0009a6b4:;
    {
        cpu->r[3] = rd32(0x0009a6bcu + + 0x5e0u);
    }
L_0009a6b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a6bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a6c0:;
    {
        cpu->r[14] = 0x0009a6c4u; fn_00132804(cpu);
    }
L_0009a6c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001c00u, 0, 0);
    }
L_0009a6c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009a6cc:;
    {
        cpu->r[14] = 0x0009a6d0u; fn_0012c280(cpu);
    }
L_0009a6d0:;
    {
        cpu->r[14] = 0x0009a6d4u; fn_00097ad0(cpu);
    }
L_0009a6d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009a6d8:;
    {
        cpu->r[14] = 0x0009a6dcu; fn_0018aa34(cpu);
    }
L_0009a6dc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009a6e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009a794;
        }
    }
L_0009a6e4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009a6e8:;
    {
        goto L_0009a6f8;
    }
L_0009a6ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0009a6f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0009a6f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a794;
        }
    }
L_0009a6f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000fu, 1, 1);
    }
L_0009a6fc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x0000003bu, 1, 1);
        }
    }
L_0009a700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a704:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0009a708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a70c:;
    {
        cpu->r[14] = 0x0009a710u; fn_00096a08(cpu);
    }
L_0009a710:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0009a714:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a718:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a71c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a720:;
    {
        cpu->r[14] = 0x0009a724u; fn_00096a08(cpu);
    }
L_0009a724:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009a728:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a734:;
    {
        cpu->r[14] = 0x0009a738u; fn_00096a08(cpu);
    }
L_0009a738:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0009a73c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a748:;
    {
        cpu->r[14] = 0x0009a74cu; fn_00096a08(cpu);
    }
L_0009a74c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0009a750:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a754:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a75c:;
    {
        cpu->r[14] = 0x0009a760u; fn_00096a08(cpu);
    }
L_0009a760:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0009a764:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a76c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a770:;
    {
        cpu->r[14] = 0x0009a774u; fn_00096a08(cpu);
    }
L_0009a774:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009a778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a6ec;
        }
    }
L_0009a77c:;
    {
        cpu->r[14] = 0x0009a780u; fn_00097ad0(cpu);
    }
L_0009a780:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a784:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009a788:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009a78c:;
    {
        cpu->r[14] = 0x0009a790u; fn_0018aa58(cpu);
    }
L_0009a790:;
    {
        goto L_0009a6ec;
    }
L_0009a794:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009a798:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009a79c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a36c;
        }
    }
L_0009a7a0:;
    {
        cpu->r[3] = rd32(0x0009a7a8u + + 0x4e8u);
    }
L_0009a7a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a7a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a7ac:;
    {
        cpu->r[14] = 0x0009a7b0u; fn_00136130(cpu);
    }
L_0009a7b0:;
    {
        cpu->r[14] = 0x0009a7b4u; fn_00097ad0(cpu);
    }
L_0009a7b4:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0009a7b8:;
    {
        cpu->r[14] = 0x0009a7bcu; fn_0018b5c8(cpu);
    }
L_0009a7bc:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0009a7c0:;
    {
        goto L_0009a370;
    }
L_0009a7c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0009a7c8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0009a7cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[13]);
        }
    }
L_0009a7d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a438;
        }
    }
L_0009a7d4:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009a7d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009a7dc:;
    {
        cpu->r[3] = rd32(0x0009a7e4u + + 0x4b4u);
    }
L_0009a7e0:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a7e4:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0009a7e8:;
    {
        cpu->r[14] = 0x0009a7ecu; fn_00096b5c(cpu);
    }
L_0009a7ec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0009a7f0:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_0009a7f4:;
    {
        cpu->r[11] = rd32(cpu->r[6]);
    }
L_0009a7f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009a7fc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x438u);
    }
L_0009a800:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009a804:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0009a808:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000003cu, 0, 0);
    }
L_0009a80c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0009a810:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_0009a814:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_0009a818:;
    {
        cpu->r[10] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0009a81c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009a820:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0009a824:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009a828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0009a82c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0009a830:;
    {
        goto L_0009a438;
    }
L_0009a834:;
    {
        cpu->r[14] = 0x0009a838u; fn_0018ba18(cpu);
    }
L_0009a838:;
    {
        cpu->r[3] = rd32(0x0009a840u + + 0x45cu);
    }
L_0009a83c:;
    {
        cpu->r[1] = 0x00007850u;
    }
L_0009a840:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a844:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009a848:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a84c:;
    {
        cpu->r[14] = 0x0009a850u; fn_00132cdc(cpu);
    }
L_0009a850:;
    {
        cpu->r[1] = 0x00007851u;
    }
L_0009a854:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a858:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a85c:;
    {
        cpu->r[14] = 0x0009a860u; fn_00132cdc(cpu);
    }
L_0009a860:;
    {
        cpu->r[1] = 0x00007852u;
    }
L_0009a864:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a868:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a86c:;
    {
        cpu->r[14] = 0x0009a870u; fn_00132cdc(cpu);
    }
L_0009a870:;
    {
        cpu->r[1] = 0x00007853u;
    }
L_0009a874:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a878:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a87c:;
    {
        cpu->r[14] = 0x0009a880u; fn_00132cdc(cpu);
    }
L_0009a880:;
    {
        cpu->r[1] = 0x00007854u;
    }
L_0009a884:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a888:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a88c:;
    {
        cpu->r[14] = 0x0009a890u; fn_00132cdc(cpu);
    }
L_0009a890:;
    {
        cpu->r[1] = 0x00007855u;
    }
L_0009a894:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a898:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a89c:;
    {
        cpu->r[14] = 0x0009a8a0u; fn_00132cdc(cpu);
    }
L_0009a8a0:;
    {
        cpu->r[1] = 0x00007856u;
    }
L_0009a8a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8a8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8ac:;
    {
        cpu->r[14] = 0x0009a8b0u; fn_00132cdc(cpu);
    }
L_0009a8b0:;
    {
        cpu->r[1] = 0x00007857u;
    }
L_0009a8b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8b8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8bc:;
    {
        cpu->r[14] = 0x0009a8c0u; fn_00132cdc(cpu);
    }
L_0009a8c0:;
    {
        cpu->r[1] = 0x00007858u;
    }
L_0009a8c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8c8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8cc:;
    {
        cpu->r[14] = 0x0009a8d0u; fn_00132cdc(cpu);
    }
L_0009a8d0:;
    {
        cpu->r[1] = 0x00007850u;
    }
L_0009a8d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8d8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8dc:;
    {
        cpu->r[14] = 0x0009a8e0u; fn_00132cdc(cpu);
    }
L_0009a8e0:;
    {
        cpu->r[1] = 0x0000ffffu;
    }
L_0009a8e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8e8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8ec:;
    {
        cpu->r[14] = 0x0009a8f0u; fn_00132cdc(cpu);
    }
L_0009a8f0:;
    {
        cpu->r[1] = 0x0000ffffu;
    }
L_0009a8f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a8f8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a8fc:;
    {
        cpu->r[14] = 0x0009a900u; fn_00132cdc(cpu);
    }
L_0009a900:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009a904:;
    {
        cpu->r[1] = 0x0000ffffu;
    }
L_0009a908:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009a90c:;
    {
        cpu->r[14] = 0x0009a910u; fn_00132cdc(cpu);
    }
L_0009a910:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009a914:;
    {
        goto L_0009a370;
    }
L_0009a918:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009a91c:;
    {
        cpu->r[14] = 0x0009a920u; fn_00096220(cpu);
    }
L_0009a920:;
    {
        goto L_0009a518;
    }
L_0009a924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009a928:;
    {
        cpu->r[11] = (~cpu->r[2]);
    }
L_0009a92c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0009a930:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009a934:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0009a938:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a93c:;
    {
        cpu->r[14] = 0x0009a940u; fn_00135c34(cpu);
    }
L_0009a940:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_0009a944:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009a948:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_0009a94c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0009a950:;
    {
        goto L_0009a95c;
    }
L_0009a954:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009a958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a994;
        }
    }
L_0009a95c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[4], 0, 0);
    }
L_0009a960:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0009a964:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009a968:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0009a96c:;
    {
        cpu->r[14] = 0x0009a970u; fn_00135bb0(cpu);
    }
L_0009a970:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009a974:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009a978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a9dc;
        }
    }
L_0009a97c:;
    {
        cpu->r[4] = rd32(cpu->r[6]);
    }
L_0009a980:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009a984:;
    {
        wr32(cpu->r[6], cpu->r[4]);
    }
L_0009a988:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009a98c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0009a990:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a954;
        }
    }
L_0009a994:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009a998:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_0009a99c:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_0009a9a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0009a9a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009a9a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009a9ac:;
    {
        cpu->r[14] = 0x0009a9b0u; fn_00135c34(cpu);
    }
L_0009a9b0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009a9b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0009a9b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a36c;
        }
    }
L_0009a9bc:;
    {
        goto L_0009a45c;
    }
L_0009a9c0:;
    {
        cpu->r[14] = 0x0009a9c4u; fn_0018ba18(cpu);
    }
L_0009a9c4:;
    {
        cpu->r[14] = 0x0009a9c8u; fn_0018ba18(cpu);
    }
L_0009a9c8:;
    {
        cpu->r[14] = 0x0009a9ccu; fn_0018ba18(cpu);
    }
L_0009a9cc:;
    {
        cpu->r[14] = 0x0009a9d0u; fn_0018ba64(cpu);
    }
L_0009a9d0:;
    {
        cpu->r[14] = 0x0009a9d4u; fn_0018ba68(cpu);
    }
L_0009a9d4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009a9d8:;
    {
        goto L_0009a370;
    }
L_0009a9dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009a9e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009a9e4:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0009a9e8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0009a9ec:;
    {
        cpu->r[14] = 0x0009a9f0u; fn_00136284(cpu);
    }
L_0009a9f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009a9f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0009a9f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009ab60;
        }
    }
L_0009a9fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009aa00:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0009aa04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009aa08:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_0009aa0c:;
    {
        cpu->r[4] = rd32(cpu->r[6]);
    }
L_0009aa10:;
    {
        goto L_0009a988;
    }
L_0009aa14:;
    {
        cpu->r[0] = rd32(0x0009aa1cu + + 0x274u);
    }
L_0009aa18:;
    {
        cpu->r[1] = 0x000078d2u;
    }
L_0009aa1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0009aa24:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa28:;
    {
        cpu->r[14] = 0x0009aa2cu; fn_00135d9c(cpu);
    }
L_0009aa2c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa30:;
    {
        cpu->r[1] = 0x000078d3u;
    }
L_0009aa34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa38:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aa3c:;
    {
        cpu->r[14] = 0x0009aa40u; fn_00135d9c(cpu);
    }
L_0009aa40:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa44:;
    {
        cpu->r[1] = 0x000078d4u;
    }
L_0009aa48:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa4c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aa50:;
    {
        cpu->r[14] = 0x0009aa54u; fn_00135d9c(cpu);
    }
L_0009aa54:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa58:;
    {
        cpu->r[1] = 0x000078d5u;
    }
L_0009aa5c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa60:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aa64:;
    {
        cpu->r[14] = 0x0009aa68u; fn_00135d9c(cpu);
    }
L_0009aa68:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa6c:;
    {
        cpu->r[1] = 0x000078cbu;
    }
L_0009aa70:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa74:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aa78:;
    {
        cpu->r[14] = 0x0009aa7cu; fn_00135d9c(cpu);
    }
L_0009aa7c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa80:;
    {
        cpu->r[1] = 0x000078cau;
    }
L_0009aa84:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa88:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aa8c:;
    {
        cpu->r[14] = 0x0009aa90u; fn_00135d9c(cpu);
    }
L_0009aa90:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aa94:;
    {
        cpu->r[1] = 0x000078c9u;
    }
L_0009aa98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aa9c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aaa0:;
    {
        cpu->r[14] = 0x0009aaa4u; fn_00135d9c(cpu);
    }
L_0009aaa4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aaa8:;
    {
        cpu->r[1] = 0x00005147u;
    }
L_0009aaac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aab0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aab4:;
    {
        cpu->r[14] = 0x0009aab8u; fn_00135d9c(cpu);
    }
L_0009aab8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aabc:;
    {
        cpu->r[1] = 0x00005146u;
    }
L_0009aac0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aac4:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aac8:;
    {
        cpu->r[14] = 0x0009aaccu; fn_00135d9c(cpu);
    }
L_0009aacc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aad0:;
    {
        cpu->r[1] = 0x00005145u;
    }
L_0009aad4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aad8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aadc:;
    {
        cpu->r[14] = 0x0009aae0u; fn_00135d9c(cpu);
    }
L_0009aae0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aae4:;
    {
        cpu->r[1] = 0x0000514bu;
    }
L_0009aae8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009aaec:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009aaf0:;
    {
        cpu->r[14] = 0x0009aaf4u; fn_00135d9c(cpu);
    }
L_0009aaf4:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_0009aaf8:;
    {
        goto L_0009a370;
    }
L_0009aafc:;
    {
        cpu->r[14] = 0x0009ab00u; fn_0018ba64(cpu);
    }
L_0009ab00:;
    {
        cpu->r[14] = 0x0009ab04u; fn_0018ba68(cpu);
    }
L_0009ab04:;
    {
        cpu->r[14] = 0x0009ab08u; fn_0018ba18(cpu);
    }
L_0009ab08:;
    {
        cpu->r[0] = 0x0000a63cu;
    }
L_0009ab0c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_0009ab10:;
    {
        cpu->r[14] = 0x0009ab14u; fn_0018ba6c(cpu);
    }
L_0009ab14:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009ab18:;
    {
        cpu->r[14] = 0x0009ab1cu; fn_000d019c(cpu);
    }
L_0009ab1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009ab20:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009ab24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x000000cbu);
        }
    }
L_0009ab28:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_0009ab2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009a370;
        }
    }
L_0009ab30:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009ab34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ab38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ab68;
        }
    }
L_0009ab3c:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009ab40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ab44:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0009ab48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ab4c:;
    {
        cpu->r[14] = 0x0009ab50u; fn_000e0668(cpu);
    }
L_0009ab50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ab54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d0u);
        }
    }
L_0009ab58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009a36c;
        }
    }
L_0009ab5c:;
    {
        goto L_0009a370;
    }
L_0009ab60:;
    {
        cpu->r[0] = (~0x000000c8u);
    }
L_0009ab64:;
    {
        goto L_0009a370;
    }
L_0009ab68:;
    {
        cpu->r[3] = rd32(0x0009ab70u + + 0x128u);
    }
L_0009ab6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009ab70:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009ab74:;
    {
        cpu->r[14] = 0x0009ab78u; fn_00096b88(cpu);
    }
L_0009ab78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ab7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ab3c;
        }
    }
L_0009ab80:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009ab84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ab88:;
    {
        cpu->r[14] = 0x0009ab8cu; fn_000c4674(cpu);
    }
L_0009ab8c:;
    {
        goto L_0009ab3c;
    }
L_0009ab90:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009ab94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ab98:;
    {
        cpu->r[14] = 0x0009ab9cu; fn_000df9ec(cpu);
    }
L_0009ab9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009aba0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d5u);
        }
    }
L_0009aba4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009a370;
        }
    }
L_0009aba8:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_0009abac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009abb0:;
    {
        cpu->r[14] = 0x0009abb4u; fn_00188180(cpu);
    }
L_0009abb4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009abb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009abbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009abc8;
        }
    }
L_0009abc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009abc4:;
    {
        cpu->r[14] = 0x0009abc8u; fn_00099c84(cpu);
    }
L_0009abc8:;
    {
        cpu->r[14] = 0x0009abccu; fn_00158e28(cpu);
    }
L_0009abcc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009abd0:;
    {
        goto L_0009a370;
    }
L_0009abd4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009abd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009abdc:;
    {
        cpu->r[14] = 0x0009abe0u; fn_000e506c(cpu);
    }
L_0009abe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009abe4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d4u);
        }
    }
L_0009abe8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009a370;
        }
    }
L_0009abec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009abf0:;
    {
        cpu->r[14] = 0x0009abf4u; fn_000996e4(cpu);
    }
L_0009abf4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009abf8:;
    {
        goto L_0009a370;
    }
L_0009abfc:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009ac00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ac04:;
    {
        cpu->r[14] = 0x0009ac08u; fn_000c97c8(cpu);
    }
L_0009ac08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ac0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x000000d2u);
        }
    }
L_0009ac10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009a370;
        }
    }
L_0009ac14:;
    {
        goto L_0009a36c;
    }
L_0009ac18:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009ac1c:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_0009ac20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ac24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009ac28:;
    {
        cpu->r[14] = 0x0009ac2cu; fn_000ced0c(cpu);
    }
L_0009ac2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ac30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d1u);
        }
    }
L_0009ac34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009a370;
        }
    }
L_0009ac38:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0009ac3c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009ac40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ac68;
        }
    }
L_0009ac44:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0009ac48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ac4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0009ac50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ac54:;
    {
        cpu->r[14] = 0x0009ac58u; fn_000c913c(cpu);
    }
L_0009ac58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ac5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d3u);
        }
    }
L_0009ac60:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009a36c;
        }
    }
L_0009ac64:;
    {
        goto L_0009a370;
    }
L_0009ac68:;
    {
        cpu->r[3] = rd32(0x0009ac70u + + 0x28u);
    }
L_0009ac6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009ac70:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009ac74:;
    {
        cpu->r[14] = 0x0009ac78u; fn_00096b88(cpu);
    }
L_0009ac78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ac7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ac44;
        }
    }
L_0009ac80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009ac84:;
    {
        cpu->r[14] = 0x0009ac88u; fn_000c4398(cpu);
    }
L_0009ac88:;
    {
        goto L_0009ac44;
    }
}

/* _ZN4Game17Clean3DTuningBtnsEv @ 0009aca0 (arm) */
void fn_0009aca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009aca0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009aca4:;
    {
        cpu->r[6] = 0x00001c44u;
    }
L_0009aca8:;
    {
        cpu->r[4] = rd32(0x0009acb0u + + 0x6cu);
    }
L_0009acac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009acb0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0009acb4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009acbcu, cpu->r[4], 0, 0);
    }
L_0009acb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009acbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009acc0u)) return;
        }
    }
L_0009acc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009acc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009acc8:;
    {
        cpu->r[14] = 0x0009acd0u;
    }
L_0009accc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009acd0u)) return;
    }
L_0009acd0:;
    {
        cpu->r[3] = rd32(0x0009acd8u + + 0x48u);
    }
L_0009acd4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009acd8:;
    {
        cpu->r[1] = 0x0000564au;
    }
L_0009acdc:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[5]);
    }
L_0009ace0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009ace4:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ace8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009acec:;
    {
        cpu->r[14] = 0x0009acf0u; fn_00135de0(cpu);
    }
L_0009acf0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009acf4:;
    {
        cpu->r[1] = 0x0000565eu;
    }
L_0009acf8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009acfc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009ad00:;
    {
        cpu->r[14] = 0x0009ad04u; fn_00135de0(cpu);
    }
L_0009ad04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009ad08:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009ad0c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0009ad10:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009ad14:;
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
L_0009ad18:;
    {
        return fn_001367cc(cpu);
    }
}

/* _ZN4Game14CleanLoadedCarEv @ 0009ad24 (arm) */
void fn_0009ad24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009ad24:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009ad28:;
    {
        cpu->r[7] = 0x00001c38u;
    }
L_0009ad2c:;
    {
        cpu->r[4] = rd32(0x0009ad34u + + 0x134u);
    }
L_0009ad30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009ad34:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0009ad38:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009ad40u, cpu->r[4], 0, 0);
    }
L_0009ad3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ad40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009adbc;
        }
    }
L_0009ad44:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009ad48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009ad4c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xd08u);
    }
L_0009ad50:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0xb58u);
    }
L_0009ad54:;
    {
        cpu->r[14] = 0x0009ad5cu;
    }
L_0009ad58:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009ad5cu)) return;
    }
L_0009ad5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009ad60:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_0009ad64:;
    {
        cpu->r[3] = rd32(0x0009ad6cu + + 0x100u);
    }
L_0009ad68:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ad6c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_0009ad70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ad74:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009ad78:;
    {
        cpu->r[14] = 0x0009ad7cu; fn_00132a24(cpu);
    }
L_0009ad7c:;
    {
        cpu->r[3] = rd32(0x0009ad84u + + 0xecu);
    }
L_0009ad80:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_0009ad84:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ad88:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ad8c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0009ad90:;
    {
        cpu->r[14] = 0x0009ad94u; fn_00135de0(cpu);
    }
L_0009ad94:;
    {
        cpu->r[1] = 0x000059d7u;
    }
L_0009ad98:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ad9c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009ada0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0009ada4:;
    {
        cpu->r[14] = 0x0009ada8u; fn_00135de0(cpu);
    }
L_0009ada8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0009adac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009adb0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0009adb4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0009adb8:;
    {
        cpu->r[14] = 0x0009adbcu; fn_001367cc(cpu);
    }
L_0009adbc:;
    {
        cpu->r[6] = 0x00001c3cu;
    }
L_0009adc0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009adc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009adc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ade4;
        }
    }
L_0009adcc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009add0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009add4:;
    {
        cpu->r[14] = 0x0009addcu;
    }
L_0009add8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009addcu)) return;
    }
L_0009addc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009ade0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_0009ade4:;
    {
        cpu->r[7] = 0x00001c40u;
    }
L_0009ade8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009adec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009adf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009adf4u)) return;
        }
    }
L_0009adf4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009adf8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009adfc:;
    {
        cpu->r[14] = 0x0009ae04u;
    }
L_0009ae00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009ae04u)) return;
    }
L_0009ae04:;
    {
        cpu->r[3] = rd32(0x0009ae0cu + + 0x60u);
    }
L_0009ae08:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009ae0c:;
    {
        cpu->r[1] = 0x0000012cu;
    }
L_0009ae10:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[6]);
    }
L_0009ae14:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ae18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ae1c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009ae20:;
    {
        cpu->r[14] = 0x0009ae24u; fn_00132a24(cpu);
    }
L_0009ae24:;
    {
        cpu->r[3] = rd32(0x0009ae2cu + + 0x44u);
    }
L_0009ae28:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ae2c:;
    {
        cpu->r[1] = 0x000055f0u;
    }
L_0009ae30:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ae34:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009ae38:;
    {
        cpu->r[14] = 0x0009ae3cu; fn_00135de0(cpu);
    }
L_0009ae3c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ae40:;
    {
        cpu->r[1] = 0x000059d8u;
    }
L_0009ae44:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009ae48:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009ae4c:;
    {
        cpu->r[14] = 0x0009ae50u; fn_00135de0(cpu);
    }
L_0009ae50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009ae54:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009ae58:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0009ae5c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009ae60:;
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
L_0009ae64:;
    {
        return fn_001367cc(cpu);
    }
}

/* _ZN4Game16Load3DTuningBtnsEv @ 0009ae74 (arm) */
void fn_0009ae74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009ae74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009ae78:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009ae7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009ae80:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_0009ae84:;
    {
        cpu->r[14] = 0x0009ae88u; fn_0018ba6c(cpu);
    }
L_0009ae88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009ae8c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009ae90:;
    {
        cpu->r[4] = rd32(0x0009ae98u + + 0x7cu);
    }
L_0009ae94:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009ae9cu, cpu->r[4], 0, 0);
    }
L_0009ae98:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009ae9c:;
    {
        cpu->r[14] = 0x0009aea0u; fn_000ea704(cpu);
    }
L_0009aea0:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_0009aea4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009aea8:;
    {
        cpu->r[1] = 0x00000258u;
    }
L_0009aeac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009aeb0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_0009aeb4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0009aeb8:;
    {
        cpu->r[14] = 0x0009aec0u;
    }
L_0009aebc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009aec0u)) return;
    }
L_0009aec0:;
    {
        cpu->r[3] = rd32(0x0009aec8u + + 0x50u);
    }
L_0009aec4:;
    {
        cpu->r[1] = 0x0000564au;
    }
L_0009aec8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009aecc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009aed0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aed4:;
    {
        cpu->r[14] = 0x0009aed8u; fn_00135de0(cpu);
    }
L_0009aed8:;
    {
        cpu->r[1] = 0x0000565eu;
    }
L_0009aedc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009aee0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009aee4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009aee8:;
    {
        cpu->r[14] = 0x0009aeecu; fn_00135de0(cpu);
    }
L_0009aeec:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0009aef0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009aef4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009aef8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009aefc:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009af00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009af04:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0009af08:;
    {
        cpu->r[14] = 0x0009af0cu; fn_00136660(cpu);
    }
L_0009af0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009af10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009af14u)) return;
    }
}

/* _ZN4Game10LoadGarageEv @ 0009af1c (arm) */
void fn_0009af1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009af1c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009af20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009af24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009af28:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_0009af2c:;
    {
        cpu->r[14] = 0x0009af30u; fn_0018ba6c(cpu);
    }
L_0009af30:;
    {
        cpu->r[5] = 0x00001c40u;
    }
L_0009af34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009af38:;
    {
        cpu->r[7] = rd32(0x0009af40u + + 0x9cu);
    }
L_0009af3c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009af40:;
    {
        cpu->r[7] = add_flags(cpu, 0x0009af48u, cpu->r[7], 0, 0);
    }
L_0009af44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009af48:;
    {
        cpu->r[14] = 0x0009af4cu; fn_000ea704(cpu);
    }
L_0009af4c:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[4]);
    }
L_0009af50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009af54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0009af58:;
    {
        cpu->r[1] = 0x0000012cu;
    }
L_0009af5c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009af60:;
    {
        cpu->r[14] = 0x0009af68u;
    }
L_0009af64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009af68u)) return;
    }
L_0009af68:;
    {
        cpu->r[3] = rd32(0x0009af70u + + 0x70u);
    }
L_0009af6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009af70:;
    {
        cpu->r[1] = 0x000055f0u;
    }
L_0009af74:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0009af78:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0009af7c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0009af80:;
    {
        cpu->r[14] = 0x0009af84u; fn_00135de0(cpu);
    }
L_0009af84:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009af88:;
    {
        cpu->r[1] = 0x000059d8u;
    }
L_0009af8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009af90:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0009af94:;
    {
        cpu->r[14] = 0x0009af98u; fn_00135de0(cpu);
    }
L_0009af98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009af9c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009afa0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0009afa4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0009afa8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009afac:;
    {
        cpu->r[14] = 0x0009afb0u; fn_00136660(cpu);
    }
L_0009afb0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0009afb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009afb8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009afbc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0009afc0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_0009afc4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0009afc8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0009afcc:;
    {
        cpu->r[14] = 0x0009afd4u;
    }
L_0009afd0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009afd4u)) return;
    }
L_0009afd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009afd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009afdcu)) return;
    }
}

/* _ZN4Game17AutoloadNextTrackEv @ 0009afe4 (arm) */
void fn_0009afe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009afe4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009afe8:;
    {
        cpu->r[6] = rd32(0x0009aff0u + + 0x110u);
    }
L_0009afec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009aff0:;
    {
        cpu->r[14] = 0x0009aff4u; fn_000995cc(cpu);
    }
L_0009aff4:;
    {
        cpu->r[3] = rd32(0x0009affcu + + 0x108u);
    }
L_0009aff8:;
    {
        cpu->r[6] = add_flags(cpu, 0x0009b000u, cpu->r[6], 0, 0);
    }
L_0009affc:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_0009b000:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b004:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b008:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009b00c:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_0009b010:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0009b014:;
    {
        cpu->r[14] = 0x0009b018u; fn_000c0d80(cpu);
    }
L_0009b018:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_0009b01c:;
    {
        cpu->r[14] = 0x0009b020u; fn_0018cbe8(cpu);
    }
L_0009b020:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b024:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b028:;
    {
        cpu->r[14] = 0x0009b02cu; fn_00099b14(cpu);
    }
L_0009b02c:;
    {
        cpu->r[14] = 0x0009b030u; fn_0018ba64(cpu);
    }
L_0009b030:;
    {
        cpu->r[14] = 0x0009b034u; fn_0018ba68(cpu);
    }
L_0009b034:;
    {
        cpu->r[14] = 0x0009b038u; fn_0018ba18(cpu);
    }
L_0009b038:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b03c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0009b040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b05c;
        }
    }
L_0009b044:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009b048:;
    {
        cpu->r[14] = 0x0009b04cu; fn_000cbb24(cpu);
    }
L_0009b04c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009b050:;
    {
        cpu->r[14] = 0x0009b054u; fn_0018ba20(cpu);
    }
L_0009b054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009b058:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_0009b05c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001c00u, 0, 0);
    }
L_0009b060:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009b064:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009b068:;
    {
        cpu->r[14] = 0x0009b06cu; fn_0012c280(cpu);
    }
L_0009b06c:;
    {
        cpu->r[3] = rd32(0x0009b074u + + 0x94u);
    }
L_0009b070:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b074:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009b078:;
    {
        cpu->r[14] = 0x0009b07cu; fn_00132804(cpu);
    }
L_0009b07c:;
    {
        cpu->r[3] = rd32(0x0009b084u + + 0x88u);
    }
L_0009b080:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009b084:;
    {
        cpu->r[1] = 0x000003e8u;
    }
L_0009b088:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b08c:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_0009b090:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0009b094:;
    {
        cpu->r[3] = 0x000082f4u;
    }
L_0009b098:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0009b09c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0009b0a0:;
    {
        cpu->r[14] = 0x0009b0a4u; fn_00135c90(cpu);
    }
L_0009b0a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009b0a8:;
    {
        cpu->r[1] = 0x00007531u;
    }
L_0009b0ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009b0b0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0009b0b4:;
    {
        cpu->r[14] = 0x0009b0b8u; fn_00135c90(cpu);
    }
L_0009b0b8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009b0bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b0c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0009b0c4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0009b0c8:;
    {
        cpu->r[14] = 0x0009b0ccu; fn_001367cc(cpu);
    }
L_0009b0cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b0d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b0d4:;
    {
        cpu->r[14] = 0x0009b0d8u; fn_000f35e4(cpu);
    }
L_0009b0d8:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_0009b0dc:;
    {
        cpu->r[14] = 0x0009b0e0u; fn_0018ba6c(cpu);
    }
L_0009b0e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009b0e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b0e8:;
    {
        cpu->r[14] = 0x0009b0ecu; fn_000f22d4(cpu);
    }
L_0009b0ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b0f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009b0f4:;
    {
        cpu->r[14] = 0x0009b0f8u; fn_000f361c(cpu);
    }
L_0009b0f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009b0fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b100u)) return;
    }
}

/* _ZN4Game10ReloadGameEv @ 0009b110 (arm) */
void fn_0009b110(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b110:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009b114:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b118:;
    {
        cpu->r[14] = 0x0009b11cu; fn_000996e4(cpu);
    }
L_0009b11c:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_0009b120:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_0009b124:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b128:;
    {
        cpu->r[14] = 0x0009b12cu; fn_00188180(cpu);
    }
L_0009b12c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b130:;
    {
        cpu->r[14] = 0x0009b134u; fn_000cf0d0(cpu);
    }
L_0009b134:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b138:;
    {
        cpu->r[14] = 0x0009b13cu; fn_000e506c(cpu);
    }
L_0009b13c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b140:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d4u);
        }
    }
L_0009b144:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0009b148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b14cu)) return;
    }
}

/* _ZN4Game14quitToMainMenuEbbb @ 0009b14c (arm) */
void fn_0009b14c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b14c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009b150:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0009b154:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0009b158:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0009b15c:;
    {
        cpu->r[7] = rd32(0x0009b164u + + 0x1b0u);
    }
L_0009b160:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b164:;
    {
        cpu->r[14] = 0x0009b168u; fn_000995cc(cpu);
    }
L_0009b168:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0009b16c:;
    {
        cpu->r[7] = add_flags(cpu, 0x0009b174u, cpu->r[7], 0, 0);
    }
L_0009b170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b2e8;
        }
    }
L_0009b174:;
    {
        cpu->r[5] = rd32(0x0009b17cu + + 0x19cu);
    }
L_0009b178:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009b17c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b180:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0009b184:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009b188:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_0009b18c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0009b190:;
    {
        cpu->r[14] = 0x0009b194u; fn_000c0d80(cpu);
    }
L_0009b194:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0009b198:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b2dc;
        }
    }
L_0009b19c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0009b1a0:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_0009b1a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b1a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b1d8;
        }
    }
L_0009b1ac:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0009b1b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b1b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b1b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b1d8;
        }
    }
L_0009b1bc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x317u);
    }
L_0009b1c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009b1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b2f4;
        }
    }
L_0009b1c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b1cc:;
    {
        cpu->r[14] = 0x0009b1d0u; fn_000968d4(cpu);
    }
L_0009b1d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b1d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b304;
        }
    }
L_0009b1d8:;
    {
        cpu->r[14] = 0x0009b1dcu; fn_0018ba64(cpu);
    }
L_0009b1dc:;
    {
        cpu->r[14] = 0x0009b1e0u; fn_0018ba68(cpu);
    }
L_0009b1e0:;
    {
        cpu->r[14] = 0x0009b1e4u; fn_0018ba18(cpu);
    }
L_0009b1e4:;
    {
        cpu->r[2] = 0x00008304u;
    }
L_0009b1e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009b1ec:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0009b1f0:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_0009b1f4:;
    {
        cpu->r[2] = 0x000082f4u;
    }
L_0009b1f8:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_0009b1fc:;
    {
        cpu->r[2] = 0x000082fcu;
    }
L_0009b200:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_0009b204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b288;
        }
    }
L_0009b208:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b20c:;
    {
        cpu->r[14] = 0x0009b210u; fn_0009b110(cpu);
    }
L_0009b210:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b214:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b218:;
    {
        cpu->r[14] = 0x0009b21cu; fn_000f35e4(cpu);
    }
L_0009b21c:;
    {
        cpu->r[0] = 0x000001b8u;
    }
L_0009b220:;
    {
        cpu->r[14] = 0x0009b224u; fn_0018ba6c(cpu);
    }
L_0009b224:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b228:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b22c:;
    {
        cpu->r[14] = 0x0009b230u; fn_000eb2ac(cpu);
    }
L_0009b230:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b234:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009b238:;
    {
        cpu->r[14] = 0x0009b23cu; fn_000f361c(cpu);
    }
L_0009b23c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0009b240:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_0009b244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b274;
        }
    }
L_0009b24c:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_0009b250:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_0009b254:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b2b8;
        }
    }
L_0009b25c:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_0009b260:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b264:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b268:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_0009b26c:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_0009b270:;
    {
        cpu->r[14] = 0x0009b274u; fn_00096928(cpu);
    }
L_0009b274:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_0009b278:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009b27c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009b280:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_0009b284:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b288u)) return;
    }
L_0009b288:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b28c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b290:;
    {
        cpu->r[14] = 0x0009b294u; fn_000f35e4(cpu);
    }
L_0009b294:;
    {
        cpu->r[0] = 0x000000a4u;
    }
L_0009b298:;
    {
        cpu->r[14] = 0x0009b29cu; fn_0018ba6c(cpu);
    }
L_0009b29c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009b2a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b2a4:;
    {
        cpu->r[14] = 0x0009b2a8u; fn_000f0d9c(cpu);
    }
L_0009b2a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b2ac:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0009b2b0:;
    {
        cpu->r[14] = 0x0009b2b4u; fn_000f361c(cpu);
    }
L_0009b2b4:;
    {
        goto L_0009b23c;
    }
L_0009b2b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_0009b2bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0009b2c0:;
    {
        cpu->r[3] = 0x00005f98u;
    }
L_0009b2c4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0009b2c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b2cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000675du;
        }
    }
L_0009b2d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0009b2d4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
        }
    }
L_0009b2d8:;
    {
        goto L_0009b25c;
    }
L_0009b2dc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x490u);
    }
L_0009b2e0:;
    {
        cpu->r[14] = 0x0009b2e4u; fn_0018cbe8(cpu);
    }
L_0009b2e4:;
    {
        goto L_0009b19c;
    }
L_0009b2e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b2ec:;
    {
        cpu->r[14] = 0x0009b2f0u; fn_000995f4(cpu);
    }
L_0009b2f0:;
    {
        goto L_0009b174;
    }
L_0009b2f4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009b2f8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b2fc:;
    {
        cpu->r[14] = 0x0009b300u; fn_000bd190(cpu);
    }
L_0009b300:;
    {
        goto L_0009b1d8;
    }
L_0009b304:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009b308:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b30c:;
    {
        cpu->r[14] = 0x0009b310u; fn_000ba460(cpu);
    }
L_0009b310:;
    {
        goto L_0009b1d8;
    }
}

/* _ZN4Game19ApplyOrientationRotER7CMatrixb @ 0009b31c (arm) */
void fn_0009b31c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b31c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009b320:;
    {
        cpu->r[4] = rd32(0x0009b328u + + 0x80u);
    }
L_0009b324:;
    {
        cpu->r[3] = rd32(0x0009b32cu + + 0x80u);
    }
L_0009b328:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0009b32c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009b334u, cpu->r[4], 0, 0);
    }
L_0009b330:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0009b334:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b338:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0009b33c:;
    {
        cpu->r[14] = 0x0009b340u; fn_000960ec(cpu);
    }
L_0009b340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0009b344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b358;
        }
    }
L_0009b348:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0009b34c:;
    {
        cpu->r[14] = 0x0009b350u; fn_000960ec(cpu);
    }
L_0009b350:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0009b354:;
    {
        if (cond_test(cpu, 2)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b358u)) return;
        }
    }
L_0009b358:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0009b35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b394;
        }
    }
L_0009b360:;
    {
        cpu->r[2] = rd32(0x0009b368u + + 0x48u);
    }
L_0009b364:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009b368:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009b36c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009b370:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_0009b374:;
    {
        cpu->r[2] = rd32(0x0009b37cu + + 0x38u);
    }
L_0009b378:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0009b37c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009b380:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0009b384:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009b388:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0009b38c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0009b390:;
    {
        cpu->r[14] = 0x0009b394u; fn_00153e90(cpu);
    }
L_0009b394:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0009b398:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009b39c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4049u << 16);
    }
L_0009b3a0:;
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
L_0009b3a4:;
    {
        return fn_00154350(cpu);
    }
}

/* _ZN4Game9StartGameEv @ 0009b3b8 (arm) */
void fn_0009b3b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b3b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009b3bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b3c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009b3c4:;
    {
        cpu->r[6] = rd32(0x0009b3ccu + + 0x7cu);
    }
L_0009b3c8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009b3cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0009b3d0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0009b3d4:;
    {
        cpu->r[6] = add_flags(cpu, 0x0009b3dcu, cpu->r[6], 0, 0);
    }
L_0009b3d8:;
    {
        cpu->r[14] = 0x0009b3dcu; imp_glClearColor(cpu); /* glClearColor */
    }
L_0009b3dc:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_0009b3e0:;
    {
        cpu->r[14] = 0x0009b3e4u; imp_glClear(cpu); /* glClear */
    }
L_0009b3e4:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_0009b3e8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0009b3ec:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_0009b3f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0009b3f4:;
    {
        cpu->r[14] = 0x0009b3f8u; fn_0018ba6c(cpu);
    }
L_0009b3f8:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_0009b3fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009b400:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b404:;
    {
        cpu->r[14] = 0x0009b408u; imp_memset(cpu); /* memset */
    }
L_0009b408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b40c:;
    {
        cpu->r[14] = 0x0009b410u; fn_000eaca4(cpu);
    }
L_0009b410:;
    {
        cpu->r[2] = rd32(0x0009b418u + + 0x34u);
    }
L_0009b414:;
    {
        cpu->r[3] = rd32(0x0009b41cu + + 0x34u);
    }
L_0009b418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b41c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0009b420:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009b424:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0009b428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0009b42c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0009b430:;
    {
        cpu->r[14] = 0x0009b434u; fn_000eac74(cpu);
    }
L_0009b434:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0009b438:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009b43c:;
    {
        cpu->r[14] = 0x0009b440u; fn_000f361c(cpu);
    }
L_0009b440:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009b444:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b448u)) return;
    }
}

/* imp_opj_realloc @ 0009b454 (arm) */
void fn_0009b454(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b454:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009b458:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b45c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0009b460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b4b0;
        }
    }
L_0009b464:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009b468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b4a0;
        }
    }
L_0009b46c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0009b470:;
    {
        cpu->r[14] = 0x0009b474u; fn_00097ddc(cpu);
    }
L_0009b474:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b498;
        }
    }
L_0009b47c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_0009b480:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009b484:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0009b488:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_0009b48c:;
    {
        cpu->r[14] = 0x0009b490u; imp_memcpy(cpu); /* memcpy */
    }
L_0009b490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b494:;
    {
        cpu->r[14] = 0x0009b498u; fn_00097fd4(cpu);
    }
L_0009b498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009b49c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b4a0u)) return;
    }
L_0009b4a0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0009b4a4:;
    {
        cpu->r[14] = 0x0009b4a8u; fn_00097fd4(cpu);
    }
L_0009b4a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009b4ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b4b0u)) return;
    }
L_0009b4b0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0009b4b4:;
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
L_0009b4b8:;
    {
        return fn_00097ddc(cpu);
    }
}

/* _Z26GetCurrentTimeMicrosecondsv @ 0009b4bc (arm) */
void fn_0009b4bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b4bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0009b4c0:;
    {
        cpu->r[14] = 0x0009b4c4u; fn_00071ffc(cpu);
    }
L_0009b4c4:;
    {
        cpu->r[3] = 0x000003e8u;
    }
L_0009b4c8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0009b4cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b4d0u)) return;
    }
}

/* _Z25GetCurrentTimeMilisecondsv @ 0009b4d0 (arm) */
void fn_0009b4d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b4d0:;
    {
        return fn_00071ffc(cpu);
    }
}

/* _ZN4Game6ResumeEv @ 0009b4d4 (arm) */
void fn_0009b4d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b4d4:;
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
L_0009b4d8:;
    {
        cpu->r[4] = rd32(0x0009b4e0u + + 0x1d4u);
    }
L_0009b4dc:;
    {
        cpu->r[8] = rd32(0x0009b4e4u + + 0x1d4u);
    }
L_0009b4e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009b4e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009b4ecu, cpu->r[4], 0, 0);
    }
L_0009b4e8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009b4ec:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0009b4f0:;
    {
        cpu->r[14] = 0x0009b4f4u; fn_000f34a0(cpu);
    }
L_0009b4f4:;
    {
        cpu->r[3] = rd32(0x0009b4fcu + + 0x1c0u);
    }
L_0009b4f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b4fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009b500:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b504:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b508:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b5cc;
        }
    }
L_0009b50c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x490u);
    }
L_0009b510:;
    {
        cpu->r[3] = 0x000084f1u;
    }
L_0009b514:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0009b518:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b51c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b520:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0009b524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b52c;
        }
    }
L_0009b528:;
    {
        cpu->r[14] = 0x0009b52cu; fn_000fd070(cpu);
    }
L_0009b52c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009b530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5ac;
        }
    }
L_0009b534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b538:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009b53c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b540:;
    {
        cpu->r[14] = 0x0009b548u;
    }
L_0009b544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b548u)) return;
    }
L_0009b548:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5ac;
        }
    }
L_0009b550:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009b554:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_0009b558:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_0009b55c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0009b560:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0009b564:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0009b568:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009b56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b570:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d32u;
        }
    }
L_0009b574:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0009b578:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0009b57c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5ac;
        }
    }
L_0009b580:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0009b584:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0009b588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b58c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5ac;
        }
    }
L_0009b590:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0009b594:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0009b598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b59c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5ac;
        }
    }
L_0009b5a0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_0009b5a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b5a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b678;
        }
    }
L_0009b5ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x490u);
    }
L_0009b5b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b5b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5bc;
        }
    }
L_0009b5b8:;
    {
        cpu->r[14] = 0x0009b5bcu; fn_0018cf54(cpu);
    }
L_0009b5bc:;
    {
        cpu->r[3] = 0x000084f4u;
    }
L_0009b5c0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0009b5c4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009b5c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b5ccu)) return;
    }
L_0009b5cc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0009b5d0:;
    {
        cpu->r[1] = 0x00000059u;
    }
L_0009b5d4:;
    {
        cpu->r[14] = 0x0009b5dcu;
    }
L_0009b5d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b5dcu)) return;
    }
L_0009b5dc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b618;
        }
    }
L_0009b5e4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0009b5e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b5ec:;
    {
        cpu->r[14] = 0x0009b5f0u; fn_000f34e8(cpu);
    }
L_0009b5f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009b5f4:;
    {
        cpu->r[0] = 0x000000a0u;
    }
L_0009b5f8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0009b5fc:;
    {
        cpu->r[14] = 0x0009b600u; fn_0018ba6c(cpu);
    }
L_0009b600:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b604:;
    {
        cpu->r[14] = 0x0009b608u; fn_000f4b40(cpu);
    }
L_0009b608:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b60c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009b610:;
    {
        cpu->r[14] = 0x0009b614u; fn_000f361c(cpu);
    }
L_0009b614:;
    {
        goto L_0009b5ac;
    }
L_0009b618:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b61c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009b620:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_0009b624:;
    {
        cpu->r[14] = 0x0009b62cu;
    }
L_0009b628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b62cu)) return;
    }
L_0009b62c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b5f0;
        }
    }
L_0009b634:;
    {
        cpu->r[3] = 0x00001d72u;
    }
L_0009b638:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009b63c:;
    {
        cpu->r[3] = rd32(0x0009b644u + + 0x7cu);
    }
L_0009b640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b644:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009b648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b5e4;
        }
    }
L_0009b650:;
    {
        cpu->r[0] = 0x000000a4u;
    }
L_0009b654:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_0009b658:;
    {
        cpu->r[14] = 0x0009b65cu; fn_0018ba6c(cpu);
    }
L_0009b65c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b660:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b664:;
    {
        cpu->r[14] = 0x0009b668u; fn_000f0d9c(cpu);
    }
L_0009b668:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009b66c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009b670:;
    {
        cpu->r[14] = 0x0009b674u; fn_000f36dc(cpu);
    }
L_0009b674:;
    {
        goto L_0009b5f0;
    }
L_0009b678:;
    {
        cpu->r[14] = 0x0009b67cu; fn_000968d4(cpu);
    }
L_0009b67c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b5ac;
        }
    }
L_0009b684:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0009b688:;
    {
        cpu->r[12] = 0x00006737u;
    }
L_0009b68c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009b690:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0009b694:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[3]);
    }
L_0009b698:;
    {
        cpu->r[14] = 0x0009b69cu; fn_000ba460(cpu);
    }
L_0009b69c:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0009b6a0:;
    {
        cpu->r[14] = 0x0009b6a4u; fn_0009b4d0(cpu);
    }
L_0009b6a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009b6a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b6ac:;
    {
        cpu->r[14] = 0x0009b6b0u; fn_000967dc(cpu);
    }
L_0009b6b0:;
    {
        goto L_0009b5ac;
    }
}

/* GameResume @ 0009b6c4 (arm) */
void fn_0009b6c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b6c4:;
    {
        cpu->r[3] = rd32(0x0009b6ccu + + 0x2cu);
    }
L_0009b6c8:;
    {
        cpu->r[2] = rd32(0x0009b6d0u + + 0x2cu);
    }
L_0009b6cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009b6d4u, cpu->r[3], 0, 0);
    }
L_0009b6d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009b6d4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0009b6d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009b6dc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0009b6e0:;
    {
        cpu->r[2] = rd32(0x0009b6e8u + + 0x18u);
    }
L_0009b6e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009b6e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009b6ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b6f0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0009b6f4:;
    {
        return fn_0009b4d4(cpu);
    }
}

/* _ZN4Game14MP_StartServerEv @ 0009b704 (arm) */
void fn_0009b704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b704:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0009b708:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009b70c:;
    {
        cpu->r[14] = 0x0009b710u; fn_0009b4d0(cpu);
    }
L_0009b710:;
    {
        cpu->r[3] = 0x00005fbcu;
    }
L_0009b714:;
    {
        cpu->r[5] = 0x000063e8u;
    }
L_0009b718:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0009b71c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009b720:;
    {
        cpu->r[14] = 0x0009b724u; fn_00099804(cpu);
    }
L_0009b724:;
    {
        cpu->r[3] = 0x00005fa8u;
    }
L_0009b728:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b72c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_0009b730:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b734:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_0009b738:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0009b73c:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0009b740:;
    {
        cpu->r[2] = 0x00005facu;
    }
L_0009b744:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_0009b748:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009b74c:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_0009b750:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_0009b754:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009b758:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_0009b75c:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_0009b760:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009b764:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[2]);
    }
L_0009b768:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_0009b76c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_0009b770:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0009b774:;
    {
        cpu->r[14] = 0x0009b778u; fn_0009320c(cpu);
    }
L_0009b778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009b77c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009b780:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009b784:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009b788:;
    {
        cpu->r[14] = 0x0009b790u;
    }
L_0009b78c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b790u)) return;
    }
L_0009b790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b794u)) return;
    }
}

/* _ZN4Game11InitAppDataEPc @ 0009b794 (arm) */
void fn_0009b794(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009b794:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009b798:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009b79c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_0009b7a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009b7a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009b7a8:;
    {
        cpu->r[4] = rd32(0x0009b7b0u + + 0x370u);
    }
L_0009b7ac:;
    {
        cpu->r[14] = 0x0009b7b0u; fn_0012bf0c(cpu);
    }
L_0009b7b0:;
    {
        cpu->r[14] = 0x0009b7b4u; fn_0009b4d0(cpu);
    }
L_0009b7b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009b7bcu, cpu->r[4], 0, 0);
    }
L_0009b7b8:;
    {
        cpu->r[14] = 0x0009b7bcu; fn_00096550(cpu);
    }
L_0009b7bc:;
    {
        cpu->r[14] = 0x0009b7c0u; fn_0009b4d0(cpu);
    }
L_0009b7c0:;
    {
        cpu->r[14] = 0x0009b7c4u; fn_00096570(cpu);
    }
L_0009b7c4:;
    {
        cpu->r[14] = 0x0009b7c8u; fn_00093f58(cpu);
    }
L_0009b7c8:;
    {
        cpu->r[3] = rd32(0x0009b7d0u + + 0x354u);
    }
L_0009b7cc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b7d0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009b7d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009b7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b80c;
        }
    }
L_0009b7dc:;
    {
        cpu->r[0] = 0x00000070u;
    }
L_0009b7e0:;
    {
        cpu->r[14] = 0x0009b7e4u; fn_0018ba6c(cpu);
    }
L_0009b7e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b7e8:;
    {
        cpu->r[14] = 0x0009b7ecu; fn_00135fa0(cpu);
    }
L_0009b7ec:;
    {
        cpu->r[3] = rd32(0x0009b7f4u + + 0x334u);
    }
L_0009b7f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009b7f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0009b7f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b7fc:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_0009b800:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009b830;
        }
    }
L_0009b804:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009b808:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009b80cu)) return;
    }
L_0009b80c:;
    {
        cpu->r[0] = 0x000017b0u;
    }
L_0009b810:;
    {
        cpu->r[14] = 0x0009b814u; fn_0018ba6c(cpu);
    }
L_0009b814:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009b818:;
    {
        cpu->r[14] = 0x0009b81cu; fn_0013165c(cpu);
    }
L_0009b81c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0009b820:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_0009b824:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0009b828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b804;
        }
    }
L_0009b82c:;
    {
        goto L_0009b7dc;
    }
L_0009b830:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0009b834:;
    {
        cpu->r[14] = 0x0009b838u; fn_0018ba6c(cpu);
    }
L_0009b838:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009b83c:;
    {
        cpu->r[14] = 0x0009b840u; fn_001327f0(cpu);
    }
L_0009b840:;
    {
        cpu->r[3] = rd32(0x0009b848u + + 0x2e4u);
    }
L_0009b844:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009b848:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_0009b84c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b850:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_0009b854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b804;
        }
    }
L_0009b858:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0009b85c:;
    {
        cpu->r[14] = 0x0009b860u; imp__Znaj(cpu); /* _Znaj */
    }
L_0009b860:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_0009b864:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0009b868:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0009b86c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009b870:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0009b874:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009b878:;
    {
        cpu->r[14] = 0x0009b87cu; fn_0015729c(cpu);
    }
L_0009b87c:;
    {
        cpu->r[3] = rd32(0x0009b884u + + 0x2acu);
    }
L_0009b880:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009b884:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_0009b888:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b88c:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_0009b890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009b804;
        }
    }
L_0009b894:;
    {
        cpu->r[14] = 0x0009b898u; fn_0018b7bc(cpu);
    }
L_0009b898:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_0009b89c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009b8a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0009b8a4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0009b8a8:;
    {
        cpu->r[14] = 0x0009b8acu; fn_0018b5d4(cpu);
    }
L_0009b8ac:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_0009b8b0:;
    {
        cpu->r[14] = 0x0009b8b4u; fn_0018ba6c(cpu);
    }
L_0009b8b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009b8b8:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_0009b8bc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b8c0:;
    {
        cpu->r[14] = 0x0009b8c4u; imp_memset(cpu); /* memset */
    }
L_0009b8c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b8c8:;
    {
        cpu->r[14] = 0x0009b8ccu; fn_000eaca4(cpu);
    }
L_0009b8cc:;
    {
        cpu->r[3] = rd32(0x0009b8d4u + + 0x260u);
    }
L_0009b8d0:;
    {
        cpu->r[2] = 0x00001d64u;
    }
L_0009b8d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009b8d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009b8e0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[8]);
    }
L_0009b8e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0009b8e8:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_0009b8ec:;
    {
        cpu->r[14] = 0x0009b8f0u; fn_000eac74(cpu);
    }
L_0009b8f0:;
    {
        cpu->r[3] = 0x00001d6cu;
    }
L_0009b8f4:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_0009b8f8:;
    {
        cpu->r[0] = 0x00000088u;
    }
L_0009b8fc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009b900:;
    {
        cpu->r[3] = 0x00001bdcu;
    }
L_0009b904:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009b908:;
    {
        cpu->r[3] = 0x00006760u;
    }
L_0009b90c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009b910:;
    {
        cpu->r[14] = 0x0009b914u; fn_0018ba6c(cpu);
    }
L_0009b914:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b918:;
    {
        cpu->r[14] = 0x0009b91cu; fn_001b8df8(cpu);
    }
L_0009b91c:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0009b920:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b924:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b928:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b92c:;
    {
        cpu->r[14] = 0x0009b930u; fn_001b37fc(cpu);
    }
L_0009b930:;
    {
        cpu->r[0] = 0x00000040u;
    }
L_0009b934:;
    {
        cpu->r[14] = 0x0009b938u; fn_0018ba6c(cpu);
    }
L_0009b938:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b93c:;
    {
        cpu->r[14] = 0x0009b940u; fn_001b9580(cpu);
    }
L_0009b940:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_0009b944:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b948:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b94c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b950:;
    {
        cpu->r[14] = 0x0009b954u; fn_001b37fc(cpu);
    }
L_0009b954:;
    {
        cpu->r[0] = 0x00000098u;
    }
L_0009b958:;
    {
        cpu->r[14] = 0x0009b95cu; fn_0018ba6c(cpu);
    }
L_0009b95c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009b960:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009b964:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b968:;
    {
        cpu->r[14] = 0x0009b96cu; fn_001c686c(cpu);
    }
L_0009b96c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0009b970:;
    {
        cpu->r[0] = 0x00000074u;
    }
L_0009b974:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b978:;
    {
        cpu->r[14] = 0x0009b97cu; fn_0018ba6c(cpu);
    }
L_0009b97c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b980:;
    {
        cpu->r[14] = 0x0009b984u; fn_001ba6f0(cpu);
    }
L_0009b984:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_0009b988:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b98c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b990:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b994:;
    {
        cpu->r[14] = 0x0009b998u; fn_001b37fc(cpu);
    }
L_0009b998:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_0009b99c:;
    {
        cpu->r[14] = 0x0009b9a0u; fn_0018ba6c(cpu);
    }
L_0009b9a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b9a4:;
    {
        cpu->r[14] = 0x0009b9a8u; fn_001bea08(cpu);
    }
L_0009b9a8:;
    {
        cpu->r[3] = 0x00006764u;
    }
L_0009b9ac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b9b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b9b4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b9b8:;
    {
        cpu->r[14] = 0x0009b9bcu; fn_001b37fc(cpu);
    }
L_0009b9bc:;
    {
        cpu->r[0] = 0x00000068u;
    }
L_0009b9c0:;
    {
        cpu->r[14] = 0x0009b9c4u; fn_0018ba6c(cpu);
    }
L_0009b9c4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b9c8:;
    {
        cpu->r[14] = 0x0009b9ccu; fn_001c0778(cpu);
    }
L_0009b9cc:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_0009b9d0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b9d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b9d8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009b9dc:;
    {
        cpu->r[14] = 0x0009b9e0u; fn_001b37fc(cpu);
    }
L_0009b9e0:;
    {
        cpu->r[0] = 0x00000070u;
    }
L_0009b9e4:;
    {
        cpu->r[14] = 0x0009b9e8u; fn_0018ba6c(cpu);
    }
L_0009b9e8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009b9ec:;
    {
        cpu->r[14] = 0x0009b9f0u; fn_001c1eec(cpu);
    }
L_0009b9f0:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_0009b9f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009b9f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009b9fc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009ba00:;
    {
        cpu->r[14] = 0x0009ba04u; fn_001b37fc(cpu);
    }
L_0009ba04:;
    {
        cpu->r[0] = 0x000000acu;
    }
L_0009ba08:;
    {
        cpu->r[14] = 0x0009ba0cu; fn_0018ba6c(cpu);
    }
L_0009ba0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009ba10:;
    {
        cpu->r[14] = 0x0009ba14u; fn_001c38f0(cpu);
    }
L_0009ba14:;
    {
        cpu->r[3] = 0x0000676cu;
    }
L_0009ba18:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009ba1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ba20:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009ba24:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0009ba28:;
    {
        cpu->r[14] = 0x0009ba2cu; fn_001b37fc(cpu);
    }
L_0009ba2c:;
    {
        cpu->r[3] = 0x000067c1u;
    }
L_0009ba30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006700u, 0, 0);
    }
L_0009ba34:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009ba38:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ba3c:;
    {
        cpu->r[3] = 0x000067c2u;
    }
L_0009ba40:;
    {
        cpu->r[1] = 0x00007530u;
    }
L_0009ba44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009ba48:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ba4c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009ba50:;
    {
        cpu->r[14] = 0x0009ba54u; fn_000fb0e4(cpu);
    }
L_0009ba54:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x4u;
        wr32(cpu->r[7] + - 0x4u, cpu->r[6]);
        cpu->r[7] = wb_tmp;
    }
L_0009ba58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ba5c:;
    {
        cpu->r[14] = 0x0009ba60u; fn_000960ec(cpu);
    }
L_0009ba60:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009ba64:;
    {
        cpu->r[14] = 0x0009ba68u; fn_0009251c(cpu);
    }
L_0009ba68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009ba6c:;
    {
        wr32(cpu->r[5] + + 0x4c8u, cpu->r[3]);
    }
L_0009ba70:;
    {
        cpu->r[14] = 0x0009ba74u; fn_0009b4d0(cpu);
    }
L_0009ba74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009ba78:;
    {
        wr32(cpu->r[5] + + 0x4c0u, cpu->r[0]);
    }
L_0009ba7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ba80:;
    {
        cpu->r[14] = 0x0009ba84u; fn_00099b7c(cpu);
    }
L_0009ba84:;
    {
        cpu->r[3] = 0x00001c0du;
    }
L_0009ba88:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ba8c:;
    {
        cpu->r[3] = 0x00001c30u;
    }
L_0009ba90:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ba94:;
    {
        cpu->r[3] = 0x000084f0u;
    }
L_0009ba98:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ba9c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0009baa0:;
    {
        wr8(cpu->r[5] + + 0x4cdu, cpu->r[3]);
    }
L_0009baa4:;
    {
        cpu->r[3] = 0x00001c34u;
    }
L_0009baa8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009baac:;
    {
        cpu->r[14] = 0x0009bab0u; fn_000a8684(cpu);
    }
L_0009bab0:;
    {
        cpu->r[14] = 0x0009bab4u; fn_00097ad0(cpu);
    }
L_0009bab4:;
    {
        cpu->r[3] = rd32(0x0009babcu + + 0x7cu);
    }
L_0009bab8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009babc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009bac0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009bac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009badc;
        }
    }
L_0009bac8:;
    {
        cpu->r[5] = rd32(0x0009bad0u + + 0x6cu);
    }
L_0009bacc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009bad0:;
    {
        cpu->r[14] = 0x0009bad4u; fn_0018a308(cpu);
    }
L_0009bad4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009bad8:;
    {
        goto L_0009b804;
    }
L_0009badc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009bae0:;
    {
        cpu->r[14] = 0x0009bae4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009bae4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009bae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009bac8;
        }
    }
L_0009baec:;
    {
        cpu->r[5] = rd32(0x0009baf4u + + 0x48u);
    }
L_0009baf0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009baf4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009baf8:;
    {
        cpu->r[14] = 0x0009bafcu; fn_00189f48(cpu);
    }
L_0009bafc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009bb00:;
    {
        cpu->r[14] = 0x0009bb04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009bb04:;
    {
        cpu->r[3] = rd32(0x0009bb0cu + + 0x34u);
    }
L_0009bb08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009bb0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009bb10:;
    {
        cpu->r[3] = rd32(0x0009bb18u + + 0x2cu);
    }
L_0009bb14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009bb18:;
    {
        cpu->r[14] = 0x0009bb1cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009bb1c:;
    {
        goto L_0009bacc;
    }
}

/* _ZN4GameC1EPciiiii @ 0009bb48 (arm) */
void fn_0009bb48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009bb48:;
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
L_0009bb4c:;
    {
        cpu->r[8] = rd32(0x0009bb54u + + 0x9b4u);
    }
L_0009bb50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009bb54:;
    {
        cpu->r[0] = rd32(0x0009bb5cu + + 0x9b0u);
    }
L_0009bb58:;
    {
        cpu->r[8] = add_flags(cpu, 0x0009bb60u, cpu->r[8], 0, 0);
    }
L_0009bb5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0009bb60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009bb64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00001500u, 0, 0);
    }
L_0009bb68:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[0]);
    }
L_0009bb6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000015u, 0, 0);
    }
L_0009bb70:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0009bb74:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0009bb78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000000a0u, 0, 0);
    }
L_0009bb7c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0009bb80:;
    {
        cpu->r[2] = 0x000014f8u;
    }
L_0009bb84:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_0009bb88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0009bb8c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0009bb90:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0009bb94:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_0009bb98:;
    {
        wr32(cpu->r[5] + + 0x42cu, cpu->r[3]);
    }
L_0009bb9c:;
    {
        wr32(cpu->r[5] + + 0x430u, cpu->r[3]);
    }
L_0009bba0:;
    {
        wr32(cpu->r[5] + + 0x434u, cpu->r[3]);
    }
L_0009bba4:;
    {
        wr32(cpu->r[5] + + 0x438u, cpu->r[3]);
    }
L_0009bba8:;
    {
        wr32(cpu->r[5] + + 0x43cu, cpu->r[3]);
    }
L_0009bbac:;
    {
        wr32(cpu->r[5] + + 0x440u, cpu->r[3]);
    }
L_0009bbb0:;
    {
        wr32(cpu->r[5] + + 0x444u, cpu->r[3]);
    }
L_0009bbb4:;
    {
        wr32(cpu->r[5] + + 0x448u, cpu->r[3]);
    }
L_0009bbb8:;
    {
        wr32(cpu->r[5] + + 0x44cu, cpu->r[3]);
    }
L_0009bbbc:;
    {
        wr32(cpu->r[5] + + 0x450u, cpu->r[3]);
    }
L_0009bbc0:;
    {
        wr32(cpu->r[5] + + 0x454u, cpu->r[3]);
    }
L_0009bbc4:;
    {
        wr32(cpu->r[5] + + 0x458u, cpu->r[3]);
    }
L_0009bbc8:;
    {
        wr32(cpu->r[5] + + 0x45cu, cpu->r[3]);
    }
L_0009bbcc:;
    {
        wr32(cpu->r[5] + + 0x460u, cpu->r[3]);
    }
L_0009bbd0:;
    {
        wr32(cpu->r[5] + + 0x464u, cpu->r[3]);
    }
L_0009bbd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0009bbd8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000032u, 0, 0);
    }
L_0009bbdc:;
    {
        cpu->r[14] = 0x0009bbe0u; fn_000931e4(cpu);
    }
L_0009bbe0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000190u, 1, 1);
    }
L_0009bbe4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009bbd4;
        }
    }
L_0009bbe8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00001680u, 0, 0);
    }
L_0009bbec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009bbf0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002du, 0, 0);
    }
L_0009bbf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009bbf8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000032u, 0, 0);
    }
L_0009bbfc:;
    {
        cpu->r[14] = 0x0009bc00u; fn_000931e4(cpu);
    }
L_0009bc00:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_0009bc04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009bbf4;
        }
    }
L_0009bc08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_0009bc0c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009bc10:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x0000003du, 0, 0);
    }
L_0009bc14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_0009bc18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000032u, 0, 0);
    }
L_0009bc1c:;
    {
        cpu->r[14] = 0x0009bc20u; fn_000931e4(cpu);
    }
L_0009bc20:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_0009bc24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009bc14;
        }
    }
L_0009bc28:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00001b80u, 0, 0);
    }
L_0009bc2c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009bc30:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000du, 0, 0);
    }
L_0009bc34:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009bc38:;
    {
        cpu->r[14] = 0x0009bc3cu; fn_000931e4(cpu);
    }
L_0009bc3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001c00u, 0, 0);
    }
L_0009bc40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009bc44:;
    {
        cpu->r[14] = 0x0009bc48u; fn_0012bf2c(cpu);
    }
L_0009bc48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006700u, 0, 0);
    }
L_0009bc4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009bc50:;
    {
        cpu->r[14] = 0x0009bc54u; fn_000fb7dc(cpu);
    }
L_0009bc54:;
    {
        cpu->r[2] = rd32(0x0009bc5cu + + 0x8b4u);
    }
L_0009bc58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_0009bc5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000c0u, 0, 0);
    }
L_0009bc60:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009bc64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009bc68:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0009bc6c:;
    {
        cpu->r[14] = 0x0009bc70u; fn_001526e0(cpu);
    }
L_0009bc70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008700u, 0, 0);
    }
L_0009bc74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000570u, 0, 0);
    }
L_0009bc78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_0009bc7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0009bc80:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_0009bc84:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_0009bc88:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_0009bc8c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_0009bc90:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[4]);
    }
L_0009bc94:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[4]);
    }
L_0009bc98:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[4]);
    }
L_0009bc9c:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[4]);
    }
L_0009bca0:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[4]);
    }
L_0009bca4:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[4]);
    }
L_0009bca8:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[4]);
    }
L_0009bcac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_0009bcb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009bcb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009bc80;
        }
    }
L_0009bcb8:;
    {
        cpu->r[12] = rd32(0x0009bcc0u + + 0x854u);
    }
L_0009bcbc:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0009bcc0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0009bcc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x0001e400u, 0, 0);
    }
L_0009bcc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0009bccc:;
    {
        cpu->r[14] = 0x0000e774u;
    }
L_0009bcd0:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0009bcd4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0009bcd8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0009bcdc:;
    {
        cpu->r[1] = 0x0000e778u;
    }
L_0009bce0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009bce4:;
    {
        cpu->r[0] = 0x0000e784u;
    }
L_0009bce8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0009bcec:;
    {
        cpu->r[12] = 0x0000e78cu;
    }
L_0009bcf0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009bcf4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0009bcf8:;
    {
        cpu->r[3] = rd32(0x0009bd00u + + 0x818u);
    }
L_0009bcfc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0009bd00:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[4]);
    }
L_0009bd04:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009bd08:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_0009bd0c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000006u, 1, 1);
    }
L_0009bd10:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009bd14:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_0009bd18:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0009bd1c:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0009bd20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009bd24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009bd28:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009bd2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0009bd30:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[12]);
    }
L_0009bd34:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[12]);
    }
L_0009bd38:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], 0x00000380u, 0, 0);
    }
L_0009bd3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009bd40:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_0009bd44:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[14]);
    }
L_0009bd48:;
    {
        cpu->r[3] = 0x00001d72u;
    }
L_0009bd4c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_0009bd50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009bd54:;
    {
        wr32(cpu->r[7], cpu->r[12]);
    }
L_0009bd58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009bd5c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bd60:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[11]);
    }
L_0009bd64:;
    {
        cpu->r[14] = 0x0009bd68u; fn_00097a08(cpu);
    }
L_0009bd68:;
    {
        cpu->r[2] = 0x000082dcu;
    }
L_0009bd6c:;
    {
        cpu->r[3] = 0x0000e7a9u;
    }
L_0009bd70:;
    {
        wr32(cpu->r[5] + + 0x4c4u, cpu->r[10]);
    }
L_0009bd74:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009bd78:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_0009bd7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009bd80:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009bd84:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009bd88:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0009bd8c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bd90:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009bd94:;
    {
        cpu->r[2] = 0x00001bbfu;
    }
L_0009bd98:;
    {
        wr8(cpu->r[5] + + 0x4b7u, cpu->r[4]);
    }
L_0009bd9c:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009bda0:;
    {
        wr8(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_0009bda4:;
    {
        wr32(cpu->r[5] + + 0x4e8u, cpu->r[4]);
    }
L_0009bda8:;
    {
        wr32(cpu->r[5] + + 0x4ecu, cpu->r[4]);
    }
L_0009bdac:;
    {
        wr32(cpu->r[5] + + 0x4f0u, cpu->r[4]);
    }
L_0009bdb0:;
    {
        wr32(cpu->r[5] + + 0x4f4u, cpu->r[4]);
    }
L_0009bdb4:;
    {
        wr32(cpu->r[5] + + 0x4d0u, cpu->r[4]);
    }
L_0009bdb8:;
    {
        wr32(cpu->r[5] + + 0x4d4u, cpu->r[4]);
    }
L_0009bdbc:;
    {
        wr32(cpu->r[5] + + 0x4d8u, cpu->r[4]);
    }
L_0009bdc0:;
    {
        wr8(cpu->r[5] + + 0x41cu, cpu->r[4]);
    }
L_0009bdc4:;
    {
        wr8(cpu->r[5] + + 0x41du, cpu->r[4]);
    }
L_0009bdc8:;
    {
        wr8(cpu->r[5] + + 0x41eu, cpu->r[4]);
    }
L_0009bdcc:;
    {
        wr8(cpu->r[5] + + 0x41fu, cpu->r[4]);
    }
L_0009bdd0:;
    {
        wr32(cpu->r[5] + + 0x4dcu, cpu->r[4]);
    }
L_0009bdd4:;
    {
        cpu->r[14] = 0x0009bdd8u; fn_0018ba6c(cpu);
    }
L_0009bdd8:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009bddc:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_0009bde0:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0009bde4:;
    {
        cpu->r[2] = 0x00000096u;
    }
L_0009bde8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009bdec:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000032u, 1, 0);
    }
L_0009bdf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009bdf4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009bdf8:;
    {
        cpu->r[14] = 0x0009bdfcu; fn_000eab24(cpu);
    }
L_0009bdfc:;
    {
        cpu->r[3] = 0x00001becu;
    }
L_0009be00:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009be04:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009be08:;
    {
        cpu->r[14] = 0x0009be0cu; fn_0018ba6c(cpu);
    }
L_0009be0c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009be10:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009be14:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009be18:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009be1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009be20:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009be24:;
    {
        cpu->r[14] = 0x0009be28u; fn_000eab24(cpu);
    }
L_0009be28:;
    {
        cpu->r[3] = 0x00001bf0u;
    }
L_0009be2c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009be30:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009be34:;
    {
        cpu->r[14] = 0x0009be38u; fn_0018ba6c(cpu);
    }
L_0009be38:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009be3c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009be40:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009be44:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009be48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009be4c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009be50:;
    {
        cpu->r[14] = 0x0009be54u; fn_000eab24(cpu);
    }
L_0009be54:;
    {
        cpu->r[3] = 0x00001bf4u;
    }
L_0009be58:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009be5c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009be60:;
    {
        cpu->r[14] = 0x0009be64u; fn_0018ba6c(cpu);
    }
L_0009be64:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_0009be68:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009be6c:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009be70:;
    {
        cpu->r[12] = 0x00000096u;
    }
L_0009be74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009be78:;
    {
        cpu->r[12] = 0x0000017cu;
    }
L_0009be7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009be80:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009be84:;
    {
        cpu->r[14] = 0x0009be88u; fn_000eab24(cpu);
    }
L_0009be88:;
    {
        cpu->r[3] = 0x00001bf8u;
    }
L_0009be8c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009be90:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009be94:;
    {
        cpu->r[14] = 0x0009be98u; fn_0018ba6c(cpu);
    }
L_0009be98:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009be9c:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009bea0:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009bea4:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_0009bea8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009beac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000096u, 1, 0);
    }
L_0009beb0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009beb4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009beb8:;
    {
        cpu->r[14] = 0x0009bebcu; fn_000eab24(cpu);
    }
L_0009bebc:;
    {
        cpu->r[3] = 0x00001bfcu;
    }
L_0009bec0:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009bec4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009bec8:;
    {
        cpu->r[14] = 0x0009beccu; fn_0018ba6c(cpu);
    }
L_0009becc:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_0009bed0:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009bed4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009bed8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009bedc:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_0009bee0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0009bee4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009bee8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009beec:;
    {
        cpu->r[14] = 0x0009bef0u; fn_000eab24(cpu);
    }
L_0009bef0:;
    {
        cpu->r[3] = 0x00001c00u;
    }
L_0009bef4:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009bef8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009befc:;
    {
        cpu->r[14] = 0x0009bf00u; fn_0018ba6c(cpu);
    }
L_0009bf00:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009bf04:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009bf08:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009bf0c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009bf10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009bf14:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009bf18:;
    {
        cpu->r[14] = 0x0009bf1cu; fn_000eab24(cpu);
    }
L_0009bf1c:;
    {
        cpu->r[3] = 0x00001c04u;
    }
L_0009bf20:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009bf24:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009bf28:;
    {
        cpu->r[14] = 0x0009bf2cu; fn_0018ba6c(cpu);
    }
L_0009bf2c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009bf30:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009bf34:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009bf38:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_0009bf3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009bf40:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000096u, 1, 0);
    }
L_0009bf44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009bf48:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0009bf4c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009bf50:;
    {
        cpu->r[14] = 0x0009bf54u; fn_000eab24(cpu);
    }
L_0009bf54:;
    {
        cpu->r[3] = 0x00001c08u;
    }
L_0009bf58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009bf5c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009bf60:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_0009bf64:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bf68:;
    {
        cpu->r[3] = 0x0000869cu;
    }
L_0009bf6c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bf70:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_0009bf74:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bf78:;
    {
        cpu->r[3] = 0x000086a4u;
    }
L_0009bf7c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009bf80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0009bf84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0009bf88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008c00u, 0, 0);
    }
L_0009bf8c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000032u, 1, 1);
    }
L_0009bf90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009bf94:;
    {
        wr8(cpu->r[3] + + 0x79u, cpu->r[1]);
    }
L_0009bf98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009bf80;
        }
    }
L_0009bf9c:;
    {
        cpu->r[1] = 0x00001d71u;
    }
L_0009bfa0:;
    {
        cpu->r[0] = 0x00001d34u;
    }
L_0009bfa4:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_0009bfa8:;
    {
        cpu->r[3] = 0x00001d70u;
    }
L_0009bfac:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009bfb0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0009bfb4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0009bfb8:;
    {
        cpu->r[0] = 0x00001be4u;
    }
L_0009bfbc:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009bfc0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009bfc4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0009bfc8:;
    {
        cpu->r[0] = 0x00001be8u;
    }
L_0009bfcc:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_0009bfd0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0009bfd4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0009bfd8:;
    {
        cpu->r[0] = 0x00008c79u;
    }
L_0009bfdc:;
    {
        wr8(cpu->r[5] + + 0x424u, cpu->r[3]);
    }
L_0009bfe0:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0009bfe4:;
    {
        cpu->r[0] = 0x00001bccu;
    }
L_0009bfe8:;
    {
        wr32(cpu->r[5] + + 0x49cu, cpu->r[2]);
    }
L_0009bfec:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0009bff0:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_0009bff4:;
    {
        wr32(cpu->r[5] + + 0x4e0u, cpu->r[3]);
    }
L_0009bff8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0009bffc:;
    {
        cpu->r[1] = 0x00001bd0u;
    }
L_0009c000:;
    {
        wr8(cpu->r[5] + + 0x4ccu, cpu->r[2]);
    }
L_0009c004:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0009c008:;
    {
        cpu->r[1] = 0x00001ca8u;
    }
L_0009c00c:;
    {
        wr8(cpu->r[6] + + 0x35u, cpu->r[2]);
    }
L_0009c010:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c014:;
    {
        cpu->r[1] = 0x00001d30u;
    }
L_0009c018:;
    {
        wr8(cpu->r[6] + + 0x36u, cpu->r[2]);
    }
L_0009c01c:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c020:;
    {
        cpu->r[1] = 0x00001d31u;
    }
L_0009c024:;
    {
        wr8(cpu->r[6] + + 0x37u, cpu->r[2]);
    }
L_0009c028:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c02c:;
    {
        cpu->r[1] = 0x00000091u;
    }
L_0009c030:;
    {
        wr8(cpu->r[6] + + 0x38u, cpu->r[2]);
    }
L_0009c034:;
    {
        wr32(cpu->r[5] + + 0x4a0u, cpu->r[1]);
    }
L_0009c038:;
    {
        cpu->r[1] = 0x0000008eu;
    }
L_0009c03c:;
    {
        wr8(cpu->r[6] + + 0x39u, cpu->r[2]);
    }
L_0009c040:;
    {
        wr32(cpu->r[5] + + 0x4a4u, cpu->r[1]);
    }
L_0009c044:;
    {
        wr8(cpu->r[6] + + 0x3au, cpu->r[2]);
    }
L_0009c048:;
    {
        wr8(cpu->r[6] + + 0x3bu, cpu->r[2]);
    }
L_0009c04c:;
    {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[2]);
    }
L_0009c050:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4] + cpu->r[5]; cpu->r[0] = v;
    }
L_0009c054:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009c058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_0009c05c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_0009c060:;
    {
        cpu->r[14] = 0x0009c064u; fn_000930e0(cpu);
    }
L_0009c064:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_0009c068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c050;
        }
    }
L_0009c06c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009c070:;
    {
        cpu->r[14] = 0x0009c074u; fn_000930e0(cpu);
    }
L_0009c074:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009c078:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0009c07c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0009c080:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008600u, 0, 0);
    }
L_0009c084:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005eu, 1, 1);
    }
L_0009c088:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_0009c08c:;
    {
        wr16(cpu->r[2] + + 0xf0u, cpu->r[10]);
    }
L_0009c090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c078;
        }
    }
L_0009c094:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4e0u);
    }
L_0009c098:;
    {
        cpu->r[2] = 0x000082e4u;
    }
L_0009c09c:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_0009c0a0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009c0a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x0001e000u, 0, 0);
    }
L_0009c0a8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c0ac:;
    {
        wr32(cpu->r[5] + + 0x4c8u, cpu->r[3]);
    }
L_0009c0b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c0b4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c0b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009c0bc:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_0009c0c0:;
    {
        wr8(cpu->r[5] + + 0x481u, cpu->r[4]);
    }
L_0009c0c4:;
    {
        wr8(cpu->r[5] + + 0x480u, cpu->r[4]);
    }
L_0009c0c8:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0009c0cc:;
    {
        cpu->r[14] = 0x0009c0d0u; imp_memset(cpu); /* memset */
    }
L_0009c0d0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c0d4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_0009c0d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000015u, 0, 0);
    }
L_0009c0dc:;
    {
        wr32(cpu->r[7] + + 0x24cu, cpu->r[4]);
    }
L_0009c0e0:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_0009c0e4:;
    {
        wr32(cpu->r[7] + + 0x250u, cpu->r[4]);
    }
L_0009c0e8:;
    {
        wr32(cpu->r[7] + + 0x254u, cpu->r[4]);
    }
L_0009c0ec:;
    {
        wr32(cpu->r[7] + + 0x258u, cpu->r[4]);
    }
L_0009c0f0:;
    {
        wr32(cpu->r[7] + + 0x25cu, cpu->r[4]);
    }
L_0009c0f4:;
    {
        wr32(cpu->r[7] + + 0x260u, cpu->r[4]);
    }
L_0009c0f8:;
    {
        wr32(cpu->r[7] + + 0x264u, cpu->r[4]);
    }
L_0009c0fc:;
    {
        wr32(cpu->r[7] + + 0x268u, cpu->r[4]);
    }
L_0009c100:;
    {
        cpu->r[14] = 0x0009c104u; imp_memset(cpu); /* memset */
    }
L_0009c104:;
    {
        cpu->r[3] = 0x000063c0u;
    }
L_0009c108:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009c10c:;
    {
        cpu->r[14] = 0x0009c110u; fn_00095fdc(cpu);
    }
L_0009c110:;
    {
        cpu->r[3] = 0x00005facu;
    }
L_0009c114:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0009c118:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c11c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009c120:;
    {
        cpu->r[3] = 0x00005fb4u;
    }
L_0009c124:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009c128:;
    {
        cpu->r[3] = 0x00005fa8u;
    }
L_0009c12c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009c130:;
    {
        cpu->r[3] = 0x00005fb0u;
    }
L_0009c134:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009c138:;
    {
        cpu->r[3] = 0x00005fb8u;
    }
L_0009c13c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009c140:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009c144:;
    {
        cpu->r[3] = 0x000063c1u;
    }
L_0009c148:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009c14c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0009c150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006100u, 0, 0);
    }
L_0009c154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0009c158:;
    {
        cpu->r[14] = 0x0009c15cu; imp_memset(cpu); /* memset */
    }
L_0009c15c:;
    {
        cpu->r[1] = 0x00005f6cu;
    }
L_0009c160:;
    {
        cpu->r[2] = rd32(0x0009c168u + + 0x3b4u);
    }
L_0009c164:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009c168:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c16c:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0009c170:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c174:;
    {
        cpu->r[1] = 0x00005fa4u;
    }
L_0009c178:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009c17c:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c180:;
    {
        cpu->r[1] = 0x000067c3u;
    }
L_0009c184:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c188:;
    {
        cpu->r[1] = 0x00006738u;
    }
L_0009c18c:;
    {
        wr8(cpu->r[2], cpu->r[4]);
    }
L_0009c190:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c194:;
    {
        cpu->r[1] = 0x00005f68u;
    }
L_0009c198:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c19c:;
    {
        cpu->r[1] = 0x00005f70u;
    }
L_0009c1a0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c1a4:;
    {
        cpu->r[1] = 0x00008528u;
    }
L_0009c1a8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c1ac:;
    {
        cpu->r[1] = 0x0000852cu;
    }
L_0009c1b0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c1b4:;
    {
        cpu->r[1] = 0x00005f9cu;
    }
L_0009c1b8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c1bc:;
    {
        cpu->r[1] = 0x00005fa0u;
    }
L_0009c1c0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c1c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0009c1c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0009c1cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_0009c1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0009c1d4:;
    {
        wr32(cpu->r[2] + + 0x3cu, cpu->r[6]);
    }
L_0009c1d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c1c4;
        }
    }
L_0009c1dc:;
    {
        cpu->r[3] = 0x0000675cu;
    }
L_0009c1e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009c1e4:;
    {
        cpu->r[0] = 0x0000e26eu;
    }
L_0009c1e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c1ec:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c1f0:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_0009c1f4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c1f8:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_0009c1fc:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c200:;
    {
        cpu->r[3] = 0x0000675eu;
    }
L_0009c204:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009c208:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c20c:;
    {
        cpu->r[3] = 0x0000675fu;
    }
L_0009c210:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c214:;
    {
        cpu->r[3] = 0x00006781u;
    }
L_0009c218:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c21c:;
    {
        cpu->r[3] = 0x00006780u;
    }
L_0009c220:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c224:;
    {
        cpu->r[3] = 0x00006783u;
    }
L_0009c228:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c22c:;
    {
        cpu->r[3] = 0x00006782u;
    }
L_0009c230:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c234:;
    {
        cpu->r[3] = 0x00006784u;
    }
L_0009c238:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c23c:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0009c240:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c244:;
    {
        cpu->r[14] = 0x0009c248u; imp_memset(cpu); /* memset */
    }
L_0009c248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x000002b0u, 0, 0);
    }
L_0009c24c:;
    {
        cpu->r[0] = 0x0000e2b2u;
    }
L_0009c250:;
    {
        wr32(cpu->r[7] + + 0x290u, cpu->r[4]);
    }
L_0009c254:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c258:;
    {
        wr32(cpu->r[7] + + 0x294u, cpu->r[4]);
    }
L_0009c25c:;
    {
        wr32(cpu->r[7] + + 0x298u, cpu->r[4]);
    }
L_0009c260:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c264:;
    {
        wr32(cpu->r[7] + + 0x29cu, cpu->r[4]);
    }
L_0009c268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009c26c:;
    {
        wr32(cpu->r[7] + + 0x2a0u, cpu->r[4]);
    }
L_0009c270:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009c274:;
    {
        wr32(cpu->r[7] + + 0x2a4u, cpu->r[4]);
    }
L_0009c278:;
    {
        wr32(cpu->r[7] + + 0x2a8u, cpu->r[4]);
    }
L_0009c27c:;
    {
        wr32(cpu->r[7] + + 0x2acu, cpu->r[4]);
    }
L_0009c280:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_0009c284:;
    {
        cpu->r[14] = 0x0009c288u; imp_memset(cpu); /* memset */
    }
L_0009c288:;
    {
        cpu->r[0] = 0x0000e3b2u;
    }
L_0009c28c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c290:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c294:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009c298:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009c29c:;
    {
        cpu->r[14] = 0x0009c2a0u; imp_memset(cpu); /* memset */
    }
L_0009c2a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009c2a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c2a8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009c2ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x000000b2u, 0, 0);
    }
L_0009c2b0:;
    {
        cpu->r[14] = 0x0009c2b4u; imp_memset(cpu); /* memset */
    }
L_0009c2b4:;
    {
        cpu->r[0] = 0x0000e5b2u;
    }
L_0009c2b8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c2bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c2c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009c2c4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009c2c8:;
    {
        cpu->r[14] = 0x0009c2ccu; imp_memset(cpu); /* memset */
    }
L_0009c2cc:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0009c2d0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009c2d4:;
    {
        wr32(cpu->r[5] + + 0xc8u, cpu->r[4]);
    }
L_0009c2d8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c2dc:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_0009c2e0:;
    {
        wr32(cpu->r[5] + + 0x3f0u, cpu->r[4]);
    }
L_0009c2e4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c2e8:;
    {
        cpu->r[3] = 0x00001500u;
    }
L_0009c2ec:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009c2f0:;
    {
        cpu->r[3] = 0x00001d32u;
    }
L_0009c2f4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c2f8:;
    {
        cpu->r[3] = 0x000084f1u;
    }
L_0009c2fc:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c300:;
    {
        cpu->r[3] = 0x000084fcu;
    }
L_0009c304:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c308:;
    {
        cpu->r[3] = 0x000084f8u;
    }
L_0009c30c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c310:;
    {
        cpu->r[3] = 0x000084f4u;
    }
L_0009c314:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c318:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_0009c31c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c320:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_0009c324:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c328:;
    {
        cpu->r[3] = 0x00008510u;
    }
L_0009c32c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c330:;
    {
        cpu->r[3] = 0x00001504u;
    }
L_0009c334:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009c338:;
    {
        cpu->r[3] = 0x00001508u;
    }
L_0009c33c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009c340:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_0009c344:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c348:;
    {
        cpu->r[3] = 0x00000019u;
    }
L_0009c34c:;
    {
        wr32(cpu->r[5] + + 0x418u, cpu->r[3]);
    }
L_0009c350:;
    {
        cpu->r[14] = 0x0009c354u; fn_0009b4d0(cpu);
    }
L_0009c354:;
    {
        cpu->r[2] = 0x000014fcu;
    }
L_0009c358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008600u, 0, 0);
    }
L_0009c35c:;
    {
        wr32(cpu->r[3] + + 0xe4u, cpu->r[4]);
    }
L_0009c360:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_0009c364:;
    {
        cpu->r[2] = 0x00001c38u;
    }
L_0009c368:;
    {
        wr32(cpu->r[5] + + 0x420u, cpu->r[0]);
    }
L_0009c36c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c370:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_0009c374:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c378:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_0009c37c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c380:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0009c384:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c388:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0009c38c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c390:;
    {
        cpu->r[2] = 0x00001c54u;
    }
L_0009c394:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c398:;
    {
        cpu->r[2] = 0x00001c58u;
    }
L_0009c39c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3a0:;
    {
        cpu->r[2] = 0x00001c5cu;
    }
L_0009c3a4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3a8:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_0009c3ac:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3b0:;
    {
        cpu->r[2] = 0x00001c6cu;
    }
L_0009c3b4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3b8:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_0009c3bc:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3c0:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_0009c3c4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3c8:;
    {
        cpu->r[2] = 0x00001c64u;
    }
L_0009c3cc:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3d0:;
    {
        cpu->r[2] = 0x00001c80u;
    }
L_0009c3d4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3d8:;
    {
        cpu->r[2] = 0x00001c74u;
    }
L_0009c3dc:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3e0:;
    {
        cpu->r[2] = 0x00001c78u;
    }
L_0009c3e4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3e8:;
    {
        cpu->r[2] = 0x00001c7cu;
    }
L_0009c3ec:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3f0:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_0009c3f4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c3f8:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_0009c3fc:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c400:;
    {
        cpu->r[2] = 0x00001c84u;
    }
L_0009c404:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c408:;
    {
        cpu->r[2] = 0x00001c88u;
    }
L_0009c40c:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c410:;
    {
        cpu->r[2] = 0x00001c8cu;
    }
L_0009c414:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c418:;
    {
        cpu->r[2] = 0x00001c98u;
    }
L_0009c41c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c420:;
    {
        cpu->r[2] = 0x00008cacu;
    }
L_0009c424:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c428:;
    {
        cpu->r[2] = 0x00008cb0u;
    }
L_0009c42c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c430:;
    {
        cpu->r[2] = 0x00008cb4u;
    }
L_0009c434:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c438:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_0009c43c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c440:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_0009c444:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c448:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_0009c44c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c450:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_0009c454:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c458:;
    {
        wr32(cpu->r[3] + + 0xe8u, cpu->r[4]);
    }
L_0009c45c:;
    {
        wr32(cpu->r[3] + + 0xecu, cpu->r[4]);
    }
L_0009c460:;
    {
        cpu->r[3] = 0x00008514u;
    }
L_0009c464:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c468:;
    {
        cpu->r[3] = 0x00008518u;
    }
L_0009c46c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c470:;
    {
        cpu->r[3] = 0x0000851cu;
    }
L_0009c474:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c478:;
    {
        cpu->r[3] = 0x00008520u;
    }
L_0009c47c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009c480:;
    {
        cpu->r[3] = 0x00008524u;
    }
L_0009c484:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c488:;
    {
        cpu->r[3] = 0x00008530u;
    }
L_0009c48c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c490:;
    {
        cpu->r[3] = 0x00008534u;
    }
L_0009c494:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c498:;
    {
        cpu->r[14] = 0x0009c49cu; fn_0009b4d0(cpu);
    }
L_0009c49c:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_0009c4a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009c4a4:;
    {
        cpu->r[2] = 0x00001cacu;
    }
L_0009c4a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_0009c4ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009c4b4u + + 0x50u);
    }
L_0009c4b0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c4b4:;
    {
        cpu->r[3] = 0x0000856cu;
    }
L_0009c4b8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009c4bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0009c4c0:;
    {
        cpu->r[2] = rd32(0x0009c4c8u + + 0x58u);
    }
L_0009c4c4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c4c8:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_0009c4cc:;
    {
        wr8(cpu->r[5] + + 0x404u, cpu->r[4]);
    }
L_0009c4d0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009c4d4:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009c4d8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c4dc:;
    {
        cpu->r[2] = 0x0000853cu;
    }
L_0009c4e0:;
    {
        cpu->r[3] = 0x00008538u;
    }
L_0009c4e4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x404u, cpu->r[1]);
        }
    }
L_0009c4e8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c4ec:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0009c4f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009c4f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009c4f8:;
    {
        wr8(cpu->r[5] + + 0x405u, cpu->r[3]);
    }
L_0009c4fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0009c500:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009c504u)) return;
    }
}

/* _ZN4GameC2EPciiiii @ 0009c524 (arm) */
void fn_0009c524(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009c524:;
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
L_0009c528:;
    {
        cpu->r[8] = rd32(0x0009c530u + + 0x9b4u);
    }
L_0009c52c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009c530:;
    {
        cpu->r[0] = rd32(0x0009c538u + + 0x9b0u);
    }
L_0009c534:;
    {
        cpu->r[8] = add_flags(cpu, 0x0009c53cu, cpu->r[8], 0, 0);
    }
L_0009c538:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0009c53c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009c540:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00001500u, 0, 0);
    }
L_0009c544:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[0]);
    }
L_0009c548:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000015u, 0, 0);
    }
L_0009c54c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0009c550:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0009c554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000000a0u, 0, 0);
    }
L_0009c558:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0009c55c:;
    {
        cpu->r[2] = 0x000014f8u;
    }
L_0009c560:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_0009c564:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0009c568:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0009c56c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0009c570:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_0009c574:;
    {
        wr32(cpu->r[5] + + 0x42cu, cpu->r[3]);
    }
L_0009c578:;
    {
        wr32(cpu->r[5] + + 0x430u, cpu->r[3]);
    }
L_0009c57c:;
    {
        wr32(cpu->r[5] + + 0x434u, cpu->r[3]);
    }
L_0009c580:;
    {
        wr32(cpu->r[5] + + 0x438u, cpu->r[3]);
    }
L_0009c584:;
    {
        wr32(cpu->r[5] + + 0x43cu, cpu->r[3]);
    }
L_0009c588:;
    {
        wr32(cpu->r[5] + + 0x440u, cpu->r[3]);
    }
L_0009c58c:;
    {
        wr32(cpu->r[5] + + 0x444u, cpu->r[3]);
    }
L_0009c590:;
    {
        wr32(cpu->r[5] + + 0x448u, cpu->r[3]);
    }
L_0009c594:;
    {
        wr32(cpu->r[5] + + 0x44cu, cpu->r[3]);
    }
L_0009c598:;
    {
        wr32(cpu->r[5] + + 0x450u, cpu->r[3]);
    }
L_0009c59c:;
    {
        wr32(cpu->r[5] + + 0x454u, cpu->r[3]);
    }
L_0009c5a0:;
    {
        wr32(cpu->r[5] + + 0x458u, cpu->r[3]);
    }
L_0009c5a4:;
    {
        wr32(cpu->r[5] + + 0x45cu, cpu->r[3]);
    }
L_0009c5a8:;
    {
        wr32(cpu->r[5] + + 0x460u, cpu->r[3]);
    }
L_0009c5ac:;
    {
        wr32(cpu->r[5] + + 0x464u, cpu->r[3]);
    }
L_0009c5b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0009c5b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000032u, 0, 0);
    }
L_0009c5b8:;
    {
        cpu->r[14] = 0x0009c5bcu; fn_000931e4(cpu);
    }
L_0009c5bc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000190u, 1, 1);
    }
L_0009c5c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c5b0;
        }
    }
L_0009c5c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00001680u, 0, 0);
    }
L_0009c5c8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009c5cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002du, 0, 0);
    }
L_0009c5d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009c5d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000032u, 0, 0);
    }
L_0009c5d8:;
    {
        cpu->r[14] = 0x0009c5dcu; fn_000931e4(cpu);
    }
L_0009c5dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_0009c5e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c5d0;
        }
    }
L_0009c5e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_0009c5e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009c5ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x0000003du, 0, 0);
    }
L_0009c5f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_0009c5f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000032u, 0, 0);
    }
L_0009c5f8:;
    {
        cpu->r[14] = 0x0009c5fcu; fn_000931e4(cpu);
    }
L_0009c5fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000190u, 1, 1);
    }
L_0009c600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c5f0;
        }
    }
L_0009c604:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00001b80u, 0, 0);
    }
L_0009c608:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009c60c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000du, 0, 0);
    }
L_0009c610:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009c614:;
    {
        cpu->r[14] = 0x0009c618u; fn_000931e4(cpu);
    }
L_0009c618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001c00u, 0, 0);
    }
L_0009c61c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009c620:;
    {
        cpu->r[14] = 0x0009c624u; fn_0012bf2c(cpu);
    }
L_0009c624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006700u, 0, 0);
    }
L_0009c628:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_0009c62c:;
    {
        cpu->r[14] = 0x0009c630u; fn_000fb7dc(cpu);
    }
L_0009c630:;
    {
        cpu->r[2] = rd32(0x0009c638u + + 0x8b4u);
    }
L_0009c634:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_0009c638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000c0u, 0, 0);
    }
L_0009c63c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009c640:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009c644:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0009c648:;
    {
        cpu->r[14] = 0x0009c64cu; fn_001526e0(cpu);
    }
L_0009c64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008700u, 0, 0);
    }
L_0009c650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000570u, 0, 0);
    }
L_0009c654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_0009c658:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0009c65c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_0009c660:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_0009c664:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_0009c668:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_0009c66c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[4]);
    }
L_0009c670:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[4]);
    }
L_0009c674:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[4]);
    }
L_0009c678:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[4]);
    }
L_0009c67c:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[4]);
    }
L_0009c680:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[4]);
    }
L_0009c684:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[4]);
    }
L_0009c688:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_0009c68c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009c690:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c65c;
        }
    }
L_0009c694:;
    {
        cpu->r[12] = rd32(0x0009c69cu + + 0x854u);
    }
L_0009c698:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0009c69c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0009c6a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x0001e400u, 0, 0);
    }
L_0009c6a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0009c6a8:;
    {
        cpu->r[14] = 0x0000e774u;
    }
L_0009c6ac:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_0009c6b0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0009c6b4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_0009c6b8:;
    {
        cpu->r[1] = 0x0000e778u;
    }
L_0009c6bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009c6c0:;
    {
        cpu->r[0] = 0x0000e784u;
    }
L_0009c6c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0009c6c8:;
    {
        cpu->r[12] = 0x0000e78cu;
    }
L_0009c6cc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009c6d0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0009c6d4:;
    {
        cpu->r[3] = rd32(0x0009c6dcu + + 0x818u);
    }
L_0009c6d8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_0009c6dc:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[4]);
    }
L_0009c6e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009c6e4:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_0009c6e8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000006u, 1, 1);
    }
L_0009c6ec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009c6f0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_0009c6f4:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0009c6f8:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0009c6fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009c700:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009c704:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009c708:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000370u, 0, 0);
    }
L_0009c70c:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[12]);
    }
L_0009c710:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[12]);
    }
L_0009c714:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], 0x00000380u, 0, 0);
    }
L_0009c718:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009c71c:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_0009c720:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[14]);
    }
L_0009c724:;
    {
        cpu->r[3] = 0x00001d72u;
    }
L_0009c728:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_0009c72c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009c730:;
    {
        wr32(cpu->r[7], cpu->r[12]);
    }
L_0009c734:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009c738:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c73c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[11]);
    }
L_0009c740:;
    {
        cpu->r[14] = 0x0009c744u; fn_00097a08(cpu);
    }
L_0009c744:;
    {
        cpu->r[2] = 0x000082dcu;
    }
L_0009c748:;
    {
        cpu->r[3] = 0x0000e7a9u;
    }
L_0009c74c:;
    {
        wr32(cpu->r[5] + + 0x4c4u, cpu->r[10]);
    }
L_0009c750:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c754:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_0009c758:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009c75c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c760:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c764:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0009c768:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c76c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c770:;
    {
        cpu->r[2] = 0x00001bbfu;
    }
L_0009c774:;
    {
        wr8(cpu->r[5] + + 0x4b7u, cpu->r[4]);
    }
L_0009c778:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009c77c:;
    {
        wr8(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_0009c780:;
    {
        wr32(cpu->r[5] + + 0x4e8u, cpu->r[4]);
    }
L_0009c784:;
    {
        wr32(cpu->r[5] + + 0x4ecu, cpu->r[4]);
    }
L_0009c788:;
    {
        wr32(cpu->r[5] + + 0x4f0u, cpu->r[4]);
    }
L_0009c78c:;
    {
        wr32(cpu->r[5] + + 0x4f4u, cpu->r[4]);
    }
L_0009c790:;
    {
        wr32(cpu->r[5] + + 0x4d0u, cpu->r[4]);
    }
L_0009c794:;
    {
        wr32(cpu->r[5] + + 0x4d4u, cpu->r[4]);
    }
L_0009c798:;
    {
        wr32(cpu->r[5] + + 0x4d8u, cpu->r[4]);
    }
L_0009c79c:;
    {
        wr8(cpu->r[5] + + 0x41cu, cpu->r[4]);
    }
L_0009c7a0:;
    {
        wr8(cpu->r[5] + + 0x41du, cpu->r[4]);
    }
L_0009c7a4:;
    {
        wr8(cpu->r[5] + + 0x41eu, cpu->r[4]);
    }
L_0009c7a8:;
    {
        wr8(cpu->r[5] + + 0x41fu, cpu->r[4]);
    }
L_0009c7ac:;
    {
        wr32(cpu->r[5] + + 0x4dcu, cpu->r[4]);
    }
L_0009c7b0:;
    {
        cpu->r[14] = 0x0009c7b4u; fn_0018ba6c(cpu);
    }
L_0009c7b4:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009c7b8:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_0009c7bc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0009c7c0:;
    {
        cpu->r[2] = 0x00000096u;
    }
L_0009c7c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009c7c8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000032u, 1, 0);
    }
L_0009c7cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009c7d0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c7d4:;
    {
        cpu->r[14] = 0x0009c7d8u; fn_000eab24(cpu);
    }
L_0009c7d8:;
    {
        cpu->r[3] = 0x00001becu;
    }
L_0009c7dc:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c7e0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c7e4:;
    {
        cpu->r[14] = 0x0009c7e8u; fn_0018ba6c(cpu);
    }
L_0009c7e8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009c7ec:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009c7f0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009c7f4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009c7f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009c7fc:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c800:;
    {
        cpu->r[14] = 0x0009c804u; fn_000eab24(cpu);
    }
L_0009c804:;
    {
        cpu->r[3] = 0x00001bf0u;
    }
L_0009c808:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c80c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c810:;
    {
        cpu->r[14] = 0x0009c814u; fn_0018ba6c(cpu);
    }
L_0009c814:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009c818:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009c81c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009c820:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009c824:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009c828:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c82c:;
    {
        cpu->r[14] = 0x0009c830u; fn_000eab24(cpu);
    }
L_0009c830:;
    {
        cpu->r[3] = 0x00001bf4u;
    }
L_0009c834:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c838:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c83c:;
    {
        cpu->r[14] = 0x0009c840u; fn_0018ba6c(cpu);
    }
L_0009c840:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_0009c844:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009c848:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009c84c:;
    {
        cpu->r[12] = 0x00000096u;
    }
L_0009c850:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009c854:;
    {
        cpu->r[12] = 0x0000017cu;
    }
L_0009c858:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009c85c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c860:;
    {
        cpu->r[14] = 0x0009c864u; fn_000eab24(cpu);
    }
L_0009c864:;
    {
        cpu->r[3] = 0x00001bf8u;
    }
L_0009c868:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c86c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c870:;
    {
        cpu->r[14] = 0x0009c874u; fn_0018ba6c(cpu);
    }
L_0009c874:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009c878:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009c87c:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009c880:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_0009c884:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009c888:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000096u, 1, 0);
    }
L_0009c88c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009c890:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c894:;
    {
        cpu->r[14] = 0x0009c898u; fn_000eab24(cpu);
    }
L_0009c898:;
    {
        cpu->r[3] = 0x00001bfcu;
    }
L_0009c89c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c8a0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c8a4:;
    {
        cpu->r[14] = 0x0009c8a8u; fn_0018ba6c(cpu);
    }
L_0009c8a8:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_0009c8ac:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009c8b0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009c8b4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009c8b8:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_0009c8bc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0009c8c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009c8c4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c8c8:;
    {
        cpu->r[14] = 0x0009c8ccu; fn_000eab24(cpu);
    }
L_0009c8cc:;
    {
        cpu->r[3] = 0x00001c00u;
    }
L_0009c8d0:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c8d4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c8d8:;
    {
        cpu->r[14] = 0x0009c8dcu; fn_0018ba6c(cpu);
    }
L_0009c8dc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009c8e0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009c8e4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009c8e8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0009c8ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0009c8f0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0009c8f4:;
    {
        cpu->r[14] = 0x0009c8f8u; fn_000eab24(cpu);
    }
L_0009c8f8:;
    {
        cpu->r[3] = 0x00001c04u;
    }
L_0009c8fc:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0009c900:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0009c904:;
    {
        cpu->r[14] = 0x0009c908u; fn_0018ba6c(cpu);
    }
L_0009c908:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0009c90c:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0009c910:;
    {
        cpu->r[3] = 0x00000118u;
    }
L_0009c914:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_0009c918:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009c91c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000096u, 1, 0);
    }
L_0009c920:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009c924:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0009c928:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009c92c:;
    {
        cpu->r[14] = 0x0009c930u; fn_000eab24(cpu);
    }
L_0009c930:;
    {
        cpu->r[3] = 0x00001c08u;
    }
L_0009c934:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009c938:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009c93c:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_0009c940:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c944:;
    {
        cpu->r[3] = 0x0000869cu;
    }
L_0009c948:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c94c:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_0009c950:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c954:;
    {
        cpu->r[3] = 0x000086a4u;
    }
L_0009c958:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009c95c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0009c960:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0009c964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008c00u, 0, 0);
    }
L_0009c968:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000032u, 1, 1);
    }
L_0009c96c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009c970:;
    {
        wr8(cpu->r[3] + + 0x79u, cpu->r[1]);
    }
L_0009c974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009c95c;
        }
    }
L_0009c978:;
    {
        cpu->r[1] = 0x00001d71u;
    }
L_0009c97c:;
    {
        cpu->r[0] = 0x00001d34u;
    }
L_0009c980:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_0009c984:;
    {
        cpu->r[3] = 0x00001d70u;
    }
L_0009c988:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c98c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0009c990:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0009c994:;
    {
        cpu->r[0] = 0x00001be4u;
    }
L_0009c998:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009c99c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009c9a0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0009c9a4:;
    {
        cpu->r[0] = 0x00001be8u;
    }
L_0009c9a8:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_0009c9ac:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0009c9b0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0009c9b4:;
    {
        cpu->r[0] = 0x00008c79u;
    }
L_0009c9b8:;
    {
        wr8(cpu->r[5] + + 0x424u, cpu->r[3]);
    }
L_0009c9bc:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0009c9c0:;
    {
        cpu->r[0] = 0x00001bccu;
    }
L_0009c9c4:;
    {
        wr32(cpu->r[5] + + 0x49cu, cpu->r[2]);
    }
L_0009c9c8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0009c9cc:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_0009c9d0:;
    {
        wr32(cpu->r[5] + + 0x4e0u, cpu->r[3]);
    }
L_0009c9d4:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0009c9d8:;
    {
        cpu->r[1] = 0x00001bd0u;
    }
L_0009c9dc:;
    {
        wr8(cpu->r[5] + + 0x4ccu, cpu->r[2]);
    }
L_0009c9e0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0009c9e4:;
    {
        cpu->r[1] = 0x00001ca8u;
    }
L_0009c9e8:;
    {
        wr8(cpu->r[6] + + 0x35u, cpu->r[2]);
    }
L_0009c9ec:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c9f0:;
    {
        cpu->r[1] = 0x00001d30u;
    }
L_0009c9f4:;
    {
        wr8(cpu->r[6] + + 0x36u, cpu->r[2]);
    }
L_0009c9f8:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009c9fc:;
    {
        cpu->r[1] = 0x00001d31u;
    }
L_0009ca00:;
    {
        wr8(cpu->r[6] + + 0x37u, cpu->r[2]);
    }
L_0009ca04:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0009ca08:;
    {
        cpu->r[1] = 0x00000091u;
    }
L_0009ca0c:;
    {
        wr8(cpu->r[6] + + 0x38u, cpu->r[2]);
    }
L_0009ca10:;
    {
        wr32(cpu->r[5] + + 0x4a0u, cpu->r[1]);
    }
L_0009ca14:;
    {
        cpu->r[1] = 0x0000008eu;
    }
L_0009ca18:;
    {
        wr8(cpu->r[6] + + 0x39u, cpu->r[2]);
    }
L_0009ca1c:;
    {
        wr32(cpu->r[5] + + 0x4a4u, cpu->r[1]);
    }
L_0009ca20:;
    {
        wr8(cpu->r[6] + + 0x3au, cpu->r[2]);
    }
L_0009ca24:;
    {
        wr8(cpu->r[6] + + 0x3bu, cpu->r[2]);
    }
L_0009ca28:;
    {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[2]);
    }
L_0009ca2c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4] + cpu->r[5]; cpu->r[0] = v;
    }
L_0009ca30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009ca34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_0009ca38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_0009ca3c:;
    {
        cpu->r[14] = 0x0009ca40u; fn_000930e0(cpu);
    }
L_0009ca40:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_0009ca44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ca2c;
        }
    }
L_0009ca48:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009ca4c:;
    {
        cpu->r[14] = 0x0009ca50u; fn_000930e0(cpu);
    }
L_0009ca50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009ca54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0009ca58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0009ca5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008600u, 0, 0);
    }
L_0009ca60:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005eu, 1, 1);
    }
L_0009ca64:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_0009ca68:;
    {
        wr16(cpu->r[2] + + 0xf0u, cpu->r[10]);
    }
L_0009ca6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ca54;
        }
    }
L_0009ca70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4e0u);
    }
L_0009ca74:;
    {
        cpu->r[2] = 0x000082e4u;
    }
L_0009ca78:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_0009ca7c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009ca80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x0001e000u, 0, 0);
    }
L_0009ca84:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009ca88:;
    {
        wr32(cpu->r[5] + + 0x4c8u, cpu->r[3]);
    }
L_0009ca8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009ca90:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009ca94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009ca98:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_0009ca9c:;
    {
        wr8(cpu->r[5] + + 0x481u, cpu->r[4]);
    }
L_0009caa0:;
    {
        wr8(cpu->r[5] + + 0x480u, cpu->r[4]);
    }
L_0009caa4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0009caa8:;
    {
        cpu->r[14] = 0x0009caacu; imp_memset(cpu); /* memset */
    }
L_0009caac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cab0:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_0009cab4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000015u, 0, 0);
    }
L_0009cab8:;
    {
        wr32(cpu->r[7] + + 0x24cu, cpu->r[4]);
    }
L_0009cabc:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_0009cac0:;
    {
        wr32(cpu->r[7] + + 0x250u, cpu->r[4]);
    }
L_0009cac4:;
    {
        wr32(cpu->r[7] + + 0x254u, cpu->r[4]);
    }
L_0009cac8:;
    {
        wr32(cpu->r[7] + + 0x258u, cpu->r[4]);
    }
L_0009cacc:;
    {
        wr32(cpu->r[7] + + 0x25cu, cpu->r[4]);
    }
L_0009cad0:;
    {
        wr32(cpu->r[7] + + 0x260u, cpu->r[4]);
    }
L_0009cad4:;
    {
        wr32(cpu->r[7] + + 0x264u, cpu->r[4]);
    }
L_0009cad8:;
    {
        wr32(cpu->r[7] + + 0x268u, cpu->r[4]);
    }
L_0009cadc:;
    {
        cpu->r[14] = 0x0009cae0u; imp_memset(cpu); /* memset */
    }
L_0009cae0:;
    {
        cpu->r[3] = 0x000063c0u;
    }
L_0009cae4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009cae8:;
    {
        cpu->r[14] = 0x0009caecu; fn_00095fdc(cpu);
    }
L_0009caec:;
    {
        cpu->r[3] = 0x00005facu;
    }
L_0009caf0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0009caf4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009caf8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009cafc:;
    {
        cpu->r[3] = 0x00005fb4u;
    }
L_0009cb00:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009cb04:;
    {
        cpu->r[3] = 0x00005fa8u;
    }
L_0009cb08:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0009cb0c:;
    {
        cpu->r[3] = 0x00005fb0u;
    }
L_0009cb10:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009cb14:;
    {
        cpu->r[3] = 0x00005fb8u;
    }
L_0009cb18:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009cb1c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009cb20:;
    {
        cpu->r[3] = 0x000063c1u;
    }
L_0009cb24:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009cb28:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0009cb2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006100u, 0, 0);
    }
L_0009cb30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_0009cb34:;
    {
        cpu->r[14] = 0x0009cb38u; imp_memset(cpu); /* memset */
    }
L_0009cb38:;
    {
        cpu->r[1] = 0x00005f6cu;
    }
L_0009cb3c:;
    {
        cpu->r[2] = rd32(0x0009cb44u + + 0x3b4u);
    }
L_0009cb40:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0009cb44:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb48:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_0009cb4c:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb50:;
    {
        cpu->r[1] = 0x00005fa4u;
    }
L_0009cb54:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009cb58:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb5c:;
    {
        cpu->r[1] = 0x000067c3u;
    }
L_0009cb60:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb64:;
    {
        cpu->r[1] = 0x00006738u;
    }
L_0009cb68:;
    {
        wr8(cpu->r[2], cpu->r[4]);
    }
L_0009cb6c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb70:;
    {
        cpu->r[1] = 0x00005f68u;
    }
L_0009cb74:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb78:;
    {
        cpu->r[1] = 0x00005f70u;
    }
L_0009cb7c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb80:;
    {
        cpu->r[1] = 0x00008528u;
    }
L_0009cb84:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb88:;
    {
        cpu->r[1] = 0x0000852cu;
    }
L_0009cb8c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb90:;
    {
        cpu->r[1] = 0x00005f9cu;
    }
L_0009cb94:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cb98:;
    {
        cpu->r[1] = 0x00005fa0u;
    }
L_0009cb9c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0009cba0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0009cba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0009cba8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_0009cbac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0009cbb0:;
    {
        wr32(cpu->r[2] + + 0x3cu, cpu->r[6]);
    }
L_0009cbb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009cba0;
        }
    }
L_0009cbb8:;
    {
        cpu->r[3] = 0x0000675cu;
    }
L_0009cbbc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009cbc0:;
    {
        cpu->r[0] = 0x0000e26eu;
    }
L_0009cbc4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cbc8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cbcc:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_0009cbd0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009cbd4:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_0009cbd8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cbdc:;
    {
        cpu->r[3] = 0x0000675eu;
    }
L_0009cbe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009cbe4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cbe8:;
    {
        cpu->r[3] = 0x0000675fu;
    }
L_0009cbec:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cbf0:;
    {
        cpu->r[3] = 0x00006781u;
    }
L_0009cbf4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cbf8:;
    {
        cpu->r[3] = 0x00006780u;
    }
L_0009cbfc:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cc00:;
    {
        cpu->r[3] = 0x00006783u;
    }
L_0009cc04:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cc08:;
    {
        cpu->r[3] = 0x00006782u;
    }
L_0009cc0c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cc10:;
    {
        cpu->r[3] = 0x00006784u;
    }
L_0009cc14:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cc18:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_0009cc1c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cc20:;
    {
        cpu->r[14] = 0x0009cc24u; imp_memset(cpu); /* memset */
    }
L_0009cc24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x000002b0u, 0, 0);
    }
L_0009cc28:;
    {
        cpu->r[0] = 0x0000e2b2u;
    }
L_0009cc2c:;
    {
        wr32(cpu->r[7] + + 0x290u, cpu->r[4]);
    }
L_0009cc30:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009cc34:;
    {
        wr32(cpu->r[7] + + 0x294u, cpu->r[4]);
    }
L_0009cc38:;
    {
        wr32(cpu->r[7] + + 0x298u, cpu->r[4]);
    }
L_0009cc3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cc40:;
    {
        wr32(cpu->r[7] + + 0x29cu, cpu->r[4]);
    }
L_0009cc44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009cc48:;
    {
        wr32(cpu->r[7] + + 0x2a0u, cpu->r[4]);
    }
L_0009cc4c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009cc50:;
    {
        wr32(cpu->r[7] + + 0x2a4u, cpu->r[4]);
    }
L_0009cc54:;
    {
        wr32(cpu->r[7] + + 0x2a8u, cpu->r[4]);
    }
L_0009cc58:;
    {
        wr32(cpu->r[7] + + 0x2acu, cpu->r[4]);
    }
L_0009cc5c:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_0009cc60:;
    {
        cpu->r[14] = 0x0009cc64u; imp_memset(cpu); /* memset */
    }
L_0009cc64:;
    {
        cpu->r[0] = 0x0000e3b2u;
    }
L_0009cc68:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009cc6c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cc70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009cc74:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009cc78:;
    {
        cpu->r[14] = 0x0009cc7cu; imp_memset(cpu); /* memset */
    }
L_0009cc7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009cc80:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cc84:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009cc88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x000000b2u, 0, 0);
    }
L_0009cc8c:;
    {
        cpu->r[14] = 0x0009cc90u; imp_memset(cpu); /* memset */
    }
L_0009cc90:;
    {
        cpu->r[0] = 0x0000e5b2u;
    }
L_0009cc94:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0009cc98:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009cc9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0009cca0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0009cca4:;
    {
        cpu->r[14] = 0x0009cca8u; imp_memset(cpu); /* memset */
    }
L_0009cca8:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_0009ccac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009ccb0:;
    {
        wr32(cpu->r[5] + + 0xc8u, cpu->r[4]);
    }
L_0009ccb4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccb8:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_0009ccbc:;
    {
        wr32(cpu->r[5] + + 0x3f0u, cpu->r[4]);
    }
L_0009ccc0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccc4:;
    {
        cpu->r[3] = 0x00001500u;
    }
L_0009ccc8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0009cccc:;
    {
        cpu->r[3] = 0x00001d32u;
    }
L_0009ccd0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccd4:;
    {
        cpu->r[3] = 0x000084f1u;
    }
L_0009ccd8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccdc:;
    {
        cpu->r[3] = 0x000084fcu;
    }
L_0009cce0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cce4:;
    {
        cpu->r[3] = 0x000084f8u;
    }
L_0009cce8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccec:;
    {
        cpu->r[3] = 0x000084f4u;
    }
L_0009ccf0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccf4:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_0009ccf8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ccfc:;
    {
        cpu->r[3] = 0x0000850cu;
    }
L_0009cd00:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cd04:;
    {
        cpu->r[3] = 0x00008510u;
    }
L_0009cd08:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cd0c:;
    {
        cpu->r[3] = 0x00001504u;
    }
L_0009cd10:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009cd14:;
    {
        cpu->r[3] = 0x00001508u;
    }
L_0009cd18:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009cd1c:;
    {
        cpu->r[3] = 0x00008545u;
    }
L_0009cd20:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cd24:;
    {
        cpu->r[3] = 0x00000019u;
    }
L_0009cd28:;
    {
        wr32(cpu->r[5] + + 0x418u, cpu->r[3]);
    }
L_0009cd2c:;
    {
        cpu->r[14] = 0x0009cd30u; fn_0009b4d0(cpu);
    }
L_0009cd30:;
    {
        cpu->r[2] = 0x000014fcu;
    }
L_0009cd34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00008600u, 0, 0);
    }
L_0009cd38:;
    {
        wr32(cpu->r[3] + + 0xe4u, cpu->r[4]);
    }
L_0009cd3c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_0009cd40:;
    {
        cpu->r[2] = 0x00001c38u;
    }
L_0009cd44:;
    {
        wr32(cpu->r[5] + + 0x420u, cpu->r[0]);
    }
L_0009cd48:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cd4c:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_0009cd50:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cd54:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_0009cd58:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cd5c:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0009cd60:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cd64:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0009cd68:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cd6c:;
    {
        cpu->r[2] = 0x00001c54u;
    }
L_0009cd70:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd74:;
    {
        cpu->r[2] = 0x00001c58u;
    }
L_0009cd78:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd7c:;
    {
        cpu->r[2] = 0x00001c5cu;
    }
L_0009cd80:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd84:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_0009cd88:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd8c:;
    {
        cpu->r[2] = 0x00001c6cu;
    }
L_0009cd90:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd94:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_0009cd98:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cd9c:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_0009cda0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cda4:;
    {
        cpu->r[2] = 0x00001c64u;
    }
L_0009cda8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdac:;
    {
        cpu->r[2] = 0x00001c80u;
    }
L_0009cdb0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdb4:;
    {
        cpu->r[2] = 0x00001c74u;
    }
L_0009cdb8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdbc:;
    {
        cpu->r[2] = 0x00001c78u;
    }
L_0009cdc0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdc4:;
    {
        cpu->r[2] = 0x00001c7cu;
    }
L_0009cdc8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdcc:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_0009cdd0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdd4:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_0009cdd8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cddc:;
    {
        cpu->r[2] = 0x00001c84u;
    }
L_0009cde0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cde4:;
    {
        cpu->r[2] = 0x00001c88u;
    }
L_0009cde8:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cdec:;
    {
        cpu->r[2] = 0x00001c8cu;
    }
L_0009cdf0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009cdf4:;
    {
        cpu->r[2] = 0x00001c98u;
    }
L_0009cdf8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cdfc:;
    {
        cpu->r[2] = 0x00008cacu;
    }
L_0009ce00:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009ce04:;
    {
        cpu->r[2] = 0x00008cb0u;
    }
L_0009ce08:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009ce0c:;
    {
        cpu->r[2] = 0x00008cb4u;
    }
L_0009ce10:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009ce14:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_0009ce18:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009ce1c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_0009ce20:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009ce24:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_0009ce28:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009ce2c:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_0009ce30:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009ce34:;
    {
        wr32(cpu->r[3] + + 0xe8u, cpu->r[4]);
    }
L_0009ce38:;
    {
        wr32(cpu->r[3] + + 0xecu, cpu->r[4]);
    }
L_0009ce3c:;
    {
        cpu->r[3] = 0x00008514u;
    }
L_0009ce40:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce44:;
    {
        cpu->r[3] = 0x00008518u;
    }
L_0009ce48:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce4c:;
    {
        cpu->r[3] = 0x0000851cu;
    }
L_0009ce50:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce54:;
    {
        cpu->r[3] = 0x00008520u;
    }
L_0009ce58:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_0009ce5c:;
    {
        cpu->r[3] = 0x00008524u;
    }
L_0009ce60:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce64:;
    {
        cpu->r[3] = 0x00008530u;
    }
L_0009ce68:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce6c:;
    {
        cpu->r[3] = 0x00008534u;
    }
L_0009ce70:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce74:;
    {
        cpu->r[14] = 0x0009ce78u; fn_0009b4d0(cpu);
    }
L_0009ce78:;
    {
        cpu->r[3] = 0x0000e219u;
    }
L_0009ce7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009ce80:;
    {
        cpu->r[2] = 0x00001cacu;
    }
L_0009ce84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_0009ce88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009ce90u + + 0x50u);
    }
L_0009ce8c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ce90:;
    {
        cpu->r[3] = 0x0000856cu;
    }
L_0009ce94:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0009ce98:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0009ce9c:;
    {
        cpu->r[2] = rd32(0x0009cea4u + + 0x58u);
    }
L_0009cea0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009cea4:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_0009cea8:;
    {
        wr8(cpu->r[5] + + 0x404u, cpu->r[4]);
    }
L_0009ceac:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0009ceb0:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009ceb4:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0009ceb8:;
    {
        cpu->r[2] = 0x0000853cu;
    }
L_0009cebc:;
    {
        cpu->r[3] = 0x00008538u;
    }
L_0009cec0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x404u, cpu->r[1]);
        }
    }
L_0009cec4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0009cec8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0009cecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009ced0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ced4:;
    {
        wr8(cpu->r[5] + + 0x405u, cpu->r[3]);
    }
L_0009ced8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0009cedc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009cee0u)) return;
    }
}

/* _ZN10FileHeader10LoadHeaderEP10IFileReadIj @ 0009cf00 (arm) */
void fn_0009cf00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009cf00:;
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
L_0009cf04:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009cf08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009cf0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009cf10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0009cf14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0009cf18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009cf24;
        }
    }
L_0009cf1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009cf20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009cf24u)) return;
    }
L_0009cf24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009cf28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009cf2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009cf30:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009cf34:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x2u;
        wr16(cpu->r[1] + - 0x2u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_0009cf38:;
    {
        cpu->r[14] = 0x0009cf3cu; fn_000fc154(cpu);
    }
L_0009cf3c:;
    {
        cpu->r[8] = rd16(cpu->r[13] + + 0x6u);
    }
L_0009cf40:;
    {
        cpu->r[3] = 0x000003feu;
    }
L_0009cf44:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0009cf48:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_0009cf4c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0009cf50:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009cf1c;
        }
    }
L_0009cf54:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_0009cf58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009cf5c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0009cf60:;
    {
        cpu->r[10] = cpu->r[13];
    }
L_0009cf64:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_0009cf68:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0009cf6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009cf70:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0009cf74:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009cf78:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0009cf7c:;
    {
        cpu->r[14] = 0x0009cf80u; fn_000fc154(cpu);
    }
L_0009cf80:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0009cf84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_0009cf88:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_0009cf8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0009cf90:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_0009cf94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009cf6c;
        }
    }
L_0009cf98:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_0009cf9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009cfa0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[11]);
    }
L_0009cfa4:;
    {
        goto L_0009cf1c;
    }
}

/* _ZN4Game21LoadConfig_MapOffsetsEP10IFileReadI @ 0009cfa8 (arm) */
void fn_0009cfa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009cfa8:;
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
L_0009cfac:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_0009cfb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0009cfb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0009cfb8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0009cfbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009cfc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009cfc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009cfc8:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x2u;
        wr16(cpu->r[3] + - 0x2u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_0009cfcc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009cfd0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009cfd4:;
    {
        cpu->r[14] = 0x0009cfd8u; fn_000fc154(cpu);
    }
L_0009cfd8:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0x1eu);
    }
L_0009cfdc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009cfe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d0ac;
        }
    }
L_0009cfe4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0009cfe8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0009cfec:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0009cff0:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x0009cff8u + + 0x214u);
    }
L_0009cff4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009cff8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009cffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d000:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_0009d004:;
    {
        cpu->r[14] = 0x0009d008u; fn_000fc154(cpu);
    }
L_0009d008:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_0009d00c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009d010:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009d014:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d018:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d01c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_0009d020:;
    {
        vfp_vdiv(cpu, 16, 15, 20);
    }
L_0009d024:;
    {
        cpu->r[14] = 0x0009d028u; fn_000fc154(cpu);
    }
L_0009d028:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_0009d02c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009d030:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d034:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d038:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_0009d03c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009d040:;
    {
        vfp_vdiv(cpu, 19, 15, 20);
    }
L_0009d044:;
    {
        cpu->r[14] = 0x0009d048u; fn_000fc154(cpu);
    }
L_0009d048:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_0009d04c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d050:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009d054:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d058:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_0009d05c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009d060:;
    {
        vfp_vdiv(cpu, 18, 15, 20);
    }
L_0009d064:;
    {
        cpu->r[14] = 0x0009d068u; fn_000fc154(cpu);
    }
L_0009d068:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_0009d06c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x430u);
    }
L_0009d070:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x434u);
    }
L_0009d074:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0009d078:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009d07c:;
    {
        vfp_vdiv(cpu, 17, 15, 20);
    }
L_0009d080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d0b8;
        }
    }
L_0009d084:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0009d088:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0009d08c:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0009d090:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0009d094:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_0009d098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0009d09c:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[3]);
    }
L_0009d0a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0009d0a4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[8], 1, 1);
    }
L_0009d0a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009cff4;
        }
    }
L_0009d0ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0009d0b0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_0009d0b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009d0b8u)) return;
    }
L_0009d0b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0009d0bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0009d0c0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_0009d0c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009d0c8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_0009d0cc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0009d0d0:;
    {
        add_flags(cpu, cpu->r[2], 0xf0000001u, 0, 1);
    }
L_0009d0d4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009d10c;
        }
    }
L_0009d0d8:;
    {
        cpu->r[2] = (~0x0000000fu);
    }
L_0009d0dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009d0e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0009d0e4:;
    {
        cpu->r[14] = 0x0009d0e8u; fn_00097b58(cpu);
    }
L_0009d0e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0009d0ec:;
    {
        uint32_t v = cpu->r[3] & ~ 0x0000000fu; cpu->r[3] = v;
    }
L_0009d0f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0009d0f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0009d0f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d0fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0009d100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0009d104:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0009d108:;
    {
        goto L_0009d12c;
    }
L_0009d10c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009d110:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009d0d8;
        }
    }
L_0009d114:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009d118:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
        }
    }
L_0009d11c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000010u;
        }
    }
L_0009d120:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
        }
    }
L_0009d124:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[2] = v;
        }
    }
L_0009d128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d0dc;
        }
    }
L_0009d12c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0009d130:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 4u, &shc); cpu->r[9] = v;
    }
L_0009d134:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0009d138:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0009d13c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_0009d140:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009d1a4;
        }
    }
L_0009d144:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0009d148:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0009d14c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009d150:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0009d154:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d158:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0009d15c:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0009d160:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009d164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_0009d168:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_0009d16c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_0009d170:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_0009d174:;
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
L_0009d178:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0009d17c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d164;
        }
    }
L_0009d180:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009d184:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0009d188:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d18c:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_0009d190:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009d194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0009d198:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009d19c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0009d1a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0009d1a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_0009d1a8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0009d1ac:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0009d1b0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0009d1b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0009d1b8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0009d1bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
        }
    }
L_0009d1c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x434u);
    }
L_0009d1c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
        }
    }
L_0009d1c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~shifter(cpu->r[2], 3, 4u, &shc));
        }
    }
L_0009d1cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
        }
    }
L_0009d1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009d1d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d1ec;
        }
    }
L_0009d1d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0009d1dc:;
    {
        uint32_t v = cpu->r[1] & ~ 0x0000000fu; cpu->r[1] = v;
    }
L_0009d1e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0009d1e4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009d204;
        }
    }
L_0009d1e8:;
    {
        cpu->r[14] = 0x0009d1ecu; fn_002082a8(cpu);
    }
L_0009d1ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d1f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009d1f4:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[10]);
    }
L_0009d1f8:;
    {
        wr32(cpu->r[4] + + 0x42cu, cpu->r[2]);
    }
L_0009d1fc:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
    }
L_0009d200:;
    {
        goto L_0009d0a0;
    }
L_0009d204:;
    {
        cpu->r[14] = 0x0009d208u; fn_0018ba20(cpu);
    }
L_0009d208:;
    {
        goto L_0009d1ec;
    }
}

/* sub_0009d210 @ 0009d210 (arm) */
void fn_0009d210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009d210:;
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
L_0009d214:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0009d218:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0009d21c:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0009d220:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_0009d224:;
    {
        cpu->r[3] = 0x00005555u;
    }
L_0009d228:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1555u << 16);
    }
L_0009d22c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009d230:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0009d234:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009d238:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0009d23c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0009d240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0009d244:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_0009d248:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_0009d24c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0009d250:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0009d254:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[1], 0, 0);
        }
    }
L_0009d258:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0009d25c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0009d260:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009d2a0;
        }
    }
L_0009d264:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_0009d268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009d26c:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_0009d270:;
    {
        cpu->r[14] = 0x0009d274u; fn_00097b58(cpu);
    }
L_0009d274:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d278:;
    {
        cpu->r[3] = 0x0000aaabu;
    }
L_0009d27c:;
    {
        cpu->r[5] = rd32(cpu->r[7]);
    }
L_0009d280:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xaaaau << 16);
    }
L_0009d284:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[10]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0009d288:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[10] = v;
    }
L_0009d28c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0009d290:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009d294:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0009d298:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0009d29c:;
    {
        goto L_0009d2c0;
    }
L_0009d2a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0009d2a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009d264;
        }
    }
L_0009d2a8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0009d2ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
        }
    }
L_0009d2b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x0000000cu;
        }
    }
L_0009d2b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[10];
        }
    }
L_0009d2b8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[3] = v;
        }
    }
L_0009d2bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d268;
        }
    }
L_0009d2c0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 0);
    }
L_0009d2c4:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009d2c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009d2cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_0009d2d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 8u, &shc), 0, 0);
    }
L_0009d2d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 16u, &shc), 0, 0);
    }
L_0009d2d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0009d2dc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0009d2e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_0009d2e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009d31c;
        }
    }
L_0009d2e8:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_0009d2ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009d2f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0009d2f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0009d2f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0009d2fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0009d300:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0009d304:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0009d308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d2f0;
        }
    }
L_0009d30c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0009d310:;
    {
        cpu->r[5] = rd32(cpu->r[7]);
    }
L_0009d314:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0009d318:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_0009d31c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0009d320:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0009d324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0009d328:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0009d32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d35c;
        }
    }
L_0009d330:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_0009d334:;
    {
        cpu->r[2] = 0x0000aaabu;
    }
L_0009d338:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_0009d33c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x2aaau << 16);
    }
L_0009d340:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_0009d344:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0009d348:;
    {
        cpu->r[1] = (~0x0000000bu);
    }
L_0009d34c:;
    {
        uint32_t v = cpu->r[2] & ~ 0xc0000000u; cpu->r[2] = v;
    }
L_0009d350:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0009d354:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0009d358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009d35c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009d360:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_0009d364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d39c;
        }
    }
L_0009d368:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009d36c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009d370:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009d374:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0009d378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_0009d37c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_0009d380:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0009d384:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009d388:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0009d38c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0009d390:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009d3b0;
        }
    }
L_0009d394:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d398:;
    {
        cpu->r[14] = 0x0009d39cu; fn_002082a8(cpu);
    }
L_0009d39c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[10]);
    }
L_0009d3a0:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_0009d3a4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[4]);
    }
L_0009d3a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009d3ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009d3b0u)) return;
    }
L_0009d3b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d3b4:;
    {
        cpu->r[14] = 0x0009d3b8u; fn_0018ba20(cpu);
    }
L_0009d3b8:;
    {
        goto L_0009d39c;
    }
}

/* _ZN4Game15LoadConfig_CarsEP10IFileReadIi @ 0009d3bc (arm) */
void fn_0009d3bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009d3bc:;
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
L_0009d3c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000008cu, 1, 0);
    }
L_0009d3c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0009d3c8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0009d3cc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0009d3d0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009d3d4:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x2u;
        wr16(cpu->r[3] + - 0x2u, cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_0009d3d8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0009d3dc:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0009d3e0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009d3e4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009d3e8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0009d3ec:;
    {
        cpu->r[14] = 0x0009d3f0u; fn_000fc154(cpu);
    }
L_0009d3f0:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x86u);
    }
L_0009d3f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009d3f8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0009d3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d6dc;
        }
    }
L_0009d400:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0009d404:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0009d408:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_0009d40c:;
    {
        cpu->r[1] = 0x000050d7u;
    }
L_0009d410:;
    {
        cpu->r[2] = 0x000086bdu;
    }
L_0009d414:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x035eu << 16);
    }
L_0009d418:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1af2u << 16);
    }
L_0009d41c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_0009d420:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0009d424:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[8]);
    }
L_0009d428:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d42c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d434:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d438:;
    {
        cpu->r[14] = 0x0009d43cu; fn_000fc154(cpu);
    }
L_0009d43c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d440:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d444:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d448:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d44c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d450:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0009d454:;
    {
        cpu->r[14] = 0x0009d458u; fn_000fc154(cpu);
    }
L_0009d458:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d45c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d460:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0009d46c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d470:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0009d474:;
    {
        cpu->r[14] = 0x0009d478u; fn_000fc154(cpu);
    }
L_0009d478:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d47c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d480:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d484:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d488:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d48c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0009d490:;
    {
        cpu->r[14] = 0x0009d494u; fn_000fc154(cpu);
    }
L_0009d494:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d498:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d49c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d4a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d4a4:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d4a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0009d4ac:;
    {
        cpu->r[14] = 0x0009d4b0u; fn_000fc154(cpu);
    }
L_0009d4b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d4b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d4b8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d4bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d4c0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d4c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0009d4c8:;
    {
        cpu->r[14] = 0x0009d4ccu; fn_000fc154(cpu);
    }
L_0009d4cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d4d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d4d4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d4d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d4dc:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d4e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0009d4e4:;
    {
        cpu->r[14] = 0x0009d4e8u; fn_000fc154(cpu);
    }
L_0009d4e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d4ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d4f0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d4f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d4f8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d4fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0009d500:;
    {
        cpu->r[14] = 0x0009d504u; fn_000fc154(cpu);
    }
L_0009d504:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d508:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d50c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d514:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d518:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0009d51c:;
    {
        cpu->r[14] = 0x0009d520u; fn_000fc154(cpu);
    }
L_0009d520:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d524:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d528:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d52c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d530:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d534:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0009d538:;
    {
        cpu->r[14] = 0x0009d53cu; fn_000fc154(cpu);
    }
L_0009d53c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d540:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d544:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d54c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d550:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0009d554:;
    {
        cpu->r[14] = 0x0009d558u; fn_000fc154(cpu);
    }
L_0009d558:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d55c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d560:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d564:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d568:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d56c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0009d570:;
    {
        cpu->r[14] = 0x0009d574u; fn_000fc154(cpu);
    }
L_0009d574:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d578:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d57c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d580:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d584:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d588:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0009d58c:;
    {
        cpu->r[14] = 0x0009d590u; fn_000fc154(cpu);
    }
L_0009d590:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d594:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d598:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d59c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d5a0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d5a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0009d5a8:;
    {
        cpu->r[14] = 0x0009d5acu; fn_000fc154(cpu);
    }
L_0009d5ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d5b0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d5b4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d5b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d5bc:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d5c0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0009d5c4:;
    {
        cpu->r[14] = 0x0009d5c8u; fn_000fc154(cpu);
    }
L_0009d5c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d5cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d5d0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d5d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d5d8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d5dc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_0009d5e0:;
    {
        cpu->r[14] = 0x0009d5e4u; fn_000fc154(cpu);
    }
L_0009d5e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d5e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d5ec:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d5f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d5f4:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d5f8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0009d5fc:;
    {
        cpu->r[14] = 0x0009d600u; fn_000fc154(cpu);
    }
L_0009d600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d604:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d608:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d60c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d610:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_0009d614:;
    {
        cpu->r[14] = 0x0009d618u; fn_000fc154(cpu);
    }
L_0009d618:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x448u);
    }
L_0009d61c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x44cu);
    }
L_0009d620:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d624:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0009d628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d858;
        }
    }
L_0009d62c:;
    {
        wr32(cpu->r[8] + + 0x48u, cpu->r[9]);
    }
L_0009d630:;
    {
        wr32(cpu->r[8] + + 0x44u, cpu->r[11]);
    }
L_0009d634:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0009d638:;
    {
        wr32(cpu->r[8] + + 0x40u, cpu->r[12]);
    }
L_0009d63c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0009d640:;
    {
        wr32(cpu->r[8] + + 0x3cu, cpu->r[0]);
    }
L_0009d644:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009d648:;
    {
        wr32(cpu->r[8] + + 0x38u, cpu->r[1]);
    }
L_0009d64c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009d650:;
    {
        wr32(cpu->r[8] + + 0x34u, cpu->r[2]);
    }
L_0009d654:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009d658:;
    {
        wr32(cpu->r[8] + + 0x30u, cpu->r[3]);
    }
L_0009d65c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009d660:;
    {
        wr32(cpu->r[8] + + 0x2cu, cpu->r[12]);
    }
L_0009d664:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009d668:;
    {
        wr32(cpu->r[8] + + 0x28u, cpu->r[0]);
    }
L_0009d66c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009d670:;
    {
        wr32(cpu->r[8] + + 0x24u, cpu->r[1]);
    }
L_0009d674:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009d678:;
    {
        wr32(cpu->r[8] + + 0x20u, cpu->r[2]);
    }
L_0009d67c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009d680:;
    {
        wr32(cpu->r[8] + + 0x1cu, cpu->r[3]);
    }
L_0009d684:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0009d688:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[12]);
    }
L_0009d68c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009d690:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[0]);
    }
L_0009d694:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009d698:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[1]);
    }
L_0009d69c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009d6a0:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[2]);
    }
L_0009d6a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009d6a8:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[3]);
    }
L_0009d6ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d6b0:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[12]);
    }
L_0009d6b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0009d6b8:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_0009d6bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x448u);
    }
L_0009d6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004cu, 0, 0);
    }
L_0009d6c4:;
    {
        wr32(cpu->r[7] + + 0x448u, cpu->r[3]);
    }
L_0009d6c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0009d6cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0009d6d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0009d6d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009d428;
        }
    }
L_0009d6d8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x48u);
    }
L_0009d6dc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0009d6e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d6e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0009d6e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009d6ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
        }
    }
L_0009d6f0:;
    {
        wr16(cpu->r[13] + + 0x86u, cpu->r[3]);
    }
L_0009d6f4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x470u, cpu->r[2]);
        }
    }
L_0009d6f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009d6fc:;
    {
        cpu->r[14] = 0x0009d700u; fn_000fc154(cpu);
    }
L_0009d700:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0x86u);
    }
L_0009d704:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009d708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d790;
        }
    }
L_0009d70c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009d710:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0009d714:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0009d718:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_0009d71c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000450u, 0, 0);
    }
L_0009d720:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009d724:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d728:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d730:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[8]);
    }
L_0009d734:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0009d738:;
    {
        cpu->r[14] = 0x0009d73cu; fn_000fc154(cpu);
    }
L_0009d73c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d740:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d744:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d74c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0009d750:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_0009d754:;
    {
        cpu->r[14] = 0x0009d758u; fn_000fc154(cpu);
    }
L_0009d758:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x458u);
    }
L_0009d75c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x454u);
    }
L_0009d760:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009d764:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d768:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_0009d76c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d8d0;
        }
    }
L_0009d770:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0009d774:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0009d778:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x454u);
    }
L_0009d77c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0009d780:;
    {
        wr32(cpu->r[7] + + 0x454u, cpu->r[3]);
    }
L_0009d784:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0009d788:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
    }
L_0009d78c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009d724;
        }
    }
L_0009d790:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0009d794:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d798:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009d79c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009d7a0:;
    {
        wr16(cpu->r[13] + + 0x86u, cpu->r[3]);
    }
L_0009d7a4:;
    {
        cpu->r[14] = 0x0009d7a8u; fn_000fc154(cpu);
    }
L_0009d7a8:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0x86u);
    }
L_0009d7ac:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009d7b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d83c;
        }
    }
L_0009d7b4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009d7b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0009d7bc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0009d7c0:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_0009d7c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000450u, 0, 0);
    }
L_0009d7c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0009d7cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009d7d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d7d4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d7d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d7dc:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[8]);
    }
L_0009d7e0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0009d7e4:;
    {
        cpu->r[14] = 0x0009d7e8u; fn_000fc154(cpu);
    }
L_0009d7e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d7ec:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009d7f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009d7f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009d7f8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0009d7fc:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_0009d800:;
    {
        cpu->r[14] = 0x0009d804u; fn_000fc154(cpu);
    }
L_0009d804:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x464u);
    }
L_0009d808:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x460u);
    }
L_0009d80c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009d810:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d814:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_0009d818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009d844;
        }
    }
L_0009d81c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0009d820:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0009d824:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x460u);
    }
L_0009d828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0009d82c:;
    {
        wr32(cpu->r[7] + + 0x460u, cpu->r[3]);
    }
L_0009d830:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0009d834:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
    }
L_0009d838:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009d7d0;
        }
    }
L_0009d83c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0009d840:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009d844u)) return;
    }
L_0009d844:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009d848:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d84c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0009d850:;
    {
        cpu->r[14] = 0x0009d854u; fn_0009d210(cpu);
    }
L_0009d854:;
    {
        goto L_0009d830;
    }
L_0009d858:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x444u);
    }
L_0009d85c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_0009d860:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_0009d864:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009d868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009d86c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0009d870:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_0009d874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_0009d878:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0009d87c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0009d880:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[2], 0, 0);
        }
    }
L_0009d884:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0009d888:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0009d88c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009d8e4;
        }
    }
L_0009d890:;
    {
        cpu->r[3] = (~0x0000002bu);
    }
L_0009d894:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009d898:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0009d89c:;
    {
        cpu->r[14] = 0x0009d8a0u; fn_00097b58(cpu);
    }
L_0009d8a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0009d8a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0009d8a8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x444u);
    }
L_0009d8ac:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_0009d8b0:;
    {
        { uint64_t v = (uint64_t)cpu->r[12] * (uint64_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0009d8b4:;
    {
        cpu->r[12] = 0x0000004cu;
    }
L_0009d8b8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_0009d8bc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_0009d8c0:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_0009d8c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_0009d8c8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0009d8cc:;
    {
        goto L_0009d908;
    }
L_0009d8d0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009d8d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009d8d8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0009d8dc:;
    {
        cpu->r[14] = 0x0009d8e0u; fn_0009d210(cpu);
    }
L_0009d8e0:;
    {
        goto L_0009d784;
    }
L_0009d8e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009d8e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009d890;
        }
    }
L_0009d8ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009d8f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[6]);
        }
    }
L_0009d8f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000004cu;
        }
    }
L_0009d8f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000004cu;
        }
    }
L_0009d8fc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x58u, cpu->r[6]);
        }
    }
L_0009d900:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
        }
    }
L_0009d904:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d894;
        }
    }
L_0009d908:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_0009d90c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009d910:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009d914:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0009d918:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_0009d91c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_0009d920:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0009d924:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0009d928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009d92c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
        }
    }
L_0009d930:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009d9a0;
        }
    }
L_0009d934:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0009d938:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0009d93c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[11]);
    }
L_0009d940:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_0009d944:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_0009d948:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[9]);
    }
L_0009d94c:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_0009d950:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[10]);
    }
L_0009d954:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0009d958:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0009d95c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_0009d960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_0009d964:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_0009d968:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0009d96c:;
    {
        cpu->r[14] = 0x0009d970u; imp_memcpy(cpu); /* memcpy */
    }
L_0009d970:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0009d974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009d95c;
        }
    }
L_0009d978:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0009d97c:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_0009d980:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0009d984:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_0009d988:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_0009d98c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x68u);
    }
L_0009d990:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x60u);
    }
L_0009d994:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[3] = v;
    }
L_0009d998:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x64u);
    }
L_0009d99c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0009d9a0:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[9]);
    }
L_0009d9a4:;
    {
        wr32(cpu->r[3] + + 0x44u, cpu->r[11]);
    }
L_0009d9a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0009d9ac:;
    {
        wr32(cpu->r[3] + + 0x40u, cpu->r[12]);
    }
L_0009d9b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0009d9b4:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_0009d9b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009d9bc:;
    {
        wr32(cpu->r[3] + + 0x38u, cpu->r[1]);
    }
L_0009d9c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009d9c4:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[12]);
    }
L_0009d9c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009d9cc:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[0]);
    }
L_0009d9d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009d9d4:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[1]);
    }
L_0009d9d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009d9dc:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[12]);
    }
L_0009d9e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009d9e4:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[0]);
    }
L_0009d9e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009d9ec:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[1]);
    }
L_0009d9f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009d9f4:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[12]);
    }
L_0009d9f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0009d9fc:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[0]);
    }
L_0009da00:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009da04:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_0009da08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009da0c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_0009da10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009da14:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_0009da18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009da1c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0009da20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009da24:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0009da28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0009da2c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0009da30:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x448u);
    }
L_0009da34:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x444u);
    }
L_0009da38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0009da3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009da74;
        }
    }
L_0009da40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x0000004cu, 1, 0);
    }
L_0009da44:;
    {
        cpu->r[12] = (~0x0000004bu);
    }
L_0009da48:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0009da4c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_0009da50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0009da54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0009da58:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 9u, &shc), cpu->r[1], 1, 0);
    }
L_0009da5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 18u, &shc), 0, 0);
    }
L_0009da60:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0009da64:;
    {
        uint32_t v = cpu->r[1] & ~ 0xc0000000u; cpu->r[1] = v;
    }
L_0009da68:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_0009da6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0009da70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0009da74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009da78:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44cu);
    }
L_0009da7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009dab8;
        }
    }
L_0009da80:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0009da84:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_0009da88:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0009da8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0009da90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0009da94:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 9u, &shc), cpu->r[1], 1, 0);
    }
L_0009da98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 18u, &shc), 0, 0);
    }
L_0009da9c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0009daa0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_0009daa4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0009daa8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009dad0;
        }
    }
L_0009daac:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009dab0:;
    {
        cpu->r[14] = 0x0009dab4u; fn_002082a8(cpu);
    }
L_0009dab4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009dab8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_0009dabc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0009dac0:;
    {
        wr32(cpu->r[7] + + 0x448u, cpu->r[2]);
    }
L_0009dac4:;
    {
        wr32(cpu->r[7] + + 0x444u, cpu->r[12]);
    }
L_0009dac8:;
    {
        wr32(cpu->r[7] + + 0x44cu, cpu->r[0]);
    }
L_0009dacc:;
    {
        goto L_0009d6c8;
    }
L_0009dad0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009dad4:;
    {
        cpu->r[14] = 0x0009dad8u; fn_0018ba20(cpu);
    }
L_0009dad8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009dadc:;
    {
        goto L_0009dab8;
    }
}

/* _ZN4Game17LoadConfig_ScenesEP10IFileReadIi @ 0009dae0 (arm) */
void fn_0009dae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009dae0:;
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
L_0009dae4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_0009dae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_0009daec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009daf0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0009daf4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0009daf8:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x2u;
        wr16(cpu->r[3] + - 0x2u, cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_0009dafc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0009db00:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0009db04:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009db08:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0009db0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0009db10:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x43cu);
    }
L_0009db14:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009db18:;
    {
        cpu->r[14] = 0x0009db1cu; fn_000fc154(cpu);
    }
L_0009db1c:;
    {
        cpu->r[1] = rd16(cpu->r[13] + + 0xe6u);
    }
L_0009db20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009db24:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0009db28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e09c;
        }
    }
L_0009db2c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_0009db30:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_0009db34:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_0009db38:;
    {
        cpu->r[1] = rd32(0x0009db40u + + 0x5a4u);
    }
L_0009db3c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[5] = v;
    }
L_0009db40:;
    {
        cpu->r[2] = rd32(0x0009db48u + + 0x5a0u);
    }
L_0009db44:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009db4cu, cpu->r[1], 0, 0);
    }
L_0009db48:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0009db4c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[3] = v;
    }
L_0009db50:;
    {
        cpu->r[1] = rd32(0x0009db58u + + 0x594u);
    }
L_0009db54:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009db5cu, cpu->r[2], 0, 0);
    }
L_0009db58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_0009db5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009db64u, cpu->r[1], 0, 0);
    }
L_0009db60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000002b4u, 0, 0);
    }
L_0009db64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0009db68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0009db6c:;
    {
        cpu->r[1] = rd32(0x0009db74u + + 0x57cu);
    }
L_0009db70:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0009db74:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0009db78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009db7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009db84u, cpu->r[1], 0, 0);
    }
L_0009db80:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0009db84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009db88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009db8c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0009db90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0009db94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009db98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009db9c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dba0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dba4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0009dba8:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dbac:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0009dbb0:;
    {
        cpu->r[14] = 0x0009dbb4u; fn_000fc154(cpu);
    }
L_0009dbb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dbb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dbbc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dbc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dbc4:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dbc8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0009dbcc:;
    {
        cpu->r[14] = 0x0009dbd0u; fn_000fc154(cpu);
    }
L_0009dbd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dbd4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dbd8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dbdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dbe0:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dbe4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0009dbe8:;
    {
        cpu->r[14] = 0x0009dbecu; fn_000fc154(cpu);
    }
L_0009dbec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dbf0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dbf4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dbf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dbfc:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc00:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_0009dc04:;
    {
        cpu->r[14] = 0x0009dc08u; fn_000fc154(cpu);
    }
L_0009dc08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc10:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dc14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dc18:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc1c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0009dc20:;
    {
        cpu->r[14] = 0x0009dc24u; fn_000fc154(cpu);
    }
L_0009dc24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc28:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc2c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dc30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dc34:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc38:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_0009dc3c:;
    {
        cpu->r[14] = 0x0009dc40u; fn_000fc154(cpu);
    }
L_0009dc40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc48:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dc4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dc50:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc54:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0009dc58:;
    {
        cpu->r[14] = 0x0009dc5cu; fn_000fc154(cpu);
    }
L_0009dc5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc64:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dc68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dc6c:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc70:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0009dc74:;
    {
        cpu->r[14] = 0x0009dc78u; fn_000fc154(cpu);
    }
L_0009dc78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc80:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dc84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dc88:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dc8c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_0009dc90:;
    {
        cpu->r[14] = 0x0009dc94u; fn_000fc154(cpu);
    }
L_0009dc94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dc98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dc9c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dca0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dca4:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dca8:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_0009dcac:;
    {
        cpu->r[14] = 0x0009dcb0u; fn_000fc154(cpu);
    }
L_0009dcb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dcb4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dcb8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dcbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dcc0:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dcc4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0009dcc8:;
    {
        cpu->r[14] = 0x0009dcccu; fn_000fc154(cpu);
    }
L_0009dccc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dcd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dcd4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dcd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dcdc:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dce0:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_0009dce4:;
    {
        cpu->r[14] = 0x0009dce8u; fn_000fc154(cpu);
    }
L_0009dce8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dcec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dcf0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dcf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dcf8:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dcfc:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_0009dd00:;
    {
        cpu->r[14] = 0x0009dd04u; fn_000fc154(cpu);
    }
L_0009dd04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd0c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dd14:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dd18:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_0009dd1c:;
    {
        cpu->r[14] = 0x0009dd20u; fn_000fc154(cpu);
    }
L_0009dd20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd28:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dd30:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dd34:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0009dd38:;
    {
        cpu->r[14] = 0x0009dd3cu; fn_000fc154(cpu);
    }
L_0009dd3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd40:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd44:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dd4c:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dd50:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_0009dd54:;
    {
        cpu->r[14] = 0x0009dd58u; fn_000fc154(cpu);
    }
L_0009dd58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd60:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dd68:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dd6c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_0009dd70:;
    {
        cpu->r[14] = 0x0009dd74u; fn_000fc154(cpu);
    }
L_0009dd74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd78:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd7c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dd84:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dd88:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_0009dd8c:;
    {
        cpu->r[14] = 0x0009dd90u; fn_000fc154(cpu);
    }
L_0009dd90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009dd94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009dd98:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009dd9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009dda0:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[8]);
    }
L_0009dda4:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[3]);
    }
L_0009dda8:;
    {
        cpu->r[14] = 0x0009ddacu; fn_000fc154(cpu);
    }
L_0009ddac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009ddb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_0009ddb4:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0009ddb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009ddbc:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_0009ddc0:;
    {
        cpu->r[14] = 0x0009ddc4u; fn_000fc154(cpu);
    }
L_0009ddc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009ddc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009ddcc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0009ddd0:;
    {
        wr16(cpu->r[13] + + 0xe6u, cpu->r[8]);
    }
L_0009ddd4:;
    {
        cpu->r[14] = 0x0009ddd8u; fn_000fc154(cpu);
    }
L_0009ddd8:;
    {
        cpu->r[9] = rd16(cpu->r[13] + + 0xe6u);
    }
L_0009dddc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000003u, 1, 1);
    }
L_0009dde0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009de04;
        }
    }
L_0009dde4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009dde8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0009ddec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0009ddf0:;
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
L_0009ddf4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009ddf8:;
    {
        cpu->r[12] = 0x000026fbu;
    }
L_0009ddfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009de00:;
    {
        cpu->r[14] = 0x0009de04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009de04:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_0009de08:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_0009de0c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0009de10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0009de14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009de18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0009de1c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0009de20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0009de24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006cu, 0, 0);
    }
L_0009de28:;
    {
        cpu->r[14] = 0x0009de2cu; fn_000fc154(cpu);
    }
L_0009de2c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x6cu);
    }
L_0009de30:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 1);
    }
L_0009de34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0009de38:;
    {
        wr32(cpu->r[10] + + 0x6cu, cpu->r[3]);
    }
L_0009de3c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_0009de40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009de10;
        }
    }
L_0009de44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009de48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0009de4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009de50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009de54:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[8]);
    }
L_0009de58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009de5c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[11]);
    }
L_0009de60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0009de64:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_0009de68:;
    {
        cpu->r[2] = (~0xc0000000u);
    }
L_0009de6c:;
    {
        wr16(cpu->r[6] + + 0x5cu, cpu->r[3]);
    }
L_0009de70:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_0009de74:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_0009de78:;
    {
        wr32(cpu->r[6] + + 0x58u, cpu->r[3]);
    }
L_0009de7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009dea4;
        }
    }
L_0009de80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_0009de84:;
    {
        cpu->r[2] = 0x000004d7u;
    }
L_0009de88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009de8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009dee4;
        }
    }
L_0009de90:;
    {
        cpu->r[2] = 0x000004d6u;
    }
L_0009de94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0009de98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x46cu);
        }
    }
L_0009de9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0009dea0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x46cu, cpu->r[3]);
        }
    }
L_0009dea4:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x43cu);
    }
L_0009dea8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x440u);
    }
L_0009deac:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0009deb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009df00;
        }
    }
L_0009deb4:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_0009deb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009debc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009dec0:;
    {
        cpu->r[14] = 0x0009dec4u; imp_memcpy(cpu); /* memcpy */
    }
L_0009dec4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009dec8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x43cu);
    }
L_0009decc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_0009ded0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000009cu, 0, 0);
    }
L_0009ded4:;
    {
        wr32(cpu->r[7] + + 0x43cu, cpu->r[3]);
    }
L_0009ded8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e09c;
        }
    }
L_0009dedc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0009dee0:;
    {
        goto L_0009db94;
    }
L_0009dee4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x468u);
    }
L_0009dee8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x43cu);
    }
L_0009deec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0009def0:;
    {
        wr32(cpu->r[7] + + 0x468u, cpu->r[3]);
    }
L_0009def4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x440u);
    }
L_0009def8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0009defc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009deb4;
        }
    }
L_0009df00:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009df04:;
    {
        cpu->r[2] = 0x00006f97u;
    }
L_0009df08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x96f9u << 16);
    }
L_0009df0c:;
    {
        cpu->r[3] = 0x00001a41u;
    }
L_0009df10:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 0);
    }
L_0009df14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x01a4u << 16);
    }
L_0009df18:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0009df1c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0009df20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0009df24:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[2], 0, 0);
        }
    }
L_0009df28:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0009df2c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0009df30:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009e0b4;
        }
    }
L_0009df34:;
    {
        cpu->r[1] = (~0x00000063u);
    }
L_0009df38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009df3c:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[1]);
    }
L_0009df40:;
    {
        cpu->r[14] = 0x0009df44u; fn_00097b58(cpu);
    }
L_0009df44:;
    {
        cpu->r[2] = 0x00004835u;
    }
L_0009df48:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3483u << 16);
    }
L_0009df4c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0009df50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009df54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009df58:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x0000009cu, 0, 0);
    }
L_0009df5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe0u);
    }
L_0009df60:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009df64:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_0009df68:;
    {
        { uint64_t v = (uint64_t)cpu->r[2] * (uint64_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0009df6c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[2] = v;
    }
L_0009df70:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_0009df74:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[1]; cpu->r[3] = v;
    }
L_0009df78:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0009df7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 0);
    }
L_0009df80:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_0009df84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_0009df88:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0009df8c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0009df90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009df94:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_0009df98:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0009df9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009e000;
        }
    }
L_0009dfa0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_0009dfa4:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_0009dfa8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009dfac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0009dfb0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009dfb4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_0009dfb8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0009dfbc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009dfc0:;
    {
        cpu->r[9] = 0x0000009cu;
    }
L_0009dfc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0009dfc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_0009dfcc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0009dfd0:;
    {
        cpu->r[14] = 0x0009dfd4u; imp_memcpy(cpu); /* memcpy */
    }
L_0009dfd4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0009dfd8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0009dfdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009dfc0;
        }
    }
L_0009dfe0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009dfe4:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0009dfe8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009dfec:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0009dff0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009dff4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0009dff8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_0009dffc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0009e000:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009e004:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_0009e008:;
    {
        cpu->r[14] = 0x0009e00cu; imp_memcpy(cpu); /* memcpy */
    }
L_0009e00c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x43cu);
    }
L_0009e010:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009e014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0009e018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e048;
        }
    }
L_0009e01c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x0000009cu, 1, 0);
    }
L_0009e020:;
    {
        cpu->r[2] = 0x00006f97u;
    }
L_0009e024:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0009e028:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x16f9u << 16);
    }
L_0009e02c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_0009e030:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0009e034:;
    {
        uint32_t v = cpu->r[2] & ~ 0xc0000000u; cpu->r[1] = v;
    }
L_0009e038:;
    {
        cpu->r[2] = (~0x0000009bu);
    }
L_0009e03c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_0009e040:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000009cu, 1, 0);
    }
L_0009e044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009e048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009e04c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x440u);
    }
L_0009e050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e07c;
        }
    }
L_0009e054:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009e058:;
    {
        cpu->r[1] = 0x00006f97u;
    }
L_0009e05c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x96f9u << 16);
    }
L_0009e060:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009e064:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_0009e068:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_0009e06c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_0009e070:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0009e074:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009e0dc;
        }
    }
L_0009e078:;
    {
        cpu->r[14] = 0x0009e07cu; fn_002082a8(cpu);
    }
L_0009e07c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009e080:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009e084:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009e088:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_0009e08c:;
    {
        wr32(cpu->r[7] + + 0x43cu, cpu->r[10]);
    }
L_0009e090:;
    {
        wr32(cpu->r[7] + + 0x438u, cpu->r[12]);
    }
L_0009e094:;
    {
        wr32(cpu->r[7] + + 0x440u, cpu->r[1]);
    }
L_0009e098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009dedc;
        }
    }
L_0009e09c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009e0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009e0a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_0009e0a8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x474u, cpu->r[12]);
        }
    }
L_0009e0ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_0009e0b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e0b4u)) return;
    }
L_0009e0b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0009e0b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009df34;
        }
    }
L_0009e0bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0009e0c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
        }
    }
L_0009e0c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000009cu;
        }
    }
L_0009e0c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x0000009cu;
        }
    }
L_0009e0cc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
        }
    }
L_0009e0d0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
        }
    }
L_0009e0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009df7c;
        }
    }
L_0009e0d8:;
    {
        goto L_0009df38;
    }
L_0009e0dc:;
    {
        cpu->r[14] = 0x0009e0e0u; fn_0018ba20(cpu);
    }
L_0009e0e0:;
    {
        goto L_0009e07c;
    }
}

/* _ZN4Game11LoadPackageEi @ 0009e0f4 (arm) */
void fn_0009e0f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e0f4:;
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
L_0009e0f8:;
    {
        cpu->r[3] = rd32(0x0009e100u + + 0x29cu);
    }
L_0009e0fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000830u, 1, 0);
    }
L_0009e100:;
    {
        cpu->r[2] = rd32(0x0009e108u + + 0x298u);
    }
L_0009e104:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009e108:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0009e10c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009e114u, cpu->r[2], 0, 0);
    }
L_0009e110:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0009e114:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0009e118:;
    {
        cpu->r[3] = rd32(0x0009e120u + + 0x284u);
    }
L_0009e11c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009e120:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0009e124:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e128:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0009e12c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0009e130:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009e134:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009e138:;
    {
        wr32(cpu->r[13] + + 0x834u, cpu->r[3]);
    }
L_0009e13c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e34c;
        }
    }
L_0009e140:;
    {
        cpu->r[4] = rd32(0x0009e148u + + 0x260u);
    }
L_0009e144:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e148:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009e14c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000430u, 0, 0);
    }
L_0009e150:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0009e154:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0009e158:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0009e15c:;
    {
        cpu->r[14] = 0x0009e160u; fn_00189f5c(cpu);
    }
L_0009e160:;
    {
        cpu->r[1] = rd32(0x0009e168u + + 0x244u);
    }
L_0009e164:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0009e168:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e170u, cpu->r[1], 0, 0);
    }
L_0009e16c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_0009e170:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0009e174:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e178:;
    {
        cpu->r[14] = 0x0009e17cu; imp_sprintf(cpu); /* sprintf */
    }
L_0009e17c:;
    {
        cpu->r[1] = rd32(0x0009e184u + + 0x22cu);
    }
L_0009e180:;
    {
        cpu->r[2] = rd32(0x0009e188u + + 0x22cu);
    }
L_0009e184:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e188:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e190u, cpu->r[1], 0, 0);
    }
L_0009e18c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e190:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009e198u, cpu->r[2], 0, 0);
    }
L_0009e194:;
    {
        cpu->r[14] = 0x0009e198u; imp_sprintf(cpu); /* sprintf */
    }
L_0009e198:;
    {
        cpu->r[1] = rd32(0x0009e1a0u + + 0x218u);
    }
L_0009e19c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e1a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e1a8u, cpu->r[1], 0, 0);
    }
L_0009e1a4:;
    {
        cpu->r[14] = 0x0009e1a8u; imp_fopen(cpu); /* fopen */
    }
L_0009e1a8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e1ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0009e1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e324;
        }
    }
L_0009e1b4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e1b8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 0);
    }
L_0009e1bc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e1c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e1c4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0009e1c8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_0009e1cc:;
    {
        cpu->r[14] = 0x0009e1d0u; imp_fread(cpu); /* fread */
    }
L_0009e1d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009e1d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0009e1d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009e318;
        }
    }
L_0009e1dc:;
    {
        cpu->r[4] = 0x00006f97u;
    }
L_0009e1e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0009e1e4:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x96f9u << 16);
    }
L_0009e1e8:;
    {
        cpu->r[6] = 0x0000009cu;
    }
L_0009e1ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0009e1f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0009e1f4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_0009e1f8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0009e1fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0009e200:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009e204:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0009e208:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0009e20c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e210:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e214:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e218:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009e21c:;
    {
        cpu->r[14] = 0x0009e220u; imp_fread(cpu); /* fread */
    }
L_0009e220:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e224:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e228:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e22c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009e230:;
    {
        cpu->r[14] = 0x0009e234u; imp_fread(cpu); /* fread */
    }
L_0009e234:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e238:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e23c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e240:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e244:;
    {
        cpu->r[14] = 0x0009e248u; imp_fread(cpu); /* fread */
    }
L_0009e248:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0009e24c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e250:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0009e254:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0009e258:;
    {
        cpu->r[14] = 0x0009e25cu; imp_fread(cpu); /* fread */
    }
L_0009e25c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x438u);
    }
L_0009e260:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x43cu);
    }
L_0009e264:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0009e268:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009e26c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[3] = v;
    }
L_0009e270:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009e274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e308;
        }
    }
L_0009e278:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e27c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009e280:;
    {
        goto L_0009e2a0;
    }
L_0009e284:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0009e288:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0009e28c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009e290:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009e294:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[3] = v;
    }
L_0009e298:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0009e29c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0009e308;
        }
    }
L_0009e2a0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_0009e2a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0009e2a8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0009e2ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0009e2b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e284;
        }
    }
L_0009e2b4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x38u);
    }
L_0009e2b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009e2bc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_0009e2c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e284;
        }
    }
L_0009e2c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009e2c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000054u, 0, 0);
    }
L_0009e2cc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0009e2d0:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0009e2d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0009e2d8:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[12]);
    }
L_0009e2dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009e2e0:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[12]);
    }
L_0009e2e4:;
    {
        cpu->r[14] = 0x0009e2e8u; imp_memcpy(cpu); /* memcpy */
    }
L_0009e2e8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x438u);
    }
L_0009e2ec:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x43cu);
    }
L_0009e2f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009e2f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0009e2f8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0009e2fc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[3] = v;
    }
L_0009e300:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0009e304:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0009e2a0;
        }
    }
L_0009e308:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009e30c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0009e310:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0009e314:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009e20c;
        }
    }
L_0009e318:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e31c:;
    {
        cpu->r[14] = 0x0009e320u; imp_fclose(cpu); /* fclose */
    }
L_0009e320:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e324:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e328:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009e32c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x834u);
    }
L_0009e330:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0009e334:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009e338:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009e33c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e398;
        }
    }
L_0009e340:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0009e344:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_0009e348:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e34cu)) return;
    }
L_0009e34c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e350:;
    {
        cpu->r[14] = 0x0009e354u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009e354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e140;
        }
    }
L_0009e35c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e360:;
    {
        cpu->r[4] = rd32(0x0009e368u + + 0x40u);
    }
L_0009e364:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_0009e368:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e36c:;
    {
        cpu->r[14] = 0x0009e370u; fn_00189f48(cpu);
    }
L_0009e370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e374:;
    {
        cpu->r[14] = 0x0009e378u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009e378:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e37c:;
    {
        cpu->r[3] = rd32(0x0009e384u + + 0x38u);
    }
L_0009e380:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e384:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e388:;
    {
        cpu->r[3] = rd32(0x0009e390u + + 0x30u);
    }
L_0009e38c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e390:;
    {
        cpu->r[14] = 0x0009e394u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009e394:;
    {
        goto L_0009e144;
    }
L_0009e398:;
    {
        cpu->r[14] = 0x0009e39cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0009e39c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0009e3a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[4], 2, 6u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
        }
    }
L_0009e3a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 6u, &shc); cpu->r[0] = v;
        }
    }
L_0009e3a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[0]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[0] = wb_tmp;
        }
    }
L_0009e3ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e3b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e3b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e3b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e3bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 4, 11u, &shc); cpu->r[0] = v;
        }
    }
L_0009e3c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN4Game12LoadPackagesEv @ 0009e3c4 (arm) */
void fn_0009e3c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e3c4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009e3c8:;
    {
        cpu->r[5] = rd32(0x0009e3d0u + + 0xb0u);
    }
L_0009e3cc:;
    {
        cpu->r[3] = rd32(0x0009e3d4u + + 0xb0u);
    }
L_0009e3d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009e3d4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0009e3dcu, cpu->r[5], 0, 0);
    }
L_0009e3d8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e3dc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0009e3e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009e3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e43c;
        }
    }
L_0009e3e8:;
    {
        cpu->r[6] = rd32(0x0009e3f0u + + 0x98u);
    }
L_0009e3ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009e3f0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[6] = v1;
    }
L_0009e3f4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_0009e3f8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0009e3fc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009e400:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009e434;
        }
    }
L_0009e404:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009e408:;
    {
        goto L_0009e414;
    }
L_0009e40c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_0009e410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e434;
        }
    }
L_0009e414:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009e418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009e41c:;
    {
        cpu->r[14] = 0x0009e420u; fn_0009e0f4(cpu);
    }
L_0009e420:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009e424:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e428:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009e40c;
        }
    }
L_0009e42c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0009e430:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e434u)) return;
    }
L_0009e434:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e438:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e43cu)) return;
    }
L_0009e43c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e440:;
    {
        cpu->r[14] = 0x0009e444u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009e444:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e3e8;
        }
    }
L_0009e44c:;
    {
        cpu->r[6] = rd32(0x0009e454u + + 0x34u);
    }
L_0009e450:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009e454:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e458:;
    {
        cpu->r[14] = 0x0009e45cu; fn_00189f48(cpu);
    }
L_0009e45c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e460:;
    {
        cpu->r[14] = 0x0009e464u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009e464:;
    {
        cpu->r[3] = rd32(0x0009e46cu + + 0x20u);
    }
L_0009e468:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e46c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e470:;
    {
        cpu->r[3] = rd32(0x0009e478u + + 0x18u);
    }
L_0009e474:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e478:;
    {
        cpu->r[14] = 0x0009e47cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009e47c:;
    {
        goto L_0009e3ec;
    }
}

/* _ZN4Game8LoadDataEbb @ 0009e494 (arm) */
void fn_0009e494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e494:;
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
L_0009e498:;
    {
        cpu->r[4] = rd32(0x0009e4a0u + + 0x14cu);
    }
L_0009e49c:;
    {
        cpu->r[5] = rd32(0x0009e4a4u + + 0x14cu);
    }
L_0009e4a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_0009e4a4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009e4acu, cpu->r[4], 0, 0);
    }
L_0009e4a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009e4ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009e4b0:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0009e4b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009e4b8:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0009e4bc:;
    {
        cpu->r[1] = rd32(0x0009e4c4u + + 0x130u);
    }
L_0009e4c0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_0009e4c4:;
    {
        cpu->r[2] = rd32(0x0009e4ccu + + 0x12cu);
    }
L_0009e4c8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009e4cc:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0009e4d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e4d8u, cpu->r[1], 0, 0);
    }
L_0009e4d4:;
    {
        cpu->r[3] = rd32(0x0009e4dcu + + 0x120u);
    }
L_0009e4d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009e4e0u, cpu->r[2], 0, 0);
    }
L_0009e4dc:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0009e4e0:;
    {
        wr8(cpu->r[0] + + 0x481u, cpu->r[8]);
    }
L_0009e4e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009e4ecu, cpu->r[3], 0, 0);
    }
L_0009e4e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e4ec:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[12]);
    }
L_0009e4f0:;
    {
        cpu->r[14] = 0x0009e4f4u; imp_sprintf(cpu); /* sprintf */
    }
L_0009e4f4:;
    {
        cpu->r[1] = rd32(0x0009e4fcu + + 0x104u);
    }
L_0009e4f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e4fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e504u, cpu->r[1], 0, 0);
    }
L_0009e500:;
    {
        cpu->r[14] = 0x0009e504u; imp_fopen(cpu); /* fopen */
    }
L_0009e504:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e508:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e530;
        }
    }
L_0009e50c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0009e510:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009e514:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_0009e518:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009e51c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009e520:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e5e8;
        }
    }
L_0009e524:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009e528:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0009e52c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e530u)) return;
    }
L_0009e530:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0009e534:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009e538:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_0009e53c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e540:;
    {
        cpu->r[14] = 0x0009e544u; imp_fread(cpu); /* fread */
    }
L_0009e544:;
    {
        cpu->r[3] = 0x00000059u;
    }
L_0009e548:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009e54c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x7777u << 16);
    }
L_0009e550:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009e554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e50c;
        }
    }
L_0009e558:;
    {
        cpu->r[14] = 0x0009e55cu; fn_000979a0(cpu);
    }
L_0009e55c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009e560:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0009e564:;
    {
        cpu->r[14] = 0x0009e568u; fn_0009481c(cpu);
    }
L_0009e568:;
    {
        cpu->r[14] = 0x0009e56cu; fn_000979a0(cpu);
    }
L_0009e56c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0009e570:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0009e574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e5c4;
        }
    }
L_0009e578:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0009e57c:;
    {
        cpu->r[7] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0009e580:;
    {
        cpu->r[14] = 0x0009e584u; fn_000979a0(cpu);
    }
L_0009e584:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0009e588:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_0009e58c:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0009e590:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009e594:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0009e598:;
    {
        cpu->r[14] = 0x0009e59cu; fn_000af09c(cpu);
    }
L_0009e59c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009e5a0:;
    {
        cpu->r[14] = 0x0009e5a4u; fn_0009e3c4(cpu);
    }
L_0009e5a4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0009e5a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e5b4;
        }
    }
L_0009e5ac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0009e5b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e5d8;
        }
    }
L_0009e5b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e5b8:;
    {
        cpu->r[14] = 0x0009e5bcu; imp_fclose(cpu); /* fclose */
    }
L_0009e5bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e5c0:;
    {
        goto L_0009e510;
    }
L_0009e5c4:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_0009e5c8:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x8u);
    }
L_0009e5cc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0009e5d0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0009e5d4:;
    {
        goto L_0009e58c;
    }
L_0009e5d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009e5dc:;
    {
        cpu->r[14] = 0x0009e5e0u; imp_fclose(cpu); /* fclose */
    }
L_0009e5e0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009e5e4:;
    {
        goto L_0009e510;
    }
L_0009e5e8:;
    {
        cpu->r[14] = 0x0009e5ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0009e5ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[12], 4, 30u, &shc); cpu->r[11] = v;
        set_nz(cpu, v);
        }
    }
L_0009e5f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0009e5f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_0009e5f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_0009e5fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        cpu->r[0] = rd16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e600:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
}

/* _Z15LoadTheLanguagev @ 0009e604 (arm) */
void fn_0009e604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e604:;
    {
        cpu->r[3] = rd32(0x0009e60cu + + 0x24u);
    }
L_0009e608:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009e60c:;
    {
        cpu->r[0] = rd32(0x0009e614u + + 0x20u);
    }
L_0009e610:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009e614:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009e61cu, cpu->r[3], 0, 0);
    }
L_0009e618:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0009e61c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0009e620:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009e624:;
    {
        cpu->r[14] = 0x0009e628u; fn_0009e494(cpu);
    }
L_0009e628:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0009e62c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e630u)) return;
    }
}

/* _ZN4Game11SavePackageEi @ 0009e638 (arm) */
void fn_0009e638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e638:;
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
L_0009e63c:;
    {
        cpu->r[3] = rd32(0x0009e644u + + 0x2acu);
    }
L_0009e640:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000008c0u, 1, 0);
    }
L_0009e644:;
    {
        cpu->r[2] = rd32(0x0009e64cu + + 0x2a8u);
    }
L_0009e648:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_0009e64c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009e650:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009e658u, cpu->r[2], 0, 0);
    }
L_0009e654:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0009e658:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0009e65c:;
    {
        cpu->r[3] = rd32(0x0009e664u + + 0x294u);
    }
L_0009e660:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e664:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0009e668:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e66c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0009e670:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0009e674:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009e678:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009e67c:;
    {
        wr32(cpu->r[13] + + 0x8bcu, cpu->r[3]);
    }
L_0009e680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e8a0;
        }
    }
L_0009e684:;
    {
        cpu->r[4] = rd32(0x0009e68cu + + 0x270u);
    }
L_0009e688:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009e68c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009e690:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x000004c0u, 0, 0);
    }
L_0009e694:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_0009e698:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0009e69c:;
    {
        cpu->r[14] = 0x0009e6a0u; fn_00189f5c(cpu);
    }
L_0009e6a0:;
    {
        cpu->r[1] = rd32(0x0009e6a8u + + 0x258u);
    }
L_0009e6a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000c0u, 0, 0);
    }
L_0009e6a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0009e6ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e6b4u, cpu->r[1], 0, 0);
    }
L_0009e6b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_0009e6b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0009e6b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009e6bc:;
    {
        cpu->r[14] = 0x0009e6c0u; imp_sprintf(cpu); /* sprintf */
    }
L_0009e6c0:;
    {
        cpu->r[1] = rd32(0x0009e6c8u + + 0x23cu);
    }
L_0009e6c4:;
    {
        cpu->r[2] = rd32(0x0009e6ccu + + 0x23cu);
    }
L_0009e6c8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009e6cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e6d4u, cpu->r[1], 0, 0);
    }
L_0009e6d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009e6d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009e6dcu, cpu->r[2], 0, 0);
    }
L_0009e6d8:;
    {
        cpu->r[14] = 0x0009e6dcu; imp_sprintf(cpu); /* sprintf */
    }
L_0009e6dc:;
    {
        cpu->r[1] = rd32(0x0009e6e4u + + 0x228u);
    }
L_0009e6e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009e6e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009e6ecu, cpu->r[1], 0, 0);
    }
L_0009e6e8:;
    {
        cpu->r[14] = 0x0009e6ecu; imp_fopen(cpu); /* fopen */
    }
L_0009e6ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e6f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0009e6f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0009e6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e878;
        }
    }
L_0009e6fc:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x438u);
    }
L_0009e700:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_0009e704:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x43cu);
    }
L_0009e708:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_0009e70c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0009e710:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[11]);
    }
L_0009e714:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_0009e718:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_0009e71c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[10] = v;
    }
L_0009e720:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 1);
    }
L_0009e724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e76c;
        }
    }
L_0009e728:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0009e72c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0009e730:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_0009e734:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0009e738:;
    {
        cpu->r[9] = 0x0000009cu;
    }
L_0009e73c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1] + cpu->r[8]; cpu->r[1] = v;
    }
L_0009e740:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009e744:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_0009e748:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009e74c:;
    {
        cpu->r[14] = 0x0009e750u; imp_memcpy(cpu); /* memcpy */
    }
L_0009e750:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009e754:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009e758:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0009e75c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_0009e760:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_0009e764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e73c;
        }
    }
L_0009e768:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[11]);
    }
L_0009e76c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009e770:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e774:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e778:;
    {
        cpu->r[8] = 0x00006f97u;
    }
L_0009e77c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_0009e780:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e784:;
    {
        cpu->r[14] = 0x0009e788u; imp_fwrite(cpu); /* fwrite */
    }
L_0009e788:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x438u);
    }
L_0009e78c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x43cu);
    }
L_0009e790:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x96f9u << 16);
    }
L_0009e794:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009e798:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0009e79c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[2] = v;
    }
L_0009e7a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009e7a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e86c;
        }
    }
L_0009e7a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0009e7ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009e7b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_0009e7b4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000050u, 0, 0);
    }
L_0009e7b8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_0009e7bc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_0009e7c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0009e7c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0009e7c8:;
    {
        cpu->r[10] = 0x0000009cu;
    }
L_0009e7cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0009e7d0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0009e7d4:;
    {
        goto L_0009e7fc;
    }
L_0009e7d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x438u);
    }
L_0009e7dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009e7e0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x43cu);
    }
L_0009e7e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009e7e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009e7ec:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0009e7f0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[2] = v;
    }
L_0009e7f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0009e7f8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0009e86c;
        }
    }
L_0009e7fc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_0009e800:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009e804:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_0009e808:;
    {
        cpu->r[14] = 0x0009e80cu; imp_memcpy(cpu); /* memcpy */
    }
L_0009e80c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0009e810:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0009e814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e7d8;
        }
    }
L_0009e818:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e81c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e820:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e824:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0009e828:;
    {
        cpu->r[14] = 0x0009e82cu; imp_fwrite(cpu); /* fwrite */
    }
L_0009e82c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e830:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009e834:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e838:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e83c:;
    {
        cpu->r[14] = 0x0009e840u; imp_fwrite(cpu); /* fwrite */
    }
L_0009e840:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e844:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009e848:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009e84c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e850:;
    {
        cpu->r[14] = 0x0009e854u; imp_fwrite(cpu); /* fwrite */
    }
L_0009e854:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009e858:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0009e85c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009e860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e864:;
    {
        cpu->r[14] = 0x0009e868u; imp_fwrite(cpu); /* fwrite */
    }
L_0009e868:;
    {
        goto L_0009e7d8;
    }
L_0009e86c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009e870:;
    {
        cpu->r[14] = 0x0009e874u; imp_fclose(cpu); /* fclose */
    }
L_0009e874:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e878:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009e87c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009e880:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0009e884:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8bcu);
    }
L_0009e888:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009e88c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009e890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009e8ec;
        }
    }
L_0009e894:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0009e898:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_0009e89c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e8a0u)) return;
    }
L_0009e8a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009e8a4:;
    {
        cpu->r[14] = 0x0009e8a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009e8a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e8ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e684;
        }
    }
L_0009e8b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009e8b4:;
    {
        cpu->r[4] = rd32(0x0009e8bcu + + 0x40u);
    }
L_0009e8b8:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0009e8bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e8c0:;
    {
        cpu->r[14] = 0x0009e8c4u; fn_00189f48(cpu);
    }
L_0009e8c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009e8c8:;
    {
        cpu->r[14] = 0x0009e8ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009e8cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009e8d0:;
    {
        cpu->r[3] = rd32(0x0009e8d8u + + 0x38u);
    }
L_0009e8d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e8d8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e8dc:;
    {
        cpu->r[3] = rd32(0x0009e8e4u + + 0x30u);
    }
L_0009e8e0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0009e8e4:;
    {
        cpu->r[14] = 0x0009e8e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009e8e8:;
    {
        goto L_0009e688;
    }
L_0009e8ec:;
    {
        cpu->r[14] = 0x0009e8f0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0009e8f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0009e8f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[0], 1, 27u, &shc); cpu->r[11] = v;
        set_nz(cpu, v);
        }
    }
L_0009e8f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 6u, &shc); cpu->r[0] = v;
        }
    }
L_0009e8fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[0]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[0] = wb_tmp;
        }
    }
L_0009e900:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        cpu->r[0] = rd16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e904:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_0009e908:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_0009e90c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        cpu->r[0] = rd16(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_0009e910:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 4, 11u, &shc); cpu->r[0] = v;
        }
    }
L_0009e914:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN4Game12SavePackagesEv @ 0009e918 (arm) */
void fn_0009e918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e918:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0009e91c:;
    {
        cpu->r[5] = rd32(0x0009e924u + + 0xb0u);
    }
L_0009e920:;
    {
        cpu->r[3] = rd32(0x0009e928u + + 0xb0u);
    }
L_0009e924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009e928:;
    {
        cpu->r[5] = add_flags(cpu, 0x0009e930u, cpu->r[5], 0, 0);
    }
L_0009e92c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e930:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0009e934:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009e938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e990;
        }
    }
L_0009e93c:;
    {
        cpu->r[6] = rd32(0x0009e944u + + 0x98u);
    }
L_0009e940:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009e944:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[6] = v1;
    }
L_0009e948:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_0009e94c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0009e950:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009e954:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009e988;
        }
    }
L_0009e958:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009e95c:;
    {
        goto L_0009e968;
    }
L_0009e960:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_0009e964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e988;
        }
    }
L_0009e968:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009e96c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009e970:;
    {
        cpu->r[14] = 0x0009e974u; fn_0009e638(cpu);
    }
L_0009e974:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0009e978:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e97c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009e960;
        }
    }
L_0009e980:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0009e984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e988u)) return;
    }
L_0009e988:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009e98c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009e990u)) return;
    }
L_0009e990:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e994:;
    {
        cpu->r[14] = 0x0009e998u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009e998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009e99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009e93c;
        }
    }
L_0009e9a0:;
    {
        cpu->r[6] = rd32(0x0009e9a8u + + 0x34u);
    }
L_0009e9a4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0009e9a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e9ac:;
    {
        cpu->r[14] = 0x0009e9b0u; fn_00189f48(cpu);
    }
L_0009e9b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009e9b4:;
    {
        cpu->r[14] = 0x0009e9b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009e9b8:;
    {
        cpu->r[3] = rd32(0x0009e9c0u + + 0x20u);
    }
L_0009e9bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009e9c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e9c4:;
    {
        cpu->r[3] = rd32(0x0009e9ccu + + 0x18u);
    }
L_0009e9c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009e9cc:;
    {
        cpu->r[14] = 0x0009e9d0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009e9d0:;
    {
        goto L_0009e940;
    }
}

/* _ZN4Game8SaveDataEb @ 0009e9e8 (arm) */
void fn_0009e9e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009e9e8:;
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
L_0009e9ec:;
    {
        cpu->r[4] = rd32(0x0009e9f4u + + 0x104u);
    }
L_0009e9f0:;
    {
        cpu->r[5] = rd32(0x0009e9f8u + + 0x104u);
    }
L_0009e9f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_0009e9f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009ea00u, cpu->r[4], 0, 0);
    }
L_0009e9fc:;
    {
        cpu->r[9] = rd8(cpu->r[0] + + 0x481u);
    }
L_0009ea00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009ea04:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009ea08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009ea0c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0009ea10:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0009ea14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009ea18:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[3]);
    }
L_0009ea1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ea44;
        }
    }
L_0009ea20:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009ea24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009ea28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_0009ea2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009ea30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009ea34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009eaf4;
        }
    }
L_0009ea38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009ea3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0009ea40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009ea44u)) return;
    }
L_0009ea44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009ea48:;
    {
        cpu->r[1] = rd32(0x0009ea50u + + 0xb0u);
    }
L_0009ea4c:;
    {
        cpu->r[2] = rd32(0x0009ea54u + + 0xb0u);
    }
L_0009ea50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_0009ea54:;
    {
        cpu->r[3] = rd32(0x0009ea5cu + + 0xacu);
    }
L_0009ea58:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009ea60u, cpu->r[1], 0, 0);
    }
L_0009ea5c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009ea64u, cpu->r[2], 0, 0);
    }
L_0009ea60:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0009ea64:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009ea6cu, cpu->r[3], 0, 0);
    }
L_0009ea68:;
    {
        wr8(cpu->r[0] + + 0x480u, cpu->r[9]);
    }
L_0009ea6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ea70:;
    {
        cpu->r[14] = 0x0009ea74u; imp_sprintf(cpu); /* sprintf */
    }
L_0009ea74:;
    {
        cpu->r[1] = rd32(0x0009ea7cu + + 0x90u);
    }
L_0009ea78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ea7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009ea84u, cpu->r[1], 0, 0);
    }
L_0009ea80:;
    {
        cpu->r[14] = 0x0009ea84u; imp_fopen(cpu); /* fopen */
    }
L_0009ea84:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ea88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0009ea8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ea24;
        }
    }
L_0009ea90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009ea94:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0009ea98:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009ea9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 0);
    }
L_0009eaa0:;
    {
        cpu->r[12] = 0x00000059u;
    }
L_0009eaa4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x7777u << 16);
    }
L_0009eaa8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009eaac:;
    {
        cpu->r[14] = 0x0009eab0u; imp_fwrite(cpu); /* fwrite */
    }
L_0009eab0:;
    {
        cpu->r[14] = 0x0009eab4u; fn_000979a0(cpu);
    }
L_0009eab4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0009eab8:;
    {
        cpu->r[14] = 0x0009eabcu; fn_00094f00(cpu);
    }
L_0009eabc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0009eac0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009eae0;
        }
    }
L_0009eac4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009eac8:;
    {
        cpu->r[14] = 0x0009eaccu; imp_fflush(cpu); /* fflush */
    }
L_0009eacc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ead0:;
    {
        cpu->r[14] = 0x0009ead4u; imp_fclose(cpu); /* fclose */
    }
L_0009ead4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009ead8:;
    {
        cpu->r[14] = 0x0009eadcu; fn_0009e918(cpu);
    }
L_0009eadc:;
    {
        goto L_0009ea24;
    }
L_0009eae0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009eae4:;
    {
        cpu->r[14] = 0x0009eae8u; imp_fflush(cpu); /* fflush */
    }
L_0009eae8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009eaec:;
    {
        cpu->r[14] = 0x0009eaf0u; imp_fclose(cpu); /* fclose */
    }
L_0009eaf0:;
    {
        goto L_0009ea20;
    }
L_0009eaf4:;
    {
        cpu->r[14] = 0x0009eaf8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0009eaf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[8], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[11] = v;
        set_nz(cpu, v);
        }
    }
L_0009eafc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0009eb00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & cpu->r[12]; cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_0009eb04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_0009eb08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_0009eb0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 32u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game18Package_LoadConfigEi @ 0009eb10 (arm) */
void fn_0009eb10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009eb10:;
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
L_0009eb14:;
    {
        cpu->r[6] = rd32(0x0009eb1cu + + 0x180u);
    }
L_0009eb18:;
    {
        cpu->r[8] = rd32(0x0009eb20u + + 0x180u);
    }
L_0009eb1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0009eb20:;
    {
        cpu->r[6] = add_flags(cpu, 0x0009eb28u, cpu->r[6], 0, 0);
    }
L_0009eb24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009eb28:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0009eb2c:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009eb30:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0009eb34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009eb38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009eb60;
        }
    }
L_0009eb3c:;
    {
        cpu->r[7] = rd32(0x0009eb44u + + 0x160u);
    }
L_0009eb40:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009eb44:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_0009eb48:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0009eb4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009eb50:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_0009eb54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009ebb8;
        }
    }
L_0009eb58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009eb5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009eb60u)) return;
    }
L_0009eb60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009eb64:;
    {
        cpu->r[14] = 0x0009eb68u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009eb68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009eb6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009eb3c;
        }
    }
L_0009eb70:;
    {
        cpu->r[7] = rd32(0x0009eb78u + + 0x12cu);
    }
L_0009eb74:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009eb78:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009eb7c:;
    {
        cpu->r[14] = 0x0009eb80u; fn_00189f48(cpu);
    }
L_0009eb80:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009eb84:;
    {
        cpu->r[14] = 0x0009eb88u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009eb88:;
    {
        cpu->r[3] = rd32(0x0009eb90u + + 0x118u);
    }
L_0009eb8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009eb90:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009eb94:;
    {
        cpu->r[3] = rd32(0x0009eb9cu + + 0x110u);
    }
L_0009eb98:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009eb9c:;
    {
        cpu->r[14] = 0x0009eba0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009eba0:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009eba4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_0009eba8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0009ebac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009ebb0:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_0009ebb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009eb58;
        }
    }
L_0009ebb8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009ebbc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0009ebc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009ebc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ec28;
        }
    }
L_0009ebc8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009ebcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0009ebd0:;
    {
        cpu->r[14] = 0x0009ebd4u; fn_00189f5c(cpu);
    }
L_0009ebd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009ebd8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009ebdc:;
    {
        cpu->r[14] = 0x0009ebe0u; fn_00189778(cpu);
    }
L_0009ebe0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ebe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ec64;
        }
    }
L_0009ebe8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009ebec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ebf0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009ebf4:;
    {
        cpu->r[14] = 0x0009ebf8u; fn_0009dae0(cpu);
    }
L_0009ebf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ebfc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009ec00:;
    {
        cpu->r[14] = 0x0009ec04u; fn_0009cfa8(cpu);
    }
L_0009ec04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ec08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0009ec0c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0009ec10:;
    {
        cpu->r[14] = 0x0009ec14u; fn_0009d3bc(cpu);
    }
L_0009ec14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009ec18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009ec1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0009ec20:;
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
L_0009ec24:;
    {
        return fn_00189728(cpu);
    }
L_0009ec28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ec2c:;
    {
        cpu->r[14] = 0x0009ec30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009ec30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ec34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ebc8;
        }
    }
L_0009ec38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009ec3c:;
    {
        cpu->r[14] = 0x0009ec40u; fn_00189f48(cpu);
    }
L_0009ec40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ec44:;
    {
        cpu->r[14] = 0x0009ec48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009ec48:;
    {
        cpu->r[3] = rd32(0x0009ec50u + + 0x58u);
    }
L_0009ec4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009ec50:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009ec54:;
    {
        cpu->r[3] = rd32(0x0009ec5cu + + 0x50u);
    }
L_0009ec58:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009ec5c:;
    {
        cpu->r[14] = 0x0009ec60u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009ec60:;
    {
        goto L_0009ebc8;
    }
L_0009ec64:;
    {
        cpu->r[1] = rd32(0x0009ec6cu + + 0x44u);
    }
L_0009ec68:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0009ec6c:;
    {
        cpu->r[12] = rd32(0x0009ec74u + + 0x40u);
    }
L_0009ec70:;
    {
        cpu->r[14] = 0x000026d0u;
    }
L_0009ec74:;
    {
        cpu->r[2] = rd32(0x0009ec7cu + + 0x3cu);
    }
L_0009ec78:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009ec80u, cpu->r[1], 0, 0);
    }
L_0009ec7c:;
    {
        cpu->r[3] = rd32(0x0009ec84u + + 0x38u);
    }
L_0009ec80:;
    {
        cpu->r[12] = add_flags(cpu, 0x0009ec88u, cpu->r[12], 0, 0);
    }
L_0009ec84:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009ec8cu, cpu->r[2], 0, 0);
    }
L_0009ec88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002c8u, 0, 0);
    }
L_0009ec8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009ec94u, cpu->r[3], 0, 0);
    }
L_0009ec90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0009ec94:;
    {
        cpu->r[14] = 0x0009ec98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009ec98:;
    {
        goto L_0009ebe8;
    }
}

/* _ZN4Game10getFontSprEi @ 0009ecc0 (arm) */
void fn_0009ecc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009ecc0:;
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
L_0009ecc4:;
    {
        cpu->r[4] = rd32(0x0009ecccu + + 0x84u);
    }
L_0009ecc8:;
    {
        cpu->r[3] = rd32(0x0009ecd0u + + 0x84u);
    }
L_0009eccc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009ecd0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009ecd8u, cpu->r[4], 0, 0);
    }
L_0009ecd4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0009ecd8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ecdc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0009ece0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009ece4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ed0c;
        }
    }
L_0009ece8:;
    {
        cpu->r[5] = rd32(0x0009ecf0u + + 0x68u);
    }
L_0009ecec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009ecf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009ecf4:;
    {
        cpu->r[14] = 0x0009ecf8u; fn_00096a08(cpu);
    }
L_0009ecf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009ecfc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009ed00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009ed04:;
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
L_0009ed08:;
    {
        return fn_0018aa44(cpu);
    }
L_0009ed0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ed10:;
    {
        cpu->r[14] = 0x0009ed14u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009ed14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ed18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ece8;
        }
    }
L_0009ed1c:;
    {
        cpu->r[5] = rd32(0x0009ed24u + + 0x34u);
    }
L_0009ed20:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009ed24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009ed28:;
    {
        cpu->r[14] = 0x0009ed2cu; fn_0018aa20(cpu);
    }
L_0009ed2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ed30:;
    {
        cpu->r[14] = 0x0009ed34u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009ed34:;
    {
        cpu->r[3] = rd32(0x0009ed3cu + + 0x20u);
    }
L_0009ed38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009ed3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ed40:;
    {
        cpu->r[3] = rd32(0x0009ed48u + + 0x18u);
    }
L_0009ed44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ed48:;
    {
        cpu->r[14] = 0x0009ed4cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009ed4c:;
    {
        goto L_0009ecec;
    }
}

/* _ZN4Game12DbgPrintInfoEv @ 0009ed64 (arm) */
void fn_0009ed64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009ed64:;
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
L_0009ed68:;
    {
        cpu->r[4] = rd32(0x0009ed70u + + 0x2c0u);
    }
L_0009ed6c:;
    {
        cpu->r[3] = rd32(0x0009ed74u + + 0x2c0u);
    }
L_0009ed70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0009ed74:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009ed7cu, cpu->r[4], 0, 0);
    }
L_0009ed78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009ed7c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ed80:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0009ed84:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009ed88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ef54;
        }
    }
L_0009ed8c:;
    {
        cpu->r[6] = rd32(0x0009ed94u + + 0x2a4u);
    }
L_0009ed90:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009ed94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ed98:;
    {
        cpu->r[14] = 0x0009ed9cu; fn_00096a08(cpu);
    }
L_0009ed9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009eda0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009eda4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009eda8:;
    {
        cpu->r[14] = 0x0009edacu; fn_0018aa44(cpu);
    }
L_0009edac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009edb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ef98;
        }
    }
L_0009edb4:;
    {
        cpu->r[1] = rd32(0x0009edbcu + + 0x280u);
    }
L_0009edb8:;
    {
        cpu->r[12] = (~0x000000ffu);
    }
L_0009edbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_0009edc0:;
    {
        cpu->r[2] = 0x00008889u;
    }
L_0009edc4:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[12]);
    }
L_0009edc8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8888u << 16);
    }
L_0009edcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0009edd0:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0009edd4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009edd8:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0009eddc:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_0009ede0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ede4:;
    {
        cpu->r[6] = rd32(0x0009edecu + + 0x254u);
    }
L_0009ede8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0009edec:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x4d4u);
    }
L_0009edf0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009edf4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0009edf8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0009edfc:;
    {
        wr32(cpu->r[8] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[10]);
    }
L_0009ee00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0009ee04:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[6], 1, 0);
    }
L_0009ee08:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[12] = v;
    }
L_0009ee0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 1u, &shc), 1, 0);
    }
L_0009ee10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0009ee14:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0009ee18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ef24;
        }
    }
L_0009ee1c:;
    {
        cpu->r[3] = 0x00008c44u;
    }
L_0009ee20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009ee24:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0009ee28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ee2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ef2c;
        }
    }
L_0009ee30:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_0009ee34:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_0009ee38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0009ee3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ee40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ef24;
        }
    }
L_0009ee44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009ee48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009ee4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009ee50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009ee54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009ee58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ee5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ef24;
        }
    }
L_0009ee60:;
    {
        cpu->r[2] = rd32(0x0009ee68u + + 0x1dcu);
    }
L_0009ee64:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0009ee68:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_0009ee6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009ee70:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_0009ee74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009ee78:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_0009ee7c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[12] = v0;
        cpu->r[14] = v1;
    }
L_0009ee80:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0009ee84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_0009ee88:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_0009ee8c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0009ee90:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0009ee94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0009ee98:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0009ee9c:;
    {
        cpu->r[14] = 0x0009eea0u; fn_0018572c(cpu);
    }
L_0009eea0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009eea4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0009eea8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009eeac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009eeb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009eeb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009eeb8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009eebc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009eec0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009eec4:;
    {
        cpu->r[14] = 0x0009eeccu;
    }
L_0009eec8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009eeccu)) return;
    }
L_0009eecc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009eed0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0009eed4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009eed8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009eedc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009eee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009eee4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009eee8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009eeec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009eef0:;
    {
        cpu->r[14] = 0x0009eef8u;
    }
L_0009eef4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009eef8u)) return;
    }
L_0009eef8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009eefc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0009ef00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009ef04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009ef08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009ef0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009ef10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009ef14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009ef18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009ef1c:;
    {
        cpu->r[14] = 0x0009ef24u;
    }
L_0009ef20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0009ef24u)) return;
    }
L_0009ef24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0009ef28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009ef2cu)) return;
    }
L_0009ef2c:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_0009ef30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0009ef34:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0009ef38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009ef3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ee30;
        }
    }
L_0009ef40:;
    {
        cpu->r[14] = 0x0009ef44u; fn_000bc9ec(cpu);
    }
L_0009ef44:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0009ef48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ef4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009ee30;
        }
    }
L_0009ef50:;
    {
        goto L_0009ef24;
    }
L_0009ef54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009ef58:;
    {
        cpu->r[14] = 0x0009ef5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009ef5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ed8c;
        }
    }
L_0009ef64:;
    {
        cpu->r[6] = rd32(0x0009ef6cu + + 0xccu);
    }
L_0009ef68:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0009ef6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ef70:;
    {
        cpu->r[14] = 0x0009ef74u; fn_0018aa20(cpu);
    }
L_0009ef74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009ef78:;
    {
        cpu->r[14] = 0x0009ef7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009ef7c:;
    {
        cpu->r[3] = rd32(0x0009ef84u + + 0xc4u);
    }
L_0009ef80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009ef84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ef88:;
    {
        cpu->r[3] = rd32(0x0009ef90u + + 0xbcu);
    }
L_0009ef8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009ef90:;
    {
        cpu->r[14] = 0x0009ef94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009ef94:;
    {
        goto L_0009ed90;
    }
L_0009ef98:;
    {
        cpu->r[14] = 0x0009ef9cu; fn_00097ad0(cpu);
    }
L_0009ef9c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009efa0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009efa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009efa8:;
    {
        cpu->r[14] = 0x0009efacu; fn_00096a08(cpu);
    }
L_0009efac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0009efb0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009efb4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009efb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009efbc:;
    {
        cpu->r[14] = 0x0009efc0u; fn_0018aa58(cpu);
    }
L_0009efc0:;
    {
        cpu->r[14] = 0x0009efc4u; fn_00097ad0(cpu);
    }
L_0009efc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009efc8:;
    {
        cpu->r[14] = 0x0009efccu; fn_0018b5c8(cpu);
    }
L_0009efcc:;
    {
        cpu->r[14] = 0x0009efd0u; fn_00097ad0(cpu);
    }
L_0009efd0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009efd4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009efd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009efdc:;
    {
        cpu->r[14] = 0x0009efe0u; fn_00096a08(cpu);
    }
L_0009efe0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0009efe4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009efe8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009efec:;
    {
        cpu->r[14] = 0x0009eff0u; fn_0018aa44(cpu);
    }
L_0009eff0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009eff4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009edb4;
        }
    }
L_0009eff8:;
    {
        cpu->r[1] = rd32(0x0009f000u + + 0x50u);
    }
L_0009effc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_0009f000:;
    {
        cpu->r[12] = rd32(0x0009f008u + + 0x4cu);
    }
L_0009f004:;
    {
        cpu->r[14] = 0x0000111au;
    }
L_0009f008:;
    {
        cpu->r[2] = rd32(0x0009f010u + + 0x48u);
    }
L_0009f00c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009f014u, cpu->r[1], 0, 0);
    }
L_0009f010:;
    {
        cpu->r[3] = rd32(0x0009f018u + + 0x44u);
    }
L_0009f014:;
    {
        cpu->r[12] = add_flags(cpu, 0x0009f01cu, cpu->r[12], 0, 0);
    }
L_0009f018:;
    {
        cpu->r[2] = add_flags(cpu, 0x0009f020u, cpu->r[2], 0, 0);
    }
L_0009f01c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002dcu, 0, 0);
    }
L_0009f020:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009f028u, cpu->r[3], 0, 0);
    }
L_0009f024:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0009f028:;
    {
        cpu->r[14] = 0x0009f02cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0009f02c:;
    {
        goto L_0009edb4;
    }
}

/* _ZN4Game20DrawDebugSuspensionsEv @ 0009f060 (arm) */
void fn_0009f060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009f060:;
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
L_0009f064:;
    {
        cpu->r[8] = rd32(0x0009f06cu + + 0x1b8u);
    }
L_0009f068:;
    {
        cpu->r[11] = rd32(0x0009f070u + + 0x1b8u);
    }
L_0009f06c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009f070:;
    {
        cpu->r[8] = add_flags(cpu, 0x0009f078u, cpu->r[8], 0, 0);
    }
L_0009f074:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000234u, 1, 0);
    }
L_0009f078:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0009f07c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009f080:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_0009f084:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009f088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009f08c:;
    {
        wr32(cpu->r[13] + + 0x22cu, cpu->r[3]);
    }
L_0009f090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f1c0;
        }
    }
L_0009f094:;
    {
        cpu->r[3] = rd32(0x0009f09cu + + 0x190u);
    }
L_0009f098:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0009f09c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009f0a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009f0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f1dc;
        }
    }
L_0009f0a8:;
    {
        cpu->r[5] = rd32(0x0009f0b0u + + 0x180u);
    }
L_0009f0ac:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0009f0b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009f0b4:;
    {
        cpu->r[14] = 0x0009f0b8u; fn_00096a08(cpu);
    }
L_0009f0b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009f0bc:;
    {
        cpu->r[9] = rd32(0x0009f0c4u + + 0x170u);
    }
L_0009f0c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0009f0c4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009f0c8:;
    {
        cpu->r[9] = add_flags(cpu, 0x0009f0d0u, cpu->r[9], 0, 0);
    }
L_0009f0cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f0d0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_0009f0d4:;
    {
        cpu->r[14] = 0x0009f0d8u; fn_0018aa44(cpu);
    }
L_0009f0d8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0009f0dc:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0009f0e0:;
    {
        cpu->r[5] = 0x00000050u;
    }
L_0009f0e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f0e8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0009f0ec:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0009f0f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009f0f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0009f0f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0009f0fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009f100:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009f104:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0009f108:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0009f10c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0009f110:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xe0u);
    }
L_0009f114:;
    {
        vfp_vadd(cpu, 10, 15, 15);
    }
L_0009f118:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0xf0u);
    }
L_0009f11c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_0009f120:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0009f124:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f128:;
    {
        *vfp_d(cpu,4) = (double)*vfp_s(cpu,8);
    }
L_0009f12c:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,15);
    }
L_0009f130:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 4);
    }
L_0009f134:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,10);
    }
L_0009f138:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0009f13c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xc0u);
    }
L_0009f140:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0009f144:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x18u) = *(uint64_t*)vfp_d(cpu, 5);
    }
L_0009f148:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,13);
    }
L_0009f14c:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_0009f150:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_0009f154:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0009f158:;
    {
        cpu->r[14] = 0x0009f15cu; imp_sprintf(cpu); /* sprintf */
    }
L_0009f15c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f160:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f164:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_0009f168:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009f16c:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_0009f170:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009f174:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0009f178:;
    {
        cpu->r[14] = 0x0009f17cu; fn_000ad83c(cpu);
    }
L_0009f17c:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000a0u, 1, 1);
    }
L_0009f180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009f110;
        }
    }
L_0009f184:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f188:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xb8u);
    }
L_0009f18c:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_0009f190:;
    {
        cpu->r[1] = rd32(0x0009f198u + + 0xa0u);
    }
L_0009f194:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f198:;
    {
        cpu->r[1] = add_flags(cpu, 0x0009f1a0u, cpu->r[1], 0, 0);
    }
L_0009f19c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_0009f1a0:;
    {
        cpu->r[14] = 0x0009f1a4u; imp_sprintf(cpu); /* sprintf */
    }
L_0009f1a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f1a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0009f1ac:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f1b0:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_0009f1b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0009f1b8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0009f1bc:;
    {
        cpu->r[14] = 0x0009f1c0u; fn_000ad83c(cpu);
    }
L_0009f1c0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_0009f1c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x22cu);
    }
L_0009f1c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0009f1cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0009f1d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009f220;
        }
    }
L_0009f1d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000234u, 0, 0);
    }
L_0009f1d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009f1dcu)) return;
    }
L_0009f1dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f1e0:;
    {
        cpu->r[14] = 0x0009f1e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009f1e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009f1e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f0a8;
        }
    }
L_0009f1ec:;
    {
        cpu->r[5] = rd32(0x0009f1f4u + + 0x3cu);
    }
L_0009f1f0:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_0009f1f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f1f8:;
    {
        cpu->r[14] = 0x0009f1fcu; fn_0018aa20(cpu);
    }
L_0009f1fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f200:;
    {
        cpu->r[14] = 0x0009f204u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009f204:;
    {
        cpu->r[3] = rd32(0x0009f20cu + + 0x30u);
    }
L_0009f208:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f20c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0009f210:;
    {
        cpu->r[3] = rd32(0x0009f218u + + 0x28u);
    }
L_0009f214:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0009f218:;
    {
        cpu->r[14] = 0x0009f21cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009f21c:;
    {
        goto L_0009f0ac;
    }
L_0009f220:;
    {
        cpu->r[14] = 0x0009f224u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0009f224:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[11] = v;
        set_nz(cpu, v);
        }
    }
L_0009f228:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0009f22c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0009f230:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_0009f234:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 4, 19u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x0009f238u)) return;
        set_nz(cpu, v);
        }
    }
L_0009f238:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 1, 18u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x0009f23cu)) return;
        set_nz(cpu, v);
        }
    }
L_0009f23c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_0009f240:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN4Game31PaintAndUpdateInterfaceTutorialEv @ 0009f244 (arm) */
void fn_0009f244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009f244:;
    {
        cpu->r[3] = 0x00001cb4u;
    }
L_0009f248:;
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
L_0009f24c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0009f250:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0009f254:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0009f258:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_0009f25c:;
    {
        cpu->r[4] = rd32(0x0009f264u + + 0x47cu);
    }
L_0009f260:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009f264:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009f26cu, cpu->r[4], 0, 0);
    }
L_0009f268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009f278;
        }
    }
L_0009f26c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_0009f270:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0009f274:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009f278u)) return;
    }
L_0009f278:;
    {
        cpu->r[8] = rd32(0x0009f280u + + 0x464u);
    }
L_0009f27c:;
    {
        cpu->r[3] = rd32(0x0009f284u + + 0x464u);
    }
L_0009f280:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009f284:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f288:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0009f28c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0009f290:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009f294:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0009f298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f5b0;
        }
    }
L_0009f29c:;
    {
        cpu->r[5] = rd32(0x0009f2a4u + + 0x448u);
    }
L_0009f2a0:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0009f2a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f2a8:;
    {
        cpu->r[14] = 0x0009f2acu; fn_00096a08(cpu);
    }
L_0009f2ac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009f2b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009f2b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f2b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f2bc:;
    {
        cpu->r[14] = 0x0009f2c0u; fn_0018aa44(cpu);
    }
L_0009f2c0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009f2c4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0009f2c8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009f2cc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009f2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f660;
        }
    }
L_0009f2d4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0009f2d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f2dc:;
    {
        cpu->r[14] = 0x0009f2e0u; fn_00096a08(cpu);
    }
L_0009f2e0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009f2e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009f2e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f2ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f2f0:;
    {
        cpu->r[14] = 0x0009f2f4u; fn_0018aa44(cpu);
    }
L_0009f2f4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0009f2f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x54u);
    }
L_0009f2fc:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0009f300:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_0009f304:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0009f308:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0009f30c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009f310:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0009f314:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f69c;
        }
    }
L_0009f318:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009f31c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009f320:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_0009f324:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009f328:;
    {
        cpu->r[14] = 0x0009f32cu; fn_0018aa44(cpu);
    }
L_0009f32c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_0009f330:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009f334:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f338:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009f33c:;
    {
        cpu->r[10] = 0x00001ca0u;
    }
L_0009f340:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0009f344:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0009f348:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0009f34c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0009f350:;
    {
        cpu->r[14] = 0x0009f354u; fn_000a8a2c(cpu);
    }
L_0009f354:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x100u);
    }
L_0009f358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0009f35c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xf8u);
    }
L_0009f360:;
    {
        cpu->r[1] = 0x000000d2u;
    }
L_0009f364:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x104u);
    }
L_0009f368:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009f36c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_0009f370:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xfcu);
    }
L_0009f374:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f378:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009f380u + + 0x358u);
    }
L_0009f37c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_0009f380:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_0009f384:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0009f388:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f38c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f390:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009f394:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0009f398:;
    {
        wr8(cpu->r[13] + + 0xc8u, cpu->r[5]);
    }
L_0009f39c:;
    {
        wr8(cpu->r[13] + + 0xc9u, cpu->r[5]);
    }
L_0009f3a0:;
    {
        wr8(cpu->r[13] + + 0xd4u, cpu->r[5]);
    }
L_0009f3a4:;
    {
        cpu->r[14] = 0x0009f3a8u; fn_000eaac4(cpu);
    }
L_0009f3a8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0009f3ac:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f3b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009f3b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_0009f3b8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009f3bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0009f3c0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0009f3c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0009f3c8:;
    {
        cpu->r[14] = 0x0009f3ccu; fn_000a8a2c(cpu);
    }
L_0009f3cc:;
    {
        cpu->r[3] = rd32(0x0009f3d4u + + 0x31cu);
    }
L_0009f3d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xecu);
    }
L_0009f3d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xe8u);
    }
L_0009f3d8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f3dc:;
    {
        cpu->r[3] = rd32(0x0009f3e4u + + 0x310u);
    }
L_0009f3e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009f3e4:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_0009f3e8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f3ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf4u);
    }
L_0009f3f0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0009f3f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0009f3f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_0009f3fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0009f400:;
    {
        cpu->r[14] = rd32(cpu->r[11]);
    }
L_0009f404:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_0009f408:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xf0u);
    }
L_0009f40c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_0009f410:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0009f414:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009f418:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0009f41c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0009f420:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0009f424:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0009f428:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f42c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0009f430:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0009f434:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0009f438:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0009f43c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0009f440:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009f444:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_0009f448:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[14];
    }
L_0009f44c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0009f450:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0009f454:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0009f458:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009f45c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0009f460:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0009f464:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_0009f468:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0009f46c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0009f470:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f474:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f478:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0009f47c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_0009f480:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 26u, &shc); cpu->r[1] = v;
    }
L_0009f484:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0009f488:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0009f48c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0009f490:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0009f494:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f498:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0009f49c:;
    {
        cpu->r[14] = 0x0009f4a0u; fn_0012dd58(cpu);
    }
L_0009f4a0:;
    {
        cpu->r[14] = rd32(cpu->r[9]);
    }
L_0009f4a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009f4a8:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0009f4ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009f4b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009f4b4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0009f4b8:;
    {
        cpu->r[14] = 0x0009f4bcu; fn_00130908(cpu);
    }
L_0009f4bc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0009f4c0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0009f4c4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0009f4c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009f4d0u + + 0x20cu);
    }
L_0009f4cc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[8];
    }
L_0009f4d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f4d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0009f4d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_0009f4dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009f4e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0009f4e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], shifter(cpu->r[8], 1, 1u, &shc), 0, 0);
    }
L_0009f4e8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0009f4ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009f4f0:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_0009f4f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0009f4f8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0009f4fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0009f500:;
    {
        cpu->r[3] = 0x00190000u;
    }
L_0009f504:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0009f508:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0009f50c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_0009f510:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009f514:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0009f518:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0009f51c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0009f520:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0009f524:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0009f528:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0009f52c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0009f530:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 1u, &shc), 1, 0);
    }
L_0009f534:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0009f538:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0009f53c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_0009f540:;
    {
        cpu->r[14] = 0x0009f544u; fn_000adab4(cpu);
    }
L_0009f544:;
    {
        cpu->r[1] = 0x00001cacu;
    }
L_0009f548:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_0009f54c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_0009f550:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_0009f554:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_0009f558:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_0009f55c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009f560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f708;
        }
    }
L_0009f564:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0009f568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f5f4;
        }
    }
L_0009f56c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0009f570:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009f5a0;
        }
    }
L_0009f574:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0009f578:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_0009f57c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0009f580:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0009f584:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_0009f588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f5a0;
        }
    }
L_0009f58c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00001cacu;
        }
    }
L_0009f590:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0009f594:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0009f598:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + cpu->r[10], cpu->r[3]);
        }
    }
L_0009f59c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + cpu->r[12], cpu->r[3]);
        }
    }
L_0009f5a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0009f5a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009f5a8:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[1]);
    }
L_0009f5ac:;
    {
        goto L_0009f26c;
    }
L_0009f5b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f5b4:;
    {
        cpu->r[14] = 0x0009f5b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009f5b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009f5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f29c;
        }
    }
L_0009f5c0:;
    {
        cpu->r[5] = rd32(0x0009f5c8u + + 0x124u);
    }
L_0009f5c4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0009f5c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f5cc:;
    {
        cpu->r[14] = 0x0009f5d0u; fn_0018aa20(cpu);
    }
L_0009f5d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f5d4:;
    {
        cpu->r[14] = 0x0009f5d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009f5d8:;
    {
        cpu->r[3] = rd32(0x0009f5e0u + + 0x118u);
    }
L_0009f5dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f5e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f5e4:;
    {
        cpu->r[3] = rd32(0x0009f5ecu + + 0x110u);
    }
L_0009f5e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f5ec:;
    {
        cpu->r[14] = 0x0009f5f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009f5f0:;
    {
        goto L_0009f2a0;
    }
L_0009f5f4:;
    {
        cpu->r[4] = 0x00001cb4u;
    }
L_0009f5f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0009f5fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009f600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009fa44;
        }
    }
L_0009f604:;
    {
        cpu->r[7] = 0x00001cb0u;
    }
L_0009f608:;
    {
        cpu->r[14] = 0x0009f60cu; fn_000979a0(cpu);
    }
L_0009f60c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009f610:;
    {
        cpu->r[14] = 0x0009f614u; fn_00094204(cpu);
    }
L_0009f614:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0009f618:;
    {
        cpu->r[2] = 0x00001d2cu;
    }
L_0009f61c:;
    {
        cpu->r[1] = 0x00001cacu;
    }
L_0009f620:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0009f624:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_0009f628:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_0009f62c:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[5]);
    }
L_0009f630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0009f634:;
    {
        wr32(cpu->r[6] + cpu->r[1], cpu->r[5]);
    }
L_0009f638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009f63c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009f640:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0009f644:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_0009f648:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d30u;
        }
    }
L_0009f64c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0009f650:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
        }
    }
L_0009f654:;
    {
        cpu->r[3] = 0x00001ca4u;
    }
L_0009f658:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009f65c:;
    {
        goto L_0009f26c;
    }
L_0009f660:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009f664:;
    {
        cpu->r[14] = 0x0009f668u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009f668:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009f66c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f2d4;
        }
    }
L_0009f670:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f674:;
    {
        cpu->r[14] = 0x0009f678u; fn_0018aa20(cpu);
    }
L_0009f678:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0009f67c:;
    {
        cpu->r[14] = 0x0009f680u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009f680:;
    {
        cpu->r[3] = rd32(0x0009f688u + + 0x70u);
    }
L_0009f684:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f688:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f68c:;
    {
        cpu->r[3] = rd32(0x0009f694u + + 0x68u);
    }
L_0009f690:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f694:;
    {
        cpu->r[14] = 0x0009f698u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009f698:;
    {
        goto L_0009f2d4;
    }
L_0009f69c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009f6a0:;
    {
        cpu->r[14] = 0x0009f6a4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009f6a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009f6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f318;
        }
    }
L_0009f6ac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f6b0:;
    {
        cpu->r[14] = 0x0009f6b4u; fn_0018aa20(cpu);
    }
L_0009f6b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009f6b8:;
    {
        cpu->r[14] = 0x0009f6bcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009f6bc:;
    {
        cpu->r[3] = rd32(0x0009f6c4u + + 0x34u);
    }
L_0009f6c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009f6c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f6c8:;
    {
        cpu->r[3] = rd32(0x0009f6d0u + + 0x2cu);
    }
L_0009f6cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009f6d0:;
    {
        cpu->r[14] = 0x0009f6d4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009f6d4:;
    {
        goto L_0009f318;
    }
L_0009f708:;
    {
        vfp_vsub(cpu, 17, 12, 14);
    }
L_0009f70c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0009f714u + - 0x10u);
    }
L_0009f710:;
    {
        cpu->r[3] = 0x00001d2cu;
    }
L_0009f714:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009f718:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009f71c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0009f720:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009f724:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0009f728:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009f72c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_0009f730:;
    {
        vfp_vsub(cpu, 16, 13, 15);
    }
L_0009f734:;
    {
        vfp_vadd(cpu, 17, 17, 11);
    }
L_0009f738:;
    {
        vfp_vadd(cpu, 16, 16, 11);
    }
L_0009f73c:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_0009f740:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0009f744:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0009f748:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0009f74c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_0009f750:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0009f754:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0009f758:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[14] = v;
    }
L_0009f75c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[14];
    }
L_0009f760:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0009f764:;
    {
        vfp_vadd(cpu, 17, 14, 17);
    }
L_0009f768:;
    {
        vfp_vadd(cpu, 16, 15, 16);
    }
L_0009f76c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0009f770:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0009f774:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0009f778:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0009f77c:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_0009f780:;
    {
        cpu->r[14] = 0x0009f784u; fn_000ad8a0(cpu);
    }
L_0009f784:;
    {
        cpu->r[3] = 0x00001cb4u;
    }
L_0009f788:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009f78c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009f790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009f794:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000415u;
        }
    }
L_0009f798:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000482u;
        }
    }
L_0009f79c:;
    {
        cpu->r[14] = 0x0009f7a0u; fn_000aeb58(cpu);
    }
L_0009f7a0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0009f7a4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0009f7a8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0009f7ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0009f7b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009f7b4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0009f7b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f7bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f7c0:;
    {
        cpu->r[14] = 0x0009f7c4u; fn_000ad19c(cpu);
    }
L_0009f7c4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0009f7c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f7cc:;
    {
        cpu->r[2] = (~0xff000000u);
    }
L_0009f7d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009f7d4:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_0009f7d8:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_0009f7dc:;
    {
        cpu->r[3] = 0x00001cb0u;
    }
L_0009f7e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000028u, 1, 0);
    }
L_0009f7e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0009f7e8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009f7ec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0009f7f0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0009f7f4:;
    {
        cpu->r[14] = 0x0009f7f8u; fn_000aeb58(cpu);
    }
L_0009f7f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009f7fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f800:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f804:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f808:;
    {
        cpu->r[14] = 0x0009f80cu; fn_000a9818(cpu);
    }
L_0009f80c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f810:;
    {
        cpu->r[14] = 0x0009f814u; fn_000962d0(cpu);
    }
L_0009f814:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_0009f818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fa2c;
        }
    }
L_0009f81c:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x54u);
    }
L_0009f820:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x44u);
    }
L_0009f824:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009f828:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f82c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_0009f830:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0009f834:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x54u);
    }
L_0009f838:;
    {
        cpu->r[1] = rd16(cpu->r[2]);
    }
L_0009f83c:;
    {
        cpu->r[2] = rd16(cpu->r[12]);
    }
L_0009f840:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_0009f844:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0009f848:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_0009f84c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_0009f850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0009f854:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 1u, &shc), 1, 0);
    }
L_0009f858:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0009f85c:;
    {
        cpu->r[14] = 0x0009f860u; fn_000962d0(cpu);
    }
L_0009f860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_0009f864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f9f4;
        }
    }
L_0009f868:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009f86c:;
    {
        cpu->r[14] = 0x0009f870u; fn_000962d0(cpu);
    }
L_0009f870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0009f874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fab0;
        }
    }
L_0009f878:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009f87c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009f880:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_0009f884:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x54u);
    }
L_0009f888:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0009f88c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0009f890:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0009f894:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_0009f898:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009f89c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000004u, 1, 0);
    }
L_0009f8a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_0009f8a4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_0009f8a8:;
    {
        cpu->r[8] = 0x00001cb0u;
    }
L_0009f8ac:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_0009f8b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009f8b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_0009f8b8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009f8bc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0009f8c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_0009f8c4:;
    {
        cpu->r[14] = 0x0009f8c8u; fn_000aeb58(cpu);
    }
L_0009f8c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009f8cc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0009f8d0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0009f8d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009f8d8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0009f8dc:;
    {
        cpu->r[14] = 0x0009f8e0u; fn_000a9818(cpu);
    }
L_0009f8e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009f8e4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0009f8e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009f8ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009f8f0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0009f8f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0009f8f8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0009f8fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[11]);
        wr32(ea + 8u, cpu->r[12]);
    }
L_0009f900:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_0009f904:;
    {
        cpu->r[14] = 0x0009f908u; fn_000ac4bc(cpu);
    }
L_0009f908:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009f90c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0009f910:;
    {
        cpu->r[14] = 0x0009f914u; fn_000aeb58(cpu);
    }
L_0009f914:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009f918:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0009f91c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0009f920:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009f924:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0009f928:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[11]);
        wr32(ea + 8u, cpu->r[12]);
    }
L_0009f92c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_0009f930:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0009f934:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009f938:;
    {
        cpu->r[14] = 0x0009f93cu; fn_000ac4bc(cpu);
    }
L_0009f93c:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_0009f940:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0009f944:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0009f948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009f9e0;
        }
    }
L_0009f94c:;
    {
        cpu->r[2] = rd32(0x0009f954u + - 0x254u);
    }
L_0009f950:;
    {
        cpu->r[1] = 0x000084a0u;
    }
L_0009f954:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_0009f958:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0009f95c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0009f960:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0009f964:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0009f968:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0009f96c:;
    {
        cpu->r[1] = 0x000084a4u;
    }
L_0009f970:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0009f974:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0009f978:;
    {
        vfp_sync_flags(cpu);
    }
L_0009f97c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009f9e0;
        }
    }
L_0009f980:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_0009f984:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0009f988:;
    {
        vfp_sync_flags(cpu);
    }
L_0009f98c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009f9e0;
        }
    }
L_0009f990:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0009f994:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0009f998:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_0009f99c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0009f9a0:;
    {
        vfp_sync_flags(cpu);
    }
L_0009f9a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009f9e0;
        }
    }
L_0009f9a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_0009f9ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0009f9b0:;
    {
        vfp_sync_flags(cpu);
    }
L_0009f9b4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0009f9e0;
        }
    }
L_0009f9b8:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_0009f9bc:;
    {
        cpu->r[3] = 0x00001cacu;
    }
L_0009f9c0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0009f9c4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x490u);
    }
L_0009f9c8:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_0009f9cc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0009f9d0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0009f9d4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009f9d8:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0009f9dc:;
    {
        cpu->r[14] = 0x0009f9e0u; fn_000fd248(cpu);
    }
L_0009f9e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0009f9e4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0009f9e8:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_0009f9ec:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_0009f9f0:;
    {
        goto L_0009f5a0;
    }
L_0009f9f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009f9f8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_0009f9fc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009fa00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009fa04:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_0009fa08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x54u);
    }
L_0009fa0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_0009fa10:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_0009fa14:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_0009fa18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0009fa1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0009fa20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_0009fa24:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0009fa28:;
    {
        goto L_0009f8a8;
    }
L_0009fa2c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x44u);
    }
L_0009fa30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0009fa34:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_0009fa38:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[7] + + 0x54u, cpu->r[14]);
        }
    }
L_0009fa3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = rd32(cpu->r[7] + + 0x54u);
        }
    }
L_0009fa40:;
    {
        goto L_0009f824;
    }
L_0009fa44:;
    {
        cpu->r[5] = 0x00001cb0u;
    }
L_0009fa48:;
    {
        cpu->r[14] = 0x0009fa4cu; fn_000979a0(cpu);
    }
L_0009fa4c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0009fa50:;
    {
        cpu->r[14] = 0x0009fa54u; fn_00094204(cpu);
    }
L_0009fa54:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0009fa58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fa5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009fa60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0009fa64:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_0009fa68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_0009fa6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0009fa70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009fa74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009fa78:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_0009fa7c:;
    {
        cpu->r[14] = 0x0009fa80u; fn_0009e9e8(cpu);
    }
L_0009fa80:;
    {
        cpu->r[2] = 0x00001cacu;
    }
L_0009fa84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0009fa88:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0009fa8c:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[12]);
    }
L_0009fa90:;
    {
        cpu->r[2] = 0x00001ca4u;
    }
L_0009fa94:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0009fa98:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009fa9c:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_0009faa0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001d31u;
        }
    }
L_0009faa4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009faa8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_0009faac:;
    {
        goto L_0009f26c;
    }
L_0009fab0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009fab4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0009fab8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x54u);
    }
L_0009fabc:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_0009fac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0009fac4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009fac8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 1, 0);
    }
L_0009facc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0009fad0:;
    {
        goto L_0009f898;
    }
}

/* _ZN4Game21Refresh_ScenesSpritesEii @ 0009fad4 (arm) */
void fn_0009fad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009fad4:;
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
L_0009fad8:;
    {
        cpu->r[8] = 0x0000009cu;
    }
L_0009fadc:;
    {
        cpu->r[4] = rd32(0x0009fae4u + + 0x224u);
    }
L_0009fae0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0009fae4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[10] = v;
    }
L_0009fae8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x438u);
    }
L_0009faec:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[8] = v;
    }
L_0009faf0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0009faf8u, cpu->r[4], 0, 0);
    }
L_0009faf4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009faf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0009fafc:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_0009fb00:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_0009fb04:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_0009fb08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fb1c;
        }
    }
L_0009fb0c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0009fb10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fb84;
        }
    }
L_0009fb14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0009fb18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fb24;
        }
    }
L_0009fb1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009fb20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009fb24u)) return;
    }
L_0009fb24:;
    {
        cpu->r[11] = rd32(0x0009fb2cu + + 0x1e0u);
    }
L_0009fb28:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009fb2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0009fb30:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009fb34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fc14;
        }
    }
L_0009fb38:;
    {
        cpu->r[9] = rd32(0x0009fb40u + + 0x1d0u);
    }
L_0009fb3c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009fb40:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009fb44:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fb48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009fb4c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_0009fb50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fb54:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0009fb58:;
    {
        cpu->r[14] = 0x0009fb5cu; fn_0018aa58(cpu);
    }
L_0009fb5c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009fb60:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0009fb64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009fb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fbd8;
        }
    }
L_0009fb6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fb70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009fb74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009fb78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0009fb7c:;
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
L_0009fb80:;
    {
        return fn_0018b0ec(cpu);
    }
L_0009fb84:;
    {
        cpu->r[11] = rd32(0x0009fb8cu + + 0x180u);
    }
L_0009fb88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009fb8c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0009fb90:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009fb94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fc58;
        }
    }
L_0009fb98:;
    {
        cpu->r[9] = rd32(0x0009fba0u + + 0x170u);
    }
L_0009fb9c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fba0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009fba4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0009fba8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0009fbac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009fbb0:;
    {
        cpu->r[14] = 0x0009fbb4u; fn_0018aa58(cpu);
    }
L_0009fbb4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0009fbb8:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0009fbbc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009fbc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fc80;
        }
    }
L_0009fbc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fbc8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0009fbcc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0009fbd0:;
    {
        cpu->r[14] = 0x0009fbd4u; fn_0018b0ec(cpu);
    }
L_0009fbd4:;
    {
        goto L_0009fb14;
    }
L_0009fbd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009fbdc:;
    {
        cpu->r[14] = 0x0009fbe0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009fbe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fbe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fb6c;
        }
    }
L_0009fbe8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fbec:;
    {
        cpu->r[14] = 0x0009fbf0u; fn_0018aa20(cpu);
    }
L_0009fbf0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009fbf4:;
    {
        cpu->r[14] = 0x0009fbf8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009fbf8:;
    {
        cpu->r[3] = rd32(0x0009fc00u + + 0x114u);
    }
L_0009fbfc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fc00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fc04:;
    {
        cpu->r[3] = rd32(0x0009fc0cu + + 0x10cu);
    }
L_0009fc08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fc0c:;
    {
        cpu->r[14] = 0x0009fc10u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009fc10:;
    {
        goto L_0009fb6c;
    }
L_0009fc14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fc18:;
    {
        cpu->r[14] = 0x0009fc1cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009fc1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fc20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fb38;
        }
    }
L_0009fc24:;
    {
        cpu->r[9] = rd32(0x0009fc2cu + + 0xe4u);
    }
L_0009fc28:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fc2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009fc30:;
    {
        cpu->r[14] = 0x0009fc34u; fn_0018aa20(cpu);
    }
L_0009fc34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0009fc38:;
    {
        cpu->r[14] = 0x0009fc3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009fc3c:;
    {
        cpu->r[3] = rd32(0x0009fc44u + + 0xd0u);
    }
L_0009fc40:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009fc44:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fc48:;
    {
        cpu->r[3] = rd32(0x0009fc50u + + 0xc8u);
    }
L_0009fc4c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fc50:;
    {
        cpu->r[14] = 0x0009fc54u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009fc54:;
    {
        goto L_0009fb3c;
    }
L_0009fc58:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0009fc5c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009fc60:;
    {
        cpu->r[14] = 0x0009fc64u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009fc64:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009fc68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fc6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fcbc;
        }
    }
L_0009fc70:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009fc74:;
    {
        cpu->r[9] = rd32(0x0009fc7cu + + 0x94u);
    }
L_0009fc78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0009fc7c:;
    {
        goto L_0009fb9c;
    }
L_0009fc80:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0009fc84:;
    {
        cpu->r[14] = 0x0009fc88u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009fc88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fc8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fbc4;
        }
    }
L_0009fc90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009fc94:;
    {
        cpu->r[14] = 0x0009fc98u; fn_0018aa20(cpu);
    }
L_0009fc98:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0009fc9c:;
    {
        cpu->r[14] = 0x0009fca0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009fca0:;
    {
        cpu->r[3] = rd32(0x0009fca8u + + 0x6cu);
    }
L_0009fca4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009fca8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fcac:;
    {
        cpu->r[3] = rd32(0x0009fcb4u + + 0x64u);
    }
L_0009fcb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fcb4:;
    {
        cpu->r[14] = 0x0009fcb8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009fcb8:;
    {
        goto L_0009fbc4;
    }
L_0009fcbc:;
    {
        cpu->r[9] = rd32(0x0009fcc4u + + 0x4cu);
    }
L_0009fcc0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0009fcc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0009fcc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009fccc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0009fcd0:;
    {
        cpu->r[14] = 0x0009fcd4u; fn_0018aa20(cpu);
    }
L_0009fcd4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009fcd8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0009fcdc:;
    {
        cpu->r[14] = 0x0009fce0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0009fce0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009fce4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0009fce8:;
    {
        cpu->r[3] = rd32(0x0009fcf0u + + 0x24u);
    }
L_0009fcec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fcf0:;
    {
        cpu->r[3] = rd32(0x0009fcf8u + + 0x20u);
    }
L_0009fcf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0009fcf8:;
    {
        cpu->r[14] = 0x0009fcfcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0009fcfc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x438u);
    }
L_0009fd00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0009fd04:;
    {
        goto L_0009fb9c;
    }
}
