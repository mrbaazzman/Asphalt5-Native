#include "functions.h"

/* _ZN15GS_LoadMainMenu6UpdateEv @ 000f0ea8 (arm) */
void fn_000f0ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f0ea8:;
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
L_000f0eac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x78u);
    }
L_000f0eb0:;
    {
        cpu->r[6] = rd32(0x000f0eb8u + + 0xe04u);
    }
L_000f0eb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000f0eb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f0ebc:;
    {
        cpu->r[6] = add_flags(cpu, 0x000f0ec4u, cpu->r[6], 0, 0);
    }
L_000f0ec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 1);
    }
L_000f0ec4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000f1030;
        case 1: goto L_000f0f20;
        case 2: goto L_000f0ffc;
        case 3: goto L_000f0ffc;
        case 4: goto L_000f12f0;
        case 5: goto L_000f130c;
        case 6: goto L_000f1314;
        case 7: goto L_000f0ffc;
        case 8: goto L_000f10f0;
        case 9: goto L_000f1138;
        case 10: goto L_000f11b0;
        case 11: goto L_000f11e4;
        case 12: goto L_000f1264;
        case 13: goto L_000f12d8;
        case 14: goto L_000f1270;
        case 15: goto L_000f1290;
        case 16: goto L_000f0ffc;
        case 17: goto L_000f1018;
        case 18: goto L_000f131c;
        case 19: goto L_000f13fc;
        case 20: goto L_000f133c;
        default: guest_unimplemented(cpu, 0x000f0ec4u); return; }
        }
    }
L_000f0ec8:;
    {
        goto L_000f0ffc;
    }
L_000f0f20:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa0u);
    }
L_000f0f24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f0f28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f14fc;
        }
    }
L_000f0f2c:;
    {
        cpu->r[4] = rd32(0x000f0f34u + + 0xd8cu);
    }
L_000f0f30:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f0f34:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_000f0f38:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000f0f3c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000f0f40:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f0f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0f68;
        }
    }
L_000f0f48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0f4c:;
    {
        cpu->r[14] = 0x000f0f50u; fn_000cbb24(cpu);
    }
L_000f0f50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f0f54:;
    {
        cpu->r[14] = 0x000f0f58u; fn_0018ba20(cpu);
    }
L_000f0f58:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000f0f5c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0f60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f0f64:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_000f0f68:;
    {
        cpu->r[7] = 0x00001c38u;
    }
L_000f0f6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000f0f70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f0f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f0f9c;
        }
    }
L_000f0f78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f0f7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0f80:;
    {
        cpu->r[14] = 0x000f0f88u;
    }
L_000f0f84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f0f88u)) return;
    }
L_000f0f88:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f0f8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0f90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f0f94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f0f98:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[2]);
    }
L_000f0f9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001c00u, 0, 0);
    }
L_000f0fa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_000f0fa4:;
    {
        cpu->r[14] = 0x000f0fa8u; fn_0012c280(cpu);
    }
L_000f0fa8:;
    {
        cpu->r[3] = rd32(0x000f0fb0u + + 0xd14u);
    }
L_000f0fac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f0fb0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f0fb4:;
    {
        cpu->r[14] = 0x000f0fb8u; fn_00132804(cpu);
    }
L_000f0fb8:;
    {
        cpu->r[3] = rd32(0x000f0fc0u + + 0xd08u);
    }
L_000f0fbc:;
    {
        cpu->r[1] = 0x000003e8u;
    }
L_000f0fc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0fc4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f0fc8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f0fcc:;
    {
        cpu->r[14] = 0x000f0fd0u; fn_00135c90(cpu);
    }
L_000f0fd0:;
    {
        cpu->r[1] = 0x0000c737u;
    }
L_000f0fd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f0fd8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f0fdc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f0fe0:;
    {
        cpu->r[14] = 0x000f0fe4u; fn_00135c90(cpu);
    }
L_000f0fe4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f0fe8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f0fec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f0ff0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f0ff4:;
    {
        cpu->r[14] = 0x000f0ff8u; fn_001367cc(cpu);
    }
L_000f0ff8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f0ffc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f1000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f1004:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_000f1008:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f100c:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
    }
L_000f1010:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f1014:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1018u)) return;
    }
L_000f1018:;
    {
        cpu->r[3] = rd32(0x000f1020u + + 0xca8u);
    }
L_000f101c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f1020:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f1024:;
    {
        cpu->r[14] = 0x000f1028u; fn_00136788(cpu);
    }
L_000f1028:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f102c:;
    {
        goto L_000f0ffc;
    }
L_000f1030:;
    {
        cpu->r[8] = rd32(0x000f1038u + + 0xc94u);
    }
L_000f1034:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000f1038:;
    {
        cpu->r[7] = rd32(0x000f1040u + + 0xc90u);
    }
L_000f103c:;
    {
        cpu->r[10] = rd32(0x000f1044u + + 0xc90u);
    }
L_000f1040:;
    {
        cpu->r[9] = rd32(0x000f1048u + + 0xc90u);
    }
L_000f1044:;
    {
        goto L_000f1068;
    }
L_000f1048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f104c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1050:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000f1054:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000f1058:;
    {
        cpu->r[14] = 0x000f105cu; fn_0018aa58(cpu);
    }
L_000f105c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000f1060:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000005bu, 1, 1);
    }
L_000f1064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1448;
        }
    }
L_000f1068:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_000f106c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000f1070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f105c;
        }
    }
L_000f1074:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1078:;
    {
        cpu->r[14] = 0x000f107cu; fn_00096a08(cpu);
    }
L_000f107c:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_000f1080:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000f1084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f105c;
        }
    }
L_000f1088:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f108c:;
    {
        cpu->r[14] = 0x000f1090u; fn_00096a08(cpu);
    }
L_000f1090:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000f1094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f105c;
        }
    }
L_000f1098:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003bu, 1, 1);
    }
L_000f109c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f105c;
        }
    }
L_000f10a0:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000f10a4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000f10a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f10ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1048;
        }
    }
L_000f10b0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f10b4:;
    {
        cpu->r[14] = 0x000f10b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f10b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f10bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1048;
        }
    }
L_000f10c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000f10c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f10c8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f10cc:;
    {
        cpu->r[14] = 0x000f10d0u; fn_0018aa20(cpu);
    }
L_000f10d0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f10d4:;
    {
        cpu->r[14] = 0x000f10d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f10d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f10dc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000f10e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f10e4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000f10e8:;
    {
        cpu->r[14] = 0x000f10ecu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f10ec:;
    {
        goto L_000f1048;
    }
L_000f10f0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f10f4:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_000f10f8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000f10fc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000f1100:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_000f1104:;
    {
        cpu->r[3] = 0x0000150cu;
    }
L_000f1108:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f110c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[4]);
    }
L_000f1110:;
    {
        cpu->r[3] = 0x00001bdcu;
    }
L_000f1114:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f1118:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_000f111c:;
    {
        cpu->r[14] = 0x000f1120u; fn_00097ad0(cpu);
    }
L_000f1120:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f1124:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f1128:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000f112c:;
    {
        cpu->r[14] = 0x000f1130u; fn_0018aa58(cpu);
    }
L_000f1130:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f1134:;
    {
        goto L_000f0ffc;
    }
L_000f1138:;
    {
        cpu->r[14] = 0x000f113cu; fn_00097ad0(cpu);
    }
L_000f113c:;
    {
        cpu->r[1] = 0x00000045u;
    }
L_000f1140:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1144:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1148:;
    {
        cpu->r[14] = 0x000f114cu; fn_00096a08(cpu);
    }
L_000f114c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1150:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1154:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1158:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f115c:;
    {
        cpu->r[14] = 0x000f1160u; fn_0018aa58(cpu);
    }
L_000f1160:;
    {
        cpu->r[14] = 0x000f1164u; fn_00097ad0(cpu);
    }
L_000f1164:;
    {
        cpu->r[1] = 0x00000046u;
    }
L_000f1168:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f116c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1170:;
    {
        cpu->r[14] = 0x000f1174u; fn_0018aa58(cpu);
    }
L_000f1174:;
    {
        cpu->r[14] = 0x000f1178u; fn_00097ad0(cpu);
    }
L_000f1178:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_000f117c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1180:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1184:;
    {
        cpu->r[14] = 0x000f1188u; fn_0018aa58(cpu);
    }
L_000f1188:;
    {
        cpu->r[14] = 0x000f118cu; fn_00097ad0(cpu);
    }
L_000f118c:;
    {
        cpu->r[1] = 0x00000044u;
    }
L_000f1190:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1194:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1198:;
    {
        cpu->r[14] = 0x000f119cu; fn_0018aa58(cpu);
    }
L_000f119c:;
    {
        cpu->r[14] = 0x000f11a0u; fn_00097ad0(cpu);
    }
L_000f11a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f11a4:;
    {
        cpu->r[14] = 0x000f11a8u; fn_0018b5c8(cpu);
    }
L_000f11a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f11ac:;
    {
        goto L_000f0ffc;
    }
L_000f11b0:;
    {
        cpu->r[14] = 0x000f11b4u; fn_00097ad0(cpu);
    }
L_000f11b4:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000f11b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f11bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f11c0:;
    {
        cpu->r[14] = 0x000f11c4u; fn_0018aa58(cpu);
    }
L_000f11c4:;
    {
        cpu->r[14] = 0x000f11c8u; fn_00097ad0(cpu);
    }
L_000f11c8:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_000f11cc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f11d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f11d4:;
    {
        cpu->r[14] = 0x000f11d8u; fn_0018aa58(cpu);
    }
L_000f11d8:;
    {
        cpu->r[14] = 0x000f11dcu; fn_00097ad0(cpu);
    }
L_000f11dc:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000f11e0:;
    {
        goto L_000f1190;
    }
L_000f11e4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa0u);
    }
L_000f11e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f11ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1240;
        }
    }
L_000f11f0:;
    {
        cpu->r[3] = rd32(0x000f11f8u + + 0xae4u);
    }
L_000f11f4:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f11f8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f11fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f1200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1664;
        }
    }
L_000f1204:;
    {
        cpu->r[4] = rd32(0x000f120cu + + 0xad4u);
    }
L_000f1208:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f120c:;
    {
        cpu->r[14] = 0x000f1210u; fn_00189fd4(cpu);
    }
L_000f1210:;
    {
        cpu->r[14] = 0x000f1214u; fn_000979a0(cpu);
    }
L_000f1214:;
    {
        cpu->r[14] = 0x000f1218u; fn_000955c0(cpu);
    }
L_000f1218:;
    {
        cpu->r[14] = 0x000f121cu; fn_000f0d64(cpu);
    }
L_000f121c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1220:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[0]);
    }
L_000f1224:;
    {
        cpu->r[14] = 0x000f1228u; fn_000979a0(cpu);
    }
L_000f1228:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f122c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x94u);
    }
L_000f1230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1234:;
    {
        cpu->r[14] = 0x000f1238u; fn_0009fd1c(cpu);
    }
L_000f1238:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f123c:;
    {
        cpu->r[14] = 0x000f1240u; fn_000a062c(cpu);
    }
L_000f1240:;
    {
        cpu->r[3] = rd32(0x000f1248u + + 0xa78u);
    }
L_000f1244:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1248:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f124c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f1250:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000f1254:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f1258:;
    {
        cpu->r[14] = 0x000f125cu; fn_000af09c(cpu);
    }
L_000f125c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f1260:;
    {
        goto L_000f0ffc;
    }
L_000f1264:;
    {
        cpu->r[14] = 0x000f1268u; fn_00097ad0(cpu);
    }
L_000f1268:;
    {
        cpu->r[1] = 0x00000038u;
    }
L_000f126c:;
    {
        goto L_000f1190;
    }
L_000f1270:;
    {
        cpu->r[14] = 0x000f1274u; fn_00097ad0(cpu);
    }
L_000f1274:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_000f1278:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f127c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1280:;
    {
        cpu->r[14] = 0x000f1284u; fn_0018aa58(cpu);
    }
L_000f1284:;
    {
        cpu->r[14] = 0x000f1288u; fn_00097ad0(cpu);
    }
L_000f1288:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_000f128c:;
    {
        goto L_000f1190;
    }
L_000f1290:;
    {
        cpu->r[14] = 0x000f1294u; fn_00097ad0(cpu);
    }
L_000f1294:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f1298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f129c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f12a0:;
    {
        cpu->r[14] = 0x000f12a4u; fn_00096a08(cpu);
    }
L_000f12a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f12a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f12ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f12b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f12b4:;
    {
        cpu->r[14] = 0x000f12b8u; fn_0018aa58(cpu);
    }
L_000f12b8:;
    {
        cpu->r[14] = 0x000f12bcu; fn_00097ad0(cpu);
    }
L_000f12bc:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000f12c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f12c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f12c8:;
    {
        cpu->r[14] = 0x000f12ccu; fn_00096a08(cpu);
    }
L_000f12cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f12d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f12d4:;
    {
        goto L_000f1190;
    }
L_000f12d8:;
    {
        cpu->r[3] = rd32(0x000f12e0u + + 0x9e0u);
    }
L_000f12dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f12e0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f12e4:;
    {
        cpu->r[14] = 0x000f12e8u; fn_00099c78(cpu);
    }
L_000f12e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f12ec:;
    {
        goto L_000f0ffc;
    }
L_000f12f0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000f12f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f12f8:;
    {
        cpu->r[14] = 0x000f12fcu; fn_00096a08(cpu);
    }
L_000f12fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1300:;
    {
        cpu->r[14] = 0x000f1304u; fn_00097ad0(cpu);
    }
L_000f1304:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1308:;
    {
        goto L_000f1190;
    }
L_000f130c:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_000f1310:;
    {
        goto L_000f12f4;
    }
L_000f1314:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000f1318:;
    {
        goto L_000f12f4;
    }
L_000f131c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f1320:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000f1324:;
    {
        cpu->r[14] = 0x000f1328u; fn_000fd050(cpu);
    }
L_000f1328:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f132c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000f1330:;
    {
        cpu->r[14] = 0x000f1334u; fn_000fd070(cpu);
    }
L_000f1334:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f1338:;
    {
        goto L_000f0ffc;
    }
L_000f133c:;
    {
        cpu->r[4] = rd32(0x000f1344u + + 0x97cu);
    }
L_000f1340:;
    {
        cpu->r[3] = 0x00001d6cu;
    }
L_000f1344:;
    {
        cpu->r[10] = rd8(cpu->r[0] + + 0xa0u);
    }
L_000f1348:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_000f134c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1350:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f1354:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000f1358:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f135c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1554;
        }
    }
L_000f1360:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_000f1364:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f1368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f16a8;
        }
    }
L_000f136c:;
    {
        cpu->r[14] = 0x000f1370u; fn_000979a0(cpu);
    }
L_000f1370:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000f1374:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f1378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f175c;
        }
    }
L_000f137c:;
    {
        cpu->r[14] = 0x000f1380u; fn_000979a0(cpu);
    }
L_000f1380:;
    {
        cpu->r[14] = 0x000f1384u; fn_00093f98(cpu);
    }
L_000f1384:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000f1388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1794;
        }
    }
L_000f138c:;
    {
        cpu->r[14] = 0x000f1390u; fn_000979a0(cpu);
    }
L_000f1390:;
    {
        cpu->r[14] = 0x000f1394u; fn_00093f98(cpu);
    }
L_000f1394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1398:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f1900;
        }
    }
L_000f139c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f13a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f13a4:;
    {
        cpu->r[14] = 0x000f13a8u; fn_000a3410(cpu);
    }
L_000f13a8:;
    {
        cpu->r[14] = 0x000f13acu; fn_000979a0(cpu);
    }
L_000f13ac:;
    {
        cpu->r[14] = 0x000f13b0u; fn_00093fb8(cpu);
    }
L_000f13b0:;
    {
        cpu->r[14] = 0x000f13b4u; fn_000a0ea4(cpu);
    }
L_000f13b4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f13b8:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f13bc:;
    {
        cpu->r[14] = 0x000f13c0u; fn_0018ba6c(cpu);
    }
L_000f13c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f13c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f13c8:;
    {
        cpu->r[2] = 0x0000094fu;
    }
L_000f13cc:;
    {
        cpu->r[14] = 0x000f13d0u; imp_memset(cpu); /* memset */
    }
L_000f13d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f13d4:;
    {
        cpu->r[14] = 0x000f13d8u; fn_0010ffa8(cpu);
    }
L_000f13d8:;
    {
        cpu->r[3] = rd32(0x000f13e0u + + 0x904u);
    }
L_000f13dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f13e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f13e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f13e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f13ec:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000f13f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f13f4:;
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
L_000f13f8:;
    {
        return fn_000f36dc(cpu);
    }
L_000f13fc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f1400:;
    {
        cpu->r[14] = 0x000f1404u; fn_000979a0(cpu);
    }
L_000f1404:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000f1408:;
    {
        cpu->r[4] = 0x00001c4cu;
    }
L_000f140c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x84u);
    }
L_000f1410:;
    {
        wr8(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_000f1414:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1418:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f141c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000f1420:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[2]);
    }
L_000f1424:;
    {
        cpu->r[14] = 0x000f1428u; fn_0009af1c(cpu);
    }
L_000f1428:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f142c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f1430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1434:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000f1438:;
    {
        cpu->r[14] = 0x000f1440u;
    }
L_000f143c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1440u)) return;
    }
L_000f1440:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f1444:;
    {
        goto L_000f0ffc;
    }
L_000f1448:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f144c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1450:;
    {
        cpu->r[14] = 0x000f1454u; fn_00096a08(cpu);
    }
L_000f1454:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000f1458:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f145c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1460:;
    {
        cpu->r[14] = 0x000f1464u; fn_00096a08(cpu);
    }
L_000f1464:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f1468:;
    {
        cpu->r[14] = 0x000f146cu; fn_00097ad0(cpu);
    }
L_000f146c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1470:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1474:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1478:;
    {
        cpu->r[14] = 0x000f147cu; fn_0018aa58(cpu);
    }
L_000f147c:;
    {
        cpu->r[14] = 0x000f1480u; fn_00097ad0(cpu);
    }
L_000f1480:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f1484:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1488:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f148c:;
    {
        cpu->r[14] = 0x000f1490u; fn_0018aa58(cpu);
    }
L_000f1490:;
    {
        cpu->r[14] = 0x000f1494u; fn_00097ad0(cpu);
    }
L_000f1494:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1498:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f149c:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f14a0:;
    {
        cpu->r[14] = 0x000f14a4u; fn_0018aa58(cpu);
    }
L_000f14a4:;
    {
        cpu->r[14] = 0x000f14a8u; fn_00097ad0(cpu);
    }
L_000f14a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f14ac:;
    {
        cpu->r[14] = 0x000f14b0u; fn_0018b5c8(cpu);
    }
L_000f14b0:;
    {
        cpu->r[0] = rd32(0x000f14b8u + + 0x810u);
    }
L_000f14b4:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f14b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f14bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f14c0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_000f14c4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f14c8:;
    {
        cpu->r[14] = 0x000f14ccu; fn_00135c18(cpu);
    }
L_000f14cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f14d0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f14d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f14d8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f14dc:;
    {
        cpu->r[14] = 0x000f14e0u; fn_00135c18(cpu);
    }
L_000f14e0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f14e4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f14e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f14ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f14f0:;
    {
        cpu->r[14] = 0x000f14f4u; fn_00135c18(cpu);
    }
L_000f14f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f14f8:;
    {
        goto L_000f0ffc;
    }
L_000f14fc:;
    {
        cpu->r[0] = 0x000000c8u;
    }
L_000f1500:;
    {
        cpu->r[4] = rd32(0x000f1508u + + 0x7b8u);
    }
L_000f1504:;
    {
        cpu->r[14] = 0x000f1508u; fn_0018ba6c(cpu);
    }
L_000f1508:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f150c:;
    {
        cpu->r[14] = 0x000f1510u; fn_000fd648(cpu);
    }
L_000f1510:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1514:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1518:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f151c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f1520:;
    {
        wr32(cpu->r[3] + + 0x490u, cpu->r[8]);
    }
L_000f1524:;
    {
        cpu->r[14] = 0x000f1528u; fn_0018de14(cpu);
    }
L_000f1528:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_000f152c:;
    {
        cpu->r[3] = 0x00001d6cu;
    }
L_000f1530:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1534:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f1538:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000f153c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_000f1540:;
    {
        cpu->r[14] = 0x000f1544u; fn_000964c8(cpu);
    }
L_000f1544:;
    {
        cpu->r[3] = 0x0000849cu;
    }
L_000f1548:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
    }
L_000f154c:;
    {
        wr8(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000f1550:;
    {
        goto L_000f0f30;
    }
L_000f1554:;
    {
        cpu->r[14] = 0x000f1558u; fn_000979a0(cpu);
    }
L_000f1558:;
    {
        cpu->r[14] = 0x000f155cu; fn_00093f98(cpu);
    }
L_000f155c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f15a0;
        }
    }
L_000f1564:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1568:;
    {
        cpu->r[3] = 0x00001d34u;
    }
L_000f156c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000f1570:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f1574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f15a4;
        }
    }
L_000f1578:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f157c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000f1580:;
    {
        cpu->r[14] = 0x000f1584u; fn_00099b28(cpu);
    }
L_000f1584:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1588:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f158c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000f1590:;
    {
        cpu->r[14] = 0x000f1594u; fn_000a2764(cpu);
    }
L_000f1594:;
    {
        cpu->r[14] = 0x000f1598u; fn_000979a0(cpu);
    }
L_000f1598:;
    {
        cpu->r[14] = 0x000f159cu; fn_00093fb8(cpu);
    }
L_000f159c:;
    {
        cpu->r[14] = 0x000f15a0u; fn_000a0ea4(cpu);
    }
L_000f15a0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f15a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f15a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f15ac:;
    {
        cpu->r[14] = 0x000f15b0u; fn_0009e9e8(cpu);
    }
L_000f15b0:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f15b4:;
    {
        cpu->r[3] = 0x00006780u;
    }
L_000f15b8:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_000f15bc:;
    {
        cpu->r[7] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000f15c0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f15c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f17a4;
        }
    }
L_000f15c8:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_000f15cc:;
    {
        cpu->r[8] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000f15d0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000f15d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f191c;
        }
    }
L_000f15d8:;
    {
        cpu->r[6] = 0x0000675cu;
    }
L_000f15dc:;
    {
        cpu->r[4] = rd8(cpu->r[10] + cpu->r[6]);
    }
L_000f15e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000f15e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1bf0;
        }
    }
L_000f15e8:;
    {
        cpu->r[3] = 0x00006781u;
    }
L_000f15ec:;
    {
        cpu->r[2] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000f15f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f15f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f19dc;
        }
    }
L_000f15f8:;
    {
        wr8(cpu->r[10] + cpu->r[3], cpu->r[4]);
    }
L_000f15fc:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f1600:;
    {
        cpu->r[14] = 0x000f1604u; fn_0018ba6c(cpu);
    }
L_000f1604:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f1608:;
    {
        cpu->r[14] = 0x000f160cu; fn_0010ff40(cpu);
    }
L_000f160c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f1610:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f1614:;
    {
        cpu->r[14] = 0x000f1618u; fn_000f36dc(cpu);
    }
L_000f1618:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000f161c:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_000f1620:;
    {
        cpu->r[14] = 0x000f1624u; fn_0018ba6c(cpu);
    }
L_000f1624:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1628:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f162c:;
    {
        cpu->r[14] = 0x000f1630u; fn_001ade44(cpu);
    }
L_000f1630:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f1634:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1638:;
    {
        cpu->r[14] = 0x000f163cu; fn_000f361c(cpu);
    }
L_000f163c:;
    {
        cpu->r[0] = 0x000009acu;
    }
L_000f1640:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000f1644:;
    {
        cpu->r[14] = 0x000f1648u; fn_0018ba6c(cpu);
    }
L_000f1648:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f164c:;
    {
        cpu->r[14] = 0x000f1650u; fn_00199618(cpu);
    }
L_000f1650:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f1654:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f165c:;
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
L_000f1660:;
    {
        return fn_000f361c(cpu);
    }
L_000f1664:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1668:;
    {
        cpu->r[14] = 0x000f166cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f166c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1204;
        }
    }
L_000f1674:;
    {
        cpu->r[4] = rd32(0x000f167cu + + 0x664u);
    }
L_000f1678:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f167c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1680:;
    {
        cpu->r[14] = 0x000f1684u; fn_00189f48(cpu);
    }
L_000f1684:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1688:;
    {
        cpu->r[14] = 0x000f168cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f168c:;
    {
        cpu->r[3] = rd32(0x000f1694u + + 0x654u);
    }
L_000f1690:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1694:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f1698:;
    {
        cpu->r[3] = rd32(0x000f16a0u + + 0x638u);
    }
L_000f169c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f16a0:;
    {
        cpu->r[14] = 0x000f16a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f16a4:;
    {
        goto L_000f1208;
    }
L_000f16a8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f16ac:;
    {
        cpu->r[14] = 0x000f16b0u; fn_000979a0(cpu);
    }
L_000f16b0:;
    {
        cpu->r[3] = 0x000084f9u;
    }
L_000f16b4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000f16b8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x39u);
    }
L_000f16bc:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000f16c0:;
    {
        cpu->r[14] = 0x000f16c4u; fn_000979a0(cpu);
    }
L_000f16c4:;
    {
        wr8(cpu->r[0] + + 0x39u, cpu->r[10]);
    }
L_000f16c8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000f16cc:;
    {
        cpu->r[14] = 0x000f16d0u; fn_00096b9c(cpu);
    }
L_000f16d0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000f16d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f16d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1a00;
        }
    }
L_000f16dc:;
    {
        cpu->r[14] = 0x000f16e0u; fn_000979a0(cpu);
    }
L_000f16e0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f16e4:;
    {
        cpu->r[8] = 0x00001bc4u;
    }
L_000f16e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000f16ec:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000f16f0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f16f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000f16f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1730;
        }
    }
L_000f16fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000007u, 1, 1);
    }
L_000f1700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1b18;
        }
    }
L_000f1704:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000f1708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1b18;
        }
    }
L_000f170c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_000f1710:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1714:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f1718:;
    {
        cpu->r[14] = 0x000f171cu; fn_0009e9e8(cpu);
    }
L_000f171c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1720:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f1724:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000f1728:;
    {
        cpu->r[14] = 0x000f172cu; fn_000af09c(cpu);
    }
L_000f172c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1730:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f1734:;
    {
        cpu->r[14] = 0x000f1738u; fn_0018ba6c(cpu);
    }
L_000f1738:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f173c:;
    {
        cpu->r[2] = 0x0000094fu;
    }
L_000f1740:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1744:;
    {
        cpu->r[14] = 0x000f1748u; imp_memset(cpu); /* memset */
    }
L_000f1748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f174c:;
    {
        cpu->r[14] = 0x000f1750u; fn_0010ffa8(cpu);
    }
L_000f1750:;
    {
        cpu->r[3] = rd32(0x000f1758u + + 0x58cu);
    }
L_000f1754:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1758:;
    {
        goto L_000f13e0;
    }
L_000f175c:;
    {
        cpu->r[14] = 0x000f1760u; fn_000979a0(cpu);
    }
L_000f1760:;
    {
        cpu->r[14] = 0x000f1764u; fn_00093f98(cpu);
    }
L_000f1764:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000f1768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1c84;
        }
    }
L_000f176c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1770:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000f1774:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f1778:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f177c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f1780:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_000f1784:;
    {
        cpu->r[14] = 0x000f1788u; fn_0018ba6c(cpu);
    }
L_000f1788:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f178c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1790:;
    {
        goto L_000f13c8;
    }
L_000f1794:;
    {
        cpu->r[14] = 0x000f1798u; fn_000979a0(cpu);
    }
L_000f1798:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000f179c:;
    {
        cpu->r[14] = 0x000f17a0u; fn_00093f90(cpu);
    }
L_000f17a0:;
    {
        goto L_000f13b4;
    }
L_000f17a4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f17a8:;
    {
        cpu->r[14] = 0x000f17acu; fn_0018ba6c(cpu);
    }
