#include "functions.h"

/* _ZN21GS_SelectLocationMenu6RenderEv @ 00123e7c (arm) */
void fn_00123e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00123e7c:;
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
L_00123e80:;
    {
        cpu->r[5] = rd32(0x00123e88u + + 0xc70u);
    }
L_00123e84:;
    {
        cpu->r[7] = rd32(0x00123e8cu + + 0xc70u);
    }
L_00123e88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002b4u, 1, 0);
    }
L_00123e8c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00123e94u, cpu->r[5], 0, 0);
    }
L_00123e90:;
    {
        cpu->r[3] = rd32(0x00123e98u + + 0xc68u);
    }
L_00123e94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00123e98:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123e9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123ea0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00123ea4:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00123ea8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00123eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012424c;
        }
    }
L_00123eb0:;
    {
        cpu->r[6] = rd32(0x00123eb8u + + 0xc4cu);
    }
L_00123eb4:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00123eb8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123ebc:;
    {
        cpu->r[14] = 0x00123ec0u; fn_00096a08(cpu);
    }
L_00123ec0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123ec4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123ec8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00123ecc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00123ed0:;
    {
        cpu->r[14] = 0x00123ed4u; fn_0018aa44(cpu);
    }
L_00123ed4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123ed8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00123edc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00123ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001248b4;
        }
    }
L_00123ee4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00123ee8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123eec:;
    {
        cpu->r[14] = 0x00123ef0u; fn_00096a08(cpu);
    }
L_00123ef0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123ef4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123ef8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00123efc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00123f00:;
    {
        cpu->r[14] = 0x00123f04u; fn_0018aa44(cpu);
    }
L_00123f04:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123f08:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00123f0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00123f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124878;
        }
    }
L_00123f14:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00123f18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123f1c:;
    {
        cpu->r[14] = 0x00123f20u; fn_00096a08(cpu);
    }
L_00123f20:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123f24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00123f28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00123f2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00123f30:;
    {
        cpu->r[14] = 0x00123f34u; fn_0018aa44(cpu);
    }
L_00123f34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00123f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123f3c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00123f40:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x438u);
    }
L_00123f44:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_00123f48:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00123f4c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_00123f50:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00123f54:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_00123f58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_00123f5c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00123f60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00123f64:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00123f68:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00123f6c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00123f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124290;
        }
    }
L_00123f74:;
    {
        cpu->r[3] = rd32(0x00123f7cu + + 0xb8cu);
    }
L_00123f78:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00123f7c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00123f80:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00123f84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00123f88:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00123f8c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00123f90:;
    {
        cpu->r[14] = 0x00123f94u; fn_0018aa44(cpu);
    }
L_00123f94:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00123f98:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00123f9c:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_00123fa0:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00123fa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00123fa8:;
    {
        cpu->r[14] = 0x00123facu; fn_000ad8a0(cpu);
    }
L_00123fac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00123fb0:;
    {
        cpu->r[1] = 0x44000000u;
    }
L_00123fb4:;
    {
        cpu->r[14] = 0x00123fb8u; fn_0012dd58(cpu);
    }
L_00123fb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00123fbc:;
    {
        cpu->r[3] = rd32(0x00123fc4u + + 0xb48u);
    }
L_00123fc0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00123fc4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00123fc8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00123fcc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00123fd0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00123fd4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00123fd8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00123fdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00123fe0:;
    {
        cpu->r[14] = 0x00123fe4u; fn_00130908(cpu);
    }
L_00123fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00123fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00123fec:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_00123ff0:;
    {
        cpu->r[14] = 0x00123ff8u;
    }
L_00123ff4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00123ff8u)) return;
    }
L_00123ff8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x958u);
    }
L_00123ffc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00124000:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00124004:;
    {
        cpu->r[14] = 0x00124008u; fn_00096bb8(cpu);
    }
L_00124008:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0012400c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001241a0;
        }
    }
L_00124010:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00124014:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00124018:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012401c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012492c;
        }
    }
L_00124020:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124024:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00124028:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0012402c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00124030:;
    {
        cpu->r[14] = 0x00124034u; fn_0018aa44(cpu);
    }
L_00124034:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_00124038:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0012403c:;
    {
        cpu->r[3] = 0x00000070u;
    }
L_00124040:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00124044:;
    {
        cpu->r[12] = 0x00c00000u;
    }
L_00124048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0012404c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_00124050:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124054:;
    {
        cpu->r[14] = 0x00124058u; fn_000ad8a0(cpu);
    }
L_00124058:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0012405c:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_00124060:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00124064:;
    {
        cpu->r[3] = 0x00000096u;
    }
L_00124068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0012406c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00124070:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00124074:;
    {
        cpu->r[14] = 0x00124078u; fn_000ad8a0(cpu);
    }
L_00124078:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012407c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124080:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00124084:;
    {
        cpu->r[3] = 0x00000034u;
    }
L_00124088:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0012408c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00124090:;
    {
        cpu->r[1] = 0x000000b4u;
    }
L_00124094:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00124098:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0012409c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001240a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000009cu, 1, 0);
    }
L_001240a4:;
    {
        cpu->r[14] = 0x001240a8u; fn_000ad8a0(cpu);
    }
L_001240a8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001240ac:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001240b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001240b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124838;
        }
    }
L_001240b8:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001240bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001240c0:;
    {
        cpu->r[14] = 0x001240c4u; fn_00096a08(cpu);
    }
L_001240c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001240c8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001240cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001240d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001240d4:;
    {
        cpu->r[14] = 0x001240d8u; fn_0018aa44(cpu);
    }
L_001240d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001240dc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001240e0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001240e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001240e8:;
    {
        cpu->r[9] = rd8(cpu->r[8] + + 0x50u);
    }
L_001240ec:;
    {
        wr8(cpu->r[8] + + 0x50u, cpu->r[3]);
    }
L_001240f0:;
    {
        cpu->r[14] = 0x001240f4u; fn_000aeb58(cpu);
    }
L_001240f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001240f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001240fc:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00124100:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124104:;
    {
        cpu->r[3] = 0x0000004du;
    }
L_00124108:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0012410c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124110:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00124114:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00124118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012411c:;
    {
        cpu->r[14] = 0x00124120u; fn_000ad19c(cpu);
    }
L_00124120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00124124:;
    {
        wr8(cpu->r[8] + + 0x50u, cpu->r[9]);
    }
L_00124128:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0012412c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00124158;
        }
    }
L_00124130:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00124134:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012413c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124140:;
    {
        cpu->r[14] = 0x00124148u;
    }
L_00124144:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00124148u)) return;
    }
L_00124148:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0012414c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00124150:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00124154:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00124130;
        }
    }
L_00124158:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x950u);
    }
L_0012415c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124160:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124164:;
    {
        uint32_t v = cpu->r[1] ^ 0x00000001u; cpu->r[1] = v;
    }
L_00124168:;
    {
        cpu->r[14] = 0x00124170u;
    }
L_0012416c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00124170u)) return;
    }
L_00124170:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x950u);
    }
L_00124174:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124178:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012417c:;
    {
        uint32_t v = cpu->r[2] ^ 0x00000001u; cpu->r[2] = v;
    }
L_00124180:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00124184:;
    {
        cpu->r[14] = 0x0012418cu;
    }
L_00124188:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012418cu)) return;
    }
L_0012418c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x960u);
    }
L_00124190:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00124194:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001242cc;
        }
    }
L_00124198:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002b4u, 0, 0);
    }
L_0012419c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001241a0u)) return;
    }
L_001241a0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001241a4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001241a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001241ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124968;
        }
    }
L_001241b0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001241b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001241b8:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_001241bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001241c0:;
    {
        cpu->r[14] = 0x001241c4u; fn_0018aa44(cpu);
    }
L_001241c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002a4u, 0, 0);
    }
L_001241c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001241cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002a0u, 0, 0);
    }
L_001241d0:;
    {
        cpu->r[14] = 0x001241d4u; fn_000a8d10(cpu);
    }
L_001241d4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001241d8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001241dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001241e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001248f0;
        }
    }
L_001241e4:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_001241e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001241ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001241f0:;
    {
        cpu->r[14] = 0x001241f4u; fn_0018aa44(cpu);
    }
L_001241f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001241f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001241fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00124200:;
    {
        cpu->r[3] = 0x00000096u;
    }
L_00124204:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00124208:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_0012420c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2a0u);
    }
L_00124210:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00124214:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_00124218:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0012421c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_00124220:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00124224:;
    {
        cpu->r[14] = 0x00124228u; fn_000ad8a0(cpu);
    }
L_00124228:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012422c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x958u);
    }
L_00124230:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_00124234:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x438u);
    }
L_00124238:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_0012423c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x34u);
    }
L_00124240:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_00124244:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00124248:;
    {
        goto L_00124078;
    }
L_0012424c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124250:;
    {
        cpu->r[14] = 0x00124254u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124254:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123eb0;
        }
    }
L_0012425c:;
    {
        cpu->r[6] = rd32(0x00124264u + + 0x8a0u);
    }
L_00124260:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00124264:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124268:;
    {
        cpu->r[14] = 0x0012426cu; fn_0018aa20(cpu);
    }
L_0012426c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124270:;
    {
        cpu->r[14] = 0x00124274u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124274:;
    {
        cpu->r[3] = rd32(0x0012427cu + + 0x894u);
    }
L_00124278:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012427c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124280:;
    {
        cpu->r[3] = rd32(0x00124288u + + 0x88cu);
    }
L_00124284:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124288:;
    {
        cpu->r[14] = 0x0012428cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0012428c:;
    {
        goto L_00123eb4;
    }
L_00124290:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124294:;
    {
        cpu->r[14] = 0x00124298u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012429c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123f74;
        }
    }
L_001242a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001242a4:;
    {
        cpu->r[14] = 0x001242a8u; fn_0018aa20(cpu);
    }
L_001242a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001242ac:;
    {
        cpu->r[14] = 0x001242b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001242b0:;
    {
        cpu->r[3] = rd32(0x001242b8u + + 0x858u);
    }
L_001242b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001242b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001242bc:;
    {
        cpu->r[3] = rd32(0x001242c4u + + 0x850u);
    }
L_001242c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001242c4:;
    {
        cpu->r[14] = 0x001242c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001242c8:;
    {
        goto L_00123f74;
    }
L_001242cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001242d0:;
    {
        cpu->r[1] = 0x000000a7u;
    }
L_001242d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002acu, 0, 0);
    }
L_001242d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002a8u, 0, 0);
    }
L_001242dc:;
    {
        cpu->r[14] = 0x001242e0u; fn_000a8d10(cpu);
    }
L_001242e0:;
    {
        cpu->r[1] = rd32(0x001242e8u + + 0x830u);
    }
L_001242e4:;
    {
        cpu->r[12] = rd32(0x001242ecu + + 0x830u);
    }
L_001242e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001242ec:;
    {
        cpu->r[0] = add_flags(cpu, 0x001242f4u, cpu->r[1], 0, 0);
    }
L_001242f0:;
    {
        cpu->r[1] = rd32(0x001242f8u + + 0x828u);
    }
L_001242f4:;
    {
        cpu->r[14] = rd32(0x001242fcu + + 0x828u);
    }
L_001242f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_001242fc:;
    {
        cpu->r[2] = rd32(0x00124304u + + 0x824u);
    }
L_00124300:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00124304:;
    {
        cpu->r[3] = rd32(0x0012430cu + + 0x820u);
    }
L_00124308:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0012430c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00124310:;
    {
        cpu->r[2] = add_flags(cpu, 0x00124318u, cpu->r[2], 0, 0);
    }
L_00124314:;
    {
        cpu->r[12] = rd32(0x0012431cu + + 0x7f4u);
    }
L_00124318:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124320u, cpu->r[3], 0, 0);
    }
L_0012431c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_00124320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001cu, 0, 0);
    }
L_00124324:;
    {
        cpu->r[1] = rd32(0x0012432cu + + 0x804u);
    }
L_00124328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_0012432c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[7]);
    }
L_00124330:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00124334:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
    }
L_00124338:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0012433c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00124344u, cpu->r[1], 0, 0);
    }
L_00124340:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[14]);
    }
L_00124344:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[1]);
    }
L_00124348:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000002a0u, 0, 0);
    }
L_0012434c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000002a4u, 0, 0);
    }
L_00124350:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_00124354:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_00124358:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_0012435c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_00124360:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_00124364:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_00124368:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0012436c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x10u);
    }
L_00124370:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00124374:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_00124378:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0012437c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124380:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001247e0;
        }
    }
L_00124388:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0012438c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00124390:;
    {
        cpu->r[14] = 0x00124394u; fn_00096a08(cpu);
    }
L_00124394:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_00124398:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012439c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001243a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001243a4:;
    {
        cpu->r[14] = 0x001243a8u; fn_0018aa44(cpu);
    }
L_001243a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001243ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124a6c;
        }
    }
L_001243b0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001243b4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001243b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001243bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001243c0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001243c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001243c8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[1]);
    }
L_001243cc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + - 0x4u);
    }
L_001243d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001243d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001243d8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001243dc:;
    {
        cpu->r[14] = 0x001243e0u; fn_00096dec(cpu);
    }
L_001243e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001243e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001243e8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001243ec:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001243f0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001243f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012478c;
        }
    }
L_001243f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001243fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124400:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00124404:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124408:;
    {
        cpu->r[14] = 0x0012440cu; fn_0018aa44(cpu);
    }
L_0012440c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_00124410:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00124414:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00124418:;
    {
        cpu->r[14] = 0x0012441cu; fn_000a8d10(cpu);
    }
L_0012441c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00124420:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00124424:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012442cu, cpu->r[12], 0, 0);
    }
L_00124428:;
    {
        cpu->r[14] = 0x0012442cu; fn_000ae1a4(cpu);
    }
L_0012442c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00124430:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124434:;
    {
        cpu->r[14] = 0x00124438u; fn_000aeb58(cpu);
    }
L_00124438:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012443c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00124440:;
    {
        cpu->r[14] = 0x00124444u; fn_000ae228(cpu);
    }
L_00124444:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_00124448:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012444c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00124454u, cpu->r[14], 0, 0);
    }
L_00124450:;
    {
        cpu->r[14] = 0x00124454u; fn_000ae248(cpu);
    }
L_00124454:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00124458:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0012445c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00124460:;
    {
        cpu->r[14] = 0x00124464u; fn_000962d0(cpu);
    }
L_00124464:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00124468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124824;
        }
    }
L_0012446c:;
    {
        cpu->r[1] = rd32(0x00124474u + + 0x6c0u);
    }
L_00124470:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00124474:;
    {
        cpu->r[1] = add_flags(cpu, 0x0012447cu, cpu->r[1], 0, 0);
    }
L_00124478:;
    {
        cpu->r[14] = 0x0012447cu; fn_000ae248(cpu);
    }
L_0012447c:;
    {
        cpu->r[10] = rd8(cpu->r[8]);
    }
L_00124480:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00124484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001244e0;
        }
    }
L_00124488:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0012448c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + - 0x4u);
    }
L_00124490:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00124494:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00124498:;
    {
        cpu->r[14] = 0x0012449cu; fn_00096dc4(cpu);
    }
L_0012449c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001244a0:;
    {
        cpu->r[14] = 0x001244a4u; fn_000aeb58(cpu);
    }
L_001244a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001244a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001244ac:;
    {
        cpu->r[14] = 0x001244b0u; fn_000ae228(cpu);
    }
L_001244b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x988u);
    }
L_001244b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001244b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124504;
        }
    }
L_001244bc:;
    {
        cpu->r[3] = rd8(cpu->r[8]);
    }
L_001244c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001244c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124590;
        }
    }
L_001244c8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001244cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001244d0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 1);
    }
L_001244d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001244d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124364;
        }
    }
L_001244dc:;
    {
        goto L_00124198;
    }
L_001244e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001244e4:;
    {
        cpu->r[0] = 0x000004f9u;
    }
L_001244e8:;
    {
        cpu->r[14] = 0x001244ecu; fn_000aeb58(cpu);
    }
L_001244ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001244f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001244f4:;
    {
        cpu->r[14] = 0x001244f8u; fn_000ae160(cpu);
    }
L_001244f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x988u);
    }
L_001244fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00124500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001244bc;
        }
    }
L_00124504:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00124508:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000270u, 0, 0);
    }
L_0012450c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00124510:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_00124514:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00124518:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0012451c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124520:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00124524:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_00124528:;
    {
        cpu->r[14] = 0x0012452cu; fn_000a9818(cpu);
    }
L_0012452c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00124530:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00124534:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00124538:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_0012453c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00124540:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00124544:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00124548:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0012454c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00124550:;
    {
        cpu->r[12] = 0x00000177u;
    }
L_00124554:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124558:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0012455c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00124560:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00124564:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00124568:;
    {
        cpu->r[14] = 0x0012456cu; fn_000ac4bc(cpu);
    }
L_0012456c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_00124570:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00124574:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124578:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0012457c:;
    {
        wr32(cpu->r[12] + + 0x54u, cpu->r[3]);
    }
L_00124580:;
    {
        cpu->r[14] = 0x00124584u; fn_000a8e18(cpu);
    }
L_00124584:;
    {
        cpu->r[3] = rd8(cpu->r[8]);
    }
L_00124588:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012458c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001244c8;
        }
    }
L_00124590:;
    {
        cpu->r[1] = rd32(0x00124598u + + 0x5a0u);
    }
L_00124594:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00124598:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0012459c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001245a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001245a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124a4c;
        }
    }
L_001245a8:;
    {
        cpu->r[10] = rd32(0x001245b0u + + 0x58cu);
    }
L_001245ac:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001245b0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x958u);
    }
L_001245b4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001245b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001245bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001245c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000158u, 0, 0);
    }
L_001245c4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[1] + + 0x4u);
    }
L_001245c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001245cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001246e0;
        }
    }
L_001245d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001245d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001249a4;
        }
    }
L_001245d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001245dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001245e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001245e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000158u, 0, 0);
    }
L_001245e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_001245ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001245f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00124624;
        }
    }
L_001245f4:;
    {
        cpu->r[3] = 0x00000154u;
    }
L_001245f8:;
    {
        cpu->r[1] = rd32(0x00124600u + + 0x540u);
    }
L_001245fc:;
    {
        cpu->r[2] = rd32(0x00124604u + + 0x540u);
    }
L_00124600:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00124604:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00124608:;
    {
        cpu->r[1] = add_flags(cpu, 0x00124610u, cpu->r[1], 0, 0);
    }
L_0012460c:;
    {
        cpu->r[3] = rd32(0x00124614u + + 0x534u);
    }
L_00124610:;
    {
        cpu->r[2] = add_flags(cpu, 0x00124618u, cpu->r[2], 0, 0);
    }
L_00124614:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_00124618:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124620u, cpu->r[3], 0, 0);
    }
L_0012461c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124620:;
    {
        cpu->r[14] = 0x00124624u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00124624:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00124628:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_0012462c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124630:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124a9c;
        }
    }
L_00124638:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x958u);
    }
L_0012463c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000298u, 0, 0);
    }
L_00124640:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00124644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000029cu, 0, 0);
    }
L_00124648:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xb0u);
    }
L_0012464c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00124650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_00124654:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000158u, 0, 0);
    }
L_00124658:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[1] + + 0x4u);
    }
L_0012465c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
    }
L_00124660:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00124664:;
    {
        cpu->r[14] = 0x00124668u; fn_000a8d10(cpu);
    }
L_00124668:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0012466c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00124670:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xb0u);
    }
L_00124674:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00124678:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012467c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00124680:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00124684:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 1, 1);
    }
L_00124688:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2acu);
        }
    }
L_0012468c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_00124690:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_00124694:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x298u);
        }
    }
L_00124698:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x298u);
        }
    }
L_0012469c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
        }
    }
L_001246a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001246a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001246a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
    }
L_001246ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2a8u);
    }
L_001246b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001246b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001246b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001246bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001246c0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001246c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_001246c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[3], 1, 2u, &shc), 0, 0);
    }
L_001246cc:;
    {
        cpu->r[14] = 0x001246d0u; fn_000ad8a0(cpu);
    }
L_001246d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001246d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001246d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001246dc:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_001246e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001246e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124a20;
        }
    }
L_001246e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x958u);
    }
L_001246ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001246f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001246f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001246f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_001246fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_00124700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00124704:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001244c8;
        }
    }
L_00124708:;
    {
        cpu->r[1] = 0x00000076u;
    }
L_0012470c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xb0u);
    }
L_00124710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000029cu, 0, 0);
    }
L_00124714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000298u, 0, 0);
    }
L_00124718:;
    {
        cpu->r[14] = 0x0012471cu; fn_000a8d10(cpu);
    }
L_0012471c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00124720:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_00124724:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00124728:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2a8u);
    }
L_0012472c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00124730:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00124734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00124738:;
    {
        sub_flags(cpu, cpu->r[14], shifter(cpu->r[3], 1, 1u, &shc), 1, 1);
    }
L_0012473c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2acu);
        }
    }
L_00124740:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_00124744:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x29cu);
        }
    }
L_00124748:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_0012474c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_00124750:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x29cu);
        }
    }
L_00124754:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_00124758:;
    {
        cpu->r[14] = 0x0012475cu; fn_0010daa4(cpu);
    }
L_0012475c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001244c8;
        }
    }
L_00124764:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_00124768:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_0012476c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xb0u);
    }
L_00124770:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00124774:;
    {
        cpu->r[1] = 0x00000076u;
    }
L_00124778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[4], 1, 1u, &shc), 0, 0);
    }
L_0012477c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00124780:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124784:;
    {
        cpu->r[14] = 0x00124788u; fn_000ad8a0(cpu);
    }
L_00124788:;
    {
        goto L_001244c8;
    }
L_0012478c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00124790:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00124794:;
    {
        cpu->r[14] = 0x00124798u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124798:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012479c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001243f8;
        }
    }
L_001247a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001247a4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001247a8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001247ac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_001247b0:;
    {
        cpu->r[14] = 0x001247b4u; fn_0018aa20(cpu);
    }
L_001247b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001247b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001247bc:;
    {
        cpu->r[14] = 0x001247c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001247c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001247c4:;
    {
        cpu->r[3] = rd32(0x001247ccu + + 0x348u);
    }
L_001247c8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001247cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001247d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001247d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001247d8:;
    {
        cpu->r[14] = 0x001247dcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001247dc:;
    {
        goto L_001243f8;
    }
L_001247e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001247e4:;
    {
        cpu->r[14] = 0x001247e8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001247e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001247ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124388;
        }
    }
L_001247f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001247f4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_001247f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001247fc:;
    {
        cpu->r[14] = 0x00124800u; fn_0018aa20(cpu);
    }
L_00124800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124804:;
    {
        cpu->r[14] = 0x00124808u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124808:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0012480c:;
    {
        cpu->r[3] = rd32(0x00124814u + + 0x300u);
    }
L_00124810:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124814:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00124818:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012481c:;
    {
        cpu->r[14] = 0x00124820u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00124820:;
    {
        goto L_00124388;
    }
L_00124824:;
    {
        cpu->r[1] = rd32(0x0012482cu + + 0x320u);
    }
L_00124828:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012482c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00124834u, cpu->r[1], 0, 0);
    }
L_00124830:;
    {
        cpu->r[14] = 0x00124834u; fn_000ae248(cpu);
    }
L_00124834:;
    {
        goto L_0012447c;
    }
L_00124838:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012483c:;
    {
        cpu->r[14] = 0x00124840u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124840:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001240b8;
        }
    }
L_00124848:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0012484c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124850:;
    {
        cpu->r[14] = 0x00124854u; fn_0018aa20(cpu);
    }
L_00124854:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124858:;
    {
        cpu->r[14] = 0x0012485cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012485c:;
    {
        cpu->r[3] = rd32(0x00124864u + + 0x2acu);
    }
L_00124860:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124864:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124868:;
    {
        cpu->r[3] = rd32(0x00124870u + + 0x2a4u);
    }
L_0012486c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124870:;
    {
        cpu->r[14] = 0x00124874u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00124874:;
    {
        goto L_001240b8;
    }
L_00124878:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012487c:;
    {
        cpu->r[14] = 0x00124880u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124880:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123f14;
        }
    }
L_00124888:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012488c:;
    {
        cpu->r[14] = 0x00124890u; fn_0018aa20(cpu);
    }
L_00124890:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00124894:;
    {
        cpu->r[14] = 0x00124898u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124898:;
    {
        cpu->r[3] = rd32(0x001248a0u + + 0x270u);
    }
L_0012489c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001248a0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001248a4:;
    {
        cpu->r[3] = rd32(0x001248acu + + 0x268u);
    }
L_001248a8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001248ac:;
    {
        cpu->r[14] = 0x001248b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001248b0:;
    {
        goto L_00123f14;
    }
L_001248b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001248b8:;
    {
        cpu->r[14] = 0x001248bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001248bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001248c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00123ee4;
        }
    }
L_001248c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001248c8:;
    {
        cpu->r[14] = 0x001248ccu; fn_0018aa20(cpu);
    }
L_001248cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001248d0:;
    {
        cpu->r[14] = 0x001248d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001248d4:;
    {
        cpu->r[3] = rd32(0x001248dcu + + 0x234u);
    }
L_001248d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001248dc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001248e0:;
    {
        cpu->r[3] = rd32(0x001248e8u + + 0x22cu);
    }
L_001248e4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001248e8:;
    {
        cpu->r[14] = 0x001248ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001248ec:;
    {
        goto L_00123ee4;
    }
L_001248f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001248f4:;
    {
        cpu->r[14] = 0x001248f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001248f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001248fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001241e4;
        }
    }
L_00124900:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124904:;
    {
        cpu->r[14] = 0x00124908u; fn_0018aa20(cpu);
    }
L_00124908:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012490c:;
    {
        cpu->r[14] = 0x00124910u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124910:;
    {
        cpu->r[3] = rd32(0x00124918u + + 0x1f8u);
    }
L_00124914:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124918:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012491c:;
    {
        cpu->r[3] = rd32(0x00124924u + + 0x1f0u);
    }
L_00124920:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124924:;
    {
        cpu->r[14] = 0x00124928u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00124928:;
    {
        goto L_001241e4;
    }
L_0012492c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124930:;
    {
        cpu->r[14] = 0x00124934u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124934:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124020;
        }
    }
L_0012493c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00124940:;
    {
        cpu->r[14] = 0x00124944u; fn_0018aa20(cpu);
    }
L_00124944:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124948:;
    {
        cpu->r[14] = 0x0012494cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012494c:;
    {
        cpu->r[3] = rd32(0x00124954u + + 0x1bcu);
    }
L_00124950:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00124954:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124958:;
    {
        cpu->r[3] = rd32(0x00124960u + + 0x1b4u);
    }
L_0012495c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124960:;
    {
        cpu->r[14] = 0x00124964u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00124964:;
    {
        goto L_00124020;
    }
L_00124968:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012496c:;
    {
        cpu->r[14] = 0x00124970u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001241b0;
        }
    }
L_00124978:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0012497c:;
    {
        cpu->r[14] = 0x00124980u; fn_0018aa20(cpu);
    }
L_00124980:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124984:;
    {
        cpu->r[14] = 0x00124988u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124988:;
    {
        cpu->r[3] = rd32(0x00124990u + + 0x180u);
    }
L_0012498c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00124990:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124994:;
    {
        cpu->r[3] = rd32(0x0012499cu + + 0x178u);
    }
L_00124998:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012499c:;
    {
        cpu->r[14] = 0x001249a0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001249a0:;
    {
        goto L_001241b0;
    }
L_001249a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001249a8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001249ac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001249b0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_001249b4:;
    {
        cpu->r[14] = 0x001249b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001249b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001249bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001249d0;
        }
    }
L_001249c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001249c4:;
    {
        cpu->r[14] = 0x001249c8u; fn_00094228(cpu);
    }
L_001249c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001249cc:;
    {
        cpu->r[14] = 0x001249d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001249d0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x958u);
    }
L_001249d4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001249d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001249dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001249e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000158u, 0, 0);
    }
L_001249e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x4u);
    }
L_001249e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001249ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001245f4;
        }
    }
L_001249f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001249f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001249f8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001249fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00124a00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001245d8;
        }
    }
L_00124a08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00124a0c:;
    {
        cpu->r[14] = 0x00124a10u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124a10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124a14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124ae0;
        }
    }
L_00124a18:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x958u);
    }
L_00124a1c:;
    {
        goto L_001245d8;
    }
L_00124a20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00124a24:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00124a28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124a2c:;
    {
        cpu->r[14] = 0x00124a30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124a30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124a34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001246e8;
        }
    }
L_00124a38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00124a3c:;
    {
        cpu->r[14] = 0x00124a40u; fn_00094228(cpu);
    }
L_00124a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124a44:;
    {
        cpu->r[14] = 0x00124a48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124a48:;
    {
        goto L_001246e8;
    }
L_00124a4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124a50:;
    {
        cpu->r[14] = 0x00124a54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124a54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124ac0;
        }
    }
L_00124a5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124a60:;
    {
        cpu->r[10] = rd32(0x00124a68u + + 0xd4u);
    }
L_00124a64:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_00124a68:;
    {
        goto L_001245b0;
    }
L_00124a6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_00124a70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00124a74:;
    {
        cpu->r[2] = rd32(0x00124a7cu + + 0xd4u);
    }
L_00124a78:;
    {
        cpu->r[3] = rd32(0x00124a80u + + 0xd4u);
    }
L_00124a7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_00124a80:;
    {
        cpu->r[2] = add_flags(cpu, 0x00124a88u, cpu->r[2], 0, 0);
    }
L_00124a84:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124a8cu, cpu->r[3], 0, 0);
    }
L_00124a88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124a8c:;
    {
        cpu->r[12] = 0x00000128u;
    }
L_00124a90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00124a94:;
    {
        cpu->r[14] = 0x00124a98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00124a98:;
    {
        goto L_001243b0;
    }
L_00124a9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124aa0:;
    {
        cpu->r[14] = 0x00124aa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00124aa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00124aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124638;
        }
    }
L_00124aac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00124ab0:;
    {
        cpu->r[14] = 0x00124ab4u; fn_00094228(cpu);
    }
L_00124ab4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124ab8:;
    {
        cpu->r[14] = 0x00124abcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124abc:;
    {
        goto L_00124638;
    }
L_00124ac0:;
    {
        cpu->r[10] = rd32(0x00124ac8u + + 0x74u);
    }
L_00124ac4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00124ac8:;
    {
        cpu->r[14] = 0x00124accu; fn_00094228(cpu);
    }
L_00124acc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124ad0:;
    {
        cpu->r[14] = 0x00124ad4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124ad4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00124ad8:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_00124adc:;
    {
        goto L_001245b0;
    }
L_00124ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124ae4:;
    {
        cpu->r[14] = 0x00124ae8u; fn_00094228(cpu);
    }
L_00124ae8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00124aec:;
    {
        cpu->r[14] = 0x00124af0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00124af0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x958u);
    }
L_00124af4:;
    {
        goto L_001245d8;
    }
}

/* _ZN26GS_SoundOptionsControlMenu17ApplyMenuSettingsEv @ 00124b58 (arm) */
void fn_00124b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124b58:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8cau);
    }
L_00124b5c:;
    {
        cpu->r[3] = rd32(0x00124b64u + + 0x7cu);
    }
L_00124b60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00124b64:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124b6cu, cpu->r[3], 0, 0);
    }
L_00124b68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124bac;
        }
    }
L_00124b6c:;
    {
        cpu->r[3] = rd32(0x00124b74u + + 0x70u);
    }
L_00124b70:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00124b74:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_00124b78:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_00124b7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124b84u, cpu->r[3], 0, 0);
    }
L_00124b80:;
    {
        cpu->r[1] = 0x000004dau;
    }
L_00124b84:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00124b88:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_00124b8c:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_00124b90:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00124b94:;
    {
        wr32(cpu->r[0] + + 0x8dcu, cpu->r[3]);
    }
L_00124b98:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00124b9c:;
    {
        wr32(cpu->r[0] + + 0x8f0u, cpu->r[3]);
    }
L_00124ba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00124ba4:;
    {
        wr8(cpu->r[0] + + 0x90cu, cpu->r[3]);
    }
L_00124ba8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00124bac:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00124bb0:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00124bb4:;
    {
        cpu->r[1] = rd32(0x00124bbcu + + 0x2cu);
    }
L_00124bb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124bbc:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_00124bc0:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00124bc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00124bc8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00124bcc:;
    {
        wr32(cpu->r[0] + + 0x8ccu, cpu->r[1]);
    }
L_00124bd0:;
    {
        cpu->r[1] = 0x00000403u;
    }
L_00124bd4:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_00124bd8:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00124bdc:;
    {
        goto L_00124b90;
    }
}

/* _ZN26GS_SoundOptionsControlMenu8DoActionEii @ 00124bec (arm) */
void fn_00124bec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124bec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00124bf0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00124bf4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00124bf8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00124bfc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124c00u)) return;
        }
    }
L_00124c00:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00124c04:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00124c08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00124c4c;
        }
    }
L_00124c0c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00124c10:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_00124c14:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00124c18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_00124c1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00124c20:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_00124c24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_00124c28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_00124c2c:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00124c30:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00124c34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124c38:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_00124c3c:;
    {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
    }
L_00124c40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_00124c44:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
        }
    }
L_00124c48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124c4cu)) return;
    }
L_00124c4c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00124c50:;
    {
        cpu->r[14] = 0x00124c58u;
    }
L_00124c54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00124c58u)) return;
    }
L_00124c58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124c5cu)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenu8isKindOfEi @ 00124c5c (arm) */
void fn_00124c5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124c5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_00124c60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00124c64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00124c68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_44 @ 00124c6c (arm) */
void fn_00124c6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124c6c:;
    {
        cpu->r[3] = rd32(0x00124c74u + + 0x20u);
    }
L_00124c70:;
    {
        cpu->r[1] = rd32(0x00124c78u + + 0x20u);
    }
L_00124c74:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124c7cu, cpu->r[3], 0, 0);
    }
L_00124c78:;
    {
        cpu->r[2] = rd32(0x00124c80u + + 0x1cu);
    }
L_00124c7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00124c80:;
    {
        cpu->r[2] = add_flags(cpu, 0x00124c88u, cpu->r[2], 0, 0);
    }
L_00124c84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00124c88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00124c8c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00124c90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN26GS_SoundOptionsControlMenu18ProcessOnMouseDragEv @ 00124ca0 (arm) */
void fn_00124ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124ca0:;
    {
        return fn_000eb988(cpu);
    }
}

/* _ZN26GS_SoundOptionsControlMenu24ProcessOnMouseButtonDownEv @ 00124ca4 (arm) */
void fn_00124ca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124ca4:;
    {
        cpu->r[3] = rd32(0x00124cacu + + 0x24u);
    }
L_00124ca8:;
    {
        cpu->r[2] = rd32(0x00124cb0u + + 0x24u);
    }
L_00124cac:;
    {
        cpu->r[3] = add_flags(cpu, 0x00124cb4u, cpu->r[3], 0, 0);
    }
L_00124cb0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00124cb4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00124cb8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00124cbc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00124cc0:;
    {
        cpu->r[14] = 0x00124cc4u; fn_00110498(cpu);
    }
L_00124cc4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00124cc8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00124ccc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124cd0u)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenu11DoBarActionEii @ 00124cd8 (arm) */
void fn_00124cd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124cd8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00124cdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00124ce0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00124ce4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00124ce8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00124cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124d80;
        }
    }
L_00124cf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00124cf4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00124cf8:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00124cfc:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00124d00:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00124d04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00124d08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00124d0c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00124d10:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00124d14:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00124d18:;
    {
        cpu->r[14] = 0x00124d1cu; fn_00093f34(cpu);
    }
L_00124d1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00124d20:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00124d24:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00124d28:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00124d2c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00124d30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00124d34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00124d38:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00124d3c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00124d40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00124d44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00124d48:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00124d4c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00124d50:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00124d54:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00124d58:;
    {
        cpu->r[14] = 0x00124d5cu; fn_000fd248(cpu);
    }
L_00124d5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00124d60:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00124d64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124d94;
        }
    }
L_00124d68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00124d88;
        }
    }
L_00124d6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00124d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124d94;
        }
    }
L_00124d74:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00124d78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00124d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124db4;
        }
    }
L_00124d80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00124d84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124d88u)) return;
    }
L_00124d88:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00124d8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00124d90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124da4;
        }
    }
L_00124d94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00124d98:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00124d9c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00124da0:;
    {
        goto L_00124d80;
    }
L_00124da4:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00124da8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00124dac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00124d80;
        }
    }
L_00124db0:;
    {
        goto L_00124d94;
    }
L_00124db4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00124db8:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00124dbc:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00124dc0:;
    {
        cpu->r[14] = 0x00124dc4u; fn_00093f34(cpu);
    }
L_00124dc4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00124dc8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00124dcc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00124dd0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00124dd4:;
    {
        goto L_00124d80;
    }
}

/* _ZN26GS_SoundOptionsControlMenu13GetMenuStringEi @ 00124dd8 (arm) */
void fn_00124dd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124dd8:;
    {
        return fn_0010e02c(cpu);
    }
}

/* _ZN26GS_SoundOptionsControlMenuD1Ev @ 00124ddc (arm) */
void fn_00124ddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124ddc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00124de0:;
    {
        cpu->r[5] = rd32(0x00124de8u + + 0x40u);
    }
L_00124de4:;
    {
        cpu->r[3] = rd32(0x00124decu + + 0x40u);
    }
L_00124de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00124dec:;
    {
        cpu->r[5] = add_flags(cpu, 0x00124df4u, cpu->r[5], 0, 0);
    }
L_00124df0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00124df4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00124df8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124dfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124e00:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00124e04:;
    {
        cpu->r[14] = 0x00124e08u; fn_0009e9e8(cpu);
    }
L_00124e08:;
    {
        cpu->r[3] = rd32(0x00124e10u + + 0x20u);
    }
L_00124e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124e14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124e18:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00124e1c:;
    {
        cpu->r[14] = 0x00124e20u; fn_000ec21c(cpu);
    }
L_00124e20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00124e28u)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenuD0Ev @ 00124e34 (arm) */
void fn_00124e34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124e34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00124e38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00124e3c:;
    {
        cpu->r[14] = 0x00124e40u; fn_00124ddc(cpu);
    }
L_00124e40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e44:;
    {
        cpu->r[14] = 0x00124e48u; fn_0018ba20(cpu);
    }
L_00124e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00124e50u)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenuD2Ev @ 00124e50 (arm) */
void fn_00124e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124e50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00124e54:;
    {
        cpu->r[5] = rd32(0x00124e5cu + + 0x40u);
    }
L_00124e58:;
    {
        cpu->r[3] = rd32(0x00124e60u + + 0x40u);
    }
L_00124e5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00124e60:;
    {
        cpu->r[5] = add_flags(cpu, 0x00124e68u, cpu->r[5], 0, 0);
    }
L_00124e64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00124e68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00124e6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124e70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124e74:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00124e78:;
    {
        cpu->r[14] = 0x00124e7cu; fn_0009e9e8(cpu);
    }
L_00124e7c:;
    {
        cpu->r[3] = rd32(0x00124e84u + + 0x20u);
    }
L_00124e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00124e88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124e8c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00124e90:;
    {
        cpu->r[14] = 0x00124e94u; fn_000ec21c(cpu);
    }
L_00124e94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00124e98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00124e9cu)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenuC1Eb @ 00124ea8 (arm) */
void fn_00124ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124ea8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00124eac:;
    {
        cpu->r[4] = rd32(0x00124eb4u + + 0x28u);
    }
L_00124eb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00124eb4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00124eb8:;
    {
        cpu->r[14] = 0x00124ebcu; fn_0010ffa8(cpu);
    }
L_00124ebc:;
    {
        cpu->r[3] = rd32(0x00124ec4u + + 0x1cu);
    }
L_00124ec0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00124ec8u, cpu->r[4], 0, 0);
    }
L_00124ec4:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_00124ec8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00124ecc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00124ed0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124ed4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00124ed8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00124edcu)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenuC2Eb @ 00124ee4 (arm) */
void fn_00124ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124ee4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00124ee8:;
    {
        cpu->r[4] = rd32(0x00124ef0u + + 0x28u);
    }
L_00124eec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00124ef0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00124ef4:;
    {
        cpu->r[14] = 0x00124ef8u; fn_0010ffa8(cpu);
    }
L_00124ef8:;
    {
        cpu->r[3] = rd32(0x00124f00u + + 0x1cu);
    }
L_00124efc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00124f04u, cpu->r[4], 0, 0);
    }
L_00124f00:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_00124f04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00124f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00124f0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00124f10:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00124f14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00124f18u)) return;
    }
}

/* _ZN26GS_SoundOptionsControlMenu11InitSpritesEv @ 00124f20 (arm) */
void fn_00124f20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00124f20:;
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
L_00124f24:;
    {
        cpu->r[4] = rd32(0x00124f2cu + + 0x2ccu);
    }
L_00124f28:;
    {
        cpu->r[7] = rd32(0x00124f30u + + 0x2ccu);
    }
L_00124f2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00124f30:;
    {
        cpu->r[4] = add_flags(cpu, 0x00124f38u, cpu->r[4], 0, 0);
    }
L_00124f34:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00124f38:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00124f3c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125074;
        }
    }
L_00124f44:;
    {
        cpu->r[6] = rd32(0x00124f4cu + + 0x2b4u);
    }
L_00124f48:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00124f4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00124f50:;
    {
        cpu->r[14] = 0x00124f54u; fn_00096a08(cpu);
    }
L_00124f54:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00124f58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124f5c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00124f60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124f64:;
    {
        cpu->r[14] = 0x00124f68u; fn_0018aa44(cpu);
    }
L_00124f68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00124f6c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00124f70:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124f74:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00124f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001251bc;
        }
    }
L_00124f7c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00124f80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00124f84:;
    {
        cpu->r[14] = 0x00124f88u; fn_00096a08(cpu);
    }
L_00124f88:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00124f8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124f90:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00124f94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124f98:;
    {
        cpu->r[14] = 0x00124f9cu; fn_0018aa44(cpu);
    }
L_00124f9c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00124fa0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00124fa4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124fa8:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00124fac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125180;
        }
    }
L_00124fb0:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_00124fb4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00124fb8:;
    {
        cpu->r[14] = 0x00124fbcu; fn_00096a08(cpu);
    }
L_00124fbc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00124fc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124fc4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00124fc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00124fcc:;
    {
        cpu->r[14] = 0x00124fd0u; fn_0018aa44(cpu);
    }
L_00124fd0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00124fd4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00124fd8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00124fdc:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00124fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125144;
        }
    }
L_00124fe4:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_00124fe8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00124fec:;
    {
        cpu->r[14] = 0x00124ff0u; fn_00096a08(cpu);
    }
L_00124ff0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00124ff4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00124ff8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00124ffc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125000:;
    {
        cpu->r[14] = 0x00125004u; fn_0018aa44(cpu);
    }
L_00125004:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125008:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0012500c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125010:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_00125014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125108;
        }
    }
L_00125018:;
    {
        cpu->r[3] = rd32(0x00125020u + + 0x1e4u);
    }
L_0012501c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00125020:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125024:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00125028:;
    {
        cpu->r[14] = 0x0012502cu; fn_000f3430(cpu);
    }
L_0012502c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125030:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00125034:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00125038:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012503c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_00125040:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_00125044:;
    {
        cpu->r[14] = 0x00125048u; fn_0018aa44(cpu);
    }
L_00125048:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012504c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00125050:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125054:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00125058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001250b8;
        }
    }
L_0012505c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00125060:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125064:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00125068:;
    {
        cpu->r[14] = 0x0012506cu; fn_0018aa44(cpu);
    }
L_0012506c:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00125070:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00125074u)) return;
    }
L_00125074:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125078:;
    {
        cpu->r[14] = 0x0012507cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012507c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124f44;
        }
    }
L_00125084:;
    {
        cpu->r[6] = rd32(0x0012508cu + + 0x174u);
    }
L_00125088:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012508c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125090:;
    {
        cpu->r[14] = 0x00125094u; fn_0018aa20(cpu);
    }
L_00125094:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125098:;
    {
        cpu->r[14] = 0x0012509cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012509c:;
    {
        cpu->r[3] = rd32(0x001250a4u + + 0x164u);
    }
L_001250a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001250a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001250a8:;
    {
        cpu->r[3] = rd32(0x001250b0u + + 0x15cu);
    }
L_001250ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001250b0:;
    {
        cpu->r[14] = 0x001250b4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001250b4:;
    {
        goto L_00124f48;
    }
L_001250b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001250bc:;
    {
        cpu->r[14] = 0x001250c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001250c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001250c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012505c;
        }
    }
L_001250c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001250cc:;
    {
        cpu->r[14] = 0x001250d0u; fn_0018aa20(cpu);
    }
L_001250d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001250d4:;
    {
        cpu->r[14] = 0x001250d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001250d8:;
    {
        cpu->r[3] = rd32(0x001250e0u + + 0x128u);
    }
L_001250dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001250e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001250e4:;
    {
        cpu->r[3] = rd32(0x001250ecu + + 0x120u);
    }
L_001250e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001250ec:;
    {
        cpu->r[14] = 0x001250f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001250f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001250f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001250f8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001250fc:;
    {
        cpu->r[14] = 0x00125100u; fn_0018aa44(cpu);
    }
L_00125100:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00125104:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00125108u)) return;
    }
L_00125108:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012510c:;
    {
        cpu->r[14] = 0x00125110u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125110:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125018;
        }
    }
L_00125118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012511c:;
    {
        cpu->r[14] = 0x00125120u; fn_0018aa20(cpu);
    }
L_00125120:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125124:;
    {
        cpu->r[14] = 0x00125128u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125128:;
    {
        cpu->r[3] = rd32(0x00125130u + + 0xd8u);
    }
L_0012512c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125130:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125134:;
    {
        cpu->r[3] = rd32(0x0012513cu + + 0xd0u);
    }
L_00125138:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012513c:;
    {
        cpu->r[14] = 0x00125140u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00125140:;
    {
        goto L_00125018;
    }
L_00125144:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125148:;
    {
        cpu->r[14] = 0x0012514cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012514c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124fe4;
        }
    }
L_00125154:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125158:;
    {
        cpu->r[14] = 0x0012515cu; fn_0018aa20(cpu);
    }
L_0012515c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125160:;
    {
        cpu->r[14] = 0x00125164u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125164:;
    {
        cpu->r[3] = rd32(0x0012516cu + + 0x9cu);
    }
L_00125168:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012516c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125170:;
    {
        cpu->r[3] = rd32(0x00125178u + + 0x94u);
    }
L_00125174:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125178:;
    {
        cpu->r[14] = 0x0012517cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0012517c:;
    {
        goto L_00124fe4;
    }
L_00125180:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125184:;
    {
        cpu->r[14] = 0x00125188u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012518c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124fb0;
        }
    }
L_00125190:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125194:;
    {
        cpu->r[14] = 0x00125198u; fn_0018aa20(cpu);
    }
L_00125198:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012519c:;
    {
        cpu->r[14] = 0x001251a0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001251a0:;
    {
        cpu->r[3] = rd32(0x001251a8u + + 0x60u);
    }
L_001251a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001251a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001251ac:;
    {
        cpu->r[3] = rd32(0x001251b4u + + 0x58u);
    }
L_001251b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001251b4:;
    {
        cpu->r[14] = 0x001251b8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001251b8:;
    {
        goto L_00124fb0;
    }
L_001251bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001251c0:;
    {
        cpu->r[14] = 0x001251c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001251c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001251c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00124f7c;
        }
    }
L_001251cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001251d0:;
    {
        cpu->r[14] = 0x001251d4u; fn_0018aa20(cpu);
    }
L_001251d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001251d8:;
    {
        cpu->r[14] = 0x001251dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001251dc:;
    {
        cpu->r[3] = rd32(0x001251e4u + + 0x24u);
    }
L_001251e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001251e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001251e8:;
    {
        cpu->r[3] = rd32(0x001251f0u + + 0x1cu);
    }
L_001251ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001251f0:;
    {
        cpu->r[14] = 0x001251f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001251f4:;
    {
        goto L_00124f7c;
    }
}

/* _ZN26GS_SoundOptionsControlMenu6RenderEv @ 00125210 (arm) */
void fn_00125210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125210:;
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
L_00125214:;
    {
        cpu->r[5] = rd32(0x0012521cu + + 0x4ccu);
    }
L_00125218:;
    {
        cpu->r[3] = rd32(0x00125220u + + 0x4ccu);
    }
L_0012521c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00125220:;
    {
        cpu->r[5] = add_flags(cpu, 0x00125228u, cpu->r[5], 0, 0);
    }
L_00125224:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8cau);
    }
L_00125228:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012522c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00125230:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00125234:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00125238:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_0012523c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_00125240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125590;
        }
    }
L_00125244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00125248:;
    {
        cpu->r[14] = 0x0012524cu; fn_0010de00(cpu);
    }
L_0012524c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012525c;
        }
    }
L_00125254:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00125258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012525cu)) return;
    }
L_0012525c:;
    {
        cpu->r[3] = rd32(0x00125264u + + 0x48cu);
    }
L_00125260:;
    {
        cpu->r[1] = 0xaa000000u;
    }
L_00125264:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00125268:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012526c:;
    {
        cpu->r[14] = 0x00125270u; fn_0012dd58(cpu);
    }
L_00125270:;
    {
        cpu->r[3] = rd32(0x00125278u + + 0x47cu);
    }
L_00125274:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00125278:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0012527c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001255d0;
        }
    }
L_00125284:;
    {
        cpu->r[7] = rd32(0x0012528cu + + 0x46cu);
    }
L_00125288:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0012528c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00125290:;
    {
        cpu->r[14] = 0x00125294u; fn_00096a08(cpu);
    }
L_00125294:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00125298:;
    {
        cpu->r[10] = rd32(0x001252a0u + + 0x45cu);
    }
L_0012529c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001252a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001252a4:;
    {
        cpu->r[14] = 0x001252a8u; fn_0018aa44(cpu);
    }
L_001252a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001252ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001252b0:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[3]);
    }
L_001252b4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001252b8:;
    {
        cpu->r[0] = 0x000004ddu;
    }
L_001252bc:;
    {
        cpu->r[14] = 0x001252c0u; fn_000aeb58(cpu);
    }
L_001252c0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001252c4:;
    {
        cpu->r[3] = 0x00000073u;
    }
L_001252c8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001252cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001252d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001252d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001252d8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001252dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001252e0:;
    {
        cpu->r[14] = 0x001252e4u; fn_000ad19c(cpu);
    }
L_001252e4:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001252e8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001252ec:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001252f0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0xacu);
    }
L_001252f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001252f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001255a8;
        }
    }
L_001252fc:;
    {
        cpu->r[8] = rd32(0x00125304u + + 0x3fcu);
    }
L_00125300:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00125304:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00125308:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0012530c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00125310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00125314:;
    {
        cpu->r[3] = 0x0000008cu;
    }
L_00125318:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0012531c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00125320:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_00125324:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00125328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000024u, 0, 0);
    }
L_0012532c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00125330:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00125334:;
    {
        cpu->r[14] = 0x00125338u; guest_call(cpu, cpu->r[11]);
    }
L_00125338:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0012533c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00125340:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001256ac;
        }
    }
L_00125348:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0012534c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00125350:;
    {
        cpu->r[14] = 0x00125354u; fn_00093f98(cpu);
    }
L_00125354:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00125358:;
    {
        cpu->r[3] = rd32(0x00125360u + + 0x3a4u);
    }
L_0012535c:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_00125360:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00125364:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125368:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0012536c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00125370:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00125378u + + 0x36cu);
    }
L_00125374:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00125378:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0012537c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125688;
        }
    }
L_00125380:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00125384:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00125388:;
    {
        cpu->r[0] = 0x000004dbu;
    }
L_0012538c:;
    {
        cpu->r[11] = rd32(cpu->r[9] + + 0x24u);
    }
L_00125390:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_00125394:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00125398:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_0012539c:;
    {
        cpu->r[14] = 0x001253a0u; fn_000aeb58(cpu);
    }
L_001253a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001253a4:;
    {
        cpu->r[3] = 0x000000b8u;
    }
L_001253a8:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001253ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001253b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001253b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001253b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001253bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001253c0:;
    {
        cpu->r[14] = 0x001253c4u; fn_000ad19c(cpu);
    }
L_001253c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001253c8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001253cc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001253d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xacu);
    }
L_001253d4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001253d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001253dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012565c;
        }
    }
L_001253e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001253e4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001253e8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001253ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001253f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001253f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001253f8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001253fc:;
    {
        cpu->r[12] = 0x000000d1u;
    }
L_00125400:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00125404:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00125408:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012540c:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00125410:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00125414:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00000028u, 0, 0);
    }
L_00125418:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0012541c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00125420:;
    {
        cpu->r[14] = 0x00125424u; guest_call(cpu, cpu->r[12]);
    }
L_00125424:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00125428:;
    {
        cpu->r[0] = 0x000004dcu;
    }
L_0012542c:;
    {
        cpu->r[14] = 0x00125430u; fn_000aeb58(cpu);
    }
L_00125430:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00125434:;
    {
        cpu->r[3] = 0x000000fdu;
    }
L_00125438:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0012543c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00125440:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00125444:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00125448:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012544c:;
    {
        cpu->r[14] = 0x00125450u; fn_000ad19c(cpu);
    }
L_00125450:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00125454:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00125458:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0012545c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xacu);
    }
L_00125460:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125464:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00125468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125638;
        }
    }
L_0012546c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00125470:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00125474:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00125478:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0012547c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_00125480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00125484:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00125488:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0012548c:;
    {
        cpu->r[12] = 0x00000116u;
    }
L_00125490:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00125494:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00125498:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0012549c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x0000002cu, 0, 0);
    }
L_001254a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001254a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001254a8:;
    {
        cpu->r[14] = 0x001254acu; guest_call(cpu, cpu->r[12]);
    }
L_001254ac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001254b0:;
    {
        cpu->r[0] = 0x000004dfu;
    }
L_001254b4:;
    {
        cpu->r[14] = 0x001254b8u; fn_000aeb58(cpu);
    }
L_001254b8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001254bc:;
    {
        cpu->r[3] = 0x00000142u;
    }
L_001254c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001254c4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001254c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001254cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001254d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001254d4:;
    {
        cpu->r[14] = 0x001254d8u; fn_000ad19c(cpu);
    }
L_001254d8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001254dc:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001254e0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001254e4:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0xacu);
    }
L_001254e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001254ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125614;
        }
    }
L_001254f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001254f4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001254f8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001254fc:;
    {
        cpu->r[0] = 0x0000015bu;
    }
L_00125500:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_00125504:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_00125508:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0012550c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00125510:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00125514:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00125518:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0012551c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00125520:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00125524:;
    {
        cpu->r[14] = 0x00125528u; guest_call(cpu, cpu->r[10]);
    }
L_00125528:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_0012552c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00125530:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[2]);
    }
L_00125534:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[3]);
    }
L_00125538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0012553c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00125540:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012556c;
        }
    }
L_00125544:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00125548:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0012554c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00125550:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00125554:;
    {
        cpu->r[14] = 0x0012555cu;
    }
L_00125558:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012555cu)) return;
    }
L_0012555c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00125560:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00125564:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00125568:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00125544;
        }
    }
L_0012556c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_00125570:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00125574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001256d0;
        }
    }
L_00125578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012557c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00125580:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00125584:;
    {
        cpu->r[14] = 0x0012558cu;
    }
L_00125588:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012558cu)) return;
    }
L_0012558c:;
    {
        goto L_00125254;
    }
L_00125590:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00125594:;
    {
        cpu->r[14] = 0x0012559cu;
    }
L_00125598:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012559cu)) return;
    }
L_0012559c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_001255a0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 1, 0);
    }
L_001255a4:;
    {
        goto L_00125244;
    }
L_001255a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001255ac:;
    {
        cpu->r[14] = 0x001255b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001255b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001255b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001252fc;
        }
    }
L_001255b8:;
    {
        cpu->r[8] = rd32(0x001255c0u + + 0x140u);
    }
L_001255bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001255c0:;
    {
        cpu->r[14] = 0x001255c4u; fn_00094228(cpu);
    }
L_001255c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001255c8:;
    {
        cpu->r[14] = 0x001255ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001255cc:;
    {
        goto L_00125300;
    }
L_001255d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001255d4:;
    {
        cpu->r[14] = 0x001255d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001255d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001255dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125284;
        }
    }
L_001255e0:;
    {
        cpu->r[7] = rd32(0x001255e8u + + 0x110u);
    }
L_001255e4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001255e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001255ec:;
    {
        cpu->r[14] = 0x001255f0u; fn_0018aa20(cpu);
    }