L_000f17ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f17b0:;
    {
        cpu->r[14] = 0x000f17b4u; fn_0010ff40(cpu);
    }
L_000f17b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f17b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f17bc:;
    {
        cpu->r[14] = 0x000f17c0u; fn_000f36dc(cpu);
    }
L_000f17c0:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000f17c4:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_000f17c8:;
    {
        cpu->r[14] = 0x000f17ccu; fn_0018ba6c(cpu);
    }
L_000f17cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f17d0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f17d4:;
    {
        cpu->r[14] = 0x000f17d8u; fn_001ade44(cpu);
    }
L_000f17d8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f17dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f17e0:;
    {
        cpu->r[14] = 0x000f17e4u; fn_000f361c(cpu);
    }
L_000f17e4:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_000f17e8:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_000f17ec:;
    {
        cpu->r[14] = 0x000f17f0u; fn_0018ba6c(cpu);
    }
L_000f17f0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f17f4:;
    {
        cpu->r[14] = 0x000f17f8u; fn_0019a244(cpu);
    }
L_000f17f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f17fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1800:;
    {
        cpu->r[14] = 0x000f1804u; fn_000f361c(cpu);
    }
L_000f1804:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000f1808:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000f180c:;
    {
        cpu->r[14] = 0x000f1810u; fn_001933d4(cpu);
    }
L_000f1810:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_000f1814:;
    {
        cpu->r[3] = 0x00006782u;
    }
L_000f1818:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_000f181c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f1820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1c60;
        }
    }
L_000f1824:;
    {
        cpu->r[3] = 0x00006783u;
    }
L_000f1828:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_000f182c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f1830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1a30;
        }
    }
L_000f1834:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_000f1838:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000f183c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f1840:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x8au);
    }
L_000f1844:;
    {
        wr8(cpu->r[0] + + 0x90u, cpu->r[3]);
    }
L_000f1848:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f184c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1cb4;
        }
    }
L_000f1850:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1854:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_000f1858:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_000f185c:;
    {
        cpu->r[14] = 0x000f1860u; fn_0018ba6c(cpu);
    }
L_000f1860:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f1864:;
    {
        cpu->r[14] = 0x000f1868u; fn_0019ac34(cpu);
    }
L_000f1868:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f186c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1870:;
    {
        cpu->r[14] = 0x000f1874u; fn_000f361c(cpu);
    }
L_000f1874:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000f1878:;
    {
        cpu->r[3] = 0x00006783u;
    }
L_000f187c:;
    {
        cpu->r[7] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000f1880:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f1884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1be4;
        }
    }
L_000f1888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f188c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000f1890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f1894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1c94;
        }
    }
L_000f1898:;
    {
        cpu->r[0] = 0x00000990u;
    }
L_000f189c:;
    {
        cpu->r[14] = 0x000f18a0u; fn_0018ba6c(cpu);
    }
L_000f18a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f18a4:;
    {
        cpu->r[12] = 0x000004c1u;
    }
L_000f18a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f18ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f18b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000f18b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x000000afu, 1, 0);
    }
L_000f18b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000f18bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000f18c0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f18c4:;
    {
        cpu->r[14] = 0x000f18c8u; fn_001239a4(cpu);
    }
L_000f18c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f18cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f18d0:;
    {
        cpu->r[14] = 0x000f18d4u; fn_000f361c(cpu);
    }
L_000f18d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f18d8:;
    {
        cpu->r[0] = 0x000009c8u;
    }
L_000f18dc:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000f18e0:;
    {
        cpu->r[14] = 0x000f18e4u; fn_0018ba6c(cpu);
    }
L_000f18e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f18e8:;
    {
        cpu->r[14] = 0x000f18ecu; fn_0019bd08(cpu);
    }
L_000f18ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f18f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f18f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f18f8:;
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
L_000f18fc:;
    {
        return fn_000f361c(cpu);
    }
L_000f1900:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1904:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f1908:;
    {
        cpu->r[14] = 0x000f190cu; fn_000a3410(cpu);
    }
L_000f190c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1910:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000f1914:;
    {
        cpu->r[14] = 0x000f1918u; fn_0018cbe8(cpu);
    }
L_000f1918:;
    {
        goto L_000f13b4;
    }
L_000f191c:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f1920:;
    {
        cpu->r[14] = 0x000f1924u; fn_0018ba6c(cpu);
    }
L_000f1924:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f1928:;
    {
        cpu->r[14] = 0x000f192cu; fn_0010ff40(cpu);
    }
L_000f192c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f1930:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f1934:;
    {
        cpu->r[14] = 0x000f1938u; fn_000f36dc(cpu);
    }
L_000f1938:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000f193c:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_000f1940:;
    {
        cpu->r[14] = 0x000f1944u; fn_0018ba6c(cpu);
    }
L_000f1944:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f1948:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f194c:;
    {
        cpu->r[14] = 0x000f1950u; fn_001ade44(cpu);
    }
L_000f1950:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f1954:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f1958:;
    {
        cpu->r[14] = 0x000f195cu; fn_000f361c(cpu);
    }
L_000f195c:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000f1960:;
    {
        cpu->r[3] = 0x000063c1u;
    }
L_000f1964:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000f1968:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f196c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000f1970:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000f1974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f1978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1c3c;
        }
    }
L_000f197c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1980:;
    {
        cpu->r[2] = 0x0000675eu;
    }
L_000f1984:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1988:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000f198c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1990:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_000f1994:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000f1998:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f199c:;
    {
        cpu->r[2] = 0x00005f54u;
    }
L_000f19a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000f19a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000f19a8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000f19ac:;
    {
        cpu->r[14] = 0x000f19b0u; fn_0018ba6c(cpu);
    }
L_000f19b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f19b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f19b8:;
    {
        cpu->r[14] = 0x000f19bcu; fn_001aeb50(cpu);
    }
L_000f19bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f19c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f19c4:;
    {
        cpu->r[14] = 0x000f19c8u; fn_000f361c(cpu);
    }
L_000f19c8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000f19cc:;
    {
        cpu->r[3] = 0x0000675du;
    }
L_000f19d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f19d4:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f19d8:;
    {
        goto L_000f1010;
    }
L_000f19dc:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f19e0:;
    {
        cpu->r[14] = 0x000f19e4u; fn_0018ba6c(cpu);
    }
L_000f19e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f19e8:;
    {
        cpu->r[14] = 0x000f19ecu; fn_0010ff40(cpu);
    }
L_000f19ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f19f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f19f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f19f8:;
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
L_000f19fc:;
    {
        return fn_000f36dc(cpu);
    }
L_000f1a00:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000f1a04:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1a08:;
    {
        cpu->r[14] = 0x000f1a0cu; fn_0018ba6c(cpu);
    }
L_000f1a0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f1a10:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f1a14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1a18:;
    {
        cpu->r[14] = 0x000f1a1cu; fn_0012234c(cpu);
    }
L_000f1a1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f1a20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1a24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f1a28:;
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
L_000f1a2c:;
    {
        return fn_000f36dc(cpu);
    }
L_000f1a30:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_000f1a34:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000f1a38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000f1a3c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000f1a40:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000f1a44:;
    {
        goto L_000f1a94;
    }
L_000f1a48:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x8u);
    }
L_000f1a4c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000f1a50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1a54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1a60;
        }
    }
L_000f1a58:;
    {
        cpu->r[14] = 0x000f1a5cu; fn_0018ba20(cpu);
    }
L_000f1a5c:;
    {
        wr32(cpu->r[7], cpu->r[8]);
    }
L_000f1a60:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f1a64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1a74;
        }
    }
L_000f1a6c:;
    {
        cpu->r[14] = 0x000f1a70u; fn_0018ba20(cpu);
    }
L_000f1a70:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_000f1a74:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_000f1a78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1a88;
        }
    }
L_000f1a80:;
    {
        cpu->r[14] = 0x000f1a84u; fn_0018ba20(cpu);
    }
L_000f1a84:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[8]);
    }
L_000f1a88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1a8c:;
    {
        cpu->r[14] = 0x000f1a90u; fn_0018ba20(cpu);
    }
L_000f1a90:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000f1a94:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_000f1a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0001e400u, 0, 0);
    }
L_000f1a9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000380u, 0, 0);
    }
L_000f1aa0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000f1aa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1a48;
        }
    }
L_000f1aa8:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_000f1aac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000f1ab0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000f1ab4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f1ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1adc;
        }
    }
L_000f1abc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f1ac0:;
    {
        cpu->r[8] = rd32(cpu->r[0]);
    }
L_000f1ac4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000f1ac8:;
    {
        cpu->r[14] = 0x000f1accu; fn_002082a8(cpu);
    }
L_000f1acc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_000f1ad0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1ac0;
        }
    }
L_000f1ad8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000f1adc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000f1ae0:;
    {
        cpu->r[0] = 0x0000e780u;
    }
L_000f1ae4:;
    {
        cpu->r[2] = 0x0000e784u;
    }
L_000f1ae8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000f1aec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000f1af0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000f1af4:;
    {
        wr32(cpu->r[7] + cpu->r[0], cpu->r[3]);
    }
L_000f1af8:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_000f1afc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000f1b00:;
    {
        cpu->r[14] = 0x000f1b04u; fn_001933d4(cpu);
    }
L_000f1b04:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000f1b08:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_000f1b0c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f1b10:;
    {
        cpu->r[14] = 0x000f1b14u; fn_001c478c(cpu);
    }
L_000f1b14:;
    {
        goto L_000f1850;
    }
L_000f1b18:;
    {
        cpu->r[14] = 0x000f1b1cu; fn_00097ad0(cpu);
    }
L_000f1b1c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000f1b20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f1b24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1b28:;
    {
        cpu->r[14] = 0x000f1b2cu; fn_00096a08(cpu);
    }
L_000f1b2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f1b30:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000f1b34:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1b38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1b3c:;
    {
        cpu->r[14] = 0x000f1b40u; fn_0018aa58(cpu);
    }
L_000f1b40:;
    {
        cpu->r[7] = 0x00001bc4u;
    }
L_000f1b44:;
    {
        cpu->r[14] = 0x000f1b48u; fn_00097ad0(cpu);
    }
L_000f1b48:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_000f1b4c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f1b50:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1b54:;
    {
        cpu->r[14] = 0x000f1b58u; fn_00096a08(cpu);
    }
L_000f1b58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1b5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1b60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1b64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1b68:;
    {
        cpu->r[14] = 0x000f1b6cu; fn_0018aa58(cpu);
    }
L_000f1b6c:;
    {
        cpu->r[14] = 0x000f1b70u; fn_00097ad0(cpu);
    }
L_000f1b70:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000f1b74:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f1b78:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1b7c:;
    {
        cpu->r[14] = 0x000f1b80u; fn_00096a08(cpu);
    }
L_000f1b80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1b84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1b88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1b8c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f1b90:;
    {
        cpu->r[14] = 0x000f1b94u; fn_0018aa58(cpu);
    }
L_000f1b94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1b98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1b9c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f1ba0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000f1ba4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_000f1ba8:;
    {
        cpu->r[14] = 0x000f1bacu; fn_0009e9e8(cpu);
    }
L_000f1bac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1bb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1bb4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000f1bb8:;
    {
        cpu->r[14] = 0x000f1bbcu; fn_000af09c(cpu);
    }
L_000f1bbc:;
    {
        cpu->r[14] = 0x000f1bc0u; fn_00097ad0(cpu);
    }
L_000f1bc0:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_000f1bc4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f1bc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f1bcc:;
    {
        cpu->r[14] = 0x000f1bd0u; fn_0018aa58(cpu);
    }
L_000f1bd0:;
    {
        cpu->r[14] = 0x000f1bd4u; fn_00097ad0(cpu);
    }
L_000f1bd4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1bd8:;
    {
        cpu->r[14] = 0x000f1bdcu; fn_0018b5c8(cpu);
    }
L_000f1bdc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f1be0:;
    {
        goto L_000f1730;
    }
L_000f1be4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f1be8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000f1bec:;
    {
        goto L_000f1010;
    }
L_000f1bf0:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f1bf4:;
    {
        cpu->r[14] = 0x000f1bf8u; fn_0018ba6c(cpu);
    }
L_000f1bf8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1bfc:;
    {
        cpu->r[14] = 0x000f1c00u; fn_0010ff40(cpu);
    }
L_000f1c00:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1c04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f1c08:;
    {
        cpu->r[14] = 0x000f1c0cu; fn_000f36dc(cpu);
    }
L_000f1c0c:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000f1c10:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_000f1c14:;
    {
        cpu->r[14] = 0x000f1c18u; fn_0018ba6c(cpu);
    }
L_000f1c18:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f1c1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1c20:;
    {
        cpu->r[14] = 0x000f1c24u; fn_001014a0(cpu);
    }
L_000f1c24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1c28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1c2c:;
    {
        cpu->r[14] = 0x000f1c30u; fn_000f361c(cpu);
    }
L_000f1c30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f1c34:;
    {
        wr8(cpu->r[3] + cpu->r[6], cpu->r[8]);
    }
L_000f1c38:;
    {
        goto L_000f1010;
    }
L_000f1c3c:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_000f1c40:;
    {
        cpu->r[14] = 0x000f1c44u; fn_0018ba6c(cpu);
    }
L_000f1c44:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f1c48:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000f1c4c:;
    {
        cpu->r[14] = 0x000f1c50u; fn_001abc1c(cpu);
    }
L_000f1c50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f1c54:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f1c58:;
    {
        cpu->r[14] = 0x000f1c5cu; fn_000f361c(cpu);
    }
L_000f1c5c:;
    {
        goto L_000f197c;
    }
L_000f1c60:;
    {
        cpu->r[0] = 0x0000096cu;
    }
L_000f1c64:;
    {
        cpu->r[14] = 0x000f1c68u; fn_0018ba6c(cpu);
    }
L_000f1c68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1c6c:;
    {
        cpu->r[14] = 0x000f1c70u; fn_0019d45c(cpu);
    }
L_000f1c70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f1c74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f1c78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f1c7c:;
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
L_000f1c80:;
    {
        return fn_000f361c(cpu);
    }
L_000f1c84:;
    {
        cpu->r[14] = 0x000f1c88u; fn_000979a0(cpu);
    }
L_000f1c88:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000f1c8c:;
    {
        cpu->r[14] = 0x000f1c90u; fn_00093f90(cpu);
    }
L_000f1c90:;
    {
        goto L_000f176c;
    }
L_000f1c94:;
    {
        cpu->r[0] = 0x000009b8u;
    }
L_000f1c98:;
    {
        cpu->r[14] = 0x000f1c9cu; fn_0018ba6c(cpu);
    }
L_000f1c9c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f1ca0:;
    {
        cpu->r[14] = 0x000f1ca4u; fn_0019f5a8(cpu);
    }
L_000f1ca4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f1ca8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f1cac:;
    {
        cpu->r[14] = 0x000f1cb0u; fn_000f361c(cpu);
    }
L_000f1cb0:;
    {
        goto L_000f18d4;
    }
L_000f1cb4:;
    {
        cpu->r[14] = 0x000f1cb8u; fn_001c4600(cpu);
    }
L_000f1cb8:;
    {
        goto L_000f1850;
    }
}

/* _ZN15GS_TrailerMovie8isKindOfEi @ 000f1cec (arm) */
void fn_000f1cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1cec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 1);
    }
L_000f1cf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f1cf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f1cf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_TrailerMovie7ReleaseEv @ 000f1cfc (arm) */
void fn_000f1cfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1cfc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_7 @ 000f1d00 (arm) */
void fn_000f1d00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1d00:;
    {
        cpu->r[3] = rd32(0x000f1d08u + + 0x20u);
    }
L_000f1d04:;
    {
        cpu->r[1] = rd32(0x000f1d0cu + + 0x20u);
    }
L_000f1d08:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1d10u, cpu->r[3], 0, 0);
    }
L_000f1d0c:;
    {
        cpu->r[2] = rd32(0x000f1d14u + + 0x1cu);
    }
L_000f1d10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f1d14:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f1d1cu, cpu->r[2], 0, 0);
    }
L_000f1d18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1d1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000f1d20:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000f1d24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_TrailerMovieD1Ev @ 000f1d34 (arm) */
void fn_000f1d34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1d34:;
    {
        cpu->r[3] = rd32(0x000f1d3cu + + 0x24u);
    }
L_000f1d38:;
    {
        cpu->r[2] = rd32(0x000f1d40u + + 0x24u);
    }
L_000f1d3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1d44u, cpu->r[3], 0, 0);
    }
L_000f1d40:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f1d44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1d48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1d4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f1d50:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f1d54:;
    {
        cpu->r[14] = 0x000f1d58u; fn_000ec084(cpu);
    }
L_000f1d58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1d5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1d60u)) return;
    }
}

/* _ZN15GS_TrailerMovie6RenderEv @ 000f1d68 (arm) */
void fn_000f1d68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1d68:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f1d6c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1d70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f1d74:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f1d78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f1d7c:;
    {
        cpu->r[14] = 0x000f1d80u; imp_glClearColor(cpu); /* glClearColor */
    }
L_000f1d80:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000f1d84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000f1d88:;
    {
        imp_glClear(cpu); /* tail glClear */ return;
    }
}

/* _ZN15GS_TrailerMovie6UpdateEv @ 000f1d8c (arm) */
void fn_000f1d8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1d8c:;
    {
        cpu->r[3] = rd32(0x000f1d94u + + 0x68u);
    }
L_000f1d90:;
    {
        cpu->r[2] = rd32(0x000f1d98u + + 0x68u);
    }
L_000f1d94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1d9cu, cpu->r[3], 0, 0);
    }
L_000f1d98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f1d9c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1da0:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000f1da4:;
    {
        cpu->r[2] = 0x00001d72u;
    }
L_000f1da8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000f1dac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f1db0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1db4u)) return;
        }
    }
L_000f1db4:;
    {
        cpu->r[2] = rd32(0x000f1dbcu + + 0x48u);
    }
L_000f1db8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1dbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1dc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f1dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1dd8;
        }
    }
L_000f1dc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1dcc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1dd0:;
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
L_000f1dd4:;
    {
        return fn_000f34e8(cpu);
    }
L_000f1dd8:;
    {
        cpu->r[0] = 0x000000a4u;
    }
L_000f1ddc:;
    {
        cpu->r[14] = 0x000f1de0u; fn_0018ba6c(cpu);
    }
L_000f1de0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1de4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f1de8:;
    {
        cpu->r[14] = 0x000f1decu; fn_000f0d9c(cpu);
    }
L_000f1dec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1df0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f1df4:;
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
L_000f1df8:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN15GS_TrailerMovie6CreateEv @ 000f1e08 (arm) */
void fn_000f1e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1e08:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f1e0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f1e10:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f1e14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f1e18:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f1e1c:;
    {
        cpu->r[14] = 0x000f1e20u; imp_glClearColor(cpu); /* glClearColor */
    }
L_000f1e20:;
    {
        cpu->r[4] = rd32(0x000f1e28u + + 0x54u);
    }
L_000f1e24:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000f1e28:;
    {
        cpu->r[14] = 0x000f1e2cu; imp_glClear(cpu); /* glClear */
    }
L_000f1e2c:;
    {
        cpu->r[3] = rd32(0x000f1e34u + + 0x4cu);
    }
L_000f1e30:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f1e38u, cpu->r[4], 0, 0);
    }
L_000f1e34:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f1e38:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000f1e3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f1e40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1e4c;
        }
    }
L_000f1e44:;
    {
        cpu->r[14] = 0x000f1e48u; fn_000a48b0(cpu);
    }
L_000f1e48:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000f1e4c:;
    {
        cpu->r[3] = rd32(0x000f1e54u + + 0x30u);
    }
L_000f1e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f1e54:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000f1e58:;
    {
        cpu->r[14] = 0x000f1e5cu; fn_00073b98(cpu);
    }
L_000f1e5c:;
    {
        cpu->r[3] = rd32(0x000f1e64u + + 0x24u);
    }
L_000f1e60:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f1e64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f1e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f1e6c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f1e70:;
    {
        cpu->r[3] = 0x00001d72u;
    }
L_000f1e74:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f1e78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1e7cu)) return;
    }
}

/* _ZN15GS_TrailerMovieD0Ev @ 000f1e8c (arm) */
void fn_000f1e8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1e8c:;
    {
        cpu->r[3] = rd32(0x000f1e94u + + 0x2cu);
    }
L_000f1e90:;
    {
        cpu->r[2] = rd32(0x000f1e98u + + 0x2cu);
    }
L_000f1e94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1e9cu, cpu->r[3], 0, 0);
    }
L_000f1e98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f1e9c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1ea0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f1ea4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f1ea8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f1eac:;
    {
        cpu->r[14] = 0x000f1eb0u; fn_000ec084(cpu);
    }
L_000f1eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1eb4:;
    {
        cpu->r[14] = 0x000f1eb8u; fn_0018ba20(cpu);
    }
L_000f1eb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f1ebc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1ec0u)) return;
    }
}

/* _ZN11GS_LoadGame8isKindOfEi @ 000f1ec8 (arm) */
void fn_000f1ec8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1ec8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000023u, 1, 1);
    }
L_000f1ecc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f1ed0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f1ed4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_LoadGame14ForceTerminateEv @ 000f1ed8 (arm) */
void fn_000f1ed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1ed8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_8 @ 000f1edc (arm) */
void fn_000f1edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1edc:;
    {
        cpu->r[2] = rd32(0x000f1ee4u + + 0x28u);
    }
L_000f1ee0:;
    {
        cpu->r[1] = rd32(0x000f1ee8u + + 0x28u);
    }
L_000f1ee4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f1eecu, cpu->r[2], 0, 0);
    }
L_000f1ee8:;
    {
        cpu->r[3] = rd32(0x000f1ef0u + + 0x24u);
    }
L_000f1eec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000f1ef0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1ef8u, cpu->r[3], 0, 0);
    }
L_000f1ef4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f1ef8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_000f1efc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000046u, 1, 0);
    }
L_000f1f00:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f1f04:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000f1f08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z23applyRaduSpecialRequestRi @ 000f1f18 (arm) */
void fn_000f1f18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f1f18:;
    {
        cpu->r[2] = rd32(0x000f1f20u + + 0xf8u);
    }
L_000f1f1c:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_000f1f20:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f1f28u, cpu->r[2], 0, 0);
    }
L_000f1f24:;
    {
        cpu->r[3] = rd32(0x000f1f2cu + + 0xf0u);
    }
L_000f1f28:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000f1f2c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f1f30:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1f38u, cpu->r[3], 0, 0);
    }
L_000f1f34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f1f38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000002du, 1, 0);
    }
L_000f1f3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000f1f40:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000f1f7c;
        }
    }
L_000f1f44:;
    {
        cpu->r[2] = rd32(0x000f1f4cu + + 0xd4u);
    }
L_000f1f48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1f4c:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_000f1f50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1f54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1f58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f1f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1f88;
        }
    }
L_000f1f60:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_000f1f64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1f68:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000f1f6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000000bu;
        }
    }
L_000f1f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f1ffc;
        }
    }
L_000f1f74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f1f78:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f1f7cu)) return;
    }
L_000f1f7c:;
    {
        cpu->r[2] = rd32(0x000f1f84u + + 0x9cu);
    }
L_000f1f80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1f84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f1f88:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_000f1f8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f1f90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000f1f94:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000bu, 1, 1);
    }
L_000f1f98:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x00000c37u;
        }
    }
L_000f1f9c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000f1ffc;
        }
    }
L_000f1fa0:;
    {
        cpu->r[3] = rd32(0x000f1fa8u + + 0x7cu);
    }
L_000f1fa4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f1fa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1fb0u, cpu->r[3], 0, 0);
    }
L_000f1fac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f1fb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000c00u, 0, 0);
    }
L_000f1fb4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000f1fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2010;
        }
    }
L_000f1fbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f1fc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000015u, 1, 1);
    }
L_000f1fc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f1fac;
        }
    }
L_000f1fc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000088u, 0, 0);
    }
L_000f1fcc:;
    {
        cpu->r[1] = rd32(0x000f1fd4u + + 0x54u);
    }
L_000f1fd0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000f1fd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f1fd8:;
    {
        cpu->r[2] = rd32(0x000f1fe0u + + 0x4cu);
    }
L_000f1fdc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f1fe4u, cpu->r[1], 0, 0);
    }
L_000f1fe0:;
    {
        cpu->r[3] = rd32(0x000f1fe8u + + 0x48u);
    }
L_000f1fe4:;
    {
        cpu->r[12] = 0x000000ffu;
    }
L_000f1fe8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f1ff0u, cpu->r[2], 0, 0);
    }
L_000f1fec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f1ff0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f1ff8u, cpu->r[3], 0, 0);
    }
L_000f1ff4:;
    {
        cpu->r[14] = 0x000f1ff8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f1ff8:;
    {
        goto L_000f1f74;
    }
L_000f1ffc:;
    {
        cpu->r[3] = rd32(0x000f2004u + + 0x30u);
    }
L_000f2000:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f2008u, cpu->r[3], 0, 0);
    }
L_000f2004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f2008:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x58u);
    }
L_000f200c:;
    {
        goto L_000f1fa0;
    }
L_000f2010:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f2014:;
    {
        goto L_000f1f74;
    }
}

/* _ZN11GS_LoadGame6UpdateEv @ 000f2038 (arm) */
void fn_000f2038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f2038:;
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
L_000f203c:;
    {
        cpu->r[5] = rd32(0x000f2044u + + 0x1f4u);
    }
L_000f2040:;
    {
        cpu->r[6] = rd32(0x000f2048u + + 0x1f4u);
    }
L_000f2044:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f2048:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f2050u, cpu->r[5], 0, 0);
    }
L_000f204c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f2050:;
    {
        cpu->r[14] = 0x000f2054u; fn_0018ba64(cpu);
    }
L_000f2054:;
    {
        cpu->r[14] = 0x000f2058u; fn_0018ba68(cpu);
    }
L_000f2058:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f205c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x84u);
    }
L_000f2060:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000080u, 0, 0);
    }
L_000f2064:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x88u);
    }
L_000f2068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_000f206c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_000f2070:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000f2074:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000f2078:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f207c:;
    {
        cpu->r[14] = 0x000f2080u; fn_0009a2f0(cpu);
    }
L_000f2080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_000f2084:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_000f2088:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f208c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f21e4;
        }
    }
L_000f2090:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f2094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f20c0;
        }
    }
L_000f2098:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003bu, 1, 1);
    }
L_000f209c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f20a0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_000f20a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
        }
    }
L_000f20a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000f20ac:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x80u, cpu->r[2]);
        }
    }
L_000f20b0:;
    {
        cpu->r[14] = 0x000f20b4u; fn_0018ba64(cpu);
    }
L_000f20b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f20b8:;
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
L_000f20bc:;
    {
        return fn_0018ba68(cpu);
    }
L_000f20c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f20c4:;
    {
        cpu->r[1] = 0x00008889u;
    }
L_000f20c8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8888u << 16);
    }
L_000f20cc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4d8u);
    }
L_000f20d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f20d4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000f20d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000f20dc:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 3u, &shc), cpu->r[0], 1, 0);
    }
L_000f20e0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 4u, &shc), cpu->r[1], 1, 0);
    }
L_000f20e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000f20e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000f20ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000f20f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f20f4:;
    {
        wr8(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_000f20f8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f20fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x43cu);
    }
L_000f2100:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x438u);
    }
L_000f2104:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000f2108:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000009bu, 1, 1);
    }
L_000f210c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f216c;
        }
    }
L_000f2110:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f2114:;
    {
        cpu->r[10] = 0x00006f97u;
    }
L_000f2118:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x96f9u << 16);
    }
L_000f211c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000f2120:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000f2124:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f2128:;
    {
        cpu->r[14] = 0x000f212cu; fn_000964c8(cpu);
    }
L_000f212c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f2130:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f2134:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000f2138:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f213c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x438u);
    }
L_000f2140:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x43cu);
    }
L_000f2144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_000f2148:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x438u);
    }
L_000f214c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000009cu, 0, 0);
    }
L_000f2150:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000f2154:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_000f2158:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12]; cpu->r[12] = v;
    }
L_000f215c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_000f2160:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000f2164:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[0]);
    }