L_001255f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001255f4:;
    {
        cpu->r[14] = 0x001255f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001255f8:;
    {
        cpu->r[3] = rd32(0x00125600u + + 0x108u);
    }
L_001255fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125600:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00125604:;
    {
        cpu->r[3] = rd32(0x0012560cu + + 0x100u);
    }
L_00125608:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012560c:;
    {
        cpu->r[14] = 0x00125610u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00125610:;
    {
        goto L_00125288;
    }
L_00125614:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00125618:;
    {
        cpu->r[14] = 0x0012561cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012561c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001254f0;
        }
    }
L_00125624:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00125628:;
    {
        cpu->r[14] = 0x0012562cu; fn_00094228(cpu);
    }
L_0012562c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00125630:;
    {
        cpu->r[14] = 0x00125634u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125634:;
    {
        goto L_001254f0;
    }
L_00125638:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012563c:;
    {
        cpu->r[14] = 0x00125640u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125640:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012546c;
        }
    }
L_00125648:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0012564c:;
    {
        cpu->r[14] = 0x00125650u; fn_00094228(cpu);
    }
L_00125650:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00125654:;
    {
        cpu->r[14] = 0x00125658u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125658:;
    {
        goto L_0012546c;
    }
L_0012565c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00125660:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00125664:;
    {
        cpu->r[14] = 0x00125668u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125668:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012566c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001253e0;
        }
    }
L_00125670:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00125674:;
    {
        cpu->r[14] = 0x00125678u; fn_00094228(cpu);
    }
L_00125678:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0012567c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00125680:;
    {
        cpu->r[14] = 0x00125684u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125684:;
    {
        goto L_001253e0;
    }
L_00125688:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0012568c:;
    {
        cpu->r[14] = 0x00125690u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125690:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125380;
        }
    }
L_00125698:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0012569c:;
    {
        cpu->r[14] = 0x001256a0u; fn_00094228(cpu);
    }
L_001256a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001256a4:;
    {
        cpu->r[14] = 0x001256a8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001256a8:;
    {
        goto L_00125380;
    }
L_001256ac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001256b0:;
    {
        cpu->r[14] = 0x001256b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001256b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001256b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125348;
        }
    }
L_001256bc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001256c0:;
    {
        cpu->r[14] = 0x001256c4u; fn_00094228(cpu);
    }
L_001256c4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001256c8:;
    {
        cpu->r[14] = 0x001256ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001256cc:;
    {
        goto L_00125348;
    }
L_001256d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001256d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001256d8:;
    {
        cpu->r[14] = 0x001256e0u;
    }
L_001256dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001256e0u)) return;
    }
L_001256e0:;
    {
        goto L_00125578;
    }
}

/* _ZN26GS_SoundOptionsControlMenu6UpdateEv @ 00125710 (arm) */
void fn_00125710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125710:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00125714:;
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
L_00125718:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012571c:;
    {
        cpu->r[4] = rd32(0x00125724u + + 0x3ecu);
    }
L_00125720:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00125724:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00125728:;
    {
        cpu->r[4] = add_flags(cpu, 0x00125730u, cpu->r[4], 0, 0);
    }
L_0012572c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012574c;
        }
    }
L_00125730:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00125734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001258b4;
        }
    }
L_00125738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012573c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001258ac;
        }
    }
L_00125740:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125744:;
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
L_00125748:;
    {
        return fn_00114a58(cpu);
    }
L_0012574c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00125750:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00125754:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00125758:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0012575c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_00125760:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00125764:;
    {
        cpu->r[14] = 0x00125768u; fn_000eb59c(cpu);
    }
L_00125768:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012576c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00125770:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00125774:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00125778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012579c;
        }
    }
L_0012577c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_00125780:;
    {
        cpu->r[6] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00125784:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00125788:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012579c;
        }
    }
L_0012578c:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_00125790:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00125794:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00125798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001259e8;
        }
    }
L_0012579c:;
    {
        cpu->r[7] = rd32(0x001257a4u + + 0x370u);
    }
L_001257a0:;
    {
        cpu->r[8] = rd32(0x001257a8u + + 0x37cu);
    }
L_001257a4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001257a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001257ac:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001257b0:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_001257b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001257b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001257cc;
        }
    }
L_001257bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001257c0:;
    {
        cpu->r[14] = 0x001257c4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001257c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001257c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125a28;
        }
    }
L_001257cc:;
    {
        cpu->r[6] = rd32(0x001257d4u + + 0x344u);
    }
L_001257d0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001257d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001257d8:;
    {
        cpu->r[14] = 0x001257dcu; fn_00093f98(cpu);
    }
L_001257dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001257e0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001257e4:;
    {
        cpu->r[14] = 0x001257e8u; fn_00099a70(cpu);
    }
L_001257e8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001257ec:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001257f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001257f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125818;
        }
    }
L_001257f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001257fc:;
    {
        cpu->r[14] = 0x00125800u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125818;
        }
    }
L_00125808:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012580c:;
    {
        cpu->r[14] = 0x00125810u; fn_00094228(cpu);
    }
L_00125810:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00125814:;
    {
        cpu->r[14] = 0x00125818u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125818:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012581c:;
    {
        cpu->r[14] = 0x00125820u; fn_00093f98(cpu);
    }
L_00125820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125824:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001259c4;
        }
    }
L_00125828:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0012582c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125830:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00125834:;
    {
        cpu->r[14] = 0x00125838u; fn_000a3410(cpu);
    }
L_00125838:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012583c:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00125840:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00125844:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00125848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125938;
        }
    }
L_0012584c:;
    {
        cpu->r[3] = rd32(0x00125854u + + 0x2c8u);
    }
L_00125850:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125854:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00125858:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012585c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125928;
        }
    }
L_00125860:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8feu);
    }
L_00125864:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00125868:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125878;
        }
    }
L_0012586c:;
    {
        cpu->r[14] = 0x00125870u; fn_000979a0(cpu);
    }
L_00125870:;
    {
        cpu->r[14] = 0x00125874u; fn_00093fc8(cpu);
    }
L_00125874:;
    {
        cpu->r[14] = 0x00125878u; fn_000a20d8(cpu);
    }
L_00125878:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012587c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00125880:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125904;
        }
    }
L_00125888:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012588c:;
    {
        cpu->r[14] = 0x00125890u; fn_00093f98(cpu);
    }
L_00125890:;
    {
        cpu->r[3] = rd32(0x00125898u + + 0x288u);
    }
L_00125894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125898:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0012589c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001258a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001258a8u + + 0x264u);
    }
L_001258a4:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001258a8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001258ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001258b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001258b4u)) return;
    }
L_001258b4:;
    {
        cpu->r[14] = 0x001258b8u; fn_0010da28(cpu);
    }
L_001258b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001258bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001258ac;
        }
    }
L_001258c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_001258c4:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_001258c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001258cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125b28;
        }
    }
L_001258d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00125954;
        }
    }
L_001258d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001258d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125a68;
        }
    }
L_001258dc:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001258e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001258e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001258ac;
        }
    }
L_001258e8:;
    {
        cpu->r[3] = rd32(0x001258f0u + + 0x234u);
    }
L_001258ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001258f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001258f4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001258f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001258fc:;
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
L_00125900:;
    {
        return fn_000f34e8(cpu);
    }
L_00125904:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125908:;
    {
        cpu->r[14] = 0x0012590cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012590c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125888;
        }
    }
L_00125914:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125918:;
    {
        cpu->r[14] = 0x0012591cu; fn_00094228(cpu);
    }
L_0012591c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125920:;
    {
        cpu->r[14] = 0x00125924u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125924:;
    {
        goto L_00125888;
    }
L_00125928:;
    {
        cpu->r[14] = 0x0012592cu; fn_000979a0(cpu);
    }
L_0012592c:;
    {
        cpu->r[14] = 0x00125930u; fn_00093fb8(cpu);
    }
L_00125930:;
    {
        cpu->r[14] = 0x00125934u; fn_000a0ea4(cpu);
    }
L_00125934:;
    {
        goto L_00125860;
    }
L_00125938:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0012593c:;
    {
        cpu->r[14] = 0x00125940u; fn_00099b28(cpu);
    }
L_00125940:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125944:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00125948:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0012594c:;
    {
        cpu->r[14] = 0x00125950u; fn_000a2764(cpu);
    }
L_00125950:;
    {
        goto L_0012584c;
    }
L_00125954:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00125958:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0012595c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125a40;
        }
    }
L_00125960:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00125964:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00125968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125abc;
        }
    }
L_0012596c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00125970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001258ac;
        }
    }
L_00125974:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00125978:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012597c:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_00125980:;
    {
        cpu->r[14] = 0x00125988u;
    }
L_00125984:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00125988u)) return;
    }
L_00125988:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012598c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001258ac;
        }
    }
L_00125990:;
    {
        cpu->r[3] = rd32(0x00125998u + + 0x18cu);
    }
L_00125994:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00125998:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012599c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001259a0:;
    {
        cpu->r[14] = 0x001259a4u; fn_0018ba6c(cpu);
    }
L_001259a4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_001259a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001259ac:;
    {
        cpu->r[14] = 0x001259b0u; fn_00127fd8(cpu);
    }
L_001259b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001259b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001259b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001259bc:;
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
L_001259c0:;
    {
        return fn_000f36dc(cpu);
    }
L_001259c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001259c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001259cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001259d0:;
    {
        cpu->r[14] = 0x001259d4u; fn_000a3410(cpu);
    }
L_001259d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001259d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001259dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001259e0:;
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
L_001259e4:;
    {
        return fn_0018cbe8(cpu);
    }
L_001259e8:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_001259ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001259f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001259f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012579c;
        }
    }
L_001259f8:;
    {
        cpu->r[14] = 0x001259fcu; fn_000c1cd8(cpu);
    }
L_001259fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_00125a00:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_00125a04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00125a08:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00125a0c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00125a10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00125a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012579c;
        }
    }
L_00125a18:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[6]);
    }
L_00125a1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125a20:;
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
L_00125a24:;
    {
        return fn_000bd908(cpu);
    }
L_00125a28:;
    {
        cpu->r[6] = rd32(0x00125a30u + + 0xe8u);
    }
L_00125a2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125a30:;
    {
        cpu->r[14] = 0x00125a34u; fn_00094228(cpu);
    }
L_00125a34:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125a38:;
    {
        cpu->r[14] = 0x00125a3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125a3c:;
    {
        goto L_001257d0;
    }
L_00125a40:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00125a44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125a48:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00125a4c:;
    {
        cpu->r[14] = 0x00125a54u;
    }
L_00125a50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00125a54u)) return;
    }
L_00125a54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125a58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125bb0;
        }
    }
L_00125a5c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00125a60:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_00125a64:;
    {
        goto L_001258ac;
    }
L_00125a68:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00125a6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125a70:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00125a74:;
    {
        cpu->r[14] = 0x00125a7cu;
    }
L_00125a78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00125a7cu)) return;
    }
L_00125a7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125a80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125a5c;
        }
    }
L_00125a84:;
    {
        cpu->r[3] = rd32(0x00125a8cu + + 0x98u);
    }
L_00125a88:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_00125a8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125a90:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00125a94:;
    {
        cpu->r[14] = 0x00125a98u; fn_0018ba6c(cpu);
    }
L_00125a98:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00125a9c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x8fcu);
    }
L_00125aa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00125aa4:;
    {
        cpu->r[14] = 0x00125aa8u; fn_0012234c(cpu);
    }
L_00125aa8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125aac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00125ab0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125ab4:;
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
L_00125ab8:;
    {
        return fn_000f36dc(cpu);
    }
L_00125abc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00125ac0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125ac4:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00125ac8:;
    {
        cpu->r[14] = 0x00125ad0u;
    }
L_00125acc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00125ad0u)) return;
    }
L_00125ad0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125a5c;
        }
    }
L_00125ad8:;
    {
        cpu->r[3] = rd32(0x00125ae0u + + 0x44u);
    }
L_00125adc:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00125ae0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125ae4:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00125ae8:;
    {
        cpu->r[14] = 0x00125aecu; fn_0018ba6c(cpu);
    }
L_00125aec:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00125af0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00125af4:;
    {
        cpu->r[14] = 0x00125af8u; fn_00124ea8(cpu);
    }
L_00125af8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125afc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00125b00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125b04:;
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
L_00125b08:;
    {
        return fn_000f36dc(cpu);
    }
L_00125b28:;
    {
        cpu->r[0] = rd32(0x00125b30u + - 0xcu);
    }
L_00125b2c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00125b30:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00125b34:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00125b38:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00125b3c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00125b40:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00125b44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00125b48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00125b4c:;
    {
        cpu->r[14] = 0x00125b50u; fn_000fd248(cpu);
    }
L_00125b50:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00125b54:;
    {
        cpu->r[14] = 0x00125b58u; fn_000979a0(cpu);
    }
L_00125b58:;
    {
        cpu->r[14] = 0x00125b5cu; fn_00093f98(cpu);
    }
L_00125b5c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00125b60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125b64:;
    {
        cpu->r[14] = 0x00125b68u; fn_00099a70(cpu);
    }
L_00125b68:;
    {
        cpu->r[14] = 0x00125b6cu; fn_000979a0(cpu);
    }
L_00125b6c:;
    {
        cpu->r[14] = 0x00125b70u; fn_00093f98(cpu);
    }
L_00125b70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125b74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00125b9c;
        }
    }
L_00125b78:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125b7c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00125b80:;
    {
        cpu->r[14] = 0x00125b84u; fn_000a3410(cpu);
    }
L_00125b84:;
    {
        cpu->r[14] = 0x00125b88u; fn_000979a0(cpu);
    }
L_00125b88:;
    {
        cpu->r[14] = 0x00125b8cu; fn_00093fb8(cpu);
    }
L_00125b8c:;
    {
        cpu->r[14] = 0x00125b90u; fn_000a0ea4(cpu);
    }
L_00125b90:;
    {
        cpu->r[14] = 0x00125b94u; fn_000979a0(cpu);
    }
L_00125b94:;
    {
        cpu->r[14] = 0x00125b98u; fn_00093fc8(cpu);
    }
L_00125b98:;
    {
        cpu->r[14] = 0x00125b9cu; fn_000a20d8(cpu);
    }
L_00125b9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00125ba0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125ba4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125ba8:;
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
L_00125bac:;
    {
        return fn_000f34e8(cpu);
    }
L_00125bb0:;
    {
        cpu->r[3] = rd32(0x00125bb8u + - 0x94u);
    }
L_00125bb4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00125bb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125bbc:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00125bc0:;
    {
        cpu->r[14] = 0x00125bc4u; fn_0018ba6c(cpu);
    }
L_00125bc4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00125bc8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00125bcc:;
    {
        cpu->r[14] = 0x00125bd0u; fn_001038b0(cpu);
    }
L_00125bd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125bd4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00125bd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00125bdc:;
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
L_00125be0:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN9GS_Splash8isKindOfEi @ 00125be4 (arm) */
void fn_00125be4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125be4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001fu, 1, 1);
    }
L_00125be8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00125bec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00125bf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_45 @ 00125bf4 (arm) */
void fn_00125bf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125bf4:;
    {
        cpu->r[3] = rd32(0x00125bfcu + + 0x20u);
    }
L_00125bf8:;
    {
        cpu->r[1] = rd32(0x00125c00u + + 0x20u);
    }
L_00125bfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00125c04u, cpu->r[3], 0, 0);
    }
L_00125c00:;
    {
        cpu->r[2] = rd32(0x00125c08u + + 0x1cu);
    }
L_00125c04:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00125c08:;
    {
        cpu->r[2] = add_flags(cpu, 0x00125c10u, cpu->r[2], 0, 0);
    }
L_00125c0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00125c10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00125c14:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00125c18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9GS_Splash6UpdateEv @ 00125c28 (arm) */
void fn_00125c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125c28:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00125c2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00125c30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00125c34:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00125c38:;
    {
        cpu->r[14] = 0x00125c3cu; fn_000eb59c(cpu);
    }
L_00125c3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00125c40:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_00125c44:;
    {
        cpu->r[0] = rd32(0x00125c4cu + + 0x68u);
    }
L_00125c48:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00125c4c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00125c54u, cpu->r[0], 0, 0);
    }
L_00125c50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00125c54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00125c60;
        }
    }
L_00125c58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00125c5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00125c60u)) return;
    }
L_00125c60:;
    {
        cpu->r[14] = rd32(0x00125c68u + + 0x50u);
    }
L_00125c64:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00125c68:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00125c6c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00125c70:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00125c74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_00125c78:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00125c7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00125c80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00125c84:;
    {
        cpu->r[14] = 0x00125c88u; fn_000fd248(cpu);
    }
L_00125c88:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00125c8c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_00125c90:;
    {
        cpu->r[14] = 0x00125c94u; fn_0018ba6c(cpu);
    }
L_00125c94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125c98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00125c9c:;
    {
        cpu->r[14] = 0x00125ca0u; fn_00110010(cpu);
    }
L_00125ca0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125ca4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00125ca8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00125cac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00125cb0:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN9GS_Splash6CreateEv @ 00125cbc (arm) */
void fn_00125cbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125cbc:;
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
L_00125cc0:;
    {
        cpu->r[4] = rd32(0x00125cc8u + + 0x114u);
    }
L_00125cc4:;
    {
        cpu->r[14] = 0x00125cc8u; fn_001101ac(cpu);
    }
L_00125cc8:;
    {
        cpu->r[6] = rd32(0x00125cd0u + + 0x110u);
    }
L_00125ccc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00125cd4u, cpu->r[4], 0, 0);
    }
L_00125cd0:;
    {
        cpu->r[7] = rd32(0x00125cd8u + + 0x10cu);
    }
L_00125cd4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125cd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125cdc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00125ce0:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_00125ce4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125d6c;
        }
    }
L_00125cec:;
    {
        cpu->r[5] = rd32(0x00125cf4u + + 0xf4u);
    }
L_00125cf0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00125cf4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125cf8:;
    {
        cpu->r[14] = 0x00125cfcu; fn_00093f98(cpu);
    }
L_00125cfc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00125d00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125d04:;
    {
        cpu->r[14] = 0x00125d08u; fn_00099a70(cpu);
    }
L_00125d08:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125d0c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00125d10:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125db8;
        }
    }
L_00125d18:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00125d1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125d20:;
    {
        cpu->r[14] = 0x00125d24u; fn_00093fb8(cpu);
    }
L_00125d24:;
    {
        cpu->r[14] = 0x00125d28u; fn_000a0ea4(cpu);
    }
L_00125d28:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125d2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00125d30:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125d94;
        }
    }
L_00125d38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00125d3c:;
    {
        cpu->r[14] = 0x00125d40u; fn_00093fc8(cpu);
    }
L_00125d40:;
    {
        cpu->r[14] = 0x00125d44u; fn_000a20d8(cpu);
    }
L_00125d44:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125d48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00125d4c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00125d50:;
    {
        cpu->r[14] = 0x00125d54u; fn_00099b28(cpu);
    }
L_00125d54:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125d58:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00125d5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00125d60:;
    {
        cpu->r[14] = 0x00125d64u; fn_000a2764(cpu);
    }
L_00125d64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00125d68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00125d6cu)) return;
    }
L_00125d6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125d70:;
    {
        cpu->r[14] = 0x00125d74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125d74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125cec;
        }
    }
L_00125d7c:;
    {
        cpu->r[5] = rd32(0x00125d84u + + 0x64u);
    }
L_00125d80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00125d84:;
    {
        cpu->r[14] = 0x00125d88u; fn_00094228(cpu);
    }
L_00125d88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125d8c:;
    {
        cpu->r[14] = 0x00125d90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125d90:;
    {
        goto L_00125cf0;
    }
L_00125d94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125d98:;
    {
        cpu->r[14] = 0x00125d9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125d9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125d38;
        }
    }
L_00125da4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125da8:;
    {
        cpu->r[14] = 0x00125dacu; fn_00094228(cpu);
    }
L_00125dac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00125db0:;
    {
        cpu->r[14] = 0x00125db4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125db4:;
    {
        goto L_00125d38;
    }
L_00125db8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125dbc:;
    {
        cpu->r[14] = 0x00125dc0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125dc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125d18;
        }
    }
L_00125dc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125dcc:;
    {
        cpu->r[14] = 0x00125dd0u; fn_00094228(cpu);
    }
L_00125dd0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125dd4:;
    {
        cpu->r[14] = 0x00125dd8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125dd8:;
    {
        goto L_00125d18;
    }
}

/* _ZN9GS_SplashD2Ev @ 00125dec (arm) */
void fn_00125dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125dec:;
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
L_00125df0:;
    {
        cpu->r[4] = rd32(0x00125df8u + + 0x100u);
    }
L_00125df4:;
    {
        cpu->r[7] = rd32(0x00125dfcu + + 0x100u);
    }
L_00125df8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00125dfc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00125e04u, cpu->r[4], 0, 0);
    }
L_00125e00:;
    {
        cpu->r[3] = rd32(0x00125e08u + + 0xf8u);
    }
L_00125e04:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125e08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125e0c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00125e10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00125e14:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00125e18:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125e1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125e78;
        }
    }
L_00125e20:;
    {
        cpu->r[6] = rd32(0x00125e28u + + 0xdcu);
    }
L_00125e24:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125e28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00125e2c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00125e30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125e34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125e38:;
    {
        cpu->r[14] = 0x00125e3cu; fn_0018aa58(cpu);
    }
L_00125e3c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125e40:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00125e44:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125e48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125ebc;
        }
    }
L_00125e4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125e50:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125e54:;
    {
        cpu->r[14] = 0x00125e58u; fn_0018b5c8(cpu);
    }
L_00125e58:;
    {
        cpu->r[3] = rd32(0x00125e60u + + 0xa8u);
    }
L_00125e5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125e60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125e64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00125e68:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00125e6c:;
    {
        cpu->r[14] = 0x00125e70u; fn_000ec21c(cpu);
    }
L_00125e70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00125e74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00125e78u)) return;
    }
L_00125e78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125e7c:;
    {
        cpu->r[14] = 0x00125e80u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125e80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125e20;
        }
    }
L_00125e88:;
    {
        cpu->r[6] = rd32(0x00125e90u + + 0x74u);
    }
L_00125e8c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125e90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125e94:;
    {
        cpu->r[14] = 0x00125e98u; fn_0018aa20(cpu);
    }
L_00125e98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125e9c:;
    {
        cpu->r[14] = 0x00125ea0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125ea0:;
    {
        cpu->r[3] = rd32(0x00125ea8u + + 0x64u);
    }
L_00125ea4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125ea8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125eac:;
    {
        cpu->r[3] = rd32(0x00125eb4u + + 0x5cu);
    }
L_00125eb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125eb4:;
    {
        cpu->r[14] = 0x00125eb8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00125eb8:;
    {
        goto L_00125e24;
    }
L_00125ebc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00125ec0:;
    {
        cpu->r[14] = 0x00125ec4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125ec4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125e4c;
        }
    }
L_00125ecc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125ed0:;
    {
        cpu->r[14] = 0x00125ed4u; fn_0018aa20(cpu);
    }
L_00125ed4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00125ed8:;
    {
        cpu->r[14] = 0x00125edcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125edc:;
    {
        cpu->r[3] = rd32(0x00125ee4u + + 0x28u);
    }
L_00125ee0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125ee4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125ee8:;
    {
        cpu->r[3] = rd32(0x00125ef0u + + 0x20u);
    }
L_00125eec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125ef0:;
    {
        cpu->r[14] = 0x00125ef4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00125ef4:;
    {
        goto L_00125e4c;
    }
}

/* _ZN9GS_Splash17ApplyMenuSettingsEv @ 00125f14 (arm) */
void fn_00125f14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00125f14:;
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
L_00125f18:;
    {
        cpu->r[4] = rd32(0x00125f20u + + 0x118u);
    }
L_00125f1c:;
    {
        cpu->r[7] = rd32(0x00125f24u + + 0x118u);
    }
L_00125f20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00125f24:;
    {
        cpu->r[4] = add_flags(cpu, 0x00125f2cu, cpu->r[4], 0, 0);
    }
L_00125f28:;
    {
        cpu->r[1] = rd32(0x00125f30u + + 0x110u);
    }
L_00125f2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00125f30:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00125f34:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125f38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00125f3c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00125f40:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00125f44:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00125f48:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00125f4c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125f50:;
    {
        wr32(cpu->r[5] + + 0x8d4u, cpu->r[3]);
    }
L_00125f54:;
    {
        wr32(cpu->r[5] + + 0x8d8u, cpu->r[3]);
    }
L_00125f58:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[1]);
    }
L_00125f5c:;
    {
        wr32(cpu->r[5] + + 0x8e8u, cpu->r[3]);
    }
L_00125f60:;
    {
        wr32(cpu->r[5] + + 0x8e0u, cpu->r[2]);
    }
L_00125f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125fb8;
        }
    }
L_00125f68:;
    {
        cpu->r[6] = rd32(0x00125f70u + + 0xd4u);
    }
L_00125f6c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125f70:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125f74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00125f78:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00125f7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125f80:;
    {
        cpu->r[14] = 0x00125f84u; fn_0018aa58(cpu);
    }
L_00125f84:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00125f88:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00125f8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00125f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125ffc;
        }
    }
L_00125f94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125f98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00125f9c:;
    {
        cpu->r[14] = 0x00125fa0u; fn_0018b5c8(cpu);
    }
L_00125fa0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_00125fa4:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_00125fa8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00125fac:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00125fb0:;
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
L_00125fb4:;
    {
        return fn_0015ca98(cpu);
    }
L_00125fb8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125fbc:;
    {
        cpu->r[14] = 0x00125fc0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00125fc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00125fc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125f68;
        }
    }
L_00125fc8:;
    {
        cpu->r[6] = rd32(0x00125fd0u + + 0x74u);
    }
L_00125fcc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00125fd0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125fd4:;
    {
        cpu->r[14] = 0x00125fd8u; fn_0018aa20(cpu);
    }
L_00125fd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00125fdc:;
    {
        cpu->r[14] = 0x00125fe0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00125fe0:;
    {
        cpu->r[3] = rd32(0x00125fe8u + + 0x60u);
    }
L_00125fe4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00125fe8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125fec:;
    {
        cpu->r[3] = rd32(0x00125ff4u + + 0x58u);
    }
L_00125ff0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00125ff4:;
    {
        cpu->r[14] = 0x00125ff8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00125ff8:;
    {
        goto L_00125f6c;
    }
L_00125ffc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126000:;
    {
        cpu->r[14] = 0x00126004u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126004:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00125f94;
        }
    }
L_0012600c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126010:;
    {
        cpu->r[14] = 0x00126014u; fn_0018aa20(cpu);
    }
L_00126014:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126018:;
    {
        cpu->r[14] = 0x0012601cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012601c:;
    {
        cpu->r[3] = rd32(0x00126024u + + 0x24u);
    }
L_00126020:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126024:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126028:;
    {
        cpu->r[3] = rd32(0x00126030u + + 0x1cu);
    }
L_0012602c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126030:;
    {
        cpu->r[14] = 0x00126034u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126034:;
    {
        goto L_00125f94;
    }
}

/* _ZN9GS_SplashD1Ev @ 00126050 (arm) */
void fn_00126050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126050:;
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
L_00126054:;
    {
        cpu->r[4] = rd32(0x0012605cu + + 0x100u);
    }
L_00126058:;
    {
        cpu->r[7] = rd32(0x00126060u + + 0x100u);
    }
L_0012605c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00126060:;
    {
        cpu->r[4] = add_flags(cpu, 0x00126068u, cpu->r[4], 0, 0);
    }
L_00126064:;
    {
        cpu->r[3] = rd32(0x0012606cu + + 0xf8u);
    }
L_00126068:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012606c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126070:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00126074:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00126078:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0012607c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001260dc;
        }
    }
L_00126084:;
    {
        cpu->r[6] = rd32(0x0012608cu + + 0xdcu);
    }
L_00126088:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012608c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126090:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00126094:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00126098:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012609c:;
    {
        cpu->r[14] = 0x001260a0u; fn_0018aa58(cpu);
    }
L_001260a0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001260a4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001260a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001260ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126120;
        }
    }
L_001260b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001260b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001260b8:;
    {
        cpu->r[14] = 0x001260bcu; fn_0018b5c8(cpu);
    }
L_001260bc:;
    {
        cpu->r[3] = rd32(0x001260c4u + + 0xa8u);
    }
L_001260c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001260c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001260c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001260cc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001260d0:;
    {
        cpu->r[14] = 0x001260d4u; fn_000ec21c(cpu);
    }
L_001260d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001260d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001260dcu)) return;
    }
L_001260dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001260e0:;
    {
        cpu->r[14] = 0x001260e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001260e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001260e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126084;
        }
    }
L_001260ec:;
    {
        cpu->r[6] = rd32(0x001260f4u + + 0x74u);
    }
L_001260f0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001260f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001260f8:;
    {
        cpu->r[14] = 0x001260fcu; fn_0018aa20(cpu);
    }