L_000f2168:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f2120;
        }
    }
L_000f216c:;
    {
        cpu->r[1] = 0x000084a8u;
    }
L_000f2170:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f2174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f2178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f20b0;
        }
    }
L_000f217c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f2180:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x490u);
    }
L_000f2184:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f2188:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000f218c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_000f2190:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f2194:;
    {
        cpu->r[14] = 0x000f2198u; fn_000fd248(cpu);
    }
L_000f2198:;
    {
        cpu->r[3] = rd32(0x000f21a0u + + 0xa0u);
    }
L_000f219c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f21a0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f21a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f21a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f21f4;
        }
    }
L_000f21ac:;
    {
        cpu->r[6] = rd32(0x000f21b4u + + 0x90u);
    }
L_000f21b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f21b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f21b8:;
    {
        cpu->r[14] = 0x000f21bcu; fn_0018b5c8(cpu);
    }
L_000f21bc:;
    {
        cpu->r[0] = 0x000001b8u;
    }
L_000f21c0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f21c4:;
    {
        cpu->r[14] = 0x000f21c8u; fn_0018ba6c(cpu);
    }
L_000f21c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f21cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f21d0:;
    {
        cpu->r[14] = 0x000f21d4u; fn_000eb2ac(cpu);
    }
L_000f21d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f21d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f21dc:;
    {
        cpu->r[14] = 0x000f21e0u; fn_000f36dc(cpu);
    }
L_000f21e0:;
    {
        goto L_000f20b0;
    }
L_000f21e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000f21e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f21ec:;
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
L_000f21f0:;
    {
        return fn_000f36d0(cpu);
    }
L_000f21f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f21f8:;
    {
        cpu->r[14] = 0x000f21fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f21fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f2200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f21ac;
        }
    }
L_000f2204:;
    {
        cpu->r[6] = rd32(0x000f220cu + + 0x38u);
    }
L_000f2208:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f220c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2210:;
    {
        cpu->r[14] = 0x000f2214u; fn_0018aa20(cpu);
    }
L_000f2214:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2218:;
    {
        cpu->r[14] = 0x000f221cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f221c:;
    {
        cpu->r[3] = rd32(0x000f2224u + + 0x24u);
    }
L_000f2220:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2224:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f2228:;
    {
        cpu->r[3] = rd32(0x000f2230u + + 0x1cu);
    }
L_000f222c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f2230:;
    {
        cpu->r[14] = 0x000f2234u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f2234:;
    {
        goto L_000f21b0;
    }
}

/* _ZN11GS_LoadGameD1Ev @ 000f2250 (arm) */
void fn_000f2250(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f2250:;
    {
        cpu->r[3] = rd32(0x000f2258u + + 0x24u);
    }
L_000f2254:;
    {
        cpu->r[2] = rd32(0x000f225cu + + 0x24u);
    }
L_000f2258:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f2260u, cpu->r[3], 0, 0);
    }
L_000f225c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f2260:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f2264:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f2268:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f226c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f2270:;
    {
        cpu->r[14] = 0x000f2274u; fn_000ec084(cpu);
    }
L_000f2274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f2278:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f227cu)) return;
    }
}

/* _ZN11GS_LoadGameD0Ev @ 000f2284 (arm) */
void fn_000f2284(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f2284:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f2288:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f228c:;
    {
        cpu->r[14] = 0x000f2290u; fn_000f2250(cpu);
    }
L_000f2290:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f2294:;
    {
        cpu->r[14] = 0x000f2298u; fn_0018ba20(cpu);
    }
L_000f2298:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f229c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f22a0u)) return;
    }
}

/* _ZN11GS_LoadGameD2Ev @ 000f22a0 (arm) */
void fn_000f22a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f22a0:;
    {
        cpu->r[3] = rd32(0x000f22a8u + + 0x24u);
    }
L_000f22a4:;
    {
        cpu->r[2] = rd32(0x000f22acu + + 0x24u);
    }
L_000f22a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f22b0u, cpu->r[3], 0, 0);
    }
L_000f22ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f22b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f22b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f22b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f22bc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f22c0:;
    {
        cpu->r[14] = 0x000f22c4u; fn_000ec084(cpu);
    }
L_000f22c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f22c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f22ccu)) return;
    }
}

/* _ZN11GS_LoadGameC1Eh @ 000f22d4 (arm) */
void fn_000f22d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f22d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f22d8:;
    {
        cpu->r[4] = rd32(0x000f22e0u + + 0x58u);
    }
L_000f22dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f22e0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000f22e4:;
    {
        cpu->r[14] = 0x000f22e8u; fn_000eaca4(cpu);
    }
L_000f22e8:;
    {
        cpu->r[1] = rd32(0x000f22f0u + + 0x4cu);
    }
L_000f22ec:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f22f4u, cpu->r[4], 0, 0);
    }
L_000f22f0:;
    {
        cpu->r[3] = rd32(0x000f22f8u + + 0x48u);
    }
L_000f22f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f22f8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000f22fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000f2300:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f2304:;
    {
        wr8(cpu->r[5] + + 0x8du, cpu->r[12]);
    }
L_000f2308:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000f230c:;
    {
        wr8(cpu->r[5] + + 0x8cu, cpu->r[2]);
    }
L_000f2310:;
    {
        wr8(cpu->r[5] + + 0x94u, cpu->r[2]);
    }
L_000f2314:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_000f2318:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f231c:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[7]);
    }
L_000f2320:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[2]);
    }
L_000f2324:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f2328:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[12]);
    }
L_000f232c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000f2330:;
    {
        wr32(cpu->r[6] + + 0x484u, cpu->r[12]);
    }
L_000f2334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f2338u)) return;
    }
}

/* _ZN11GS_LoadGameC2Eh @ 000f2344 (arm) */
void fn_000f2344(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f2344:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f2348:;
    {
        cpu->r[4] = rd32(0x000f2350u + + 0x58u);
    }
L_000f234c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f2350:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000f2354:;
    {
        cpu->r[14] = 0x000f2358u; fn_000eaca4(cpu);
    }
L_000f2358:;
    {
        cpu->r[1] = rd32(0x000f2360u + + 0x4cu);
    }
L_000f235c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f2364u, cpu->r[4], 0, 0);
    }
L_000f2360:;
    {
        cpu->r[3] = rd32(0x000f2368u + + 0x48u);
    }
L_000f2364:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f2368:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000f236c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000f2370:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f2374:;
    {
        wr8(cpu->r[5] + + 0x8du, cpu->r[12]);
    }
L_000f2378:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000f237c:;
    {
        wr8(cpu->r[5] + + 0x8cu, cpu->r[2]);
    }
L_000f2380:;
    {
        wr8(cpu->r[5] + + 0x94u, cpu->r[2]);
    }
L_000f2384:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_000f2388:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f238c:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[7]);
    }
L_000f2390:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[2]);
    }
L_000f2394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f2398:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[12]);
    }
L_000f239c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000f23a0:;
    {
        wr32(cpu->r[6] + + 0x484u, cpu->r[12]);
    }
L_000f23a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f23a8u)) return;
    }
}

/* _ZN11GS_LoadGame6CreateEv @ 000f23b4 (arm) */
void fn_000f23b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f23b4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x88u);
    }
L_000f23b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f23bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f23c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f23c4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000f23c8:;
    {
        cpu->r[4] = rd32(0x000f23d0u + + 0x1b0u);
    }
L_000f23cc:;
    {
        cpu->r[1] = 0x0000003du;
    }
L_000f23d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f23d4:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_000f23d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f23e0u, cpu->r[4], 0, 0);
    }
L_000f23dc:;
    {
        cpu->r[1] = 0x0000007au;
    }
L_000f23e0:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[1]);
    }
L_000f23e4:;
    {
        wr8(cpu->r[2] + + 0x406u, cpu->r[3]);
    }
L_000f23e8:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_000f23ec:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[3]);
    }
L_000f23f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f24c0;
        }
    }
L_000f23f4:;
    {
        cpu->r[7] = rd32(0x000f23fcu + + 0x188u);
    }
L_000f23f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f23fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f2400:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f2404:;
    {
        cpu->r[6] = rd32(0x000f240cu + + 0x17cu);
    }
L_000f2408:;
    {
        cpu->r[14] = 0x000f240cu; fn_00099b20(cpu);
    }
L_000f240c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f2410:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f2414:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000f2418:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000f241c:;
    {
        cpu->r[14] = 0x000f2420u; fn_000964c8(cpu);
    }
L_000f2420:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2424:;
    {
        cpu->r[3] = 0x0000849cu;
    }
L_000f2428:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
    }
L_000f242c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_000f2430:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f2434:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f247c;
        }
    }
L_000f243c:;
    {
        cpu->r[5] = rd32(0x000f2444u + + 0x148u);
    }
L_000f2440:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f2444:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f2448:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f244c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f2450:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2454:;
    {
        cpu->r[14] = 0x000f2458u; fn_0018aa58(cpu);
    }
L_000f2458:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f245c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f2460:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2534;
        }
    }
L_000f2468:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f246c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f2470:;
    {
        cpu->r[14] = 0x000f2474u; fn_0018b5c8(cpu);
    }
L_000f2474:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f2478:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f247cu)) return;
    }
L_000f247c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2480:;
    {
        cpu->r[14] = 0x000f2484u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f2484:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f2488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f243c;
        }
    }
L_000f248c:;
    {
        cpu->r[5] = rd32(0x000f2494u + + 0xf8u);
    }
L_000f2490:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f2494:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2498:;
    {
        cpu->r[14] = 0x000f249cu; fn_0018aa20(cpu);
    }
L_000f249c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f24a0:;
    {
        cpu->r[14] = 0x000f24a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f24a4:;
    {
        cpu->r[3] = rd32(0x000f24acu + + 0xe4u);
    }
L_000f24a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f24ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f24b0:;
    {
        cpu->r[3] = rd32(0x000f24b8u + + 0xdcu);
    }
L_000f24b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f24b8:;
    {
        cpu->r[14] = 0x000f24bcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f24bc:;
    {
        goto L_000f2440;
    }
L_000f24c0:;
    {
        cpu->r[3] = rd32(0x000f24c8u + + 0xd0u);
    }
L_000f24c4:;
    {
        cpu->r[7] = rd32(0x000f24ccu + + 0xb8u);
    }
L_000f24c8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f24cc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f24d0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f24d4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f24d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000f24dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f24e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f24e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003du, 0, 0);
    }
L_000f24e8:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_000f24ec:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000f24f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f24f4:;
    {
        cpu->r[14] = 0x000f24f8u; fn_00096b5c(cpu);
    }
L_000f24f8:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_000f24fc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f2500:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000f2504:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_000f2508:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000f250c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f2510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2400;
        }
    }
L_000f2514:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000f2518:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x7cu);
    }
L_000f251c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000f2520:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f2524:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f2528:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000f252c:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[2]);
    }
L_000f2530:;
    {
        goto L_000f2400;
    }
L_000f2534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2538:;
    {
        cpu->r[14] = 0x000f253cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f253c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f2540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2468;
        }
    }
L_000f2544:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2548:;
    {
        cpu->r[14] = 0x000f254cu; fn_0018aa20(cpu);
    }
L_000f254c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2550:;
    {
        cpu->r[14] = 0x000f2554u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f2554:;
    {
        cpu->r[3] = rd32(0x000f255cu + + 0x34u);
    }
L_000f2558:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f255c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2560:;
    {
        cpu->r[3] = rd32(0x000f2568u + + 0x2cu);
    }
L_000f2564:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2568:;
    {
        cpu->r[14] = 0x000f256cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f256c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f2570:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f2574:;
    {
        cpu->r[14] = 0x000f2578u; fn_0018b5c8(cpu);
    }
L_000f2578:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f257c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f2580u)) return;
    }
}

/* _ZN11GS_LoadGame6RenderEv @ 000f259c (arm) */
void fn_000f259c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f259c:;
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
L_000f25a0:;
    {
        cpu->r[4] = rd32(0x000f25a8u + + 0xd7cu);
    }
L_000f25a4:;
    {
        cpu->r[3] = rd32(0x000f25acu + + 0xd7cu);
    }
L_000f25a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000026c0u, 1, 0);
    }
L_000f25ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f25b4u, cpu->r[4], 0, 0);
    }
L_000f25b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000f25b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f25b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f25bc:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000f25c0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000f25c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f299c;
        }
    }
L_000f25c8:;
    {
        cpu->r[10] = rd32(0x000f25d0u + + 0xd5cu);
    }
L_000f25cc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f25d0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f25d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f25d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2a20;
        }
    }
L_000f25dc:;
    {
        cpu->r[6] = rd32(0x000f25e4u + + 0xd4cu);
    }
L_000f25e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f25e4:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f25e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f25ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f25f0:;
    {
        cpu->r[14] = 0x000f25f4u; fn_0018aa44(cpu);
    }
L_000f25f4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f25f8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000f25fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2600:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000f2604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f29e4;
        }
    }
L_000f2608:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f260c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f2610:;
    {
        cpu->r[14] = 0x000f2614u; fn_00096a08(cpu);
    }
L_000f2614:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2618:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f261c:;
    {
        cpu->r[9] = rd32(0x000f2624u + + 0xd10u);
    }
L_000f2620:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2624:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2628:;
    {
        cpu->r[14] = 0x000f262cu; fn_0018aa44(cpu);
    }
L_000f262c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f2630:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000f2634:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f2638:;
    {
        cpu->r[14] = 0x000f263cu; fn_000960f4(cpu);
    }
L_000f263c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f2640:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000f2644:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f29a8;
        }
    }
L_000f264c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f2650:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f2654:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f2658:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f265c:;
    {
        cpu->r[14] = 0x000f2660u; fn_0018aa44(cpu);
    }
L_000f2660:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f2664:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f2668:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000f266c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000f2670:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000f2674:;
    {
        cpu->r[14] = 0x000f2678u; fn_000ad8a0(cpu);
    }
L_000f2678:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f267c:;
    {
        cpu->r[1] = 0x000081b5u;
    }
L_000f2680:;
    {
        cpu->r[0] = rd32(0x000f2688u + + 0xcb0u);
    }
L_000f2684:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x1b4eu << 16);
    }
L_000f2688:;
    {
        cpu->r[11] = rd32(0x000f2690u + + 0xcacu);
    }
L_000f268c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f2690:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000f2694:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000f2698:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_000f269c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000f26a0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f26a4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f26a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000014u, 1, 0);
    }
L_000f26ac:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000f26b0:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 7u, &shc), cpu->r[2], 1, 0);
    }
L_000f26b4:;
    {
        cpu->r[1] = 0x000004b0u;
    }
L_000f26b8:;
    {
        uint32_t v = cpu->r[3] - cpu->r[1] * cpu->r[2]; cpu->r[3] = v;
    }
L_000f26bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000258u, 1, 1);
    }
L_000f26c0:;
    {
        cpu->r[3] = rd32(0x000f26c8u + + 0xc78u);
    }
L_000f26c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000f26c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f26cc:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000f26d0:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_000f26d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f26d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000f26dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f26e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000f26e4:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_000f26e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f26ec:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f26f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000f26f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000f26f8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[3], cpu->r[2]);
        }
    }
L_000f26fc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8du);
    }
L_000f2700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f2704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f2aac;
        }
    }
L_000f2708:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f270c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003cu, 1, 1);
    }
L_000f2710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f315c;
        }
    }
L_000f2714:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x8cu);
    }
L_000f2718:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f271c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f2a64;
        }
    }
L_000f2720:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f2724:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x7cu);
    }
L_000f2728:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f272c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2994;
        }
    }
L_000f2730:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f2734:;
    {
        cpu->r[0] = 0x00000013u;
    }
L_000f2738:;
    {
        cpu->r[14] = 0x000f273cu; fn_000aeb28(cpu);
    }
L_000f273c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00002440u, 0, 0);
    }
L_000f2740:;
    {
        cpu->r[1] = rd32(0x000f2748u + + 0xbfcu);
    }
L_000f2744:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000020u, 0, 0);
    }
L_000f2748:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f2750u, cpu->r[1], 0, 0);
    }
L_000f274c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f2750:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2754:;
    {
        cpu->r[14] = 0x000f2758u; fn_000ae830(cpu);
    }
L_000f2758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000026c0u, 0, 0);
    }
L_000f275c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000026c0u, 0, 0);
    }
L_000f2760:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000f2764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f2768:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f276c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f2770:;
    {
        cpu->r[14] = 0x000f2774u; fn_000aa404(cpu);
    }
L_000f2774:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f2778:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000f277c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 30u, &shc); cpu->r[3] = v;
    }
L_000f2780:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000f2784:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_000f2788:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000f278c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f2790:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f27cc;
        }
    }
L_000f2794:;
    {
        cpu->r[10] = rd32(0x000f279cu + + 0xbacu);
    }
L_000f2798:;
    {
        cpu->r[10] = add_flags(cpu, 0x000f27a0u, cpu->r[10], 0, 0);
    }
L_000f279c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f27a0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f27a4:;
    {
        cpu->r[14] = 0x000f27a8u; fn_000ae248(cpu);
    }
L_000f27a8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f27ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000f27b0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000f27b4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 30u, &shc); cpu->r[3] = v;
    }
L_000f27b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000f27bc:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_000f27c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000f27c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000f27c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f279c;
        }
    }
L_000f27cc:;
    {
        cpu->r[9] = rd32(0x000f27d4u + + 0xb78u);
    }
L_000f27d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f27d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f27d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f27dc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f27e0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000f27e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f27e8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000f27ec:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[10]);
    }
L_000f27f0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000f27f4:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000f27f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000f27fc:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x6ccu);
    }
L_000f2800:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000f2804:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000f2808:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000f280c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000f2810:;
    {
        cpu->r[14] = 0x000f2814u; fn_000ad19c(cpu);
    }
L_000f2814:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000f2818:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f281c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f2820:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f2824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000f2828:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000f282c:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000f2830:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f2834:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000f2838:;
    {
        cpu->r[14] = 0x000f283cu; fn_0012fa2c(cpu);
    }
L_000f283c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000f2840:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000f2844:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000f2848:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f284c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000f2850:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000f2854:;
    {
        cpu->r[3] = rd32(0x000f285cu + + 0xaf4u);
    }
L_000f2858:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_000f285c:;
    {
        cpu->r[3] = rd32(0x000f2864u + cpu->r[3]);
    }
L_000f2860:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000f2864:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000f2868:;
    {
        cpu->r[14] = 0x000f286cu; fn_000ad8a0(cpu);
    }
L_000f286c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2870:;
    {
        cpu->r[14] = 0x000f2874u; fn_0012f780(cpu);
    }
L_000f2874:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000026c0u, 0, 0);
    }
L_000f2878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000026c0u, 0, 0);
    }
L_000f287c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000f2880:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000f2884:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000f2888:;
    {
        cpu->r[14] = 0x000f288cu; fn_000a8d10(cpu);
    }
L_000f288c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_000f2890:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003bu, 1, 1);
    }
L_000f2894:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f2f7c;
        }
    }
L_000f2898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f289c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000f28a0:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x6c4u);
    }
L_000f28a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f28a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 3, 31u, &shc), 0, 0);
    }
L_000f28ac:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_000f28b0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6]; cpu->r[0] = v;
    }
L_000f28b4:;
    {
        cpu->r[14] = 0x000f28b8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000f28b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000f28bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f28c0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f28c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x98u);
    }
L_000f28c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f28cc:;
    {
        cpu->r[6] = rd32(0x000f28d4u + + 0xa80u);
    }
L_000f28d0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f28d4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x98u, cpu->r[12]);
        }
    }
L_000f28d8:;
    {
        cpu->r[9] = rd32(cpu->r[7]);
    }
L_000f28dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f28e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_000f28e4:;
    {
        cpu->r[6] = add_flags(cpu, 0x000f28ecu, cpu->r[6], 0, 0);
    }
L_000f28e8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_000f28ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000003u, 0, 0);
    }
L_000f28f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[1];
        }
    }
L_000f28f4:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x6c0u);
    }
L_000f28f8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000f28fc:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000f2900:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_000f2904:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_000f2908:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000f290c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_000f2910:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000f2914:;
    {
        cpu->r[14] = 0x000f2918u; fn_0012fa2c(cpu);
    }
L_000f2918:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f291c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_000f2920:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_000f2924:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_000f2928:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000f292c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000f2930:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000f2934:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000f2938:;
    {
        cpu->r[14] = 0x000f293cu; fn_000ad8a0(cpu);
    }
L_000f293c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2940:;
    {
        cpu->r[14] = 0x000f2944u; fn_0012f780(cpu);
    }
L_000f2944:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000f2948:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f294c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2950:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f2954:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000f2958:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000f295c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000f2960:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f2964:;
    {
        cpu->r[14] = 0x000f2968u; fn_0012fa2c(cpu);
    }
L_000f2968:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000f296c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000f2970:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f2974:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000f2978:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000f297c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000f2980:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000f2984:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000f2988:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000f298c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000f2990:;
    {
        cpu->r[14] = 0x000f2994u; fn_000ad8a0(cpu);
    }
L_000f2994:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f2998:;
    {
        cpu->r[14] = 0x000f299cu; fn_0012f780(cpu);
    }
L_000f299c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002d4u, 0, 0);
    }
L_000f29a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00002400u, 0, 0);
    }
L_000f29a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f29a8u)) return;
    }
L_000f29a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f29ac:;
    {
        cpu->r[14] = 0x000f29b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f29b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f29b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f264c;
        }
    }
L_000f29b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f29bc:;
    {
        cpu->r[14] = 0x000f29c0u; fn_0018aa20(cpu);
    }
L_000f29c0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f29c4:;
    {
        cpu->r[14] = 0x000f29c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f29c8:;
    {
        cpu->r[3] = rd32(0x000f29d0u + + 0x988u);
    }
L_000f29cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f29d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f29d4:;
    {
        cpu->r[3] = rd32(0x000f29dcu + + 0x980u);
    }
L_000f29d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f29dc:;
    {
        cpu->r[14] = 0x000f29e0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f29e0:;
    {
        goto L_000f264c;
    }
L_000f29e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f29e8:;
    {
        cpu->r[14] = 0x000f29ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f29ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f29f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2608;
        }
    }
L_000f29f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f29f8:;
    {
        cpu->r[14] = 0x000f29fcu; fn_0018aa20(cpu);
    }
L_000f29fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f2a00:;
    {
        cpu->r[14] = 0x000f2a04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f2a04:;
    {
        cpu->r[3] = rd32(0x000f2a0cu + + 0x94cu);
    }
L_000f2a08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2a0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2a10:;
    {
        cpu->r[3] = rd32(0x000f2a18u + + 0x944u);
    }
L_000f2a14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2a18:;
    {
        cpu->r[14] = 0x000f2a1cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f2a1c:;
    {
        goto L_000f2608;
    }
L_000f2a20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2a24:;
    {
        cpu->r[14] = 0x000f2a28u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f2a28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f2a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f25dc;
        }
    }
L_000f2a30:;
    {
        cpu->r[6] = rd32(0x000f2a38u + + 0x8f8u);
    }
L_000f2a34:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2a38:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f2a3c:;
    {
        cpu->r[14] = 0x000f2a40u; fn_0018aa20(cpu);
    }
L_000f2a40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2a44:;
    {
        cpu->r[14] = 0x000f2a48u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f2a48:;
    {
        cpu->r[3] = rd32(0x000f2a50u + + 0x908u);
    }
L_000f2a4c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f2a50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2a54:;
    {
        cpu->r[3] = rd32(0x000f2a5cu + + 0x900u);
    }
L_000f2a58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f2a5c:;
    {
        cpu->r[14] = 0x000f2a60u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f2a60:;
    {
        goto L_000f25e0;
    }
L_000f2a64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2a68:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_000f2a6c:;
    {
        cpu->r[14] = 0x000f2a70u; fn_000aeb58(cpu);
    }
L_000f2a70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000f2a74:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f2a78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f2a7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000f2a80:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_000f2a84:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000f2a88:;
    {
        cpu->r[2] = rd32(0x000f2a90u + + 0x8bcu);
    }
L_000f2a8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f2a90:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f2a94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000f2a98:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000f2a9c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2aa0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f2aa4:;
    {
        cpu->r[14] = 0x000f2aa8u; fn_000ad19c(cpu);
    }
L_000f2aa8:;
    {
        goto L_000f2994;
    }
L_000f2aac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f2ab0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f2ab4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f30ec;
        }
    }
L_000f2abc:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000f2ac0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f2ac4:;
    {
        cpu->r[14] = 0x000f2ac8u; fn_00096a08(cpu);
    }
L_000f2ac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2acc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f2ad0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000f2ad4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2ad8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f2adc:;
    {
        cpu->r[14] = 0x000f2ae0u; fn_0018aa44(cpu);
    }
L_000f2ae0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f2ae4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f2ae8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2aec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000f2af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f30a8;
        }
    }
L_000f2af4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f2af8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f2afc:;
    {
        cpu->r[14] = 0x000f2b00u; fn_00096a08(cpu);
    }
L_000f2b00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2b04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f2b08:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000f2b0c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2b10:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000f2b14:;
    {
        cpu->r[14] = 0x000f2b18u; fn_0018aa44(cpu);
    }
L_000f2b18:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f2b1c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000f2b20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f2b24:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_000f2b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f306c;
        }
    }
L_000f2b2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f2b30:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f2b34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f2b38:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000f2b3c:;
    {
        cpu->r[14] = 0x000f2b40u; fn_0018aa44(cpu);
    }
L_000f2b40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f2b44:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x48u);
    }
L_000f2b48:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000f2b4c:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x54u);
    }
L_000f2b50:;
    {
        wr32(cpu->r[7] + + 0x48u, cpu->r[1]);
    }
L_000f2b54:;
    {
        wr32(cpu->r[7] + + 0x4cu, cpu->r[2]);
    }
L_000f2b58:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_000f2b5c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000f2b60:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f2b64:;
    {
        cpu->r[14] = 0x000f2b68u; fn_000962d0(cpu);
    }
L_000f2b68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00002680u, 0, 0);
    }
L_000f2b6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f2b70:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000f2b74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000f2b78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f2b7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f2b80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_000f2b84:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[3]);
    }
L_000f2b88:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000f2b8c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000f2b90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f2b94:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000f2b98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000f2b9c:;
    {
        cpu->r[14] = 0x000f2ba0u; fn_000a8a2c(cpu);
    }
L_000f2ba0:;
    {
        cpu->r[2] = rd32(0x000f2ba8u + + 0x7a4u);
    }
L_000f2ba4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f2ba8:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x54u);
    }
L_000f2bac:;
    {
        cpu->r[3] = 0x0000006eu;
    }
L_000f2bb0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f2bb4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f2bb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000f2bbc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_000f2bc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000f2bc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f2bc8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x6bcu);
    }
L_000f2bcc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x6b8u);
    }
L_000f2bd0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_000f2bd4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_000f2bd8:;
    {
        cpu->r[12] = rd16(cpu->r[12]);
    }
L_000f2bdc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000f2be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f2be4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x6b0u);
    }
L_000f2be8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000f2bec:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_000f2bf0:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_000f2bf4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f2bf8:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x6b4u);
    }
L_000f2bfc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_000f2c00:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f2c04:;
    {
        cpu->r[14] = rd16(cpu->r[10]);
    }
L_000f2c08:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f2c0c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000f2c10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_000f2c14:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x48u);
    }
L_000f2c18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000f2c1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f2c20:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_000f2c24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_000f2c28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000f2c2c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000f2c30:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[14] = v;
    }
L_000f2c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000f2c38:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_000f2c3c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_000f2c40:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000019u, 0, 0);
    }
L_000f2c44:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_000f2c48:;
    {
        cpu->r[14] = 0x000f2c4cu; fn_000ad8a0(cpu);
    }
L_000f2c4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000f2c50:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000f2c54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000f2c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3134;
        }
    }
L_000f2c5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f2c60:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000f2c64:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f2c68:;
    {
        cpu->r[14] = 0x000f2c6cu; fn_000f3430(cpu);
    }
L_000f2c6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f2c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3150;
        }
    }