L_001260fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126100:;
    {
        cpu->r[14] = 0x00126104u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126104:;
    {
        cpu->r[3] = rd32(0x0012610cu + + 0x64u);
    }
L_00126108:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012610c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126110:;
    {
        cpu->r[3] = rd32(0x00126118u + + 0x5cu);
    }
L_00126114:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126118:;
    {
        cpu->r[14] = 0x0012611cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0012611c:;
    {
        goto L_00126088;
    }
L_00126120:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126124:;
    {
        cpu->r[14] = 0x00126128u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126128:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012612c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001260b0;
        }
    }
L_00126130:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126134:;
    {
        cpu->r[14] = 0x00126138u; fn_0018aa20(cpu);
    }
L_00126138:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012613c:;
    {
        cpu->r[14] = 0x00126140u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126140:;
    {
        cpu->r[3] = rd32(0x00126148u + + 0x28u);
    }
L_00126144:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126148:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012614c:;
    {
        cpu->r[3] = rd32(0x00126154u + + 0x20u);
    }
L_00126150:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126154:;
    {
        cpu->r[14] = 0x00126158u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126158:;
    {
        goto L_001260b0;
    }
}

/* _ZN9GS_SplashD0Ev @ 00126178 (arm) */
void fn_00126178(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126178:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012617c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00126180:;
    {
        cpu->r[14] = 0x00126184u; fn_00126050(cpu);
    }
L_00126184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126188:;
    {
        cpu->r[14] = 0x0012618cu; fn_0018ba20(cpu);
    }
L_0012618c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126190:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126194u)) return;
    }
}

/* _ZN9GS_Splash6RenderEv @ 00126194 (arm) */
void fn_00126194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126194:;
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
L_00126198:;
    {
        cpu->r[4] = rd32(0x001261a0u + + 0x284u);
    }
L_0012619c:;
    {
        cpu->r[6] = rd32(0x001261a4u + + 0x284u);
    }
L_001261a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001261a4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001261acu, cpu->r[4], 0, 0);
    }
L_001261a8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001261ac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001261b0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001261b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001261b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126284;
        }
    }
L_001261bc:;
    {
        cpu->r[5] = rd32(0x001261c4u + + 0x268u);
    }
L_001261c0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001261c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001261c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001261cc:;
    {
        cpu->r[7] = rd32(0x001261d4u + + 0x25cu);
    }
L_001261d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001261d4:;
    {
        cpu->r[14] = 0x001261d8u; fn_0018aa44(cpu);
    }
L_001261d8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001261dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001261e0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001261e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001261e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001261ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001261f0:;
    {
        cpu->r[14] = 0x001261f4u; fn_000ad8a0(cpu);
    }
L_001261f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001261f8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001261fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4d8u);
    }
L_00126200:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_00126204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00126208:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00126308;
        }
    }
L_0012620c:;
    {
        cpu->r[14] = 0x00126210u; fn_000962d0(cpu);
    }
L_00126210:;
    {
        cpu->r[10] = rd32(0x00126218u + + 0x21cu);
    }
L_00126214:;
    {
        cpu->r[8] = rd32(0x0012621cu + + 0x21cu);
    }
L_00126218:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_0012621c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126384;
        }
    }
L_00126220:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00126224:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00126228:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012622c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001262c8;
        }
    }
L_00126230:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0xcu);
    }
L_00126234:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_00126238:;
    {
        cpu->r[14] = 0x0012623cu; fn_00096a08(cpu);
    }
L_0012623c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126240:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126244:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126248:;
    {
        cpu->r[14] = 0x0012624cu; fn_0018aa44(cpu);
    }
L_0012624c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00126250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00126254:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00126258:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012625c:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00126260:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00126264:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00126268:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0012626c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00126270:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00126274:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00126278:;
    {
        cpu->r[14] = 0x0012627cu; fn_000ad200(cpu);
    }
L_0012627c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00126280:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00126284u)) return;
    }
L_00126284:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126288:;
    {
        cpu->r[14] = 0x0012628cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012628c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001261bc;
        }
    }
L_00126294:;
    {
        cpu->r[5] = rd32(0x0012629cu + + 0x190u);
    }
L_00126298:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012629c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001262a0:;
    {
        cpu->r[14] = 0x001262a4u; fn_0018aa20(cpu);
    }
L_001262a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001262a8:;
    {
        cpu->r[14] = 0x001262acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001262ac:;
    {
        cpu->r[3] = rd32(0x001262b4u + + 0x188u);
    }
L_001262b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001262b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001262b8:;
    {
        cpu->r[3] = rd32(0x001262c0u + + 0x180u);
    }
L_001262bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001262c0:;
    {
        cpu->r[14] = 0x001262c4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001262c4:;
    {
        goto L_001261c0;
    }
L_001262c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001262cc:;
    {
        cpu->r[14] = 0x001262d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001262d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001262d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126230;
        }
    }
L_001262d8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001262dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001262e0:;
    {
        cpu->r[14] = 0x001262e4u; fn_0018aa20(cpu);
    }
L_001262e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001262e8:;
    {
        cpu->r[14] = 0x001262ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001262ec:;
    {
        cpu->r[3] = rd32(0x001262f4u + + 0x148u);
    }
L_001262f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001262f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001262f8:;
    {
        cpu->r[3] = rd32(0x00126300u + + 0x140u);
    }
L_001262fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126300:;
    {
        cpu->r[14] = 0x00126304u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126304:;
    {
        goto L_00126230;
    }
L_00126308:;
    {
        cpu->r[10] = rd32(0x00126310u + + 0x124u);
    }
L_0012630c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00126310:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00126314:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00126318:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_0012631c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126320:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000028u, 1, 0);
    }
L_00126324:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001263a0;
        }
    }
L_00126328:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0012632c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0xcu);
    }
L_00126330:;
    {
        cpu->r[14] = 0x00126334u; fn_00096a08(cpu);
    }
L_00126334:;
    {
        cpu->r[8] = rd32(0x0012633cu + + 0xfcu);
    }
L_00126338:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012633c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126340:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126344:;
    {
        cpu->r[14] = 0x00126348u; fn_0018aa44(cpu);
    }
L_00126348:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0012634c:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_00126350:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00126354:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00126358:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0012635c:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_00126360:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00126364:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00126368:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0012636c:;
    {
        cpu->r[14] = 0x00126370u; fn_000ad200(cpu);
    }
L_00126370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126374:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00126378:;
    {
        cpu->r[14] = 0x0012637cu; fn_000962d0(cpu);
    }
L_0012637c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00126380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126220;
        }
    }
L_00126384:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00126388:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012638c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001263e4;
        }
    }
L_00126394:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0xcu);
    }
L_00126398:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_0012639c:;
    {
        goto L_00126238;
    }
L_001263a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001263a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001263a8:;
    {
        cpu->r[14] = 0x001263acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001263ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001263b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126328;
        }
    }
L_001263b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001263b8:;
    {
        cpu->r[14] = 0x001263bcu; fn_0018aa20(cpu);
    }
L_001263bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001263c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001263c4:;
    {
        cpu->r[14] = 0x001263c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001263c8:;
    {
        cpu->r[3] = rd32(0x001263d0u + + 0x6cu);
    }
L_001263cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001263d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001263d4:;
    {
        cpu->r[3] = rd32(0x001263dcu + + 0x64u);
    }
L_001263d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001263dc:;
    {
        cpu->r[14] = 0x001263e0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001263e0:;
    {
        goto L_00126328;
    }
L_001263e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001263e8:;
    {
        cpu->r[14] = 0x001263ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001263ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001263f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126394;
        }
    }
L_001263f4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001263f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001263fc:;
    {
        cpu->r[14] = 0x00126400u; fn_0018aa20(cpu);
    }
L_00126400:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126404:;
    {
        cpu->r[14] = 0x00126408u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126408:;
    {
        cpu->r[3] = rd32(0x00126410u + + 0x2cu);
    }
L_0012640c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126410:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126414:;
    {
        cpu->r[3] = rd32(0x0012641cu + + 0x24u);
    }
L_00126418:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012641c:;
    {
        cpu->r[14] = 0x00126420u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126420:;
    {
        goto L_00126394;
    }
}

/* _ZN17GS_StatisticsMenu8DoActionEii @ 00126444 (arm) */
void fn_00126444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126444:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00126448:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012644c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00126450:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00126454:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126458u)) return;
        }
    }
L_00126458:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0012645c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00126460:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126464u)) return;
        }
    }
L_00126464:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00126468:;
    {
        cpu->r[14] = 0x00126470u;
    }
L_0012646c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00126470u)) return;
    }
L_00126470:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126474u)) return;
    }
}

/* _ZN17GS_StatisticsMenu8isKindOfEi @ 00126474 (arm) */
void fn_00126474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126474:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_00126478:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0012647c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00126480:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_46 @ 00126484 (arm) */
void fn_00126484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126484:;
    {
        cpu->r[3] = rd32(0x0012648cu + + 0x20u);
    }
L_00126488:;
    {
        cpu->r[1] = rd32(0x00126490u + + 0x20u);
    }
L_0012648c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00126494u, cpu->r[3], 0, 0);
    }
L_00126490:;
    {
        cpu->r[2] = rd32(0x00126498u + + 0x1cu);
    }
L_00126494:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00126498:;
    {
        cpu->r[2] = add_flags(cpu, 0x001264a0u, cpu->r[2], 0, 0);
    }
L_0012649c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001264a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001264a4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001264a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17GS_StatisticsMenuD1Ev @ 001264b8 (arm) */
void fn_001264b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001264b8:;
    {
        cpu->r[3] = rd32(0x001264c0u + + 0x24u);
    }
L_001264bc:;
    {
        cpu->r[2] = rd32(0x001264c4u + + 0x24u);
    }
L_001264c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001264c8u, cpu->r[3], 0, 0);
    }
L_001264c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001264c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001264cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001264d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001264d4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001264d8:;
    {
        cpu->r[14] = 0x001264dcu; fn_000ec21c(cpu);
    }
L_001264dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001264e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001264e4u)) return;
    }
}

/* _ZN17GS_StatisticsMenu24ProcessOnMouseButtonDownEv @ 001264ec (arm) */
void fn_001264ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001264ec:;
    {
        cpu->r[3] = rd32(0x001264f4u + + 0x24u);
    }
L_001264f0:;
    {
        cpu->r[2] = rd32(0x001264f8u + + 0x24u);
    }
L_001264f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001264fcu, cpu->r[3], 0, 0);
    }
L_001264f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001264fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00126500:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00126504:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00126508:;
    {
        cpu->r[14] = 0x0012650cu; fn_00110498(cpu);
    }
L_0012650c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00126510:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00126514:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126518u)) return;
    }
}

/* _ZN17GS_StatisticsMenu18ProcessOnMouseDragEv @ 00126520 (arm) */
void fn_00126520(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126520:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00126524:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_00126528:;
    {
        return fn_00110818(cpu);
    }
}

/* _ZN17GS_StatisticsMenu11DoBarActionEii @ 0012652c (arm) */
void fn_0012652c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012652c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00126530:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00126534:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00126538:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0012653c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00126540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001265c8;
        }
    }
L_00126544:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00126548:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0012654c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00126550:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00126554:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00126558:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0012655c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00126560:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00126564:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00126568:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0012656c:;
    {
        cpu->r[14] = 0x00126570u; fn_00093f34(cpu);
    }
L_00126570:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00126574:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00126578:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0012657c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00126580:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00126584:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00126588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0012658c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00126590:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00126594:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00126598:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0012659c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001265a0:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001265a4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001265a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001265ac:;
    {
        cpu->r[14] = 0x001265b0u; fn_000fd248(cpu);
    }
L_001265b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001265b4:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_001265b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001265bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001265d0;
        }
    }
L_001265c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_001265c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001265dc;
        }
    }
L_001265c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001265cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001265d0u)) return;
    }
L_001265d0:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_001265d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001265d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001265ec;
        }
    }
L_001265dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001265e0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001265e4:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001265e8:;
    {
        goto L_001265c8;
    }
L_001265ec:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001265f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001265f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001265c8;
        }
    }
L_001265f8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001265fc:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00126600:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00126604:;
    {
        cpu->r[14] = 0x00126608u; fn_00093f34(cpu);
    }
L_00126608:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0012660c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00126610:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00126614:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00126618:;
    {
        goto L_001265c8;
    }
}

/* _ZN17GS_StatisticsMenu17ApplyMenuSettingsEv @ 0012661c (arm) */
void fn_0012661c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012661c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8cau);
    }
L_00126620:;
    {
        cpu->r[3] = rd32(0x00126628u + + 0xa0u);
    }
L_00126624:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00126628:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0012662c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00126634u, cpu->r[3], 0, 0);
    }
L_00126630:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00126634:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00126638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126688;
        }
    }
L_0012663c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00126640:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00126644:;
    {
        cpu->r[1] = rd32(0x0012664cu + + 0x80u);
    }
L_00126648:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012664c:;
    {
        wr32(cpu->r[0] + + 0x8ccu, cpu->r[2]);
    }
L_00126650:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_00126654:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00126658:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_0012665c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00126660:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00126664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126668:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0012666c:;
    {
        cpu->r[3] = 0x0000053du;
    }
L_00126670:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_00126674:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00126678:;
    {
        cpu->r[14] = 0x00126680u;
    }
L_0012667c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00126680u)) return;
    }
L_00126680:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00126684:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126688u)) return;
    }
L_00126688:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0012668c:;
    {
        cpu->r[1] = rd32(0x00126694u + + 0x3cu);
    }
L_00126690:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_00126694:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00126698:;
    {
        cpu->r[2] = rd32(0x001266a0u + + 0x34u);
    }
L_0012669c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001266a4u, cpu->r[1], 0, 0);
    }
L_001266a0:;
    {
        cpu->r[3] = rd32(0x001266a8u + + 0x30u);
    }
L_001266a4:;
    {
        cpu->r[12] = rd32(0x001266acu + + 0x30u);
    }
L_001266a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001266b0u, cpu->r[2], 0, 0);
    }
L_001266ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001266b4u, cpu->r[3], 0, 0);
    }
L_001266b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001266b8u, cpu->r[12], 0, 0);
    }
L_001266b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001266b8:;
    {
        cpu->r[12] = 0x00000039u;
    }
L_001266bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001266c0:;
    {
        cpu->r[14] = 0x001266c4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001266c4:;
    {
        goto L_00126660;
    }
}

/* _ZN17GS_StatisticsMenuC1Ebb @ 001266e0 (arm) */
void fn_001266e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001266e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001266e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001266e8:;
    {
        cpu->r[5] = rd32(0x001266f0u + + 0x28u);
    }
L_001266ec:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001266f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001266f4:;
    {
        cpu->r[14] = 0x001266f8u; fn_001100c0(cpu);
    }
L_001266f8:;
    {
        cpu->r[3] = rd32(0x00126700u + + 0x1cu);
    }
L_001266fc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00126704u, cpu->r[5], 0, 0);
    }
L_00126700:;
    {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[4]);
    }
L_00126704:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126708:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012670c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00126710:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00126714:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00126718u)) return;
    }
}

/* _ZN17GS_StatisticsMenuC2Ebb @ 00126720 (arm) */
void fn_00126720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126720:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00126724:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00126728:;
    {
        cpu->r[5] = rd32(0x00126730u + + 0x28u);
    }
L_0012672c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00126730:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00126734:;
    {
        cpu->r[14] = 0x00126738u; fn_001100c0(cpu);
    }
L_00126738:;
    {
        cpu->r[3] = rd32(0x00126740u + + 0x1cu);
    }
L_0012673c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00126744u, cpu->r[5], 0, 0);
    }
L_00126740:;
    {
        wr8(cpu->r[6] + + 0x8cau, cpu->r[4]);
    }
L_00126744:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126748:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0012674c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00126750:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00126754:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00126758u)) return;
    }
}

/* _ZN17GS_StatisticsMenuD0Ev @ 00126760 (arm) */
void fn_00126760(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126760:;
    {
        cpu->r[3] = rd32(0x00126768u + + 0x2cu);
    }
L_00126764:;
    {
        cpu->r[2] = rd32(0x0012676cu + + 0x2cu);
    }
L_00126768:;
    {
        cpu->r[3] = add_flags(cpu, 0x00126770u, cpu->r[3], 0, 0);
    }
L_0012676c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00126770:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00126774:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00126778:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0012677c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00126780:;
    {
        cpu->r[14] = 0x00126784u; fn_000ec21c(cpu);
    }
L_00126784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126788:;
    {
        cpu->r[14] = 0x0012678cu; fn_0018ba20(cpu);
    }
L_0012678c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126790:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00126794u)) return;
    }
}

/* _ZN17GS_StatisticsMenu8PopulateEv @ 0012679c (arm) */
void fn_0012679c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012679c:;
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
L_001267a0:;
    {
        cpu->r[2] = rd32(0x001267a8u + + 0x4a4u);
    }
L_001267a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_001267a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001267ac:;
    {
        cpu->r[4] = rd32(0x001267b4u + + 0x49cu);
    }
L_001267b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001267b4:;
    {
        cpu->r[0] = 0x00000039u;
    }
L_001267b8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001267bc:;
    {
        cpu->r[14] = 0x001267c0u; fn_000aeb58(cpu);
    }
L_001267c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001267c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001267ccu, cpu->r[4], 0, 0);
    }
L_001267c8:;
    {
        cpu->r[7] = rd32(0x001267d0u + + 0x484u);
    }
L_001267cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001267d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000950u, 0, 0);
    }
L_001267d4:;
    {
        cpu->r[14] = 0x001267d8u; fn_000ae160(cpu);
    }
L_001267d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001267dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001267e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001267e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000a10u, 0, 0);
    }
L_001267e8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001267ec:;
    {
        cpu->r[14] = 0x001267f0u; fn_000a04f8(cpu);
    }
L_001267f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001267f4:;
    {
        cpu->r[1] = rd32(0x001267fcu + + 0x45cu);
    }
L_001267f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00126800u, cpu->r[1], 0, 0);
    }
L_001267fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00126800:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000990u, 0, 0);
    }
L_00126804:;
    {
        cpu->r[14] = 0x00126808u; fn_000ae830(cpu);
    }
L_00126808:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0012680c:;
    {
        cpu->r[0] = 0x00000622u;
    }
L_00126810:;
    {
        cpu->r[14] = 0x00126814u; fn_000aeb58(cpu);
    }
L_00126814:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126818:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012681c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x000009d0u, 0, 0);
    }
L_00126820:;
    {
        cpu->r[14] = 0x00126824u; fn_000ae160(cpu);
    }
L_00126824:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126828:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012682c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126c0c;
        }
    }
L_00126834:;
    {
        cpu->r[3] = rd32(0x0012683cu + + 0x420u);
    }
L_00126838:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0012683c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00126840:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00126844:;
    {
        cpu->r[10] = rd32(0x0012684cu + + 0x414u);
    }
L_00126848:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0012684c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00126850:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00126854:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126858:;
    {
        cpu->r[10] = add_flags(cpu, 0x00126860u, cpu->r[10], 0, 0);
    }
L_0012685c:;
    {
        cpu->r[3] = 0x00000030u;
    }
L_00126860:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00126864:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00126868:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0012686c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_00126870:;
    {
        cpu->r[14] = 0x00126874u; fn_000ae830(cpu);
    }
L_00126874:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126878:;
    {
        cpu->r[0] = 0x00000623u;
    }
L_0012687c:;
    {
        cpu->r[14] = 0x00126880u; fn_000aeb58(cpu);
    }
L_00126880:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126884:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126888:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000a50u, 0, 0);
    }
L_0012688c:;
    {
        cpu->r[14] = 0x00126890u; fn_000ae160(cpu);
    }
L_00126890:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126894:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_00126898:;
    {
        cpu->r[14] = 0x0012689cu; fn_000a4480(cpu);
    }
L_0012689c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001268a0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001268a4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001268a8:;
    {
        cpu->r[14] = 0x001268acu; fn_0009610c(cpu);
    }
L_001268ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001268b0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001268b4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001268b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000a90u, 0, 0);
    }
L_001268bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001268c0:;
    {
        cpu->r[14] = 0x001268c4u; fn_000ae830(cpu);
    }
L_001268c4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001268c8:;
    {
        cpu->r[0] = 0x00000624u;
    }
L_001268cc:;
    {
        cpu->r[14] = 0x001268d0u; fn_000aeb58(cpu);
    }
L_001268d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001268d4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001268d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000ad0u, 0, 0);
    }
L_001268dc:;
    {
        cpu->r[14] = 0x001268e0u; fn_000ae160(cpu);
    }
L_001268e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001268e4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_001268e8:;
    {
        cpu->r[14] = 0x001268ecu; fn_00096d08(cpu);
    }
L_001268ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001268f0:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001268f4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001268f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000b10u, 0, 0);
    }
L_001268fc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00126900:;
    {
        cpu->r[14] = 0x00126904u; fn_000ae830(cpu);
    }
L_00126904:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126908:;
    {
        cpu->r[0] = 0x0000062au;
    }
L_0012690c:;
    {
        cpu->r[14] = 0x00126910u; fn_000aeb58(cpu);
    }
L_00126910:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126914:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000b50u, 0, 0);
    }
L_0012691c:;
    {
        cpu->r[14] = 0x00126920u; fn_000ae160(cpu);
    }
L_00126920:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126924:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_00126928:;
    {
        cpu->r[14] = 0x0012692cu; fn_000a05f4(cpu);
    }
L_0012692c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126930:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00126934:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00126938:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000b90u, 0, 0);
    }
L_0012693c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00126940:;
    {
        cpu->r[14] = 0x00126944u; fn_000ae830(cpu);
    }
L_00126944:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126948:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0012694c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00126950:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00126954:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00126958:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0012695c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00126960:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000015cu, 0, 0);
    }
L_00126964:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00126968:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012696c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126b60;
        }
    }
L_00126970:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[10]);
    }
L_00126974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00126978:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0012697c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001269a4;
        }
    }
L_00126980:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00126984:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00126988:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012698c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126bac;
        }
    }
L_00126990:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00126994:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126b88;
        }
    }
L_00126998:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0012699c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001269a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001269a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001269a8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001269ac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000004u, 1, 1);
    }
L_001269b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126964;
        }
    }
L_001269b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001269b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 1);
    }
L_001269bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126954;
        }
    }
L_001269c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001269c4:;
    {
        cpu->r[0] = 0x00000625u;
    }
L_001269c8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_001269cc:;
    {
        cpu->r[14] = 0x001269d0u; fn_000aeb58(cpu);
    }
L_001269d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001269d4:;
    {
        cpu->r[5] = rd32(0x001269dcu + + 0x288u);
    }
L_001269d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001269e0u, cpu->r[5], 0, 0);
    }
L_001269dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001269e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000bd0u, 0, 0);
    }
L_001269e4:;
    {
        cpu->r[14] = 0x001269e8u; fn_000ae160(cpu);
    }
L_001269e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001269ec:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001269f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001269f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000c10u, 0, 0);
    }
L_001269f8:;
    {
        cpu->r[14] = 0x001269fcu; fn_000ae830(cpu);
    }
L_001269fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00126a00:;
    {
        cpu->r[0] = 0x00000626u;
    }
L_00126a04:;
    {
        cpu->r[14] = 0x00126a08u; fn_000aeb58(cpu);
    }
L_00126a08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126a0c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126a10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000c50u, 0, 0);
    }
L_00126a14:;
    {
        cpu->r[14] = 0x00126a18u; fn_000ae160(cpu);
    }
L_00126a18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126a1c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00126a20:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126a24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000c90u, 0, 0);
    }
L_00126a28:;
    {
        cpu->r[14] = 0x00126a2cu; fn_000ae830(cpu);
    }
L_00126a2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00126a30:;
    {
        cpu->r[0] = 0x00000627u;
    }
L_00126a34:;
    {
        cpu->r[14] = 0x00126a38u; fn_000aeb58(cpu);
    }
L_00126a38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126a3c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126a40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000cd0u, 0, 0);
    }
L_00126a44:;
    {
        cpu->r[14] = 0x00126a48u; fn_000ae160(cpu);
    }
L_00126a48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126a4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00126a50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126a54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000d10u, 0, 0);
    }
L_00126a58:;
    {
        cpu->r[14] = 0x00126a5cu; fn_000ae830(cpu);
    }
L_00126a5c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00126a60:;
    {
        cpu->r[0] = 0x00000488u;
    }
L_00126a64:;
    {
        cpu->r[14] = 0x00126a68u; fn_000aeb58(cpu);
    }
L_00126a68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126a6c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126a70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000d50u, 0, 0);
    }
L_00126a74:;
    {
        cpu->r[14] = 0x00126a78u; fn_000ae160(cpu);
    }
L_00126a78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00126a7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126a80:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_00126a84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_00126a88:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00126a8c:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x438u);
    }
L_00126a90:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x43cu);
    }
L_00126a94:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 0);
    }
L_00126a98:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[5] = v;
    }
L_00126a9c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[5] = v;
    }
L_00126aa0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00126aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126c28;
        }
    }
L_00126aa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126aac:;
    {
        cpu->r[1] = 0x0000614eu;
    }
L_00126ab0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x00bcu << 16);
    }
L_00126ab4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00126ab8:;
    {
        cpu->r[6] = 0x0000009cu;
    }
L_00126abc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[14]; cpu->r[12] = v;
    }
L_00126ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00126ac4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00126ac8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x18u);
    }
L_00126acc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00126ad0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_00126ad4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00126ad8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126abc;
        }
    }
L_00126adc:;
    {
        cpu->r[3] = 0x0000614eu;
    }
L_00126ae0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x00bcu << 16);
    }
L_00126ae4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00126ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126c28;
        }
    }
L_00126aec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00126af0:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00126af4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126af8:;
    {
        cpu->r[14] = 0x00126afcu; fn_000f38e8(cpu);
    }
L_00126afc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126b00:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126b04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000d90u, 0, 0);
    }
L_00126b08:;
    {
        cpu->r[14] = 0x00126b0cu; fn_000ae160(cpu);
    }
L_00126b0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00126b10:;
    {
        cpu->r[0] = 0x00000629u;
    }
L_00126b14:;
    {
        cpu->r[14] = 0x00126b18u; fn_000aeb58(cpu);
    }
L_00126b18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126b1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126b20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000dd0u, 0, 0);
    }
L_00126b24:;
    {
        cpu->r[14] = 0x00126b28u; fn_000ae160(cpu);
    }
L_00126b28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00126b2c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00126b30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00126b34:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00126b38:;
    {
        cpu->r[14] = 0x00126b3cu; fn_000a6118(cpu);
    }
L_00126b3c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126b40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00126b44:;
    {
        cpu->r[14] = 0x00126b48u; fn_00098aec(cpu);
    }
L_00126b48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126b4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126b50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000e10u, 0, 0);
    }
L_00126b54:;
    {
        cpu->r[14] = 0x00126b58u; fn_000ae1a4(cpu);
    }
L_00126b58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00126b5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00126b60u)) return;
    }
L_00126b60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00126b64:;
    {
        cpu->r[14] = 0x00126b68u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126b68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126b6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126970;
        }
    }
L_00126b70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00126b74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00126b78:;
    {
        cpu->r[14] = 0x00126b7cu; fn_00094228(cpu);
    }
L_00126b7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00126b80:;
    {
        cpu->r[14] = 0x00126b84u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126b84:;
    {
        goto L_00126970;
    }
L_00126b88:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00126b8c:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00126b90:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126bdc;
        }
    }
L_00126b98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00126b9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00126ba0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00126ba4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
        }
    }
L_00126ba8:;
    {
        goto L_001269a4;
    }
L_00126bac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00126bb0:;
    {
        cpu->r[14] = 0x00126bb4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126bb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126bb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[10]);
        }
    }
L_00126bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126990;
        }
    }
L_00126bc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00126bc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00126bc8:;
    {
        cpu->r[14] = 0x00126bccu; fn_00094228(cpu);
    }
L_00126bcc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00126bd0:;
    {
        cpu->r[14] = 0x00126bd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126bd4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[10]);
    }
L_00126bd8:;
    {
        goto L_00126990;
    }
L_00126bdc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00126be0:;
    {
        cpu->r[14] = 0x00126be4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126be4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126be8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[10]);
        }
    }
L_00126bec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126b98;
        }
    }
L_00126bf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00126bf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00126bf8:;
    {
        cpu->r[14] = 0x00126bfcu; fn_00094228(cpu);
    }
L_00126bfc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00126c00:;
    {
        cpu->r[14] = 0x00126c04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126c04:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[10]);
    }
L_00126c08:;
    {
        goto L_00126b98;
    }
L_00126c0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126c10:;
    {
        cpu->r[14] = 0x00126c14u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126c14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126c18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126c30;
        }
    }
L_00126c1c:;
    {
        cpu->r[1] = rd32(0x00126c24u + + 0x38u);
    }
L_00126c20:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00126c24:;
    {
        goto L_0012683c;
    }
L_00126c28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00126c2c:;
    {
        goto L_00126aec;
    }
L_00126c30:;
    {
        cpu->r[2] = rd32(0x00126c38u + + 0x24u);
    }