L_000f2c74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f2c78:;
    {
        cpu->r[3] = rd32(0x000f2c80u + + 0x6e0u);
    }
L_000f2c7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f2c80:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f2c88u, cpu->r[3], 0, 0);
    }
L_000f2c84:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f2c88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f2c8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000f2c90:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000f2c94:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000f2c98:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f2c9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f3188;
        }
    }
L_000f2ca0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f2ca4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00002240u, 0, 0);
    }
L_000f2ca8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000020u, 0, 0);
    }
L_000f2cac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_000f2cb0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f2cb4:;
    {
        cpu->r[14] = 0x000f2cb8u; fn_000962d0(cpu);
    }
L_000f2cb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2cbc:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_000f2cc0:;
    {
        cpu->r[0] = 0x0000066du;
    }
L_000f2cc4:;
    {
        cpu->r[14] = 0x000f2cc8u; fn_000aeb58(cpu);
    }
L_000f2cc8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2ccc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f2cd0:;
    {
        cpu->r[14] = 0x000f2cd4u; fn_000ae160(cpu);
    }
L_000f2cd4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000f2cd8:;
    {
        cpu->r[14] = 0x000f2cdcu; fn_000962d0(cpu);
    }
L_000f2cdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f2ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3174;
        }
    }
L_000f2ce4:;
    {
        cpu->r[1] = rd32(0x000f2cecu + + 0x678u);
    }
L_000f2ce8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f2cec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f2cf0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000034u, 1, 0);
    }
L_000f2cf4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f2cfcu, cpu->r[1], 0, 0);
    }
L_000f2cf8:;
    {
        cpu->r[11] = rd32(0x000f2d00u + + 0x668u);
    }
L_000f2cfc:;
    {
        cpu->r[14] = 0x000f2d00u; fn_000ae248(cpu);
    }
L_000f2d00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f2d04:;
    {
        cpu->r[11] = add_flags(cpu, 0x000f2d0cu, cpu->r[11], 0, 0);
    }
L_000f2d08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2d0c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f2d10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_000f2d14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000f2d18:;
    {
        cpu->r[14] = 0x000f2d1cu; fn_000aeb58(cpu);
    }
L_000f2d1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2d20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f2d24:;
    {
        cpu->r[14] = 0x000f2d28u; fn_000ae228(cpu);
    }
L_000f2d28:;
    {
        cpu->r[1] = rd32(0x000f2d30u + + 0x63cu);
    }
L_000f2d2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2d30:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f2d38u, cpu->r[1], 0, 0);
    }
L_000f2d34:;
    {
        cpu->r[14] = 0x000f2d38u; fn_000ae1a4(cpu);
    }
L_000f2d38:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f2d3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f2e08;
        }
    }
L_000f2d40:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 1);
    }
L_000f2d44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f2f9c;
        }
    }
L_000f2d48:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f2d4c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000007u, 1, 1);
    }
L_000f2d50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f31bc;
        }
    }
L_000f2d54:;
    {
        cpu->r[3] = rd32(0x000f2d5cu + + 0x614u);
    }
L_000f2d58:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f2d5c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000f2d60:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f2d64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f2d6cu, cpu->r[3], 0, 0);
    }
L_000f2d68:;
    {
        cpu->r[3] = rd32(0x000f2d70u + + 0x604u);
    }
L_000f2d6c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_000f2d70:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000f2d74:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f2d7cu, cpu->r[3], 0, 0);
    }
L_000f2d78:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[4]);
    }
L_000f2d7c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000f2d80:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f2d84:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[9]);
    }
L_000f2d88:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000f2d8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2d90:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_000f2d94:;
    {
        cpu->r[14] = 0x000f2d98u; fn_000aeb58(cpu);
    }
L_000f2d98:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2d9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2da0:;
    {
        cpu->r[14] = 0x000f2da4u; fn_000ae228(cpu);
    }
L_000f2da4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f2da8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2dac:;
    {
        cpu->r[14] = 0x000f2db0u; fn_000ae248(cpu);
    }
L_000f2db0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f2db4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2db8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f2dbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_000f2dc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000f2dc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000f2dc8:;
    {
        cpu->r[14] = 0x000f2dccu; fn_000aeb58(cpu);
    }
L_000f2dcc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2dd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2dd4:;
    {
        cpu->r[14] = 0x000f2dd8u; fn_000ae228(cpu);
    }
L_000f2dd8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_000f2ddc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2de0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000f2de4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000f2de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2df0;
        }
    }
L_000f2dec:;
    {
        cpu->r[14] = 0x000f2df0u; fn_000ae248(cpu);
    }
L_000f2df0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[4], 1, 1);
    }
L_000f2df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f2d8c;
        }
    }
L_000f2df8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f2dfc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_000f2e00:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x54u);
    }
L_000f2e04:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f2e08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000f2e0c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00002640u, 0, 0);
    }
L_000f2e10:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000020u, 0, 0);
    }
L_000f2e14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f2e18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000032u, 1, 0);
    }
L_000f2e1c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f2e20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2e24:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000f2e28:;
    {
        cpu->r[14] = 0x000f2e2cu; fn_000a9818(cpu);
    }
L_000f2e2c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_000f2e30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00002600u, 0, 0);
    }
L_000f2e34:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x54u);
    }
L_000f2e38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f2e3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2e40:;
    {
        cpu->r[12] = rd16(cpu->r[3]);
    }
L_000f2e44:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x60u);
    }
L_000f2e48:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f2e4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000f2e50:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_000f2e54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000f2e58:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12] + cpu->r[12]; cpu->r[6] = v;
    }
L_000f2e5c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000f2e60:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000f2e64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000f2e68:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_000f2e6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000f2e70:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000f2e74:;
    {
        cpu->r[14] = 0x000f2e78u; fn_000ac4bc(cpu);
    }
L_000f2e78:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_000f2e7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_000f2e80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000f2e84:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x54u);
    }
L_000f2e88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f2e8c:;
    {
        cpu->r[12] = rd16(cpu->r[3]);
    }
L_000f2e90:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_000f2e94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f2e98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000f2e9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000f2ea0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_000f2ea4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[6], 1, 1u, &shc), 1, 0);
    }
L_000f2ea8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000f2eac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000f2eb0:;
    {
        cpu->r[14] = 0x000f2eb4u; fn_000ad19c(cpu);
    }
L_000f2eb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f2eb8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000f2ebc:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x406u);
    }
L_000f2ec0:;
    {
        wr32(cpu->r[7] + + 0x54u, cpu->r[14]);
    }
L_000f2ec4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_000f2ec8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f2708;
        }
    }
L_000f2ecc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f2ed0:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_000f2ed4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000f2ed8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00002040u, 0, 0);
    }
L_000f2edc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f2ee0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_000f2ee4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000f2ee8:;
    {
        cpu->r[14] = 0x000f2eecu; fn_00096dec(cpu);
    }
L_000f2eec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f2ef0:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000f2ef4:;
    {
        cpu->r[1] = rd32(0x000f2efcu + + 0x47cu);
    }
L_000f2ef8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f2efc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f2f04u, cpu->r[1], 0, 0);
    }
L_000f2f00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000f2f04:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000f2f08:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[2]; cpu->r[3] = v;
    }
L_000f2f0c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x10u);
    }
L_000f2f10:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000f2f14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2f18:;
    {
        cpu->r[14] = 0x000f2f1cu; fn_000ae1a4(cpu);
    }
L_000f2f1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f2f20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f2f24:;
    {
        cpu->r[14] = 0x000f2f28u; fn_000aeb58(cpu);
    }
L_000f2f28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2f2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2f30:;
    {
        cpu->r[14] = 0x000f2f34u; fn_000ae228(cpu);
    }
L_000f2f34:;
    {
        cpu->r[1] = rd32(0x000f2f3cu + + 0x440u);
    }
L_000f2f38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2f3c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f2f44u, cpu->r[1], 0, 0);
    }
L_000f2f40:;
    {
        cpu->r[14] = 0x000f2f44u; fn_000ae248(cpu);
    }
L_000f2f44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f2f48:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f2f4c:;
    {
        cpu->r[14] = 0x000f2f50u; fn_000aeb58(cpu);
    }
L_000f2f50:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2f54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f2f58:;
    {
        cpu->r[14] = 0x000f2f5cu; fn_000ae228(cpu);
    }
L_000f2f5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000f2f60:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f2f64:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000f2f68:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_000f2f6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f2f70:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000f2f74:;
    {
        cpu->r[14] = 0x000f2f78u; fn_000ad19c(cpu);
    }
L_000f2f78:;
    {
        goto L_000f2708;
    }
L_000f2f7c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00002000u, 0, 0);
    }
L_000f2f80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f2f84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000f2f88:;
    {
        cpu->r[10] = rd32(cpu->r[14] + + 0x6c4u);
    }
L_000f2f8c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10] + cpu->r[10]; cpu->r[0] = v;
    }
L_000f2f90:;
    {
        cpu->r[14] = 0x000f2f94u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000f2f94:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000f2f98:;
    {
        goto L_000f28bc;
    }
L_000f2f9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f2fa0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000007u, 1, 1);
    }
L_000f2fa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3270;
        }
    }
L_000f2fa8:;
    {
        cpu->r[3] = rd32(0x000f2fb0u + + 0x3d0u);
    }
L_000f2fac:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f2fb0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000f2fb4:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f2fb8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f2fc0u, cpu->r[3], 0, 0);
    }
L_000f2fbc:;
    {
        cpu->r[3] = rd32(0x000f2fc4u + + 0x3c0u);
    }
L_000f2fc0:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_000f2fc4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f2fc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f2fd0u, cpu->r[3], 0, 0);
    }
L_000f2fcc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f2fd0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[9]);
    }
L_000f2fd4:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000f2fd8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_000f2fdc:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000f2fe0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f2fe4:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_000f2fe8:;
    {
        cpu->r[14] = 0x000f2fecu; fn_000aeb58(cpu);
    }
L_000f2fec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f2ff0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f2ff4:;
    {
        cpu->r[14] = 0x000f2ff8u; fn_000ae228(cpu);
    }
L_000f2ff8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f2ffc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3000:;
    {
        cpu->r[14] = 0x000f3004u; fn_000ae248(cpu);
    }
L_000f3004:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f3008:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f300c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f3010:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_000f3014:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000f3018:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000f301c:;
    {
        cpu->r[14] = 0x000f3020u; fn_000aeb58(cpu);
    }
L_000f3020:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f3024:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3028:;
    {
        cpu->r[14] = 0x000f302cu; fn_000ae228(cpu);
    }
L_000f302c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_000f3030:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3034:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3038:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000f303c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3050;
        }
    }
L_000f3040:;
    {
        cpu->r[14] = 0x000f3044u; fn_000ae248(cpu);
    }
L_000f3044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3048:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f304c:;
    {
        cpu->r[14] = 0x000f3050u; fn_000ae248(cpu);
    }
L_000f3050:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_000f3054:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f2fe0;
        }
    }
L_000f3058:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f305c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_000f3060:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f3064:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x54u);
    }
L_000f3068:;
    {
        goto L_000f2e08;
    }
L_000f306c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3070:;
    {
        cpu->r[14] = 0x000f3074u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f3074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f3078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2b2c;
        }
    }
L_000f307c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f3080:;
    {
        cpu->r[14] = 0x000f3084u; fn_0018aa20(cpu);
    }
L_000f3084:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3088:;
    {
        cpu->r[14] = 0x000f308cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f308c:;
    {
        cpu->r[3] = rd32(0x000f3094u + + 0x2c4u);
    }
L_000f3090:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f3094:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f3098:;
    {
        cpu->r[3] = rd32(0x000f30a0u + + 0x2bcu);
    }
L_000f309c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f30a0:;
    {
        cpu->r[14] = 0x000f30a4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f30a4:;
    {
        goto L_000f2b2c;
    }
L_000f30a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f30ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000f30b0:;
    {
        cpu->r[14] = 0x000f30b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f30b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f30b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2af4;
        }
    }
L_000f30bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f30c0:;
    {
        cpu->r[14] = 0x000f30c4u; fn_0018aa20(cpu);
    }
L_000f30c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f30c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f30cc:;
    {
        cpu->r[14] = 0x000f30d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f30d0:;
    {
        cpu->r[3] = rd32(0x000f30d8u + + 0x280u);
    }
L_000f30d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f30d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f30dc:;
    {
        cpu->r[3] = rd32(0x000f30e4u + + 0x278u);
    }
L_000f30e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f30e4:;
    {
        cpu->r[14] = 0x000f30e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f30e8:;
    {
        goto L_000f2af4;
    }
L_000f30ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f30f0:;
    {
        cpu->r[14] = 0x000f30f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f30f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f30f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f2abc;
        }
    }
L_000f30fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3100:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f3104:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000f3108:;
    {
        cpu->r[14] = 0x000f310cu; fn_0018aa20(cpu);
    }
L_000f310c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f3110:;
    {
        cpu->r[14] = 0x000f3114u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f3114:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f3118:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f311c:;
    {
        cpu->r[3] = rd32(0x000f3124u + + 0x234u);
    }
L_000f3120:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f3124:;
    {
        cpu->r[3] = rd32(0x000f312cu + + 0x230u);
    }
L_000f3128:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f312c:;
    {
        cpu->r[14] = 0x000f3130u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f3130:;
    {
        goto L_000f2abc;
    }
L_000f3134:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3138:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_000f313c:;
    {
        cpu->r[14] = 0x000f3140u; fn_000964c8(cpu);
    }
L_000f3140:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f3144:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_000f3148:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[0]);
    }
L_000f314c:;
    {
        goto L_000f2c5c;
    }
L_000f3150:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_000f3154:;
    {
        cpu->r[14] = 0x000f3158u; fn_000f1f18(cpu);
    }
L_000f3158:;
    {
        goto L_000f2c74;
    }
L_000f315c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f3160:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f3164:;
    {
        cpu->r[14] = 0x000f3168u; fn_0009a274(cpu);
    }
L_000f3168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003bu, 0, 0);
    }
L_000f316c:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[0]);
    }
L_000f3170:;
    {
        goto L_000f2714;
    }
L_000f3174:;
    {
        cpu->r[1] = rd32(0x000f317cu + + 0x20cu);
    }
L_000f3178:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f317c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3184u, cpu->r[1], 0, 0);
    }
L_000f3180:;
    {
        cpu->r[14] = 0x000f3184u; fn_000ae248(cpu);
    }
L_000f3184:;
    {
        goto L_000f2ce4;
    }
L_000f3188:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000a0u, 0, 0);
    }
L_000f318c:;
    {
        cpu->r[1] = rd32(0x000f3194u + + 0x1f8u);
    }
L_000f3190:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000f3194:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f3198:;
    {
        cpu->r[2] = rd32(0x000f31a0u + + 0x1f0u);
    }
L_000f319c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f31a4u, cpu->r[1], 0, 0);
    }
L_000f31a0:;
    {
        cpu->r[3] = rd32(0x000f31a8u + + 0x1ecu);
    }
L_000f31a4:;
    {
        cpu->r[12] = 0x0000016cu;
    }
L_000f31a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f31b0u, cpu->r[2], 0, 0);
    }
L_000f31ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f31b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f31b8u, cpu->r[3], 0, 0);
    }
L_000f31b4:;
    {
        cpu->r[14] = 0x000f31b8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f31b8:;
    {
        goto L_000f2ca0;
    }
L_000f31bc:;
    {
        cpu->r[3] = rd32(0x000f31c4u + + 0x1d4u);
    }
L_000f31c0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f31c4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000f31c8:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f31cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f31d4u, cpu->r[3], 0, 0);
    }
L_000f31d0:;
    {
        cpu->r[3] = rd32(0x000f31d8u + + 0x1c4u);
    }
L_000f31d4:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_000f31d8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f31dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f31e4u, cpu->r[3], 0, 0);
    }
L_000f31e0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f31e4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[9]);
    }
L_000f31e8:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000f31ec:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_000f31f0:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000f31f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f31f8:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_000f31fc:;
    {
        cpu->r[14] = 0x000f3200u; fn_000aeb58(cpu);
    }
L_000f3200:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f3204:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3208:;
    {
        cpu->r[14] = 0x000f320cu; fn_000ae228(cpu);
    }
L_000f320c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f3210:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3214:;
    {
        cpu->r[14] = 0x000f3218u; fn_000ae248(cpu);
    }
L_000f3218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f321c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f3220:;
    {
        cpu->r[0] = rd32(cpu->r[9] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f3224:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_000f3228:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000f322c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000f3230:;
    {
        cpu->r[14] = 0x000f3234u; fn_000aeb58(cpu);
    }
L_000f3234:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f3238:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f323c:;
    {
        cpu->r[14] = 0x000f3240u; fn_000ae228(cpu);
    }
L_000f3240:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_000f3244:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3248:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f324c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000f3250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3264;
        }
    }
L_000f3254:;
    {
        cpu->r[14] = 0x000f3258u; fn_000ae248(cpu);
    }
L_000f3258:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f325c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3260:;
    {
        cpu->r[14] = 0x000f3264u; fn_000ae248(cpu);
    }
L_000f3264:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_000f3268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f31f4;
        }
    }
L_000f326c:;
    {
        goto L_000f3058;
    }
L_000f3270:;
    {
        cpu->r[3] = rd32(0x000f3278u + + 0x128u);
    }
L_000f3274:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f3278:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000f327c:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f3280:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f3288u, cpu->r[3], 0, 0);
    }
L_000f3284:;
    {
        cpu->r[3] = rd32(0x000f328cu + + 0x118u);
    }
L_000f3288:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_000f328c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f3290:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f3298u, cpu->r[3], 0, 0);
    }
L_000f3294:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_000f3298:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[9]);
    }
L_000f329c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000f32a0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_000f32a4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000f32a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f32ac:;
    {
        cpu->r[0] = 0x00000076u;
    }
L_000f32b0:;
    {
        cpu->r[14] = 0x000f32b4u; fn_000aeb58(cpu);
    }
L_000f32b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f32b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f32bc:;
    {
        cpu->r[14] = 0x000f32c0u; fn_000ae228(cpu);
    }
L_000f32c0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f32c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f32c8:;
    {
        cpu->r[14] = 0x000f32ccu; fn_000ae248(cpu);
    }
L_000f32cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_000f32d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f32d4:;
    {
        cpu->r[0] = rd32(cpu->r[9] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f32d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000bf0u, 0, 0);
    }
L_000f32dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000f32e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000f32e4:;
    {
        cpu->r[14] = 0x000f32e8u; fn_000aeb58(cpu);
    }
L_000f32e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f32ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f32f0:;
    {
        cpu->r[14] = 0x000f32f4u; fn_000ae228(cpu);
    }
L_000f32f4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_000f32f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f32fc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3300:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000f3304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3318;
        }
    }
L_000f3308:;
    {
        cpu->r[14] = 0x000f330cu; fn_000ae248(cpu);
    }
L_000f330c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3310:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3314:;
    {
        cpu->r[14] = 0x000f3318u; fn_000ae248(cpu);
    }
L_000f3318:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_000f331c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f32a8;
        }
    }
L_000f3320:;
    {
        goto L_000f3058;
    }
}

/* _ZN4Game8FakeTimeEj @ 000f33a8 (arm) */
void fn_000f33a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f33a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000f33ac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f33b0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f33b4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000f33b8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000f3428;
        }
    }
L_000f33bc:;
    {
        cpu->r[4] = 0x0000000au;
    }
L_000f33c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000f33c4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000f33c8:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_000f33cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f33d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f33d4:;
    {
        cpu->r[14] = 0x000f33d8u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_000f33d8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f33dc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f33e0:;
    {
        cpu->r[14] = 0x000f33e4u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000f33e4:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000f33e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f33ec:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000f33f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f33f4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000f33f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000f33fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f3400:;
    {
        cpu->r[14] = 0x000f3404u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000f3404:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f3408:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f33cc;
        }
    }
L_000f340c:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000f3410:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f3414:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000f3418:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[6]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f341c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f3420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000f3424:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_000f3428:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000f342c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3430u)) return;
    }
}

/* _ZN4Game13IsStateActiveEi @ 000f3430 (arm) */
void fn_000f3430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f3430:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f3434:;
    {
        cpu->r[8] = 0x00001d38u;
    }
L_000f3438:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f343c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000f3440:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000f3444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3448:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f3498;
        }
    }
L_000f344c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00001d00u, 0, 0);
    }
L_000f3450:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f3454:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000003cu, 0, 0);
    }
L_000f3458:;
    {
        goto L_000f3468;
    }
L_000f345c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000f3460:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f3464:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f3498;
        }
    }
L_000f3468:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f346c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f3470:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f3474:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000f3478:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f347c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f3480:;
    {
        cpu->r[14] = 0x000f3488u;
    }
L_000f3484:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3488u)) return;
    }
L_000f3488:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f348c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f345c;
        }
    }
L_000f3490:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000f3494:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3498u)) return;
    }
L_000f3498:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f349c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f34a0u)) return;
    }
}

/* _ZN4Game12CurrentStateEv @ 000f34a0 (arm) */
void fn_000f34a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f34a0:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000f34a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f34a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f34ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
        }
    }
L_000f34b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f34b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
        }
    }
L_000f34b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000f34bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f34c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game11ParentStateEv @ 000f34c4 (arm) */
void fn_000f34c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f34c4:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000f34c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f34cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f34d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
        }
    }
L_000f34d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f34d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000du, 0, 0);
        }
    }
L_000f34dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000f34e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f34e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game8PopStateEb @ 000f34e8 (arm) */
void fn_000f34e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f34e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f34ec:;
    {
        cpu->r[5] = 0x00001d38u;
    }
L_000f34f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f34f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f34f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000f34fc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000f3500:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3504:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f3598;
        }
    }
L_000f3508:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000f350c:;
    {
        cpu->r[1] = 0x00001d38u;
    }
L_000f3510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000f3514:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000f3518:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000f351c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f3520:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f3524:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f3528:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f352c:;
    {
        cpu->r[14] = 0x000f3534u;
    }
L_000f3530:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3534u)) return;
    }
L_000f3534:;
    {
        cpu->r[3] = 0x00001d64u;
    }
L_000f3538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f353c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f3540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3554;
        }
    }
L_000f3544:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f3548:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f354c:;
    {
        cpu->r[14] = 0x000f3554u;
    }
L_000f3550:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3554u)) return;
    }
L_000f3554:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000f3558:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f355c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3560:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f356c;
        }
    }
L_000f3564:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f3568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3574;
        }
    }
L_000f356c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f3570:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3574u)) return;
    }
L_000f3574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000f3578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000f357c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f3580:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f3584:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f3588:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f358c:;
    {
        cpu->r[14] = 0x000f3594u;
    }
L_000f3590:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3594u)) return;
    }
L_000f3594:;
    {
        goto L_000f356c;
    }
L_000f3598:;
    {
        cpu->r[1] = rd32(0x000f35a0u + + 0x34u);
    }
L_000f359c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f35a0:;
    {
        cpu->r[2] = rd32(0x000f35a8u + + 0x30u);
    }
L_000f35a4:;
    {
        cpu->r[14] = 0x00000195u;
    }
L_000f35a8:;
    {
        cpu->r[3] = rd32(0x000f35b0u + + 0x2cu);
    }
L_000f35ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f35b4u, cpu->r[1], 0, 0);
    }
L_000f35b0:;
    {
        cpu->r[12] = rd32(0x000f35b8u + + 0x28u);
    }
L_000f35b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f35bcu, cpu->r[2], 0, 0);
    }
L_000f35b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f35c0u, cpu->r[3], 0, 0);
    }
L_000f35bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000f35c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f35c8u, cpu->r[12], 0, 0);
    }
L_000f35c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f35c8:;
    {
        cpu->r[14] = 0x000f35ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f35cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f35d0:;
    {
        goto L_000f3508;
    }
}

/* _ZN4Game15ClearStateStackEb @ 000f35e4 (arm) */
void fn_000f35e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f35e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f35e8:;
    {
        cpu->r[6] = 0x00001d38u;
    }
L_000f35ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f35f0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f35f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000f35f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f35fc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3600u)) return;
        }
    }
L_000f3600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f3604:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f3608:;
    {
        cpu->r[14] = 0x000f360cu; fn_000f34e8(cpu);
    }
L_000f360c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3614:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000f3600;
        }
    }
L_000f3618:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f361cu)) return;
    }
}

/* _ZN4Game9PushStateEP11gxGameState @ 000f361c (arm) */
void fn_000f361c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f361c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f3620:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f3624:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f3628:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f362c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f36ac;
        }
    }
L_000f3630:;
    {
        cpu->r[6] = 0x00001d38u;
    }
L_000f3634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3638:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000f363c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f3678;
        }
    }
L_000f3640:;
    {
        cpu->r[1] = rd32(0x000f3648u + + 0x78u);
    }
L_000f3644:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f3648:;
    {
        cpu->r[12] = rd32(0x000f3650u + + 0x74u);
    }
L_000f364c:;
    {
        cpu->r[14] = 0x0000018au;
    }
L_000f3650:;
    {
        cpu->r[2] = rd32(0x000f3658u + + 0x70u);
    }
L_000f3654:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f365cu, cpu->r[1], 0, 0);
    }
L_000f3658:;
    {
        cpu->r[3] = rd32(0x000f3660u + + 0x6cu);
    }
L_000f365c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f3664u, cpu->r[12], 0, 0);
    }
L_000f3660:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f3668u, cpu->r[2], 0, 0);
    }
L_000f3664:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f3668:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f3670u, cpu->r[3], 0, 0);
    }
L_000f366c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000f3670:;
    {
        cpu->r[14] = 0x000f3674u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f3674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f367c:;
    {
        cpu->r[1] = 0x00001d38u;
    }
L_000f3680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000f3684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f3688:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000f368c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000f3690:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f3694:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f3698:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f369c:;
    {
        cpu->r[14] = 0x000f36a4u;
    }
L_000f36a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f36a4u)) return;
    }
L_000f36a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f36a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f36acu)) return;
    }
L_000f36ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f36b0:;
    {
        cpu->r[14] = 0x000f36b4u; fn_000f35e4(cpu);
    }
L_000f36b4:;
    {
        cpu->r[3] = 0x00001d64u;
    }
L_000f36b8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f36bc:;
    {
        goto L_000f3630;
    }
}

/* _ZN4Game16SetExitErrorModeEv @ 000f36d0 (arm) */
void fn_000f36d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f36d0:;
    {
        cpu->r[3] = 0x00001d64u;
    }
L_000f36d4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f36d8:;
    {
        return fn_000f361c(cpu);
    }
}

/* _ZN4Game11ChangeStateEP11gxGameState @ 000f36dc (arm) */
void fn_000f36dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f36dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f36e0:;
    {
        cpu->r[6] = 0x00001d38u;
    }
L_000f36e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f36e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f36ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000f36f0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f36f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f36f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f37cc;
        }
    }
L_000f36fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000f3700:;
    {
        cpu->r[1] = 0x00001d38u;
    }
L_000f3704:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000f3708:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000f370c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000f3710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f3714:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f3718:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f371c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f3720:;
    {
        cpu->r[14] = 0x000f3728u;
    }
L_000f3724:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3728u)) return;
    }
L_000f3728:;
    {
        cpu->r[3] = 0x00001d64u;
    }
L_000f372c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f3730:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000f3734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3748;
        }
    }
L_000f3738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f373c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f3740:;
    {
        cpu->r[14] = 0x000f3748u;
    }
L_000f3744:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3748u)) return;
    }
L_000f3748:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f374c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3808;
        }
    }
L_000f3750:;
    {
        cpu->r[6] = 0x00001d38u;
    }
L_000f3754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3758:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000f375c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f3798;
        }
    }
L_000f3760:;
    {
        cpu->r[1] = rd32(0x000f3768u + + 0xb8u);
    }
L_000f3764:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f3768:;
    {
        cpu->r[12] = rd32(0x000f3770u + + 0xb4u);
    }
L_000f376c:;
    {
        cpu->r[14] = 0x0000017au;
    }
L_000f3770:;
    {
        cpu->r[2] = rd32(0x000f3778u + + 0xb0u);
    }
L_000f3774:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f377cu, cpu->r[1], 0, 0);
    }
L_000f3778:;
    {
        cpu->r[3] = rd32(0x000f3780u + + 0xacu);
    }
L_000f377c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f3784u, cpu->r[12], 0, 0);
    }
L_000f3780:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f3788u, cpu->r[2], 0, 0);
    }
L_000f3784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_000f3788:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f3790u, cpu->r[3], 0, 0);
    }
L_000f378c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000f3790:;
    {
        cpu->r[14] = 0x000f3794u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f3794:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f379c:;
    {
        cpu->r[1] = 0x00001d38u;
    }
L_000f37a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000f37a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f37a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000f37ac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000f37b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f37b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f37b8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f37bc:;
    {
        cpu->r[14] = 0x000f37c4u;
    }
L_000f37c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f37c4u)) return;
    }
L_000f37c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f37c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f37ccu)) return;
    }
L_000f37cc:;
    {
        cpu->r[1] = rd32(0x000f37d4u + + 0x5cu);
    }
L_000f37d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000f37d4:;
    {
        cpu->r[12] = rd32(0x000f37dcu + + 0x58u);
    }
L_000f37d8:;
    {
        cpu->r[14] = 0x0000016bu;
    }
L_000f37dc:;
    {
        cpu->r[2] = rd32(0x000f37e4u + + 0x54u);
    }
L_000f37e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f37e8u, cpu->r[1], 0, 0);
    }
L_000f37e4:;
    {
        cpu->r[3] = rd32(0x000f37ecu + + 0x50u);
    }
L_000f37e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f37f0u, cpu->r[12], 0, 0);
    }
L_000f37ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f37f4u, cpu->r[2], 0, 0);
    }
L_000f37f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_000f37f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f37fcu, cpu->r[3], 0, 0);
    }
L_000f37f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000f37fc:;
    {
        cpu->r[14] = 0x000f3800u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000f3800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f3804:;
    {
        goto L_000f36fc;
    }
L_000f3808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f380c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f3810:;
    {
        cpu->r[14] = 0x000f3814u; fn_000f35e4(cpu);
    }
L_000f3814:;
    {
        cpu->r[3] = 0x00001d64u;
    }
L_000f3818:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f381c:;
    {
        goto L_000f3750;
    }
}

/* _ZN4Game26FormatPrecisionTimeNotFakeEjPth @ 000f3840 (arm) */
void fn_000f3840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f3840:;
    {
        cpu->r[3] = 0x00004dd3u;
    }
L_000f3844:;
    {
        cpu->r[12] = 0x00008889u;
    }
L_000f3848:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000f384c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1062u << 16);
    }
L_000f3850:;
    {
        cpu->r[14] = cpu->r[1];
    }
L_000f3854:;
    {
        cpu->r[1] = rd32(0x000f385cu + + 0x80u);
    }
L_000f3858:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000f385c:;
    {
        cpu->r[2] = rd32(0x000f3864u + + 0x7cu);
    }
L_000f3860:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[14]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f3864:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f386cu, cpu->r[1], 0, 0);
    }
L_000f3868:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x8888u << 16);
    }
L_000f386c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000f3870:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000f3874:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f3878:;
    {
        cpu->r[1] = rd32(0x000f3880u + + 0x64u);
    }
L_000f387c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3880:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 6u, &shc); cpu->r[3] = v;
    }
L_000f3884:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_000f3888:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3890u, cpu->r[1], 0, 0);
    }
L_000f388c:;
    {
        { uint64_t v = (uint64_t)cpu->r[12] * (uint64_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000f3890:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_000f3894:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[7]);
    }
L_000f3898:;
    {
        uint32_t v = cpu->r[14] - cpu->r[2] * cpu->r[3]; cpu->r[14] = v;
    }
L_000f389c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 5u, &shc); cpu->r[2] = v;
    }
L_000f38a0:;
    {
        cpu->r[12] = (~0x0000003bu);
    }
L_000f38a4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_000f38a8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000f38ac:;
    {
        cpu->r[14] = 0x000f38b0u; imp_sprintf(cpu); /* sprintf */
    }
L_000f38b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f38b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f38b8:;
    {
        cpu->r[14] = 0x000f38bcu; fn_000ae1a4(cpu);
    }
L_000f38bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000f38c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f38c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f38c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f38cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f38d8;
        }
    }
L_000f38d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000f38d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f38d8u)) return;
    }
L_000f38d8:;
    {
        cpu->r[14] = 0x000f38dcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f38dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 3, 23u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000f38e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f38e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[12]);
        cpu->r[14] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
}

/* _ZN4Game19FormatPrecisionTimeEjPth @ 000f38e8 (arm) */
void fn_000f38e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f38e8:;
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
L_000f38ec:;
    {
        cpu->r[4] = rd32(0x000f38f4u + + 0x12cu);
    }
L_000f38f0:;
    {
        cpu->r[5] = rd32(0x000f38f8u + + 0x12cu);
    }
L_000f38f4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f38f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f3900u, cpu->r[4], 0, 0);
    }
L_000f38fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000f3900:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000f3904:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000f3908:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f390c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f3910:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_000f3914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f39b0;
        }
    }
L_000f3918:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000f391c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000f3920:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000f3994;
        }
    }
L_000f3924:;
    {
        cpu->r[8] = 0x0000000au;
    }
L_000f3928:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000f392c:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000f3930:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f3934:;
    {
        goto L_000f3940;
    }
L_000f3938:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000f393c:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000f3940:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f3944:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f3948:;
    {
        cpu->r[14] = 0x000f394cu; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_000f394c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_000f3950:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000f3954:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f3958:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f395c:;
    {
        cpu->r[14] = 0x000f3960u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000f3960:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f3964:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_000f3968:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f396c:;
    {
        cpu->r[14] = 0x000f3970u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000f3970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f3974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3938;
        }
    }
L_000f3978:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000f397c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000f3980:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000f3984:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[9]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f3988:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000f398c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f3990:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 1u, &shc), 1, 0);
    }
L_000f3994:;
    {
        cpu->r[2] = 0x00004dd3u;
    }
L_000f3998:;
    {
        cpu->r[12] = 0x000003e8u;
    }
L_000f399c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1062u << 16);
    }
L_000f39a0:;
    {
        { uint64_t v = (uint64_t)cpu->r[2] * (uint64_t)cpu->r[7]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000f39a4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 6u, &shc); cpu->r[2] = v;
    }
L_000f39a8:;
    {
        uint32_t v = cpu->r[7] - cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_000f39ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000f39b0:;
    {
        cpu->r[3] = 0x00004dd3u;
    }
L_000f39b4:;
    {
        cpu->r[2] = 0x00008889u;
    }
L_000f39b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1062u << 16);
    }
L_000f39bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8888u << 16);
    }
L_000f39c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f39c4:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[7]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f39c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f39cc:;
    {
        cpu->r[1] = rd32(0x000f39d4u + + 0x54u);
    }
L_000f39d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f39d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f39dcu, cpu->r[1], 0, 0);
    }
L_000f39d8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 6u, &shc); cpu->r[3] = v;
    }
L_000f39dc:;
    {
        { uint64_t v = (uint64_t)cpu->r[2] * (uint64_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000f39e0:;
    {
        cpu->r[12] = (~0x0000003bu);
    }
L_000f39e4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 5u, &shc); cpu->r[2] = v;
    }
L_000f39e8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_000f39ec:;
    {
        cpu->r[14] = 0x000f39f0u; imp_sprintf(cpu); /* sprintf */
    }
L_000f39f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f39f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f39f8:;
    {
        cpu->r[14] = 0x000f39fcu; fn_000ae1a4(cpu);
    }
L_000f39fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f3a00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000f3a04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f3a08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f3a0c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f3a10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3a1c;
        }
    }
L_000f3a14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000f3a18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3a1cu)) return;
    }
L_000f3a1c:;
    {
        cpu->r[14] = 0x000f3a20u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f3a20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000f3a24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f3a28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game19FormatPrecisionTimeEjPc @ 000f3a2c (arm) */
void fn_000f3a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f3a2c:;
    {
        cpu->r[0] = 0x00004dd3u;
    }
L_000f3a30:;
    {
        cpu->r[3] = 0x00008889u;
    }
L_000f3a34:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x1062u << 16);
    }
L_000f3a38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8888u << 16);
    }
L_000f3a3c:;
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
L_000f3a40:;
    {
        cpu->r[11] = rd32(0x000f3a48u + + 0x1a4u);
    }
L_000f3a44:;
    {
        { uint64_t v = (uint64_t)cpu->r[0] * (uint64_t)cpu->r[1]; cpu->r[4] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f3a48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000f3a4c:;
    {
        cpu->r[14] = rd32(0x000f3a54u + + 0x19cu);
    }
L_000f3a50:;
    {
        cpu->r[11] = add_flags(cpu, 0x000f3a58u, cpu->r[11], 0, 0);
    }
L_000f3a54:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000f3a58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f3a5c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f3a60:;
    {
        cpu->r[12] = 0x0000cccdu;
    }
L_000f3a64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000f3a68:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xccccu << 16);
    }
L_000f3a6c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 6u, &shc); cpu->r[0] = v;
    }
L_000f3a70:;
    {
        cpu->r[14] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_000f3a74:;
    {
        cpu->r[9] = rd32(0x000f3a7cu + + 0x178u);
    }
L_000f3a78:;
    {
        cpu->r[7] = 0x00006667u;
    }
L_000f3a7c:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[0]; cpu->r[4] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f3a80:;
    {
        cpu->r[4] = 0x000003e8u;
    }
L_000f3a84:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000f3a88:;
    {
        cpu->r[9] = add_flags(cpu, 0x000f3a90u, cpu->r[9], 0, 0);
    }
L_000f3a8c:;
    {
        uint32_t v = cpu->r[1] - cpu->r[4] * cpu->r[0]; cpu->r[1] = v;
    }
L_000f3a90:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x6666u << 16);
    }
L_000f3a94:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000f3a98:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000f3a9c:;
    {
        wr8(cpu->r[10], cpu->r[2]);
    }
L_000f3aa0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 5u, &shc); cpu->r[3] = v;
    }
L_000f3aa4:;
    {
        cpu->r[2] = rd32(0x000f3aacu + + 0x14cu);
    }
L_000f3aa8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000f3aac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f3ab0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000f3ab4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f3abcu, cpu->r[2], 0, 0);
    }
L_000f3ab8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000f3abc:;
    {
        cpu->r[2] = (~0x0000003bu);
    }
L_000f3ac0:;
    {
        { uint64_t v = (uint64_t)cpu->r[12] * (uint64_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f3ac4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f3ac8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[2] = v;
    }
L_000f3acc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000f3ad0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f3ad4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000f3ad8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 3u, &shc); cpu->r[1] = v;
    }
L_000f3adc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000f3ae0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000f3ae4:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000f3ae8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3aec:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000f3af0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 16u, &shc); cpu->r[1] = v;
    }
L_000f3af4:;
    {
        wr16(cpu->r[4], cpu->r[2]);
    }
L_000f3af8:;
    {
        wr8(cpu->r[0], cpu->r[1]);
    }
L_000f3afc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3b34;
        }
    }
L_000f3b00:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f3b04:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f3b08:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f3b0c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f3b10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f3b14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_000f3b18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f3b1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000f3b20:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000f3b24:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000f3b28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3b04;
        }
    }
L_000f3b2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f3b30:;
    {
        wr32(cpu->r[12] + cpu->r[8], cpu->r[3]);
    }
L_000f3b34:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000f3b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3bc0;
        }
    }
L_000f3b3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_000f3b40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3b74;
        }
    }
L_000f3b44:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3b48:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3b4c:;
    {
        cpu->r[14] = 0x000f3b50u; imp_strcat(cpu); /* strcat */
    }
L_000f3b50:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000f3b54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f3b9c;
        }
    }
L_000f3b58:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000f3b5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f3b60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f3b64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000f3b68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000f3b6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + - 0x20u);
    }
L_000f3b70:;
    {
        goto L_000f3ae4;
    }
L_000f3b74:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3b78:;
    {
        cpu->r[14] = 0x000f3b7cu; imp_strlen(cpu); /* strlen */
    }
L_000f3b7c:;
    {
        cpu->r[1] = rd32(0x000f3b84u + + 0x78u);
    }
L_000f3b80:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000f3b84:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3b8cu, cpu->r[1], 0, 0);
    }
L_000f3b88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_000f3b8c:;
    {
        cpu->r[14] = 0x000f3b90u; imp_memcpy(cpu); /* memcpy */
    }
L_000f3b90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3b94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3b98:;
    {
        cpu->r[14] = 0x000f3b9cu; imp_strcat(cpu); /* strcat */
    }
L_000f3b9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f3ba0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f3ba4:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_000f3ba8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f3bb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f3bb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3be8;
        }
    }
L_000f3bb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000f3bbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3bc0u)) return;
    }
L_000f3bc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3bc4:;
    {
        cpu->r[14] = 0x000f3bc8u; imp_strlen(cpu); /* strlen */
    }
L_000f3bc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f3bcc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000f3bd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_000f3bd4:;
    {
        cpu->r[14] = 0x000f3bd8u; imp_memcpy(cpu); /* memcpy */
    }
L_000f3bd8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f3bdc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3be0:;
    {
        cpu->r[14] = 0x000f3be4u; imp_strcat(cpu); /* strcat */
    }
L_000f3be4:;
    {
        goto L_000f3b58;
    }
L_000f3be8:;
    {
        cpu->r[14] = 0x000f3becu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f3bec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 1, 19u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000f3bf0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f3bf4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[12], 4, 5u, &shc); cpu->r[14] = v;
        set_nz(cpu, v);
        }
    }
L_000f3bf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[4]);
        cpu->r[12] = rd16(cpu->r[3]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f3bfc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[8], 2, 2u, &shc); cpu->r[14] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game10FormatTimeEjPc @ 000f3c00 (arm) */
void fn_000f3c00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f3c00:;
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
L_000f3c04:;
    {
        cpu->r[14] = 0x00004dd3u;
    }
L_000f3c08:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x1062u << 16);
    }
L_000f3c0c:;
    {
        cpu->r[9] = rd32(0x000f3c14u + + 0x164u);
    }
L_000f3c10:;
    {
        cpu->r[5] = rd32(0x000f3c18u + + 0x164u);
    }
L_000f3c14:;
    {
        cpu->r[12] = 0x0000b3c5u;
    }
L_000f3c18:;
    {
        { uint64_t v = (uint64_t)cpu->r[14] * (uint64_t)cpu->r[1]; cpu->r[4] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f3c1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000f3c20:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x91a2u << 16);
    }
L_000f3c24:;
    {
        cpu->r[9] = add_flags(cpu, 0x000f3c2cu, cpu->r[9], 0, 0);
    }
L_000f3c28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000f3c2c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f3c30:;
    {
        cpu->r[14] = rd32(cpu->r[9] + cpu->r[5]);
    }
L_000f3c34:;
    {
        cpu->r[0] = 0x0000f1f0u;
    }
L_000f3c38:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_000f3c3c:;
    {
        cpu->r[3] = 0x00008889u;
    }
L_000f3c40:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 6u, &shc); cpu->r[1] = v;
    }
L_000f3c44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8888u << 16);
    }
L_000f3c48:;
    {
        cpu->r[10] = rd32(0x000f3c50u + + 0x130u);
    }
L_000f3c4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f3c50:;
    {
        { uint64_t v = (uint64_t)cpu->r[12] * (uint64_t)cpu->r[1]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000f3c54:;
    {
        cpu->r[6] = 0x00006667u;
    }
L_000f3c58:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_000f3c5c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f3c60:;
    {
        cpu->r[10] = add_flags(cpu, 0x000f3c68u, cpu->r[10], 0, 0);
    }
L_000f3c64:;
    {
        wr8(cpu->r[8], cpu->r[7]);
    }
L_000f3c68:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x6666u << 16);
    }
L_000f3c6c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000f3c70:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000f3c74:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f3c78:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
    }
L_000f3c7c:;
    {
        cpu->r[12] = rd32(0x000f3c84u + + 0x100u);
    }
L_000f3c80:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000f3c84:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[0] = v;
    }
L_000f3c88:;
    {
        cpu->r[1] = (~0x0000003bu);
    }
L_000f3c8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f3c94u, cpu->r[12], 0, 0);
    }
L_000f3c90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000f3c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f3c98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000f3c9c:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[0]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f3ca0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 5u, &shc); cpu->r[3] = v;
    }
L_000f3ca4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f3ca8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_000f3cac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000f3cb0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000f3cb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f3cb8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 16u, &shc); cpu->r[1] = v;
    }
L_000f3cbc:;
    {
        wr16(cpu->r[4], cpu->r[3]);
    }
L_000f3cc0:;
    {
        wr8(cpu->r[11], cpu->r[1]);
    }
L_000f3cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3cfc;
        }
    }
L_000f3cc8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f3ccc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[2]; cpu->r[3] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f3cd0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000f3cd4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_000f3cd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f3cdc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_000f3ce0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f3ce4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000f3ce8:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000f3cec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000f3cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3ccc;
        }
    }
L_000f3cf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f3cf8:;
    {
        wr32(cpu->r[12] + cpu->r[7], cpu->r[2]);
    }
L_000f3cfc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000f3d00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3d28;
        }
    }
L_000f3d04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f3d08:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3d0c:;
    {
        cpu->r[14] = 0x000f3d10u; imp_strcat(cpu); /* strcat */
    }
L_000f3d10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000f3d14:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000f3d18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f3d1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f3d20:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x20u);
    }
L_000f3d24:;
    {
        goto L_000f3cb0;
    }
L_000f3d28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f3d2c:;
    {
        cpu->r[14] = 0x000f3d30u; imp_strlen(cpu); /* strlen */
    }
L_000f3d30:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000f3d34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f3d38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_000f3d3c:;
    {
        cpu->r[14] = 0x000f3d40u; imp_memcpy(cpu); /* memcpy */
    }
L_000f3d40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f3d44:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000f3d48:;
    {
        cpu->r[14] = 0x000f3d4cu; imp_strcat(cpu); /* strcat */
    }
L_000f3d4c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_000f3d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f3d10;
        }
    }
L_000f3d54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f3d58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000f3d5c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000f3d60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f3d64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f3d68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3d74;
        }
    }
L_000f3d6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000f3d70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3d74u)) return;
    }
L_000f3d74:;
    {
        cpu->r[14] = 0x000f3d78u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f3d78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 4, 15u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000f3d7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f3d80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[14] = v;
        set_nz(cpu, v);
        }
    }
L_000f3d84:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[12]);
        cpu->r[11] = (uint32_t)(int32_t)s8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
        }
    }
}

/* _ZN4Game11FormatMoneyEiPtb @ 000f3d88 (arm) */
void fn_000f3d88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f3d88:;
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
L_000f3d8c:;
    {
        cpu->r[3] = rd32(0x000f3d94u + + 0x640u);
    }
L_000f3d90:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f3d94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000114u, 1, 0);
    }
L_000f3d98:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000f3d9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f3da4u, cpu->r[3], 0, 0);
    }
L_000f3da0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f3e9c;
        }
    }
L_000f3da4:;
    {
        cpu->r[2] = rd32(0x000f3dacu + + 0x62cu);
    }
L_000f3da8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f3dac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f3db0:;
    {
        cpu->r[14] = 0x000f3db4u; fn_000962d0(cpu);
    }
L_000f3db4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f3db8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f3dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4050;
        }
    }
L_000f3dc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_000f3dc4:;
    {
        cpu->r[1] = 0x00000030u;
    }
L_000f3dc8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000f3dcc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000f3dd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000f3dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000f3dd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_000f3ddc:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x80u;
        wr16(cpu->r[4] + - 0x80u, cpu->r[1]);
        cpu->r[4] = wb_tmp;
    }
L_000f3de0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f3de4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f3de8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000f3dec:;
    {
        wr16(cpu->r[3], cpu->r[11]);
    }
L_000f3df0:;
    {
        cpu->r[14] = 0x000f3df4u; fn_000ae12c(cpu);
    }
L_000f3df4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f3df8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
        }
    }
L_000f3dfc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
        }
    }
L_000f3e00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f3e28;
        }
    }
L_000f3e04:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000f3e08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f3e0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000f3e10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f3e14:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x2u;
        cpu->r[12] = rd16(cpu->r[3] + - 0x2u);
        cpu->r[3] = wb_tmp;
    }
L_000f3e18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000f3e1c:;
    {
        wr16(cpu->r[2] + cpu->r[1], cpu->r[12]);
    }
L_000f3e20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f3e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3e14;
        }
    }
L_000f3e28:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_000f3e2c:;
    {
        uint32_t v = cpu->r[9] | cpu->r[7]; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_000f3e30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_000f3e34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f3e38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000100u, 1, 0);
    }
L_000f3e3c:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_000f3e40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3e50;
        }
    }
L_000f3e44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_000f3e48:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
        }
    }
L_000f3e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3e84;
        }
    }
L_000f3e50:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f3e54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3e74;
        }
    }
L_000f3e58:;
    {
        cpu->r[1] = rd32(0x000f3e60u + + 0x57cu);
    }
L_000f3e5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3e64u, cpu->r[1], 0, 0);
    }
L_000f3e60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_000f3e64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f3e68:;
    {
        cpu->r[14] = 0x000f3e6cu; fn_000ae830(cpu);
    }
L_000f3e6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_000f3e70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f3e74u)) return;
    }
L_000f3e74:;
    {
        cpu->r[1] = rd32(0x000f3e7cu + + 0x564u);
    }
L_000f3e78:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3e80u, cpu->r[1], 0, 0);
    }
L_000f3e7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002cu, 0, 0);
    }
L_000f3e80:;
    {
        goto L_000f3e64;
    }
L_000f3e84:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f3e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f41b8;
        }
    }
L_000f3e8c:;
    {
        cpu->r[1] = rd32(0x000f3e94u + + 0x550u);
    }
L_000f3e90:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f3e98u, cpu->r[1], 0, 0);
    }
L_000f3e94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003cu, 0, 0);
    }
L_000f3e98:;
    {
        goto L_000f3e64;
    }
L_000f3e9c:;
    {
        cpu->r[2] = rd32(0x000f3ea4u + + 0x534u);
    }
L_000f3ea0:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_000f3ea4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000f3ea8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f3eac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f3eb0:;
    {
        cpu->r[14] = 0x000f3eb4u; fn_000962d0(cpu);
    }
L_000f3eb4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000f3eb8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f3ebc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_000f3ec0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000f3ec4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_000f3ec8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 1);
    }
L_000f3ecc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000f3ed0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000f3ed4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_000f3ed8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_000f3edc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_000f3ee0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = cpu->r[7];
        }
    }
L_000f3ee4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] | 0x00000001u; cpu->r[11] = v;
        }
    }
L_000f3ee8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_000f3eec:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
        }
    }
L_000f3ef0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000f3ef4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000f3ef8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f3efc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000f3f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f3fa4;
        }
    }
L_000f3f04:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000f3f08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4128;
        }
    }
L_000f3f0c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000f3f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4238;
        }
    }
L_000f3f14:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_000f3f18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f3f1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f3f20:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_000f3f24:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_000f3f28:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_000f3f2c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_000f3f30:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f3f34:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f3f38:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
        }
    }
L_000f3f3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f4100;
        }
    }
L_000f3f40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f3f44:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000f3f48:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[5]; cpu->r[4] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_000f3f4c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000f3f50:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[11], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000f3f54:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f3f58:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f3f5c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[11], 2, 1u, &shc), 1, 0);
    }
L_000f3f60:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f3f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000f3f68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000030u, 0, 0);
    }
L_000f3f6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000f3f70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000f3f74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000f3f78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f3f7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000f3f80:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[11]);
        cpu->r[3] = wb_tmp;
    }
L_000f3f84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f3f88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x0000002cu;
        }
    }
L_000f3f8c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[11]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f3f90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3f40;
        }
    }
L_000f3f94:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f3f98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3f40;
        }
    }
L_000f3f9c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f3fa0:;
    {
        goto L_000f3de4;
    }
L_000f3fa4:;
    {
        cpu->r[1] = 0x0000270fu;
    }
L_000f3fa8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f3fac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f4060;
        }
    }
L_000f3fb0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000f3fb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f42f0;
        }
    }
L_000f3fb8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f3fbc:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_000f3fc0:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_000f3fc4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_000f3fc8:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_000f3fcc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f3fd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000f3fd4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[5]; cpu->r[12] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f3fd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f3fdc:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000f3fe0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000f3fe4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000f3fe8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f3fec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f3ff0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f3ff4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f3ff8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f3ffc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4000:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f4004:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000f4008:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f400c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000f4010:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000f4014:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_000f4018:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000f401c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f4020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f41dc;
        }
    }
L_000f4024:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000f4028:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000002cu;
        }
    }
L_000f402c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f4030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3fd4;
        }
    }
L_000f4034:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f4038:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f403c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x0000002eu;
        }
    }
L_000f4040:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000020u;
        }
    }
L_000f4044:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f4048:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f404c:;
    {
        goto L_000f3fd4;
    }
L_000f4050:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000f4054:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000f4058:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000f405c:;
    {
        goto L_000f3ebc;
    }
L_000f4060:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000f4064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4398;
        }
    }
L_000f4068:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f406c:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_000f4070:;
    {
        cpu->r[14] = 0x00005556u;
    }
L_000f4074:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_000f4078:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x5555u << 16);
    }
L_000f407c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f4080:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000f4084:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[5]; cpu->r[4] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f4088:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f408c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000f4090:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[2]; cpu->r[4] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000f4094:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000f4098:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f409c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f40a0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f40a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f40a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f40ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f40b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f40b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_000f40b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f40bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000f40c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000f40c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_000f40c8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000f40cc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f40d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f41c8;
        }
    }
L_000f40d4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000f40d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000002cu;
        }
    }
L_000f40dc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f40e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4084;
        }
    }
L_000f40e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f40e8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f40ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000020u;
        }
    }
L_000f40f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x0000002eu;
        }
    }
L_000f40f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f40f8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f40fc:;
    {
        goto L_000f4084;
    }
L_000f4100:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f4104:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f4108:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f410c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f4110:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f4114:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f4118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f411c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000f4120:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4100;
        }
    }
L_000f4124:;
    {
        goto L_000f3de4;
    }
L_000f4128:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_000f412c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f4130:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f41e8;
        }
    }
L_000f4134:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f4138:;
    {
        cpu->r[14] = 0x00006667u;
    }
L_000f413c:;
    {
        cpu->r[12] = 0x00005556u;
    }
L_000f4140:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x6666u << 16);
    }
L_000f4144:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x5555u << 16);
    }
L_000f4148:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f414c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[5]; cpu->r[7] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f4150:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000f4154:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f4158:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[11]; cpu->r[7] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f415c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f4160:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000f4164:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f4168:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_000f416c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 1u, &shc), 1, 0);
    }
L_000f4170:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f4174:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f4178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000f417c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000f4180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000f4184:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_000f4188:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f418c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[0] = v;
        }
    }
L_000f4190:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000f4194:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4228;
        }
    }
L_000f419c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f41a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f41a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000002eu;
        }
    }
L_000f41a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000020u;
        }
    }
L_000f41ac:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f41b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[7]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f41b4:;
    {
        goto L_000f414c;
    }
L_000f41b8:;
    {
        cpu->r[1] = rd32(0x000f41c0u + + 0x228u);
    }
L_000f41bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f41c4u, cpu->r[1], 0, 0);
    }
L_000f41c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_000f41c4:;
    {
        goto L_000f3e64;
    }
L_000f41c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f41cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4084;
        }
    }
L_000f41d0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f41d4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000f41d8:;
    {
        goto L_000f3de4;
    }
L_000f41dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f41e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f3fd4;
        }
    }
L_000f41e4:;
    {
        goto L_000f41d0;
    }
L_000f41e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f41ec:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_000f41f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_000f41f4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f41f8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[5]; cpu->r[11] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f41fc:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f4200:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f4204:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f4208:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f420c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f4210:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f4214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f4218:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000f421c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f41f8;
        }
    }
L_000f4220:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f4224:;
    {
        goto L_000f3de4;
    }
L_000f4228:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f422c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f414c;
        }
    }