L_00126c34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00126c38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00126c3c:;
    {
        cpu->r[14] = 0x00126c40u; fn_00094228(cpu);
    }
L_00126c40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126c44:;
    {
        cpu->r[14] = 0x00126c48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126c48:;
    {
        goto L_0012683c;
    }
}

/* _ZN17GS_StatisticsMenu6RenderEv @ 00126c68 (arm) */
void fn_00126c68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00126c68:;
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
L_00126c6c:;
    {
        cpu->r[4] = rd32(0x00126c74u + + 0x374u);
    }
L_00126c70:;
    {
        cpu->r[7] = rd32(0x00126c78u + + 0x374u);
    }
L_00126c74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00126c78:;
    {
        cpu->r[4] = add_flags(cpu, 0x00126c80u, cpu->r[4], 0, 0);
    }
L_00126c7c:;
    {
        cpu->r[3] = rd32(0x00126c84u + + 0x36cu);
    }
L_00126c80:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00126c84:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126c88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126c8c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00126c90:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_00126c94:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126ef0;
        }
    }
L_00126c9c:;
    {
        cpu->r[5] = rd32(0x00126ca4u + + 0x350u);
    }
L_00126ca0:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00126ca4:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_00126ca8:;
    {
        cpu->r[14] = 0x00126cacu; fn_00096a08(cpu);
    }
L_00126cac:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126cb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126cb4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126cb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126cbc:;
    {
        cpu->r[14] = 0x00126cc0u; fn_0018aa44(cpu);
    }
L_00126cc0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126cc4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00126cc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126ccc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00126cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126fac;
        }
    }
L_00126cd4:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_00126cd8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_00126cdc:;
    {
        cpu->r[14] = 0x00126ce0u; fn_00096a08(cpu);
    }
L_00126ce0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126ce4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126ce8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00126cec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126cf0:;
    {
        cpu->r[14] = 0x00126cf4u; fn_0018aa44(cpu);
    }
L_00126cf4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126cf8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00126cfc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126d00:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00126d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126f70;
        }
    }
L_00126d08:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126d0c:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_00126d10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00126d14:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126d18:;
    {
        cpu->r[14] = 0x00126d1cu; fn_0018aa44(cpu);
    }
L_00126d1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00126d20:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00126d24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00126d28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00126d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126f34;
        }
    }
L_00126d30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126d34:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00126d38:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126d3c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00126d40:;
    {
        cpu->r[14] = 0x00126d44u; fn_0018aa44(cpu);
    }
L_00126d44:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126d48:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00126d4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126d50:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00126d54:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_00126d58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00126d5c:;
    {
        cpu->r[14] = 0x00126d60u; fn_000ad8a0(cpu);
    }
L_00126d60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126d64:;
    {
        cpu->r[1] = 0x99000000u;
    }
L_00126d68:;
    {
        cpu->r[14] = 0x00126d6cu; fn_0012dd58(cpu);
    }
L_00126d6c:;
    {
        cpu->r[3] = rd32(0x00126d74u + + 0x284u);
    }
L_00126d70:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126d74:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126d78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00126d7c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126d80:;
    {
        cpu->r[3] = rd32(0x00126d88u + + 0x274u);
    }
L_00126d84:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126d88:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00126d8c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00126d90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00126d94:;
    {
        cpu->r[14] = 0x00126d98u; fn_00130908(cpu);
    }
L_00126d98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00126d9c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00126da0:;
    {
        cpu->r[14] = 0x00126da8u;
    }
L_00126da4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00126da8u)) return;
    }
L_00126da8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00126dac:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00126db0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00126db4:;
    {
        cpu->r[14] = 0x00126dbcu;
    }
L_00126db8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00126dbcu)) return;
    }
L_00126dbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126dc0:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126dc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00126dc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00126dcc:;
    {
        cpu->r[14] = 0x00126dd0u; fn_000a8d10(cpu);
    }
L_00126dd0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00126dd4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00126dd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126ddc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00126de0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000026u, 1, 0);
    }
L_00126de4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00126de8:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126dec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_00126df0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_00126df4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_00126df8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00126dfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00126e00:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_00126e04:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000148u, cpu->r[4], 1, 0);
    }
L_00126e08:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00126e0c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00126e10:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00126e14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 0);
    }
L_00126e18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_00126e1c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (~0x00000018u);
        }
    }
L_00126e20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00126e24:;
    {
        cpu->r[14] = 0x00126e28u; fn_000ad8a0(cpu);
    }
L_00126e28:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00126e2c:;
    {
        cpu->r[5] = 0x00000051u;
    }
L_00126e30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_00126e34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[4], 0x00000027u, 1, 0);
        }
    }
L_00126e38:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00126e3c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00126e40:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126e44:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126e48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126e4c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00126e50:;
    {
        cpu->r[14] = 0x00126e54u; fn_000a88e0(cpu);
    }
L_00126e54:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00126e58:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126e5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_00126e60:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00126e64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126e68:;
    {
        cpu->r[14] = 0x00126e6cu; fn_000a8910(cpu);
    }
L_00126e6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126e70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 7u, &shc), 0, 0);
    }
L_00126e74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00126e78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000950u, 0, 0);
    }
L_00126e7c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00126e80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00126e84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00126e88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00126e8c:;
    {
        cpu->r[14] = 0x00126e90u; fn_000ad19c(cpu);
    }
L_00126e90:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126e94:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00126e98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126e9c:;
    {
        cpu->r[14] = 0x00126ea0u; fn_000a88e0(cpu);
    }
L_00126ea0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00126ea4:;
    {
        cpu->r[1] = 0x000000eau;
    }
L_00126ea8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00126eac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126eb0:;
    {
        cpu->r[14] = 0x00126eb4u; fn_000a8910(cpu);
    }
L_00126eb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00126eb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 7u, &shc), 0, 0);
    }
L_00126ebc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00126ec0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000990u, 0, 0);
    }
L_00126ec4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00126ec8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00126ecc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00126ed0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00126ed4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00126ed8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00126edc:;
    {
        cpu->r[14] = 0x00126ee0u; fn_000ad19c(cpu);
    }
L_00126ee0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_00126ee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00126e40;
        }
    }
L_00126ee8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00126eec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00126ef0u)) return;
    }
L_00126ef0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126ef4:;
    {
        cpu->r[14] = 0x00126ef8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126ef8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126c9c;
        }
    }
L_00126f00:;
    {
        cpu->r[5] = rd32(0x00126f08u + + 0xecu);
    }
L_00126f04:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00126f08:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f0c:;
    {
        cpu->r[14] = 0x00126f10u; fn_0018aa20(cpu);
    }
L_00126f10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126f14:;
    {
        cpu->r[14] = 0x00126f18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126f18:;
    {
        cpu->r[3] = rd32(0x00126f20u + + 0xe0u);
    }
L_00126f1c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126f24:;
    {
        cpu->r[3] = rd32(0x00126f2cu + + 0xd8u);
    }
L_00126f28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126f2c:;
    {
        cpu->r[14] = 0x00126f30u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126f30:;
    {
        goto L_00126ca0;
    }
L_00126f34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126f38:;
    {
        cpu->r[14] = 0x00126f3cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126f3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126d30;
        }
    }
L_00126f44:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f48:;
    {
        cpu->r[14] = 0x00126f4cu; fn_0018aa20(cpu);
    }
L_00126f4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00126f50:;
    {
        cpu->r[14] = 0x00126f54u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126f54:;
    {
        cpu->r[3] = rd32(0x00126f5cu + + 0xa4u);
    }
L_00126f58:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126f60:;
    {
        cpu->r[3] = rd32(0x00126f68u + + 0x9cu);
    }
L_00126f64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126f68:;
    {
        cpu->r[14] = 0x00126f6cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126f6c:;
    {
        goto L_00126d30;
    }
L_00126f70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f74:;
    {
        cpu->r[14] = 0x00126f78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126d08;
        }
    }
L_00126f80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126f84:;
    {
        cpu->r[14] = 0x00126f88u; fn_0018aa20(cpu);
    }
L_00126f88:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126f8c:;
    {
        cpu->r[14] = 0x00126f90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126f90:;
    {
        cpu->r[3] = rd32(0x00126f98u + + 0x68u);
    }
L_00126f94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126f98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126f9c:;
    {
        cpu->r[3] = rd32(0x00126fa4u + + 0x60u);
    }
L_00126fa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126fa4:;
    {
        cpu->r[14] = 0x00126fa8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126fa8:;
    {
        goto L_00126d08;
    }
L_00126fac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126fb0:;
    {
        cpu->r[14] = 0x00126fb4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00126fb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00126fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00126cd4;
        }
    }
L_00126fbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126fc0:;
    {
        cpu->r[14] = 0x00126fc4u; fn_0018aa20(cpu);
    }
L_00126fc4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00126fc8:;
    {
        cpu->r[14] = 0x00126fccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00126fcc:;
    {
        cpu->r[3] = rd32(0x00126fd4u + + 0x2cu);
    }
L_00126fd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00126fd4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126fd8:;
    {
        cpu->r[3] = rd32(0x00126fe0u + + 0x24u);
    }
L_00126fdc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00126fe0:;
    {
        cpu->r[14] = 0x00126fe4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00126fe4:;
    {
        goto L_00126cd4;
    }
}

/* _ZN17GS_StatisticsMenu6UpdateEv @ 00127008 (arm) */
void fn_00127008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127008:;
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
L_0012700c:;
    {
        cpu->r[4] = rd32(0x00127014u + + 0x278u);
    }
L_00127010:;
    {
        cpu->r[5] = rd32(0x00127018u + + 0x278u);
    }
L_00127014:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00127018:;
    {
        cpu->r[4] = add_flags(cpu, 0x00127020u, cpu->r[4], 0, 0);
    }
L_0012701c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00127020:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00127024:;
    {
        cpu->r[3] = 0x000082e8u;
    }
L_00127028:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012702c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00127030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0012705c;
        }
    }
L_00127034:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x94u);
    }
L_00127038:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0012703c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001270c0;
        }
    }
L_00127040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00127044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001270d0;
        }
    }
L_00127048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012704c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127050u)) return;
        }
    }
L_00127050:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00127054:;
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
L_00127058:;
    {
        return fn_00114a58(cpu);
    }
L_0012705c:;
    {
        cpu->r[10] = rd32(0x00127064u + + 0x230u);
    }
L_00127060:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00127064:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00127068:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012706c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012710c;
        }
    }
L_00127070:;
    {
        cpu->r[7] = rd32(0x00127078u + + 0x220u);
    }
L_00127074:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00127078:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x58u);
    }
L_0012707c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00030c00u, 0, 0);
    }
L_00127080:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000140u, 0, 0);
    }
L_00127084:;
    {
        wr32(cpu->r[3] + + 0x58u, cpu->r[2]);
    }
L_00127088:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012708c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x5cu);
    }
L_00127090:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00030c00u, 0, 0);
    }
L_00127094:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000140u, 0, 0);
    }
L_00127098:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_0012709c:;
    {
        cpu->r[14] = 0x001270a0u; fn_000a2d7c(cpu);
    }
L_001270a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001270a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001270a8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001270ac:;
    {
        cpu->r[3] = 0x000082e8u;
    }
L_001270b0:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001270b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x94u);
    }
L_001270b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001270bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127040;
        }
    }
L_001270c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001270c4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001270c8:;
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
L_001270cc:;
    {
        return fn_000eb59c(cpu);
    }
L_001270d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001270d4:;
    {
        cpu->r[14] = 0x001270d8u; fn_0010da28(cpu);
    }
L_001270d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001270dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001270e0u)) return;
        }
    }
L_001270e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_001270e4:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_001270e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001270ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127240;
        }
    }
L_001270f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127170;
        }
    }
L_001270f4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001270f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001270fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127214;
        }
    }
L_00127100:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00127104:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_00127108:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012710cu)) return;
    }
L_0012710c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127110:;
    {
        cpu->r[14] = 0x00127114u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127114:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127118:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127228;
        }
    }
L_0012711c:;
    {
        cpu->r[7] = rd32(0x00127124u + + 0x174u);
    }
L_00127120:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00127124:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00127128:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0012712c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x58u);
    }
L_00127130:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00127134:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00030c00u, 0, 0);
    }
L_00127138:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000140u, 0, 0);
    }
L_0012713c:;
    {
        wr32(cpu->r[10] + + 0x58u, cpu->r[3]);
    }
L_00127140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127164;
        }
    }
L_00127144:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127148:;
    {
        cpu->r[14] = 0x0012714cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012714c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127164;
        }
    }
L_00127154:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00127158:;
    {
        cpu->r[14] = 0x0012715cu; fn_00094228(cpu);
    }
L_0012715c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127160:;
    {
        cpu->r[14] = 0x00127164u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00127168:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0012716c:;
    {
        goto L_00127088;
    }
L_00127170:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_00127174:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001271cc;
        }
    }
L_0012717c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_00127180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127100;
        }
    }
L_00127184:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00127188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012718c:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_00127190:;
    {
        cpu->r[14] = 0x00127198u;
    }
L_00127194:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127198u)) return;
    }
L_00127198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012719c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127100;
        }
    }
L_001271a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001271a4:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_001271a8:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001271ac:;
    {
        cpu->r[14] = 0x001271b0u; fn_0018ba6c(cpu);
    }
L_001271b0:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_001271b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001271b8:;
    {
        cpu->r[14] = 0x001271bcu; fn_000feecc(cpu);
    }
L_001271bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001271c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001271c4:;
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
L_001271c8:;
    {
        return fn_000f36dc(cpu);
    }
L_001271cc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001271d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001271d4:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_001271d8:;
    {
        cpu->r[14] = 0x001271e0u;
    }
L_001271dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001271e0u)) return;
    }
L_001271e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001271e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127100;
        }
    }
L_001271e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001271ec:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001271f0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001271f4:;
    {
        cpu->r[14] = 0x001271f8u; fn_0018ba6c(cpu);
    }
L_001271f8:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_001271fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127200:;
    {
        cpu->r[14] = 0x00127204u; fn_001275dc(cpu);
    }
L_00127204:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127208:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012720c:;
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
L_00127210:;
    {
        return fn_000f36dc(cpu);
    }
L_00127214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00127218:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012721c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00127220:;
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
L_00127224:;
    {
        return fn_000f34e8(cpu);
    }
L_00127228:;
    {
        cpu->r[7] = rd32(0x00127230u + + 0x68u);
    }
L_0012722c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00127230:;
    {
        cpu->r[14] = 0x00127234u; fn_00094228(cpu);
    }
L_00127234:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127238:;
    {
        cpu->r[14] = 0x0012723cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012723c:;
    {
        goto L_00127120;
    }
L_00127240:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00127244:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00127248:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_0012724c:;
    {
        cpu->r[14] = 0x00127254u;
    }
L_00127250:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127254u)) return;
    }
L_00127254:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127100;
        }
    }
L_0012725c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00127260:;
    {
        cpu->r[0] = 0x00000e50u;
    }
L_00127264:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00127268:;
    {
        cpu->r[14] = 0x0012726cu; fn_0018ba6c(cpu);
    }
L_0012726c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_00127270:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00127274:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127278:;
    {
        cpu->r[14] = 0x0012727cu; fn_001266e0(cpu);
    }
L_0012727c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127280:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00127284:;
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
L_00127288:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN15GS_TrophiesMenu8DoActionEii @ 0012729c (arm) */
void fn_0012729c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012729c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_001272a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001272a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001272a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001272ac:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001272b0u)) return;
        }
    }
L_001272b0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001272b4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001272b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127320;
        }
    }
L_001272bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001272c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_001272c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001272c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_001272cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001272d0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_001272d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001272d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_001272dc:;
    {
        cpu->r[2] = 0x0000054cu;
    }
L_001272e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001272e4:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_001272e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012730c;
        }
    }
L_001272ec:;
    {
        cpu->r[2] = 0x0000054du;
    }
L_001272f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001272f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001272f8u)) return;
        }
    }
L_001272f8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_001272fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_00127300:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00127304:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x950u, cpu->r[2]);
        }
    }
L_00127308:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0012730cu)) return;
    }
L_0012730c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_00127310:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00127314:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00127318:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x950u, cpu->r[2]);
        }
    }
L_0012731c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127320u)) return;
    }
L_00127320:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00127324:;
    {
        cpu->r[14] = 0x0012732cu;
    }
L_00127328:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012732cu)) return;
    }
L_0012732c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127330u)) return;
    }
}

/* _ZN15GS_TrophiesMenu8isKindOfEi @ 00127330 (arm) */
void fn_00127330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127330:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000012u, 1, 1);
    }
L_00127334:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00127338:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0012733c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_TrophiesMenu18ProcessOnMouseDragEv @ 00127340 (arm) */
void fn_00127340(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127340:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00127344:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_00127348:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_47 @ 0012734c (arm) */
void fn_0012734c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012734c:;
    {
        cpu->r[3] = rd32(0x00127354u + + 0x50u);
    }
L_00127350:;
    {
        cpu->r[1] = rd32(0x00127358u + + 0x50u);
    }
L_00127354:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012735cu, cpu->r[3], 0, 0);
    }
L_00127358:;
    {
        cpu->r[0] = rd32(0x00127360u + + 0x4cu);
    }
L_0012735c:;
    {
        cpu->r[2] = rd32(0x00127364u + + 0x4cu);
    }
L_00127360:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00127364:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00127368:;
    {
        cpu->r[2] = add_flags(cpu, 0x00127370u, cpu->r[2], 0, 0);
    }
L_0012736c:;
    {
        cpu->r[3] = rd32(0x00127374u + + 0x40u);
    }
L_00127370:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00127374:;
    {
        cpu->r[3] = add_flags(cpu, 0x0012737cu, cpu->r[3], 0, 0);
    }
L_00127378:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0012737c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_00127380:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000014u, 1, 0);
    }
L_00127384:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_00127388:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[0]);
    }
L_0012738c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00127390:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_00127394:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_00127398:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[1]);
    }
L_0012739c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_001273a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_TrophiesMenuD1Ev @ 001273b8 (arm) */
void fn_001273b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001273b8:;
    {
        cpu->r[3] = rd32(0x001273c0u + + 0x24u);
    }
L_001273bc:;
    {
        cpu->r[2] = rd32(0x001273c4u + + 0x24u);
    }
L_001273c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001273c8u, cpu->r[3], 0, 0);
    }
L_001273c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001273c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001273cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001273d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001273d4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001273d8:;
    {
        cpu->r[14] = 0x001273dcu; fn_000ec21c(cpu);
    }
L_001273dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001273e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001273e4u)) return;
    }
}

/* _ZN15GS_TrophiesMenu24ProcessOnMouseButtonDownEv @ 001273ec (arm) */
void fn_001273ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001273ec:;
    {
        cpu->r[3] = rd32(0x001273f4u + + 0x24u);
    }
L_001273f0:;
    {
        cpu->r[2] = rd32(0x001273f8u + + 0x24u);
    }
L_001273f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001273fcu, cpu->r[3], 0, 0);
    }
L_001273f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001273fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00127400:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00127404:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00127408:;
    {
        cpu->r[14] = 0x0012740cu; fn_00110498(cpu);
    }
L_0012740c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00127410:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00127414:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127418u)) return;
    }
}

/* _ZN15GS_TrophiesMenu11DoBarActionEii @ 00127420 (arm) */
void fn_00127420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127420:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00127424:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127428:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0012742c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00127430:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001274bc;
        }
    }
L_00127438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0012743c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00127440:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00127444:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00127448:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0012744c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00127450:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00127454:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00127458:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0012745c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00127460:;
    {
        cpu->r[14] = 0x00127464u; fn_00093f34(cpu);
    }
L_00127464:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00127468:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_0012746c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00127470:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00127474:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00127478:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0012747c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00127480:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00127484:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00127488:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0012748c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00127490:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00127494:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00127498:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0012749c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001274a0:;
    {
        cpu->r[14] = 0x001274a4u; fn_000fd248(cpu);
    }
L_001274a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001274a8:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_001274ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001274b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001274c4;
        }
    }
L_001274b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_001274b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001274d0;
        }
    }
L_001274bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001274c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001274c4u)) return;
    }
L_001274c4:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_001274c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001274cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001274e0;
        }
    }
L_001274d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001274d4:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001274d8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_001274dc:;
    {
        goto L_001274bc;
    }
L_001274e0:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001274e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001274e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001274bc;
        }
    }
L_001274ec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001274f0:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001274f4:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_001274f8:;
    {
        cpu->r[14] = 0x001274fcu; fn_00093f34(cpu);
    }
L_001274fc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00127500:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00127504:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00127508:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_0012750c:;
    {
        goto L_001274bc;
    }
}

/* _ZN15GS_TrophiesMenu17ApplyMenuSettingsEv @ 00127510 (arm) */
void fn_00127510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127510:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8cau);
    }
L_00127514:;
    {
        cpu->r[3] = rd32(0x0012751cu + + 0xa4u);
    }
L_00127518:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012751c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127520:;
    {
        cpu->r[3] = add_flags(cpu, 0x00127528u, cpu->r[3], 0, 0);
    }
L_00127524:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00127528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012752c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127578;
        }
    }
L_00127530:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00127534:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00127538:;
    {
        cpu->r[1] = rd32(0x00127540u + + 0x84u);
    }
L_0012753c:;
    {
        cpu->r[2] = rd32(0x00127544u + + 0x84u);
    }
L_00127540:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00127544:;
    {
        cpu->r[2] = add_flags(cpu, 0x0012754cu, cpu->r[2], 0, 0);
    }
L_00127548:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0012754c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[2]);
    }
L_00127550:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_00127554:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[3]);
    }
L_00127558:;
    {
        cpu->r[3] = 0x0000053du;
    }
L_0012755c:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_00127560:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00127564:;
    {
        wr32(cpu->r[0] + + 0x8ccu, cpu->r[3]);
    }
L_00127568:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012756c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_00127570:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00127574:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127578u)) return;
    }
L_00127578:;
    {
        cpu->r[3] = 0x0000053eu;
    }
L_0012757c:;
    {
        cpu->r[1] = rd32(0x00127584u + + 0x48u);
    }
L_00127580:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[3]);
    }
L_00127584:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00127588:;
    {
        cpu->r[2] = rd32(0x00127590u + + 0x40u);
    }
L_0012758c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00127594u, cpu->r[1], 0, 0);
    }
L_00127590:;
    {
        cpu->r[3] = rd32(0x00127598u + + 0x3cu);
    }
L_00127594:;
    {
        cpu->r[12] = rd32(0x0012759cu + + 0x3cu);
    }
L_00127598:;
    {
        cpu->r[2] = add_flags(cpu, 0x001275a0u, cpu->r[2], 0, 0);
    }
L_0012759c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[0]);
    }
L_001275a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001275a8u, cpu->r[3], 0, 0);
    }
L_001275a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001275a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001275b0u, cpu->r[12], 0, 0);
    }
L_001275ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001275b0:;
    {
        cpu->r[12] = 0x0000005eu;
    }
L_001275b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001275b8:;
    {
        cpu->r[14] = 0x001275bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001275bc:;
    {
        goto L_00127568;
    }
}

/* _ZN15GS_TrophiesMenuC1Eb @ 001275dc (arm) */
void fn_001275dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001275dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001275e0:;
    {
        cpu->r[5] = rd32(0x001275e8u + + 0x30u);
    }
L_001275e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001275e8:;
    {
        cpu->r[14] = 0x001275ecu; fn_0010ffa8(cpu);
    }
L_001275ec:;
    {
        cpu->r[3] = rd32(0x001275f4u + + 0x28u);
    }
L_001275f0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001275f8u, cpu->r[5], 0, 0);
    }
L_001275f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001275f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001275fc:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00127600:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00127604:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00127608:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_0012760c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00127610:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00127614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127618u)) return;
    }
}

/* _ZN15GS_TrophiesMenu6UpdateEv @ 00127620 (arm) */
void fn_00127620(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127620:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00127624:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00127628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012762c:;
    {
        cpu->r[4] = rd32(0x00127634u + + 0x164u);
    }
L_00127630:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00127634:;
    {
        cpu->r[4] = add_flags(cpu, 0x0012763cu, cpu->r[4], 0, 0);
    }
L_00127638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127644;
        }
    }
L_0012763c:;
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
L_00127640:;
    {
        return fn_00114a58(cpu);
    }
L_00127644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00127648:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012764cu)) return;
        }
    }
L_0012764c:;
    {
        cpu->r[14] = 0x00127650u; fn_0010da28(cpu);
    }
L_00127650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127654:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127658u)) return;
        }
    }
L_00127658:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc4u);
    }
L_0012765c:;
    {
        cpu->r[2] = 0x0000053du;
    }
L_00127660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001276e4;
        }
    }
L_00127668:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127684;
        }
    }
L_0012766c:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00127670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127734;
        }
    }
L_00127678:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012767c:;
    {
        wr32(cpu->r[6] + + 0x94u, cpu->r[3]);
    }
L_00127680:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127684u)) return;
    }
L_00127684:;
    {
        cpu->r[2] = 0x0000053eu;
    }
L_00127688:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0012768c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012774c;
        }
    }
L_00127690:;
    {
        sub_flags(cpu, cpu->r[3], 0x000005d0u, 1, 1);
    }
L_00127694:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127678;
        }
    }
L_00127698:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0012769c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001276a0:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_001276a4:;
    {
        cpu->r[14] = 0x001276acu;
    }
L_001276a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001276acu)) return;
    }
L_001276ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001276b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127678;
        }
    }
L_001276b4:;
    {
        cpu->r[3] = rd32(0x001276bcu + + 0xe0u);
    }
L_001276b8:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_001276bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001276c0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001276c4:;
    {
        cpu->r[14] = 0x001276c8u; fn_0018ba6c(cpu);
    }
L_001276c8:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_001276cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001276d0:;
    {
        cpu->r[14] = 0x001276d4u; fn_000feecc(cpu);
    }
L_001276d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001276d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001276dc:;
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
L_001276e0:;
    {
        return fn_000f36dc(cpu);
    }
L_001276e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001276e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001276ec:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_001276f0:;
    {
        cpu->r[14] = 0x001276f8u;
    }
L_001276f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001276f8u)) return;
    }
L_001276f8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001276fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127678;
        }
    }
L_00127700:;
    {
        cpu->r[3] = rd32(0x00127708u + + 0x94u);
    }
L_00127704:;
    {
        cpu->r[0] = 0x00000e50u;
    }
L_00127708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012770c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00127710:;
    {
        cpu->r[14] = 0x00127714u; fn_0018ba6c(cpu);
    }
L_00127714:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_00127718:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0012771c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127720:;
    {
        cpu->r[14] = 0x00127724u; fn_001266e0(cpu);
    }
L_00127724:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127728:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0012772c:;
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
L_00127730:;
    {
        return fn_000f36dc(cpu);
    }
L_00127734:;
    {
        cpu->r[3] = rd32(0x0012773cu + + 0x60u);
    }
L_00127738:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0012773c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127740:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00127744:;
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
L_00127748:;
    {
        return fn_000f34e8(cpu);
    }
L_0012774c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00127750:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00127754:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_00127758:;
    {
        cpu->r[14] = 0x00127760u;
    }
L_0012775c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127760u)) return;
    }
L_00127760:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127678;
        }
    }
L_00127768:;
    {
        cpu->r[3] = rd32(0x00127770u + + 0x2cu);
    }
L_0012776c:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_00127770:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127774:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00127778:;
    {
        cpu->r[14] = 0x0012777cu; fn_0018ba6c(cpu);
    }
L_0012777c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x8cau);
    }
L_00127780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127784:;
    {
        cpu->r[14] = 0x00127788u; fn_001275dc(cpu);
    }
L_00127788:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012778c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00127790:;
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
L_00127794:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN15GS_TrophiesMenuC2Eb @ 001277a0 (arm) */
void fn_001277a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001277a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001277a4:;
    {
        cpu->r[5] = rd32(0x001277acu + + 0x30u);
    }
L_001277a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001277ac:;
    {
        cpu->r[14] = 0x001277b0u; fn_0010ffa8(cpu);
    }
L_001277b0:;
    {
        cpu->r[3] = rd32(0x001277b8u + + 0x28u);
    }
L_001277b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001277bcu, cpu->r[5], 0, 0);
    }
L_001277b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001277bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001277c0:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_001277c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001277c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001277cc:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[2]);
    }
L_001277d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001277d4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001277d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001277dcu)) return;
    }
}

/* _ZN15GS_TrophiesMenuD0Ev @ 001277e4 (arm) */
void fn_001277e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001277e4:;
    {
        cpu->r[3] = rd32(0x001277ecu + + 0x2cu);
    }
L_001277e8:;
    {
        cpu->r[2] = rd32(0x001277f0u + + 0x2cu);
    }
L_001277ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001277f4u, cpu->r[3], 0, 0);
    }