L_000f4230:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f4234:;
    {
        goto L_000f3de4;
    }
L_000f4238:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_000f423c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f4240:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f4244:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_000f4248:;
    {
        cpu->r[0] = 0x00005556u;
    }
L_000f424c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_000f4250:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x5555u << 16);
    }
L_000f4254:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4258:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f425c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f428c;
        }
    }
L_000f4260:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f4264:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f4268:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f426c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f4270:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_000f4274:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f4278:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000f427c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000f4280:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4260;
        }
    }
L_000f4284:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f4288:;
    {
        goto L_000f3de4;
    }
L_000f428c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f4290:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000f4294:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[5]; cpu->r[11] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_000f4298:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[2]; cpu->r[11] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_000f429c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[7], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_000f42a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f42a4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f42a8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 1, 0);
    }
L_000f42ac:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_000f42b0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_000f42b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_000f42b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_000f42bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000f42c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000f42c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f42c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000f42cc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_000f42d0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f42d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000002cu;
        }
    }
L_000f42d8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f42dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f428c;
        }
    }
L_000f42e0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f42e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f428c;
        }
    }
L_000f42e8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f42ec:;
    {
        goto L_000f3de4;
    }
L_000f42f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f42f4:;
    {
        cpu->r[14] = 0x00006667u;
    }
L_000f42f8:;
    {
        cpu->r[12] = 0x00005556u;
    }
L_000f42fc:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x6666u << 16);
    }
L_000f4300:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x5555u << 16);
    }
L_000f4304:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f4308:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[5]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000f430c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f4310:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000f4314:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[2]; cpu->r[9] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_000f4318:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000f431c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f4320:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f4324:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f4328:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f432c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f4330:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4334:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f4338:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000f433c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f4340:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f4344:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000f4348:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[7] = v;
        }
    }
L_000f434c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000f4350:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f4354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4384;
        }
    }
L_000f4358:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000f435c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000002cu;
        }
    }
L_000f4360:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f4364:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4308;
        }
    }
L_000f4368:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f436c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f4370:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000020u;
        }
    }
L_000f4374:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x0000002eu;
        }
    }
L_000f4378:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[7]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f437c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000f4380:;
    {
        goto L_000f4308;
    }
L_000f4384:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4308;
        }
    }
L_000f438c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f4390:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000f4394:;
    {
        goto L_000f3de4;
    }
L_000f4398:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000f439c:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_000f43a0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_000f43a4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000f43a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[5]; cpu->r[14] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000f43ac:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000f43b0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000f43b4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f43b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f43bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_000f43c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f43c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_000f43c8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000f43cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f43a8;
        }
    }
L_000f43d0:;
    {
        goto L_000f438c;
    }
}

/* _ZN4Game20GetSpeedMetricsIndexEv @ 000f43ec (arm) */
void fn_000f43ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f43ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f43f0:;
    {
        cpu->r[4] = rd32(0x000f43f8u + + 0x64u);
    }
L_000f43f4:;
    {
        cpu->r[3] = rd32(0x000f43fcu + + 0x64u);
    }
L_000f43f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4400u, cpu->r[4], 0, 0);
    }
L_000f43fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4400:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f4404:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4424;
        }
    }
L_000f440c:;
    {
        cpu->r[6] = rd32(0x000f4414u + + 0x50u);
    }
L_000f4410:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f4414:;
    {
        cpu->r[14] = 0x000f4418u; fn_00093fa8(cpu);
    }
L_000f4418:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f441c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f4420:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4424u)) return;
    }
L_000f4424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f4428:;
    {
        cpu->r[14] = 0x000f442cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f442c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f440c;
        }
    }
L_000f4434:;
    {
        cpu->r[6] = rd32(0x000f443cu + + 0x28u);
    }
L_000f4438:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f443c:;
    {
        cpu->r[14] = 0x000f4440u; fn_00094228(cpu);
    }
L_000f4440:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f4444:;
    {
        cpu->r[14] = 0x000f4448u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4448:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f444c:;
    {
        cpu->r[14] = 0x000f4450u; fn_00093fa8(cpu);
    }
L_000f4450:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f4454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f4458:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f445cu)) return;
    }
}

/* _ZN4Game13GetSpeedValueEi @ 000f4468 (arm) */
void fn_000f4468(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4468:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f446c:;
    {
        cpu->r[4] = rd32(0x000f4474u + + 0x78u);
    }
L_000f4470:;
    {
        cpu->r[3] = rd32(0x000f4478u + + 0x78u);
    }
L_000f4474:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f4478:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4480u, cpu->r[4], 0, 0);
    }
L_000f447c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4480:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f4484:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f44c4;
        }
    }
L_000f448c:;
    {
        cpu->r[7] = rd32(0x000f4494u + + 0x60u);
    }
L_000f4490:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f4494:;
    {
        cpu->r[14] = 0x000f4498u; fn_00093fa8(cpu);
    }
L_000f4498:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f449c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f44bc;
        }
    }
L_000f44a0:;
    {
        cpu->r[2] = 0x00000267u;
    }
L_000f44a4:;
    {
        cpu->r[3] = 0x00004dd3u;
    }
L_000f44a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1062u << 16);
    }
L_000f44ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[5] = v;
    }
L_000f44b0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000f44b4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000f44b8:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[5], 1, 0);
    }
L_000f44bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f44c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f44c4u)) return;
    }
L_000f44c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f44c8:;
    {
        cpu->r[14] = 0x000f44ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f44cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f44d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f448c;
        }
    }
L_000f44d4:;
    {
        cpu->r[7] = rd32(0x000f44dcu + + 0x18u);
    }
L_000f44d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f44dc:;
    {
        cpu->r[14] = 0x000f44e0u; fn_00094228(cpu);
    }
L_000f44e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f44e4:;
    {
        cpu->r[14] = 0x000f44e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f44e8:;
    {
        goto L_000f4490;
    }
}

/* _ZN4Game21GetSpeedMetricsStringEv @ 000f44f8 (arm) */
void fn_000f44f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f44f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f44fc:;
    {
        cpu->r[4] = rd32(0x000f4504u + + 0x7cu);
    }
L_000f4500:;
    {
        cpu->r[3] = rd32(0x000f4508u + + 0x7cu);
    }
L_000f4504:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f450cu, cpu->r[4], 0, 0);
    }
L_000f4508:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f450c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f4510:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f453c;
        }
    }
L_000f4518:;
    {
        cpu->r[6] = rd32(0x000f4520u + + 0x68u);
    }
L_000f451c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f4520:;
    {
        cpu->r[14] = 0x000f4524u; fn_00093fa8(cpu);
    }
L_000f4524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f4528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4570;
        }
    }
L_000f452c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_000f4530:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f4534:;
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
L_000f4538:;
    {
        return fn_000aeb58(cpu);
    }
L_000f453c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f4540:;
    {
        cpu->r[14] = 0x000f4544u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4518;
        }
    }
L_000f454c:;
    {
        cpu->r[6] = rd32(0x000f4554u + + 0x34u);
    }
L_000f4550:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f4554:;
    {
        cpu->r[14] = 0x000f4558u; fn_00094228(cpu);
    }
L_000f4558:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f455c:;
    {
        cpu->r[14] = 0x000f4560u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4560:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f4564:;
    {
        cpu->r[14] = 0x000f4568u; fn_00093fa8(cpu);
    }
L_000f4568:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000f456c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f452c;
        }
    }
L_000f4570:;
    {
        cpu->r[0] = 0x00000019u;
    }
L_000f4574:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f4578:;
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
L_000f457c:;
    {
        return fn_000aeb58(cpu);
    }
}

/* _ZN4Game10FormatDateEiiiPt @ 000f458c (arm) */
void fn_000f458c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f458c:;
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
L_000f4590:;
    {
        cpu->r[7] = rd32(0x000f4598u + + 0x264u);
    }
L_000f4594:;
    {
        cpu->r[4] = rd32(0x000f459cu + + 0x264u);
    }
L_000f4598:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000f459c:;
    {
        cpu->r[7] = add_flags(cpu, 0x000f45a4u, cpu->r[7], 0, 0);
    }
L_000f45a0:;
    {
        cpu->r[10] = rd32(0x000f45a8u + + 0x25cu);
    }
L_000f45a4:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000f45a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000f45ac:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000f45b0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000f45b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000f45b8:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000f45bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f45c0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f45c4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x80u);
    }
L_000f45c8:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000f45cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4674;
        }
    }
L_000f45d0:;
    {
        cpu->r[8] = rd32(0x000f45d8u + + 0x230u);
    }
L_000f45d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000f45d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f45dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000f45e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4638;
        }
    }
L_000f45e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000f45e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000002fu;
        }
    }
L_000f45ec:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[13] + + 0x18u, cpu->r[3]);
        }
    }
L_000f45f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4638;
        }
    }
L_000f45f4:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000f45f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f45fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4650;
        }
    }
L_000f4604:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000f4608:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f460c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000f4610:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000f47b0;
        case 1: goto L_000f475c;
        case 2: goto L_000f475c;
        case 3: goto L_000f475c;
        case 4: goto L_000f475c;
        case 5: goto L_000f475c;
        case 6: goto L_000f475c;
        case 7: goto L_000f469c;
        default: guest_unimplemented(cpu, 0x000f4610u); return; }
        }
    }
L_000f4614:;
    {
        goto L_000f47e0;
    }
L_000f4638:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000f463c:;
    {
        cpu->r[3] = 0x0000002eu;
    }
L_000f4640:;
    {
        wr16(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000f4644:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f4648:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f464c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4604;
        }
    }
L_000f4650:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4654:;
    {
        cpu->r[14] = 0x000f4658u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4658:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f465c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4604;
        }
    }
L_000f4660:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000f4664:;
    {
        cpu->r[14] = 0x000f4668u; fn_00094228(cpu);
    }
L_000f4668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f466c:;
    {
        cpu->r[14] = 0x000f4670u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4670:;
    {
        goto L_000f4604;
    }
L_000f4674:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4678:;
    {
        cpu->r[14] = 0x000f467cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f467c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f45d0;
        }
    }
L_000f4684:;
    {
        cpu->r[8] = rd32(0x000f468cu + + 0x17cu);
    }
L_000f4688:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000f468c:;
    {
        cpu->r[14] = 0x000f4690u; fn_00094228(cpu);
    }
L_000f4690:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4694:;
    {
        cpu->r[14] = 0x000f4698u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4698:;
    {
        goto L_000f45d4;
    }
L_000f469c:;
    {
        cpu->r[3] = rd32(0x000f46a4u + + 0x168u);
    }
L_000f46a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000f46a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000f46a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f46ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f46b4u, cpu->r[3], 0, 0);
    }
L_000f46b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000f46b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000004cu, 0, 0);
    }
L_000f46b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000f46bc:;
    {
        cpu->r[14] = 0x000f46c0u; imp_sprintf(cpu); /* sprintf */
    }
L_000f46c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f46c4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f46c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f46cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_000f46d0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000f46d4:;
    {
        cpu->r[14] = 0x000f46d8u; imp_sprintf(cpu); /* sprintf */
    }
L_000f46d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f46dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f46e0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f46e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_000f46e8:;
    {
        cpu->r[14] = 0x000f46ecu; imp_sprintf(cpu); /* sprintf */
    }
L_000f46ec:;
    {
        cpu->r[1] = rd32(0x000f46f4u + + 0x11cu);
    }
L_000f46f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000f46f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f46f8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000f46fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f4704u, cpu->r[1], 0, 0);
    }
L_000f4700:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f4704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000054u, 0, 0);
    }
L_000f4708:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f470c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000f4710:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000f4714:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000f4718:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000f471c:;
    {
        cpu->r[14] = 0x000f4720u; imp_sprintf(cpu); /* sprintf */
    }
L_000f4720:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[4]);
    }
L_000f4724:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000f4728:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f472c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000f4730:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000f4734:;
    {
        cpu->r[14] = 0x000f4738u; imp_strlen(cpu); /* strlen */
    }
L_000f4738:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000f473c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000f4720;
        }
    }
L_000f4740:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000f4744:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000f4748:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f474c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f4750:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f47f8;
        }
    }
L_000f4754:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000f4758:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f475cu)) return;
    }
L_000f475c:;
    {
        cpu->r[3] = rd32(0x000f4764u + + 0xb0u);
    }
L_000f4760:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000f4764:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f4768:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f476c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f4774u, cpu->r[3], 0, 0);
    }
L_000f4770:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000f4774:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_000f4778:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000f477c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000f4780:;
    {
        cpu->r[14] = 0x000f4784u; imp_sprintf(cpu); /* sprintf */
    }
L_000f4784:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f4788:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f478c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4790:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_000f4794:;
    {
        cpu->r[14] = 0x000f4798u; imp_sprintf(cpu); /* sprintf */
    }
L_000f4798:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f479c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000f47a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f47a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000004cu, 0, 0);
    }
L_000f47a8:;
    {
        cpu->r[14] = 0x000f47acu; imp_sprintf(cpu); /* sprintf */
    }
L_000f47ac:;
    {
        goto L_000f46ec;
    }
L_000f47b0:;
    {
        cpu->r[3] = rd32(0x000f47b8u + + 0x60u);
    }
L_000f47b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000f47b8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f47bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f47c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f47c8u, cpu->r[3], 0, 0);
    }
L_000f47c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000044u, 0, 0);
    }
L_000f47c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000f47cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000f47d0:;
    {
        cpu->r[14] = 0x000f47d4u; imp_sprintf(cpu); /* sprintf */
    }
L_000f47d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000f47d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f47dc:;
    {
        goto L_000f4788;
    }
L_000f47e0:;
    {
        cpu->r[3] = rd32(0x000f47e8u + + 0x34u);
    }
L_000f47e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000f47e8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000f47ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f47f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f47f8u, cpu->r[3], 0, 0);
    }
L_000f47f4:;
    {
        goto L_000f47c4;
    }
L_000f47f8:;
    {
        cpu->r[14] = 0x000f47fcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f47fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000f4800:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_000f4804:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f4808:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_000f480c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 4, 11u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000f4810:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
L_000f4814:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 3, 10u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000f4818:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[0]);
        cpu->r[13] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000f481c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[0], 3, 9u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game10FormatDateEiiiiPt @ 000f4820 (arm) */
void fn_000f4820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4820:;
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
L_000f4824:;
    {
        cpu->r[4] = rd32(0x000f482cu + + 0x274u);
    }
L_000f4828:;
    {
        cpu->r[10] = rd32(0x000f4830u + + 0x274u);
    }
L_000f482c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000f4830:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4838u, cpu->r[4], 0, 0);
    }
L_000f4834:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000f4838:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000f483c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000f4840:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f4844:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4848:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f484c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4960;
        }
    }
L_000f4850:;
    {
        cpu->r[9] = rd32(0x000f4858u + + 0x250u);
    }
L_000f4854:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f4858:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f485c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000f4860:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f4864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f49c4;
        }
    }
L_000f4868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f486c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f4870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4980;
        }
    }
L_000f4874:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000f4878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f49b8;
        }
    }
L_000f487c:;
    {
        cpu->r[8] = rd32(0x000f4884u + + 0x228u);
    }
L_000f4880:;
    {
        cpu->r[8] = add_flags(cpu, 0x000f4888u, cpu->r[8], 0, 0);
    }
L_000f4884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f4888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4938;
        }
    }
L_000f488c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f4890:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_000f4894:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f4898:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f48c8;
        }
    }
L_000f489c:;
    {
        cpu->r[1] = rd32(0x000f48a4u + + 0x20cu);
    }
L_000f48a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000f48a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f48a8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000f48ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_000f48b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f48b8u, cpu->r[1], 0, 0);
    }
L_000f48b4:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000f48b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000f48bc:;
    {
        cpu->r[14] = 0x000f48c0u; fn_000ae830(cpu);
    }
L_000f48c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f48c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f48c8u)) return;
    }
L_000f48c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f48cc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000f48d0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f48d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f49ec;
        }
    }
L_000f48d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000f48dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f489c;
        }
    }
L_000f48e0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f48e4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000f48e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f48ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f49d0;
        }
    }
L_000f48f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000f48f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f489c;
        }
    }
L_000f48f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f48fc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000f4900:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4a48;
        }
    }
L_000f4908:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f490c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f489c;
        }
    }
L_000f4910:;
    {
        cpu->r[1] = rd32(0x000f4918u + + 0x19cu);
    }
L_000f4914:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f4918:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_000f491c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_000f4920:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f4928u, cpu->r[1], 0, 0);
    }
L_000f4924:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000f4928:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000f492c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000f4930:;
    {
        cpu->r[14] = 0x000f4934u; fn_000ae830(cpu);
    }
L_000f4934:;
    {
        goto L_000f48c0;
    }
L_000f4938:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f493c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4940:;
    {
        cpu->r[14] = 0x000f4944u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4944:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f488c;
        }
    }
L_000f494c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f4950:;
    {
        cpu->r[14] = 0x000f4954u; fn_00094228(cpu);
    }
L_000f4954:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4958:;
    {
        cpu->r[14] = 0x000f495cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f495c:;
    {
        goto L_000f488c;
    }
L_000f4960:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f4964:;
    {
        cpu->r[14] = 0x000f4968u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4968:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f496c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4a28;
        }
    }
L_000f4970:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4974:;
    {
        cpu->r[9] = rd32(0x000f497cu + + 0x12cu);
    }
L_000f4978:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000f497c:;
    {
        goto L_000f4858;
    }
L_000f4980:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f4984:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4988:;
    {
        cpu->r[14] = 0x000f498cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f498c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f49a4;
        }
    }
L_000f4994:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f4998:;
    {
        cpu->r[14] = 0x000f499cu; fn_00094228(cpu);
    }
L_000f499c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f49a0:;
    {
        cpu->r[14] = 0x000f49a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f49a4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000f49a8:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000f49ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000f49b0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000f49b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f487c;
        }
    }
L_000f49b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000f49bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f49c0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000f49c4:;
    {
        cpu->r[8] = rd32(0x000f49ccu + + 0xecu);
    }
L_000f49c8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000f49d0u, cpu->r[8], 0, 0);
    }
L_000f49cc:;
    {
        goto L_000f4884;
    }
L_000f49d0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f49d4:;
    {
        cpu->r[14] = 0x000f49d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f49d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f49dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4a7c;
        }
    }
L_000f49e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f49e4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f49e8:;
    {
        goto L_000f48f0;
    }
L_000f49ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f49f0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f49f4:;
    {
        cpu->r[14] = 0x000f49f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f49f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f49fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4a00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[11]);
        }
    }
L_000f4a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f48d8;
        }
    }
L_000f4a08:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4a0c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f4a10:;
    {
        cpu->r[14] = 0x000f4a14u; fn_00094228(cpu);
    }
L_000f4a14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f4a18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f4a1c:;
    {
        cpu->r[14] = 0x000f4a20u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4a20:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_000f4a24:;
    {
        goto L_000f48d8;
    }
L_000f4a28:;
    {
        cpu->r[9] = rd32(0x000f4a30u + + 0x78u);
    }
L_000f4a2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f4a30:;
    {
        cpu->r[14] = 0x000f4a34u; fn_00094228(cpu);
    }
L_000f4a34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f4a38:;
    {
        cpu->r[14] = 0x000f4a3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4a3c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4a40:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000f4a44:;
    {
        goto L_000f4858;
    }
L_000f4a48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f4a4c:;
    {
        cpu->r[14] = 0x000f4a50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4a50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000f4a58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[3]);
        }
    }
L_000f4a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4908;
        }
    }
L_000f4a60:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f4a64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4a68:;
    {
        cpu->r[14] = 0x000f4a6cu; fn_00094228(cpu);
    }
L_000f4a6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f4a70:;
    {
        cpu->r[14] = 0x000f4a74u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4a74:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000f4a78:;
    {
        goto L_000f4908;
    }
L_000f4a7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000f4a80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f4a84:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f4a88:;
    {
        cpu->r[14] = 0x000f4a8cu; fn_00094228(cpu);
    }
L_000f4a8c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4a90:;
    {
        cpu->r[14] = 0x000f4a94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4a94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f4a98:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f4a9c:;
    {
        goto L_000f48f0;
    }
}

/* _ZN16GS_ResumeManager7ReleaseEv @ 000f4abc (arm) */
void fn_000f4abc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4abc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_ResumeManager8isKindOfEi @ 000f4ac0 (arm) */
void fn_000f4ac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4ac0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000059u, 1, 1);
    }
L_000f4ac4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f4ac8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f4acc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_9 @ 000f4ad0 (arm) */
void fn_000f4ad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4ad0:;
    {
        cpu->r[2] = rd32(0x000f4ad8u + + 0x28u);
    }
L_000f4ad4:;
    {
        cpu->r[1] = rd32(0x000f4adcu + + 0x28u);
    }
L_000f4ad8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f4ae0u, cpu->r[2], 0, 0);
    }
L_000f4adc:;
    {
        cpu->r[3] = rd32(0x000f4ae4u + + 0x24u);
    }
L_000f4ae0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000f4ae4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f4aecu, cpu->r[3], 0, 0);
    }
L_000f4ae8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f4aec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000046u, 1, 0);
    }
L_000f4af0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_000f4af4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f4af8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000f4afc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16GS_ResumeManagerD1Ev @ 000f4b0c (arm) */
void fn_000f4b0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4b0c:;
    {
        cpu->r[3] = rd32(0x000f4b14u + + 0x24u);
    }
L_000f4b10:;
    {
        cpu->r[2] = rd32(0x000f4b18u + + 0x24u);
    }
L_000f4b14:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f4b1cu, cpu->r[3], 0, 0);
    }
L_000f4b18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f4b1c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f4b20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f4b24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f4b28:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f4b2c:;
    {
        cpu->r[14] = 0x000f4b30u; fn_000ec084(cpu);
    }
L_000f4b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4b34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4b38u)) return;
    }
}

/* _ZN16GS_ResumeManagerC1Ev @ 000f4b40 (arm) */
void fn_000f4b40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4b40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f4b44:;
    {
        cpu->r[4] = rd32(0x000f4b4cu + + 0x20u);
    }
L_000f4b48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f4b4c:;
    {
        cpu->r[14] = 0x000f4b50u; fn_000eaca4(cpu);
    }
L_000f4b50:;
    {
        cpu->r[3] = rd32(0x000f4b58u + + 0x18u);
    }
L_000f4b54:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4b5cu, cpu->r[4], 0, 0);
    }
L_000f4b58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f4b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4b60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f4b64:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000f4b68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4b6cu)) return;
    }
}

/* _ZN16GS_ResumeManagerC2Ev @ 000f4b74 (arm) */
void fn_000f4b74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4b74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f4b78:;
    {
        cpu->r[4] = rd32(0x000f4b80u + + 0x20u);
    }
L_000f4b7c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f4b80:;
    {
        cpu->r[14] = 0x000f4b84u; fn_000eaca4(cpu);
    }
L_000f4b84:;
    {
        cpu->r[3] = rd32(0x000f4b8cu + + 0x18u);
    }
L_000f4b88:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4b90u, cpu->r[4], 0, 0);
    }
L_000f4b8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f4b90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4b94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000f4b98:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000f4b9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4ba0u)) return;
    }
}

/* _ZN16GS_ResumeManagerD0Ev @ 000f4ba8 (arm) */
void fn_000f4ba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4ba8:;
    {
        cpu->r[3] = rd32(0x000f4bb0u + + 0x2cu);
    }
L_000f4bac:;
    {
        cpu->r[2] = rd32(0x000f4bb4u + + 0x2cu);
    }
L_000f4bb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f4bb8u, cpu->r[3], 0, 0);
    }
L_000f4bb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f4bb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f4bbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f4bc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f4bc4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f4bc8:;
    {
        cpu->r[14] = 0x000f4bccu; fn_000ec084(cpu);
    }
L_000f4bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4bd0:;
    {
        cpu->r[14] = 0x000f4bd4u; fn_0018ba20(cpu);
    }
L_000f4bd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f4bd8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4bdcu)) return;
    }
}

/* _ZN16GS_ResumeManager6CreateEv @ 000f4be4 (arm) */
void fn_000f4be4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4be4:;
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
L_000f4be8:;
    {
        cpu->r[5] = rd32(0x000f4bf0u + + 0x1e8u);
    }
L_000f4bec:;
    {
        cpu->r[10] = rd32(0x000f4bf4u + + 0x1e8u);
    }
L_000f4bf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f4bf4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f4bfcu, cpu->r[5], 0, 0);
    }
L_000f4bf8:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[3]);
    }
L_000f4bfc:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[3]);
    }
L_000f4c00:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000f4c04:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000f4c08:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_000f4c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f4c10:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f4c14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000f4c18:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f4c1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4c20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f4c24:;
    {
        wr8(cpu->r[4] + + 0x7du, cpu->r[3]);
    }
L_000f4c28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f4c2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000f4c30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f4c34:;
    {
        wr8(cpu->r[4] + + 0x79u, cpu->r[2]);
    }
L_000f4c38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f4d9c;
        }
    }
L_000f4c3c:;
    {
        cpu->r[8] = rd32(0x000f4c44u + + 0x19cu);
    }
L_000f4c40:;
    {
        cpu->r[7] = rd32(0x000f4c48u + + 0x19cu);
    }
L_000f4c44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000f4c48:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f4c4c:;
    {
        cpu->r[14] = 0x000f4c50u; fn_00135f50(cpu);
    }
L_000f4c50:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f4c54:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000f4c58:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4d18;
        }
    }
L_000f4c60:;
    {
        cpu->r[6] = rd32(0x000f4c68u + + 0x180u);
    }
L_000f4c64:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f4c68:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f4c6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4c70:;
    {
        cpu->r[14] = 0x000f4c74u; fn_0018aa44(cpu);
    }
L_000f4c74:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4db4;
        }
    }
L_000f4c7c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f4c80:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f4c84:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4d5c;
        }
    }
L_000f4c8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f4c90:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f4c94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4c98:;
    {
        cpu->r[6] = 0x00001c38u;
    }
L_000f4c9c:;
    {
        cpu->r[14] = 0x000f4ca0u; fn_0018aa70(cpu);
    }
L_000f4ca0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000f4ca4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f4ca8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_000f4cac:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[2]; cpu->r[0] = v;
    }
L_000f4cb0:;
    {
        wr8(cpu->r[4] + + 0x78u, cpu->r[0]);
    }
L_000f4cb4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f4cb8:;
    {
        cpu->r[14] = 0x000f4cbcu; fn_00135e3c(cpu);
    }
L_000f4cbc:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000f4cc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x98u);
    }
L_000f4cc4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f4cc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000f4ccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f4cd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000f4cd4:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[0]);
    }
L_000f4cd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000f4cdc:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_000f4ce0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f4ce4:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_000f4ce8:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[1]);
    }
L_000f4cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4d0c;
        }
    }
L_000f4cf0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f4cf4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f4cf8:;
    {
        cpu->r[14] = 0x000f4d00u;
    }
L_000f4cfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4d00u)) return;
    }
L_000f4d00:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f4d04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4d08:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[2]);
    }
L_000f4d0c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f4d10:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[0]);
    }
L_000f4d14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4d18u)) return;
    }
L_000f4d18:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4d1c:;
    {
        cpu->r[14] = 0x000f4d20u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4d20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4d24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4c60;
        }
    }
L_000f4d28:;
    {
        cpu->r[6] = rd32(0x000f4d30u + + 0xb8u);
    }
L_000f4d2c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f4d30:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4d34:;
    {
        cpu->r[14] = 0x000f4d38u; fn_0018aa20(cpu);
    }