L_001277f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001277f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001277f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001277fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00127800:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00127804:;
    {
        cpu->r[14] = 0x00127808u; fn_000ec21c(cpu);
    }
L_00127808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012780c:;
    {
        cpu->r[14] = 0x00127810u; fn_0018ba20(cpu);
    }
L_00127810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00127814:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127818u)) return;
    }
}

/* _ZN15GS_TrophiesMenu6RenderEv @ 00127820 (arm) */
void fn_00127820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127820:;
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
L_00127824:;
    {
        cpu->r[6] = rd32(0x0012782cu + + 0x36cu);
    }
L_00127828:;
    {
        cpu->r[3] = rd32(0x00127830u + + 0x36cu);
    }
L_0012782c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00127830:;
    {
        cpu->r[6] = add_flags(cpu, 0x00127838u, cpu->r[6], 0, 0);
    }
L_00127834:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00127838:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0012783c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00127840:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00127844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127b3c;
        }
    }
L_00127848:;
    {
        cpu->r[4] = rd32(0x00127850u + + 0x350u);
    }
L_0012784c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00127850:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00127854:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_00127858:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012785c:;
    {
        cpu->r[14] = 0x00127860u; fn_0018aa44(cpu);
    }
L_00127860:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00127864:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00127868:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0012786c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00127870:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00127874:;
    {
        cpu->r[14] = 0x00127878u; fn_000ad8a0(cpu);
    }
L_00127878:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_0012787c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00127880:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001278ac;
        }
    }
L_00127884:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00127888:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0012788c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00127890:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00127894:;
    {
        cpu->r[14] = 0x0012789cu;
    }
L_00127898:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0012789cu)) return;
    }
L_0012789c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8d4u);
    }
L_001278a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001278a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001278a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127884;
        }
    }
L_001278ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001278b0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001278b4:;
    {
        cpu->r[14] = 0x001278bcu;
    }
L_001278b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001278bcu)) return;
    }
L_001278bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001278c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001278c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001278c8:;
    {
        cpu->r[14] = 0x001278d0u;
    }
L_001278cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001278d0u)) return;
    }
L_001278d0:;
    {
        cpu->r[1] = rd32(0x001278d8u + + 0x2ccu);
    }
L_001278d4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x950u);
    }
L_001278d8:;
    {
        cpu->r[9] = 0x0000005au;
    }
L_001278dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001278e4u, cpu->r[1], 0, 0);
    }
L_001278e0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001278e4:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_001278e8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001278ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001278f0:;
    {
        cpu->r[2] = rd32(0x001278f8u + + 0x2b0u);
    }
L_001278f4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10]; cpu->r[1] = v;
    }
L_001278f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000000cu;
        }
    }
L_001278fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
        }
    }
L_00127900:;
    {
        cpu->r[2] = add_flags(cpu, 0x00127908u, cpu->r[2], 0, 0);
    }
L_00127904:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00127908:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_0012790c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00127910:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00127914:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00127918:;
    {
        cpu->r[1] = rd32(0x00127920u + + 0x28cu);
    }
L_0012791c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00127924u, cpu->r[1], 0, 0);
    }
L_00127920:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00127924:;
    {
        cpu->r[1] = rd32(0x0012792cu + + 0x284u);
    }
L_00127928:;
    {
        cpu->r[1] = add_flags(cpu, 0x00127930u, cpu->r[1], 0, 0);
    }
L_0012792c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00127930:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00127aa8;
        }
    }
L_00127934:;
    {
        cpu->r[7] = rd32(0x0012793cu + + 0x278u);
    }
L_00127938:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], 0x00000028u, 1, 0);
    }
L_0012793c:;
    {
        cpu->r[11] = rd32(0x00127944u + + 0x274u);
    }
L_00127940:;
    {
        cpu->r[5] = 0x0000000au;
    }
L_00127944:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00127948:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0012794c:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00127950:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00127954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00127958:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000015cu, 0, 0);
    }
L_0012795c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00127960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001279fc;
        }
    }
L_00127964:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[4]);
    }
L_00127968:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0012796c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001279dc;
        }
    }
L_00127970:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00127974:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00127978:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012797c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127ab0;
        }
    }
L_00127980:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00127984:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001279a8;
        }
    }
L_00127988:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0012798c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00127990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00127994:;
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
L_00127998:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0012799c:;
    {
        cpu->r[12] = 0x000000a6u;
    }
L_001279a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001279a4:;
    {
        cpu->r[14] = 0x001279a8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001279a8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001279ac:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001279b0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001279b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127b10;
        }
    }
L_001279b8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[4]);
    }
L_001279bc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001279c0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xb0u);
    }
L_001279c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001279c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001279cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
    }
L_001279d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001279d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001279d8:;
    {
        cpu->r[14] = 0x001279dcu; fn_000ad8a0(cpu);
    }
L_001279dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000082u, 1, 1);
    }
L_001279e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001279e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127a28;
        }
    }
L_001279e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001279ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001279f0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001279f4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001279f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127964;
        }
    }
L_001279fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127a00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00127a04:;
    {
        cpu->r[14] = 0x00127a08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127a08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127964;
        }
    }
L_00127a10:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00127a14:;
    {
        cpu->r[14] = 0x00127a18u; fn_00094228(cpu);
    }
L_00127a18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00127a1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127a20:;
    {
        cpu->r[14] = 0x00127a24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127a24:;
    {
        goto L_00127964;
    }
L_00127a28:;
    {
        cpu->r[3] = rd32(0x00127a30u + + 0x18cu);
    }
L_00127a2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00127a30:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0xa0u);
    }
L_00127a34:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00127a38:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00127a3c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00127a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00127a44:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00127a48:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00127a4c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00127a50:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x438u);
    }
L_00127a54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00127a58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00127a5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000009cu, 0, 0);
    }
L_00127a60:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00127a64:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_00127a68:;
    {
        cpu->r[14] = 0x00127a6cu; fn_000aeb58(cpu);
    }
L_00127a6c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00127a70:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00127a74:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00127a78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00127a7c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000050u, 0, 0);
    }
L_00127a80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00127a84:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00127a88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00127a8c:;
    {
        cpu->r[14] = 0x00127a90u; fn_000ad19c(cpu);
    }
L_00127a90:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x950u);
    }
L_00127a94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_00127a98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000000cu;
        }
    }
L_00127a9c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
        }
    }
L_00127aa0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00127aa4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00127934;
        }
    }
L_00127aa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00127aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127ab0u)) return;
    }
L_00127ab0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127ab4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00127ab8:;
    {
        cpu->r[14] = 0x00127abcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127ad8;
        }
    }
L_00127ac4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00127ac8:;
    {
        cpu->r[14] = 0x00127accu; fn_00094228(cpu);
    }
L_00127acc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00127ad0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127ad4:;
    {
        cpu->r[14] = 0x00127ad8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127ad8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[4]);
    }
L_00127adc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00127ae0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00127988;
        }
    }
L_00127ae4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00127ae8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00127aec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00127af0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00127af4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127980;
        }
    }
L_00127af8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00127afc:;
    {
        cpu->r[14] = 0x00127b00u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127b00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127b04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127b80;
        }
    }
L_00127b08:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[4]);
    }
L_00127b0c:;
    {
        goto L_00127980;
    }
L_00127b10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127b14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00127b18:;
    {
        cpu->r[14] = 0x00127b1cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127b1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127b20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001279b8;
        }
    }
L_00127b24:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00127b28:;
    {
        cpu->r[14] = 0x00127b2cu; fn_00094228(cpu);
    }
L_00127b2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00127b30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00127b34:;
    {
        cpu->r[14] = 0x00127b38u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127b38:;
    {
        goto L_001279b8;
    }
L_00127b3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127b40:;
    {
        cpu->r[14] = 0x00127b44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00127b44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127848;
        }
    }
L_00127b4c:;
    {
        cpu->r[4] = rd32(0x00127b54u + + 0x4cu);
    }
L_00127b50:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00127b54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127b58:;
    {
        cpu->r[14] = 0x00127b5cu; fn_0018aa20(cpu);
    }
L_00127b5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127b60:;
    {
        cpu->r[14] = 0x00127b64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127b64:;
    {
        cpu->r[3] = rd32(0x00127b6cu + + 0x54u);
    }
L_00127b68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00127b6c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00127b70:;
    {
        cpu->r[3] = rd32(0x00127b78u + + 0x4cu);
    }
L_00127b74:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00127b78:;
    {
        cpu->r[14] = 0x00127b7cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00127b7c:;
    {
        goto L_0012784c;
    }
L_00127b80:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00127b84:;
    {
        cpu->r[14] = 0x00127b88u; fn_00094228(cpu);
    }
L_00127b88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00127b8c:;
    {
        cpu->r[14] = 0x00127b90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00127b90:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[4]);
    }
L_00127b94:;
    {
        goto L_00127980;
    }
}

/* _ZN20GS_VisualOptionsMenu17ApplyMenuSettingsEv @ 00127bc8 (arm) */
void fn_00127bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127bc8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8cau);
    }
L_00127bcc:;
    {
        cpu->r[3] = rd32(0x00127bd4u + + 0xa4u);
    }
L_00127bd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00127bd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127bd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00127be0u, cpu->r[3], 0, 0);
    }
L_00127bdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127be0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127c38;
        }
    }
L_00127be4:;
    {
        cpu->r[3] = rd32(0x00127becu + + 0x90u);
    }
L_00127be8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00127bec:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_00127bf0:;
    {
        cpu->r[1] = 0x000004e0u;
    }
L_00127bf4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00127bfcu, cpu->r[3], 0, 0);
    }
L_00127bf8:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_00127bfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000060u, 0, 0);
    }
L_00127c00:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00127c04:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00127c08:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_00127c0c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[2]);
    }
L_00127c10:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[2]);
    }
L_00127c14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00127c18:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00127c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00127c20:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00127c24:;
    {
        cpu->r[14] = 0x00127c2cu;
    }
L_00127c28:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xdcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127c2cu)) return;
    }
L_00127c2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00127c30:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_00127c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127c38u)) return;
    }
L_00127c38:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00127c3c:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_00127c40:;
    {
        cpu->r[1] = rd32(0x00127c48u + + 0x38u);
    }
L_00127c44:;
    {
        cpu->r[2] = rd32(0x00127c4cu + + 0x38u);
    }
L_00127c48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00127c4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00127c54u, cpu->r[2], 0, 0);
    }
L_00127c50:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_00127c54:;
    {
        wr32(cpu->r[4] + + 0x8e8u, cpu->r[2]);
    }
L_00127c58:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_00127c5c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00127c60:;
    {
        wr32(cpu->r[4] + + 0x8ecu, cpu->r[3]);
    }
L_00127c64:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00127c68:;
    {
        cpu->r[3] = 0x00000403u;
    }
L_00127c6c:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[0]);
    }
L_00127c70:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_00127c74:;
    {
        goto L_00127c14;
    }
}

/* _ZN20GS_VisualOptionsMenu8DoActionEii @ 00127c88 (arm) */
void fn_00127c88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127c88:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_00127c8c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00127c90:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127c94:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00127c98:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00127c9c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127ca0u)) return;
        }
    }
L_00127ca0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_00127ca4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00127ca8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127ce8;
        }
    }
L_00127cac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_00127cb0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_00127cb4:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[1]);
    }
L_00127cb8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00127cbc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_00127cc0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_00127cc4:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_00127cc8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_00127ccc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_00127cd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00127cd4:;
    {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
    }
L_00127cd8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00127cdc:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_00127ce0:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_00127ce4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127ce8u)) return;
    }
L_00127ce8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00127cec:;
    {
        cpu->r[14] = 0x00127cf4u;
    }
L_00127cf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127cf4u)) return;
    }
L_00127cf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127cf8u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenu8isKindOfEi @ 00127cf8 (arm) */
void fn_00127cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127cf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_00127cfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00127d00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00127d04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_48 @ 00127d08 (arm) */
void fn_00127d08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127d08:;
    {
        cpu->r[3] = rd32(0x00127d10u + + 0x20u);
    }
L_00127d0c:;
    {
        cpu->r[1] = rd32(0x00127d14u + + 0x20u);
    }
L_00127d10:;
    {
        cpu->r[3] = add_flags(cpu, 0x00127d18u, cpu->r[3], 0, 0);
    }
L_00127d14:;
    {
        cpu->r[2] = rd32(0x00127d1cu + + 0x1cu);
    }
L_00127d18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00127d1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00127d24u, cpu->r[2], 0, 0);
    }
L_00127d20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00127d24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00127d28:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00127d2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_VisualOptionsMenu24ProcessOnMouseButtonDownEv @ 00127d3c (arm) */
void fn_00127d3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127d3c:;
    {
        cpu->r[3] = rd32(0x00127d44u + + 0x24u);
    }
L_00127d40:;
    {
        cpu->r[2] = rd32(0x00127d48u + + 0x24u);
    }
L_00127d44:;
    {
        cpu->r[3] = add_flags(cpu, 0x00127d4cu, cpu->r[3], 0, 0);
    }
L_00127d48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127d4c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00127d50:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00127d54:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4]);
    }
L_00127d58:;
    {
        cpu->r[14] = 0x00127d5cu; fn_00110498(cpu);
    }
L_00127d5c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00127d60:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00127d64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127d68u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenu6RenderEv @ 00127d70 (arm) */
void fn_00127d70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127d70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00127d74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00127d78:;
    {
        cpu->r[14] = 0x00127d7cu; fn_0010de00(cpu);
    }
L_00127d7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00127d80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127d84u)) return;
        }
    }
L_00127d84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00127d88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00127d8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00127dbc;
        }
    }
L_00127d90:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00127d94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00127d98:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00127d9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127da0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00127da4:;
    {
        cpu->r[14] = 0x00127dacu;
    }
L_00127da8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127dacu)) return;
    }
L_00127dac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8d4u);
    }
L_00127db0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00127db4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00127db8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127d94;
        }
    }
L_00127dbc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00127dc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00127dc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127de0;
        }
    }
L_00127dc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127dcc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00127dd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00127dd4:;
    {
        cpu->r[14] = 0x00127ddcu;
    }
L_00127dd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127ddcu)) return;
    }
L_00127ddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127de0u)) return;
    }
L_00127de0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00127de4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127de8:;
    {
        cpu->r[14] = 0x00127df0u;
    }
L_00127dec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00127df0u)) return;
    }
L_00127df0:;
    {
        goto L_00127dc8;
    }
}

/* _ZN20GS_VisualOptionsMenu11DoBarActionEii @ 00127df4 (arm) */
void fn_00127df4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127df4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_00127df8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127dfc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00127e00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00127e04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127e9c;
        }
    }
L_00127e0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00127e10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_00127e14:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_00127e18:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00127e1c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00127e20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00127e24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00127e28:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00127e2c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_00127e30:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00127e34:;
    {
        cpu->r[14] = 0x00127e38u; fn_00093f34(cpu);
    }
L_00127e38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00127e3c:;
    {
        cpu->r[3] = 0x000004b9u;
    }
L_00127e40:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00127e44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00127e48:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00127e4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_00127e50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_00127e54:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00127e58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00127e5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00127e60:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00127e64:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00127e68:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00127e6c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00127e70:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00127e74:;
    {
        cpu->r[14] = 0x00127e78u; fn_000fd248(cpu);
    }
L_00127e78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00127e7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00127e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127eb0;
        }
    }
L_00127e84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00127ea4;
        }
    }
L_00127e88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00127e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127eb0;
        }
    }
L_00127e90:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_00127e94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00127ed0;
        }
    }
L_00127e9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00127ea0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127ea4u)) return;
    }
L_00127ea4:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00127ea8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127ec0;
        }
    }
L_00127eb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00127eb4:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00127eb8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_00127ebc:;
    {
        goto L_00127e9c;
    }
L_00127ec0:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00127ec4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00127ec8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00127e9c;
        }
    }
L_00127ecc:;
    {
        goto L_00127eb0;
    }
L_00127ed0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00127ed4:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00127ed8:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_00127edc:;
    {
        cpu->r[14] = 0x00127ee0u; fn_00093f34(cpu);
    }
L_00127ee0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00127ee4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00127ee8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00127eec:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00127ef0:;
    {
        goto L_00127e9c;
    }
}

/* _ZN20GS_VisualOptionsMenuD1Ev @ 00127ef4 (arm) */
void fn_00127ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127ef4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00127ef8:;
    {
        cpu->r[4] = rd32(0x00127f00u + + 0x48u);
    }
L_00127efc:;
    {
        cpu->r[2] = rd32(0x00127f04u + + 0x48u);
    }
L_00127f00:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00127f04:;
    {
        cpu->r[4] = add_flags(cpu, 0x00127f0cu, cpu->r[4], 0, 0);
    }
L_00127f08:;
    {
        cpu->r[3] = rd32(0x00127f10u + + 0x40u);
    }
L_00127f0c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00127f10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00127f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127f18:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00127f1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00127f20:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00127f24:;
    {
        cpu->r[14] = 0x00127f28u; fn_0009e9e8(cpu);
    }
L_00127f28:;
    {
        cpu->r[3] = rd32(0x00127f30u + + 0x24u);
    }
L_00127f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127f30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00127f38:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00127f3c:;
    {
        cpu->r[14] = 0x00127f40u; fn_000ec21c(cpu);
    }
L_00127f40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127f48u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenuD0Ev @ 00127f58 (arm) */
void fn_00127f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127f58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00127f5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00127f60:;
    {
        cpu->r[14] = 0x00127f64u; fn_00127ef4(cpu);
    }
L_00127f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00127f68:;
    {
        cpu->r[14] = 0x00127f6cu; fn_0018ba20(cpu);
    }
L_00127f6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00127f70:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00127f74u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenuD2Ev @ 00127f74 (arm) */
void fn_00127f74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127f74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00127f78:;
    {
        cpu->r[4] = rd32(0x00127f80u + + 0x48u);
    }
L_00127f7c:;
    {
        cpu->r[2] = rd32(0x00127f84u + + 0x48u);
    }
L_00127f80:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00127f84:;
    {
        cpu->r[4] = add_flags(cpu, 0x00127f8cu, cpu->r[4], 0, 0);
    }
L_00127f88:;
    {
        cpu->r[3] = rd32(0x00127f90u + + 0x40u);
    }
L_00127f8c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00127f90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00127f94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127f98:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00127f9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00127fa0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00127fa4:;
    {
        cpu->r[14] = 0x00127fa8u; fn_0009e9e8(cpu);
    }
L_00127fa8:;
    {
        cpu->r[3] = rd32(0x00127fb0u + + 0x24u);
    }
L_00127fac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127fb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00127fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00127fb8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00127fbc:;
    {
        cpu->r[14] = 0x00127fc0u; fn_000ec21c(cpu);
    }
L_00127fc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127fc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00127fc8u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenuC1Eb @ 00127fd8 (arm) */
void fn_00127fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00127fd8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00127fdc:;
    {
        cpu->r[4] = rd32(0x00127fe4u + + 0x28u);
    }
L_00127fe0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00127fe4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00127fe8:;
    {
        cpu->r[14] = 0x00127fecu; fn_0010ffa8(cpu);
    }
L_00127fec:;
    {
        cpu->r[3] = rd32(0x00127ff4u + + 0x1cu);
    }
L_00127ff0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00127ff8u, cpu->r[4], 0, 0);
    }
L_00127ff4:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_00127ff8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00127ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00128004:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00128008:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012800cu)) return;
    }
}

/* _ZN20GS_VisualOptionsMenu6UpdateEv @ 00128014 (arm) */
void fn_00128014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128014:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00128018:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0012801c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00128020:;
    {
        cpu->r[4] = rd32(0x00128028u + + 0x468u);
    }
L_00128024:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00128028:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012802c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128034u, cpu->r[4], 0, 0);
    }
L_00128030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128114;
        }
    }
L_00128034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00128038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128088;
        }
    }
L_0012803c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128080;
        }
    }
L_00128044:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00128048:;
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
L_0012804c:;
    {
        return fn_00114a58(cpu);
    }
L_00128050:;
    {
        cpu->r[2] = 0x000004f8u;
    }
L_00128054:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00128058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001281c0;
        }
    }
L_0012805c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128274;
        }
    }
L_00128060:;
    {
        cpu->r[2] = 0x000004e4u;
    }
L_00128064:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00128068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128330;
        }
    }
L_0012806c:;
    {
        cpu->r[2] = 0x000004f7u;
    }
L_00128070:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00128074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001282e0;
        }
    }
L_00128078:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0012807c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_00128080:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00128084:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00128088u)) return;
    }
L_00128088:;
    {
        cpu->r[14] = 0x0012808cu; fn_0010da28(cpu);
    }
L_0012808c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128080;
        }
    }
L_00128094:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_00128098:;
    {
        cpu->r[2] = 0x000004e2u;
    }
L_0012809c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001280a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001283a0;
        }
    }
L_001280a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128050;
        }
    }
L_001280a8:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_001280ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001280b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001281a4;
        }
    }
L_001280b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128210;
        }
    }
L_001280b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001280bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_001280c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001280c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001280c8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001280cc:;
    {
        cpu->r[14] = 0x001280d4u;
    }
L_001280d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001280d4u)) return;
    }
L_001280d4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001280d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_001280dc:;
    {
        cpu->r[3] = rd32(0x001280e4u + + 0x3b0u);
    }
L_001280e0:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001280e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001280e8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001280ec:;
    {
        cpu->r[14] = 0x001280f0u; fn_0018ba6c(cpu);
    }
L_001280f0:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_001280f4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001280f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001280fc:;
    {
        cpu->r[14] = 0x00128100u; fn_0012234c(cpu);
    }
L_00128100:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00128104:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00128108:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012810c:;
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
L_00128110:;
    {
        return fn_000f36dc(cpu);
    }
L_00128114:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00128118:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_0012811c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00128120:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00128124:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000003u;
        }
    }
L_00128128:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0012812c:;
    {
        cpu->r[14] = 0x00128130u; fn_000eb59c(cpu);
    }
L_00128130:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00128134:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00128138:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012813c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128080;
        }
    }
L_00128144:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_00128148:;
    {
        cpu->r[4] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012814c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00128150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128080;
        }
    }
L_00128154:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_00128158:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0012815c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128080;
        }
    }
L_00128164:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_00128168:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0012816c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128080;
        }
    }
L_00128174:;
    {
        cpu->r[14] = 0x00128178u; fn_000c1cd8(cpu);
    }
L_00128178:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012817c:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_00128180:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00128184:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00128188:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0012818c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128080;
        }
    }
L_00128194:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_00128198:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012819c:;
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
L_001281a0:;
    {
        return fn_000bd908(cpu);
    }
L_001281a4:;
    {
        cpu->r[5] = rd32(0x001281acu + + 0x2e8u);
    }
L_001281a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001281ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001281b0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001281b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001281b8:;
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
L_001281bc:;
    {
        return fn_000f34e8(cpu);
    }
L_001281c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001281c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001281c8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001281cc:;
    {
        cpu->r[14] = 0x001281d4u;
    }
L_001281d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001281d4u)) return;
    }
L_001281d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001281d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_001281dc:;
    {
        cpu->r[3] = rd32(0x001281e4u + + 0x2b0u);
    }
L_001281e0:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_001281e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001281e8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001281ec:;
    {
        cpu->r[14] = 0x001281f0u; fn_0018ba6c(cpu);
    }
L_001281f0:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_001281f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001281f8:;
    {
        cpu->r[14] = 0x001281fcu; fn_001038b0(cpu);
    }
L_001281fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00128200:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00128204:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00128208:;
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
L_0012820c:;
    {
        return fn_000f36dc(cpu);
    }
L_00128210:;
    {
        cpu->r[2] = 0x000004bdu;
    }
L_00128214:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00128218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001283f4;
        }
    }
L_0012821c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000004e0u, 1, 1);
    }
L_00128220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_00128224:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00128228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012822c:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_00128230:;
    {
        cpu->r[14] = 0x00128238u;
    }
L_00128234:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00128238u)) return;
    }
L_00128238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012823c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_00128240:;
    {
        cpu->r[3] = rd32(0x00128248u + + 0x24cu);
    }
L_00128244:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00128248:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012824c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00128250:;
    {
        cpu->r[14] = 0x00128254u; fn_0018ba6c(cpu);
    }
L_00128254:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00128258:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0012825c:;
    {
        cpu->r[14] = 0x00128260u; fn_00127fd8(cpu);
    }
L_00128260:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00128264:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00128268:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0012826c:;
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
L_00128270:;
    {
        return fn_000f36dc(cpu);
    }
L_00128274:;
    {
        cpu->r[2] = 0x000005b8u;
    }
L_00128278:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0012827c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128420;
        }
    }
L_00128280:;
    {
        cpu->r[2] = 0x000005b9u;
    }
L_00128284:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00128288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_0012828c:;
    {
        cpu->r[14] = 0x00128290u; fn_000979a0(cpu);
    }
L_00128290:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00128294:;
    {
        cpu->r[14] = 0x00128298u; fn_000979a0(cpu);
    }
L_00128298:;
    {
        cpu->r[3] = rd32(0x001282a0u + + 0x1f4u);
    }
L_0012829c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001282a0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001282a4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001282a8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001282ac:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001282b0:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_001282b4:;
    {
        cpu->r[4] = rd32(cpu->r[14] + + 0x490u);
    }
L_001282b8:;
    {
        cpu->r[14] = rd8(cpu->r[0] + + 0x3eu);
    }
L_001282bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001282c0:;
    {
        uint32_t v = cpu->r[14] ^ 0x00000001u; cpu->r[14] = v;
    }
L_001282c4:;
    {
        wr8(cpu->r[6] + + 0x3eu, cpu->r[14]);
    }
L_001282c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001282cc:;
    {
        cpu->r[14] = 0x001282d0u; fn_000fd248(cpu);
    }
L_001282d0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001282d4:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_001282d8:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_001282dc:;
    {
        goto L_00128078;
    }
L_001282e0:;
    {
        cpu->r[14] = 0x001282e4u; fn_000979a0(cpu);
    }
L_001282e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001282e8:;
    {
        cpu->r[14] = 0x001282ecu; fn_000979a0(cpu);
    }
L_001282ec:;
    {
        cpu->r[14] = 0x001282f0u; fn_00093f78(cpu);
    }
L_001282f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001282f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001282f8:;
    {
        cpu->r[14] = 0x001282fcu; fn_00093f70(cpu);
    }
L_001282fc:;
    {
        cpu->r[14] = 0x00128300u; fn_000979a0(cpu);
    }
L_00128300:;
    {
        cpu->r[14] = 0x00128304u; fn_00093f78(cpu);
    }
L_00128304:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_00128308:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128470;
        }
    }
L_0012830c:;
    {
        cpu->r[0] = rd32(0x00128314u + + 0x180u);
    }
L_00128310:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00128314:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00128318:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0012831c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00128320:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00128324:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00128328:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0012832c:;
    {
        goto L_001282c8;
    }
L_00128330:;
    {
        cpu->r[0] = rd32(0x00128338u + + 0x15cu);
    }
L_00128334:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00128338:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0012833c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00128340:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00128344:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00128348:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0012834c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00128350:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00128354:;
    {
        cpu->r[14] = 0x00128358u; fn_000fd248(cpu);
    }
L_00128358:;
    {
        cpu->r[14] = 0x0012835cu; fn_000979a0(cpu);
    }
L_0012835c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00128360:;
    {
        cpu->r[14] = 0x00128364u; fn_000979a0(cpu);
    }
L_00128364:;
    {
        cpu->r[14] = 0x00128368u; fn_00093ff8(cpu);
    }
L_00128368:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0012836c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[6];
        }
    }
L_00128370:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128480;
        }
    }
L_00128374:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00128378:;
    {
        cpu->r[14] = 0x0012837cu; fn_00093ff0(cpu);
    }
L_0012837c:;
    {
        cpu->r[14] = 0x00128380u; fn_000979a0(cpu);
    }
L_00128380:;
    {
        cpu->r[14] = 0x00128384u; fn_00093ff8(cpu);
    }
L_00128384:;
    {
        cpu->r[2] = rd32(0x0012838cu + + 0x10cu);
    }
L_00128388:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0012838c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00128390:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00128394:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_00128398:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_0012839c:;
    {
        goto L_00128078;
    }
L_001283a0:;
    {
        cpu->r[0] = rd32(0x001283a8u + + 0xecu);
    }
L_001283a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001283a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001283ac:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001283b0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001283b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001283b8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001283bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001283c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001283c4:;
    {
        cpu->r[14] = 0x001283c8u; fn_000fd248(cpu);
    }
L_001283c8:;
    {
        cpu->r[14] = 0x001283ccu; fn_000979a0(cpu);
    }
L_001283cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001283d0:;
    {
        cpu->r[14] = 0x001283d4u; fn_000979a0(cpu);
    }
L_001283d4:;
    {
        cpu->r[14] = 0x001283d8u; fn_00093fa8(cpu);
    }
L_001283d8:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 0);
    }
L_001283dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001283e0:;
    {
        cpu->r[14] = 0x001283e4u; fn_00093fa0(cpu);
    }
L_001283e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001283e8:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_001283ec:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_001283f0:;
    {
        goto L_00128078;
    }
L_001283f4:;
    {
        cpu->r[5] = rd32(0x001283fcu + + 0x98u);
    }
L_001283f8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001283fc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00128400:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_00128404:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00128408:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0012840c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00128410:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00128414:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00128418:;
    {
        cpu->r[14] = 0x0012841cu; fn_000fd248(cpu);
    }
L_0012841c:;
    {
        goto L_001281a8;
    }
L_00128420:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00128424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128428:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0012842c:;
    {
        cpu->r[14] = 0x00128434u;
    }
L_00128430:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00128434u)) return;
    }
L_00128434:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128078;
        }
    }
L_0012843c:;
    {
        cpu->r[3] = rd32(0x00128444u + + 0x50u);
    }
L_00128440:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_00128444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128448:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0012844c:;
    {
        cpu->r[14] = 0x00128450u; fn_0018ba6c(cpu);
    }
L_00128450:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x8cau);
    }
L_00128454:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00128458:;
    {
        cpu->r[14] = 0x0012845cu; fn_00124ea8(cpu);
    }
L_0012845c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00128460:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00128464:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00128468:;
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
L_0012846c:;
    {
        return fn_000f36dc(cpu);
    }
L_00128470:;
    {
        cpu->r[14] = 0x00128474u; fn_000979a0(cpu);
    }
L_00128474:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00128478:;
    {
        cpu->r[14] = 0x0012847cu; fn_00093f70(cpu);
    }
L_0012847c:;
    {
        goto L_0012830c;
    }
L_00128480:;
    {
        cpu->r[14] = 0x00128484u; fn_000979a0(cpu);
    }
L_00128484:;
    {
        cpu->r[14] = 0x00128488u; fn_00093ff8(cpu);
    }
L_00128488:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0012848c:;
    {
        goto L_00128374;
    }
}

/* _ZN20GS_VisualOptionsMenuC2Eb @ 0012849c (arm) */
void fn_0012849c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0012849c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001284a0:;
    {
        cpu->r[4] = rd32(0x001284a8u + + 0x28u);
    }
L_001284a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001284a8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001284ac:;
    {
        cpu->r[14] = 0x001284b0u; fn_0010ffa8(cpu);
    }
L_001284b0:;
    {
        cpu->r[3] = rd32(0x001284b8u + + 0x1cu);
    }
L_001284b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001284bcu, cpu->r[4], 0, 0);
    }
L_001284b8:;
    {
        wr8(cpu->r[5] + + 0x8cau, cpu->r[6]);
    }
L_001284bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001284c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001284c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001284c8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001284cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001284d0u)) return;
    }
}

/* _ZN20GS_VisualOptionsMenu11InitSpritesEv @ 001284d8 (arm) */
void fn_001284d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001284d8:;
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
L_001284dc:;
    {
        cpu->r[4] = rd32(0x001284e4u + + 0x2ccu);
    }
L_001284e0:;
    {
        cpu->r[7] = rd32(0x001284e8u + + 0x2ccu);
    }
L_001284e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001284e8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001284f0u, cpu->r[4], 0, 0);
    }
L_001284ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001284f0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001284f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001284f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012862c;
        }
    }
L_001284fc:;
    {
        cpu->r[6] = rd32(0x00128504u + + 0x2b4u);
    }
L_00128500:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_00128504:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00128508:;
    {
        cpu->r[14] = 0x0012850cu; fn_00096a08(cpu);
    }
L_0012850c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00128510:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128514:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00128518:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012851c:;
    {
        cpu->r[14] = 0x00128520u; fn_0018aa44(cpu);
    }
L_00128520:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00128524:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00128528:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012852c:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_00128530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128774;
        }
    }
L_00128534:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00128538:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0012853c:;
    {
        cpu->r[14] = 0x00128540u; fn_00096a08(cpu);
    }
L_00128540:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00128544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128548:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0012854c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128550:;
    {
        cpu->r[14] = 0x00128554u; fn_0018aa44(cpu);
    }
L_00128554:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00128558:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0012855c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00128560:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_00128564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128738;
        }
    }
L_00128568:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0012856c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00128570:;
    {
        cpu->r[14] = 0x00128574u; fn_00096a08(cpu);
    }
L_00128574:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00128578:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0012857c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00128580:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128584:;
    {
        cpu->r[14] = 0x00128588u; fn_0018aa44(cpu);
    }
L_00128588:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0012858c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00128590:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00128594:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_00128598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001286fc;
        }
    }
L_0012859c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001285a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001285a4:;
    {
        cpu->r[14] = 0x001285a8u; fn_00096a08(cpu);
    }
L_001285a8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001285ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001285b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001285b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001285b8:;
    {
        cpu->r[14] = 0x001285bcu; fn_0018aa44(cpu);
    }
L_001285bc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001285c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001285c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001285c8:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_001285cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001286c0;
        }
    }
L_001285d0:;
    {
        cpu->r[3] = rd32(0x001285d8u + + 0x1e4u);
    }
L_001285d4:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001285d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001285dc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001285e0:;
    {
        cpu->r[14] = 0x001285e4u; fn_000f3430(cpu);
    }
L_001285e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001285e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001285ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001285f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001285f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_001285f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_001285fc:;
    {
        cpu->r[14] = 0x00128600u; fn_0018aa44(cpu);
    }
L_00128600:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00128604:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00128608:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012860c:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_00128610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128670;
        }
    }
L_00128614:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0012861c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00128620:;
    {
        cpu->r[14] = 0x00128624u; fn_0018aa44(cpu);
    }
L_00128624:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_00128628:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0012862cu)) return;
    }
L_0012862c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128630:;
    {
        cpu->r[14] = 0x00128634u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00128634:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001284fc;
        }
    }
L_0012863c:;
    {
        cpu->r[6] = rd32(0x00128644u + + 0x174u);
    }
L_00128640:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00128644:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128648:;
    {
        cpu->r[14] = 0x0012864cu; fn_0018aa20(cpu);
    }
L_0012864c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128650:;
    {
        cpu->r[14] = 0x00128654u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00128654:;
    {
        cpu->r[3] = rd32(0x0012865cu + + 0x164u);
    }
L_00128658:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012865c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128660:;
    {
        cpu->r[3] = rd32(0x00128668u + + 0x15cu);
    }
L_00128664:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128668:;
    {
        cpu->r[14] = 0x0012866cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0012866c:;
    {
        goto L_00128500;
    }
L_00128670:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00128674:;
    {
        cpu->r[14] = 0x00128678u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00128678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0012867c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128614;
        }
    }
L_00128680:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128684:;
    {
        cpu->r[14] = 0x00128688u; fn_0018aa20(cpu);
    }
L_00128688:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0012868c:;
    {
        cpu->r[14] = 0x00128690u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00128690:;
    {
        cpu->r[3] = rd32(0x00128698u + + 0x128u);
    }
L_00128694:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128698:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012869c:;
    {
        cpu->r[3] = rd32(0x001286a4u + + 0x120u);
    }
L_001286a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001286a4:;
    {
        cpu->r[14] = 0x001286a8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001286a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001286ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001286b0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001286b4:;
    {
        cpu->r[14] = 0x001286b8u; fn_0018aa44(cpu);
    }
L_001286b8:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_001286bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001286c0u)) return;
    }
L_001286c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001286c4:;
    {
        cpu->r[14] = 0x001286c8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001286c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001286cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001285d0;
        }
    }
L_001286d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001286d4:;
    {
        cpu->r[14] = 0x001286d8u; fn_0018aa20(cpu);
    }
L_001286d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001286dc:;
    {
        cpu->r[14] = 0x001286e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001286e0:;
    {
        cpu->r[3] = rd32(0x001286e8u + + 0xd8u);
    }
L_001286e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001286e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001286ec:;
    {
        cpu->r[3] = rd32(0x001286f4u + + 0xd0u);
    }
L_001286f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001286f4:;
    {
        cpu->r[14] = 0x001286f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001286f8:;
    {
        goto L_001285d0;
    }
L_001286fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128700:;
    {
        cpu->r[14] = 0x00128704u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00128704:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012859c;
        }
    }
L_0012870c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128710:;
    {
        cpu->r[14] = 0x00128714u; fn_0018aa20(cpu);
    }
L_00128714:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128718:;
    {
        cpu->r[14] = 0x0012871cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0012871c:;
    {
        cpu->r[3] = rd32(0x00128724u + + 0x9cu);
    }
L_00128720:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128724:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128728:;
    {
        cpu->r[3] = rd32(0x00128730u + + 0x94u);
    }
L_0012872c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128730:;
    {
        cpu->r[14] = 0x00128734u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00128734:;
    {
        goto L_0012859c;
    }
L_00128738:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0012873c:;
    {
        cpu->r[14] = 0x00128740u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00128740:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128568;
        }
    }
L_00128748:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012874c:;
    {
        cpu->r[14] = 0x00128750u; fn_0018aa20(cpu);
    }
L_00128750:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128754:;
    {
        cpu->r[14] = 0x00128758u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00128758:;
    {
        cpu->r[3] = rd32(0x00128760u + + 0x60u);
    }
L_0012875c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128760:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128764:;
    {
        cpu->r[3] = rd32(0x0012876cu + + 0x58u);
    }
L_00128768:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0012876c:;
    {
        cpu->r[14] = 0x00128770u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00128770:;
    {
        goto L_00128568;
    }
L_00128774:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128778:;
    {
        cpu->r[14] = 0x0012877cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0012877c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00128780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128534;
        }
    }
L_00128784:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00128788:;
    {
        cpu->r[14] = 0x0012878cu; fn_0018aa20(cpu);
    }
L_0012878c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00128790:;
    {
        cpu->r[14] = 0x00128794u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00128794:;
    {
        cpu->r[3] = rd32(0x0012879cu + + 0x24u);
    }
L_00128798:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012879c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001287a0:;
    {
        cpu->r[3] = rd32(0x001287a8u + + 0x1cu);
    }
L_001287a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001287a8:;
    {
        cpu->r[14] = 0x001287acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001287ac:;
    {
        goto L_00128534;
    }
}

/* _ZN20GS_VisualOptionsMenu13GetMenuStringEi @ 001287c8 (arm) */
void fn_001287c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001287c8:;
    {
        cpu->r[3] = 0x000004f7u;
    }
L_001287cc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001287d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001287d4:;
    {
        cpu->r[6] = rd32(0x001287dcu + + 0x1f8u);
    }
L_001287d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001287dc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001287e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001287e4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001287ecu, cpu->r[6], 0, 0);
    }
L_001287e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001288f0;
        }
    }
L_001287ec:;
    {
        cpu->r[3] = 0x000005b9u;
    }
L_001287f0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001287f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128944;
        }
    }
L_001287f8:;
    {
        cpu->r[3] = 0x000004e2u;
    }
L_001287fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00128800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128888;
        }
    }
L_00128804:;
    {
        cpu->r[3] = 0x000004e4u;
    }
L_00128808:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0012880c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128960;
        }
    }
L_00128810:;
    {
        cpu->r[3] = 0x000004e1u;
    }
L_00128814:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00128818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128828;
        }
    }
L_0012881c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00128820:;
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
L_00128824:;
    {
        return fn_0010e02c(cpu);
    }
L_00128828:;
    {
        cpu->r[3] = rd32(0x00128830u + + 0x1a8u);
    }
L_0012882c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00128830:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128834:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00128838:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0012883c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00128840:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x4cdu);
    }
L_00128844:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00128848:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x0000000du;
        }
    }
L_0012884c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x0000000cu;
        }
    }
L_00128850:;
    {
        cpu->r[14] = 0x00128854u; fn_000aeb28(cpu);
    }
L_00128854:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128858:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0012885c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00128860:;
    {
        cpu->r[14] = 0x00128864u; fn_000aeb58(cpu);
    }
L_00128864:;
    {
        cpu->r[1] = rd32(0x0012886cu + + 0x170u);
    }
L_00128868:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0012886c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00128874u, cpu->r[1], 0, 0);
    }
L_00128870:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00128874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128878:;
    {
        cpu->r[14] = 0x0012887cu; fn_000ae830(cpu);
    }
L_0012887c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128880:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00128884:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00128888u)) return;
    }
L_00128888:;
    {
        cpu->r[3] = rd32(0x00128890u + + 0x150u);
    }
L_0012888c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00128890:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00128894:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00128898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001289ac;
        }
    }
L_0012889c:;
    {
        cpu->r[7] = rd32(0x001288a4u + + 0x140u);
    }
L_001288a0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001288a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_001288a8:;
    {
        cpu->r[14] = 0x001288acu; fn_00093fa8(cpu);
    }
L_001288ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001288b0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001288b4:;
    {
        cpu->r[0] = 0x000004e2u;
    }
L_001288b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000018u;
        }
    }
L_001288bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000019u;
        }
    }
L_001288c0:;
    {
        cpu->r[14] = 0x001288c4u; fn_000aeb28(cpu);
    }
L_001288c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001288c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001288cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001288d0:;
    {
        cpu->r[14] = 0x001288d4u; fn_000aeb58(cpu);
    }
L_001288d4:;
    {
        cpu->r[1] = rd32(0x001288dcu + + 0x10cu);
    }
L_001288d8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001288dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001288e4u, cpu->r[1], 0, 0);
    }
L_001288e0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001288e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001288e8:;
    {
        cpu->r[14] = 0x001288ecu; fn_000ae830(cpu);
    }
L_001288ec:;
    {
        goto L_0012887c;
    }
L_001288f0:;
    {
        cpu->r[2] = rd32(0x001288f8u + + 0xf4u);
    }
L_001288f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001288f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00128900u, cpu->r[2], 0, 0);
    }
L_001288fc:;
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
L_00128900:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00128904:;
    {
        cpu->r[14] = 0x00128908u; fn_000979a0(cpu);
    }
L_00128908:;
    {
        cpu->r[14] = 0x0012890cu; fn_00093f78(cpu);
    }
L_0012890c:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_00128910:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_00128914:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128918:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0012891c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00128920:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00128924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00128928:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0012892c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00128930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00128934:;
    {
        cpu->r[0] = rd32(cpu->r[0] + - 0xcu);
    }
L_00128938:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012893c:;
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
L_00128940:;
    {
        return fn_000aeb58(cpu);
    }
L_00128944:;
    {
        cpu->r[14] = 0x00128948u; fn_000979a0(cpu);
    }
L_00128948:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0012894c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x3eu);
    }
L_00128950:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128954:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00128958:;
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
L_0012895c:;
    {
        return fn_0010ed78(cpu);
    }
L_00128960:;
    {
        cpu->r[14] = 0x00128964u; fn_000979a0(cpu);
    }
L_00128964:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00128968:;
    {
        cpu->r[14] = 0x0012896cu; fn_00093ff8(cpu);
    }
L_0012896c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128970:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00128974:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128978:;
    {
        cpu->r[14] = 0x0012897cu; fn_000aeb28(cpu);
    }
L_0012897c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00128980:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00128984:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000004e0u, 0, 0);
    }
L_00128988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000005u, 0, 0);
    }
L_0012898c:;
    {
        cpu->r[14] = 0x00128990u; fn_000aeb58(cpu);
    }
L_00128990:;
    {
        cpu->r[1] = rd32(0x00128998u + + 0x58u);
    }
L_00128994:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00128998:;
    {
        cpu->r[1] = add_flags(cpu, 0x001289a0u, cpu->r[1], 0, 0);
    }
L_0012899c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001289a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001289a4:;
    {
        cpu->r[14] = 0x001289a8u; fn_000ae830(cpu);
    }
L_001289a8:;
    {
        goto L_0012887c;
    }
L_001289ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001289b0:;
    {
        cpu->r[14] = 0x001289b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001289b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001289b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0012889c;
        }
    }
L_001289bc:;
    {
        cpu->r[7] = rd32(0x001289c4u + + 0x20u);
    }
L_001289c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001289c4:;
    {
        cpu->r[14] = 0x001289c8u; fn_00094228(cpu);
    }
L_001289c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001289cc:;
    {
        cpu->r[14] = 0x001289d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001289d0:;
    {
        goto L_001288a0;
    }
}

/* _ZN10gxMainMenu6RenderEv @ 001289f4 (arm) */
void fn_001289f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001289f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10gxMainMenu8DoActionEii @ 001289f8 (arm) */
void fn_001289f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001289f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10gxMainMenu6ResumeEv @ 001289fc (arm) */
void fn_001289fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001289fc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00128a00:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[3]);
    }
L_00128a04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00128a08:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_00128a0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10gxMainMenuD1Ev @ 00128a10 (arm) */
void fn_00128a10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a10:;
    {
        cpu->r[3] = rd32(0x00128a18u + + 0x24u);
    }
L_00128a14:;
    {
        cpu->r[2] = rd32(0x00128a1cu + + 0x24u);
    }
L_00128a18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00128a20u, cpu->r[3], 0, 0);
    }
L_00128a1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00128a20:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00128a24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00128a28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00128a2c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00128a30:;
    {
        cpu->r[14] = 0x00128a34u; fn_000ec21c(cpu);
    }
L_00128a34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128a38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00128a3cu)) return;
    }
}

/* _ZN10gxMainMenu13OnMouseActionEi @ 00128a44 (arm) */
void fn_00128a44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_00128a48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00128a4c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00128a50:;
    {
        return fn_000eb694(cpu);
    }
}

/* _ZN10gxMainMenu10OnMenuDownEv @ 00128a54 (arm) */
void fn_00128a54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a54:;
    {
        return fn_000eaf24(cpu);
    }
}

/* _ZN10gxMainMenu8OnMenuUpEv @ 00128a58 (arm) */
void fn_00128a58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a58:;
    {
        return fn_000eaec4(cpu);
    }
}

/* _ZN10gxMainMenu6UpdateEv @ 00128a5c (arm) */
void fn_00128a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a5c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x84u);
    }
L_00128a60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00128a64:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[3]);
    }
L_00128a68:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00128a6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128a98;
        }
    }
L_00128a70:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_00128a74:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_00128a78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00128a7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_00128a80:;
    {
        { uint32_t v = cpu->r[1] & 0x02000000u; set_nz(cpu, v); }
    }
L_00128a84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[0] + + 0x9cu);
        }
    }
L_00128a88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_00128a8c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[1]);
        }
    }
L_00128a90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00128a94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00128a74;
        }
    }
L_00128a98:;
    {
        return fn_000eb420(cpu);
    }
}

/* _ZN10gxMainMenuC1Ev @ 00128a9c (arm) */
void fn_00128a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128a9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00128aa0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00128aa4:;
    {
        cpu->r[4] = rd32(0x00128aacu + + 0x28u);
    }
L_00128aa8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00128aac:;
    {
        cpu->r[14] = 0x00128ab0u; fn_000eadb4(cpu);
    }
L_00128ab0:;
    {
        cpu->r[3] = rd32(0x00128ab8u + + 0x20u);
    }
L_00128ab4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128abcu, cpu->r[4], 0, 0);
    }
L_00128ab8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128abc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00128ac4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00128ac8:;
    {
        cpu->r[14] = 0x00128accu; fn_001289fc(cpu);
    }
L_00128acc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128ad0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00128ad4u)) return;
    }
}

/* _ZN10gxMainMenuC2Ev @ 00128adc (arm) */
void fn_00128adc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128adc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00128ae0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00128ae4:;
    {
        cpu->r[4] = rd32(0x00128aecu + + 0x28u);
    }
L_00128ae8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00128aec:;
    {
        cpu->r[14] = 0x00128af0u; fn_000eadb4(cpu);
    }
L_00128af0:;
    {
        cpu->r[3] = rd32(0x00128af8u + + 0x20u);
    }
L_00128af4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128afcu, cpu->r[4], 0, 0);
    }
L_00128af8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128afc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00128b00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00128b04:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00128b08:;
    {
        cpu->r[14] = 0x00128b0cu; fn_001289fc(cpu);
    }
L_00128b0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128b10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00128b14u)) return;
    }
}

/* _ZN10gxMainMenuD0Ev @ 00128b1c (arm) */
void fn_00128b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128b1c:;
    {
        cpu->r[3] = rd32(0x00128b24u + + 0x2cu);
    }
L_00128b20:;
    {
        cpu->r[2] = rd32(0x00128b28u + + 0x2cu);
    }
L_00128b24:;
    {
        cpu->r[3] = add_flags(cpu, 0x00128b2cu, cpu->r[3], 0, 0);
    }
L_00128b28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00128b2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00128b30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00128b34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00128b38:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00128b3c:;
    {
        cpu->r[14] = 0x00128b40u; fn_000ec21c(cpu);
    }
L_00128b40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128b44:;
    {
        cpu->r[14] = 0x00128b48u; fn_0018ba20(cpu);
    }
L_00128b48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128b4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00128b50u)) return;
    }
}

/* _ZN4ItemC2EPiS0_cPhi @ 00128b58 (arm) */
void fn_00128b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128b58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00128b5c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00128b60:;
    {
        cpu->r[4] = rd32(0x00128b68u + + 0x38u);
    }
L_00128b64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128b68:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00128b6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00128b70:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128b78u, cpu->r[4], 0, 0);
    }
L_00128b74:;
    {
        cpu->r[5] = rd32(0x00128b7cu + + 0x28u);
    }
L_00128b78:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00128b7c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00128b80:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00128b84:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00128b88:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00128b8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00128b90:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00128b94:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00128b98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00128b9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemC1EPiS0_cPhi @ 00128ba8 (arm) */
void fn_00128ba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128ba8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00128bac:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00128bb0:;
    {
        cpu->r[4] = rd32(0x00128bb8u + + 0x38u);
    }
L_00128bb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128bb8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00128bbc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00128bc0:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128bc8u, cpu->r[4], 0, 0);
    }
L_00128bc4:;
    {
        cpu->r[5] = rd32(0x00128bccu + + 0x28u);
    }
L_00128bc8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00128bcc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00128bd0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00128bd4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00128bd8:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00128bdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00128be0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00128be4:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00128be8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00128bec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemC2EPPcci @ 00128bf8 (arm) */
void fn_00128bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128bf8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00128bfc:;
    {
        cpu->r[4] = rd32(0x00128c04u + + 0x2cu);
    }
L_00128c00:;
    {
        cpu->r[5] = rd32(0x00128c08u + + 0x2cu);
    }
L_00128c04:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128c0cu, cpu->r[4], 0, 0);
    }
L_00128c08:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00128c0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128c10:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00128c14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00128c18:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00128c1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00128c20:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00128c24:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00128c28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00128c2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemC1EPPcci @ 00128c38 (arm) */
void fn_00128c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128c38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00128c3c:;
    {
        cpu->r[4] = rd32(0x00128c44u + + 0x2cu);
    }
L_00128c40:;
    {
        cpu->r[5] = rd32(0x00128c48u + + 0x2cu);
    }
L_00128c44:;
    {
        cpu->r[4] = add_flags(cpu, 0x00128c4cu, cpu->r[4], 0, 0);
    }
L_00128c48:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00128c4c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00128c50:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00128c54:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00128c58:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00128c5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00128c60:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00128c64:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00128c68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00128c6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemD2Ev @ 00128c78 (arm) */
void fn_00128c78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128c78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemD1Ev @ 00128c7c (arm) */
void fn_00128c7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128c7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Item12getElementAtEi @ 00128c80 (arm) */
void fn_00128c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128c80:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x10u);
    }
L_00128c84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128c88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
        }
    }
L_00128c8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
        }
    }
L_00128c90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_00128c94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_00128c98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Item18getNumUsedElementsEv @ 00128c9c (arm) */
void fn_00128c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128c9c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x10u);
    }
L_00128ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128ca4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128ce0;
        }
    }
L_00128ca8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00128cac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128d1c;
        }
    }
L_00128cb4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00128cb8:;
    {
        cpu->r[1] = rd8(cpu->r[1]);
    }
L_00128cbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00128cc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128d1c;
        }
    }
L_00128cc4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00128cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00128ccc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00128cd0:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_00128cd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128cc8;
        }
    }
L_00128cdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00128ce0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x14u);
    }
L_00128ce4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00128ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00128d1c;
        }
    }
L_00128cec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_00128cf0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00128cf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128d1c;
        }
    }
L_00128cf8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00128cfc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00128d00:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_00128d04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00128d08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128d0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00128d10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00128d14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128d00;
        }
    }
L_00128d18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00128d1c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00128d20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4ItemD0Ev @ 00128d24 (arm) */
void fn_00128d24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128d24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00128d28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00128d2c:;
    {
        cpu->r[14] = 0x00128d30u; fn_00128c7c(cpu);
    }
L_00128d30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128d34:;
    {
        cpu->r[14] = 0x00128d38u; fn_0018ba20(cpu);
    }
L_00128d38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00128d3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00128d40u)) return;
    }
}

/* _ZN13CGameResourceC2Ev @ 00128d40 (arm) */
void fn_00128d40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128d40:;
    {
        cpu->r[3] = rd32(0x00128d48u + + 0x24u);
    }
L_00128d44:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00128d48:;
    {
        cpu->r[1] = rd32(0x00128d50u + + 0x20u);
    }
L_00128d4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00128d54u, cpu->r[3], 0, 0);
    }
L_00128d50:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[12]);
    }
L_00128d54:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00128d58:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[12]);
    }
L_00128d5c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00128d60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00128d64:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00128d68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameResourceC1Ev @ 00128d74 (arm) */
void fn_00128d74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128d74:;
    {
        cpu->r[3] = rd32(0x00128d7cu + + 0x24u);
    }
L_00128d78:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00128d7c:;
    {
        cpu->r[1] = rd32(0x00128d84u + + 0x20u);
    }
L_00128d80:;
    {
        cpu->r[3] = add_flags(cpu, 0x00128d88u, cpu->r[3], 0, 0);
    }
L_00128d84:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[12]);
    }
L_00128d88:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00128d8c:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[12]);
    }
L_00128d90:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00128d94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00128d98:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00128d9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameResource11GetScriptIDEP6SCRIPT @ 00128da8 (arm) */
void fn_00128da8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128da8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_00128dac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00128db0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128de4;
        }
    }
L_00128db4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_00128db8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00128dbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00128dc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00128dc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128dd4;
        }
    }
L_00128dc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00128dcc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00128dd0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00128dd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00128dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00128ddc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00128de0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128dcc;
        }
    }
L_00128de4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00128de8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameResource12WaypointByIdEi @ 00128dec (arm) */
void fn_00128dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128dec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_00128df0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00128df4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00128df8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128e28;
        }
    }
L_00128dfc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_00128e00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00128e04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00128e08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128e1c;
        }
    }
L_00128e0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00128e10:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x40u;
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x40u);
        cpu->r[0] = wb_tmp;
    }
L_00128e14:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00128e18:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00128e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00128e20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00128e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00128e10;
        }
    }
L_00128e28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00128e2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameResource13LoadCutscenesEP8LZMAFile @ 00128e30 (arm) */
void fn_00128e30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00128e30:;
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
L_00128e34:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00128e38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00128e3c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00128e40:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00128e44:;
    {
        cpu->r[14] = 0x00128e48u; fn_000fc678(cpu);
    }
L_00128e48:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00128e4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128e50:;
    {
        cpu->r[14] = 0x00128e54u; fn_000fc678(cpu);
    }
L_00128e54:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00128e58:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000063u, 1, 1);
    }
L_00128e5c:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000073u, 1, 1);
        }
    }
L_00128e60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00128e64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00128e68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00128e6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00129170;
        }
    }
L_00128e70:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x38u);
    }
L_00128e74:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x48u);
    }
L_00128e78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128e7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012916c;
        }
    }
L_00128e80:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_00128e84:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00128e88:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00128e8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00128e90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00128e94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128e98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00128e9c:;
    {
        cpu->r[14] = 0x00128ea0u; fn_000fc650(cpu);
    }
L_00128ea0:;
    {
        wr16(cpu->r[10] + - 0x18u, cpu->r[0]);
    }
L_00128ea4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128ea8:;
    {
        cpu->r[14] = 0x00128eacu; fn_000fc650(cpu);
    }
L_00128eac:;
    {
        wr16(cpu->r[10] + - 0x16u, cpu->r[0]);
    }
L_00128eb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128eb4:;
    {
        cpu->r[14] = 0x00128eb8u; fn_000fc650(cpu);
    }
L_00128eb8:;
    {
        wr16(cpu->r[10] + - 0x10u, cpu->r[0]);
    }
L_00128ebc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128ec0:;
    {
        cpu->r[14] = 0x00128ec4u; fn_000fc650(cpu);
    }