L_000f4d38:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4d3c:;
    {
        cpu->r[14] = 0x000f4d40u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4d40:;
    {
        cpu->r[3] = rd32(0x000f4d48u + + 0xa4u);
    }
L_000f4d44:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000f4d48:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f4d4c:;
    {
        cpu->r[3] = rd32(0x000f4d54u + + 0x9cu);
    }
L_000f4d50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f4d54:;
    {
        cpu->r[14] = 0x000f4d58u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f4d58:;
    {
        goto L_000f4c64;
    }
L_000f4d5c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f4d60:;
    {
        cpu->r[14] = 0x000f4d64u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f4d64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4c8c;
        }
    }
L_000f4d6c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f4d70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4d74:;
    {
        cpu->r[14] = 0x000f4d78u; fn_0018aa20(cpu);
    }
L_000f4d78:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f4d7c:;
    {
        cpu->r[14] = 0x000f4d80u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f4d80:;
    {
        cpu->r[3] = rd32(0x000f4d88u + + 0x64u);
    }
L_000f4d84:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4d88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f4d8c:;
    {
        cpu->r[3] = rd32(0x000f4d94u + + 0x5cu);
    }
L_000f4d90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f4d94:;
    {
        cpu->r[14] = 0x000f4d98u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f4d98:;
    {
        goto L_000f4c8c;
    }
L_000f4d9c:;
    {
        cpu->r[14] = 0x000f4da0u; fn_000c3fac(cpu);
    }
L_000f4da0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f4da4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000f4da8:;
    {
        cpu->r[14] = 0x000f4dacu; fn_000b9650(cpu);
    }
L_000f4dac:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[0]);
    }
L_000f4db0:;
    {
        goto L_000f4c3c;
    }
L_000f4db4:;
    {
        cpu->r[14] = 0x000f4db8u; fn_00097ad0(cpu);
    }
L_000f4db8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000f4dbc:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f4dc0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f4dc4:;
    {
        cpu->r[14] = 0x000f4dc8u; fn_0018aa58(cpu);
    }
L_000f4dc8:;
    {
        cpu->r[14] = 0x000f4dccu; fn_00097ad0(cpu);
    }
L_000f4dcc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f4dd0:;
    {
        cpu->r[14] = 0x000f4dd4u; fn_0018b5c8(cpu);
    }
L_000f4dd4:;
    {
        goto L_000f4c7c;
    }
}

/* _ZN16GS_ResumeManager6RenderEv @ 000f4df4 (arm) */
void fn_000f4df4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f4df4:;
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
L_000f4df8:;
    {
        cpu->r[4] = rd32(0x000f4e00u + + 0x4e8u);
    }
L_000f4dfc:;
    {
        cpu->r[3] = rd32(0x000f4e04u + + 0x4e8u);
    }
L_000f4e00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000022cu, 1, 0);
    }
L_000f4e04:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f4e0cu, cpu->r[4], 0, 0);
    }
L_000f4e08:;
    {
        cpu->r[2] = rd32(0x000f4e10u + + 0x4e0u);
    }
L_000f4e0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f4e10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4e14:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f4e18:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000f4e1c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000f4e20:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f4e24:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f4e28:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000f4e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f51e0;
        }
    }
L_000f4e30:;
    {
        cpu->r[2] = rd32(0x000f4e38u + + 0x4bcu);
    }
L_000f4e34:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_000f4e38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f4e3c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000f4e40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000f4e44:;
    {
        cpu->r[14] = 0x000f4e48u; fn_0012df9c(cpu);
    }
L_000f4e48:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f4e4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f4e50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f4e54:;
    {
        cpu->r[14] = 0x000f4e58u; fn_0012ec44(cpu);
    }
L_000f4e58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f4e5c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000f4e60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f4e64:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f4e68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f4e6c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f4e70:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4e74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f4e78:;
    {
        cpu->r[14] = 0x000f4e7cu; fn_0012ed70(cpu);
    }
L_000f4e7c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000f4e80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f4e84:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4e88:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f4e8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f4e90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f4e94:;
    {
        cpu->r[14] = 0x000f4e98u; fn_0012fa2c(cpu);
    }
L_000f4e98:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f4e9c:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_000f4ea0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f4ea4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f4ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4ec4;
        }
    }
L_000f4eac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f4eb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f4eb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f4eb8:;
    {
        cpu->r[14] = 0x000f4ec0u;
    }
L_000f4ebc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f4ec0u)) return;
    }
L_000f4ec0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f4ec4:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_000f4ec8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f4ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f4ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4ee0;
        }
    }
L_000f4ed4:;
    {
        cpu->r[1] = 0x00030000u;
    }
L_000f4ed8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4edc:;
    {
        cpu->r[14] = 0x000f4ee0u; fn_000afdd8(cpu);
    }
L_000f4ee0:;
    {
        cpu->r[8] = rd32(0x000f4ee8u + + 0x410u);
    }
L_000f4ee4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f4ee8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000f4eec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4ef0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5224;
        }
    }
L_000f4ef4:;
    {
        cpu->r[7] = rd32(0x000f4efcu + + 0x400u);
    }
L_000f4ef8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f4efc:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f4f00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4f04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4f08:;
    {
        cpu->r[14] = 0x000f4f0cu; fn_0018aa44(cpu);
    }
L_000f4f0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f4f10:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f4f14:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f4f18:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000f4f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f51e8;
        }
    }
L_000f4f20:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f4f24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000f4f28:;
    {
        cpu->r[14] = 0x000f4f2cu; fn_00096a08(cpu);
    }
L_000f4f2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f4f30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f4f34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f4f38:;
    {
        cpu->r[14] = 0x000f4f3cu; fn_0018aa44(cpu);
    }
L_000f4f3c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f4f40:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000f4f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f51e0;
        }
    }
L_000f4f48:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000f4f4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f4f50:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000f4f54:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000f4f58:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f4f5c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000f4f60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000f4f64:;
    {
        cpu->r[14] = 0x000f4f68u; fn_000ad8a0(cpu);
    }
L_000f4f68:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f4f6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x84u);
    }
L_000f4f70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f4f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f51d8;
        }
    }
L_000f4f78:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_000f4f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5284;
        }
    }
L_000f4f80:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f4f84:;
    {
        cpu->r[0] = 0x0000008fu;
    }
L_000f4f88:;
    {
        cpu->r[14] = 0x000f4f8cu; fn_000aeb58(cpu);
    }
L_000f4f8c:;
    {
        cpu->r[1] = rd32(0x000f4f94u + + 0x36cu);
    }
L_000f4f90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000f4f94:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f4f9cu, cpu->r[1], 0, 0);
    }
L_000f4f98:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f4f9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f4fa0:;
    {
        cpu->r[14] = 0x000f4fa4u; fn_000ae830(cpu);
    }
L_000f4fa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_000f4fa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000220u, 0, 0);
    }
L_000f4fac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f4fb0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f4fb4:;
    {
        cpu->r[14] = 0x000f4fb8u; fn_000aa404(cpu);
    }
L_000f4fb8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f4fbc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000f4fc0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 30u, &shc); cpu->r[3] = v;
    }
L_000f4fc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000f4fc8:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_000f4fcc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000f4fd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000f4fd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f5010;
        }
    }
L_000f4fd8:;
    {
        cpu->r[11] = rd32(0x000f4fe0u + + 0x324u);
    }
L_000f4fdc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000f4fe4u, cpu->r[11], 0, 0);
    }
L_000f4fe0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f4fe4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f4fe8:;
    {
        cpu->r[14] = 0x000f4fecu; fn_000ae248(cpu);
    }
L_000f4fec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f4ff0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000f4ff4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000f4ff8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 30u, &shc); cpu->r[3] = v;
    }
L_000f4ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000f5000:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[2] = v;
    }
L_000f5004:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000f5008:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000f500c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f4fe0;
        }
    }
L_000f5010:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f5014:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000f5018:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f501c:;
    {
        wr8(cpu->r[9] + + 0x50u, cpu->r[11]);
    }
L_000f5020:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f5024:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000f5028:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f502c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f5030:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000f5034:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000014u, 1, 0);
    }
L_000f5038:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x224u);
    }
L_000f503c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000f5040:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000f5044:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_000f5048:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f504c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000f5050:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000f5054:;
    {
        cpu->r[14] = 0x000f5058u; fn_000ad19c(cpu);
    }
L_000f5058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f505c:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000f5060:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f5064:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f5068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f506c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000f5070:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000f5074:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f5078:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000f507c:;
    {
        cpu->r[14] = 0x000f5080u; fn_0012fa2c(cpu);
    }
L_000f5080:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000f5084:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000f5088:;
    {
        cpu->r[3] = rd32(0x000f5090u + + 0x278u);
    }
L_000f508c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5090:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000f5094:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f5098:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f50a0u, cpu->r[3], 0, 0);
    }
L_000f509c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000f50a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f50a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_000f50a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000f50ac:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000f50b0:;
    {
        cpu->r[14] = 0x000f50b4u; fn_000ad8a0(cpu);
    }
L_000f50b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f50b8:;
    {
        cpu->r[14] = 0x000f50bcu; fn_0012f780(cpu);
    }
L_000f50bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f50c0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000f50c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000021cu, 0, 0);
    }
L_000f50c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000218u, 0, 0);
    }
L_000f50cc:;
    {
        cpu->r[14] = 0x000f50d0u; fn_000a8d10(cpu);
    }
L_000f50d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x80u);
    }
L_000f50d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
    }
L_000f50d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000f50dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f5268;
        }
    }
L_000f50e0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x21cu);
    }
L_000f50e4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8] + cpu->r[8]; cpu->r[0] = v;
    }
L_000f50e8:;
    {
        cpu->r[14] = 0x000f50ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000f50ec:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000f50f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9cu);
    }
L_000f50f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f50f8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_000f50fc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[11]);
        }
    }
L_000f5100:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_000f5104:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f5108:;
    {
        cpu->r[5] = rd32(0x000f5110u + + 0x1fcu);
    }
L_000f510c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5110:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f5118u, cpu->r[5], 0, 0);
    }
L_000f5114:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000f5118:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_000f511c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000f5120:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f5124:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000003u, 0, 0);
    }
L_000f5128:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_000f512c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x218u);
    }
L_000f5130:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_000f5134:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000f5138:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000f513c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000f5140:;
    {
        cpu->r[14] = 0x000f5144u; fn_0012fa2c(cpu);
    }
L_000f5144:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000f5148:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f514c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f52b8;
        }
    }
L_000f5150:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_000f5154:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000f5158:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_000f515c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000f5160:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_000f5164:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_000f5168:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000f516c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5170:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000f5174:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000f5178:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000f517c:;
    {
        cpu->r[14] = 0x000f5180u; fn_000ad8a0(cpu);
    }
L_000f5180:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f5184:;
    {
        cpu->r[14] = 0x000f5188u; fn_0012f780(cpu);
    }
L_000f5188:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f518c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f5190:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f5194:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000f5198:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f519c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000f51a0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000f51a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f51a8:;
    {
        cpu->r[14] = 0x000f51acu; fn_0012fa2c(cpu);
    }
L_000f51ac:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000f51b0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000f51b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000f51b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f51bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000f51c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000f51c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000f51c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000f51cc:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000f51d0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000f51d4:;
    {
        cpu->r[14] = 0x000f51d8u; fn_000ad8a0(cpu);
    }
L_000f51d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f51dc:;
    {
        cpu->r[14] = 0x000f51e0u; fn_0012f780(cpu);
    }
L_000f51e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_000f51e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f51e8u)) return;
    }
L_000f51e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f51ec:;
    {
        cpu->r[14] = 0x000f51f0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f51f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f51f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4f20;
        }
    }
L_000f51f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f51fc:;
    {
        cpu->r[14] = 0x000f5200u; fn_0018aa20(cpu);
    }
L_000f5200:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f5204:;
    {
        cpu->r[14] = 0x000f5208u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f5208:;
    {
        cpu->r[3] = rd32(0x000f5210u + + 0x100u);
    }
L_000f520c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f5210:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5214:;
    {
        cpu->r[3] = rd32(0x000f521cu + + 0xf8u);
    }
L_000f5218:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f521c:;
    {
        cpu->r[14] = 0x000f5220u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f5220:;
    {
        goto L_000f4f20;
    }
L_000f5224:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5228:;
    {
        cpu->r[14] = 0x000f522cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f522c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f4ef4;
        }
    }
L_000f5234:;
    {
        cpu->r[7] = rd32(0x000f523cu + + 0xc0u);
    }
L_000f5238:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f523c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f5240:;
    {
        cpu->r[14] = 0x000f5244u; fn_0018aa20(cpu);
    }
L_000f5244:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5248:;
    {
        cpu->r[14] = 0x000f524cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f524c:;
    {
        cpu->r[3] = rd32(0x000f5254u + + 0xbcu);
    }
L_000f5250:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000f5254:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5258:;
    {
        cpu->r[3] = rd32(0x000f5260u + + 0xb4u);
    }
L_000f525c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5260:;
    {
        cpu->r[14] = 0x000f5264u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f5264:;
    {
        goto L_000f4ef8;
    }
L_000f5268:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x21cu);
    }
L_000f526c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_000f5270:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 1u, &shc); cpu->r[11] = v;
    }
L_000f5274:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[0] = v;
    }
L_000f5278:;
    {
        cpu->r[14] = 0x000f527cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000f527c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000f5280:;
    {
        goto L_000f50f0;
    }
L_000f5284:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f5288:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f528c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f5290:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000f5294:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5298:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f529c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000f52a0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000f52a4:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000f52a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f52ac:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000f52b0:;
    {
        cpu->r[14] = 0x000f52b4u; fn_0012fa2c(cpu);
    }
L_000f52b4:;
    {
        goto L_000f50b4;
    }
L_000f52b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f52bc:;
    {
        cpu->r[14] = 0x000f52c0u; fn_0012f780(cpu);
    }
L_000f52c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f52c4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000f52c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f52cc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000f52d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f52d4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000f52d8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000f52dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f52e0:;
    {
        cpu->r[14] = 0x000f52e4u; fn_0012fa2c(cpu);
    }
L_000f52e4:;
    {
        goto L_000f51d8;
    }
}

/* _ZN16GS_ResumeManager6UpdateEv @ 000f5318 (arm) */
void fn_000f5318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5318:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x80u);
    }
L_000f531c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_000f5320:;
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
L_000f5324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5328:;
    {
        cpu->r[5] = rd32(0x000f5330u + + 0x364u);
    }
L_000f532c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f5330:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f5334:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f533cu, cpu->r[5], 0, 0);
    }
L_000f5338:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f53b4;
        }
    }
L_000f533c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8cu);
    }
L_000f5340:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5344:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f547c;
        }
    }
L_000f5348:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x90u);
    }
L_000f534c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5350:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000f537c;
        }
    }
L_000f5354:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_000f5358:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000f535c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f5360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5498;
        }
    }
L_000f5364:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5540;
        }
    }
L_000f536c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f5370:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_000f5374:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f5378:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f537cu)) return;
    }
L_000f537c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x94u);
    }
L_000f5380:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5384:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000f5354;
        }
    }
L_000f5388:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x7du);
    }
L_000f538c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f536c;
        }
    }
L_000f5394:;
    {
        cpu->r[3] = rd32(0x000f539cu + + 0x2fcu);
    }
L_000f5398:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f539c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000f53a0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f53a4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f53a8:;
    {
        cpu->r[14] = 0x000f53acu; fn_000c3ee4(cpu);
    }
L_000f53ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_000f53b0:;
    {
        goto L_000f536c;
    }
L_000f53b4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000f53b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f53bc:;
    {
        cpu->r[14] = 0x000f53c0u; fn_00096a08(cpu);
    }
L_000f53c0:;
    {
        cpu->r[6] = rd32(0x000f53c8u + + 0x2d4u);
    }
L_000f53c4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f53c8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f53cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f53d0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f53d4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000f53d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f53dc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000f53e0:;
    {
        cpu->r[14] = 0x000f53e4u; fn_00136660(cpu);
    }
L_000f53e4:;
    {
        cpu->r[3] = rd32(0x000f53ecu + + 0x2b4u);
    }
L_000f53e8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f53ec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000f53f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f53f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5438;
        }
    }
L_000f53f8:;
    {
        cpu->r[7] = rd32(0x000f5400u + + 0x2a4u);
    }
L_000f53fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f5400:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f5404:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f5408:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f540c:;
    {
        cpu->r[14] = 0x000f5410u; fn_0018aa58(cpu);
    }
L_000f5410:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f5414:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f5418:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000f541c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000f5420:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_000f5424:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000f5428:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000f542c:;
    {
        cpu->r[14] = 0x000f5430u; fn_00136660(cpu);
    }
L_000f5430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_000f5434:;
    {
        goto L_000f536c;
    }
L_000f5438:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f543c:;
    {
        cpu->r[14] = 0x000f5440u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f5440:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f53f8;
        }
    }
L_000f5448:;
    {
        cpu->r[7] = rd32(0x000f5450u + + 0x254u);
    }
L_000f544c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f5450:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5454:;
    {
        cpu->r[14] = 0x000f5458u; fn_0018aa20(cpu);
    }
L_000f5458:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f545c:;
    {
        cpu->r[14] = 0x000f5460u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f5460:;
    {
        cpu->r[3] = rd32(0x000f5468u + + 0x240u);
    }
L_000f5464:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f5468:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f546c:;
    {
        cpu->r[3] = rd32(0x000f5474u + + 0x238u);
    }
L_000f5470:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f5474:;
    {
        cpu->r[14] = 0x000f5478u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f5478:;
    {
        goto L_000f53fc;
    }
L_000f547c:;
    {
        cpu->r[3] = rd32(0x000f5484u + + 0x218u);
    }
L_000f5480:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f5484:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f5488:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f548c:;
    {
        cpu->r[14] = 0x000f5490u; fn_001365f4(cpu);
    }
L_000f5490:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_000f5494:;
    {
        goto L_000f536c;
    }
L_000f5498:;
    {
        cpu->r[3] = rd32(0x000f54a0u + + 0x1f8u);
    }
L_000f549c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f54a0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f54a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000f54a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f54ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f54b8;
        }
    }
L_000f54b0:;
    {
        cpu->r[14] = 0x000f54b4u; fn_000fd070(cpu);
    }
L_000f54b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f54b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f54bc:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_000f54c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f54c4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000f54c8:;
    {
        cpu->r[14] = 0x000f54d0u;
    }
L_000f54cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f54d0u)) return;
    }
L_000f54d0:;
    {
        cpu->r[3] = rd32(0x000f54d8u + + 0x1c8u);
    }
L_000f54d4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f54d8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f54dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f54e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f54fc;
        }
    }
L_000f54e4:;
    {
        cpu->r[7] = rd32(0x000f54ecu + + 0x1b8u);
    }
L_000f54e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f54ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f54f0:;
    {
        cpu->r[14] = 0x000f54f4u; fn_0018b584(cpu);
    }
L_000f54f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_000f54f8:;
    {
        goto L_000f536c;
    }
L_000f54fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f5500:;
    {
        cpu->r[14] = 0x000f5504u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000f5504:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f54e4;
        }
    }
L_000f550c:;
    {
        cpu->r[7] = rd32(0x000f5514u + + 0x190u);
    }
L_000f5510:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f5514:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f5518:;
    {
        cpu->r[14] = 0x000f551cu; fn_0018aa20(cpu);
    }
L_000f551c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f5520:;
    {
        cpu->r[14] = 0x000f5524u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000f5524:;
    {
        cpu->r[3] = rd32(0x000f552cu + + 0x17cu);
    }
L_000f5528:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000f552c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f5530:;
    {
        cpu->r[3] = rd32(0x000f5538u + + 0x174u);
    }
L_000f5534:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f5538:;
    {
        cpu->r[14] = 0x000f553cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000f553c:;
    {
        goto L_000f54e8;
    }
L_000f5540:;
    {
        cpu->r[6] = rd32(0x000f5548u + + 0x150u);
    }
L_000f5544:;
    {
        cpu->r[2] = 0x000084f1u;
    }
L_000f5548:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f554c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f5550:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f5554:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f5558:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000f555c:;
    {
        cpu->r[14] = 0x000f5560u; fn_000f34c4(cpu);
    }
L_000f5560:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5608;
        }
    }
L_000f5568:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f556c:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_000f5570:;
    {
        cpu->r[14] = 0x000f5578u;
    }
L_000f5574:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5578u)) return;
    }
L_000f5578:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f557c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5590;
        }
    }
L_000f5580:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f5584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5588:;
    {
        cpu->r[14] = 0x000f5590u;
    }
L_000f558c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5590u)) return;
    }
L_000f5590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5594:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f5598:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f559c:;
    {
        cpu->r[14] = 0x000f55a4u;
    }
L_000f55a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f55a4u)) return;
    }
L_000f55a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f55a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5608;
        }
    }
L_000f55ac:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f55b0:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_000f55b4:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000f55b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000f55bc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f55c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000f55c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000f55c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f55cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d32u;
        }
    }
L_000f55d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000f55d4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000f55d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5608;
        }
    }
L_000f55dc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000f55e0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000f55e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f55e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5608;
        }
    }
L_000f55ec:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000f55f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f55f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f55f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5608;
        }
    }
L_000f55fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_000f5600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5658;
        }
    }
L_000f5608:;
    {
        cpu->r[14] = 0x000f560cu; fn_00072b00(cpu);
    }
L_000f560c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f5610:;
    {
        cpu->r[4] = 0x00005f60u;
    }
L_000f5614:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000f5618:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[4]);
    }
L_000f561c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f5620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f564c;
        }
    }
L_000f5624:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f5628:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f562c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000f5630:;
    {
        cpu->r[14] = 0x000f5634u; fn_0009b14c(cpu);
    }
L_000f5634:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000f5638:;
    {
        cpu->r[1] = 0x00001d32u;
    }
L_000f563c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f5640:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_000f5644:;
    {
        wr8(cpu->r[3] + cpu->r[4], cpu->r[2]);
    }
L_000f5648:;
    {
        goto L_000f5374;
    }
L_000f564c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f5650:;
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
L_000f5654:;
    {
        return fn_000f34e8(cpu);
    }
L_000f5658:;
    {
        cpu->r[14] = 0x000f565cu; fn_000968d4(cpu);
    }
L_000f565c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5608;
        }
    }
L_000f5664:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000f5668:;
    {
        cpu->r[12] = 0x00006737u;
    }
L_000f566c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000f5670:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000f5674:;
    {
        wr8(cpu->r[3] + cpu->r[12], cpu->r[2]);
    }
L_000f5678:;
    {
        cpu->r[14] = 0x000f567cu; fn_000ba460(cpu);
    }
L_000f567c:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_000f5680:;
    {
        cpu->r[14] = 0x000f5684u; fn_0009b4d0(cpu);
    }
L_000f5684:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000f5688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f568c:;
    {
        cpu->r[14] = 0x000f5690u; fn_000967dc(cpu);
    }
L_000f5690:;
    {
        goto L_000f5608;
    }
}

/* _ZN14CameraRecorder4InitEi @ 000f56b0 (arm) */
void fn_000f56b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f56b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CameraRecorder9GetVectorEii @ 000f56b4 (arm) */
void fn_000f56b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f56b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000f56b8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f56bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f57d4;
        }
    }
L_000f56c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f56c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f5700;
        }
    }
L_000f56c8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f56cc:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_000f56d0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000f56d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5760;
        }
    }
L_000f56d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f56dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5740;
        }
    }
L_000f56e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_000f56e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000f56e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000f56ec:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f56f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f56f4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f56f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f56fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5700:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f57a8;
        }
    }
L_000f5708:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f570c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5870;
        }
    }
L_000f5710:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f5714:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x48u);
        }
    }
L_000f5718:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4cu);
        }
    }
L_000f571c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x50u);
        }
    }
L_000f5720:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x54u);
        }
    }
L_000f5724:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000f572cu + + 0x1a0u);
        }
    }
L_000f5728:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[1] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000f572c:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[1] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000f5730:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[1] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_000f5734:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000f5738:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_000f573c:;
    {
        goto L_000f56ec;
    }
L_000f5740:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f5744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f57c4;
        }
    }
L_000f5748:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f574c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5860;
        }
    }
L_000f5750:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000f5758u + + 0x174u);
    }
L_000f5754:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x2cu);
    }
L_000f5758:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
    }
L_000f575c:;
    {
        goto L_000f56ec;
    }
L_000f5760:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f57f0;
        }
    }
L_000f5768:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_000f576c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f5770:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
        }
    }
L_000f5774:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
        }
    }
L_000f5778:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000f577c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_000f5780:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000f5784:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
        }
    }
L_000f5788:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0xcu);
        }
    }
L_000f578c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[12] + + 0x2u);
        }
    }
L_000f5790:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000f5794:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f5798:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0xcu);
        }
    }
L_000f579c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x10u);
        }
    }
L_000f57a0:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_000f57a4:;
    {
        goto L_000f56ec;
    }
L_000f57a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x30u);
    }
L_000f57ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x34u);
    }
L_000f57b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x38u);
    }
L_000f57b4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f57b8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f57bc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f57c0:;
    {
        goto L_000f56ec;
    }
L_000f57c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x1cu);
    }
L_000f57c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_000f57cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_000f57d0:;
    {
        goto L_000f56ec;
    }
L_000f57d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000f57dcu + + 0xf0u);
    }
L_000f57d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x58u);
    }
L_000f57dc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f57e0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f57e4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000f57e8:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f57ec:;
    {
        goto L_000f56f8;
    }
L_000f57f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f57f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f588c;
        }
    }
L_000f57f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f57fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5820;
        }
    }
L_000f5800:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_000f5804:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f5808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5750;
        }
    }
L_000f580c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x28u);
    }
L_000f5810:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000f5818u + + 0xb4u);
    }
L_000f5814:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5818:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
    }
L_000f581c:;
    {
        goto L_000f56ec;
    }
L_000f5820:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_000f5824:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f5828:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x1cu);
        }
    }
L_000f582c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x20u);
        }
    }
L_000f5830:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000f5834:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f5838:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000f583c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x20u);
        }
    }
L_000f5840:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x24u);
        }
    }
L_000f5844:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[12] + + 0x2u);
        }
    }
L_000f5848:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000f584c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f5850:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x24u);
        }
    }
L_000f5854:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x28u);
        }
    }
L_000f5858:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_000f585c:;
    {
        goto L_000f56ec;
    }
L_000f5860:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x28u);
    }
L_000f5864:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x20u);
    }
L_000f5868:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x24u);
    }
L_000f586c:;
    {
        goto L_000f56ec;
    }
L_000f5870:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x3cu);
    }
L_000f5874:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x40u);
    }
L_000f5878:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x44u);
    }
L_000f587c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5880:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5884:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5888:;
    {
        goto L_000f56ec;
    }
L_000f588c:;
    {
        cpu->r[3] = rd16(cpu->r[12] + + 0x2u);
    }
L_000f5890:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f5894:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x10u);
        }
    }
L_000f5898:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x14u);
        }
    }
L_000f589c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_000f58a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f58a4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000f58a8:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x14u);
        }
    }
L_000f58ac:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
        }
    }
L_000f58b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[12] + + 0x2u);
        }
    }
L_000f58b4:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000f58b8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f58bc:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x18u);
        }
    }
L_000f58c0:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x1cu);
        }
    }
L_000f58c4:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_000f58c8:;
    {
        goto L_000f56ec;
    }
}

/* _ZN14CameraRecorder12RecordVectorEiifff @ 000f58d0 (arm) */
void fn_000f58d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f58d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000f58d4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000f58d8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13]);
    }
L_000f58dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_000f58e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5a80;
        }
    }
L_000f58e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f58e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f59ac;
        }
    }
L_000f58ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f58f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5930;
        }
    }
L_000f58f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000f58f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5a8c;
        }
    }
L_000f58fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000f5900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5a04;
        }
    }
L_000f5904:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x2cu);
    }
L_000f5908:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000f590c:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5910:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5914:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5918:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f591c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5920:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5924:;
    {
        uint32_t v = cpu->r[2] | 0x00000200u; cpu->r[2] = v;
    }
L_000f5928:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f592c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5930:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000f5934:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_000f5938:;
    {
        vfp_sync_flags(cpu);
    }
L_000f593c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5958;
        }
    }
L_000f5940:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5944:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5948:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f594c:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5950:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000f5954:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5958:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_000f595c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000f5960:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5980;
        }
    }
L_000f5968:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f596c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5970:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5974:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5978:;
    {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
    }
L_000f597c:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5980:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000f5984:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000f5988:;
    {
        vfp_sync_flags(cpu);
    }
L_000f598c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5990:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5994:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5998:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f599c:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f59a0:;
    {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
    }
L_000f59a4:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f59a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f59ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f59b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f59d8;
        }
    }