L_00128ec4:;
    {
        wr16(cpu->r[10] + - 0x14u, cpu->r[0]);
    }
L_00128ec8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128ecc:;
    {
        cpu->r[14] = 0x00128ed0u; fn_000fc650(cpu);
    }
L_00128ed0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[10] + - 0x14u);
    }
L_00128ed4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[10] + - 0x10u);
    }
L_00128ed8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00128edc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00128ee0:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x40u);
    }
L_00128ee4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00128ee8:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x3cu);
    }
L_00128eec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00128ef0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00128ef4:;
    {
        wr32(cpu->r[10] + - 0x8u, cpu->r[4]);
    }
L_00128ef8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00128efc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], shifter(cpu->r[11], 2, 3u, &shc), 0, 0);
    }
L_00128f00:;
    {
        wr32(cpu->r[10] + - 0x4u, cpu->r[12]);
    }
L_00128f04:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_00128f08:;
    {
        wr32(cpu->r[10] + - 0xcu, cpu->r[4]);
    }
L_00128f0c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_00128f10:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00128f14:;
    {
        wr16(cpu->r[10] + - 0x12u, cpu->r[0]);
    }
L_00128f18:;
    {
        cpu->r[11] = cpu->r[2] + (uint32_t)((int16_t)cpu->r[0]);
    }
L_00128f1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00128f8c;
        }
    }
L_00128f20:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00128f24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_00128f28:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00128f2c:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_00128f30:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_00128f34:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00128f38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128f3c:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_00128f40:;
    {
        cpu->r[14] = 0x00128f44u; fn_000fc650(cpu);
    }
L_00128f44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00128f48:;
    {
        uint32_t wb_tmp = cpu->r[6] + cpu->r[4];
        wr16(cpu->r[6] + cpu->r[4], cpu->r[0]);
        cpu->r[6] = wb_tmp;
    }
L_00128f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128f50:;
    {
        cpu->r[14] = 0x00128f54u; fn_000fc650(cpu);
    }
L_00128f54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00128f58:;
    {
        wr16(cpu->r[6] + + 0x2u, cpu->r[0]);
    }
L_00128f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128f60:;
    {
        cpu->r[14] = 0x00128f64u; fn_000fc650(cpu);
    }
L_00128f64:;
    {
        wr16(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_00128f68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128f6c:;
    {
        cpu->r[14] = 0x00128f70u; fn_000fc650(cpu);
    }
L_00128f70:;
    {
        wr16(cpu->r[6] + + 0x6u, cpu->r[0]);
    }
L_00128f74:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[10] + - 0x10u);
    }
L_00128f78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00128f7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128f38;
        }
    }
L_00128f80:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_00128f84:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[10] + - 0x14u);
    }
L_00128f88:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_00128f8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00128f90:;
    {
        cpu->r[6] = rd32(cpu->r[10] + - 0x8u);
    }
L_00128f94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012906c;
        }
    }
L_00128f98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00128f9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00128fa0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00128fa4:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_00128fa8:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_00128fac:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_00128fb0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00128fb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128fb8:;
    {
        cpu->r[14] = 0x00128fbcu; fn_000fc650(cpu);
    }
L_00128fbc:;
    {
        wr16(cpu->r[6] + - 0x10u, cpu->r[0]);
    }
L_00128fc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128fc4:;
    {
        cpu->r[14] = 0x00128fc8u; fn_000fc650(cpu);
    }
L_00128fc8:;
    {
        wr8(cpu->r[6] + - 0x13u, cpu->r[0]);
    }
L_00128fcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128fd0:;
    {
        cpu->r[14] = 0x00128fd4u; fn_000fc650(cpu);
    }
L_00128fd4:;
    {
        wr16(cpu->r[6] + - 0xcu, cpu->r[0]);
    }
L_00128fd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128fdc:;
    {
        cpu->r[14] = 0x00128fe0u; fn_000fc650(cpu);
    }
L_00128fe0:;
    {
        wr16(cpu->r[6] + - 0xau, cpu->r[0]);
    }
L_00128fe4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128fe8:;
    {
        cpu->r[14] = 0x00128fecu; fn_000fc650(cpu);
    }
L_00128fec:;
    {
        wr16(cpu->r[6] + - 0x8u, cpu->r[0]);
    }
L_00128ff0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00128ff4:;
    {
        cpu->r[14] = 0x00128ff8u; fn_000fc650(cpu);
    }
L_00128ff8:;
    {
        cpu->r[7] = rd32(cpu->r[11] + + 0x44u);
    }
L_00128ffc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00129000:;
    {
        wr32(cpu->r[6] + - 0x4u, cpu->r[7]);
    }
L_00129004:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129008:;
    {
        wr16(cpu->r[6] + - 0xeu, cpu->r[3]);
    }
L_0012900c:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00129010:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129014:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00129018:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129048;
        }
    }
L_0012901c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00129020:;
    {
        goto L_00129028;
    }
L_00129024:;
    {
        cpu->r[7] = rd32(cpu->r[6] + - 0x4u);
    }
L_00129028:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012902c:;
    {
        cpu->r[14] = 0x00129030u; fn_000fc650(cpu);
    }
L_00129030:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00129034:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00129038:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_0012903c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + - 0xeu);
    }
L_00129040:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00129044:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129024;
        }
    }
L_00129048:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + - 0x14u);
    }
L_0012904c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00129050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00129054:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00129058:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128fb4;
        }
    }
L_0012905c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00129060:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_00129064:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_00129068:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_0012906c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[10] + - 0x12u);
    }
L_00129070:;
    {
        cpu->r[6] = rd32(cpu->r[10] + - 0x4u);
    }
L_00129074:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129078:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129150;
        }
    }
L_0012907c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00129080:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00129084:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00129088:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0012908c:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_00129090:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_00129094:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00129098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012909c:;
    {
        cpu->r[14] = 0x001290a0u; fn_000fc650(cpu);
    }
L_001290a0:;
    {
        wr16(cpu->r[6] + - 0x10u, cpu->r[0]);
    }
L_001290a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001290a8:;
    {
        cpu->r[14] = 0x001290acu; fn_000fc650(cpu);
    }
L_001290ac:;
    {
        wr8(cpu->r[6] + - 0x13u, cpu->r[0]);
    }
L_001290b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001290b4:;
    {
        cpu->r[14] = 0x001290b8u; fn_000fc650(cpu);
    }
L_001290b8:;
    {
        wr16(cpu->r[6] + - 0xcu, cpu->r[0]);
    }
L_001290bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001290c0:;
    {
        cpu->r[14] = 0x001290c4u; fn_000fc650(cpu);
    }
L_001290c4:;
    {
        wr16(cpu->r[6] + - 0xau, cpu->r[0]);
    }
L_001290c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001290cc:;
    {
        cpu->r[14] = 0x001290d0u; fn_000fc650(cpu);
    }
L_001290d0:;
    {
        wr16(cpu->r[6] + - 0x8u, cpu->r[0]);
    }
L_001290d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001290d8:;
    {
        cpu->r[14] = 0x001290dcu; fn_000fc650(cpu);
    }
L_001290dc:;
    {
        cpu->r[7] = rd32(cpu->r[11] + + 0x44u);
    }
L_001290e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_001290e4:;
    {
        wr32(cpu->r[6] + - 0x4u, cpu->r[7]);
    }
L_001290e8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001290ec:;
    {
        wr16(cpu->r[6] + - 0xeu, cpu->r[3]);
    }
L_001290f0:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001290f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001290f8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001290fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012912c;
        }
    }
L_00129100:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00129104:;
    {
        goto L_0012910c;
    }
L_00129108:;
    {
        cpu->r[7] = rd32(cpu->r[6] + - 0x4u);
    }
L_0012910c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129110:;
    {
        cpu->r[14] = 0x00129114u; fn_000fc650(cpu);
    }
L_00129114:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00129118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0012911c:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_00129120:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + - 0xeu);
    }
L_00129124:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00129128:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129108;
        }
    }
L_0012912c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + - 0x12u);
    }
L_00129130:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00129134:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00129138:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0012913c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129098;
        }
    }
L_00129140:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00129144:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_00129148:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0012914c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129150:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00129154:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_00129158:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x38u);
    }
L_0012915c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00129160:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00129164:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00129168:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00128e94;
        }
    }
L_0012916c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00129170:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00129174:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00129178u)) return;
    }
}

/* _ZN13CGameResource11LoadScriptsEP8LZMAFile @ 00129178 (arm) */
void fn_00129178(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129178:;
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
L_0012917c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00129180:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00129184:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_00129188:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012918c:;
    {
        cpu->r[14] = 0x00129190u; fn_000fc678(cpu);
    }
L_00129190:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129194:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00129198:;
    {
        cpu->r[14] = 0x0012919cu; fn_000fc678(cpu);
    }
L_0012919c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001291a0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000073u, 1, 1);
    }
L_001291a4:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
        }
    }
L_001291a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001291ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001291b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001291b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001292f4;
        }
    }
L_001291b8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001291bc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x28u);
    }
L_001291c0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x34u);
    }
L_001291c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001291c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001292f0;
        }
    }
L_001291cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000010u, 0, 0);
    }
L_001291d0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001291d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001291d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001291dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001291e0:;
    {
        cpu->r[14] = 0x001291e4u; fn_000fc650(cpu);
    }
L_001291e4:;
    {
        wr16(cpu->r[11] + - 0x10u, cpu->r[0]);
    }
L_001291e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001291ec:;
    {
        cpu->r[14] = 0x001291f0u; fn_000fc650(cpu);
    }
L_001291f0:;
    {
        wr16(cpu->r[11] + - 0xau, cpu->r[0]);
    }
L_001291f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001291f8:;
    {
        cpu->r[14] = 0x001291fcu; fn_000fc650(cpu);
    }
L_001291fc:;
    {
        wr16(cpu->r[11] + - 0xeu, cpu->r[0]);
    }
L_00129200:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00129204:;
    {
        cpu->r[14] = 0x00129208u; fn_000fc650(cpu);
    }
L_00129208:;
    {
        wr16(cpu->r[11] + - 0xcu, cpu->r[0]);
    }
L_0012920c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00129210:;
    {
        cpu->r[14] = 0x00129214u; fn_000fc650(cpu);
    }
L_00129214:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00129218:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x2cu);
    }
L_0012921c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00129220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00129224:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00129228:;
    {
        wr32(cpu->r[11] + - 0x4u, cpu->r[3]);
    }
L_0012922c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129230:;
    {
        wr16(cpu->r[11] + - 0x8u, cpu->r[3]);
    }
L_00129234:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00129238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0012923c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00129240:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00129244:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001292d0;
        }
    }
L_00129248:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0012924c:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_00129250:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00129254:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129258:;
    {
        cpu->r[14] = 0x0012925cu; fn_000fc650(cpu);
    }
L_0012925c:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[9];
        wr16(cpu->r[5] + cpu->r[9], cpu->r[0]);
        cpu->r[5] = wb_tmp;
    }
L_00129260:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00129264:;
    {
        cpu->r[14] = 0x00129268u; fn_000fc650(cpu);
    }
L_00129268:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0012926c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x30u);
    }
L_00129270:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00129274:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_00129278:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0012927c:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[3]);
    }
L_00129280:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00129284:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129288:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0012928c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001292bc;
        }
    }
L_00129290:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00129294:;
    {
        goto L_0012929c;
    }
L_00129298:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_0012929c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001292a0:;
    {
        cpu->r[14] = 0x001292a4u; fn_000fc650(cpu);
    }
L_001292a4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001292a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001292ac:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_001292b0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_001292b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001292b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129298;
        }
    }
L_001292bc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[11] + - 0x8u);
    }
L_001292c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001292c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_001292c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001292cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129250;
        }
    }
L_001292d0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001292d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000010u, 0, 0);
    }
L_001292d8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x28u);
    }
L_001292dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001292e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001292e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001292e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001292ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001291dc;
        }
    }
L_001292f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001292f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001292f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001292fcu)) return;
    }
}

/* _ZN13CGameResource14LoadCategoriesEP8LZMAFile @ 001292fc (arm) */
void fn_001292fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001292fc:;
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
L_00129300:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00129304:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00129308:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0012930c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00129310:;
    {
        cpu->r[14] = 0x00129314u; fn_000fc678(cpu);
    }
L_00129314:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129318:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012931c:;
    {
        cpu->r[14] = 0x00129320u; fn_000fc678(cpu);
    }
L_00129320:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129324:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000063u, 1, 1);
    }
L_00129328:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 1);
        }
    }
L_0012932c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00129330:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00129334:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00129338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001293d0;
        }
    }
L_0012933c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00129340:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
    }
L_00129344:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129348:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0012934c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001293cc;
        }
    }
L_00129350:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_00129354:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_00129358:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0012935c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_00129360:;
    {
        cpu->r[14] = 0x00129364u; fn_000fc650(cpu);
    }
L_00129364:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x24u);
    }
L_00129368:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_0012936c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129370:;
    {
        uint32_t wb_tmp = cpu->r[6] + cpu->r[11];
        wr32(cpu->r[6] + cpu->r[11], cpu->r[0]);
        cpu->r[6] = wb_tmp;
    }
L_00129374:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00129378:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_0012937c:;
    {
        cpu->r[14] = 0x00129380u; fn_000fc650(cpu);
    }
L_00129380:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00129384:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129388:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001293b4;
        }
    }
L_0012938c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00129390:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00129394:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_00129398:;
    {
        cpu->r[14] = 0x0012939cu; fn_000fc650(cpu);
    }
L_0012939c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_001293a0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001293a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001293a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001293ac:;
    {
        wr16(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_001293b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129390;
        }
    }
L_001293b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001293b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001293bc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_001293c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001293c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
        }
    }
L_001293c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129358;
        }
    }
L_001293cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001293d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001293d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001293d8u)) return;
    }
}

/* _ZN13CGameResource13LoadWaypointsEP8LZMAFile @ 001293d8 (arm) */
void fn_001293d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001293d8:;
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
L_001293dc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001293e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001293e4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001293e8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001293ec:;
    {
        cpu->r[14] = 0x001293f0u; fn_000fc678(cpu);
    }
L_001293f0:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001293f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001293f8:;
    {
        cpu->r[14] = 0x001293fcu; fn_000fc678(cpu);
    }
L_001293fc:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129400:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000077u, 1, 1);
    }
L_00129404:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000070u, 1, 1);
        }
    }
L_00129408:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_0012940c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_00129410:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00129414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00129638;
        }
    }
L_00129418:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_0012941c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x4u);
    }
L_00129420:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00129424:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129634;
        }
    }
L_00129428:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0012942c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_00129430:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_00129434:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x10u);
    }
L_00129438:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0012943c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_00129440:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129444:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00129448:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012944c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_00129450:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00129454:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_00129458:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_0012945c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00129460:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00129464:;
    {
        cpu->r[14] = 0x00129468u; fn_000fc650(cpu);
    }
L_00129468:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_0012946c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129470:;
    {
        cpu->r[14] = 0x00129474u; fn_000fc650(cpu);
    }
L_00129474:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00129478:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0012947c:;
    {
        cpu->r[14] = 0x00129480u; fn_000fc650(cpu);
    }
L_00129480:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00129484:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[0]);
    }
L_00129488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0012948c:;
    {
        cpu->r[14] = 0x00129490u; fn_00156644(cpu);
    }
L_00129490:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129494:;
    {
        cpu->r[14] = 0x00129498u; fn_000fc650(cpu);
    }
L_00129498:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0012949c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_001294a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001294a4:;
    {
        cpu->r[14] = 0x001294a8u; fn_000fc650(cpu);
    }
L_001294a8:;
    {
        wr16(cpu->r[4] + + 0x1au, cpu->r[0]);
    }
L_001294ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001294b0:;
    {
        cpu->r[14] = 0x001294b4u; fn_000fc5fc(cpu);
    }
L_001294b4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001294b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001294bc:;
    {
        cpu->r[14] = 0x001294c0u; fn_000fc5fc(cpu);
    }
L_001294c0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001294c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001294c8:;
    {
        cpu->r[14] = 0x001294ccu; fn_000fc650(cpu);
    }
L_001294cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001294d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001294d4:;
    {
        wr8(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_001294d8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001294dc:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001294e0:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001294e4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001294e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001294ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_001294f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0012951c;
        }
    }
L_001294f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001294f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001294fc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00129500:;
    {
        cpu->r[14] = 0x00129504u; fn_000fc650(cpu);
    }
L_00129504:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00129508:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0012950c:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_00129510:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x18u);
    }
L_00129514:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00129518:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001294f8;
        }
    }
L_0012951c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129520:;
    {
        cpu->r[14] = 0x00129524u; fn_000fc650(cpu);
    }
L_00129524:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129528:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0012952c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129530:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00129534:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129538:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129564;
        }
    }
L_0012953c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00129540:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129544:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x30u);
    }
L_00129548:;
    {
        cpu->r[14] = 0x0012954cu; fn_000fc650(cpu);
    }
L_0012954c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00129550:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00129554:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_00129558:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x14u);
    }
L_0012955c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00129560:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129540;
        }
    }
L_00129564:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129568:;
    {
        cpu->r[14] = 0x0012956cu; fn_000fc650(cpu);
    }
L_0012956c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129570:;
    {
        wr16(cpu->r[4] + + 0x16u, cpu->r[0]);
    }
L_00129574:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129578:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0012957c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129580:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129608;
        }
    }
L_00129584:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00129588:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_0012958c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00129590:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00129594:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00129598:;
    {
        cpu->r[14] = 0x0012959cu; fn_000fc650(cpu);
    }
L_0012959c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001295a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001295a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001295a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001295ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001295b0:;
    {
        wr16(cpu->r[2] + + 0xcu, cpu->r[0]);
    }
L_001295b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001295b8:;
    {
        cpu->r[14] = 0x001295bcu; fn_00156644(cpu);
    }
L_001295bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_001295c0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_001295c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001295c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001295cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001295d0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_001295d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001295d8:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_001295dc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x16u);
    }
L_001295e0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001295e4:;
    {
        vfp_vadd(cpu, 12, 12, 13);
    }
L_001295e8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001295ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001295f0:;
    {
        wr32(cpu->r[2] + cpu->r[5], cpu->r[1]);
    }
L_001295f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_001295f8:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_001295fc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00129600:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00129604:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00129590;
        }
    }
L_00129608:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_0012960c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00129610:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00129614:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00129634;
        }
    }
L_00129618:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0012961c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00129620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_00129624:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00129628:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0012962c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_00129630:;
    {
        goto L_00129434;
    }
L_00129634:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00129638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0012963c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00129640u)) return;
    }
}

/* _ZN13CGameResource7CleanUpEv @ 00129640 (arm) */
void fn_00129640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129640:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00129644:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00129648:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_0012964c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129660;
        }
    }
L_00129654:;
    {
        cpu->r[14] = 0x00129658u; fn_0018ba60(cpu);
    }
L_00129658:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0012965c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00129660:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00129664:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00129668:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_0012966c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00129670u)) return;
    }
}

/* _ZN13CGameResource4LoadEP8LZMAFile @ 00129670 (arm) */
void fn_00129670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00129670:;
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
L_00129674:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00129678:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0012967c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00129680:;
    {
        cpu->r[14] = 0x00129684u; fn_00129640(cpu);
    }
L_00129684:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129688:;
    {
        cpu->r[14] = 0x0012968cu; fn_000fc678(cpu);
    }
L_0012968c:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00129690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129694:;
    {
        cpu->r[14] = 0x00129698u; fn_000fc678(cpu);
    }
L_00129698:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0012969c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000062u, 1, 1);
    }
L_001296a0:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
        }
    }
L_001296a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001296b4;
        }
    }
L_001296a8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001296ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001296b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001296b4u)) return;
    }
L_001296b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296b8:;
    {
        cpu->r[14] = 0x001296bcu; fn_000fc628(cpu);
    }
L_001296bc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001296c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296c4:;
    {
        cpu->r[14] = 0x001296c8u; fn_000fc628(cpu);
    }
L_001296c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296cc:;
    {
        cpu->r[14] = 0x001296d0u; fn_000fc628(cpu);
    }
L_001296d0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001296d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296d8:;
    {
        cpu->r[14] = 0x001296dcu; fn_000fc628(cpu);
    }
L_001296dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296e0:;
    {
        cpu->r[14] = 0x001296e4u; fn_000fc628(cpu);
    }
L_001296e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001296e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296ec:;
    {
        cpu->r[14] = 0x001296f0u; fn_000fc628(cpu);
    }
L_001296f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001296f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001296f8:;
    {
        cpu->r[14] = 0x001296fcu; fn_000fc650(cpu);
    }
L_001296fc:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129700:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_00129704:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129708:;
    {
        cpu->r[14] = 0x0012970cu; fn_000fc650(cpu);
    }
L_0012970c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129710:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00129714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129718:;
    {
        cpu->r[14] = 0x0012971cu; fn_000fc650(cpu);
    }
L_0012971c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129720:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00129724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129728:;
    {
        cpu->r[14] = 0x0012972cu; fn_000fc650(cpu);
    }
L_0012972c:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129730:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129734:;
    {
        cpu->r[14] = 0x00129738u; fn_000fc650(cpu);
    }
L_00129738:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0012973c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_00129740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129744:;
    {
        cpu->r[14] = 0x00129748u; fn_000fc650(cpu);
    }
L_00129748:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0012974c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_00129750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129754:;
    {
        cpu->r[14] = 0x00129758u; fn_000fc650(cpu);
    }
L_00129758:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0012975c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129760:;
    {
        cpu->r[14] = 0x00129764u; fn_000fc650(cpu);
    }
L_00129764:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129768:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_0012976c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129770:;
    {
        cpu->r[14] = 0x00129774u; fn_000fc650(cpu);
    }
L_00129774:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129778:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0012977c:;
    {
        cpu->r[14] = 0x00129780u; fn_000fc650(cpu);
    }
L_00129780:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00129784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129788:;
    {
        cpu->r[14] = 0x0012978cu; fn_000fc650(cpu);
    }
L_0012978c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_00129790:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_00129794:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00129798:;
    {
        cpu->r[14] = 0x0012979cu; fn_000fc650(cpu);
    }
L_0012979c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001297a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001297a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001297a8:;
    {
        cpu->r[14] = 0x001297acu; fn_000fc650(cpu);
    }
L_001297ac:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001297b0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001297b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001297b8:;
    {
        cpu->r[14] = 0x001297bcu; fn_000fc650(cpu);
    }
L_001297bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001297c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001297c4:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001297c8:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001297cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001297d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001297d4:;
    {
        cpu->r[14] = 0x001297d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001297d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001297dc:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_001297e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00129a48;
        }
    }
L_001297e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001297e8:;
    {
        cpu->r[11] = (uint32_t)((int16_t)cpu->r[11]);
    }
L_001297ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_001297f0:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_001297f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001297f8:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_001297fc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_00129800:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[2] = v;
    }
L_00129804:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00129808:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0012980c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_00129810:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[12]);
    }
L_00129814:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00129818:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0012981c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_00129820:;
    {
        { uint32_t v = cpu->r[11] & 0x00000001u; set_nz(cpu, v); }
    }
L_00129824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00129828:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_0012982c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00129830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00129834:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00129838:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0012983c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00129840:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_00129844:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_00129848:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_0012984c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_00129850:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_00129854:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_00129858:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[2]);
    }
L_0012985c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00129860:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00129864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00129868:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 0);
    }
L_0012986c:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_00129870:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_00129874:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
        }
    }
L_00129878:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00129a08;
        }
    }
L_0012987c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x28u);
    }
L_00129880:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_00129884:;
    {
        { uint32_t v = cpu->r[7] & 0x00000001u; set_nz(cpu, v); }
    }
L_00129888:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_0012988c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_00129890:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00129894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00129898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0012989c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001298a0:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[0]);
    }
L_001298a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001298a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001298ac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001298b0:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[2]);
    }
L_001298b4:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[6], 1, 1);
    }
L_001298b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001298bc:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[2]);
    }
L_001298c0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001299cc;
        }
    }
L_001298c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001298c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001298cc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x38u);
    }
L_001298d0:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[14]);
    }
L_001298d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001298d8:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001298dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001298e0:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[14]);
    }
L_001298e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001298e8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001298ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001298f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001298f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001298f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001298fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00129900:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00129904:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[12]);
    }
L_00129908:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0012990c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00129910:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00129914:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_00129918:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_0012991c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00129920:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[14]);
    }
L_00129924:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[12]);
    }
L_00129928:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_0012992c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00129994;
        }
    }
L_00129930:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129934:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00129938:;
    {
        cpu->r[14] = 0x0012993cu; fn_001293d8(cpu);
    }
L_0012993c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129940:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000009u);
        }
    }
L_00129944:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001296ac;
        }
    }
L_00129948:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012994c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00129950:;
    {
        cpu->r[14] = 0x00129954u; fn_001292fc(cpu);
    }
L_00129954:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129958:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000au);
        }
    }
L_0012995c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001296ac;
        }
    }
L_00129960:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129964:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00129968:;
    {
        cpu->r[14] = 0x0012996cu; fn_00129178(cpu);
    }
L_0012996c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129970:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000bu);
        }
    }
L_00129974:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001296ac;
        }
    }
L_00129978:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0012997c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00129980:;
    {
        cpu->r[14] = 0x00129984u; fn_00128e30(cpu);
    }
L_00129984:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00129988:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000cu);
        }
    }
L_0012998c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00129990:;
    {
        goto L_001296ac;
    }
L_00129994:;
    {
        cpu->r[1] = rd32(0x0012999cu + + 0xb8u);
    }
L_00129998:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0012999c:;
    {
        cpu->r[2] = rd32(0x001299a4u + + 0xb4u);
    }
L_001299a0:;
    {
        cpu->r[14] = 0x000000e6u;
    }
L_001299a4:;
    {
        cpu->r[3] = rd32(0x001299acu + + 0xb0u);
    }
L_001299a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001299b0u, cpu->r[1], 0, 0);
    }
L_001299ac:;
    {
        cpu->r[12] = rd32(0x001299b4u + + 0xacu);
    }
L_001299b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001299b8u, cpu->r[2], 0, 0);
    }
L_001299b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001299bcu, cpu->r[3], 0, 0);
    }
L_001299b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001299bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001299c4u, cpu->r[12], 0, 0);
    }
L_001299c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001299c4:;
    {
        cpu->r[14] = 0x001299c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001299c8:;
    {
        goto L_00129930;
    }
L_001299cc:;
    {
        cpu->r[1] = rd32(0x001299d4u + + 0x90u);
    }
L_001299d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001299d4:;
    {
        cpu->r[2] = rd32(0x001299dcu + + 0x8cu);
    }
L_001299d8:;
    {
        cpu->r[14] = 0x000000cfu;
    }
L_001299dc:;
    {
        cpu->r[3] = rd32(0x001299e4u + + 0x88u);
    }
L_001299e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001299e8u, cpu->r[1], 0, 0);
    }
L_001299e4:;
    {
        cpu->r[12] = rd32(0x001299ecu + + 0x84u);
    }
L_001299e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001299f0u, cpu->r[2], 0, 0);
    }
L_001299ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001299f4u, cpu->r[3], 0, 0);
    }
L_001299f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001299f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001299fcu, cpu->r[12], 0, 0);
    }
L_001299f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001299fc:;
    {
        cpu->r[14] = 0x00129a00u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00129a00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_00129a04:;
    {
        goto L_001298c4;
    }
L_00129a08:;
    {
        cpu->r[1] = rd32(0x00129a10u + + 0x64u);
    }
L_00129a0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00129a10:;
    {
        cpu->r[2] = rd32(0x00129a18u + + 0x60u);
    }
L_00129a14:;
    {
        cpu->r[14] = 0x000000bau;
    }
L_00129a18:;
    {
        cpu->r[3] = rd32(0x00129a20u + + 0x5cu);
    }
L_00129a1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00129a24u, cpu->r[1], 0, 0);
    }
L_00129a20:;
    {
        cpu->r[12] = rd32(0x00129a28u + + 0x58u);
    }
L_00129a24:;
    {
        cpu->r[2] = add_flags(cpu, 0x00129a2cu, cpu->r[2], 0, 0);
    }
L_00129a28:;
    {
        cpu->r[3] = add_flags(cpu, 0x00129a30u, cpu->r[3], 0, 0);
    }
L_00129a2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00129a30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00129a38u, cpu->r[12], 0, 0);
    }
L_00129a34:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00129a38:;
    {
        cpu->r[14] = 0x00129a3cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00129a3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_00129a40:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00129a44:;
    {
        goto L_0012987c;
    }
L_00129a48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00129a4c:;
    {
        cpu->r[14] = 0x00129a50u; fn_00129640(cpu);
    }
L_00129a50:;
    {
        goto L_001296a8;
    }
}