L_000f59b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000f59b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5b34;
        }
    }
L_000f59bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000f59c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5b08;
        }
    }
L_000f59c4:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_000f59c8:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_000f59cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f59d0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f59d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f59d8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000f59dc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f59e0:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_000f59e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f59e8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f59ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f59f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f59f4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f59f8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f59fc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5a00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5a04:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_000f5a08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_000f5a0c:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5a2c;
        }
    }
L_000f5a14:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5a18:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5a1c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5a20:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5a24:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_000f5a28:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5a2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_000f5a30:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000f5a34:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5a38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5a54;
        }
    }
L_000f5a3c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5a40:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5a44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5a48:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5a4c:;
    {
        uint32_t v = cpu->r[2] | 0x00000080u; cpu->r[2] = v;
    }
L_000f5a50:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5a54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_000f5a58:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000f5a5c:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5a60:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5a64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5a68:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5a6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5a70:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5a74:;
    {
        uint32_t v = cpu->r[2] | 0x00000100u; cpu->r[2] = v;
    }
L_000f5a78:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5a7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5a80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000f5a84:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5a88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5a8c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_000f5a90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_000f5a94:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5ab4;
        }
    }
L_000f5a9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5aa0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5aa4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5aa8:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5aac:;
    {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
    }
L_000f5ab0:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5ab4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_000f5ab8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000f5abc:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5adc;
        }
    }
L_000f5ac4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5ac8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5acc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5ad0:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5ad4:;
    {
        uint32_t v = cpu->r[2] | 0x00000010u; cpu->r[2] = v;
    }
L_000f5ad8:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5adc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_000f5ae0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000f5ae4:;
    {
        vfp_sync_flags(cpu);
    }
L_000f5ae8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5aec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5af0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5af4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5af8:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_000f5afc:;
    {
        uint32_t v = cpu->r[2] | 0x00000020u; cpu->r[2] = v;
    }
L_000f5b00:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5b04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5b08:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_000f5b0c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b10:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[3]);
    }
L_000f5b14:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b18:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b1c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5b24:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b28:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5b2c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5b34:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000f5b38:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b3c:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[3]);
    }
L_000f5b40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5b50:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000f5b54:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000f5b58:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000f5b5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CameraRecorderD1Ev @ 000f5b60 (arm) */
void fn_000f5b60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5b60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f5b64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f5b68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5b6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5b80;
        }
    }
L_000f5b74:;
    {
        cpu->r[14] = 0x000f5b78u; fn_0018ba20(cpu);
    }
L_000f5b78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f5b7c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000f5b80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5b84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5b88u)) return;
    }
}

/* _ZN14CameraRecorderD2Ev @ 000f5b88 (arm) */
void fn_000f5b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5b88:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f5b8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f5b90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5b94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5ba8;
        }
    }
L_000f5b9c:;
    {
        cpu->r[14] = 0x000f5ba0u; fn_0018ba20(cpu);
    }
L_000f5ba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f5ba4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000f5ba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5bac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5bb0u)) return;
    }
}

/* _ZN14CameraRecorderC1Ev @ 000f5bb0 (arm) */
void fn_000f5bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5bb0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f5bb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f5bb8:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_000f5bbc:;
    {
        cpu->r[14] = 0x000f5bc0u; fn_0018ba6c(cpu);
    }
L_000f5bc0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000f5bc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5bc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5bccu)) return;
    }
}

/* _ZN14CameraRecorderC2Ev @ 000f5bcc (arm) */
void fn_000f5bcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5bcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f5bd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f5bd4:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_000f5bd8:;
    {
        cpu->r[14] = 0x000f5bdcu; fn_0018ba6c(cpu);
    }
L_000f5bdc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000f5be0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f5be4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f5be8u)) return;
    }
}

/* _ZN12RaceRecorder18GetInitialPositionEi @ 000f5be8 (arm) */
void fn_000f5be8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5be8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f5bec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000092u, 0, 0);
    }
L_000f5bf0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000009au, 0, 0);
    }
L_000f5bf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000a2u, 0, 0);
    }
L_000f5bf8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000f5bfc:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000f5c00:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f5c04:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000f5c08:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5c0c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000f5c10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f5c14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder18GetInitialRotationEii @ 000f5c18 (arm) */
void fn_000f5c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5c44;
        }
    }
L_000f5c20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f5c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5c6c;
        }
    }
L_000f5c28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000000d2u, 0, 0);
    }
L_000f5c2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000dau, 0, 0);
    }
L_000f5c30:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f5c34:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f5c38:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5c3c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f5c40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5c44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x000000aau, 0, 0);
    }
L_000f5c48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000000b2u, 0, 0);
    }
L_000f5c4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000bau, 0, 0);
    }
L_000f5c50:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f5c54:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_000f5c58:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f5c5c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f5c60:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5c64:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000f5c68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5c6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000000c2u, 0, 0);
    }
L_000f5c70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000cau, 0, 0);
    }
L_000f5c74:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f5c78:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f5c7c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5c80:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f5c84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder15AddEventToFrameEii @ 000f5c88 (arm) */
void fn_000f5c88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5c88:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_000f5c8c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f5c90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f5c94:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f5c98:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000001du, 1, 1);
    }
L_000f5c9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000f5ccc;
        }
    }
L_000f5ca0:;
    {
        cpu->r[4] = 0x00001a0cu;
    }
L_000f5ca4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_000f5ca8:;
    {
        cpu->r[4] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_000f5cac:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_000f5cb0:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[1]);
    }
L_000f5cb4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f5cb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000f5cbc:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_000f5cc0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f5cc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f5cc8:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f5ccc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f5cd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder11RecordInputEi @ 000f5cd4 (arm) */
void fn_000f5cd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5cd4:;
    {
        cpu->r[3] = rd32(0x000f5cdcu + + 0xa8u);
    }
L_000f5cd8:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f5cdc:;
    {
        cpu->r[12] = rd32(0x000f5ce4u + + 0xa4u);
    }
L_000f5ce0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f5ce4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f5cecu, cpu->r[3], 0, 0);
    }
L_000f5ce8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000f5cec:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000f5cf0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f5cf4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000f5cf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f5cfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5d00:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5d04:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x3cu);
    }
L_000f5d08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5d0c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5d10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_000f5d14:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000f5d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5d2c;
        }
    }
L_000f5d1c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000f5d20:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f5d24:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000f5d28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5d70;
        }
    }
L_000f5d2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_000f5d30:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000f5d34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5d38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000f5d3c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
        }
    }
L_000f5d40:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[0]);
        }
    }
L_000f5d44:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000f5d48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_000f5d4c:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[3]);
        }
    }
L_000f5d50:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000f5d54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000f5d58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_000f5d5c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000f5d60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000f5d64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f5d68:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_000f5d6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5d70:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5d74:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f5d78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f5d7c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000f5d80:;
    {
        goto L_000f5d60;
    }
}

/* _ZN12RaceRecorder21RestoreGameRandomSeedEv @ 000f5d8c (arm) */
void fn_000f5d8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5d8c:;
    {
        cpu->r[3] = rd32(0x000f5d94u + + 0x14u);
    }
L_000f5d90:;
    {
        cpu->r[1] = rd32(0x000f5d98u + + 0x14u);
    }
L_000f5d94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f5d9cu, cpu->r[3], 0, 0);
    }
L_000f5d98:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x34u);
    }
L_000f5d9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f5da0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000f5da4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder14GetReplayInputEv @ 000f5db0 (arm) */
void fn_000f5db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5db0:;
    {
        cpu->r[3] = rd32(0x000f5db8u + + 0x78u);
    }
L_000f5db4:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f5db8:;
    {
        cpu->r[1] = rd32(0x000f5dc0u + + 0x74u);
    }
L_000f5dbc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f5dc0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f5dc8u, cpu->r[3], 0, 0);
    }
L_000f5dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000f5dc8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000f5dcc:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f5dd0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000f5dd4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f5dd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5ddc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f5de0:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f5de4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000f5de8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_000f5dec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5df0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f5df4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000f5df8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
        }
    }
L_000f5dfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[0] + + 0x28u);
        }
    }
L_000f5e00:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5e04:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000f5e08:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000f5e0c:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
        }
    }
L_000f5e10:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000f5e14:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
        }
    }
L_000f5e18:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_000f5e1c:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_000f5e20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f5e24:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_000f5e28:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f5e2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder12GetCrashQuatEib @ 000f5e38 (arm) */
void fn_000f5e38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5e38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5e3c:;
    {
        cpu->r[3] = rd32(0x000f5e44u + + 0x88u);
    }
L_000f5e40:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f5e44:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000f5e48:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f5e50u, cpu->r[3], 0, 0);
    }
L_000f5e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5eac;
        }
    }
L_000f5e50:;
    {
        cpu->r[4] = rd32(0x000f5e58u + + 0x78u);
    }
L_000f5e54:;
    {
        cpu->r[0] = 0x00008c78u;
    }
L_000f5e58:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000f5e5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000f5e60:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000f5e64:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f5e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f5e6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000f5e70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f5e74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000f5e78:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000640u, 0, 0);
        }
    }
L_000f5e7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000650u, 0, 0);
        }
    }
L_000f5e80:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
        }
    }
L_000f5e84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f5e88:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000f5e8c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
        }
    }
L_000f5e90:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f5e94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
        }
    }
L_000f5e98:;
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
L_000f5e9c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000f5ea0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000f5ea4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f5ea8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5eac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000640u, 0, 0);
    }
L_000f5eb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f5eb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f5eb8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f5ebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
    }
L_000f5ec0:;
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
L_000f5ec4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000f5ec8:;
    {
        goto L_000f5ea0;
    }
}

/* _ZN12RaceRecorder13IsReplayEndedEv @ 000f5ed4 (arm) */
void fn_000f5ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5ed4:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000f5ed8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f5edc:;
    {
        cpu->r[3] = 0x00001a08u;
    }
L_000f5ee0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f5ee4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f5ee8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f5eec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f5ef0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder16IsReplayCrashingEib @ 000f5ef4 (arm) */
void fn_000f5ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5ef4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5ef8:;
    {
        cpu->r[3] = rd32(0x000f5f00u + + 0xd0u);
    }
L_000f5efc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f5f04u, cpu->r[3], 0, 0);
    }
L_000f5f00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5f74;
        }
    }
L_000f5f04:;
    {
        cpu->r[12] = rd32(0x000f5f0cu + + 0xc8u);
    }
L_000f5f08:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_000f5f0c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000f5f10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000f5f14:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000f5f18:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f5f1c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000f5f20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f5f24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f5f28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f5fa4;
        }
    }
L_000f5f2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000f5f30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000650u, 0, 0);
    }
L_000f5f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000f5f38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f5f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f5f40:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f5f44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000f5f48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5f4c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_000f5f50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000f5f54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5f9c;
        }
    }
L_000f5f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5f9c;
        }
    }
L_000f5f60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5f64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5f9c;
        }
    }
L_000f5f68:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f5f6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000f5f70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5f74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f5f78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000f5f7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f5f80:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f5f84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f5f88:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000f5f8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5f90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_000f5f94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_000f5f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5f58;
        }
    }
L_000f5f9c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000f5fa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f5fa4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f5fa8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f5fac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2cu);
    }
L_000f5fb0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x28u);
    }
L_000f5fb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f5fb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x24u);
    }
L_000f5fbc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_000f5fc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f5f9c;
        }
    }
L_000f5fc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f5fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f5f60;
        }
    }
L_000f5fcc:;
    {
        goto L_000f5f9c;
    }
}

/* _ZN12RaceRecorder24GetTrafficReplayRotationEii @ 000f5fd8 (arm) */
void fn_000f5fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f5fd8:;
    {
        cpu->r[12] = rd32(0x000f5fe0u + + 0x308u);
    }
L_000f5fdc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000013u, 1, 1);
    }
L_000f5fe0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_000f5fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f5fecu, cpu->r[12], 0, 0);
    }
L_000f5fe8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000f5fec:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_000f5ff0:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000f5ff4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_000f5ff8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f6070;
        }
    }
L_000f5ffc:;
    {
        cpu->r[5] = rd32(0x000f6004u + + 0x2e8u);
    }
L_000f6000:;
    {
        cpu->r[4] = 0x0000432cu;
    }
L_000f6004:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000f6008:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f600c:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_000f6010:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f6014:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000f6018:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f601c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f6020:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6078;
        }
    }
L_000f6024:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f6028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f60f4;
        }
    }
L_000f602c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f6030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f60d8;
        }
    }
L_000f6034:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x0000025cu, 0, 0);
    }
L_000f6038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000270u, 0, 0);
    }
L_000f603c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000194u, 0, 0);
    }
L_000f6040:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f6044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000180u, 0, 0);
    }
L_000f604c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000f6050:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6058:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000f605c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6060:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_000f6064:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6068:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[4]);
    }
L_000f606c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6070:;
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
L_000f6074:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f6078:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000640u, 0, 0);
    }
L_000f607c:;
    {
        cpu->r[4] = 0x00001a0cu;
    }
L_000f6080:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000f6084:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_000f6088:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f608c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6090:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_000f6094:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000f6098:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_000f609c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6188;
        }
    }
L_000f60a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f60a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6154;
        }
    }
L_000f60a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f60ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000158u, 0, 0);
        }
    }
L_000f60b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000180u, 0, 0);
        }
    }
L_000f60b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f60b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000016cu, 0, 0);
        }
    }
L_000f60bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000194u, 0, 0);
        }
    }
L_000f60c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f60c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f60c8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f60cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f60d0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f60d4:;
    {
        goto L_000f6070;
    }
L_000f60d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000234u, 0, 0);
    }
L_000f60dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000248u, 0, 0);
    }
L_000f60e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000016cu, 0, 0);
    }
L_000f60e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f60e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f60ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000158u, 0, 0);
    }
L_000f60f0:;
    {
        goto L_000f604c;
    }
L_000f60f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x000001f8u, 0, 0);
    }
L_000f60f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000020cu, 0, 0);
    }
L_000f60fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000f6100:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000220u, 0, 0);
    }
L_000f6108:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000144u, 0, 0);
    }
L_000f610c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f6110:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6114:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x0000011cu, 0, 0);
    }
L_000f6118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000130u, 0, 0);
    }
L_000f611c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000f6120:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6124:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_000f6128:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f612c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6130:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_000f6134:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6138:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_000f613c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6140:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6144:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_000f6148:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
    }
L_000f614c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6150:;
    {
        goto L_000f6070;
    }
L_000f6154:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000011cu, 0, 0);
    }
L_000f6158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000130u, 0, 0);
    }
L_000f615c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6160:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6164:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000144u, 0, 0);
    }
L_000f6168:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f616c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6170:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_000f6174:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6178:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f617c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6180:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000f6184:;
    {
        goto L_000f6070;
    }
L_000f6188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f618c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f6214;
        }
    }
L_000f6190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6194:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f6198:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x0000011cu, 0, 0);
        }
    }
L_000f619c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000011cu, 0, 0);
        }
    }
L_000f61a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0x1cu);
        }
    }
L_000f61a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_000f61a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_000f61ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_000f61b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[5]);
        }
    }
L_000f61b4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[5]);
        }
    }
L_000f61b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_000f61bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[5]);
        }
    }
L_000f61c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f61c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6278;
        }
    }
L_000f61c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f61cc:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x1eu);
    }
L_000f61d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000130u, 0, 0);
    }
L_000f61d4:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f61d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f61dc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_000f61e0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[5]);
    }
L_000f61e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f61e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f61ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000144u, 0, 0);
        }
    }
L_000f61f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000144u, 0, 0);
        }
    }
L_000f61f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f61f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x20u);
        }
    }
L_000f61fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f6200:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f6204:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_000f6208:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f620c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_000f6210:;
    {
        goto L_000f6070;
    }
L_000f6214:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f6218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f628c;
        }
    }
L_000f621c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6220:;
    {
        { uint32_t v = cpu->r[3] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f6224:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000180u, 0, 0);
        }
    }
L_000f6228:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000180u, 0, 0);
        }
    }
L_000f622c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x18u);
        }
    }
L_000f6230:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
        }
    }
L_000f6234:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_000f6238:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000f623c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_000f6240:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
        }
    }
L_000f6244:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_000f6248:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_000f624c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f6250:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000194u, 0, 0);
        }
    }
L_000f6254:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000194u, 0, 0);
        }
    }
L_000f6258:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f625c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x1au);
        }
    }
L_000f6260:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f6264:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f6268:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f626c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f6270:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f6274:;
    {
        goto L_000f6070;
    }
L_000f6278:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000130u, 0, 0);
    }
L_000f627c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6280:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6284:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000f6288:;
    {
        goto L_000f61e8;
    }
L_000f628c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6290:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f6294:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000158u, 0, 0);
        }
    }
L_000f6298:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000158u, 0, 0);
        }
    }
L_000f629c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x14u);
        }
    }
L_000f62a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
        }
    }
L_000f62a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_000f62a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000f62ac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_000f62b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
        }
    }
L_000f62b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_000f62b8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_000f62bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f62c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000016cu, 0, 0);
        }
    }
L_000f62c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000016cu, 0, 0);
        }
    }
L_000f62c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f62cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x16u);
        }
    }
L_000f62d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f62d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f62d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f62dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f62e0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f62e4:;
    {
        goto L_000f6070;
    }
}

/* _ZN12RaceRecorder23GetPoliceReplayRotationEii @ 000f62f0 (arm) */
void fn_000f62f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f62f0:;
    {
        cpu->r[12] = rd32(0x000f62f8u + + 0x304u);
    }
L_000f62f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_000f62f8:;
    {
        cpu->r[6] = rd32(0x000f6300u + + 0x300u);
    }
L_000f62fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f6304u, cpu->r[12], 0, 0);
    }
L_000f6300:;
    {
        cpu->r[5] = 0x00008c78u;
    }
L_000f6304:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000f6308:;
    {
        cpu->r[4] = 0x0000432cu;
    }
L_000f630c:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_000f6310:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f6314:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000f6318:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000f631c:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_000f6320:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_000f6324:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f6328:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_000f632c:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_000f6330:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_000f6334:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[6]);
    }
L_000f6338:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f633c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000f6340:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f63f0;
        }
    }
L_000f6344:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000f6348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6398;
        }
    }
L_000f634c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f6350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f64c0;
        }
    }
L_000f6354:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_000f6358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000560u, 0, 0);
    }
L_000f635c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000f6360:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_000f6364:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000003acu, 0, 0);
    }
L_000f6368:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f636c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f6370:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6374:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6378:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_000f637c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6380:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_000f6384:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6388:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
    }
L_000f638c:;
    {
        wr32(cpu->r[5] + + 0xf4cu, cpu->r[3]);
    }
L_000f6390:;
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
L_000f6394:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f6398:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000480u, 0, 0);
    }
L_000f639c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000004b0u, 0, 0);
    }
L_000f63a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000f63a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000004d0u, 0, 0);
    }
L_000f63a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f63ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_000f63b0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f63b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000318u, 0, 0);
    }
L_000f63b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f63bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f63c0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000f63c4:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_000f63c8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f63cc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_000f63d0:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f63d4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_000f63d8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f63dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f63e0:;
    {
        wr32(cpu->r[6] + + 0xbd4u, cpu->r[12]);
    }
L_000f63e4:;
    {
        wr32(cpu->r[6] + + 0xcfcu, cpu->r[7]);
    }
L_000f63e8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f63ec:;
    {
        goto L_000f6390;
    }
L_000f63f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000650u, 0, 0);
    }
L_000f63f4:;
    {
        cpu->r[12] = 0x00001a0cu;
    }
L_000f63f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000f63fc:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000f6400:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f6404:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6408:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_000f640c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_000f6410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6444;
        }
    }
L_000f6414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f6418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f64f8;
        }
    }
L_000f641c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f6420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6580;
        }
    }
L_000f6424:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000003acu, 0, 0);
    }
L_000f6428:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f642c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6430:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6434:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f6438:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf4cu);
    }
L_000f643c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f6440:;
    {
        goto L_000f6390;
    }
L_000f6444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f6448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f6524;
        }
    }
L_000f644c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6450:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f6454:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6458:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f645c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[12] + + 0x1cu);
        }
    }
L_000f6460:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[4] + + 0xbd4u);
        }
    }
L_000f6464:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_000f6468:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xbd4u, cpu->r[3]);
        }
    }
L_000f646c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
        }
    }
L_000f6470:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[4]);
        }
    }
L_000f6474:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f6478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f659c;
        }
    }
L_000f647c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f6480:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x1eu);
    }
L_000f6484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000318u, 0, 0);
    }
L_000f6488:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f648c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6490:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_000f6494:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[4]);
    }
L_000f6498:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f649c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f64a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f64a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f64a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x20u);
        }
    }
L_000f64ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcfcu);
        }
    }
L_000f64b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_000f64b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_000f64b8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0xcfcu, cpu->r[3]);
        }
    }
L_000f64bc:;
    {
        goto L_000f6390;
    }
L_000f64c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000004f0u, 0, 0);
    }
L_000f64c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000520u, 0, 0);
    }
L_000f64c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_000f64cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f64d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000364u, 0, 0);
    }
L_000f64d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f64d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f64dc:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f64e0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f64e4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_000f64e8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f64ec:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000f64f0:;
    {
        wr32(cpu->r[12] + + 0xe24u, cpu->r[2]);
    }
L_000f64f4:;
    {
        goto L_000f6390;
    }
L_000f64f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f64fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000318u, 0, 0);
    }
L_000f6500:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000f6504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6508:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xbd4u);
    }
L_000f650c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000f6510:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6514:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f6518:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcfcu);
    }
L_000f651c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000f6520:;
    {
        goto L_000f6390;
    }
L_000f6524:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000f6528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f65b0;
        }
    }
L_000f652c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6530:;
    {
        { uint32_t v = cpu->r[3] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f6534:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000003acu, 0, 0);
        }
    }
L_000f6538:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000003acu, 0, 0);
        }
    }
L_000f653c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x18u);
        }
    }
L_000f6540:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000f6544:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_000f6548:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f654c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_000f6550:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000f6554:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
        }
    }
L_000f6558:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_000f655c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f6560:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6564:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6568:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x1au);
        }
    }
L_000f656c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0xf4cu);
        }
    }
L_000f6570:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f6574:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f6578:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0xf4cu, cpu->r[3]);
        }
    }
L_000f657c:;
    {
        goto L_000f6390;
    }
L_000f6580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000364u, 0, 0);
    }
L_000f6584:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f6588:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f658c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000f6590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xe24u);
    }
L_000f6594:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000f6598:;
    {
        goto L_000f6390;
    }
L_000f659c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000318u, 0, 0);
    }
L_000f65a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f65a4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f65a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000f65ac:;
    {
        goto L_000f649c;
    }
L_000f65b0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f65b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f65b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000364u, 0, 0);
        }
    }
L_000f65bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000364u, 0, 0);
        }
    }
L_000f65c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x14u);
        }
    }
L_000f65c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f65c8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_000f65cc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f65d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
        }
    }
L_000f65d4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_000f65d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f65dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f65e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000f65e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x16u);
        }
    }
L_000f65e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0xe24u);
        }
    }
L_000f65ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f65f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_000f65f4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0xe24u, cpu->r[3]);
        }
    }
L_000f65f8:;
    {
        goto L_000f6390;
    }
}

/* _ZN12RaceRecorder17GetReplayRotationEii @ 000f6604 (arm) */
void fn_000f6604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f6604:;
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
L_000f6608:;
    {
        cpu->r[4] = rd32(0x000f6610u + + 0x244u);
    }
L_000f660c:;
    {
        cpu->r[6] = rd32(0x000f6614u + + 0x244u);
    }
L_000f6610:;
    {
        cpu->r[7] = 0x00008c78u;
    }
L_000f6614:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f661cu, cpu->r[4], 0, 0);
    }
L_000f6618:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000f661c:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_000f6620:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f6624:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f6628:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000f662c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000f6630:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_000f6634:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000f6638:;
    {
        cpu->r[8] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000f663c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000f6640:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000f6644:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6730;
        }
    }
L_000f6648:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000f664c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000f6650:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000f6654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f6658:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f66e4;
        }
    }
L_000f665c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f6660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f66b0;
        }
    }
L_000f6664:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_000f6668:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000000cau, 0, 0);
        }
    }
L_000f666c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x000000d2u, 0, 0);
        }
    }
L_000f6670:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000000dau, 0, 0);
        }
    }
L_000f6674:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000c2u, 0, 0);
        }
    }
L_000f6678:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
        }
    }
L_000f667c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
        }
    }
L_000f6680:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6684:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000042u, 0, 0);
        }
    }
L_000f6688:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f668c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000052u, 0, 0);
        }
    }
L_000f6690:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f6694:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6698:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[3]);
    }
L_000f669c:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_000f66a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f66a4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_000f66a8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_000f66ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f66b0u)) return;
    }
L_000f66b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000000b2u, 0, 0);
    }
L_000f66b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000000bau, 0, 0);
    }
L_000f66b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000aau, 0, 0);
    }
L_000f66bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
    }
L_000f66c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f66c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], 0x0000002au, 0, 0);
    }
L_000f66c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f66cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
    }
L_000f66d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f66d4:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f66d8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[2]);
    }
L_000f66dc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[1]);
    }
L_000f66e0:;
    {
        goto L_000f669c;
    }
L_000f66e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000640u, 0, 0);
    }
L_000f66e8:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f66ec:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000f66f0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000f66f4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f66f8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000f66fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f673c;
        }
    }
L_000f6700:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f6704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f6790;
        }
    }
L_000f6708:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000002au, 0, 0);
    }
L_000f670c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
    }
L_000f6710:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
    }
L_000f6714:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f671c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6720:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_000f6724:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f6728:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_000f672c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f6730u)) return;
    }
L_000f6730:;
    {
        cpu->r[14] = 0x000f6734u; fn_000f62f0(cpu);
    }
L_000f6734:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f6738:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f673cu)) return;
    }
L_000f673c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000f6740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f67b4;
        }
    }
L_000f6744:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_000f6748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6810;
        }
    }
L_000f674c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f6750:;
    {
        { uint32_t v = cpu->r[2] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f6754:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000052u, 0, 0);
        }
    }
L_000f6758:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000052u, 0, 0);
        }
    }
L_000f675c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
        }
    }
L_000f6760:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_000f6764:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000f6768:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f676c:;
    {
        uint32_t v = cpu->r[2] & 0x00000400u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_000f6770:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
        }
    }
L_000f6774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
        }
    }
L_000f6778:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x14u);
        }
    }
L_000f677c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000f6780:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000f6784:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000f6788:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000f678c:;
    {
        goto L_000f6720;
    }
L_000f6790:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_000f6794:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f6798:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
        }
    }
L_000f679c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
        }
    }
L_000f67a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000042u, 0, 0);
        }
    }
L_000f67a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000052u, 0, 0);
        }
    }
L_000f67a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f67ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f67b0:;
    {
        goto L_000f6720;
    }
L_000f67b4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f67b8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f67bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000002au, 0, 0);
        }
    }
L_000f67c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000002au, 0, 0);
        }
    }
L_000f67c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x16u);
        }
    }
L_000f67c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f67cc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000f67d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f67d4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f67d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
        }
    }
L_000f67dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
        }
    }
L_000f67e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x18u);
        }
    }
L_000f67e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_000f67e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000f67ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000f67f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f67f4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f67f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
        }
    }
L_000f67fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
        }
    }
L_000f6800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1au);
        }
    }
L_000f6804:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000f6808:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f680c:;
    {
        goto L_000f6720;
    }
L_000f6810:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f6814:;
    {
        { uint32_t v = cpu->r[2] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f6818:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000042u, 0, 0);
        }
    }
L_000f681c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000042u, 0, 0);
        }
    }
L_000f6820:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xeu);
        }
    }
L_000f6824:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_000f6828:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000f682c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
        }
    }
L_000f6830:;
    {
        uint32_t v = cpu->r[2] & 0x00000100u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_000f6834:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
        }
    }
L_000f6838:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
        }
    }
L_000f683c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x10u);
        }
    }
L_000f6840:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000f6844:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000f6848:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000f684c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000f6850:;
    {
        goto L_000f6720;
    }
}
