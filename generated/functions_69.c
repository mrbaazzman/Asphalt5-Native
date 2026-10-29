#include "functions.h"

/* _ZN21GS_OnlineInviteFriend6UpdateEv @ 001a1060 (arm) */
void fn_001a1060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1060:;
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
L_001a1064:;
    {
        cpu->r[5] = rd32(0x001a106cu + + 0x4f8u);
    }
L_001a1068:;
    {
        cpu->r[6] = rd32(0x001a1070u + + 0x4f8u);
    }
L_001a106c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a1070:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a1078u, cpu->r[5], 0, 0);
    }
L_001a1074:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1078:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a107c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001a1080:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a1084:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001a1088:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001a108c:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_001a1090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a1094:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a1098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1278;
        }
    }
L_001a109c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_001a10a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1278;
        }
    }
L_001a10a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_001a10a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1278;
        }
    }
L_001a10ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a10b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1278;
        }
    }
L_001a10b4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_001a10b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1278;
        }
    }
L_001a10bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x990u);
    }
L_001a10c0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001a10c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1300;
        }
    }
L_001a10c8:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a10cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a10d0:;
    {
        cpu->r[14] = 0x001a10d4u; fn_001b9648(cpu);
    }
L_001a10d4:;
    {
        cpu->r[3] = rd32(0x001a10dcu + + 0x490u);
    }
L_001a10d8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a10dc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a10e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a10e4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a10e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a138c;
        }
    }
L_001a10ec:;
    {
        cpu->r[8] = rd32(0x001a10f4u + + 0x47cu);
    }
L_001a10f0:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a10f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a10f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a10fc:;
    {
        cpu->r[14] = 0x001a1100u; fn_0018aa44(cpu);
    }
L_001a1100:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x988u);
    }
L_001a1104:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_001a1108:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a110c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a13ec;
        }
    }
L_001a1110:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a1114:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a1118:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a111c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a1120:;
    {
        cpu->r[14] = 0x001a1124u; fn_001b977c(cpu);
    }
L_001a1124:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_001a1128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a13ec;
        }
    }
L_001a112c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a1130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1134:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a1138:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a113c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1140:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a1144:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001a1148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001a114c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_001a1150:;
    {
        uint32_t v = cpu->r[12] & ~ 0x10000000u; cpu->r[12] = v;
    }
L_001a1154:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001a1158:;
    {
        cpu->r[14] = 0x001a1160u;
    }
L_001a115c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1160u)) return;
    }
L_001a1160:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001a1164:;
    {
        cpu->r[1] = 0x00000113u;
    }
L_001a1168:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001a116c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001a1170:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1174:;
    {
        cpu->r[14] = 0x001a1178u; fn_000a8d10(cpu);
    }
L_001a1178:;
    {
        cpu->r[3] = rd32(0x001a1180u + + 0x3f4u);
    }
L_001a117c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1180:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001a1184:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a1188:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00006667u;
        }
    }
L_001a118c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
        }
    }
L_001a1190:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9acu);
        }
    }
L_001a1194:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
        }
    }
L_001a1198:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
        }
    }
L_001a119c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_001a11a0:;
    {
        if (cond_test(cpu, 1)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
        }
    }
L_001a11a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_001a11a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 3u, &shc), cpu->r[3], 1, 0);
        }
    }
L_001a11ac:;
    {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
    }
L_001a11b0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001a11b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001a11b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_001a11bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a11d0;
        }
    }
L_001a11c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a11c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (~0x00000027u);
        }
    }
L_001a11c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_001a11cc:;
    {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
    }
L_001a11d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x99cu);
    }
L_001a11d4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000006u, 1, 0);
    }
L_001a11d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x9acu);
    }
L_001a11dc:;
    {
        uint32_t v = cpu->r[7] & ~ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_001a11e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001a11e4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x9a8u);
    }
L_001a11e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a11ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
        }
    }
L_001a11f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a11f4:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_001a11f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1424;
        }
    }
L_001a11fc:;
    {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
    }
L_001a1200:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_001a1204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x800u);
    }
L_001a1208:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[7] = v;
    }
L_001a120c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001a1210:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[7]);
        }
    }
L_001a1214:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a1218:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[2]);
        }
    }
L_001a121c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x99cu);
        }
    }
L_001a1220:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9b0u);
    }
L_001a1224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a1228:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a122c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9acu, cpu->r[3]);
        }
    }
L_001a1230:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x9a0u, cpu->r[3]);
        }
    }
L_001a1234:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001a1238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a123c:;
    {
        wr32(cpu->r[4] + + 0x9b0u, cpu->r[2]);
    }
L_001a1240:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a1244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1498;
        }
    }
L_001a1248:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a124c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a146c;
        }
    }
L_001a1250:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a1254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a126c;
        }
    }
L_001a1258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a125c:;
    {
        cpu->r[14] = 0x001a1260u; fn_00114a58(cpu);
    }
L_001a1260:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1264:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a1268:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001a126c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a1270:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001a1274:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1278u)) return;
    }
L_001a1278:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x994u);
    }
L_001a127c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001a1280:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a10bc;
        }
    }
L_001a1284:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a1288:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001a128c:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[3]);
    }
L_001a1290:;
    {
        cpu->r[14] = 0x001a1294u; fn_0018ba6c(cpu);
    }
L_001a1294:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a1298:;
    {
        cpu->r[14] = 0x001a129cu; fn_000a7570(cpu);
    }
L_001a129c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a12a0:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a12a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a12a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a12ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a12b0:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_001a12b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a12b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001a12bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001a12c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_001a12c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_001a12c8:;
    {
        cpu->r[14] = 0x001a12ccu; fn_000aeb58(cpu);
    }
L_001a12cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a12d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000990u, 0, 0);
    }
L_001a12d4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a12d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a12dc:;
    {
        cpu->r[14] = 0x001a12e0u; fn_000a7bb0(cpu);
    }
L_001a12e0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a12e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a12e8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001a12ec:;
    {
        cpu->r[14] = 0x001a12f0u; fn_000f361c(cpu);
    }
L_001a12f0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x990u);
    }
L_001a12f4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001a12f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001a12fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a10c8;
        }
    }
L_001a1300:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a1304:;
    {
        cpu->r[14] = 0x001a1308u; fn_000f34e8(cpu);
    }
L_001a1308:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a130c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a1310:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a1314:;
    {
        cpu->r[14] = 0x001a1318u; fn_000f34e8(cpu);
    }
L_001a1318:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a131c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a1320:;
    {
        cpu->r[14] = 0x001a1324u; fn_000f34e8(cpu);
    }
L_001a1324:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a1328:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a132c:;
    {
        cpu->r[14] = 0x001a1330u; fn_000f34e8(cpu);
    }
L_001a1330:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a1334:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a1338:;
    {
        cpu->r[14] = 0x001a133cu; fn_000f34e8(cpu);
    }
L_001a133c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a1340:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a1344:;
    {
        cpu->r[14] = 0x001a1348u; fn_001933d4(cpu);
    }
L_001a1348:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001a134c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001a1350:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a1354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a1358:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a135c:;
    {
        cpu->r[14] = 0x001a1364u;
    }
L_001a1360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1364u)) return;
    }
L_001a1364:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1368:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_001a136c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1370:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a1374:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_001a1378:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a137c:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_001a1380:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_001a1384:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a1388:;
    {
        goto L_001a126c;
    }
L_001a138c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a1390:;
    {
        cpu->r[14] = 0x001a1394u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a10ec;
        }
    }
L_001a139c:;
    {
        cpu->r[8] = rd32(0x001a13a4u + + 0x1ccu);
    }
L_001a13a0:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a13a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001a13a8:;
    {
        cpu->r[14] = 0x001a13acu; fn_0018aa20(cpu);
    }
L_001a13ac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a13b0:;
    {
        cpu->r[14] = 0x001a13b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a13b4:;
    {
        cpu->r[3] = rd32(0x001a13bcu + + 0x1bcu);
    }
L_001a13b8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001a13bc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a13c0:;
    {
        cpu->r[3] = rd32(0x001a13c8u + + 0x1b4u);
    }
L_001a13c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a13c8:;
    {
        cpu->r[14] = 0x001a13ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a13cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a13d0:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a13d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a13d8:;
    {
        cpu->r[14] = 0x001a13dcu; fn_0018aa44(cpu);
    }
L_001a13dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x988u);
    }
L_001a13e0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_001a13e4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a13e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a1110;
        }
    }
L_001a13ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a13f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a13f4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a13f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a13fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1400:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a1404:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001a1408:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001a140c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_001a1410:;
    {
        uint32_t v = cpu->r[12] | 0x10000000u; cpu->r[12] = v;
    }
L_001a1414:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_001a1418:;
    {
        cpu->r[14] = 0x001a1420u;
    }
L_001a141c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1420u)) return;
    }
L_001a1420:;
    {
        goto L_001a1160;
    }
L_001a1424:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x800u);
    }
L_001a1428:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_001a142c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x9a0u);
    }
L_001a1430:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[7] = v;
    }
L_001a1434:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001a1438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1444;
        }
    }
L_001a143c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a1440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a120c;
        }
    }
L_001a1444:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_001a1448:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001a144c:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_001a1450:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001a1454:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_001a1458:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_001a145c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001a1460:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[0], 1, 0);
    }
L_001a1464:;
    {
        wr32(cpu->r[4] + + 0x99cu, cpu->r[3]);
    }
L_001a1468:;
    {
        goto L_001a120c;
    }
L_001a146c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1470:;
    {
        cpu->r[14] = 0x001a1474u; fn_0010da28(cpu);
    }
L_001a1474:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a126c;
        }
    }
L_001a147c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001a1480:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a1484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a14a4;
        }
    }
L_001a1488:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a148c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a1490:;
    {
        cpu->r[14] = 0x001a1494u; fn_000f34e8(cpu);
    }
L_001a1494:;
    {
        goto L_001a126c;
    }
L_001a1498:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a149c:;
    {
        cpu->r[14] = 0x001a14a0u; fn_00128a5c(cpu);
    }
L_001a14a0:;
    {
        goto L_001a126c;
    }
L_001a14a4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001a14a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a126c;
        }
    }
L_001a14ac:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a14b0:;
    {
        cpu->r[8] = 0x00006770u;
    }
L_001a14b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x988u);
    }
L_001a14b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a14bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001a14c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a14c4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 0);
    }
L_001a14c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a14cc:;
    {
        cpu->r[14] = 0x001a14d0u; fn_001b9680(cpu);
    }
L_001a14d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a14d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a14d8:;
    {
        cpu->r[14] = 0x001a14dcu; fn_001a0f48(cpu);
    }
L_001a14dc:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001a14e0:;
    {
        cpu->r[14] = 0x001a14e4u; fn_0018ba6c(cpu);
    }
L_001a14e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a14e8:;
    {
        cpu->r[14] = 0x001a14ecu; fn_000a7570(cpu);
    }
L_001a14ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a14f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x988u);
    }
L_001a14f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a14f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a14fc:;
    {
        cpu->r[14] = 0x001a1500u; fn_001b9680(cpu);
    }
L_001a1500:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000008u, 1, 0);
    }
L_001a1504:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a1508:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a150c:;
    {
        cpu->r[14] = 0x001a1510u; fn_000ae3d0(cpu);
    }
L_001a1510:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1514:;
    {
        cpu->r[0] = 0x00000426u;
    }
L_001a1518:;
    {
        cpu->r[14] = 0x001a151cu; fn_000aeb58(cpu);
    }
L_001a151c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a1520:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a1524:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001a1528:;
    {
        cpu->r[14] = 0x001a152cu; fn_000ae740(cpu);
    }
L_001a152c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1530:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001a1534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1538:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001a153c:;
    {
        cpu->r[14] = 0x001a1540u; fn_000a7bb0(cpu);
    }
L_001a1540:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a1544:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a1548:;
    {
        cpu->r[14] = 0x001a154cu; fn_000f361c(cpu);
    }
L_001a154c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a1550:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[7]);
    }
L_001a1554:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_001a1558:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001a155c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001a1560:;
    {
        goto L_001a126c;
    }
}

/* _ZN21GS_OnlineInviteFriend11DoBarActionEii @ 001a1580 (arm) */
void fn_001a1580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1580:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001a1584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1588:;
    {
        cpu->r[0] = rd32(0x001a1590u + + 0x5cu);
    }
L_001a158c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a1590:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001a1594:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a1598:;
    {
        cpu->r[0] = add_flags(cpu, 0x001a15a0u, cpu->r[0], 0, 0);
    }
L_001a159c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001a15a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a15e4;
        }
    }
L_001a15a4:;
    {
        cpu->r[14] = rd32(0x001a15acu + + 0x44u);
    }
L_001a15a8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a15ac:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a15b0:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a15b4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a15b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_001a15bc:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a15c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a15c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a15c8:;
    {
        cpu->r[14] = 0x001a15ccu; fn_000fd248(cpu);
    }
L_001a15cc:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001a15d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a15d4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001a15d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a15dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a15e0:;
    {
        return fn_0010df70(cpu);
    }
L_001a15e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a15e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a15ecu)) return;
    }
}

/* _ZN21GS_OnlineInviteFriend8DoActionEii @ 001a15f4 (arm) */
void fn_001a15f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a15f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a15f8:;
    {
        cpu->r[12] = rd32(0x001a1600u + + 0x78u);
    }
L_001a15fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a1600:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001a1604:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a160cu, cpu->r[12], 0, 0);
    }
L_001a1608:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a160c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1610:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a1614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1620;
        }
    }
L_001a1618:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a161c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1620u)) return;
    }
L_001a1620:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a1624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001a1628:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a1668;
        }
    }
L_001a162c:;
    {
        cpu->r[0] = rd32(0x001a1634u + + 0x48u);
    }
L_001a1630:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a1634:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_001a1638:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a163c:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001a1640:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001a1644:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a1648:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a164c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a1650:;
    {
        cpu->r[14] = 0x001a1654u; fn_000fd248(cpu);
    }
L_001a1654:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001a1658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a165c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a1660:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a1664:;
    {
        return fn_0010df70(cpu);
    }
L_001a1668:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a166c:;
    {
        cpu->r[14] = 0x001a1674u;
    }
L_001a1670:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1674u)) return;
    }
L_001a1674:;
    {
        goto L_001a1618;
    }
}

/* _ZN21GS_OnlineInviteFriendD0Ev @ 001a1680 (arm) */
void fn_001a1680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1680:;
    {
        cpu->r[3] = rd32(0x001a1688u + + 0x2cu);
    }
L_001a1684:;
    {
        cpu->r[2] = rd32(0x001a168cu + + 0x2cu);
    }
L_001a1688:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a1690u, cpu->r[3], 0, 0);
    }
L_001a168c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a1690:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a1694:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1698:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a169c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a16a0:;
    {
        cpu->r[14] = 0x001a16a4u; fn_000ec21c(cpu);
    }
L_001a16a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a16a8:;
    {
        cpu->r[14] = 0x001a16acu; fn_0018ba20(cpu);
    }
L_001a16ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a16b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a16b4u)) return;
    }
}

/* _ZN21GS_OnlineInviteFriend13DrawTrackListEv @ 001a16bc (arm) */
void fn_001a16bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a16bc:;
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
L_001a16c0:;
    {
        cpu->r[11] = rd32(0x001a16c8u + + 0x54cu);
    }
L_001a16c4:;
    {
        cpu->r[6] = rd32(0x001a16ccu + + 0x54cu);
    }
L_001a16c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002a4u, 1, 0);
    }
L_001a16cc:;
    {
        cpu->r[11] = add_flags(cpu, 0x001a16d4u, cpu->r[11], 0, 0);
    }
L_001a16d0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a16d4:;
    {
        cpu->r[4] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_001a16d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a16dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a16e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1b94;
        }
    }
L_001a16e4:;
    {
        cpu->r[5] = rd32(0x001a16ecu + + 0x530u);
    }
L_001a16e8:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a16ec:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001a16f0:;
    {
        cpu->r[14] = 0x001a16f4u; fn_00096a08(cpu);
    }
L_001a16f4:;
    {
        cpu->r[8] = rd32(cpu->r[11] + cpu->r[5]);
    }
L_001a16f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a16fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a1700:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1704:;
    {
        cpu->r[14] = 0x001a1708u; fn_0018aa44(cpu);
    }
L_001a1708:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_001a170c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a1710:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a1714:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1bd8;
        }
    }
L_001a171c:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[5]);
    }
L_001a1720:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a1724:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1728:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000140u, 0, 0);
    }
L_001a172c:;
    {
        cpu->r[14] = 0x001a1730u; fn_0018aa44(cpu);
    }
L_001a1730:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1734:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001a1738:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001a173c:;
    {
        cpu->r[8] = 0x00006770u;
    }
L_001a1740:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001a1744:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1748:;
    {
        cpu->r[14] = 0x001a174cu; imp_memset(cpu); /* memset */
    }
L_001a174c:;
    {
        cpu->r[1] = rd32(0x001a1754u + + 0x4ccu);
    }
L_001a1750:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001a1754:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a1758:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001a175c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1760:;
    {
        cpu->r[14] = 0x001a1764u; imp_memset(cpu); /* memset */
    }
L_001a1764:;
    {
        cpu->r[12] = rd32(0x001a176cu + + 0x4b8u);
    }
L_001a1768:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a176c:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_001a1770:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000029cu, 0, 0);
    }
L_001a1774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000298u, 0, 0);
    }
L_001a1778:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_001a177c:;
    {
        cpu->r[14] = 0x001a1780u; fn_000a8d10(cpu);
    }
L_001a1780:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000294u, 0, 0);
    }
L_001a1784:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a1788:;
    {
        cpu->r[1] = 0x00000113u;
    }
L_001a178c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000290u, 0, 0);
    }
L_001a1790:;
    {
        cpu->r[14] = 0x001a1794u; fn_000a8d10(cpu);
    }
L_001a1794:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a1798:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_001a179c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a17a0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a17a4:;
    {
        cpu->r[14] = 0x001a17a8u; fn_001b9648(cpu);
    }
L_001a17a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a17ac:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001a17b0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001a17b4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a17b8:;
    {
        cpu->r[14] = 0x001a17bcu; fn_0012f780(cpu);
    }
L_001a17bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x29cu);
    }
L_001a17c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x298u);
    }
L_001a17c4:;
    {
        cpu->r[2] = 0x00000046u;
    }
L_001a17c8:;
    {
        cpu->r[1] = sub_flags(cpu, 0x000002e0u, cpu->r[3], 1, 0);
    }
L_001a17cc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a17d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001a17d4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_001a17d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a17dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a17e0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_001a17e4:;
    {
        cpu->r[14] = 0x001a17e8u; fn_0012fa2c(cpu);
    }
L_001a17e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a17ec:;
    {
        wr8(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001a17f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a17f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a1a78;
        }
    }
L_001a17f8:;
    {
        cpu->r[3] = rd32(0x001a1800u + + 0x428u);
    }
L_001a17fc:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001a1800:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_001a1804:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_001a1808:;
    {
        cpu->r[12] = 0x00008e98u;
    }
L_001a180c:;
    {
        cpu->r[1] = 0x0000ff00u;
    }
L_001a1810:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a1818u, cpu->r[3], 0, 0);
    }
L_001a1814:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xff85u << 16);
    }
L_001a1818:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xff00u << 16);
    }
L_001a181c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000240u, 0, 0);
    }
L_001a1820:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001a1824:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_001a1828:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_001a182c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001a1830:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x988u);
    }
L_001a1834:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_001a1838:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x29cu);
    }
L_001a183c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a1840:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001a1844:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a1848:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_001a184c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1850:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a1854:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001a1858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000046u, 0, 0);
    }
L_001a185c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000114u;
        }
    }
L_001a1860:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000113u;
        }
    }
L_001a1864:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a1868:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[3]; cpu->r[3] = v;
    }
L_001a186c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a1870:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a1874:;
    {
        cpu->r[14] = 0x001a1878u; fn_000ad8a0(cpu);
    }
L_001a1878:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a187c:;
    {
        cpu->r[12] = 0x00006770u;
    }
L_001a1880:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a1884:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a1888:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a188c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a1890:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a1894:;
    {
        cpu->r[14] = 0x001a1898u; fn_001b9680(cpu);
    }
L_001a1898:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a189c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a18a0:;
    {
        cpu->r[14] = 0x001a18a4u; fn_000ae3d0(cpu);
    }
L_001a18a4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001a18a8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a18ac:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a18b0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001a18b4:;
    {
        cpu->r[12] = 0x0000006eu;
    }
L_001a18b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a18bc:;
    {
        cpu->r[14] = 0x001a18c0u; fn_00099114(cpu);
    }
L_001a18c0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a18c4:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_001a18c8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001a18cc:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_001a18d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a18d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000055u, 0, 0);
    }
L_001a18d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a18dc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001a18e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a18e4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[12]; cpu->r[3] = v;
    }
L_001a18e8:;
    {
        cpu->r[14] = 0x001a18ecu; fn_000ad19c(cpu);
    }
L_001a18ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a18f0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001a18f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a18f8:;
    {
        cpu->r[14] = 0x001a18fcu; imp_memset(cpu); /* memset */
    }
L_001a18fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1900:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a1904:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001a1908:;
    {
        cpu->r[14] = 0x001a190cu; fn_000ae830(cpu);
    }
L_001a190c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a1910:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a1914:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1918:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000055u, 0, 0);
    }
L_001a191c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a1920:;
    {
        cpu->r[2] = 0x00000039u;
    }
L_001a1924:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a1928:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[12]; cpu->r[3] = v;
    }
L_001a192c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a1930:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1934:;
    {
        cpu->r[14] = 0x001a1938u; fn_000ad19c(cpu);
    }
L_001a1938:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a193c:;
    {
        cpu->r[12] = 0x00006770u;
    }
L_001a1940:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a1944:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001a1948:;
    {
        cpu->r[14] = 0x001a194cu; fn_001b977c(cpu);
    }
L_001a194c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001a1950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_001a1954:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_001a1ac4;
        case 1: goto L_001a196c;
        case 2: goto L_001a1adc;
        case 3: goto L_001a19cc;
        default: guest_unimplemented(cpu, 0x001a1954u); return; }
        }
    }
L_001a1958:;
    {
        goto L_001a19a8;
    }
L_001a196c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a1970:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1974:;
    {
        cpu->r[1] = 0x00000447u;
    }
L_001a1978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a197c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001a1980:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001a1984:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_001a1988:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a198c:;
    {
        cpu->r[2] = 0x0000012cu;
    }
L_001a1990:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001a1994:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a1998:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000055u, 0, 0);
    }
L_001a199c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a19a0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[12]; cpu->r[3] = v;
    }
L_001a19a4:;
    {
        cpu->r[14] = 0x001a19a8u; fn_000ad200(cpu);
    }
L_001a19a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a19ac:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a19b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a19b4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001a19b8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001a19bc:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001a19c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1a74;
        }
    }
L_001a19c4:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_001a19c8:;
    {
        goto L_001a1830;
    }
L_001a19cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a19d0:;
    {
        cpu->r[0] = 0x0000044au;
    }
L_001a19d4:;
    {
        cpu->r[14] = 0x001a19d8u; fn_000aeb58(cpu);
    }
L_001a19d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a19dc:;
    {
        cpu->r[3] = 0x00000088u;
    }
L_001a19e0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a19e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a19e8:;
    {
        cpu->r[14] = 0x001a19ecu; fn_000a9818(cpu);
    }
L_001a19ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a19f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a19f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a19f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x54u);
    }
L_001a19fc:;
    {
        cpu->r[0] = 0x0000044au;
    }
L_001a1a00:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001a1a04:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001a1a08:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[12]);
    }
L_001a1a0c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001a1a10:;
    {
        cpu->r[14] = 0x001a1a14u; fn_000aeb58(cpu);
    }
L_001a1a14:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a1a18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a1a1c:;
    {
        cpu->r[3] = 0x0000012cu;
    }
L_001a1a20:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000055u, 0, 0);
    }
L_001a1a24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a1a28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a1a2c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[14]; cpu->r[5] = v;
    }
L_001a1a30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001a1a34:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001a1a38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a1a3c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a1a40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a1a44:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a1a48:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a1a4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1a50:;
    {
        cpu->r[14] = 0x001a1a54u; fn_000ac4bc(cpu);
    }
L_001a1a54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a1a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a1a5c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a1a60:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001a1a64:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[10]);
    }
L_001a1a68:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001a1a6c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001a1a70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a19c4;
        }
    }
L_001a1a74:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a1a78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a1a7c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a1a80:;
    {
        wr8(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001a1a84:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001a1a88:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a1a8c:;
    {
        cpu->r[14] = 0x001a1a90u; fn_0012f780(cpu);
    }
L_001a1a90:;
    {
        cpu->r[12] = rd32(0x001a1a98u + + 0x194u);
    }
L_001a1a94:;
    {
        cpu->r[3] = rd32(0x001a1a9cu + + 0x194u);
    }
L_001a1a98:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1a9c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001a1aa0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a1aa4:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[12]);
    }
L_001a1aa8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001a1aac:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a1ab0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a1ab4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1ab8:;
    {
        cpu->r[14] = 0x001a1abcu; fn_0012fa2c(cpu);
    }
L_001a1abc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002a4u, 0, 0);
    }
L_001a1ac0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1ac4u)) return;
    }
L_001a1ac4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a1ac8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1acc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a1ad0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001a1ad4:;
    {
        cpu->r[1] = 0x00000448u;
    }
L_001a1ad8:;
    {
        goto L_001a1980;
    }
L_001a1adc:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001a1ae0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1ae4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1ae8:;
    {
        cpu->r[14] = 0x001a1aecu; imp_memset(cpu); /* memset */
    }
L_001a1aec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1af0:;
    {
        cpu->r[0] = 0x00000449u;
    }
L_001a1af4:;
    {
        cpu->r[14] = 0x001a1af8u; fn_000aeb58(cpu);
    }
L_001a1af8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a1afc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a1b00:;
    {
        cpu->r[2] = 0x00006770u;
    }
L_001a1b04:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001a1b08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001a1b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a1b10:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a1b14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a1b18:;
    {
        cpu->r[14] = 0x001a1b1cu; fn_001b97ac(cpu);
    }
L_001a1b1c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001a1b20:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a1b24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1b28:;
    {
        cpu->r[14] = 0x001a1b2cu; fn_000ae740(cpu);
    }
L_001a1b2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1b30:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a1b34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a1b38:;
    {
        cpu->r[3] = 0x00000088u;
    }
L_001a1b3c:;
    {
        cpu->r[14] = 0x001a1b40u; fn_000a9818(cpu);
    }
L_001a1b40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001a1b44:;
    {
        cpu->r[2] = (~0x000000ffu);
    }
L_001a1b48:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001a1b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1b50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a1b54:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001a1b58:;
    {
        cpu->r[3] = 0x0000012cu;
    }
L_001a1b5c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x99cu);
    }
L_001a1b60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a1b64:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000055u, 0, 0);
    }
L_001a1b68:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001a1b6c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a1b70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x290u);
    }
L_001a1b74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a1b78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001a1b7c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[14]; cpu->r[5] = v;
    }
L_001a1b80:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a1b84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a1b88:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a1b8c:;
    {
        cpu->r[14] = 0x001a1b90u; fn_000ac4bc(cpu);
    }
L_001a1b90:;
    {
        goto L_001a19a8;
    }
L_001a1b94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1b98:;
    {
        cpu->r[14] = 0x001a1b9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1b9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a16e4;
        }
    }
L_001a1ba4:;
    {
        cpu->r[5] = rd32(0x001a1bacu + + 0x70u);
    }
L_001a1ba8:;
    {
        cpu->r[8] = rd32(cpu->r[11] + cpu->r[5]);
    }
L_001a1bac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1bb0:;
    {
        cpu->r[14] = 0x001a1bb4u; fn_0018aa20(cpu);
    }
L_001a1bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1bb8:;
    {
        cpu->r[14] = 0x001a1bbcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a1bbc:;
    {
        cpu->r[3] = rd32(0x001a1bc4u + + 0x70u);
    }
L_001a1bc0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1bc4:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001a1bc8:;
    {
        cpu->r[3] = rd32(0x001a1bd0u + + 0x68u);
    }
L_001a1bcc:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001a1bd0:;
    {
        cpu->r[14] = 0x001a1bd4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a1bd4:;
    {
        goto L_001a16e8;
    }
L_001a1bd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1bdc:;
    {
        cpu->r[14] = 0x001a1be0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1be0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a171c;
        }
    }
L_001a1be8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1bec:;
    {
        cpu->r[14] = 0x001a1bf0u; fn_0018aa20(cpu);
    }
L_001a1bf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1bf4:;
    {
        cpu->r[14] = 0x001a1bf8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a1bf8:;
    {
        cpu->r[3] = rd32(0x001a1c00u + + 0x34u);
    }
L_001a1bfc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1c00:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001a1c04:;
    {
        cpu->r[3] = rd32(0x001a1c0cu + + 0x2cu);
    }
L_001a1c08:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_001a1c0c:;
    {
        cpu->r[14] = 0x001a1c10u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a1c10:;
    {
        goto L_001a171c;
    }
}

/* _ZN21GS_OnlineInviteFriend6RenderEv @ 001a1c3c (arm) */
void fn_001a1c3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1c3c:;
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
L_001a1c40:;
    {
        cpu->r[5] = rd32(0x001a1c48u + + 0x32cu);
    }
L_001a1c44:;
    {
        cpu->r[3] = rd32(0x001a1c4cu + + 0x32cu);
    }
L_001a1c48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a1c4c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a1c54u, cpu->r[5], 0, 0);
    }
L_001a1c50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001a1c54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1c58:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a1c5c:;
    {
        cpu->r[14] = 0x001a1c60u; fn_0012f780(cpu);
    }
L_001a1c60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1c64:;
    {
        cpu->r[1] = 0x000002e2u;
    }
L_001a1c68:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_001a1c6c:;
    {
        cpu->r[14] = 0x001a1c70u; fn_00113570(cpu);
    }
L_001a1c70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a1c74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a1c78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a1ca8;
        }
    }
L_001a1c7c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a1c80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a1c84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1c8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1c90:;
    {
        cpu->r[14] = 0x001a1c98u;
    }
L_001a1c94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1c98u)) return;
    }
L_001a1c98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a1c9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a1ca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a1ca4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a1c80;
        }
    }
L_001a1ca8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8d0u);
    }
L_001a1cac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a1cb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a1f60;
        }
    }
L_001a1cb4:;
    {
        cpu->r[9] = rd32(0x001a1cbcu + + 0x2c0u);
    }
L_001a1cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1cbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1cc0:;
    {
        cpu->r[14] = 0x001a1cc8u;
    }
L_001a1cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1cc8u)) return;
    }
L_001a1cc8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1cd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1cd4:;
    {
        cpu->r[14] = 0x001a1cdcu;
    }
L_001a1cd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1cdcu)) return;
    }
L_001a1cdc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a1ce0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a1ce4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a1ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1e74;
        }
    }
L_001a1cec:;
    {
        cpu->r[8] = rd32(0x001a1cf4u + + 0x28cu);
    }
L_001a1cf0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a1cf4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a1cf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1cfc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1d00:;
    {
        cpu->r[14] = 0x001a1d04u; fn_0018aa44(cpu);
    }
L_001a1d04:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a1d08:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a1d0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a1d10:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a1d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1f24;
        }
    }
L_001a1d18:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a1d1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a1d20:;
    {
        cpu->r[14] = 0x001a1d24u; fn_00096a08(cpu);
    }
L_001a1d24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a1d28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1d2c:;
    {
        cpu->r[11] = 0x00000011u;
    }
L_001a1d30:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001a1d34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001a1d38:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a1d3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a1d40:;
    {
        cpu->r[14] = 0x001a1d44u; fn_0018aa44(cpu);
    }
L_001a1d44:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001a1d48:;
    {
        cpu->r[1] = 0x000000d7u;
    }
L_001a1d4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a1d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001a1d54:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a1d58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a1d5c:;
    {
        wr8(cpu->r[7] + + 0x50u, cpu->r[12]);
    }
L_001a1d60:;
    {
        cpu->r[14] = 0x001a1d64u; fn_000a8d10(cpu);
    }
L_001a1d64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a1d68:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a1d6c:;
    {
        cpu->r[1] = 0x000000d7u;
    }
L_001a1d70:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_001a1d74:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_001a1d78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001a1d7c:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_001a1d80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a1d84:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a1d88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1d8c:;
    {
        cpu->r[14] = 0x001a1d90u; fn_000ad8a0(cpu);
    }
L_001a1d90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a1d94:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a1d98:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_001a1d9c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[2], 1, 0);
    }
L_001a1da0:;
    {
        cpu->r[3] = 0x00000041u;
    }
L_001a1da4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001a1da8:;
    {
        cpu->r[12] = 0x00200000u;
    }
L_001a1dac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a1db0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a1db4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1db8:;
    {
        cpu->r[14] = 0x001a1dbcu; fn_000ad8a0(cpu);
    }
L_001a1dbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1dc0:;
    {
        cpu->r[1] = 0x00000451u;
    }
L_001a1dc4:;
    {
        cpu->r[2] = 0x00000039u;
    }
L_001a1dc8:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001a1dcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a1dd0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001a1dd4:;
    {
        cpu->r[14] = 0x001a1dd8u; fn_000ad200(cpu);
    }
L_001a1dd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1ddc:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_001a1de0:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_001a1de4:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001a1de8:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001a1dec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a1df0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a1df4:;
    {
        cpu->r[14] = 0x001a1df8u; fn_000ad200(cpu);
    }
L_001a1df8:;
    {
        cpu->r[3] = 0x0000002fu;
    }
L_001a1dfc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1e00:;
    {
        cpu->r[1] = 0x0000044bu;
    }
L_001a1e04:;
    {
        cpu->r[2] = 0x0000012cu;
    }
L_001a1e08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a1e0c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001a1e10:;
    {
        cpu->r[14] = 0x001a1e14u; fn_000ad200(cpu);
    }
L_001a1e14:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a1e18:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a1e1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a1e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1eb8;
        }
    }
L_001a1e24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1e28:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a1e2c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a1e30:;
    {
        cpu->r[14] = 0x001a1e34u; fn_0018aa44(cpu);
    }
L_001a1e34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a1e38:;
    {
        cpu->r[14] = 0x001a1e3cu; fn_000960f4(cpu);
    }
L_001a1e3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1f10;
        }
    }
L_001a1e44:;
    {
        cpu->r[3] = rd32(0x001a1e4cu + + 0x138u);
    }
L_001a1e48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1e4c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a1e50:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a1e54:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a1e58:;
    {
        cpu->r[14] = 0x001a1e5cu; fn_001b9648(cpu);
    }
L_001a1e5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1e60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a1e6c;
        }
    }
L_001a1e64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1e68:;
    {
        cpu->r[14] = 0x001a1e6cu; fn_001a16bc(cpu);
    }
L_001a1e6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a1e70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1e74u)) return;
    }
L_001a1e74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1e78:;
    {
        cpu->r[14] = 0x001a1e7cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1e7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1cec;
        }
    }
L_001a1e84:;
    {
        cpu->r[8] = rd32(0x001a1e8cu + + 0xf4u);
    }
L_001a1e88:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a1e8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1e90:;
    {
        cpu->r[14] = 0x001a1e94u; fn_0018aa20(cpu);
    }
L_001a1e94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1e98:;
    {
        cpu->r[14] = 0x001a1e9cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a1e9c:;
    {
        cpu->r[3] = rd32(0x001a1ea4u + + 0xe4u);
    }
L_001a1ea0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1ea4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1ea8:;
    {
        cpu->r[3] = rd32(0x001a1eb0u + + 0xdcu);
    }
L_001a1eac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1eb0:;
    {
        cpu->r[14] = 0x001a1eb4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a1eb4:;
    {
        goto L_001a1cf0;
    }
L_001a1eb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1ebc:;
    {
        cpu->r[14] = 0x001a1ec0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1ec0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1e24;
        }
    }
L_001a1ec8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a1ecc:;
    {
        cpu->r[14] = 0x001a1ed0u; fn_0018aa20(cpu);
    }
L_001a1ed0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1ed4:;
    {
        cpu->r[14] = 0x001a1ed8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a1ed8:;
    {
        cpu->r[3] = rd32(0x001a1ee0u + + 0xa8u);
    }
L_001a1edc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a1ee0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1ee4:;
    {
        cpu->r[3] = rd32(0x001a1eecu + + 0xa0u);
    }
L_001a1ee8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1eec:;
    {
        cpu->r[14] = 0x001a1ef0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a1ef0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a1ef4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a1ef8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001a1efc:;
    {
        cpu->r[14] = 0x001a1f00u; fn_0018aa44(cpu);
    }
L_001a1f00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a1f04:;
    {
        cpu->r[14] = 0x001a1f08u; fn_000960f4(cpu);
    }
L_001a1f08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a1e44;
        }
    }
L_001a1f10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1f14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1f18:;
    {
        cpu->r[14] = 0x001a1f20u;
    }
L_001a1f1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1f20u)) return;
    }
L_001a1f20:;
    {
        goto L_001a1e44;
    }
L_001a1f24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1f28:;
    {
        cpu->r[14] = 0x001a1f2cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a1f2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a1f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1d18;
        }
    }
L_001a1f34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1f38:;
    {
        cpu->r[14] = 0x001a1f3cu; fn_0018aa20(cpu);
    }
L_001a1f3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a1f40:;
    {
        cpu->r[14] = 0x001a1f44u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a1f44:;
    {
        cpu->r[3] = rd32(0x001a1f4cu + + 0x3cu);
    }
L_001a1f48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a1f4c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1f50:;
    {
        cpu->r[3] = rd32(0x001a1f58u + + 0x34u);
    }
L_001a1f54:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a1f58:;
    {
        cpu->r[14] = 0x001a1f5cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a1f5c:;
    {
        goto L_001a1d18;
    }
L_001a1f60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a1f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a1f68:;
    {
        cpu->r[14] = 0x001a1f70u;
    }
L_001a1f6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a1f70u)) return;
    }
L_001a1f70:;
    {
        goto L_001a1cb4;
    }
}

/* _ZN21GS_OnlineInviteFriend22ProcessOnMouseButtonUpEv @ 001a1f90 (arm) */
void fn_001a1f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a1f90:;
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
L_001a1f94:;
    {
        cpu->r[6] = rd32(0x001a1f9cu + + 0x218u);
    }
L_001a1f98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a1f9c:;
    {
        wr8(cpu->r[0] + + 0x9a8u, cpu->r[3]);
    }
L_001a1fa0:;
    {
        cpu->r[3] = rd32(0x001a1fa8u + + 0x210u);
    }
L_001a1fa4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001a1facu, cpu->r[6], 0, 0);
    }
L_001a1fa8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_001a1fac:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a1fb0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001a1fb4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a1fb8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a1fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2170;
        }
    }
L_001a1fc0:;
    {
        cpu->r[4] = rd32(0x001a1fc8u + + 0x1f4u);
    }
L_001a1fc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a1fc8:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a1fcc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001a1fd0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001a1fd4:;
    {
        cpu->r[14] = 0x001a1fd8u; fn_0018aa44(cpu);
    }
L_001a1fd8:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_001a1fdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001a1fe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001a1fe4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a1fe8:;
    {
        cpu->r[14] = 0x001a1fecu; fn_000a8d10(cpu);
    }
L_001a1fec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001a1ff0:;
    {
        cpu->r[2] = 0x00000113u;
    }
L_001a1ff4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a1ff8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a1ffc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a2000:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001a2004:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001a2008:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001a200c:;
    {
        cpu->r[14] = 0x001a2010u; fn_000a8a2c(cpu);
    }
L_001a2010:;
    {
        cpu->r[3] = rd32(0x001a2018u + + 0x1a8u);
    }
L_001a2014:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a2018:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a201c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a2020:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001a2024:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a2028:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a202c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a2030:;
    {
        cpu->r[14] = 0x001a2034u; fn_001b9648(cpu);
    }
L_001a2034:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001a2038:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a203c:;
    {
        cpu->r[14] = 0x001a2040u; fn_00110c40(cpu);
    }
L_001a2040:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_001a2044:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a214c;
        }
    }
L_001a2048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_001a204c:;
    {
        cpu->r[0] = rd32(0x001a2054u + + 0x170u);
    }
L_001a2050:;
    {
        cpu->r[2] = rd32(0x001a2058u + + 0x170u);
    }
L_001a2054:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001a2058:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001a205c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001a2060:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a2064:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001a2068:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001a206c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001a2070:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001a2074:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a2078:;
    {
        cpu->r[1] = 0x000000d6u;
    }
L_001a207c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001a2080:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a2084:;
    {
        cpu->r[14] = 0x001a2088u; fn_000a8d10(cpu);
    }
L_001a2088:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a208c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a2090:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001a2094:;
    {
        cpu->r[2] = sub_flags(cpu, 0x000002e0u, cpu->r[3], 1, 0);
    }
L_001a2098:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001a209c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001a20a0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_001a20a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a20a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001a20ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001a20b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a2154;
        }
    }
L_001a20b4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001a20b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a2154;
        }
    }
L_001a20bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a20c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_001a20c4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_001a20c8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001a20cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a20d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a20d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003du, 0, 0);
    }
L_001a20d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a20dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a2154;
        }
    }
L_001a20e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a20e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000045u, 1, 1);
    }
L_001a20e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a2154;
        }
    }
L_001a20ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a20f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_001a20f4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001a20f8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x99cu);
    }
L_001a20fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a2100:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000055u, 0, 0);
    }
L_001a2104:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001a2108:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001a210c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001a2110:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a2114:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001a2118:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a213c;
        }
    }
L_001a211c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a2120:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001a2124:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001a2128:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a213c;
        }
    }
L_001a212c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a2130:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x9b0u);
    }
L_001a2134:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001a2138:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[12] + + 0x988u, cpu->r[1]);
        }
    }
L_001a213c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001a2140:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a2144:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001a2148:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a2074;
        }
    }
L_001a214c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001a2150:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2154u)) return;
    }
L_001a2154:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001a2158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_001a215c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001a2160:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a2164:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001a2168:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a2074;
        }
    }
L_001a216c:;
    {
        goto L_001a214c;
    }
L_001a2170:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a2174:;
    {
        cpu->r[14] = 0x001a2178u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a2178:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a217c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a1fc0;
        }
    }
L_001a2180:;
    {
        cpu->r[4] = rd32(0x001a2188u + + 0x34u);
    }
L_001a2184:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001a2188:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a218c:;
    {
        cpu->r[14] = 0x001a2190u; fn_0018aa20(cpu);
    }
L_001a2190:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a2194:;
    {
        cpu->r[14] = 0x001a2198u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a2198:;
    {
        cpu->r[3] = rd32(0x001a21a0u + + 0x2cu);
    }
L_001a219c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a21a0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a21a4:;
    {
        cpu->r[3] = rd32(0x001a21acu + + 0x24u);
    }
L_001a21a8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a21ac:;
    {
        cpu->r[14] = 0x001a21b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a21b0:;
    {
        goto L_001a1fc4;
    }
}

/* _ZN21GS_OnlineInviteFriendC1Ev @ 001a21d4 (arm) */
void fn_001a21d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a21d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a21d8:;
    {
        cpu->r[5] = rd32(0x001a21e0u + + 0x11cu);
    }
L_001a21dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a21e0:;
    {
        cpu->r[14] = 0x001a21e4u; fn_0010ffa8(cpu);
    }
L_001a21e4:;
    {
        cpu->r[2] = rd32(0x001a21ecu + + 0x114u);
    }
L_001a21e8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a21f0u, cpu->r[5], 0, 0);
    }
L_001a21ec:;
    {
        cpu->r[3] = rd32(0x001a21f4u + + 0x110u);
    }
L_001a21f0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a21f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a21f8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a21fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a2200:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a2204:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a2208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a22b8;
        }
    }
L_001a220c:;
    {
        cpu->r[6] = rd32(0x001a2214u + + 0xf4u);
    }
L_001a2210:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a2214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2218:;
    {
        cpu->r[14] = 0x001a221cu; fn_00096a08(cpu);
    }
L_001a221c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a2220:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a2224:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a2228:;
    {
        cpu->r[14] = 0x001a222cu; fn_0018aa44(cpu);
    }
L_001a222c:;
    {
        cpu->r[3] = rd32(0x001a2234u + + 0xd8u);
    }
L_001a2230:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2234:;
    {
        cpu->r[1] = 0x0000e770u;
    }
L_001a2238:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a223c:;
    {
        cpu->r[2] = 0x0000e778u;
    }
L_001a2240:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a2244:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001a2248:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001a224c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a2250:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a2254:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[12]);
    }
L_001a2258:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_001a225c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a2260:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[3]);
    }
L_001a2264:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_001a2268:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a226c:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_001a2270:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a2274:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_001a2278:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a227c:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_001a2280:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a2284:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_001a2288:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001a228c:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a2290:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[5]);
    }
L_001a2294:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a2298:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[12]);
    }
L_001a229c:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[12]);
    }
L_001a22a0:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[12]);
    }
L_001a22a4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_001a22a8:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001a22ac:;
    {
        cpu->r[14] = 0x001a22b0u; fn_001ba230(cpu);
    }
L_001a22b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a22b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a22b8u)) return;
    }
L_001a22b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a22bc:;
    {
        cpu->r[14] = 0x001a22c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a22c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a22c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a220c;
        }
    }
L_001a22c8:;
    {
        cpu->r[6] = rd32(0x001a22d0u + + 0x38u);
    }
L_001a22cc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a22d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a22d4:;
    {
        cpu->r[14] = 0x001a22d8u; fn_0018aa20(cpu);
    }
L_001a22d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a22dc:;
    {
        cpu->r[14] = 0x001a22e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a22e0:;
    {
        cpu->r[3] = rd32(0x001a22e8u + + 0x28u);
    }
L_001a22e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a22e8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a22ec:;
    {
        cpu->r[3] = rd32(0x001a22f4u + + 0x20u);
    }
L_001a22f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a22f4:;
    {
        cpu->r[14] = 0x001a22f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a22f8:;
    {
        goto L_001a2210;
    }
}

/* _ZN21GS_OnlineInviteFriendC2Ev @ 001a2318 (arm) */
void fn_001a2318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a2318:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a231c:;
    {
        cpu->r[5] = rd32(0x001a2324u + + 0x11cu);
    }
L_001a2320:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a2324:;
    {
        cpu->r[14] = 0x001a2328u; fn_0010ffa8(cpu);
    }
L_001a2328:;
    {
        cpu->r[2] = rd32(0x001a2330u + + 0x114u);
    }
L_001a232c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a2334u, cpu->r[5], 0, 0);
    }
L_001a2330:;
    {
        cpu->r[3] = rd32(0x001a2338u + + 0x110u);
    }
L_001a2334:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a2338:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a233c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001a2340:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a2344:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a2348:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a234c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a23fc;
        }
    }
L_001a2350:;
    {
        cpu->r[6] = rd32(0x001a2358u + + 0xf4u);
    }
L_001a2354:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a2358:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a235c:;
    {
        cpu->r[14] = 0x001a2360u; fn_00096a08(cpu);
    }
L_001a2360:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a2364:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a2368:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a236c:;
    {
        cpu->r[14] = 0x001a2370u; fn_0018aa44(cpu);
    }
L_001a2370:;
    {
        cpu->r[3] = rd32(0x001a2378u + + 0xd8u);
    }
L_001a2374:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2378:;
    {
        cpu->r[1] = 0x0000e770u;
    }
L_001a237c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a2380:;
    {
        cpu->r[2] = 0x0000e778u;
    }
L_001a2384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a2388:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001a238c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_001a2390:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a2394:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a2398:;
    {
        wr32(cpu->r[4] + + 0x984u, cpu->r[12]);
    }
L_001a239c:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_001a23a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a23a4:;
    {
        wr32(cpu->r[4] + + 0x980u, cpu->r[3]);
    }
L_001a23a8:;
    {
        wr32(cpu->r[4] + + 0x988u, cpu->r[3]);
    }
L_001a23ac:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a23b0:;
    {
        wr32(cpu->r[4] + + 0x970u, cpu->r[3]);
    }
L_001a23b4:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a23b8:;
    {
        wr32(cpu->r[4] + + 0x974u, cpu->r[3]);
    }
L_001a23bc:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a23c0:;
    {
        wr32(cpu->r[4] + + 0x978u, cpu->r[3]);
    }
L_001a23c4:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a23c8:;
    {
        wr32(cpu->r[4] + + 0x97cu, cpu->r[3]);
    }
L_001a23cc:;
    {
        wr32(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001a23d0:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_001a23d4:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[5]);
    }
L_001a23d8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a23dc:;
    {
        wr32(cpu->r[4] + + 0x98cu, cpu->r[12]);
    }
L_001a23e0:;
    {
        wr32(cpu->r[4] + + 0x990u, cpu->r[12]);
    }
L_001a23e4:;
    {
        wr8(cpu->r[4] + + 0x994u, cpu->r[12]);
    }
L_001a23e8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[0]);
    }
L_001a23ec:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001a23f0:;
    {
        cpu->r[14] = 0x001a23f4u; fn_001ba230(cpu);
    }
L_001a23f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a23f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a23fcu)) return;
    }
L_001a23fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a2400:;
    {
        cpu->r[14] = 0x001a2404u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a2404:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a2408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2350;
        }
    }
L_001a240c:;
    {
        cpu->r[6] = rd32(0x001a2414u + + 0x38u);
    }
L_001a2410:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a2414:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a2418:;
    {
        cpu->r[14] = 0x001a241cu; fn_0018aa20(cpu);
    }
L_001a241c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a2420:;
    {
        cpu->r[14] = 0x001a2424u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a2424:;
    {
        cpu->r[3] = rd32(0x001a242cu + + 0x28u);
    }
L_001a2428:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a242c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a2430:;
    {
        cpu->r[3] = rd32(0x001a2438u + + 0x20u);
    }
L_001a2434:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a2438:;
    {
        cpu->r[14] = 0x001a243cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a243c:;
    {
        goto L_001a2354;
    }
}

/* _ZN17GS_AARankingsShow8isKindOfEi @ 001a245c (arm) */
void fn_001a245c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a245c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000004eu, 1, 1);
    }
L_001a2460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a2464:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a2468:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17GS_AARankingsShow17ApplyMenuSettingsEv @ 001a246c (arm) */
void fn_001a246c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a246c:;
    {
        cpu->r[3] = rd32(0x001a2474u + + 0xd0u);
    }
L_001a2470:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a2474:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a2478:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a2480u, cpu->r[3], 0, 0);
    }
L_001a247c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a2480:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000060u, 0, 0);
    }
L_001a2484:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001a2488:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a248c:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[12]);
    }
L_001a2490:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001a2494:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a2498:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[12]);
    }
L_001a249c:;
    {
        cpu->r[12] = 0x00000461u;
    }
L_001a24a0:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[1]);
    }
L_001a24a4:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[2]);
    }
L_001a24a8:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[12]);
    }
L_001a24ac:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_001a24b0:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_001a24b4:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_001a24b8:;
    {
        cpu->r[5] = rd32(0x001a24c0u + + 0x88u);
    }
L_001a24bc:;
    {
        cpu->r[14] = 0x001a24c4u;
    }
L_001a24c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a24c4u)) return;
    }
L_001a24c4:;
    {
        cpu->r[3] = rd32(0x001a24ccu + + 0x80u);
    }
L_001a24c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a24d0u, cpu->r[5], 0, 0);
    }
L_001a24cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a24d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a24d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_001a24d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2510;
        }
    }
L_001a24dc:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a24e0:;
    {
        cpu->r[2] = 0x000000dau;
    }
L_001a24e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a24e8:;
    {
        cpu->r[3] = 0x00001408u;
    }
L_001a24ec:;
    {
        cpu->r[2] = 0x0000014au;
    }
L_001a24f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a24f4:;
    {
        cpu->r[3] = 0x0000140cu;
    }
L_001a24f8:;
    {
        cpu->r[2] = 0x000001f9u;
    }
L_001a24fc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a2500:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a2504:;
    {
        cpu->r[2] = 0x000000b4u;
    }
L_001a2508:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a250c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2510u)) return;
    }
L_001a2510:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a2514:;
    {
        cpu->r[2] = 0x000000beu;
    }
L_001a2518:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a251c:;
    {
        cpu->r[3] = 0x00001408u;
    }
L_001a2520:;
    {
        cpu->r[2] = 0x0000012eu;
    }
L_001a2524:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a2528:;
    {
        cpu->r[3] = 0x0000140cu;
    }
L_001a252c:;
    {
        cpu->r[2] = 0x000001ddu;
    }
L_001a2530:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a2534:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a2538:;
    {
        cpu->r[2] = 0x00000098u;
    }
L_001a253c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a2540:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2544u)) return;
    }
}

/* init_array_64 @ 001a2550 (arm) */
void fn_001a2550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a2550:;
    {
        cpu->r[3] = rd32(0x001a2558u + + 0x3cu);
    }
L_001a2554:;
    {
        cpu->r[1] = rd32(0x001a255cu + + 0x3cu);
    }
L_001a2558:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a2560u, cpu->r[3], 0, 0);
    }
L_001a255c:;
    {
        cpu->r[2] = rd32(0x001a2564u + + 0x38u);
    }
L_001a2560:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a2564:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a256cu, cpu->r[2], 0, 0);
    }
L_001a2568:;
    {
        cpu->r[1] = rd32(0x001a2570u + + 0x30u);
    }
L_001a256c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a2570:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a2574:;
    {
        cpu->r[3] = rd32(0x001a257cu + + 0x28u);
    }
L_001a2578:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 0);
    }
L_001a257c:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_001a2580:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a2588u, cpu->r[3], 0, 0);
    }
L_001a2584:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a2588:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x000000abu, 1, 0);
    }
L_001a258c:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[2]);
    }
L_001a2590:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17GS_AARankingsShowD1Ev @ 001a25a8 (arm) */
void fn_001a25a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a25a8:;
    {
        cpu->r[3] = rd32(0x001a25b0u + + 0x24u);
    }
L_001a25ac:;
    {
        cpu->r[2] = rd32(0x001a25b4u + + 0x24u);
    }
L_001a25b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a25b8u, cpu->r[3], 0, 0);
    }
L_001a25b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a25b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a25bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a25c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a25c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a25c8:;
    {
        cpu->r[14] = 0x001a25ccu; fn_000ec21c(cpu);
    }
L_001a25cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a25d0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a25d4u)) return;
    }
}

/* _ZN17GS_AARankingsShow6ResumeEv @ 001a25dc (arm) */
void fn_001a25dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a25dc:;
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
L_001a25e0:;
    {
        cpu->r[6] = rd32(0x001a25e8u + + 0x214u);
    }
L_001a25e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001a25e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a25ec:;
    {
        cpu->r[14] = 0x001a25f0u; fn_001142a0(cpu);
    }
L_001a25f0:;
    {
        cpu->r[3] = rd32(0x001a25f8u + + 0x208u);
    }
L_001a25f4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001a25fcu, cpu->r[6], 0, 0);
    }
L_001a25f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a25fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a2600:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a2604:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_001a2608:;
    {
        cpu->r[14] = 0x001a260cu; fn_000960f4(cpu);
    }
L_001a260c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001a2610:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001a2614:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a2618:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_001a261c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a2620:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a2624:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a2628:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000050u, 1, 0);
        }
    }
L_001a262c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a2630:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001a2634:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x000000beu, 0, 0);
    }
L_001a2638:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001a263c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001a2640:;
    {
        cpu->r[14] = 0x001a2644u; fn_000a8a2c(cpu);
    }
L_001a2644:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a2648:;
    {
        cpu->r[3] = 0x0000ffb0u;
    }
L_001a264c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a2650:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], 0x000000beu, 1, 0);
    }
L_001a2654:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a2658:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001a265c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001a2660:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a2664:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a2668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a266c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_001a2670:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_001a2674:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001a2678:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_001a267c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a2680:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_001a2684:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001a2688:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_001a268c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_001a2690:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001a2694:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a2698:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004bu, 0, 0);
    }
L_001a269c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a26a0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000050u, 0, 0);
    }
L_001a26a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a26a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a26ac:;
    {
        cpu->r[14] = 0x001a26b0u; fn_000ec75c(cpu);
    }
L_001a26b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a26b4:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a26b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a26bc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001a26c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a26c4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x48u);
    }
L_001a26c8:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[14]);
    }
L_001a26cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a26d0:;
    {
        wr32(cpu->r[1] + + 0x40u, cpu->r[14]);
    }
L_001a26d4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a26d8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a26dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a26e0:;
    {
        cpu->r[14] = 0x001a26e4u; fn_000ec75c(cpu);
    }
L_001a26e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a26e8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a26ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a26f0:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001a26f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a26f8:;
    {
        wr32(cpu->r[12] + + 0x54u, cpu->r[9]);
    }
L_001a26fc:;
    {
        wr32(cpu->r[12] + + 0x58u, cpu->r[14]);
    }
L_001a2700:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a2704:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a2708:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001a270c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001a2710:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001a2714:;
    {
        cpu->r[14] = 0x001a2718u; fn_000a8a2c(cpu);
    }
L_001a2718:;
    {
        cpu->r[3] = rd32(0x001a2720u + + 0xe4u);
    }
L_001a271c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a2720:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a2724:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001a2728:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a272c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001a2730:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2734:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001a2738:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001a273c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a2740:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 1u, &shc); cpu->r[8] = v;
    }
L_001a2744:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 0);
    }
L_001a2748:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001a274c:;
    {
        cpu->r[14] = 0x001a2750u; fn_000960f4(cpu);
    }
L_001a2750:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a2754:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_001a2758:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 1u, &shc); cpu->r[9] = v;
    }
L_001a275c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000fu, 0, 0);
    }
L_001a2760:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[9], 0x00000017u, 1, 0);
    }
L_001a2764:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001a2768:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a276c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a2770:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a2774:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a2778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a277c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a2780:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000036u, 1, 0);
        }
    }
L_001a2784:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a2788:;
    {
        cpu->r[14] = 0x001a278cu; fn_000ec75c(cpu);
    }
L_001a278c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a2790:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a2794:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001a2798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a279c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x18u);
    }
L_001a27a0:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[11]);
    }
L_001a27a4:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[5]);
    }
L_001a27a8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a27ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a27b0:;
    {
        cpu->r[14] = 0x001a27b4u; fn_000ec75c(cpu);
    }
L_001a27b4:;
    {
        cpu->r[2] = rd32(0x001a27bcu + + 0x4cu);
    }
L_001a27b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a27bc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001a27c0:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[8]);
    }
L_001a27c4:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[5]);
    }
L_001a27c8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001a27cc:;
    {
        cpu->r[2] = 0x000067adu;
    }
L_001a27d0:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001a27d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a27d8:;
    {
        cpu->r[2] = 0x00000013u;
    }
L_001a27dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_001a27e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000012u;
        }
    }
L_001a27e4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a27e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000012u;
        }
    }
L_001a27ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a27f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_001a27f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001a27f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a27fcu)) return;
    }
}

/* _ZN17GS_AARankingsShow6UpdateEv @ 001a280c (arm) */
void fn_001a280c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a280c:;
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
L_001a2810:;
    {
        cpu->r[5] = rd32(0x001a2818u + + 0x484u);
    }
L_001a2814:;
    {
        cpu->r[9] = rd32(0x001a281cu + + 0x484u);
    }
L_001a2818:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a281c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a2824u, cpu->r[5], 0, 0);
    }
L_001a2820:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a2824:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a2828:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000410u, 1, 0);
    }
L_001a282c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2830:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001a2834:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001a2838:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_001a283c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a2840:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a2844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a28d8;
        }
    }
L_001a2848:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_001a284c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a28d8;
        }
    }
L_001a2850:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_001a2854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a28d8;
        }
    }
L_001a2858:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a285c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a28d8;
        }
    }
L_001a2860:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_001a2864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a28d8;
        }
    }
L_001a2868:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x968u);
    }
L_001a286c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001a2870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2bf4;
        }
    }
L_001a2874:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a2878:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a287c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a2880:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000000acu;
        }
    }
L_001a2884:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000002aau;
        }
    }
L_001a2888:;
    {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
    }
L_001a288c:;
    {
        cpu->r[2] = 0x00001c80u;
    }
L_001a2890:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a2894:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001a2898:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a289c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000000afu;
        }
    }
L_001a28a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000002adu;
        }
    }
L_001a28a4:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_001a28a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a28ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a28b0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001a28b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a29f4;
        }
    }
L_001a28b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a28bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a28c0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_001a295c;
        case 1: goto L_001a2b90;
        case 2: goto L_001a2ba8;
        case 3: goto L_001a2a18;
        default: guest_unimplemented(cpu, 0x001a28c0u); return; }
        }
    }
L_001a28c4:;
    {
        goto L_001a29a4;
    }
L_001a28d8:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x96cu);
    }
L_001a28dc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a28e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a2868;
        }
    }
L_001a28e4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a28e8:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001a28ec:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001a28f0:;
    {
        cpu->r[14] = 0x001a28f4u; fn_0018ba6c(cpu);
    }
L_001a28f4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a28f8:;
    {
        cpu->r[14] = 0x001a28fcu; fn_000a7570(cpu);
    }
L_001a28fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2900:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a2904:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a2908:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a290c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a2910:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_001a2914:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a2918:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_001a291c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_001a2920:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_001a2924:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_001a2928:;
    {
        cpu->r[14] = 0x001a292cu; fn_000aeb58(cpu);
    }
L_001a292c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001a2930:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a2934:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a2938:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a293c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a2940:;
    {
        cpu->r[14] = 0x001a2944u; fn_000a7bb0(cpu);
    }
L_001a2944:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2948:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a294c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a2950:;
    {
        cpu->r[14] = 0x001a2954u; fn_000f361c(cpu);
    }
L_001a2954:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a2958:;
    {
        goto L_001a2868;
    }
L_001a295c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2960:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a2964:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a2968:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a296c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2c68;
        }
    }
L_001a2970:;
    {
        cpu->r[12] = 0x0000677cu;
    }
L_001a2974:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a2978:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a297c:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_001a2980:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001a2984:;
    {
        cpu->r[14] = 0x001a2988u; fn_001c1770(cpu);
    }
L_001a2988:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a298c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a2990:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a2994:;
    {
        cpu->r[14] = 0x001a2998u; fn_001933d4(cpu);
    }
L_001a2998:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a299c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a29a0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a29a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a29a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a29d4;
        }
    }
L_001a29ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001a29b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a29f4;
        }
    }
L_001a29b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a29b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a29e8;
        }
    }
L_001a29bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a29c0:;
    {
        cpu->r[14] = 0x001a29c4u; fn_00114a58(cpu);
    }
L_001a29c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a29c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a29cc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001a29d0:;
    {
        goto L_001a29e8;
    }
L_001a29d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a29d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a29dc:;
    {
        cpu->r[14] = 0x001a29e0u; fn_000eb59c(cpu);
    }
L_001a29e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a29e4:;
    {
        cpu->r[14] = 0x001a29e8u; fn_00128a5c(cpu);
    }
L_001a29e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001a29ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a29f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a29f4u)) return;
    }
L_001a29f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a29f8:;
    {
        cpu->r[14] = 0x001a29fcu; fn_0010da28(cpu);
    }
L_001a29fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a2a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a29e8;
        }
    }
L_001a2a04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2a08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a2a0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a2a10:;
    {
        cpu->r[14] = 0x001a2a14u; fn_000f34e8(cpu);
    }
L_001a2a14:;
    {
        goto L_001a29e8;
    }
L_001a2a18:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a2a1c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a2a20:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a2a24:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_001a2a28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a2a2c:;
    {
        cpu->r[14] = 0x001a2a30u; fn_001c08b8(cpu);
    }
L_001a2a30:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_001a2a34:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_001a2a38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a2c90;
        }
    }
L_001a2a3c:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001a2a40:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a2a44:;
    {
        cpu->r[3] = rd32(0x001a2a4cu + + 0x258u);
    }
L_001a2a48:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00001340u, 0, 0);
    }
L_001a2a4c:;
    {
        cpu->r[2] = rd32(0x001a2a54u + + 0x254u);
    }
L_001a2a50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001a2a54:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a2a5cu, cpu->r[3], 0, 0);
    }
L_001a2a58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001a2a5c:;
    {
        cpu->r[3] = rd32(0x001a2a64u + + 0x248u);
    }
L_001a2a60:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a2a64:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2a68:;
    {
        cpu->r[7] = 0x0000677cu;
    }
L_001a2a6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a2a74u, cpu->r[3], 0, 0);
    }
L_001a2a70:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001a2a74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001a2a78:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a2a7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001a2a80:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001a2a84:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001a2a88:;
    {
        goto L_001a2ad4;
    }
L_001a2a8c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001a2a90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2a94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001a2a98:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001a2a9c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a2aa0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2aa4:;
    {
        cpu->r[14] = 0x001a2aa8u; fn_001c0940(cpu);
    }
L_001a2aa8:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001a2aac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0001e000u, 0, 0);
    }
L_001a2ab0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_001a2ab4:;
    {
        cpu->r[14] = 0x001a2ab8u; fn_001d06e4(cpu);
    }
L_001a2ab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_001a2abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a2ac0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x000013e8u;
        }
    }
L_001a2ac4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
        }
    }
L_001a2ac8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a2acc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a2ad0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a2bd4;
        }
    }
L_001a2ad4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a2ad8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2adc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 7u, &shc); cpu->r[5] = v;
    }
L_001a2ae0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2ae4:;
    {
        cpu->r[14] = 0x001a2ae8u; fn_001c0940(cpu);
    }
L_001a2ae8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a2aec:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a2af0:;
    {
        cpu->r[14] = 0x001a2af4u; fn_000ae3d0(cpu);
    }
L_001a2af4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001a2af8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000960u, 0, 0);
    }
L_001a2afc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a2b00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000eu, 0, 0);
    }
L_001a2b04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a2b08:;
    {
        cpu->r[14] = 0x001a2b0cu; fn_000ae830(cpu);
    }
L_001a2b0c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a2b10:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2b14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001a2b18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2b1c:;
    {
        cpu->r[14] = 0x001a2b20u; fn_001c0990(cpu);
    }
L_001a2b20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a2b24:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a2b28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000e60u, 0, 0);
    }
L_001a2b2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000eu, 0, 0);
    }
L_001a2b30:;
    {
        cpu->r[14] = 0x001a2b34u; fn_000ae830(cpu);
    }
L_001a2b34:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a2b38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2b3c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2b40:;
    {
        cpu->r[14] = 0x001a2b44u; fn_001c09b8(cpu);
    }
L_001a2b44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001a2b48:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001a2b4c:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a2b50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a2b54:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001a2b58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2a8c;
        }
    }
L_001a2b5c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a2b60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2b64:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2b68:;
    {
        cpu->r[14] = 0x001a2b6cu; fn_001c09e4(cpu);
    }
L_001a2b6c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a2b70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2b74:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001a2b78:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001a2b7c:;
    {
        wr32(cpu->r[8] + + 0x28u, cpu->r[2]);
    }
L_001a2b80:;
    {
        cpu->r[14] = 0x001a2b84u; fn_001c09e4(cpu);
    }
L_001a2b84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001a2b88:;
    {
        wr32(cpu->r[8] + + 0x50u, cpu->r[3]);
    }
L_001a2b8c:;
    {
        goto L_001a2a8c;
    }
L_001a2b90:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001a2b94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a2b98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a2b9c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a2ba0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a29ac;
        }
    }
L_001a2ba4:;
    {
        goto L_001a29d4;
    }
L_001a2ba8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2bac:;
    {
        cpu->r[1] = 0x0000e21cu;
    }
L_001a2bb0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a2bb4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001a2bb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001au, 1, 1);
    }
L_001a2bbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001a2bc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001a2bc4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
        }
    }
L_001a2bc8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a2bcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a29ac;
        }
    }
L_001a2bd0:;
    {
        goto L_001a29d4;
    }
L_001a2bd4:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_001a2bd8:;
    {
        cpu->r[9] = rd32(cpu->r[13]);
    }
L_001a2bdc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a2be0:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001a2be4:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a2be8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a2bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a29ac;
        }
    }
L_001a2bf0:;
    {
        goto L_001a29d4;
    }
L_001a2bf4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2bf8:;
    {
        cpu->r[14] = 0x001a2bfcu; fn_000f34e8(cpu);
    }
L_001a2bfc:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2c00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2c04:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a2c08:;
    {
        cpu->r[14] = 0x001a2c0cu; fn_000f34e8(cpu);
    }
L_001a2c0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a2c10:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a2c14:;
    {
        cpu->r[14] = 0x001a2c18u; fn_000f34e8(cpu);
    }
L_001a2c18:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a2c1c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a2c20:;
    {
        cpu->r[14] = 0x001a2c24u; fn_001933d4(cpu);
    }
L_001a2c24:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001a2c28:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001a2c2c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a2c30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a2c34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a2c38:;
    {
        cpu->r[14] = 0x001a2c40u;
    }
L_001a2c3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2c40u)) return;
    }
L_001a2c40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a2c44:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_001a2c48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a2c4c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a2c50:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_001a2c54:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a2c58:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_001a2c5c:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_001a2c60:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a2c64:;
    {
        goto L_001a29e8;
    }
L_001a2c68:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_001a2c6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x964u);
    }
L_001a2c70:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001a2c74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a2c78:;
    {
        cpu->r[14] = 0x001a2c7cu; fn_001c1670(cpu);
    }
L_001a2c7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001a2c80:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a2c84:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a2c88:;
    {
        cpu->r[14] = 0x001a2c8cu; fn_001933d4(cpu);
    }
L_001a2c8c:;
    {
        goto L_001a2998;
    }
L_001a2c90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a2c94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a2a44;
        }
    }
L_001a2c98:;
    {
        goto L_001a2bdc;
    }
}

/* _ZN17GS_AARankingsShow8DoActionEii @ 001a2cb0 (arm) */
void fn_001a2cb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a2cb0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a2cb4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a2cb8:;
    {
        cpu->r[12] = rd32(0x001a2cc0u + + 0x25cu);
    }
L_001a2cbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001a2cc0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001a2cc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a2cc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a2cd0u, cpu->r[12], 0, 0);
    }
L_001a2ccc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001a2cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2cdc;
        }
    }
L_001a2cd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a2cd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2cdcu)) return;
    }
L_001a2cdc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a2ce0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001a2ce4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a2d9c;
        }
    }
L_001a2ce8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_001a2cec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001a2cf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001a2cf4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
        }
    }
L_001a2cf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a2cd4;
        }
    }
L_001a2cfc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a2d00:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a2d04:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_001a2d08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2e08;
        }
    }
L_001a2d0c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001a2d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2ec8;
        }
    }
L_001a2d14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001a2d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2e58;
        }
    }
L_001a2d1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_001a2d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2dac;
        }
    }
L_001a2d24:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a2d28:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a2d2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a2d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2cd4;
        }
    }
L_001a2d34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001a2d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2eac;
        }
    }
L_001a2d3c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_001a2d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a2cd4;
        }
    }
L_001a2d44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a2d48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a2d4c:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001a2d50:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001a2d54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a2d58:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
        }
    }
L_001a2d5c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a2d60:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001a2d64:;
    {
        cpu->r[3] = rd32(0x001a2d6cu + + 0x1b4u);
    }
L_001a2d68:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a2d6c:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_001a2d70:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a2d74:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a2d78:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a2d7c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a2d80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a2d84:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a2d88:;
    {
        cpu->r[14] = 0x001a2d8cu; fn_000fd248(cpu);
    }
L_001a2d8c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a2d90:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[5]);
    }
L_001a2d94:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a2d98:;
    {
        goto L_001a2cd4;
    }
L_001a2d9c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a2da0:;
    {
        cpu->r[14] = 0x001a2da8u;
    }
L_001a2da4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2da8u)) return;
    }
L_001a2da8:;
    {
        goto L_001a2cd4;
    }
L_001a2dac:;
    {
        cpu->r[2] = rd32(0x001a2db4u + + 0x16cu);
    }
L_001a2db0:;
    {
        cpu->r[1] = 0x00001c80u;
    }
L_001a2db4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x964u);
    }
L_001a2db8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001a2dbc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a2dc0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a2dc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001a2dc8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001a2d24;
        }
    }
L_001a2dcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x960u);
    }
L_001a2dd0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a2dd4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x490u);
    }
L_001a2dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a2ddc:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_001a2de0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001a2de4:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a2de8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a2dec:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[1]);
    }
L_001a2df0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a2df4:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[12]);
    }
L_001a2df8:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_001a2dfc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a2e00:;
    {
        cpu->r[14] = 0x001a2e04u; fn_000fd248(cpu);
    }
L_001a2e04:;
    {
        goto L_001a2cd4;
    }
L_001a2e08:;
    {
        cpu->r[3] = rd32(0x001a2e10u + + 0x110u);
    }
L_001a2e0c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a2e10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001a2e14:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a2e18:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2e1c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a2e20:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_001a2e24:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_001a2e28:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a2e2c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a2e30:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[5]);
    }
L_001a2e34:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_001a2e38:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a2e3c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[14]);
    }
L_001a2e40:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_001a2e44:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a2e48:;
    {
        cpu->r[14] = 0x001a2e4cu; fn_000fd248(cpu);
    }
L_001a2e4c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[6]);
    }
L_001a2e50:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_001a2e54:;
    {
        goto L_001a2cd4;
    }
L_001a2e58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x964u);
    }
L_001a2e5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a2e60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a2d24;
        }
    }
L_001a2e64:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x960u);
    }
L_001a2e68:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a2e6c:;
    {
        wr32(cpu->r[0] + + 0x950u, cpu->r[5]);
    }
L_001a2e70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001a2e74:;
    {
        cpu->r[0] = rd32(0x001a2e7cu + + 0xa4u);
    }
L_001a2e78:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_001a2e7c:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a2e80:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001a2e84:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[14]);
    }
L_001a2e88:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001a2e8c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001a2e90:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_001a2e94:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[12]);
    }
L_001a2e98:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a2e9c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a2ea0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a2ea4:;
    {
        cpu->r[14] = 0x001a2ea8u; fn_000fd248(cpu);
    }
L_001a2ea8:;
    {
        goto L_001a2cd4;
    }
L_001a2eac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a2eb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001a2eb4:;
    {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
    }
L_001a2eb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a2ebc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x0000000bu;
        }
    }
L_001a2ec0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x954u, cpu->r[3]);
        }
    }
L_001a2ec4:;
    {
        goto L_001a2d5c;
    }
L_001a2ec8:;
    {
        cpu->r[3] = rd32(0x001a2ed0u + + 0x50u);
    }
L_001a2ecc:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001a2ed0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001a2ed4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a2ed8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a2edc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a2ee0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a2ee4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001a2ee8:;
    {
        cpu->r[2] = 0x000067adu;
    }
L_001a2eec:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001a2ef0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a2ef4:;
    {
        wr8(cpu->r[14] + cpu->r[2], cpu->r[5]);
    }
L_001a2ef8:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_001a2efc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a2f00:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[14]);
    }
L_001a2f04:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_001a2f08:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a2f0c:;
    {
        cpu->r[14] = 0x001a2f10u; fn_000fd248(cpu);
    }
L_001a2f10:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[5]);
    }
L_001a2f14:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[6]);
    }
L_001a2f18:;
    {
        goto L_001a2cd4;
    }
}

/* _ZN17GS_AARankingsShow11DoBarActionEii @ 001a2f24 (arm) */
void fn_001a2f24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a2f24:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001a2f28:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001a2f2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001a2f30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a2f34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a2f38:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a2f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a2f74;
        }
    }
L_001a2f40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001a2f44:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a2f48:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a2f4c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a2f50:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a2f54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a2f58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a2f5c:;
    {
        cpu->r[14] = 0x001a2f60u; fn_000fd248(cpu);
    }
L_001a2f60:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001a2f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a2f68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a2f6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a2f70:;
    {
        return fn_0010df70(cpu);
    }
L_001a2f74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a2f78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a2f7cu)) return;
    }
}

/* _ZN17GS_AARankingsShowC1Ev @ 001a2f7c (arm) */
void fn_001a2f7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a2f7c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a2f80:;
    {
        cpu->r[5] = rd32(0x001a2f88u + + 0x94u);
    }
L_001a2f84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a2f88:;
    {
        cpu->r[14] = 0x001a2f8cu; fn_0010ffa8(cpu);
    }
L_001a2f8c:;
    {
        cpu->r[3] = rd32(0x001a2f94u + + 0x8cu);
    }
L_001a2f90:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a2f98u, cpu->r[5], 0, 0);
    }
L_001a2f94:;
    {
        cpu->r[1] = 0x000013f8u;
    }
L_001a2f98:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_001a2f9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a2fa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a2fa4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_001a2fa8:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001a2fac:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a2fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a2fb4:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a2fb8:;
    {
        cpu->r[2] = 0x000013fcu;
    }
L_001a2fbc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a2fc0:;
    {
        cpu->r[2] = 0x00001400u;
    }
L_001a2fc4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001a2fc8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a2fcc:;
    {
        cpu->r[2] = 0x00000074u;
    }
L_001a2fd0:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_001a2fd4:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_001a2fd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a2fdc:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001a2fe0:;
    {
        cpu->r[2] = rd32(0x001a2fe8u + + 0x3cu);
    }
L_001a2fe4:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[6]);
    }
L_001a2fe8:;
    {
        cpu->r[6] = 0x00001c80u;
    }
L_001a2fec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a2ff0:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_001a2ff4:;
    {
        cpu->r[12] = rd32(0x001a2ffcu + + 0x2cu);
    }
L_001a2ff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a2ffc:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a3000:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[6]);
    }
L_001a3004:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001a3008:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001a300c:;
    {
        wr8(cpu->r[12], cpu->r[1]);
    }
L_001a3010:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[1]);
    }
L_001a3014:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001a3018:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a301cu)) return;
    }
}

/* _ZN17GS_AARankingsShowC2Ev @ 001a302c (arm) */
void fn_001a302c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a302c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a3030:;
    {
        cpu->r[5] = rd32(0x001a3038u + + 0x94u);
    }
L_001a3034:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a3038:;
    {
        cpu->r[14] = 0x001a303cu; fn_0010ffa8(cpu);
    }
L_001a303c:;
    {
        cpu->r[3] = rd32(0x001a3044u + + 0x8cu);
    }
L_001a3040:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a3048u, cpu->r[5], 0, 0);
    }
L_001a3044:;
    {
        cpu->r[1] = 0x000013f8u;
    }
L_001a3048:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_001a304c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a3050:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a3054:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_001a3058:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001a305c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a3060:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3064:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001a3068:;
    {
        cpu->r[2] = 0x000013fcu;
    }
L_001a306c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a3070:;
    {
        cpu->r[2] = 0x00001400u;
    }
L_001a3074:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001a3078:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a307c:;
    {
        cpu->r[2] = 0x00000074u;
    }
L_001a3080:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_001a3084:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_001a3088:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a308c:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001a3090:;
    {
        cpu->r[2] = rd32(0x001a3098u + + 0x3cu);
    }
L_001a3094:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[6]);
    }
L_001a3098:;
    {
        cpu->r[6] = 0x00001c80u;
    }
L_001a309c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a30a0:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_001a30a4:;
    {
        cpu->r[12] = rd32(0x001a30acu + + 0x2cu);
    }
L_001a30a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a30ac:;
    {
        wr32(cpu->r[4] + + 0x968u, cpu->r[3]);
    }
L_001a30b0:;
    {
        wr32(cpu->r[4] + + 0x964u, cpu->r[6]);
    }
L_001a30b4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001a30b8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001a30bc:;
    {
        wr8(cpu->r[12], cpu->r[1]);
    }
L_001a30c0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[1]);
    }
L_001a30c4:;
    {
        wr8(cpu->r[4] + + 0x96cu, cpu->r[3]);
    }
L_001a30c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a30ccu)) return;
    }
}

/* _ZN17GS_AARankingsShowD0Ev @ 001a30dc (arm) */
void fn_001a30dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a30dc:;
    {
        cpu->r[3] = rd32(0x001a30e4u + + 0x2cu);
    }
L_001a30e0:;
    {
        cpu->r[2] = rd32(0x001a30e8u + + 0x2cu);
    }
L_001a30e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a30ecu, cpu->r[3], 0, 0);
    }
L_001a30e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a30ec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a30f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a30f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a30f8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a30fc:;
    {
        cpu->r[14] = 0x001a3100u; fn_000ec21c(cpu);
    }
L_001a3100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3104:;
    {
        cpu->r[14] = 0x001a3108u; fn_0018ba20(cpu);
    }
L_001a3108:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a310c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3110u)) return;
    }
}

/* _ZN17GS_AARankingsShow6RenderEv @ 001a3118 (arm) */
void fn_001a3118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3118:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8cau);
    }
L_001a311c:;
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
L_001a3120:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3124:;
    {
        cpu->r[7] = rd32(0x001a312cu + + 0xd60u);
    }
L_001a3128:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000670u, 1, 0);
    }
L_001a312c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a3130:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a3134:;
    {
        cpu->r[7] = add_flags(cpu, 0x001a313cu, cpu->r[7], 0, 0);
    }
L_001a3138:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3170;
        }
    }
L_001a313c:;
    {
        cpu->r[1] = rd32(0x001a3144u + + 0xd4cu);
    }
L_001a3140:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_001a3144:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_001a3148:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a314c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a3150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3e04;
        }
    }
L_001a3154:;
    {
        cpu->r[2] = rd32(0x001a315cu + + 0xd38u);
    }
L_001a3158:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001a315c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3160:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a3164:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a3168:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001a316c:;
    {
        goto L_001a31a0;
    }
L_001a3170:;
    {
        cpu->r[14] = rd32(0x001a3178u + + 0xd18u);
    }
L_001a3174:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_001a3178:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_001a317c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a3180:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a3184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3de8;
        }
    }
L_001a3188:;
    {
        cpu->r[1] = rd32(0x001a3190u + + 0xd04u);
    }
L_001a318c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_001a3190:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3194:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a3198:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a319c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001a31a0:;
    {
        cpu->r[14] = 0x001a31a4u; fn_0018aa44(cpu);
    }
L_001a31a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a31a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a31ac:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a31b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a31b4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a31b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a31bc:;
    {
        cpu->r[14] = 0x001a31c0u; fn_000ad8a0(cpu);
    }
L_001a31c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a31c4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001a31c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a31cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a31d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3c44;
        }
    }
L_001a31d4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_001a31d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a31dc:;
    {
        cpu->r[14] = 0x001a31e0u; fn_00096a08(cpu);
    }
L_001a31e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a31e4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001a31e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a31ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a31f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a31f4:;
    {
        cpu->r[14] = 0x001a31f8u; fn_0018aa44(cpu);
    }
L_001a31f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a31fc:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3200:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a3204:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a3208:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001a320c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3ccc;
        }
    }
L_001a3210:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a3214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a3218:;
    {
        cpu->r[14] = 0x001a321cu; fn_00096a08(cpu);
    }
L_001a321c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3220:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a3224:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a3228:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001a322c:;
    {
        cpu->r[14] = 0x001a3230u; fn_0018aa44(cpu);
    }
L_001a3230:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x5cu);
    }
L_001a3234:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a3238:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x58u);
    }
L_001a323c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3240:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_001a3244:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a3d08;
        }
    }
L_001a3248:;
    {
        cpu->r[14] = rd32(0x001a3250u + + 0xc48u);
    }
L_001a324c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a3250:;
    {
        cpu->r[3] = rd32(0x001a3258u + + 0xc44u);
    }
L_001a3254:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000005e0u, 0, 0);
    }
L_001a3258:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001a325c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001a3260:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_001a3264:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3268:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001a326c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a3270:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[14]);
    }
L_001a3274:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000005a0u, 0, 0);
    }
L_001a3278:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001a327c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001a3280:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_001a3284:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_001a3288:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000053u, 1, 0);
    }
L_001a328c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001a3290:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001a3294:;
    {
        cpu->r[9] = 0x0000851fu;
    }
L_001a3298:;
    {
        cpu->r[14] = 0x001a32a0u;
    }
L_001a329c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a32a0u)) return;
    }
L_001a32a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a32a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a32a8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a32ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a32b0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x51ebu << 16);
    }
L_001a32b4:;
    {
        cpu->r[14] = 0x001a32bcu;
    }
L_001a32b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a32bcu)) return;
    }
L_001a32bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000640u, 0, 0);
    }
L_001a32c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a32c4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a32c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001a32cc:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_001a32d0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a32d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000450u, 0, 0);
    }
L_001a32d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a32dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001a32e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a32e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a32e8:;
    {
        cpu->r[14] = 0x001a32ecu; fn_000a8a2c(cpu);
    }
L_001a32ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x648u);
    }
L_001a32f0:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_001a32f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x650u);
    }
L_001a32f8:;
    {
        cpu->r[14] = 0x00000167u;
    }
L_001a32fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x654u);
    }
L_001a3300:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001a3304:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64cu);
    }
L_001a3308:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_001a330c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001a3310:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001a3314:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000320u, 1, 1);
    }
L_001a3318:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a331c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a3320:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a3324:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000180u, cpu->r[2], 1, 0);
    }
L_001a3328:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[6];
        }
    }
L_001a332c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = (~0x0000001au);
        }
    }
L_001a3330:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001a3334:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a3338:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001a333c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x0000004au, cpu->r[3], 1, 0);
    }
L_001a3340:;
    {
        cpu->r[12] = 0x00000182u;
    }
L_001a3344:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a3348:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = cpu->r[12];
        }
    }
L_001a334c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3350:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_001a3354:;
    {
        cpu->r[14] = 0x001a3358u; fn_000ad8a0(cpu);
    }
L_001a3358:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a335c:;
    {
        cpu->r[14] = 0x00001c78u;
    }
L_001a3360:;
    {
        cpu->r[12] = 0x00001c74u;
    }
L_001a3364:;
    {
        cpu->r[3] = 0x00008badu;
    }
L_001a3368:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x68dbu << 16);
    }
L_001a336c:;
    {
        cpu->r[2] = 0x0000d8f0u;
    }
L_001a3370:;
    {
        cpu->r[11] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_001a3374:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_001a3378:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_001a337c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001a3380:;
    {
        cpu->r[10] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_001a3384:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001a3388:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a338c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a3390:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[14] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_001a3394:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_001a3398:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[1] = v;
    }
L_001a339c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_001a33a0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[10]; cpu->r[1] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_001a33a4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001a33a8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001a33ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a33b0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_001a33b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a33b8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[14], 1, 0);
    }
L_001a33bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a33c0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001a33c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[12]; cpu->r[1] = v;
    }
L_001a33c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a33cc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[14], 1, 12u, &shc), cpu->r[12], 1, 0);
    }
L_001a33d0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001a33d4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[10]; cpu->r[10] = v;
    }
L_001a33d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001a33dc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[10]; cpu->r[12] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_001a33e0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001a33e4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001a33e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a33ec:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[9], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_001a33f0:;
    {
        cpu->r[9] = (~0x00000063u);
    }
L_001a33f4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_001a33f8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a33fc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12] + cpu->r[1]; cpu->r[1] = v;
    }
L_001a3400:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a3404:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[14] = v;
    }
L_001a3408:;
    {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[14], 1, 0);
    }
L_001a340c:;
    {
        cpu->r[14] = 0x001a3410u; fn_000f458c(cpu);
    }
L_001a3410:;
    {
        cpu->r[14] = (~0x00000063u);
    }
L_001a3414:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001a3418:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a341c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[9] + cpu->r[10]; cpu->r[1] = v;
    }
L_001a3420:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a3424:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_001a3428:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a342c:;
    {
        cpu->r[14] = 0x001a3430u; fn_000f458c(cpu);
    }
L_001a3430:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a3434:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3438:;
    {
        cpu->r[14] = 0x001a343cu; fn_000ae160(cpu);
    }
L_001a343c:;
    {
        cpu->r[1] = rd32(0x001a3444u + + 0xa5cu);
    }
L_001a3440:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3444:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a344cu, cpu->r[1], 0, 0);
    }
L_001a3448:;
    {
        cpu->r[14] = 0x001a344cu; fn_000ae248(cpu);
    }
L_001a344c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a3450:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3454:;
    {
        cpu->r[14] = 0x001a3458u; fn_000ae228(cpu);
    }
L_001a3458:;
    {
        cpu->r[3] = 0x0000004au;
    }
L_001a345c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a3460:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a3464:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a3468:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a346c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3470:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3474:;
    {
        cpu->r[14] = 0x001a3478u; fn_000ad19c(cpu);
    }
L_001a3478:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a347c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001a3480:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a3484:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a3488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3c88;
        }
    }
L_001a348c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3490:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a3494:;
    {
        cpu->r[9] = rd32(0x001a349cu + + 0xa08u);
    }
L_001a3498:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a349c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a34a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000650u, 0, 0);
    }
L_001a34a4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a34a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001a34ac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_001a34b0:;
    {
        cpu->r[14] = 0x001a34b4u; fn_0018aa44(cpu);
    }
L_001a34b4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a34b8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a34bc:;
    {
        cpu->r[2] = 0x000000e3u;
    }
L_001a34c0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a34c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a34c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a34cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a34d0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001a34d4:;
    {
        cpu->r[14] = 0x001a34d8u; fn_000a8a2c(cpu);
    }
L_001a34d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a34dc:;
    {
        cpu->r[14] = 0x001a34e0u; fn_000960f4(cpu);
    }
L_001a34e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001a34e4:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a34e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a34ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a3d14;
        }
    }
L_001a34f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a34f4:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a34f8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a34fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3500:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001a3504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a351c;
        }
    }
L_001a3508:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a350c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3510:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_001a3514:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001a3518:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_001a351c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000670u, 0, 0);
    }
L_001a3520:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000670u, 0, 0);
    }
L_001a3524:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001a3528:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001a352c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a3530:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3534:;
    {
        cpu->r[1] = 0x000000e2u;
    }
L_001a3538:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_001a353c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_001a3540:;
    {
        cpu->r[14] = 0x001a3544u; fn_000a8d10(cpu);
    }
L_001a3544:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a3548:;
    {
        cpu->r[1] = 0x000000e2u;
    }
L_001a354c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x674u);
    }
L_001a3550:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3554:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a3558:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a355c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001a3560:;
    {
        cpu->r[3] = 0x00000066u;
    }
L_001a3564:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3568:;
    {
        cpu->r[9] = 0x000000c1u;
    }
L_001a356c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a3570:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3574:;
    {
        cpu->r[14] = 0x001a3578u; fn_000ad8a0(cpu);
    }
L_001a3578:;
    {
        cpu->r[3] = rd32(0x001a3580u + + 0x928u);
    }
L_001a357c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3580:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001a3584:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a358cu, cpu->r[3], 0, 0);
    }
L_001a3588:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_001a358c:;
    {
        cpu->r[3] = rd32(0x001a3594u + + 0x918u);
    }
L_001a3590:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001a3594:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_001a3598:;
    {
        cpu->r[8] = cpu->r[12];
    }
L_001a359c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a35a4u, cpu->r[3], 0, 0);
    }
L_001a35a0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_001a35a4:;
    {
        cpu->r[3] = rd32(0x001a35acu + + 0x904u);
    }
L_001a35a8:;
    {
        cpu->r[10] = 0x000000b9u;
    }
L_001a35ac:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_001a35b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a35b8u, cpu->r[3], 0, 0);
    }
L_001a35b4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001a35b8:;
    {
        cpu->r[3] = 0x00000073u;
    }
L_001a35bc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_001a35c0:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[12]);
    }
L_001a35c4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001a35c8:;
    {
        goto L_001a37c4;
    }
L_001a35cc:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a35d0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a35d4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a35d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3abc;
        }
    }
L_001a35dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000660u, 0, 0);
    }
L_001a35e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000660u, 0, 0);
    }
L_001a35e4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a35e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001a35ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a35f0:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a35f4:;
    {
        cpu->r[14] = 0x001a35f8u; fn_000a8d10(cpu);
    }
L_001a35f8:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a35fc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3600:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3604:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3608:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a360c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a3610:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3614:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3618:;
    {
        cpu->r[14] = 0x001a361cu; fn_000ad8a0(cpu);
    }
L_001a361c:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a3620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a3628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a3a4c;
        }
    }
L_001a362c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a3630:;
    {
        cpu->r[3] = 0x00008c00u;
    }
L_001a3634:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001a3638:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_001a363c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[2]);
    }
L_001a3640:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a3644:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 7u, &shc); cpu->r[12] = v;
    }
L_001a3648:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a364c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a3650:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3654:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_001a3658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001a365c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001a3660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000960u, 0, 0);
    }
L_001a3664:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000eu, 0, 0);
    }
L_001a3668:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a366c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a3670:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a3674:;
    {
        cpu->r[14] = 0x001a3678u; fn_00099114(cpu);
    }
L_001a3678:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a367c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3680:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a3684:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3688:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001a368c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3b04;
        }
    }
L_001a3690:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001a3694:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a3698:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000e60u, 0, 0);
    }
L_001a369c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a36a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a36a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000eu, 0, 0);
    }
L_001a36a8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a36ac:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a36b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a36b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a36b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a36bc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a36c0:;
    {
        cpu->r[14] = 0x001a36c4u; fn_000ad19c(cpu);
    }
L_001a36c4:;
    {
        cpu->r[3] = 0x00001408u;
    }
L_001a36c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a36cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a36d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a36d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a36d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001a36dc:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001a36e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a36e4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001a36e8:;
    {
        cpu->r[14] = 0x001a36ecu; fn_000ad19c(cpu);
    }
L_001a36ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a36f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a36f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a36f8:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a36fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a3b74;
        }
    }
L_001a3704:;
    {
        cpu->r[3] = 0x000013f0u;
    }
L_001a3708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a370c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a3710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3c14;
        }
    }
L_001a3714:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a3718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_001a371c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001340u, 0, 0);
    }
L_001a3720:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_001a3724:;
    {
        add_flags(cpu, cpu->r[1], 0xc0000001u, 0, 1);
    }
L_001a3728:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a372c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a3730:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001a3734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3bf0;
        }
    }
L_001a3738:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000550u, 0, 0);
    }
L_001a373c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a3740:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001a3744:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3748:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001a374c:;
    {
        cpu->r[14] = 0x001a3750u; fn_000ae1a4(cpu);
    }
L_001a3750:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000620u, 0, 0);
    }
L_001a3758:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a375c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a3760:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001a3764:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a3768:;
    {
        cpu->r[14] = 0x001a376cu; fn_000ae160(cpu);
    }
L_001a376c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3770:;
    {
        cpu->r[2] = 0x0000140cu;
    }
L_001a3774:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001a3778:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a377c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000009u, 0, 0);
    }
L_001a3780:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a3784:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a3788:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a378c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a3790:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3794:;
    {
        cpu->r[14] = 0x001a3798u; fn_000ad19c(cpu);
    }
L_001a3798:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a379c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a37a0:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a37a4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a37a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001a37ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a37b0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000020u, 1, 1);
    }
L_001a37b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000013u, 0, 0);
    }
L_001a37b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000013u, 0, 0);
    }
L_001a37bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3830;
        }
    }
L_001a37c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000013u, 0, 0);
    }
L_001a37c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_001a37c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a37cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a35cc;
        }
    }
L_001a37d0:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a37d4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a37d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a37dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3a7c;
        }
    }
L_001a37e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a37e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a37e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a37ec:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a37f0:;
    {
        cpu->r[14] = 0x001a37f4u; fn_000a8d10(cpu);
    }
L_001a37f4:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a37f8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a37fc:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3800:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3804:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001a3808:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a380c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a3810:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3814:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a3818:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a381c:;
    {
        cpu->r[14] = 0x001a3820u; fn_000ad8a0(cpu);
    }
L_001a3820:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000020u, 1, 1);
    }
L_001a3824:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000013u, 0, 0);
    }
L_001a3828:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000013u, 0, 0);
    }
L_001a382c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a37c0;
        }
    }
L_001a3830:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a3834:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001a3838:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001a383c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[9]);
    }
L_001a3840:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[10]);
    }
L_001a3844:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3848:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a384c:;
    {
        cpu->r[3] = 0x0000140cu;
    }
L_001a3850:;
    {
        cpu->r[1] = 0x0000048bu;
    }
L_001a3854:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a3858:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a385c:;
    {
        cpu->r[3] = 0x00000085u;
    }
L_001a3860:;
    {
        cpu->r[8] = 0x00000021u;
    }
L_001a3864:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a3868:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a386c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a3870:;
    {
        cpu->r[14] = 0x001a3874u; fn_000ad200(cpu);
    }
L_001a3874:;
    {
        cpu->r[2] = 0x00001408u;
    }
L_001a3878:;
    {
        cpu->r[3] = 0x00000085u;
    }
L_001a387c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3880:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_001a3884:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a3888:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a388c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3890:;
    {
        cpu->r[14] = 0x001a3894u; fn_000ad200(cpu);
    }
L_001a3894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3898:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a389c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a38a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a38a4:;
    {
        cpu->r[14] = 0x001a38acu;
    }
L_001a38a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a38acu)) return;
    }
L_001a38ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a38b0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001a38b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a38b8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a38bc:;
    {
        cpu->r[14] = 0x001a38c4u;
    }
L_001a38c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a38c4u)) return;
    }
L_001a38c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a38c8:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[9]);
    }
L_001a38cc:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a38d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a38d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001a38d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3a10;
        }
    }
L_001a38dc:;
    {
        cpu->r[3] = rd32(0x001a38e4u + + 0x5d0u);
    }
L_001a38e0:;
    {
        cpu->r[1] = 0xaa000000u;
    }
L_001a38e4:;
    {
        cpu->r[11] = rd32(0x001a38ecu + + 0x5ccu);
    }
L_001a38e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a38ec:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_001a38f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a38f4:;
    {
        cpu->r[14] = 0x001a38f8u; fn_0012dd58(cpu);
    }
L_001a38f8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a38fc:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_001a3900:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a3904:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a3908:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a390c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001a3910:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a3914:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a3918:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a391c:;
    {
        cpu->r[14] = 0x001a3920u; fn_00130908(cpu);
    }
L_001a3920:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3924:;
    {
        cpu->r[14] = 0x001a3928u; fn_0012f780(cpu);
    }
L_001a3928:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a392c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001a3930:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a3934:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a3938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3da4;
        }
    }
L_001a393c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a3940:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a3944:;
    {
        cpu->r[14] = 0x001a3948u; fn_00096a08(cpu);
    }
L_001a3948:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a394c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000550u, 0, 0);
    }
L_001a3950:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001a3954:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a3958:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001a395c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a3960:;
    {
        cpu->r[14] = 0x001a3964u; fn_0018aa44(cpu);
    }
L_001a3964:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a3968:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a396c:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a3970:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a3974:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x54u);
    }
L_001a3978:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001a397c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001a3980:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a3984:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a3988:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001a398c:;
    {
        cpu->r[14] = 0x001a3990u; fn_000aeb58(cpu);
    }
L_001a3990:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a3994:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a3998:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a399c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a39a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_001a39a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a39a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a39ac:;
    {
        cpu->r[14] = 0x001a39b0u; fn_000a9818(cpu);
    }
L_001a39b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a39b4:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a39b8:;
    {
        cpu->r[14] = 0x001a39bcu; fn_000aeb58(cpu);
    }
L_001a39bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_001a39c0:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_001a39c4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a39c8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a39cc:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001a39d0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000053u, 1, 0);
    }
L_001a39d4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a39d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001a39dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_001a39e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001a39e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_001a39e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a39ec:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a39f0:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001a39f4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a39f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a39fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3a00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a3a04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3a08:;
    {
        cpu->r[14] = 0x001a3a0cu; fn_000ac4bc(cpu);
    }
L_001a3a0c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[9]);
    }
L_001a3a10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a3a14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3a18:;
    {
        cpu->r[14] = 0x001a3a20u;
    }
L_001a3a1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3a20u)) return;
    }
L_001a3a20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3a24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001a3a28:;
    {
        cpu->r[14] = 0x001a3a2cu; fn_000a8e18(cpu);
    }
L_001a3a2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3a30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a3a34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a3a38:;
    {
        cpu->r[14] = 0x001a3a40u;
    }
L_001a3a3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3a40u)) return;
    }
L_001a3a40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000027cu, 0, 0);
    }
L_001a3a44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a3a48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3a4cu)) return;
    }
L_001a3a4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a3a50:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a3a54:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001a3a58:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a3a5c:;
    {
        cpu->r[14] = 0x001a3a60u; fn_000962d0(cpu);
    }
L_001a3a60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a3a64:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a3a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_001a3a6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0xff000000u;
        }
    }
L_001a3a70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001a3a74:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a3a78:;
    {
        goto L_001a3640;
    }
L_001a3a7c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3a80:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a3a84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a3a88:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3a8c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3a90:;
    {
        cpu->r[14] = 0x001a3a94u; fn_000a8d10(cpu);
    }
L_001a3a94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3a98:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a3a9c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3aa0:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3aa4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3aa8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a3aac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3ab0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3ab4:;
    {
        cpu->r[14] = 0x001a3ab8u; fn_000ad8a0(cpu);
    }
L_001a3ab8:;
    {
        goto L_001a37a8;
    }
L_001a3abc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000660u, 0, 0);
    }
L_001a3ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000660u, 0, 0);
    }
L_001a3ac4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3ac8:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3acc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001a3ad0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a3ad4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3ad8:;
    {
        cpu->r[14] = 0x001a3adcu; fn_000a8d10(cpu);
    }
L_001a3adc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3ae0:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a3ae4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3ae8:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a3aec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3af0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a3af4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3af8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3afc:;
    {
        cpu->r[14] = 0x001a3b00u; fn_000ad8a0(cpu);
    }
L_001a3b00:;
    {
        goto L_001a361c;
    }
L_001a3b04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001a3b08:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a3b0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a3b10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000e60u, 0, 0);
    }
L_001a3b14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3b18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3b1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000eu, 0, 0);
    }
L_001a3b20:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a3b24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3b28:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a3b2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3b30:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3b34:;
    {
        cpu->r[14] = 0x001a3b38u; fn_000ad19c(cpu);
    }
L_001a3b38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3b3c:;
    {
        cpu->r[2] = 0x00001408u;
    }
L_001a3b40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a3b44:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a3b48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a3b4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3b50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a3b54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001a3b58:;
    {
        cpu->r[14] = 0x001a3b5cu; fn_000ad19c(cpu);
    }
L_001a3b5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a3b60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a3b64:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001a3b68:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a3b6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a3b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3704;
        }
    }
L_001a3b74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a3b78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000620u, 0, 0);
    }
L_001a3b7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001a3b80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a3b84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001a3b88:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001a3b8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001380u, 0, 0);
    }
L_001a3b90:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001a3b94:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3b98:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x18u);
    }
L_001a3b9c:;
    {
        cpu->r[14] = 0x001a3ba0u; fn_000ae830(cpu);
    }
L_001a3ba0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a3ba4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3ba8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], 0x00001340u, 0, 0);
    }
L_001a3bac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a3bb0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a3bb4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_001a3bb8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a3bbc:;
    {
        cpu->r[14] = 0x001a3bc0u; fn_000f3840(cpu);
    }
L_001a3bc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3bc4:;
    {
        cpu->r[3] = 0x0000140cu;
    }
L_001a3bc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3bcc:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a3bd0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a3bd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a3bd8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001a3bdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a3be0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a3be4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a3be8:;
    {
        cpu->r[14] = 0x001a3becu; fn_000ad19c(cpu);
    }
L_001a3bec:;
    {
        goto L_001a37a8;
    }
L_001a3bf0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000550u, 0, 0);
    }
L_001a3bf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a3bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001a3bfc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a3c00:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a3c04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a3c08:;
    {
        cpu->r[14] = 0x001a3c0cu; fn_000f3840(cpu);
    }
L_001a3c0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3c10:;
    {
        goto L_001a3754;
    }
L_001a3c14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a3c18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000620u, 0, 0);
    }
L_001a3c1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a3c20:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001a3c24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_001a3c28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a3c2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001340u, 0, 0);
    }
L_001a3c30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_001a3c34:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x30u);
    }
L_001a3c38:;
    {
        cpu->r[14] = 0x001a3c3cu; fn_000ae830(cpu);
    }
L_001a3c3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a3c40:;
    {
        goto L_001a3770;
    }
L_001a3c44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3c48:;
    {
        cpu->r[14] = 0x001a3c4cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a31d4;
        }
    }
L_001a3c54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3c58:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_001a3c5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3c60:;
    {
        cpu->r[14] = 0x001a3c64u; fn_0018aa20(cpu);
    }
L_001a3c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3c68:;
    {
        cpu->r[14] = 0x001a3c6cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3c6c:;
    {
        cpu->r[3] = rd32(0x001a3c74u + + 0x248u);
    }
L_001a3c70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3c74:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3c78:;
    {
        cpu->r[3] = rd32(0x001a3c80u + + 0x240u);
    }
L_001a3c7c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3c80:;
    {
        cpu->r[14] = 0x001a3c84u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3c84:;
    {
        goto L_001a31d4;
    }
L_001a3c88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3c8c:;
    {
        cpu->r[14] = 0x001a3c90u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3c90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a348c;
        }
    }
L_001a3c98:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3c9c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_001a3ca0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3ca4:;
    {
        cpu->r[14] = 0x001a3ca8u; fn_0018aa20(cpu);
    }
L_001a3ca8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3cac:;
    {
        cpu->r[14] = 0x001a3cb0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3cb0:;
    {
        cpu->r[3] = rd32(0x001a3cb8u + + 0x204u);
    }
L_001a3cb4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3cb8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3cbc:;
    {
        cpu->r[3] = rd32(0x001a3cc4u + + 0x1fcu);
    }
L_001a3cc0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3cc4:;
    {
        cpu->r[14] = 0x001a3cc8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3cc8:;
    {
        goto L_001a348c;
    }
L_001a3ccc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3cd0:;
    {
        cpu->r[14] = 0x001a3cd4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3cd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3cd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a3210;
        }
    }
L_001a3cdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3ce0:;
    {
        cpu->r[14] = 0x001a3ce4u; fn_0018aa20(cpu);
    }
L_001a3ce4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3ce8:;
    {
        cpu->r[14] = 0x001a3cecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3cec:;
    {
        cpu->r[3] = rd32(0x001a3cf4u + + 0x1c8u);
    }
L_001a3cf0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3cf4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3cf8:;
    {
        cpu->r[3] = rd32(0x001a3d00u + + 0x1c0u);
    }
L_001a3cfc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3d00:;
    {
        cpu->r[14] = 0x001a3d04u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3d04:;
    {
        goto L_001a3210;
    }
L_001a3d08:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a3d0c:;
    {
        cpu->r[14] = 0x001a3d10u; fn_000a8e18(cpu);
    }
L_001a3d10:;
    {
        goto L_001a3248;
    }
L_001a3d14:;
    {
        cpu->r[10] = 0x000013f8u;
    }
L_001a3d18:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3d1c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a3d20:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a3d24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001a3d28:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a3d2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3d30:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a3d34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a3d38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a3d3c:;
    {
        cpu->r[14] = 0x001a3d40u; fn_000a89b8(cpu);
    }
L_001a3d40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001a3d44:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3d48:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a3d4c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a3d50:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a3d54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3d58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a3d5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a3d60:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a3d64:;
    {
        cpu->r[14] = 0x001a3d68u; fn_000a89b8(cpu);
    }
L_001a3d68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001a3d6c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a3d70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a3d74:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001a3d78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a3d7c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a3d80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a3d84:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a3d88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a3d8c:;
    {
        cpu->r[14] = 0x001a3d90u; fn_000a89b8(cpu);
    }
L_001a3d90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a3d94:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a3d98:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a3d9c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a3da0:;
    {
        goto L_001a34f0;
    }
L_001a3da4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3da8:;
    {
        cpu->r[14] = 0x001a3dacu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3dac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a393c;
        }
    }
L_001a3db4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a3db8:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_001a3dbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3dc0:;
    {
        cpu->r[14] = 0x001a3dc4u; fn_0018aa20(cpu);
    }
L_001a3dc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3dc8:;
    {
        cpu->r[14] = 0x001a3dccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3dcc:;
    {
        cpu->r[3] = rd32(0x001a3dd4u + + 0xe8u);
    }
L_001a3dd0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a3dd4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3dd8:;
    {
        cpu->r[3] = rd32(0x001a3de0u + + 0xe0u);
    }
L_001a3ddc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3de0:;
    {
        cpu->r[14] = 0x001a3de4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3de4:;
    {
        goto L_001a393c;
    }
L_001a3de8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3dec:;
    {
        cpu->r[14] = 0x001a3df0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3df0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a3e54;
        }
    }
L_001a3df8:;
    {
        cpu->r[2] = rd32(0x001a3e00u + + 0x94u);
    }
L_001a3dfc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001a3e00:;
    {
        goto L_001a3190;
    }
L_001a3e04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3e08:;
    {
        cpu->r[14] = 0x001a3e0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a3e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a3e10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(0x001a3e18u + + 0x7cu);
        }
    }
L_001a3e14:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
        }
    }
L_001a3e18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a315c;
        }
    }
L_001a3e1c:;
    {
        cpu->r[9] = rd32(0x001a3e24u + + 0x70u);
    }
L_001a3e20:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_001a3e24:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_001a3e28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3e2c:;
    {
        cpu->r[14] = 0x001a3e30u; fn_0018aa20(cpu);
    }
L_001a3e30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3e34:;
    {
        cpu->r[14] = 0x001a3e38u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3e38:;
    {
        cpu->r[3] = rd32(0x001a3e40u + + 0x7cu);
    }
L_001a3e3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3e40:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3e44:;
    {
        cpu->r[3] = rd32(0x001a3e4cu + + 0x74u);
    }
L_001a3e48:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3e4c:;
    {
        cpu->r[14] = 0x001a3e50u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3e50:;
    {
        goto L_001a315c;
    }
L_001a3e54:;
    {
        cpu->r[3] = rd32(0x001a3e5cu + + 0x38u);
    }
L_001a3e58:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3e5c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001a3e60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3e64:;
    {
        cpu->r[14] = 0x001a3e68u; fn_0018aa20(cpu);
    }
L_001a3e68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a3e6c:;
    {
        cpu->r[14] = 0x001a3e70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a3e70:;
    {
        cpu->r[3] = rd32(0x001a3e78u + + 0x44u);
    }
L_001a3e74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a3e78:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3e7c:;
    {
        cpu->r[3] = rd32(0x001a3e84u + + 0x3cu);
    }
L_001a3e80:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001a3e84:;
    {
        cpu->r[14] = 0x001a3e88u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a3e88:;
    {
        goto L_001a3190;
    }
}

/* _ZN23GS_MPClientWaitingStart8isKindOfEi @ 001a3ec4 (arm) */
void fn_001a3ec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3ec4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000048u, 1, 1);
    }
L_001a3ec8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a3ecc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a3ed0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_MPClientWaitingStart17ApplyMenuSettingsEv @ 001a3ed4 (arm) */
void fn_001a3ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3ed4:;
    {
        cpu->r[3] = rd32(0x001a3edcu + + 0x18u);
    }
L_001a3ed8:;
    {
        cpu->r[2] = 0x00000402u;
    }
L_001a3edc:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[2]);
    }
L_001a3ee0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a3ee4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a3eecu, cpu->r[3], 0, 0);
    }
L_001a3ee8:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[2]);
    }
L_001a3eec:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[3]);
    }
L_001a3ef0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_MPClientWaitingStart8DoActionEii @ 001a3ef8 (arm) */
void fn_001a3ef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3ef8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a3efc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a3f00:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001a3f04:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001a3f08:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3f0cu)) return;
        }
    }
L_001a3f0c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a3f10:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001a3f14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a3f48;
        }
    }
L_001a3f18:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_001a3f1c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_001a3f20:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001a3f24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
        }
    }
L_001a3f28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_001a3f2c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
        }
    }
L_001a3f30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001a3f34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_001a3f38:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001a3f3c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_001a3f40:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[4]);
    }
L_001a3f44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3f48u)) return;
    }
L_001a3f48:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a3f4c:;
    {
        cpu->r[14] = 0x001a3f54u;
    }
L_001a3f50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3f54u)) return;
    }
L_001a3f54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3f58u)) return;
    }
}

/* init_array_65 @ 001a3f58 (arm) */
void fn_001a3f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3f58:;
    {
        cpu->r[3] = rd32(0x001a3f60u + + 0x44u);
    }
L_001a3f5c:;
    {
        cpu->r[1] = rd32(0x001a3f64u + + 0x44u);
    }
L_001a3f60:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a3f68u, cpu->r[3], 0, 0);
    }
L_001a3f64:;
    {
        cpu->r[2] = rd32(0x001a3f6cu + + 0x40u);
    }
L_001a3f68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a3f6c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a3f74u, cpu->r[2], 0, 0);
    }
L_001a3f70:;
    {
        cpu->r[1] = rd32(0x001a3f78u + + 0x38u);
    }
L_001a3f74:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a3f78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a3f7c:;
    {
        cpu->r[3] = rd32(0x001a3f84u + + 0x30u);
    }
L_001a3f80:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001a3f84:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a3f88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a3f90u, cpu->r[3], 0, 0);
    }
L_001a3f8c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_001a3f90:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_001a3f94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 0);
    }
L_001a3f98:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001a3f9c:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001a3fa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_MPClientWaitingStartD1Ev @ 001a3fb8 (arm) */
void fn_001a3fb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3fb8:;
    {
        cpu->r[3] = rd32(0x001a3fc0u + + 0x24u);
    }
L_001a3fbc:;
    {
        cpu->r[2] = rd32(0x001a3fc4u + + 0x24u);
    }
L_001a3fc0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a3fc8u, cpu->r[3], 0, 0);
    }
L_001a3fc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a3fc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a3fcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a3fd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a3fd4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a3fd8:;
    {
        cpu->r[14] = 0x001a3fdcu; fn_000ec21c(cpu);
    }
L_001a3fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a3fe0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a3fe4u)) return;
    }
}

/* _ZN23GS_MPClientWaitingStart6UpdateEv @ 001a3fec (arm) */
void fn_001a3fec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a3fec:;
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
L_001a3ff0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a3ff4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x950u);
    }
L_001a3ff8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001a3ffc:;
    {
        cpu->r[5] = rd32(0x001a4004u + + 0x480u);
    }
L_001a4000:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x316u);
    }
L_001a4004:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a400cu, cpu->r[5], 0, 0);
    }
L_001a4008:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a400c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4054;
        }
    }
L_001a4010:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001a4014:;
    {
        cpu->r[14] = 0x001a4018u; fn_001b2ae4(cpu);
    }
L_001a4018:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a401c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a402c;
        }
    }
L_001a4020:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_001a4024:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a4028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4088;
        }
    }
L_001a402c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a4030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a4034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a407c;
        }
    }
L_001a4038:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a403c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a43c8;
        }
    }
L_001a4040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a4044:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a4048:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001a404c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001a4050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a4054u)) return;
    }
L_001a4054:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4058:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a405c:;
    {
        cpu->r[14] = 0x001a4060u; fn_0018ba6c(cpu);
    }
L_001a4060:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a4064:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a4068:;
    {
        cpu->r[14] = 0x001a406cu; fn_001aaf48(cpu);
    }
L_001a406c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a4070:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a4074:;
    {
        cpu->r[14] = 0x001a4078u; fn_000f361c(cpu);
    }
L_001a4078:;
    {
        goto L_001a404c;
    }
L_001a407c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4080:;
    {
        cpu->r[14] = 0x001a4084u; fn_00128a5c(cpu);
    }
L_001a4084:;
    {
        goto L_001a404c;
    }
L_001a4088:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001a408c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001a4090:;
    {
        cpu->r[14] = 0x001a4094u; fn_0018ba6c(cpu);
    }
L_001a4094:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a4098:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001a409c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001a40a0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a40a4:;
    {
        cpu->r[14] = 0x001a40a8u; fn_001b374c(cpu);
    }
L_001a40a8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a40ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a40b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a40b4:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_001a40b8:;
    {
        cpu->r[14] = 0x001a40bcu; fn_001b3628(cpu);
    }
L_001a40bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a40c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000027u, 0, 0);
    }
L_001a40c4:;
    {
        cpu->r[14] = 0x001a40c8u; fn_001b350c(cpu);
    }
L_001a40c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a40cc:;
    {
        cpu->r[2] = 0x00005fa8u;
    }
L_001a40d0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a40d4:;
    {
        cpu->r[2] = 0x00005facu;
    }
L_001a40d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a40dc:;
    {
        cpu->r[2] = 0x00005fb0u;
    }
L_001a40e0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a40e4:;
    {
        cpu->r[2] = 0x00005fb8u;
    }
L_001a40e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a40ec:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_001a40f0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[14]);
    }
L_001a40f4:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001a40f8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001a40fc:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_001a4100:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4104:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001a4108:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_001a410c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_001a4110:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001a4114:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_001a4118:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001a411c:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001a4120:;
    {
        cpu->r[14] = 0x001a4124u; fn_001b350c(cpu);
    }
L_001a4124:;
    {
        cpu->r[2] = rd32(0x001a412cu + + 0x35cu);
    }
L_001a4128:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a412c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4130:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x26u);
    }
L_001a4134:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001a4138:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_001a413c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00005f00u, 0, 0);
    }
L_001a4140:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001a4144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000bcu, 0, 0);
    }
L_001a4148:;
    {
        cpu->r[14] = 0x001a414cu; fn_001b3580(cpu);
    }
L_001a414c:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001a4150:;
    {
        cpu->r[14] = 0x001a4154u; imp__Znaj(cpu); /* _Znaj */
    }
L_001a4154:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0x3u;
        wr8(cpu->r[10] + - 0x3u, cpu->r[9]);
        cpu->r[10] = wb_tmp;
    }
L_001a4158:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a415c:;
    {
        cpu->r[0] = 0x00000031u;
    }
L_001a4160:;
    {
        cpu->r[14] = 0x001a4164u; imp__Znaj(cpu); /* _Znaj */
    }
L_001a4164:;
    {
        cpu->r[3] = rd32(0x001a416cu + + 0x320u);
    }
L_001a4168:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4170u, cpu->r[3], 0, 0);
    }
L_001a416c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001a4170:;
    {
        cpu->r[3] = rd32(0x001a4178u + + 0x318u);
    }
L_001a4174:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a417cu, cpu->r[3], 0, 0);
    }
L_001a4178:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001a417c:;
    {
        cpu->r[3] = rd32(0x001a4184u + + 0x310u);
    }
L_001a4180:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4188u, cpu->r[3], 0, 0);
    }
L_001a4184:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001a4188:;
    {
        cpu->r[3] = rd32(0x001a4190u + + 0x308u);
    }
L_001a418c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4194u, cpu->r[3], 0, 0);
    }
L_001a4190:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001a4194:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001a4198:;
    {
        goto L_001a42d0;
    }
L_001a419c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a41a0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a41a4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a41a8:;
    {
        cpu->r[14] = 0x001a41acu; fn_001b3648(cpu);
    }
L_001a41ac:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001a41b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a41b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a41ec;
        }
    }
L_001a41b8:;
    {
        cpu->r[1] = rd32(0x001a41c0u + + 0x2dcu);
    }
L_001a41bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001a41c0:;
    {
        cpu->r[2] = rd32(0x001a41c8u + + 0x2d8u);
    }
L_001a41c4:;
    {
        cpu->r[14] = 0x00000090u;
    }
L_001a41c8:;
    {
        cpu->r[3] = rd32(0x001a41d0u + + 0x2d4u);
    }
L_001a41cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a41d4u, cpu->r[1], 0, 0);
    }
L_001a41d0:;
    {
        cpu->r[12] = rd32(0x001a41d8u + + 0x2d0u);
    }
L_001a41d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a41dcu, cpu->r[2], 0, 0);
    }
L_001a41d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a41e0u, cpu->r[3], 0, 0);
    }
L_001a41dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a41e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a41e8u, cpu->r[12], 0, 0);
    }
L_001a41e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a41e8:;
    {
        cpu->r[14] = 0x001a41ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001a41ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a41f0:;
    {
        cpu->r[0] = 0x00000066u;
    }
L_001a41f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a41f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[3]; cpu->r[0] = v;
    }
L_001a41fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_001a4200:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001a4204:;
    {
        cpu->r[14] = 0x001a4208u; fn_000ae3d0(cpu);
    }
L_001a4208:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a420c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4210:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001a4214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001500u, 0, 0);
    }
L_001a4218:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_001a421c:;
    {
        cpu->r[14] = 0x001a4220u; fn_001b350c(cpu);
    }
L_001a4220:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4224:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001a4228:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a422c:;
    {
        cpu->r[14] = 0x001a4230u; fn_001b3648(cpu);
    }
L_001a4230:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001a4234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_001a4238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4270;
        }
    }
L_001a423c:;
    {
        cpu->r[1] = rd32(0x001a4244u + + 0x268u);
    }
L_001a4240:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001a4244:;
    {
        cpu->r[2] = rd32(0x001a424cu + + 0x264u);
    }
L_001a4248:;
    {
        cpu->r[14] = 0x0000009cu;
    }
L_001a424c:;
    {
        cpu->r[3] = rd32(0x001a4254u + + 0x260u);
    }
L_001a4250:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a4258u, cpu->r[1], 0, 0);
    }
L_001a4254:;
    {
        cpu->r[12] = rd32(0x001a425cu + + 0x25cu);
    }
L_001a4258:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4260u, cpu->r[2], 0, 0);
    }
L_001a425c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4264u, cpu->r[3], 0, 0);
    }
L_001a4260:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a4264:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a426cu, cpu->r[12], 0, 0);
    }
L_001a4268:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a426c:;
    {
        cpu->r[14] = 0x001a4270u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001a4270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4274:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001a4278:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001a427c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[3]; cpu->r[0] = v;
    }
L_001a4280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_001a4284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000015u, 0, 0);
    }
L_001a4288:;
    {
        cpu->r[14] = 0x001a428cu; fn_00093230(cpu);
    }
L_001a428c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4290:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a4294:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4298:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a429c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a42a0:;
    {
        cpu->r[14] = 0x001a42a8u;
    }
L_001a42a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a42a8u)) return;
    }
L_001a42a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a42ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a42b0:;
    {
        cpu->r[14] = 0x001a42b4u; imp_strcmp(cpu); /* strcmp */
    }
L_001a42b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a42b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_001a42bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000063ecu;
        }
    }
L_001a42c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[6]);
        }
    }
L_001a42c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a42c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001a42cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4408;
        }
    }
L_001a42d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a42d4:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_001a42d8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a42dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a42e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a419c;
        }
    }
L_001a42e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a42e8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a42ec:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a42f0:;
    {
        cpu->r[14] = 0x001a42f4u; fn_001b3648(cpu);
    }
L_001a42f4:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001a42f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a42fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4334;
        }
    }
L_001a4300:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a4304:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001a4308:;
    {
        cpu->r[2] = rd32(0x001a4310u + + 0x1acu);
    }
L_001a430c:;
    {
        cpu->r[14] = 0x000000b0u;
    }
L_001a4310:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a4318u, cpu->r[3], 0, 0);
    }
L_001a4314:;
    {
        cpu->r[3] = rd32(0x001a431cu + + 0x1a4u);
    }
L_001a4318:;
    {
        cpu->r[12] = rd32(0x001a4320u + + 0x1a4u);
    }
L_001a431c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4324u, cpu->r[2], 0, 0);
    }
L_001a4320:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4328u, cpu->r[3], 0, 0);
    }
L_001a4324:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a4328:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a4330u, cpu->r[12], 0, 0);
    }
L_001a432c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4330:;
    {
        cpu->r[14] = 0x001a4334u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001a4334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4338:;
    {
        cpu->r[0] = 0x00000066u;
    }
L_001a433c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a4340:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[3]; cpu->r[0] = v;
    }
L_001a4344:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_001a4348:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f4u, 0, 0);
    }
L_001a434c:;
    {
        cpu->r[14] = 0x001a4350u; fn_000ae3d0(cpu);
    }
L_001a4350:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4354:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4358:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001a435c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001680u, 0, 0);
    }
L_001a4360:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000025u, 0, 0);
    }
L_001a4364:;
    {
        cpu->r[14] = 0x001a4368u; fn_001b350c(cpu);
    }
L_001a4368:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a436c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001a4370:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a4374:;
    {
        cpu->r[14] = 0x001a4378u; fn_001b3648(cpu);
    }
L_001a4378:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x25u);
    }
L_001a437c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_001a4380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a43a4;
        }
    }
L_001a4384:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a4388:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001a438c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a4390:;
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
L_001a4394:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4398:;
    {
        cpu->r[12] = 0x000000beu;
    }
L_001a439c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a43a0:;
    {
        cpu->r[14] = 0x001a43a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001a43a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a43a8:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_001a43ac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001a43b0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11] + cpu->r[3]; cpu->r[0] = v;
    }
L_001a43b4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001a43b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001680u, 0, 0);
    }
L_001a43bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002du, 0, 0);
    }
L_001a43c0:;
    {
        cpu->r[14] = 0x001a43c4u; fn_00093230(cpu);
    }
L_001a43c4:;
    {
        goto L_001a42c4;
    }
L_001a43c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f4u);
    }
L_001a43cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a43d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001a43d4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_001a43d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a404c;
        }
    }
L_001a43dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001a43e0:;
    {
        cpu->r[3] = 0x0000041du;
    }
L_001a43e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a43e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a404c;
        }
    }
L_001a43ec:;
    {
        cpu->r[3] = rd32(0x001a43f4u + + 0xd4u);
    }
L_001a43f0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a43f4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a43f8:;
    {
        cpu->r[14] = 0x001a43fcu; fn_00096928(cpu);
    }
L_001a43fc:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_001a4400:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001a4404:;
    {
        goto L_001a405c;
    }
L_001a4408:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001a440c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4418;
        }
    }
L_001a4410:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a4414:;
    {
        cpu->r[14] = 0x001a4418u; fn_0018ba60(cpu);
    }
L_001a4418:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001a441c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4428;
        }
    }
L_001a4420:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001a4424:;
    {
        cpu->r[14] = 0x001a4428u; fn_0018ba60(cpu);
    }
L_001a4428:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a442c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4440;
        }
    }
L_001a4430:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4434:;
    {
        cpu->r[14] = 0x001a4438u; fn_001b36e4(cpu);
    }
L_001a4438:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a443c:;
    {
        cpu->r[14] = 0x001a4440u; fn_0018ba20(cpu);
    }
L_001a4440:;
    {
        cpu->r[3] = rd32(0x001a4448u + + 0x80u);
    }
L_001a4444:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4448:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a444c:;
    {
        cpu->r[14] = 0x001a4450u; fn_00099968(cpu);
    }
L_001a4450:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a4454:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a4458:;
    {
        cpu->r[14] = 0x001a445cu; fn_000f35e4(cpu);
    }
L_001a445c:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001a4460:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_001a4464:;
    {
        cpu->r[14] = 0x001a4468u; fn_0018ba6c(cpu);
    }
L_001a4468:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a446c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a4470:;
    {
        cpu->r[14] = 0x001a4474u; fn_000f22d4(cpu);
    }
L_001a4474:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a4478:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a447c:;
    {
        cpu->r[14] = 0x001a4480u; fn_000f361c(cpu);
    }
L_001a4480:;
    {
        goto L_001a404c;
    }
}

/* _ZN23GS_MPClientWaitingStartC1Ev @ 001a44cc (arm) */
void fn_001a44cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a44cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a44d0:;
    {
        cpu->r[4] = rd32(0x001a44d8u + + 0x38u);
    }
L_001a44d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a44d8:;
    {
        cpu->r[14] = 0x001a44dcu; fn_0010ffa8(cpu);
    }
L_001a44dc:;
    {
        cpu->r[2] = rd32(0x001a44e4u + + 0x30u);
    }
L_001a44e0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a44e8u, cpu->r[4], 0, 0);
    }
L_001a44e4:;
    {
        cpu->r[3] = rd32(0x001a44ecu + + 0x2cu);
    }
L_001a44e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a44ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a44f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a44f4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a44f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a44fc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a4500:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a4504:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4508:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001a450c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a4510u)) return;
    }
}

/* _ZN23GS_MPClientWaitingStartC2Ev @ 001a451c (arm) */
void fn_001a451c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a451c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a4520:;
    {
        cpu->r[4] = rd32(0x001a4528u + + 0x38u);
    }
L_001a4524:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a4528:;
    {
        cpu->r[14] = 0x001a452cu; fn_0010ffa8(cpu);
    }
L_001a452c:;
    {
        cpu->r[2] = rd32(0x001a4534u + + 0x30u);
    }
L_001a4530:;
    {
        cpu->r[4] = add_flags(cpu, 0x001a4538u, cpu->r[4], 0, 0);
    }
L_001a4534:;
    {
        cpu->r[3] = rd32(0x001a453cu + + 0x2cu);
    }
L_001a4538:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a453c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a4540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a4544:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a4548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a454c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001a4550:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_001a4554:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4558:;
    {
        wr32(cpu->r[5] + + 0x950u, cpu->r[3]);
    }
L_001a455c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a4560u)) return;
    }
}

/* _ZN23GS_MPClientWaitingStartD0Ev @ 001a456c (arm) */
void fn_001a456c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a456c:;
    {
        cpu->r[3] = rd32(0x001a4574u + + 0x2cu);
    }
L_001a4570:;
    {
        cpu->r[2] = rd32(0x001a4578u + + 0x2cu);
    }
L_001a4574:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a457cu, cpu->r[3], 0, 0);
    }
L_001a4578:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a457c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a4580:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a4584:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a4588:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a458c:;
    {
        cpu->r[14] = 0x001a4590u; fn_000ec21c(cpu);
    }
L_001a4590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4594:;
    {
        cpu->r[14] = 0x001a4598u; fn_0018ba20(cpu);
    }
L_001a4598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a459c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a45a0u)) return;
    }
}

/* _ZN23GS_MPClientWaitingStart6RenderEv @ 001a45a8 (arm) */
void fn_001a45a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a45a8:;
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
L_001a45ac:;
    {
        cpu->r[5] = rd32(0x001a45b4u + + 0x184u);
    }
L_001a45b0:;
    {
        cpu->r[7] = rd32(0x001a45b8u + + 0x184u);
    }
L_001a45b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a45b8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a45c0u, cpu->r[5], 0, 0);
    }
L_001a45bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a45c0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a45c4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001a45c8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a45cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a46b8;
        }
    }
L_001a45d0:;
    {
        cpu->r[6] = rd32(0x001a45d8u + + 0x168u);
    }
L_001a45d4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a45d8:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a45dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a45e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a45e4:;
    {
        cpu->r[14] = 0x001a45e8u; fn_0018aa44(cpu);
    }
L_001a45e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a45ec:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a45f0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a45f4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a45f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a45fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a4600:;
    {
        cpu->r[14] = 0x001a4604u; fn_000ad8a0(cpu);
    }
L_001a4604:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001a4608:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a460c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a4610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a46fc;
        }
    }
L_001a4614:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a4618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a461c:;
    {
        cpu->r[14] = 0x001a4620u; fn_00096a08(cpu);
    }
L_001a4620:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a4624:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a4628:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a462c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001a4630:;
    {
        cpu->r[14] = 0x001a4634u; fn_0018aa44(cpu);
    }
L_001a4634:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a4638:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a463c:;
    {
        cpu->r[0] = 0x00000421u;
    }
L_001a4640:;
    {
        cpu->r[14] = 0x001a4644u; fn_000aeb58(cpu);
    }
L_001a4644:;
    {
        cpu->r[3] = rd32(0x001a464cu + + 0xf8u);
    }
L_001a4648:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a464c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a4650:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4654:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4658:;
    {
        cpu->r[3] = rd32(0x001a4660u + + 0xe8u);
    }
L_001a465c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a4660:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4664:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a4668:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a466c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a4670:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a4674:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4678:;
    {
        cpu->r[14] = 0x001a467cu; fn_000ad19c(cpu);
    }
L_001a467c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a4680:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a4684:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a46b0;
        }
    }
L_001a4688:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a468c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a4690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4694:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a4698:;
    {
        cpu->r[14] = 0x001a46a0u;
    }
L_001a469c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a46a0u)) return;
    }
L_001a46a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001a46a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a46a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a46ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a4688;
        }
    }
L_001a46b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a46b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a46b8u)) return;
    }
L_001a46b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a46bc:;
    {
        cpu->r[14] = 0x001a46c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a46c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a46c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a45d0;
        }
    }
L_001a46c8:;
    {
        cpu->r[6] = rd32(0x001a46d0u + + 0x70u);
    }
L_001a46cc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a46d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a46d4:;
    {
        cpu->r[14] = 0x001a46d8u; fn_0018aa20(cpu);
    }
L_001a46d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a46dc:;
    {
        cpu->r[14] = 0x001a46e0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a46e0:;
    {
        cpu->r[3] = rd32(0x001a46e8u + + 0x64u);
    }
L_001a46e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001a46e8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a46ec:;
    {
        cpu->r[3] = rd32(0x001a46f4u + + 0x5cu);
    }
L_001a46f0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a46f4:;
    {
        cpu->r[14] = 0x001a46f8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a46f8:;
    {
        goto L_001a45d4;
    }
L_001a46fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4700:;
    {
        cpu->r[14] = 0x001a4704u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a4704:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4614;
        }
    }
L_001a470c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a4710:;
    {
        cpu->r[14] = 0x001a4714u; fn_0018aa20(cpu);
    }
L_001a4714:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4718:;
    {
        cpu->r[14] = 0x001a471cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a471c:;
    {
        cpu->r[3] = rd32(0x001a4724u + + 0x28u);
    }
L_001a4720:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001a4724:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4728:;
    {
        cpu->r[3] = rd32(0x001a4730u + + 0x20u);
    }
L_001a472c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4730:;
    {
        cpu->r[14] = 0x001a4734u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a4734:;
    {
        goto L_001a4614;
    }
}

/* _ZN15GS_RankingsShow8isKindOfEi @ 001a4754 (arm) */
void fn_001a4754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a4754:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003bu, 1, 1);
    }
L_001a4758:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a475c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a4760:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_RankingsShow17ApplyMenuSettingsEv @ 001a4764 (arm) */
void fn_001a4764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a4764:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001a4768:;
    {
        cpu->r[1] = 0x00001414u;
    }
L_001a476c:;
    {
        cpu->r[2] = rd32(0x001a4774u + + 0x1dcu);
    }
L_001a4770:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001a4774:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4778:;
    {
        cpu->r[0] = rd32(0x001a4780u + + 0x1d4u);
    }
L_001a477c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4784u, cpu->r[2], 0, 0);
    }
L_001a4780:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a4784:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_001a4788:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a478c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001a4790:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000001au);
        }
    }
L_001a4794:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
        }
    }
L_001a4798:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a479c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_001a47a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a47a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4800;
        }
    }
L_001a47a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001a47ac:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001a47b0:;
    {
        wr32(cpu->r[3] + + 0x8d4u, cpu->r[2]);
    }
L_001a47b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a48b0;
        }
    }
L_001a47b8:;
    {
        cpu->r[2] = 0x000013fcu;
    }
L_001a47bc:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001a47c0:;
    {
        cpu->r[0] = 0x00000093u;
    }
L_001a47c4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001a47c8:;
    {
        cpu->r[1] = 0x00001400u;
    }
L_001a47cc:;
    {
        cpu->r[2] = rd32(0x001a47d4u + + 0x184u);
    }
L_001a47d0:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a47d4:;
    {
        cpu->r[1] = 0x00001404u;
    }
L_001a47d8:;
    {
        cpu->r[0] = 0x000000b8u;
    }
L_001a47dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a47e4u, cpu->r[2], 0, 0);
    }
L_001a47e0:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a47e4:;
    {
        cpu->r[1] = 0x00001408u;
    }
L_001a47e8:;
    {
        cpu->r[0] = 0x00000127u;
    }
L_001a47ec:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a47f0:;
    {
        cpu->r[1] = 0x0000140cu;
    }
L_001a47f4:;
    {
        cpu->r[0] = 0x000001d6u;
    }
L_001a47f8:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a47fc:;
    {
        goto L_001a4864;
    }
L_001a4800:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000320u, 1, 1);
    }
L_001a4804:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001a4808:;
    {
        wr32(cpu->r[3] + + 0x8d4u, cpu->r[2]);
    }
L_001a480c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a48f8;
        }
    }
L_001a4810:;
    {
        cpu->r[1] = 0x000013fcu;
    }
L_001a4814:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_001a4818:;
    {
        cpu->r[2] = rd32(0x001a4820u + + 0x13cu);
    }
L_001a481c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4820:;
    {
        cpu->r[1] = 0x00001400u;
    }
L_001a4824:;
    {
        cpu->r[0] = 0x0000008fu;
    }
L_001a4828:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4830u, cpu->r[2], 0, 0);
    }
L_001a482c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4830:;
    {
        cpu->r[1] = 0x00001404u;
    }
L_001a4834:;
    {
        cpu->r[0] = 0x000000b4u;
    }
L_001a4838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000060u, 0, 0);
    }
L_001a483c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4840:;
    {
        cpu->r[1] = 0x00001408u;
    }
L_001a4844:;
    {
        cpu->r[0] = 0x00000117u;
    }
L_001a4848:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a484c:;
    {
        cpu->r[1] = 0x0000140cu;
    }
L_001a4850:;
    {
        cpu->r[0] = 0x0000019fu;
    }
L_001a4854:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4858:;
    {
        cpu->r[1] = 0x00001410u;
    }
L_001a485c:;
    {
        cpu->r[0] = 0x00000201u;
    }
L_001a4860:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4864:;
    {
        cpu->r[1] = rd32(0x001a486cu + + 0xf4u);
    }
L_001a4868:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a486c:;
    {
        wr32(cpu->r[3] + + 0x8e8u, cpu->r[2]);
    }
L_001a4870:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a4874:;
    {
        cpu->r[1] = add_flags(cpu, 0x001a487cu, cpu->r[1], 0, 0);
    }
L_001a4878:;
    {
        wr8(cpu->r[3] + + 0x8fcu, cpu->r[2]);
    }
L_001a487c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000090u, 0, 0);
    }
L_001a4880:;
    {
        wr32(cpu->r[3] + + 0x78u, cpu->r[2]);
    }
L_001a4884:;
    {
        wr32(cpu->r[3] + + 0x8ecu, cpu->r[1]);
    }
L_001a4888:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001a488c:;
    {
        wr32(cpu->r[3] + + 0x7cu, cpu->r[2]);
    }
L_001a4890:;
    {
        wr32(cpu->r[3] + + 0x8d8u, cpu->r[1]);
    }
L_001a4894:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a4898:;
    {
        wr32(cpu->r[3] + + 0x954u, cpu->r[2]);
    }
L_001a489c:;
    {
        wr32(cpu->r[3] + + 0x950u, cpu->r[1]);
    }
L_001a48a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a48a4:;
    {
        cpu->r[14] = 0x001a48acu;
    }
L_001a48a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a48acu)) return;
    }
L_001a48ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a48b0u)) return;
    }
L_001a48b0:;
    {
        cpu->r[2] = 0x000013fcu;
    }
L_001a48b4:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001a48b8:;
    {
        cpu->r[0] = 0x00000077u;
    }
L_001a48bc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001a48c0:;
    {
        cpu->r[1] = 0x00001400u;
    }
L_001a48c4:;
    {
        cpu->r[2] = rd32(0x001a48ccu + + 0x98u);
    }
L_001a48c8:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a48cc:;
    {
        cpu->r[1] = 0x00001404u;
    }
L_001a48d0:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_001a48d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a48dcu, cpu->r[2], 0, 0);
    }
L_001a48d8:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a48dc:;
    {
        cpu->r[1] = 0x00001408u;
    }
L_001a48e0:;
    {
        cpu->r[0] = 0x0000010bu;
    }
L_001a48e4:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a48e8:;
    {
        cpu->r[1] = 0x0000140cu;
    }
L_001a48ec:;
    {
        cpu->r[0] = 0x000001bau;
    }
L_001a48f0:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a48f4:;
    {
        goto L_001a4864;
    }
L_001a48f8:;
    {
        cpu->r[1] = 0x000013fcu;
    }
L_001a48fc:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_001a4900:;
    {
        cpu->r[2] = rd32(0x001a4908u + + 0x60u);
    }
L_001a4904:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4908:;
    {
        cpu->r[1] = 0x00001400u;
    }
L_001a490c:;
    {
        cpu->r[0] = 0x00000074u;
    }
L_001a4910:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4918u, cpu->r[2], 0, 0);
    }
L_001a4914:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4918:;
    {
        cpu->r[1] = 0x00001404u;
    }
L_001a491c:;
    {
        cpu->r[0] = 0x00000099u;
    }
L_001a4920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000060u, 0, 0);
    }
L_001a4924:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4928:;
    {
        cpu->r[1] = 0x00001408u;
    }
L_001a492c:;
    {
        cpu->r[0] = 0x000000fcu;
    }
L_001a4930:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4934:;
    {
        cpu->r[1] = 0x0000140cu;
    }
L_001a4938:;
    {
        cpu->r[0] = 0x00000184u;
    }
L_001a493c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a4940:;
    {
        cpu->r[1] = 0x00001410u;
    }
L_001a4944:;
    {
        cpu->r[0] = 0x000001e6u;
    }
L_001a4948:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
    }
L_001a494c:;
    {
        goto L_001a4864;
    }
}

/* init_array_66 @ 001a496c (arm) */
void fn_001a496c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a496c:;
    {
        cpu->r[3] = rd32(0x001a4974u + + 0x20u);
    }
L_001a4970:;
    {
        cpu->r[1] = rd32(0x001a4978u + + 0x20u);
    }
L_001a4974:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a497cu, cpu->r[3], 0, 0);
    }
L_001a4978:;
    {
        cpu->r[2] = rd32(0x001a4980u + + 0x1cu);
    }
L_001a497c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a4980:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a4988u, cpu->r[2], 0, 0);
    }
L_001a4984:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a4988:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a498c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a4990:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GS_RankingsShowD1Ev @ 001a49a0 (arm) */
void fn_001a49a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a49a0:;
    {
        cpu->r[3] = rd32(0x001a49a8u + + 0x24u);
    }
L_001a49a4:;
    {
        cpu->r[2] = rd32(0x001a49acu + + 0x24u);
    }
L_001a49a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a49b0u, cpu->r[3], 0, 0);
    }
L_001a49ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a49b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a49b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a49b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a49bc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a49c0:;
    {
        cpu->r[14] = 0x001a49c4u; fn_000ec21c(cpu);
    }
L_001a49c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a49c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a49ccu)) return;
    }
}

/* _ZN15GS_RankingsShow6ResumeEv @ 001a49d4 (arm) */
void fn_001a49d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a49d4:;
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
L_001a49d8:;
    {
        cpu->r[5] = rd32(0x001a49e0u + + 0x290u);
    }
L_001a49dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001a49e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a49e4:;
    {
        cpu->r[14] = 0x001a49e8u; fn_001142a0(cpu);
    }
L_001a49e8:;
    {
        cpu->r[3] = rd32(0x001a49f0u + + 0x284u);
    }
L_001a49ec:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a49f4u, cpu->r[5], 0, 0);
    }
L_001a49f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a49f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a49f8:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001a49fc:;
    {
        cpu->r[14] = 0x001a4a00u; fn_000960f4(cpu);
    }
L_001a4a00:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a4a04:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a4a08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4a0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000050u, 1, 0);
        }
    }
L_001a4a10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a4a14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
        }
    }
L_001a4a18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4b8c;
        }
    }
L_001a4a1c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a4a20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a4a24:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a4a28:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a4a2c:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001a4a30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4a34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a4a38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a4a3c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a4a40:;
    {
        cpu->r[14] = 0x001a4a44u; fn_000a8a2c(cpu);
    }
L_001a4a44:;
    {
        cpu->r[3] = rd32(0x001a4a4cu + + 0x22cu);
    }
L_001a4a48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a4a4c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a4a50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a4a54:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a4a58:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001a4a5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4a60:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_001a4a64:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001a4a68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a4a6c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[10] = v;
    }
L_001a4a70:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_001a4a74:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001a4a78:;
    {
        cpu->r[14] = 0x001a4a7cu; fn_000960f4(cpu);
    }
L_001a4a7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4a80:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
    }
L_001a4a84:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[9] = v;
    }
L_001a4a88:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000fu, 0, 0);
    }
L_001a4a8c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[9], 0x00000017u, 1, 0);
    }
L_001a4a90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_001a4a94:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a4a98:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001a4a9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001a4aa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4aa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4aa8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000036u, 1, 0);
        }
    }
L_001a4aac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a4ab0:;
    {
        cpu->r[14] = 0x001a4ab4u; fn_000ec75c(cpu);
    }
L_001a4ab4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4ab8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a4abc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a4ac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4ac4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x18u);
    }
L_001a4ac8:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[11]);
    }
L_001a4acc:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[6]);
    }
L_001a4ad0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001a4ad4:;
    {
        cpu->r[14] = 0x001a4ad8u; fn_000ec75c(cpu);
    }
L_001a4ad8:;
    {
        cpu->r[2] = rd32(0x001a4ae0u + + 0x19cu);
    }
L_001a4adc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4ae0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a4ae4:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[10]);
    }
L_001a4ae8:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[6]);
    }
L_001a4aec:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001a4af0:;
    {
        cpu->r[2] = 0x000067adu;
    }
L_001a4af4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_001a4af8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a4afc:;
    {
        cpu->r[2] = 0x00000013u;
    }
L_001a4b00:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_001a4b04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000012u;
        }
    }
L_001a4b08:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a4b0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000012u;
        }
    }
L_001a4b10:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a4b14:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_001a4b18:;
    {
        cpu->r[3] = 0x000013e4u;
    }
L_001a4b1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a4b20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_001a4b24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a4b28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000220u;
        }
    }
L_001a4b2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000021u;
        }
    }
L_001a4b30:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_001a4b34:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
        }
    }
L_001a4b38:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
        }
    }
L_001a4b3c:;
    {
        cpu->r[2] = 0x000013e4u;
    }
L_001a4b40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a4b44:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_001a4b48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000049u;
        }
    }
L_001a4b4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000248u;
        }
    }
L_001a4b50:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a4b54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001a4b58:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
        }
    }
L_001a4b5c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[2]);
        }
    }
L_001a4b60:;
    {
        cpu->r[2] = 0x000013e4u;
    }
L_001a4b64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a4b68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001a4b6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000029u;
        }
    }
L_001a4b70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000228u;
        }
    }
L_001a4b74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
        }
    }
L_001a4b78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001a4b7c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x44u, cpu->r[2]);
        }
    }
L_001a4b80:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
        }
    }
L_001a4b84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001a4b88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a4b8cu)) return;
    }
L_001a4b8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a4b90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a4b94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a4b98:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a4b9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001a4ba0:;
    {
        cpu->r[2] = 0x000000aau;
    }
L_001a4ba4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4ba8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x000000d2u, 0, 0);
    }
L_001a4bac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a4bb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a4bb4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[9] = v;
    }
L_001a4bb8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a4bbc:;
    {
        cpu->r[14] = 0x001a4bc0u; fn_000a8a2c(cpu);
    }
L_001a4bc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a4bc4:;
    {
        cpu->r[3] = 0x0000ffa9u;
    }
L_001a4bc8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a4bcc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001a4bd0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a4bd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], 0x000000d2u, 1, 0);
    }
L_001a4bd8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001a4bdc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a4be0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4be8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_001a4bec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_001a4bf0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001a4bf4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_001a4bf8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a4bfc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x30u);
    }
L_001a4c00:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001a4c04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_001a4c08:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], 0x00000043u, 0, 0);
    }
L_001a4c0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001a4c10:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a4c14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004du, 0, 0);
    }
L_001a4c18:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a4c1c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001a4c20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a4c24:;
    {
        cpu->r[14] = 0x001a4c28u; fn_000ec75c(cpu);
    }
L_001a4c28:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4c2c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a4c30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a4c34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4c38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a4c3c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x48u);
    }
L_001a4c40:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[2]);
    }
L_001a4c44:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001a4c48:;
    {
        wr32(cpu->r[1] + + 0x40u, cpu->r[14]);
    }
L_001a4c4c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a4c50:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a4c54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a4c58:;
    {
        cpu->r[14] = 0x001a4c5cu; fn_000ec75c(cpu);
    }
L_001a4c5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001a4c60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a4c64:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[9]);
    }
L_001a4c68:;
    {
        wr32(cpu->r[3] + + 0x58u, cpu->r[2]);
    }
L_001a4c6c:;
    {
        goto L_001a4a1c;
    }
}

/* _ZN15GS_RankingsShow6UpdateEv @ 001a4c80 (arm) */
void fn_001a4c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a4c80:;
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
L_001a4c84:;
    {
        cpu->r[5] = rd32(0x001a4c8cu + + 0x54cu);
    }
L_001a4c88:;
    {
        cpu->r[6] = rd32(0x001a4c90u + + 0x54cu);
    }
L_001a4c8c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a4c90:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a4c98u, cpu->r[5], 0, 0);
    }
L_001a4c94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a4c98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000410u, 1, 0);
    }
L_001a4c9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a4ca0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4ca4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a4ca8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a4cac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4cb0:;
    {
        cpu->r[2] = 0x00004050u;
    }
L_001a4cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a4cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4d70;
        }
    }
L_001a4cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000029u, 1, 1);
    }
L_001a4cc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4d70;
        }
    }
L_001a4cc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_001a4cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4d70;
        }
    }
L_001a4ccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001a4cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4d70;
        }
    }
L_001a4cd4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000002u, 0, 1);
    }
L_001a4cd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4d70;
        }
    }
L_001a4cdc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x960u);
    }
L_001a4ce0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001a4ce4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5120;
        }
    }
L_001a4ce8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a4cec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_001a4cf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001a4cf4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x30u);
    }
L_001a4cf8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a4cfc:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x18u);
    }
L_001a4d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4ed0;
        }
    }
L_001a4d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4d08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001a4d0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4d10:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_001a4d14:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001a4d18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_001a4d1c:;
    {
        cpu->r[14] = 0x001a4d20u; fn_000ec594(cpu);
    }
L_001a4d20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4d28:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 3u, &shc));
    }
L_001a4d2c:;
    {
        cpu->r[14] = 0x001a4d30u; fn_000ec594(cpu);
    }
L_001a4d30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4d34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4d38:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_001a4d3c:;
    {
        cpu->r[14] = 0x001a4d40u; fn_000ec594(cpu);
    }
L_001a4d40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a4d44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a4d48:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001a4d4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4f1c;
        }
    }
L_001a4d50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a4d54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a4d58:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_001a4dec;
        case 1: goto L_001a50bc;
        case 2: goto L_001a50d4;
        case 3: goto L_001a4f40;
        default: guest_unimplemented(cpu, 0x001a4d58u); return; }
        }
    }
L_001a4d5c:;
    {
        goto L_001a4e80;
    }
L_001a4d70:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x964u);
    }
L_001a4d74:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001a4d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4cdc;
        }
    }
L_001a4d7c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a4d80:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_001a4d84:;
    {
        wr8(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a4d88:;
    {
        cpu->r[14] = 0x001a4d8cu; fn_0018ba6c(cpu);
    }
L_001a4d8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a4d90:;
    {
        cpu->r[14] = 0x001a4d94u; fn_000a7570(cpu);
    }
L_001a4d94:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4d98:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001a4d9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001a4da0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001a4da4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4da8:;
    {
        cpu->r[3] = 0x00004050u;
    }
L_001a4dac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a4db0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001a4db4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001a4db8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000047fu;
        }
    }
L_001a4dbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000047eu;
        }
    }
L_001a4dc0:;
    {
        cpu->r[14] = 0x001a4dc4u; fn_000aeb58(cpu);
    }
L_001a4dc4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a4dc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000960u, 0, 0);
    }
L_001a4dcc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a4dd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a4dd4:;
    {
        cpu->r[14] = 0x001a4dd8u; fn_000a7bb0(cpu);
    }
L_001a4dd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4ddc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a4de0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a4de4:;
    {
        cpu->r[14] = 0x001a4de8u; fn_000f361c(cpu);
    }
L_001a4de8:;
    {
        goto L_001a4cdc;
    }
L_001a4dec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a4df0:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a4df4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a4df8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a4dfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a518c;
        }
    }
L_001a4e00:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4e04:;
    {
        cpu->r[0] = 0x000013e8u;
    }
L_001a4e08:;
    {
        cpu->r[1] = 0x000013e4u;
    }
L_001a4e0c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a4e10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001a4e14:;
    {
        cpu->r[0] = 0x00006768u;
    }
L_001a4e18:;
    {
        cpu->r[8] = rd32(cpu->r[7]);
    }
L_001a4e1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a4e20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001a4e24:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001a4e28:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[0]);
    }
L_001a4e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_001a4e30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a4e34:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a4e38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a4e3c:;
    {
        cpu->r[14] = 0x001a4e40u; fn_001c02d0(cpu);
    }
L_001a4e40:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a4e44:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a4e48:;
    {
        cpu->r[14] = 0x001a4e4cu; fn_001933d4(cpu);
    }
L_001a4e4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4e50:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001a4e54:;
    {
        cpu->r[3] = 0x000013e4u;
    }
L_001a4e58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a4e5c:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_001a4e60:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001a4e64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001a4e68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_001a4e6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a4e70:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[2]);
    }
L_001a4e74:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a4e78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a4e7c:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a4e80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a4e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4eb0;
        }
    }
L_001a4e88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001a4e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4f1c;
        }
    }
L_001a4e90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a4e94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4ec4;
        }
    }
L_001a4e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4e9c:;
    {
        cpu->r[14] = 0x001a4ea0u; fn_00114a58(cpu);
    }
L_001a4ea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4ea4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a4ea8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001a4eac:;
    {
        goto L_001a4ec4;
    }
L_001a4eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4eb4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a4eb8:;
    {
        cpu->r[14] = 0x001a4ebcu; fn_000eb59c(cpu);
    }
L_001a4ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4ec0:;
    {
        cpu->r[14] = 0x001a4ec4u; fn_00128a5c(cpu);
    }
L_001a4ec4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a4ec8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a4ecc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a4ed0u)) return;
    }
L_001a4ed0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4ed4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001a4ed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4edc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_001a4ee0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001a4ee4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_001a4ee8:;
    {
        cpu->r[14] = 0x001a4eecu; fn_000ec4f0(cpu);
    }
L_001a4eec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4ef4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 3u, &shc));
    }
L_001a4ef8:;
    {
        cpu->r[14] = 0x001a4efcu; fn_000ec4f0(cpu);
    }
L_001a4efc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001a4f00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4f04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_001a4f08:;
    {
        cpu->r[14] = 0x001a4f0cu; fn_000ec4f0(cpu);
    }
L_001a4f0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a4f10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a4f14:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001a4f18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4d50;
        }
    }
L_001a4f1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a4f20:;
    {
        cpu->r[14] = 0x001a4f24u; fn_0010da28(cpu);
    }
L_001a4f24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4f28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4ec4;
        }
    }
L_001a4f2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4f30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a4f34:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a4f38:;
    {
        cpu->r[14] = 0x001a4f3cu; fn_000f34e8(cpu);
    }
L_001a4f3c:;
    {
        goto L_001a4ec4;
    }
L_001a4f40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4f44:;
    {
        cpu->r[2] = 0x000013e0u;
    }
L_001a4f48:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001a4f4c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a4f50:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a4f54:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_001a4f58:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a4f5c:;
    {
        cpu->r[14] = 0x001a4f60u; fn_001bf2c4(cpu);
    }
L_001a4f60:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_001a4f64:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[0]);
    }
L_001a4f68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a51cc;
        }
    }
L_001a4f6c:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001a4f70:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a4f74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a4f78:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00001340u, 0, 0);
    }
L_001a4f7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001a4f80:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_001a4f84:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a4f88:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001a4f8c:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001a4f90:;
    {
        cpu->r[8] = 0x00006768u;
    }
L_001a4f94:;
    {
        cpu->r[3] = rd32(0x001a4f9cu + + 0x244u);
    }
L_001a4f98:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_001a4f9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4fa4u, cpu->r[3], 0, 0);
    }
L_001a4fa0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001a4fa4:;
    {
        cpu->r[3] = rd32(0x001a4facu + + 0x238u);
    }
L_001a4fa8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a4fb0u, cpu->r[3], 0, 0);
    }
L_001a4fac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001a4fb0:;
    {
        cpu->r[3] = rd32(0x001a4fb8u + + 0x230u);
    }
L_001a4fb4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001a4fb8:;
    {
        goto L_001a5000;
    }
L_001a4fbc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001a4fc0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a4fc4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001a4fc8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a4fcc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a4fd0:;
    {
        cpu->r[14] = 0x001a4fd4u; fn_001bf34c(cpu);
    }
L_001a4fd4:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_001a4fd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x0001e000u, 0, 0);
    }
L_001a4fdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_001a4fe0:;
    {
        cpu->r[14] = 0x001a4fe4u; imp_strcmp(cpu); /* strcmp */
    }
L_001a4fe4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a4fe8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000013e0u;
        }
    }
L_001a4fec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
        }
    }
L_001a4ff0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001a4ff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_001a4ff8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001a4ffc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a5104;
        }
    }
L_001a5000:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_001a5004:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5008:;
    {
        cpu->r[14] = 0x001a500cu; fn_001bf34c(cpu);
    }
L_001a500c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 7u, &shc); cpu->r[10] = v;
    }
L_001a5010:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5014:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a5018:;
    {
        cpu->r[14] = 0x001a501cu; fn_000ae3d0(cpu);
    }
L_001a501c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001a5020:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000960u, 0, 0);
    }
L_001a5024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a5028:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a502c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_001a5030:;
    {
        cpu->r[14] = 0x001a5034u; fn_000ae830(cpu);
    }
L_001a5034:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001a5038:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a503c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_001a5040:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a5044:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a5048:;
    {
        cpu->r[14] = 0x001a504cu; fn_001bf39c(cpu);
    }
L_001a504c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a5050:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001a5054:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000e60u, 0, 0);
    }
L_001a5058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_001a505c:;
    {
        cpu->r[14] = 0x001a5060u; fn_000ae830(cpu);
    }
L_001a5060:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a5064:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5068:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a506c:;
    {
        cpu->r[14] = 0x001a5070u; fn_001bf3c4(cpu);
    }
L_001a5070:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a5074:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a5078:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a507c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5080:;
    {
        wr32(cpu->r[9], cpu->r[0]);
    }
L_001a5084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a4fbc;
        }
    }
L_001a5088:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a508c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5090:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a5094:;
    {
        cpu->r[14] = 0x001a5098u; fn_001bf3f0(cpu);
    }
L_001a5098:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a509c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a50a0:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001a50a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001a50a8:;
    {
        wr32(cpu->r[9] + + 0x28u, cpu->r[2]);
    }
L_001a50ac:;
    {
        cpu->r[14] = 0x001a50b0u; fn_001bf3f0(cpu);
    }
L_001a50b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001a50b4:;
    {
        wr32(cpu->r[9] + + 0x50u, cpu->r[3]);
    }
L_001a50b8:;
    {
        goto L_001a4fbc;
    }
L_001a50bc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001a50c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a50c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a50c8:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a50cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4e88;
        }
    }
L_001a50d0:;
    {
        goto L_001a4eb0;
    }
L_001a50d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a50d8:;
    {
        cpu->r[1] = 0x0000e21cu;
    }
L_001a50dc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a50e0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001a50e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000016u, 1, 0);
    }
L_001a50e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a50ec:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001a50f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001a50f4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
        }
    }
L_001a50f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a50fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4e88;
        }
    }
L_001a5100:;
    {
        goto L_001a4eb0;
    }
L_001a5104:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_001a5108:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_001a510c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001a5110:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a5114:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001a5118:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a4e88;
        }
    }
L_001a511c:;
    {
        goto L_001a4eb0;
    }
L_001a5120:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a5124:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5128:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a512c:;
    {
        cpu->r[14] = 0x001a5130u; fn_000f34e8(cpu);
    }
L_001a5130:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5134:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a5138:;
    {
        cpu->r[14] = 0x001a513cu; fn_000f34e8(cpu);
    }
L_001a513c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001a5140:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001a5144:;
    {
        cpu->r[14] = 0x001a5148u; fn_001933d4(cpu);
    }
L_001a5148:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001a514c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001a5150:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001a5154:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001a5158:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a515c:;
    {
        cpu->r[14] = 0x001a5164u;
    }
L_001a5160:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5164u)) return;
    }
L_001a5164:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a5168:;
    {
        cpu->r[1] = 0x0000e224u;
    }
L_001a516c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a5170:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001a5174:;
    {
        cpu->r[0] = 0x00006780u;
    }
L_001a5178:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a517c:;
    {
        cpu->r[1] = 0x00005f98u;
    }
L_001a5180:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_001a5184:;
    {
        wr8(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_001a5188:;
    {
        goto L_001a4ec4;
    }
L_001a518c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001a5190:;
    {
        cpu->r[3] = 0x000013e4u;
    }
L_001a5194:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a5198:;
    {
        cpu->r[0] = 0x00006768u;
    }
L_001a519c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a51a0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001a51a4:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001a51a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001a51ac:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a51b0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001a51b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a51b8:;
    {
        cpu->r[14] = 0x001a51bcu; fn_001c01dc(cpu);
    }
L_001a51bc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a51c0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a51c4:;
    {
        cpu->r[14] = 0x001a51c8u; fn_001933d4(cpu);
    }
L_001a51c8:;
    {
        goto L_001a4e4c;
    }
L_001a51cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a51d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a4f74;
        }
    }
L_001a51d4:;
    {
        goto L_001a5108;
    }
}

/* _ZN15GS_RankingsShow8DoActionEii @ 001a51ec (arm) */
void fn_001a51ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a51ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a51f0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x94u);
    }
L_001a51f4:;
    {
        cpu->r[12] = rd32(0x001a51fcu + + 0x19cu);
    }
L_001a51f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001a51fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001a5200:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a5204:;
    {
        cpu->r[12] = add_flags(cpu, 0x001a520cu, cpu->r[12], 0, 0);
    }
L_001a5208:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001a520c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5218;
        }
    }
L_001a5210:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001a5214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5218u)) return;
    }
L_001a5218:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_001a521c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001a5220:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a52c8;
        }
    }
L_001a5224:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x950u);
    }
L_001a5228:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001a522c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001a5230:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
        }
    }
L_001a5234:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5210;
        }
    }
L_001a5238:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a523c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a5240:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_001a5244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a52d8;
        }
    }
L_001a5248:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001a524c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5344;
        }
    }
L_001a5250:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a5254:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001a5258:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a525c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5210;
        }
    }
L_001a5260:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001a5264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5328;
        }
    }
L_001a5268:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_001a526c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5210;
        }
    }
L_001a5270:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x954u);
    }
L_001a5274:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001a5278:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_001a527c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_001a5280:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a5284:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_001a5288:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a528c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001a5290:;
    {
        cpu->r[3] = rd32(0x001a5298u + + 0x104u);
    }
L_001a5294:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a5298:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_001a529c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a52a0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a52a4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a52a8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001a52ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a52b0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a52b4:;
    {
        cpu->r[14] = 0x001a52b8u; fn_000fd248(cpu);
    }
L_001a52b8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a52bc:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[5]);
    }
L_001a52c0:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[3]);
    }
L_001a52c4:;
    {
        goto L_001a5210;
    }
L_001a52c8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001a52cc:;
    {
        cpu->r[14] = 0x001a52d4u;
    }
L_001a52d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a52d4u)) return;
    }
L_001a52d4:;
    {
        goto L_001a5210;
    }
L_001a52d8:;
    {
        cpu->r[3] = rd32(0x001a52e0u + + 0xbcu);
    }
L_001a52dc:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a52e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001a52e4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a52e8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a52ec:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a52f0:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_001a52f4:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_001a52f8:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a52fc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a5300:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[5]);
    }
L_001a5304:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_001a5308:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a530c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[14]);
    }
L_001a5310:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_001a5314:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a5318:;
    {
        cpu->r[14] = 0x001a531cu; fn_000fd248(cpu);
    }
L_001a531c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[6]);
    }
L_001a5320:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[5]);
    }
L_001a5324:;
    {
        goto L_001a5210;
    }
L_001a5328:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x954u);
    }
L_001a532c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001a5330:;
    {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
    }
L_001a5334:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5338:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x0000000bu;
        }
    }
L_001a533c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x954u, cpu->r[3]);
        }
    }
L_001a5340:;
    {
        goto L_001a5288;
    }
L_001a5344:;
    {
        cpu->r[3] = rd32(0x001a534cu + + 0x50u);
    }
L_001a5348:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001a534c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_001a5350:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a5354:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a5358:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a535c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001a5360:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001a5364:;
    {
        cpu->r[2] = 0x000067adu;
    }
L_001a5368:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001a536c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a5370:;
    {
        wr8(cpu->r[14] + cpu->r[2], cpu->r[5]);
    }
L_001a5374:;
    {
        cpu->r[14] = 0x00000013u;
    }
L_001a5378:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a537c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[14]);
    }
L_001a5380:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_001a5384:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a5388:;
    {
        cpu->r[14] = 0x001a538cu; fn_000fd248(cpu);
    }
L_001a538c:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[5]);
    }
L_001a5390:;
    {
        wr32(cpu->r[4] + + 0x950u, cpu->r[6]);
    }
L_001a5394:;
    {
        goto L_001a5210;
    }
}

/* _ZN15GS_RankingsShow11DoBarActionEii @ 001a53a0 (arm) */
void fn_001a53a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a53a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001a53a4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001a53a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001a53ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a53b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a53b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a53b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a53d0;
        }
    }
L_001a53bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x950u);
    }
L_001a53c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001a53c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a53d8;
        }
    }
L_001a53c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a53cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a541c;
        }
    }
L_001a53d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a53d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a53d8u)) return;
    }
L_001a53d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001a53dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5458;
        }
    }
L_001a53e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001a53e4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a53e8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a53ec:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001a53f0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a53f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a53f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a53fc:;
    {
        cpu->r[14] = 0x001a5400u; fn_000fd248(cpu);
    }
L_001a5400:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_001a5404:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[5]) {
        case 0: goto L_001a54e8;
        case 1: goto L_001a54c0;
        case 2: goto L_001a5498;
        case 3: goto L_001a5478;
        default: guest_unimplemented(cpu, 0x001a5404u); return; }
        }
    }
L_001a5408:;
    {
        goto L_001a53d0;
    }
L_001a541c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001a5420:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5424:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a5428:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a542c:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a5430:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a5434:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5438:;
    {
        cpu->r[14] = 0x001a543cu; fn_000fd248(cpu);
    }
L_001a543c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a5440:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001a5444:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5448:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001a544c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a5450:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a5454:;
    {
        return fn_0010df70(cpu);
    }
L_001a5458:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001a545c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5460:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a5464:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_001a5468:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a546c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001a5470:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5474:;
    {
        cpu->r[14] = 0x001a5478u; fn_000fd248(cpu);
    }
L_001a5478:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001a547c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5480:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_001a5484:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a5488:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001a548c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a5490:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a5494:;
    {
        return fn_0010df70(cpu);
    }
L_001a5498:;
    {
        cpu->r[0] = 0x00001418u;
    }
L_001a549c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a54a0:;
    {
        cpu->r[14] = 0x001a54a4u; fn_0018ba6c(cpu);
    }
L_001a54a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a54a8:;
    {
        cpu->r[14] = 0x001a54acu; fn_001a6558(cpu);
    }
L_001a54ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a54b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a54b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a54b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a54bc:;
    {
        return fn_000f36dc(cpu);
    }
L_001a54c0:;
    {
        cpu->r[0] = 0x00001418u;
    }
L_001a54c4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a54c8:;
    {
        cpu->r[14] = 0x001a54ccu; fn_0018ba6c(cpu);
    }
L_001a54cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a54d0:;
    {
        cpu->r[14] = 0x001a54d4u; fn_001a6744(cpu);
    }
L_001a54d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a54d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a54dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a54e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a54e4:;
    {
        return fn_000f36dc(cpu);
    }
L_001a54e8:;
    {
        cpu->r[0] = 0x00001418u;
    }
L_001a54ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a54f0:;
    {
        cpu->r[14] = 0x001a54f4u; fn_0018ba6c(cpu);
    }
L_001a54f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a54f8:;
    {
        cpu->r[14] = 0x001a54fcu; fn_001a63e4(cpu);
    }
L_001a54fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5500:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001a5504:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a5508:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001a550c:;
    {
        return fn_000f36dc(cpu);
    }
}

/* _ZN15GS_RankingsShowC1Ev @ 001a5510 (arm) */
void fn_001a5510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a5510:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a5514:;
    {
        cpu->r[5] = rd32(0x001a551cu + + 0x68u);
    }
L_001a5518:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a551c:;
    {
        cpu->r[14] = 0x001a5520u; fn_0010ffa8(cpu);
    }
L_001a5520:;
    {
        cpu->r[3] = rd32(0x001a5528u + + 0x60u);
    }
L_001a5524:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a552cu, cpu->r[5], 0, 0);
    }
L_001a5528:;
    {
        cpu->r[2] = rd32(0x001a5530u + + 0x5cu);
    }
L_001a552c:;
    {
        cpu->r[12] = 0x0000000au;
    }
L_001a5530:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5534:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a5538:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a553c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a5540:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a5544:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_001a5548:;
    {
        cpu->r[1] = 0x000013f0u;
    }
L_001a554c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a5550:;
    {
        wr8(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a5554:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a5558:;
    {
        cpu->r[1] = 0x000013f4u;
    }
L_001a555c:;
    {
        cpu->r[12] = 0x0000000bu;
    }
L_001a5560:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001a5564:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a5568:;
    {
        cpu->r[1] = 0x000013f8u;
    }
L_001a556c:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_001a5570:;
    {
        cpu->r[2] = 0x00000074u;
    }
L_001a5574:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a5578:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_001a557c:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a5580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5584u)) return;
    }
}

/* _ZN15GS_RankingsShowC2Ev @ 001a5590 (arm) */
void fn_001a5590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a5590:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a5594:;
    {
        cpu->r[5] = rd32(0x001a559cu + + 0x68u);
    }
L_001a5598:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a559c:;
    {
        cpu->r[14] = 0x001a55a0u; fn_0010ffa8(cpu);
    }
L_001a55a0:;
    {
        cpu->r[3] = rd32(0x001a55a8u + + 0x60u);
    }
L_001a55a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a55acu, cpu->r[5], 0, 0);
    }
L_001a55a8:;
    {
        cpu->r[2] = rd32(0x001a55b0u + + 0x5cu);
    }
L_001a55ac:;
    {
        cpu->r[12] = 0x0000000au;
    }
L_001a55b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a55b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a55b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a55bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a55c0:;
    {
        wr32(cpu->r[4] + + 0x958u, cpu->r[3]);
    }
L_001a55c4:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_001a55c8:;
    {
        cpu->r[1] = 0x000013f0u;
    }
L_001a55cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a55d0:;
    {
        wr8(cpu->r[4] + + 0x964u, cpu->r[3]);
    }
L_001a55d4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a55d8:;
    {
        cpu->r[1] = 0x000013f4u;
    }
L_001a55dc:;
    {
        cpu->r[12] = 0x0000000bu;
    }
L_001a55e0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001a55e4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a55e8:;
    {
        cpu->r[1] = 0x000013f8u;
    }
L_001a55ec:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_001a55f0:;
    {
        cpu->r[2] = 0x00000074u;
    }
L_001a55f4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a55f8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[2]);
    }
L_001a55fc:;
    {
        wr32(cpu->r[4] + + 0x960u, cpu->r[3]);
    }
L_001a5600:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5604u)) return;
    }
}

/* _ZN15GS_RankingsShowD0Ev @ 001a5610 (arm) */
void fn_001a5610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a5610:;
    {
        cpu->r[3] = rd32(0x001a5618u + + 0x2cu);
    }
L_001a5614:;
    {
        cpu->r[2] = rd32(0x001a561cu + + 0x2cu);
    }
L_001a5618:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a5620u, cpu->r[3], 0, 0);
    }
L_001a561c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a5620:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a5624:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a5628:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a562c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a5630:;
    {
        cpu->r[14] = 0x001a5634u; fn_000ec21c(cpu);
    }
L_001a5634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5638:;
    {
        cpu->r[14] = 0x001a563cu; fn_0018ba20(cpu);
    }
L_001a563c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5640:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5644u)) return;
    }
}

/* _ZN15GS_RankingsShow6RenderEv @ 001a564c (arm) */
void fn_001a564c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a564c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8cau);
    }
L_001a5650:;
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
L_001a5654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5658:;
    {
        cpu->r[8] = rd32(0x001a5660u + + 0xcccu);
    }
L_001a565c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000004f0u, 1, 0);
    }
L_001a5660:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a5664:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a5668:;
    {
        cpu->r[8] = add_flags(cpu, 0x001a5670u, cpu->r[8], 0, 0);
    }
L_001a566c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a56a4;
        }
    }
L_001a5670:;
    {
        cpu->r[1] = rd32(0x001a5678u + + 0xcb8u);
    }
L_001a5674:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a5678:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_001a567c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a5680:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a5684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6240;
        }
    }
L_001a5688:;
    {
        cpu->r[2] = rd32(0x001a5690u + + 0xca4u);
    }
L_001a568c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001a5690:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a5694:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a5698:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a569c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a56a0:;
    {
        goto L_001a56d4;
    }
L_001a56a4:;
    {
        cpu->r[1] = rd32(0x001a56acu + + 0xc84u);
    }
L_001a56a8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a56ac:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_001a56b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a56b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a56b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a625c;
        }
    }
L_001a56bc:;
    {
        cpu->r[2] = rd32(0x001a56c4u + + 0xc70u);
    }
L_001a56c0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001a56c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a56c8:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_001a56cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a56d0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a56d4:;
    {
        cpu->r[14] = 0x001a56d8u; fn_0018aa44(cpu);
    }
L_001a56d8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a56dc:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001a56e0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001a56e4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001a56e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a56ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a56f0:;
    {
        cpu->r[14] = 0x001a56f4u; fn_000ad8a0(cpu);
    }
L_001a56f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a56f8:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a56fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001a5700:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a5704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5f9c;
        }
    }
L_001a5708:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_001a570c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a5710:;
    {
        cpu->r[14] = 0x001a5714u; fn_00096a08(cpu);
    }
L_001a5714:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a5718:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a571c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5720:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5724:;
    {
        cpu->r[14] = 0x001a5728u; fn_0018aa44(cpu);
    }
L_001a5728:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x5cu);
    }
L_001a572c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a5730:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x58u);
    }
L_001a5734:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5738:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_001a573c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a61f0;
        }
    }
L_001a5740:;
    {
        cpu->r[14] = rd32(0x001a5748u + + 0xbf0u);
    }
L_001a5744:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a5748:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a574c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a5750:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001a5754:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_001a5758:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001a575c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000086u, 1, 0);
    }
L_001a5760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a60b4;
        }
    }
L_001a5764:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a5768:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_001a576c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a5770:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a5774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5fe0;
        }
    }
L_001a5778:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a577c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a5780:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_001a5784:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a5788:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000004d0u, 0, 0);
    }
L_001a578c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5790:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001a5794:;
    {
        cpu->r[14] = 0x001a5798u; fn_0018aa44(cpu);
    }
L_001a5798:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a579c:;
    {
        cpu->r[2] = 0x000000e3u;
    }
L_001a57a0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a57a4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a57a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a57ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a57b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a57b4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001a57b8:;
    {
        cpu->r[14] = 0x001a57bcu; fn_000a8a2c(cpu);
    }
L_001a57bc:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a57c0:;
    {
        cpu->r[12] = rd32(0x001a57c8u + + 0xb74u);
    }
L_001a57c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a57c8:;
    {
        cpu->r[11] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a57cc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_001a57d0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
    }
L_001a57d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000073u;
        }
    }
L_001a57d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x0000005bu;
        }
    }
L_001a57dc:;
    {
        cpu->r[14] = 0x001a57e0u; fn_000960f4(cpu);
    }
L_001a57e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a57e4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a57e8:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a57ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a57f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6024;
        }
    }
L_001a57f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a57f8:;
    {
        cpu->r[3] = 0x000067adu;
    }
L_001a57fc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a5800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001a5808:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5820;
        }
    }
L_001a580c:;
    {
        cpu->r[3] = 0x000013e0u;
    }
L_001a5810:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5814:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_001a5818:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001a581c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_001a5820:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000004f0u, 0, 0);
    }
L_001a5824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000004f0u, 0, 0);
    }
L_001a5828:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a582c:;
    {
        cpu->r[1] = 0x000000e2u;
    }
L_001a5830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001a5834:;
    {
        cpu->r[14] = 0x001a5838u; fn_000a8d10(cpu);
    }
L_001a5838:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a583c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a5840:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a5844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5eec;
        }
    }
L_001a5848:;
    {
        cpu->r[3] = 0x000013fcu;
    }
L_001a584c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4f4u);
    }
L_001a5850:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5854:;
    {
        cpu->r[1] = 0x000000e2u;
    }
L_001a5858:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a585c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001a5860:;
    {
        cpu->r[3] = 0x00000065u;
    }
L_001a5864:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5868:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 1u, &shc), cpu->r[14], 1, 0);
    }
L_001a586c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5870:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5874:;
    {
        cpu->r[14] = 0x001a5878u; fn_000ad8a0(cpu);
    }
L_001a5878:;
    {
        cpu->r[2] = rd32(0x001a5880u + + 0xac0u);
    }
L_001a587c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a5880:;
    {
        cpu->r[1] = rd32(0x001a5888u + + 0xabcu);
    }
L_001a5884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000004e0u, 0, 0);
    }
L_001a5888:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a5890u, cpu->r[2], 0, 0);
    }
L_001a588c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_001a5890:;
    {
        cpu->r[2] = rd32(0x001a5898u + + 0xab0u);
    }
L_001a5894:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x0000004eu, 0, 0);
    }
L_001a5898:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_001a589c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001a58a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a58a8u, cpu->r[2], 0, 0);
    }
L_001a58a4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001a58a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000004e0u, 0, 0);
    }
L_001a58ac:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001a58b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a58b4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001a58b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000004a0u, 0, 0);
    }
L_001a58bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001a58c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a58c4:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001a58c8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000046u, 0, 0);
    }
L_001a58cc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_001a58d0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_001a58d4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_001a58d8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_001a58dc:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001a58e0:;
    {
        goto L_001a5ad4;
    }
L_001a58e4:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a58e8:;
    {
        cpu->r[7] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a58ec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a58f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5da8;
        }
    }
L_001a58f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a58f8:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a58fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a5900:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a5904:;
    {
        cpu->r[14] = 0x001a5908u; fn_000a8d10(cpu);
    }
L_001a5908:;
    {
        cpu->r[3] = 0x00001400u;
    }
L_001a590c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5910:;
    {
        cpu->r[1] = 0x000000e3u;
    }
L_001a5914:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5918:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a591c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5920:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5924:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5928:;
    {
        cpu->r[14] = 0x001a592cu; fn_000ad8a0(cpu);
    }
L_001a592c:;
    {
        cpu->r[3] = 0x000013e0u;
    }
L_001a5930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5934:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a5938:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00008c00u;
        }
    }
L_001a593c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001a5940:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
        }
    }
L_001a5944:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_001a5948:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x48u);
        }
    }
L_001a594c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
        }
    }
L_001a5950:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
        }
    }
L_001a5954:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a5958:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[2]);
        }
    }
L_001a595c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
        }
    }
L_001a5960:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5964:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a5968:;
    {
        cpu->r[14] = 0x001a596cu; fn_000962d0(cpu);
    }
L_001a596c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_001a5970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5d8c;
        }
    }
L_001a5974:;
    {
        cpu->r[14] = 0x0000000cu;
    }
L_001a5978:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_001a597c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a5980:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 7u, &shc); cpu->r[7] = v;
    }
L_001a5984:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x95cu);
    }
L_001a5988:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a598c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a5990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001a5994:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000960u, 0, 0);
    }
L_001a5998:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_001a599c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001a59a0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001a59a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a59a8:;
    {
        cpu->r[14] = 0x001a59acu; fn_00099114(cpu);
    }
L_001a59ac:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a59b0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001a59b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001a59b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5de0;
        }
    }
L_001a59bc:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a59c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a59c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001a59c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a59cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a59d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000e60u, 0, 0);
    }
L_001a59d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_001a59d8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a59dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001a59e0:;
    {
        cpu->r[7] = 0x00000011u;
    }
L_001a59e4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a59e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a59ec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a59f0:;
    {
        cpu->r[14] = 0x001a59f4u; fn_000ad19c(cpu);
    }
L_001a59f4:;
    {
        cpu->r[3] = 0x00001408u;
    }
L_001a59f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a59fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5a00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5a04:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5a08:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a5a0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a5a10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001a5a14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a5a18:;
    {
        cpu->r[14] = 0x001a5a1cu; fn_000ad19c(cpu);
    }
L_001a5a1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a5a20:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a5a24:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_001a5a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a5a2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5e30;
        }
    }
L_001a5a30:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a5a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5a38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a5a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5f74;
        }
    }
L_001a5a40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a5a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_001a5a48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001340u, 0, 0);
    }
L_001a5a4c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x28u);
    }
L_001a5a50:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_001a5a54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001a5a58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001a5a5c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[7], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001a5a60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5ea8;
        }
    }
L_001a5a64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000450u, 0, 0);
    }
L_001a5a68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_001a5a6c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001a5a70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a5a74:;
    {
        cpu->r[14] = 0x001a5a78u; fn_000ae1a4(cpu);
    }
L_001a5a78:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5a7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5a80:;
    {
        cpu->r[14] = 0x001a5a84u; fn_000ae160(cpu);
    }
L_001a5a84:;
    {
        cpu->r[2] = 0x0000140cu;
    }
L_001a5a88:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5a8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5a90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5a94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5a98:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a5a9c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5aa0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5aa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5aa8:;
    {
        cpu->r[14] = 0x001a5aacu; fn_000ad19c(cpu);
    }
L_001a5aac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a5ab0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a5ab4:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a5ab8:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a5abc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001a5ac0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a5ac4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
    }
L_001a5ac8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000013u, 0, 0);
    }
L_001a5acc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000013u, 0, 0);
    }
L_001a5ad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5b48;
        }
    }
L_001a5ad4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x958u);
    }
L_001a5ad8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001a5adc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a58e4;
        }
    }
L_001a5ae0:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a5ae4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5ae8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a5aec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001a5af0:;
    {
        cpu->r[7] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_001a5af4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001a5af8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a5afc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000013u, 0, 0);
    }
L_001a5b00:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001a5b04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x000000e3u;
        }
    }
L_001a5b08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x000000e6u;
        }
    }
L_001a5b0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5b10:;
    {
        cpu->r[14] = 0x001a5b14u; fn_000a8d10(cpu);
    }
L_001a5b14:;
    {
        cpu->r[3] = 0x00001400u;
    }
L_001a5b18:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a5b1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5b20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5b24:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a5b28:;
    {
        cpu->r[12] = 0x00800000u;
    }
L_001a5b2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5b30:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a5b34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5b38:;
    {
        cpu->r[14] = 0x001a5b3cu; fn_000ad8a0(cpu);
    }
L_001a5b3c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
    }
L_001a5b40:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000013u, 0, 0);
    }
L_001a5b44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a5ad4;
        }
    }
L_001a5b48:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001a5b4c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a5b50:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001a5b54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a5b58:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a5b5c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a5b60:;
    {
        cpu->r[6] = rd8(cpu->r[2]);
    }
L_001a5b64:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a5b68:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a5b6c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001a5b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5f1c;
        }
    }
L_001a5b74:;
    {
        cpu->r[2] = 0x0000140cu;
    }
L_001a5b78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5b7c:;
    {
        cpu->r[1] = 0x00000492u;
    }
L_001a5b80:;
    {
        cpu->r[3] = 0x0000006du;
    }
L_001a5b84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5b88:;
    {
        cpu->r[6] = 0x00000021u;
    }
L_001a5b8c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001a5b90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001a5b94:;
    {
        cpu->r[14] = 0x001a5b98u; fn_000ad200(cpu);
    }
L_001a5b98:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a5b9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5ba0:;
    {
        cpu->r[1] = 0x00000493u;
    }
L_001a5ba4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5ba8:;
    {
        cpu->r[3] = 0x0000006du;
    }
L_001a5bac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001a5bb0:;
    {
        cpu->r[14] = 0x001a5bb4u; fn_000ad200(cpu);
    }
L_001a5bb4:;
    {
        cpu->r[3] = 0x00001408u;
    }
L_001a5bb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5bbc:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_001a5bc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5bc4:;
    {
        cpu->r[3] = 0x0000006du;
    }
L_001a5bc8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_001a5bcc:;
    {
        cpu->r[14] = 0x001a5bd0u; fn_000ad200(cpu);
    }
L_001a5bd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a5bd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5bd8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a5bdc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a5be0:;
    {
        cpu->r[14] = 0x001a5be8u;
    }
L_001a5be4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5be8u)) return;
    }
L_001a5be8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a5bec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a5bf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5bf4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a5bf8:;
    {
        cpu->r[14] = 0x001a5c00u;
    }
L_001a5bfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5c00u)) return;
    }
L_001a5c00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a5c04:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a5c08:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a5c0c:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a5c10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x950u);
    }
L_001a5c14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001a5c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5d50;
        }
    }
L_001a5c1c:;
    {
        cpu->r[3] = rd32(0x001a5c24u + + 0x728u);
    }
L_001a5c20:;
    {
        cpu->r[1] = 0xaa000000u;
    }
L_001a5c24:;
    {
        cpu->r[11] = rd32(0x001a5c2cu + + 0x724u);
    }
L_001a5c28:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5c2c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001a5c30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5c34:;
    {
        cpu->r[14] = 0x001a5c38u; fn_0012dd58(cpu);
    }
L_001a5c38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a5c3c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001a5c40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5c44:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a5c48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a5c4c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001a5c50:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001a5c54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a5c58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5c5c:;
    {
        cpu->r[14] = 0x001a5c60u; fn_00130908(cpu);
    }
L_001a5c60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5c64:;
    {
        cpu->r[14] = 0x001a5c68u; fn_0012f780(cpu);
    }
L_001a5c68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a5c6c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001a5c70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a5c74:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a5c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a61fc;
        }
    }
L_001a5c7c:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a5c80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a5c84:;
    {
        cpu->r[14] = 0x001a5c88u; fn_00096a08(cpu);
    }
L_001a5c88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a5c8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a5c90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000450u, 0, 0);
    }
L_001a5c94:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001a5c98:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5c9c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_001a5ca0:;
    {
        cpu->r[14] = 0x001a5ca4u; fn_0018aa44(cpu);
    }
L_001a5ca4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a5ca8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a5cac:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a5cb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001a5cb4:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x54u);
    }
L_001a5cb8:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001a5cbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001a5cc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a5cc4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a5cc8:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001a5ccc:;
    {
        cpu->r[14] = 0x001a5cd0u; fn_000aeb58(cpu);
    }
L_001a5cd0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001a5cd4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a5cd8:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a5cdc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001a5ce0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_001a5ce4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5ce8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5cec:;
    {
        cpu->r[14] = 0x001a5cf0u; fn_000a9818(cpu);
    }
L_001a5cf0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a5cf4:;
    {
        cpu->r[0] = 0x00000497u;
    }
L_001a5cf8:;
    {
        cpu->r[14] = 0x001a5cfcu; fn_000aeb58(cpu);
    }
L_001a5cfc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001a5d00:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_001a5d04:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001a5d08:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a5d0c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001a5d10:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000053u, 1, 0);
    }
L_001a5d14:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001a5d18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001a5d1c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_001a5d20:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001a5d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_001a5d28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001a5d2c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a5d30:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_001a5d34:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_001a5d38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a5d3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5d40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5d44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5d48:;
    {
        cpu->r[14] = 0x001a5d4cu; fn_000ac4bc(cpu);
    }
L_001a5d4c:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[9]);
    }
L_001a5d50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a5d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5d58:;
    {
        cpu->r[14] = 0x001a5d60u;
    }
L_001a5d5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x98u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5d60u)) return;
    }
L_001a5d60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5d64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001a5d68:;
    {
        cpu->r[14] = 0x001a5d6cu; fn_000a8e18(cpu);
    }
L_001a5d6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a5d70:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a5d74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a5d78:;
    {
        cpu->r[14] = 0x001a5d80u;
    }
L_001a5d7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5d80u)) return;
    }
L_001a5d80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001a5d84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001a5d88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a5d8cu)) return;
    }
L_001a5d8c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001a5d90:;
    {
        cpu->r[14] = 0x001a5d94u; fn_000962d0(cpu);
    }
L_001a5d94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_001a5d98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a5d9c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
        }
    }
L_001a5da0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a597c;
        }
    }
L_001a5da4:;
    {
        goto L_001a5974;
    }
L_001a5da8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5dac:;
    {
        cpu->r[1] = 0x000000e6u;
    }
L_001a5db0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001a5db4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001a5db8:;
    {
        cpu->r[14] = 0x001a5dbcu; fn_000a8d10(cpu);
    }
L_001a5dbc:;
    {
        cpu->r[3] = 0x00001400u;
    }
L_001a5dc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5dc4:;
    {
        cpu->r[1] = 0x000000e6u;
    }
L_001a5dc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5dcc:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001a5dd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001a5dd4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001a5dd8:;
    {
        cpu->r[14] = 0x001a5ddcu; fn_000ad8a0(cpu);
    }
L_001a5ddc:;
    {
        goto L_001a592c;
    }
L_001a5de0:;
    {
        cpu->r[3] = 0x00001404u;
    }
L_001a5de4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001a5de8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001a5dec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000e60u, 0, 0);
    }
L_001a5df0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5df4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5df8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_001a5dfc:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5e00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001a5e04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5e08:;
    {
        cpu->r[7] = 0x00000011u;
    }
L_001a5e0c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001a5e10:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001a5e14:;
    {
        cpu->r[14] = 0x001a5e18u; fn_000ad19c(cpu);
    }
L_001a5e18:;
    {
        cpu->r[2] = 0x00001408u;
    }
L_001a5e1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5e20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001a5e24:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5e28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5e2c:;
    {
        goto L_001a5a08;
    }
L_001a5e30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a5e34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5e38:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_001a5e3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a5e40:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00001380u, 0, 0);
    }
L_001a5e44:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001a5e48:;
    {
        cpu->r[14] = 0x001a5e4cu; fn_000ae830(cpu);
    }
L_001a5e4c:;
    {
        cpu->r[2] = 0x0000140cu;
    }
L_001a5e50:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5e54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5e58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5e5c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a5e60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5e64:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a5e68:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001a5e6c:;
    {
        cpu->r[14] = 0x001a5e70u; fn_000ad19c(cpu);
    }
L_001a5e70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5e74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001a5e78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x38u);
    }
L_001a5e7c:;
    {
        cpu->r[14] = 0x001a5e80u; fn_000ae830(cpu);
    }
L_001a5e80:;
    {
        cpu->r[3] = 0x00001410u;
    }
L_001a5e84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5e88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5e8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5e90:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001a5e94:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a5e98:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001a5e9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001a5ea0:;
    {
        cpu->r[14] = 0x001a5ea4u; fn_000ad19c(cpu);
    }
L_001a5ea4:;
    {
        goto L_001a5abc;
    }
L_001a5ea8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001a5eac:;
    {
        cpu->r[1] = (~0xc0000000u);
    }
L_001a5eb0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001a5eb4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_001a5eb8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001a5ebc:;
    {
        cpu->r[14] = 0x001a5ec0u; fn_000f33a8(cpu);
    }
L_001a5ec0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001a5ec4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001a5ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5a64;
        }
    }
L_001a5ecc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000450u, 0, 0);
    }
L_001a5ed0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x28u);
    }
L_001a5ed4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001a5ed8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a5edc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001a5ee0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a5ee4:;
    {
        cpu->r[14] = 0x001a5ee8u; fn_000f3840(cpu);
    }
L_001a5ee8:;
    {
        goto L_001a5a78;
    }
L_001a5eec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4f4u);
    }
L_001a5ef0:;
    {
        cpu->r[1] = 0x000000e2u;
    }
L_001a5ef4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a5ef8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001a5efc:;
    {
        cpu->r[3] = 0x000013fcu;
    }
L_001a5f00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5f04:;
    {
        cpu->r[3] = 0x0000004du;
    }
L_001a5f08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a5f0c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[10], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_001a5f10:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a5f14:;
    {
        cpu->r[14] = 0x001a5f18u; fn_000ad8a0(cpu);
    }
L_001a5f18:;
    {
        goto L_001a5878;
    }
L_001a5f1c:;
    {
        cpu->r[2] = 0x00001408u;
    }
L_001a5f20:;
    {
        cpu->r[1] = 0x0000049fu;
    }
L_001a5f24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5f28:;
    {
        cpu->r[3] = 0x00000085u;
    }
L_001a5f2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5f30:;
    {
        cpu->r[7] = 0x00000021u;
    }
L_001a5f34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a5f38:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001a5f3c:;
    {
        cpu->r[14] = 0x001a5f40u; fn_000ad200(cpu);
    }
L_001a5f40:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a5f44:;
    {
        cpu->r[2] = 0x0000140cu;
    }
L_001a5f48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001a5f50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a5f54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a5f58:;
    {
        cpu->r[3] = 0x00000085u;
    }
L_001a5f5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000494u;
        }
    }
L_001a5f60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000628u;
        }
    }
L_001a5f64:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001a5f68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a5f6c:;
    {
        cpu->r[14] = 0x001a5f70u; fn_000ad200(cpu);
    }
L_001a5f70:;
    {
        goto L_001a5bd0;
    }
L_001a5f74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001a5f78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a5f7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001a5f80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001340u, 0, 0);
    }
L_001a5f84:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x28u);
    }
L_001a5f88:;
    {
        cpu->r[14] = 0x001a5f8cu; fn_00098aec(cpu);
    }
L_001a5f8c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a5f90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001a5f94:;
    {
        cpu->r[14] = 0x001a5f98u; fn_000ae1a4(cpu);
    }
L_001a5f98:;
    {
        goto L_001a5a84;
    }
L_001a5f9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5fa0:;
    {
        cpu->r[14] = 0x001a5fa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a5fa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a5fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5708;
        }
    }
L_001a5fac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a5fb0:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001a5fb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5fb8:;
    {
        cpu->r[14] = 0x001a5fbcu; fn_0018aa20(cpu);
    }
L_001a5fbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a5fc0:;
    {
        cpu->r[14] = 0x001a5fc4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a5fc4:;
    {
        cpu->r[3] = rd32(0x001a5fccu + + 0x388u);
    }
L_001a5fc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5fcc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5fd0:;
    {
        cpu->r[3] = rd32(0x001a5fd8u + + 0x380u);
    }
L_001a5fd4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a5fd8:;
    {
        cpu->r[14] = 0x001a5fdcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a5fdc:;
    {
        goto L_001a5708;
    }
L_001a5fe0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a5fe4:;
    {
        cpu->r[14] = 0x001a5fe8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a5fe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a5fec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5778;
        }
    }
L_001a5ff0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a5ff4:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[14]);
    }
L_001a5ff8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a5ffc:;
    {
        cpu->r[14] = 0x001a6000u; fn_0018aa20(cpu);
    }
L_001a6000:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6004:;
    {
        cpu->r[14] = 0x001a6008u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a6008:;
    {
        cpu->r[3] = rd32(0x001a6010u + + 0x344u);
    }
L_001a600c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a6010:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6014:;
    {
        cpu->r[3] = rd32(0x001a601cu + + 0x33cu);
    }
L_001a6018:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a601c:;
    {
        cpu->r[14] = 0x001a6020u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a6020:;
    {
        goto L_001a5778;
    }
L_001a6024:;
    {
        cpu->r[9] = 0x000013f0u;
    }
L_001a6028:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a602c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a6030:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a6034:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001a6038:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a603c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a6040:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a6044:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a6048:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a604c:;
    {
        cpu->r[14] = 0x001a6050u; fn_000a89b8(cpu);
    }
L_001a6050:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001a6054:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a6058:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a605c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a6060:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a6064:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a6068:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a606c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a6070:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a6074:;
    {
        cpu->r[14] = 0x001a6078u; fn_000a89b8(cpu);
    }
L_001a6078:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001a607c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a6080:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a6084:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001a6088:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_001a608c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a6090:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a6094:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a6098:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a609c:;
    {
        cpu->r[14] = 0x001a60a0u; fn_000a89b8(cpu);
    }
L_001a60a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001a60a4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001a60a8:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001a60ac:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_001a60b0:;
    {
        goto L_001a57f4;
    }
L_001a60b4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001a60b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000004c0u, 0, 0);
    }
L_001a60bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a60c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001a60c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001a60c8:;
    {
        cpu->r[2] = 0x000000b5u;
    }
L_001a60cc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a60d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a60d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001a60d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001a60dc:;
    {
        cpu->r[14] = 0x001a60e0u; fn_000a8a2c(cpu);
    }
L_001a60e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4d4u);
    }
L_001a60e4:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_001a60e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4ccu);
    }
L_001a60ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4c8u);
    }
L_001a60f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001a60f4:;
    {
        cpu->r[2] = 0x00001414u;
    }
L_001a60f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4d0u);
    }
L_001a60fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001a6100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001a6104:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001a6108:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001a610c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000168u, 0, 0);
    }
L_001a6110:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001a6114:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_001a6118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001a611c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x0000004au, cpu->r[3], 1, 0);
    }
L_001a6120:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a6124:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 1u, &shc), 1, 0);
    }
L_001a6128:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a612c:;
    {
        cpu->r[14] = 0x001a6130u; fn_000ad8a0(cpu);
    }
L_001a6130:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001a6134:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_001a6138:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001a613c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001a6140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6278;
        }
    }
L_001a6144:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_001a6148:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001a614c:;
    {
        cpu->r[14] = 0x001a6150u; fn_00096a08(cpu);
    }
L_001a6150:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a6154:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a6158:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001a615c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a6160:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6164:;
    {
        cpu->r[14] = 0x001a6168u; fn_0018aa44(cpu);
    }
L_001a6168:;
    {
        cpu->r[3] = rd32(0x001a6170u + + 0x1d4u);
    }
L_001a616c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x954u);
    }
L_001a6170:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_001a6174:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001a6178:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a617c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a6180:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_001a6184:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001a6188:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_001a618c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a6190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6194:;
    {
        cpu->r[14] = 0x001a619cu;
    }
L_001a6198:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a619cu)) return;
    }
L_001a619c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001a61a0:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_001a61a4:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_001a61a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a61ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a61b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001a61b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a61b8:;
    {
        cpu->r[14] = 0x001a61bcu; fn_000ad19c(cpu);
    }
L_001a61bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a61c0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a61c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a61c8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a61cc:;
    {
        cpu->r[14] = 0x001a61d4u;
    }
L_001a61d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a61d4u)) return;
    }
L_001a61d4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a61d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001a61dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a61e0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a61e4:;
    {
        cpu->r[14] = 0x001a61ecu;
    }
L_001a61e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001a61ecu)) return;
    }
L_001a61ec:;
    {
        goto L_001a5764;
    }
L_001a61f0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a61f4:;
    {
        cpu->r[14] = 0x001a61f8u; fn_000a8e18(cpu);
    }
L_001a61f8:;
    {
        goto L_001a5740;
    }
L_001a61fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6200:;
    {
        cpu->r[14] = 0x001a6204u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a6204:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a6208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a5c7c;
        }
    }
L_001a620c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a6210:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6214:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a6218:;
    {
        cpu->r[14] = 0x001a621cu; fn_0018aa20(cpu);
    }
L_001a621c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6220:;
    {
        cpu->r[14] = 0x001a6224u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a6224:;
    {
        cpu->r[3] = rd32(0x001a622cu + + 0x128u);
    }
L_001a6228:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a622c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6230:;
    {
        cpu->r[3] = rd32(0x001a6238u + + 0x120u);
    }
L_001a6234:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6238:;
    {
        cpu->r[14] = 0x001a623cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a623c:;
    {
        goto L_001a5c7c;
    }
L_001a6240:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a6244:;
    {
        cpu->r[14] = 0x001a6248u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a6248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a624c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a62f4;
        }
    }
L_001a6250:;
    {
        cpu->r[3] = rd32(0x001a6258u + + 0xdcu);
    }
L_001a6254:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001a6258:;
    {
        goto L_001a5690;
    }
L_001a625c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a6260:;
    {
        cpu->r[14] = 0x001a6264u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a6264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a6268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a62bc;
        }
    }
L_001a626c:;
    {
        cpu->r[3] = rd32(0x001a6274u + + 0xc0u);
    }
L_001a6270:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001a6274:;
    {
        goto L_001a56c4;
    }
L_001a6278:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a627c:;
    {
        cpu->r[14] = 0x001a6280u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001a6280:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001a6284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6144;
        }
    }
L_001a6288:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001a628c:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001a6290:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a6294:;
    {
        cpu->r[14] = 0x001a6298u; fn_0018aa20(cpu);
    }
L_001a6298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a629c:;
    {
        cpu->r[14] = 0x001a62a0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a62a0:;
    {
        cpu->r[3] = rd32(0x001a62a8u + + 0xacu);
    }
L_001a62a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a62a8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a62ac:;
    {
        cpu->r[3] = rd32(0x001a62b4u + + 0xa4u);
    }
L_001a62b0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a62b4:;
    {
        cpu->r[14] = 0x001a62b8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a62b8:;
    {
        goto L_001a6144;
    }
L_001a62bc:;
    {
        cpu->r[12] = rd32(0x001a62c4u + + 0x70u);
    }
L_001a62c0:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_001a62c4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_001a62c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a62cc:;
    {
        cpu->r[14] = 0x001a62d0u; fn_0018aa20(cpu);
    }
L_001a62d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a62d4:;
    {
        cpu->r[14] = 0x001a62d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a62d8:;
    {
        cpu->r[3] = rd32(0x001a62e0u + + 0x74u);
    }
L_001a62dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a62e0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a62e4:;
    {
        cpu->r[3] = rd32(0x001a62ecu + + 0x6cu);
    }
L_001a62e8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a62ec:;
    {
        cpu->r[14] = 0x001a62f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a62f0:;
    {
        goto L_001a56c4;
    }
L_001a62f4:;
    {
        cpu->r[12] = rd32(0x001a62fcu + + 0x38u);
    }
L_001a62f8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_001a62fc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_001a6300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6304:;
    {
        cpu->r[14] = 0x001a6308u; fn_0018aa20(cpu);
    }
L_001a6308:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a630c:;
    {
        cpu->r[14] = 0x001a6310u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001a6310:;
    {
        cpu->r[3] = rd32(0x001a6318u + + 0x3cu);
    }
L_001a6314:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6318:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a631c:;
    {
        cpu->r[3] = rd32(0x001a6324u + + 0x34u);
    }
L_001a6320:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_001a6324:;
    {
        cpu->r[14] = 0x001a6328u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001a6328:;
    {
        goto L_001a5690;
    }
}

/* init_array_67 @ 001a635c (arm) */
void fn_001a635c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a635c:;
    {
        cpu->r[3] = rd32(0x001a6364u + + 0x20u);
    }
L_001a6360:;
    {
        cpu->r[1] = rd32(0x001a6368u + + 0x20u);
    }
L_001a6364:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a636cu, cpu->r[3], 0, 0);
    }
L_001a6368:;
    {
        cpu->r[2] = rd32(0x001a6370u + + 0x1cu);
    }
L_001a636c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a6370:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a6378u, cpu->r[2], 0, 0);
    }
L_001a6374:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a6378:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a637c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a6380:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN23GS_RankingsShowBestTimeD1Ev @ 001a6390 (arm) */
void fn_001a6390(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6390:;
    {
        cpu->r[3] = rd32(0x001a6398u + + 0x24u);
    }
L_001a6394:;
    {
        cpu->r[2] = rd32(0x001a639cu + + 0x24u);
    }
L_001a6398:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a63a0u, cpu->r[3], 0, 0);
    }
L_001a639c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a63a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a63a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a63a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a63ac:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a63b0:;
    {
        cpu->r[14] = 0x001a63b4u; fn_000ec21c(cpu);
    }
L_001a63b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a63b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a63bcu)) return;
    }
}

/* _ZN23GS_RankingsShowBestTime17ApplyMenuSettingsEv @ 001a63c4 (arm) */
void fn_001a63c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a63c4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a63c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a63cc:;
    {
        cpu->r[14] = 0x001a63d0u; fn_001a4764(cpu);
    }
L_001a63d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a63d4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001a63d8:;
    {
        cpu->r[3] = 0x00000488u;
    }
L_001a63dc:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001a63e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a63e4u)) return;
    }
}

/* _ZN23GS_RankingsShowBestTimeC1Ev @ 001a63e4 (arm) */
void fn_001a63e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a63e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a63e8:;
    {
        cpu->r[5] = rd32(0x001a63f0u + + 0x44u);
    }
L_001a63ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a63f0:;
    {
        cpu->r[14] = 0x001a63f4u; fn_001a5590(cpu);
    }
L_001a63f4:;
    {
        cpu->r[3] = rd32(0x001a63fcu + + 0x3cu);
    }
L_001a63f8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a6400u, cpu->r[5], 0, 0);
    }
L_001a63fc:;
    {
        cpu->r[2] = 0x000013e4u;
    }
L_001a6400:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a6404:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6408:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a640c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a6410:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001a6414:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a6418:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a641c:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a6420:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a6424:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a6428:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a642c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a6430:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6434u)) return;
    }
}

/* _ZN23GS_RankingsShowBestTimeC2Ev @ 001a643c (arm) */
void fn_001a643c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a643c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a6440:;
    {
        cpu->r[5] = rd32(0x001a6448u + + 0x44u);
    }
L_001a6444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6448:;
    {
        cpu->r[14] = 0x001a644cu; fn_001a5590(cpu);
    }
L_001a644c:;
    {
        cpu->r[3] = rd32(0x001a6454u + + 0x3cu);
    }
L_001a6450:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a6458u, cpu->r[5], 0, 0);
    }
L_001a6454:;
    {
        cpu->r[2] = 0x000013e4u;
    }
L_001a6458:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001a645c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6460:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a6464:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001a6468:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001a646c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a6470:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a6474:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001a6478:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a647c:;
    {
        cpu->r[3] = 0x000013ecu;
    }
L_001a6480:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a6484:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a6488:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a648cu)) return;
    }
}

/* _ZN23GS_RankingsShowBestTimeD0Ev @ 001a6494 (arm) */
void fn_001a6494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6494:;
    {
        cpu->r[3] = rd32(0x001a649cu + + 0x2cu);
    }
L_001a6498:;
    {
        cpu->r[2] = rd32(0x001a64a0u + + 0x2cu);
    }
L_001a649c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a64a4u, cpu->r[3], 0, 0);
    }
L_001a64a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a64a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a64a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a64ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a64b0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a64b4:;
    {
        cpu->r[14] = 0x001a64b8u; fn_000ec21c(cpu);
    }
L_001a64b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a64bc:;
    {
        cpu->r[14] = 0x001a64c0u; fn_0018ba20(cpu);
    }
L_001a64c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a64c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a64c8u)) return;
    }
}

/* init_array_68 @ 001a64d0 (arm) */
void fn_001a64d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a64d0:;
    {
        cpu->r[3] = rd32(0x001a64d8u + + 0x20u);
    }
L_001a64d4:;
    {
        cpu->r[1] = rd32(0x001a64dcu + + 0x20u);
    }
L_001a64d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a64e0u, cpu->r[3], 0, 0);
    }
L_001a64dc:;
    {
        cpu->r[2] = rd32(0x001a64e4u + + 0x1cu);
    }
L_001a64e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a64e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a64ecu, cpu->r[2], 0, 0);
    }
L_001a64e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a64ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a64f0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a64f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20GS_RankingsShowRacesD1Ev @ 001a6504 (arm) */
void fn_001a6504(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6504:;
    {
        cpu->r[3] = rd32(0x001a650cu + + 0x24u);
    }
L_001a6508:;
    {
        cpu->r[2] = rd32(0x001a6510u + + 0x24u);
    }
L_001a650c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6514u, cpu->r[3], 0, 0);
    }
L_001a6510:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a6514:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a6518:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a651c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a6520:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a6524:;
    {
        cpu->r[14] = 0x001a6528u; fn_000ec21c(cpu);
    }
L_001a6528:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a652c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6530u)) return;
    }
}

/* _ZN20GS_RankingsShowRaces17ApplyMenuSettingsEv @ 001a6538 (arm) */
void fn_001a6538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6538:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a653c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6540:;
    {
        cpu->r[14] = 0x001a6544u; fn_001a4764(cpu);
    }
L_001a6544:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001a6548:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001a654c:;
    {
        cpu->r[3] = 0x0000048au;
    }
L_001a6550:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001a6554:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6558u)) return;
    }
}

/* _ZN20GS_RankingsShowRacesC1Ev @ 001a6558 (arm) */
void fn_001a6558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6558:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a655c:;
    {
        cpu->r[5] = rd32(0x001a6564u + + 0x7cu);
    }
L_001a6560:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6564:;
    {
        cpu->r[14] = 0x001a6568u; fn_001a5590(cpu);
    }
L_001a6568:;
    {
        cpu->r[3] = rd32(0x001a6570u + + 0x74u);
    }
L_001a656c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a6574u, cpu->r[5], 0, 0);
    }
L_001a6570:;
    {
        cpu->r[1] = 0x000013e8u;
    }
L_001a6574:;
    {
        cpu->r[2] = rd32(0x001a657cu + + 0x6cu);
    }
L_001a6578:;
    {
        cpu->r[12] = 0x00000018u;
    }
L_001a657c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6580:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a6584:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a6588:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a658c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a6590:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a6594:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001a6598:;
    {
        cpu->r[1] = 0x000013e4u;
    }
L_001a659c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a65a0:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a65a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a65a8:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a65ac:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001a65b0:;
    {
        cpu->r[3] = 0x000013f0u;
    }
L_001a65b4:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_001a65b8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a65bc:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a65c0:;
    {
        cpu->r[2] = 0x0000000eu;
    }
L_001a65c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a65c8:;
    {
        cpu->r[3] = 0x000013f8u;
    }
L_001a65cc:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_001a65d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a65d4:;
    {
        cpu->r[3] = 0x00000065u;
    }
L_001a65d8:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a65dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a65e0u)) return;
    }
}

/* _ZN20GS_RankingsShowRacesC2Ev @ 001a65ec (arm) */
void fn_001a65ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a65ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a65f0:;
    {
        cpu->r[5] = rd32(0x001a65f8u + + 0x7cu);
    }
L_001a65f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a65f8:;
    {
        cpu->r[14] = 0x001a65fcu; fn_001a5590(cpu);
    }
L_001a65fc:;
    {
        cpu->r[3] = rd32(0x001a6604u + + 0x74u);
    }
L_001a6600:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a6608u, cpu->r[5], 0, 0);
    }
L_001a6604:;
    {
        cpu->r[1] = 0x000013e8u;
    }
L_001a6608:;
    {
        cpu->r[2] = rd32(0x001a6610u + + 0x6cu);
    }
L_001a660c:;
    {
        cpu->r[12] = 0x00000018u;
    }
L_001a6610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6614:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a6618:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001a661c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a6620:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a6624:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a6628:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001a662c:;
    {
        cpu->r[1] = 0x000013e4u;
    }
L_001a6630:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a6634:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a6638:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001a663c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_001a6640:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001a6644:;
    {
        cpu->r[3] = 0x000013f0u;
    }
L_001a6648:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_001a664c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a6650:;
    {
        cpu->r[3] = 0x000013f4u;
    }
L_001a6654:;
    {
        cpu->r[2] = 0x0000000eu;
    }
L_001a6658:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a665c:;
    {
        cpu->r[3] = 0x000013f8u;
    }
L_001a6660:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_001a6664:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a6668:;
    {
        cpu->r[3] = 0x00000065u;
    }
L_001a666c:;
    {
        wr32(cpu->r[4] + + 0x95cu, cpu->r[3]);
    }
L_001a6670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6674u)) return;
    }
}

/* _ZN20GS_RankingsShowRacesD0Ev @ 001a6680 (arm) */
void fn_001a6680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6680:;
    {
        cpu->r[3] = rd32(0x001a6688u + + 0x2cu);
    }
L_001a6684:;
    {
        cpu->r[2] = rd32(0x001a668cu + + 0x2cu);
    }
L_001a6688:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6690u, cpu->r[3], 0, 0);
    }
L_001a668c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a6690:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a6694:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6698:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a669c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a66a0:;
    {
        cpu->r[14] = 0x001a66a4u; fn_000ec21c(cpu);
    }
L_001a66a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a66a8:;
    {
        cpu->r[14] = 0x001a66acu; fn_0018ba20(cpu);
    }
L_001a66ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a66b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a66b4u)) return;
    }
}

/* init_array_69 @ 001a66bc (arm) */
void fn_001a66bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a66bc:;
    {
        cpu->r[3] = rd32(0x001a66c4u + + 0x20u);
    }
L_001a66c0:;
    {
        cpu->r[1] = rd32(0x001a66c8u + + 0x20u);
    }
L_001a66c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a66ccu, cpu->r[3], 0, 0);
    }
L_001a66c8:;
    {
        cpu->r[2] = rd32(0x001a66d0u + + 0x1cu);
    }
L_001a66cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a66d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a66d8u, cpu->r[2], 0, 0);
    }
L_001a66d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001a66d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_001a66dc:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001a66e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN21GS_RankingsShowPointsD1Ev @ 001a66f0 (arm) */
void fn_001a66f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a66f0:;
    {
        cpu->r[3] = rd32(0x001a66f8u + + 0x24u);
    }
L_001a66f4:;
    {
        cpu->r[2] = rd32(0x001a66fcu + + 0x24u);
    }
L_001a66f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6700u, cpu->r[3], 0, 0);
    }
L_001a66fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a6700:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a6704:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6708:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a670c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a6710:;
    {
        cpu->r[14] = 0x001a6714u; fn_000ec21c(cpu);
    }
L_001a6714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6718:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a671cu)) return;
    }
}

/* _ZN21GS_RankingsShowPoints17ApplyMenuSettingsEv @ 001a6724 (arm) */
void fn_001a6724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6724:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a6728:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a672c:;
    {
        cpu->r[14] = 0x001a6730u; fn_001a4764(cpu);
    }
L_001a6730:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001a6734:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001a6738:;
    {
        cpu->r[3] = 0x00000489u;
    }
L_001a673c:;
    {
        wr32(cpu->r[4] + + 0x8e0u, cpu->r[3]);
    }
L_001a6740:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6744u)) return;
    }
}

/* _ZN21GS_RankingsShowPointsC1Ev @ 001a6744 (arm) */
void fn_001a6744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6744:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a6748:;
    {
        cpu->r[5] = rd32(0x001a6750u + + 0x40u);
    }
L_001a674c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6750:;
    {
        cpu->r[14] = 0x001a6754u; fn_001a5590(cpu);
    }
L_001a6754:;
    {
        cpu->r[3] = rd32(0x001a675cu + + 0x38u);
    }
L_001a6758:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a6760u, cpu->r[5], 0, 0);
    }
L_001a675c:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a6760:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a6764:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6768:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a676c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001a6770:;
    {
        cpu->r[1] = 0x000013e8u;
    }
L_001a6774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a6778:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a677c:;
    {
        cpu->r[3] = 0x000013e4u;
    }
L_001a6780:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001a6784:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001a6788:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a678c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6790u)) return;
    }
}

/* _ZN21GS_RankingsShowPointsC2Ev @ 001a6798 (arm) */
void fn_001a6798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6798:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001a679c:;
    {
        cpu->r[5] = rd32(0x001a67a4u + + 0x40u);
    }
L_001a67a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a67a4:;
    {
        cpu->r[14] = 0x001a67a8u; fn_001a5590(cpu);
    }
L_001a67a8:;
    {
        cpu->r[3] = rd32(0x001a67b0u + + 0x38u);
    }
L_001a67ac:;
    {
        cpu->r[5] = add_flags(cpu, 0x001a67b4u, cpu->r[5], 0, 0);
    }
L_001a67b0:;
    {
        cpu->r[1] = 0x000013ecu;
    }
L_001a67b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001a67b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a67bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001a67c0:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001a67c4:;
    {
        cpu->r[1] = 0x000013e8u;
    }
L_001a67c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001a67cc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001a67d0:;
    {
        cpu->r[3] = 0x000013e4u;
    }
L_001a67d4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001a67d8:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001a67dc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001a67e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a67e4u)) return;
    }
}

/* _ZN21GS_RankingsShowPointsD0Ev @ 001a67ec (arm) */
void fn_001a67ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a67ec:;
    {
        cpu->r[3] = rd32(0x001a67f4u + + 0x2cu);
    }
L_001a67f0:;
    {
        cpu->r[2] = rd32(0x001a67f8u + + 0x2cu);
    }
L_001a67f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a67fcu, cpu->r[3], 0, 0);
    }
L_001a67f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a67fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a6800:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a6804:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a6808:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001a680c:;
    {
        cpu->r[14] = 0x001a6810u; fn_000ec21c(cpu);
    }
L_001a6810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6814:;
    {
        cpu->r[14] = 0x001a6818u; fn_0018ba20(cpu);
    }
L_001a6818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a681c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6820u)) return;
    }
}

/* _ZN19OnlineKeyboardInputD2Ev @ 001a6828 (arm) */
void fn_001a6828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6828:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInputD1Ev @ 001a682c (arm) */
void fn_001a682c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a682c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput16mySetOrientationEiiiii @ 001a6830 (arm) */
void fn_001a6830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6830:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput6EnableEv @ 001a6834 (arm) */
void fn_001a6834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6834:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput7DisableEv @ 001a6838 (arm) */
void fn_001a6838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6838:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput6RemoveEv @ 001a683c (arm) */
void fn_001a683c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a683c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput6IsShowEv @ 001a6840 (arm) */
void fn_001a6840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6840:;
    {
        cpu->r[3] = rd32(0x001a6848u + + 0x24u);
    }
L_001a6844:;
    {
        cpu->r[2] = rd32(0x001a684cu + + 0x24u);
    }
L_001a6848:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6850u, cpu->r[3], 0, 0);
    }
L_001a684c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a6850:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001a6854:;
    {
        cpu->r[3] = 0x000067b4u;
    }
L_001a6858:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001a685c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a6860:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a6864:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd8(cpu->r[0] + + 0xcu);
        }
    }
L_001a6868:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput11IsNumberKeyEv @ 001a6874 (arm) */
void fn_001a6874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6874:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a6878:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput13IsPointInsideER10position2d @ 001a687c (arm) */
void fn_001a687c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a687c:;
    {
        cpu->r[2] = 0x00001158u;
    }
L_001a6880:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_001a6884:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_001a6888:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a688c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a68cc;
        }
    }
L_001a6890:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001a6894:;
    {
        cpu->r[1] = 0x0000115au;
    }
L_001a6898:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a689c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a68a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a68cc;
        }
    }
L_001a68a4:;
    {
        cpu->r[1] = 0x0000115cu;
    }
L_001a68a8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_001a68ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001a68b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a68cc;
        }
    }
L_001a68b4:;
    {
        cpu->r[3] = 0x0000115eu;
    }
L_001a68b8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a68bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001a68c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001a68c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001a68c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001a68cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001a68d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput8SetUpperEb @ 001a68d4 (arm) */
void fn_001a68d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a68d4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a68d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a68dc:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001a68e0:;
    {
        cpu->r[2] = 0x00001148u;
    }
L_001a68e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001a68e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001a68ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a68f0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001a68f4:;
    {
        wr8(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_001a68f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_001a68fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a6900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a68f4;
        }
    }
L_001a6904:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput12SetNumberKeyEb @ 001a6908 (arm) */
void fn_001a6908(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6908:;
    {
        cpu->r[3] = 0x00001160u;
    }
L_001a690c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001a6910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a6914:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + + 0xdu, cpu->r[1]);
        }
    }
L_001a6918:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a691c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + + 0xdu, cpu->r[3]);
        }
    }
L_001a6920:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput14touchCancelledERK10position2dl @ 001a6924 (arm) */
void fn_001a6924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6924:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput13AnimationShowEb @ 001a6928 (arm) */
void fn_001a6928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6928:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001a692c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a6930:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001a6934:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
        }
    }
L_001a6938:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
        }
    }
L_001a693c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
        }
    }
L_001a6940:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15OnlineKeyButton10CheckTouchE10position2d @ 001a6944 (arm) */
void fn_001a6944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6944:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_001a6948:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_001a694c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001a6950:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001a6964;
        }
    }
L_001a6954:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x2u);
    }
L_001a6958:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x2u);
    }
L_001a695c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001a6960:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001a6970;
        }
    }
L_001a6964:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a6968:;
    {
        wr8(cpu->r[0] + + 0x26u, cpu->r[3]);
    }
L_001a696c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001a6970:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x4u);
    }
L_001a6974:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001a6978:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001a6964;
        }
    }
L_001a697c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x6u);
    }
L_001a6980:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a6984:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a6988:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001a698c:;
    {
        wr8(cpu->r[0] + + 0x26u, cpu->r[3]);
    }
L_001a6990:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput10touchMovedERK10position2dl @ 001a6994 (arm) */
void fn_001a6994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6994:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a6998:;
    {
        cpu->r[2] = 0x00001148u;
    }
L_001a699c:;
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
L_001a69a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a69a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000114cu;
        }
    }
L_001a69a8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001a69ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
        }
    }
L_001a69b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000008b0u, 0, 0);
        }
    }
L_001a69b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_001a69b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a69bc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001a69c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a69c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001a69c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6a08;
        }
    }
L_001a69cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001a69d0:;
    {
        cpu->r[10] = 0x00001150u;
    }
L_001a69d4:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_001a69d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a69dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001a69e0:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001a69e4:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
    }
L_001a69e8:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_001a69ec:;
    {
        cpu->r[14] = 0x001a69f0u; fn_001a6944(cpu);
    }
L_001a69f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x26u);
    }
L_001a69f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a69f8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[4]);
        }
    }
L_001a69fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a6a00:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001a6a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a69d4;
        }
    }
L_001a6a08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a6a0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6a10u)) return;
    }
}

/* _ZN19OnlineKeyboardInput10touchBeganERK10position2dl @ 001a6a10 (arm) */
void fn_001a6a10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6a10:;
    {
        cpu->r[3] = 0x00001150u;
    }
L_001a6a14:;
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
L_001a6a18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a6a1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001a6a20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a6a24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a6a28:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001a6a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6a38;
        }
    }
L_001a6a30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001a6a34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6a38u)) return;
    }
L_001a6a38:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xdu);
    }
L_001a6a3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a6a40:;
    {
        cpu->r[3] = 0x00001148u;
    }
L_001a6a44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
        }
    }
L_001a6a48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000008b0u, 0, 0);
        }
    }
L_001a6a4c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001a6a50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000114cu;
        }
    }
L_001a6a54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_001a6a58:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001a6a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6a30;
        }
    }
L_001a6a60:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001a6a64:;
    {
        cpu->r[10] = 0x00001150u;
    }
L_001a6a68:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_001a6a6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6a70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001a6a74:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001a6a78:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
    }
L_001a6a7c:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_001a6a80:;
    {
        cpu->r[14] = 0x001a6a84u; fn_001a6944(cpu);
    }
L_001a6a84:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x26u);
    }
L_001a6a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a6a8c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + cpu->r[10], cpu->r[4]);
        }
    }
L_001a6a90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a6a94:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001a6a98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6a68;
        }
    }
L_001a6a9c:;
    {
        goto L_001a6a30;
    }
}

/* _ZN15OnlineKeyButton9SetButtonEiiiiiii @ 001a6aa0 (arm) */
void fn_001a6aa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6aa0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001a6aa4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001a6aa8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001a6aac:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001a6ab0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000005u, 0, 0);
    }
L_001a6ab4:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001a6ab8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001a6abc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001a6ac0:;
    {
        wr16(cpu->r[0], cpu->r[5]);
    }
L_001a6ac4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001a6ac8:;
    {
        wr16(cpu->r[0] + + 0x6u, cpu->r[1]);
    }
L_001a6acc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6ad0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001a6ad4:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_001a6ad8:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[12]);
    }
L_001a6adc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001a6ae0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6ae4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001a6ae8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001a6aec:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_001a6af0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001a6af4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInput18InitKeyboardNumberEv @ 001a6af8 (arm) */
void fn_001a6af8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6af8:;
    {
        cpu->r[3] = rd32(0x001a6b00u + + 0x2f0u);
    }
L_001a6afc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a6b00:;
    {
        cpu->r[1] = rd32(0x001a6b08u + + 0x2ecu);
    }
L_001a6b04:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001a6b08:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6b10u, cpu->r[3], 0, 0);
    }
L_001a6b0c:;
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
L_001a6b10:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a6b14:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a6b18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001a6b1c:;
    {
        cpu->r[10] = rd32(0x001a6b24u + + 0x2d4u);
    }
L_001a6b20:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x000008b0u, 0, 0);
    }
L_001a6b24:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a6b28:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001a6b2c:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a6b30:;
    {
        cpu->r[3] = 0x000067bcu;
    }
L_001a6b34:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001a6b38:;
    {
        cpu->r[10] = add_flags(cpu, 0x001a6b40u, cpu->r[10], 0, 0);
    }
L_001a6b3c:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_001a6b40:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_001a6b44:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x14u);
    }
L_001a6b48:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001a6b4c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a6b50:;
    {
        cpu->r[9] = 0x0000004eu;
    }
L_001a6b54:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001eu, 0, 0);
    }
L_001a6b58:;
    {
        goto L_001a6b70;
    }
L_001a6b5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a6b60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001a6b64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a6b68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000003u;
        }
    }
L_001a6b6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001a6b70:;
    {
        cpu->r[1] = rd8(cpu->r[10] + cpu->r[4]);
    }
L_001a6b74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6b78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a6b7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001a6b80:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6b84:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6b88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a6b8c:;
    {
        cpu->r[12] = 0x0000003cu;
    }
L_001a6b90:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a6b94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004du, 0, 0);
    }
L_001a6b98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001a6b9c:;
    {
        cpu->r[14] = 0x001a6ba0u; fn_001a6aa0(cpu);
    }
L_001a6ba0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_001a6ba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a6ba8:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
    }
L_001a6bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6b5c;
        }
    }
L_001a6bb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6bb4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000001b8u, 0, 0);
    }
L_001a6bb8:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a6bbc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001a6bc0:;
    {
        cpu->r[11] = rd32(0x001a6bc8u + + 0x234u);
    }
L_001a6bc4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a6bc8:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_001a6bcc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a6bd0:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a6bd4:;
    {
        cpu->r[11] = add_flags(cpu, 0x001a6bdcu, cpu->r[11], 0, 0);
    }
L_001a6bd8:;
    {
        cpu->r[9] = 0x0000003cu;
    }
L_001a6bdc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6be0:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a6be4:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a6be8:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_001a6bec:;
    {
        goto L_001a6c04;
    }
L_001a6bf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a6bf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001a6bf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a6bfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000003u;
        }
    }
L_001a6c00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001a6c04:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[4]);
    }
L_001a6c08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6c0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a6c10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001a6c14:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6c18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6c1c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a6c20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004du, 0, 0);
    }
L_001a6c24:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001a6c28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a6c2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001a6c30:;
    {
        cpu->r[14] = 0x001a6c34u; fn_001a6aa0(cpu);
    }
L_001a6c34:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_001a6c38:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
    }
L_001a6c3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6bf0;
        }
    }
L_001a6c40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6c44:;
    {
        cpu->r[4] = 0x00001158u;
    }
L_001a6c48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6c4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a6c50:;
    {
        cpu->r[12] = 0x00000060u;
    }
L_001a6c54:;
    {
        cpu->r[8] = 0x0000003bu;
    }
L_001a6c58:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[4]);
    }
L_001a6c5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x000001b8u, 0, 0);
    }
L_001a6c60:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a6c64:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6c68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000288u, 0, 0);
    }
L_001a6c6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a6c70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001a6c74:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001a6c78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a6c7c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a6c80:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6c84:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_001a6c88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6c8c:;
    {
        cpu->r[14] = 0x001a6c90u; fn_001a6aa0(cpu);
    }
L_001a6c90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6c94:;
    {
        cpu->r[14] = 0x00000008u;
    }
L_001a6c98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6c9c:;
    {
        cpu->r[11] = 0x00000072u;
    }
L_001a6ca0:;
    {
        cpu->r[9] = rd32(0x001a6ca8u + + 0x158u);
    }
L_001a6ca4:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[4]);
    }
L_001a6ca8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000001e4u, 0, 0);
    }
L_001a6cac:;
    {
        cpu->r[9] = add_flags(cpu, 0x001a6cb4u, cpu->r[9], 0, 0);
    }
L_001a6cb0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a6cb4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000004au, 0, 0);
    }
L_001a6cb8:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a6cbc:;
    {
        cpu->r[12] = 0x00000009u;
    }
L_001a6cc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001a6cc4:;
    {
        cpu->r[1] = rd8(cpu->r[9] + cpu->r[4]);
    }
L_001a6cc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6ccc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a6cd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001a6cd4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6cd8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6cdc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a6ce0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000071u, 0, 0);
    }
L_001a6ce4:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001a6ce8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a6cec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a6cf0:;
    {
        cpu->r[14] = 0x001a6cf4u; fn_001a6aa0(cpu);
    }
L_001a6cf4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000005u, 1, 1);
    }
L_001a6cf8:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
    }
L_001a6cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a6d18;
        }
    }
L_001a6d00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a6d04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x0000000bu;
        }
    }
L_001a6d08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000009u;
        }
    }
L_001a6d0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x0000000au;
        }
    }
L_001a6d10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000008u;
        }
    }
L_001a6d14:;
    {
        goto L_001a6cc4;
    }
L_001a6d18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6d1c:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a6d20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6d24:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a6d28:;
    {
        cpu->r[6] = 0x00000096u;
    }
L_001a6d2c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[3]);
    }
L_001a6d30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x000000dcu, 0, 0);
    }
L_001a6d34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a6d38:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a6d3c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6d40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000097u, 0, 0);
    }
L_001a6d44:;
    {
        cpu->r[12] = 0x00000014u;
    }
L_001a6d48:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a6d4c:;
    {
        cpu->r[12] = 0x00000013u;
    }
L_001a6d50:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a6d54:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6d58:;
    {
        cpu->r[14] = 0x001a6d5cu; fn_001a6aa0(cpu);
    }
L_001a6d5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6d60:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001a6d64:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6d68:;
    {
        cpu->r[12] = 0x00000061u;
    }
L_001a6d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000108u, 0, 0);
    }
L_001a6d70:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001a6d74:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_001a6d78:;
    {
        cpu->r[12] = 0x00000062u;
    }
L_001a6d7c:;
    {
        wr8(cpu->r[4] + + 0x1du, cpu->r[12]);
    }
L_001a6d80:;
    {
        cpu->r[12] = 0x00000063u;
    }
L_001a6d84:;
    {
        wr8(cpu->r[4] + + 0x1eu, cpu->r[12]);
    }
L_001a6d88:;
    {
        cpu->r[12] = 0x000001a4u;
    }
L_001a6d8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001a6d90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a6d94:;
    {
        cpu->r[12] = 0x0000000fu;
    }
L_001a6d98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6d9c:;
    {
        cpu->r[12] = 0x0000000eu;
    }
L_001a6da0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6da4:;
    {
        cpu->r[14] = 0x001a6da8u; fn_001a6aa0(cpu);
    }
L_001a6da8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6dac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000001a4u, 0, 0);
    }
L_001a6db0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6db4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a6db8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000134u, 0, 0);
    }
L_001a6dbc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001a6dc0:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_001a6dc4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a6dc8:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_001a6dcc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6dd0:;
    {
        cpu->r[14] = 0x001a6dd4u; fn_001a6aa0(cpu);
    }
L_001a6dd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6dd8:;
    {
        cpu->r[3] = 0x0000114cu;
    }
L_001a6ddc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6de0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000160u, 0, 0);
    }
L_001a6de4:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_001a6de8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a6dec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a6df0u)) return;
    }
}

/* _ZN19OnlineKeyboardInput12InitKeyboardEv @ 001a6e04 (arm) */
void fn_001a6e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a6e04:;
    {
        cpu->r[3] = rd32(0x001a6e0cu + + 0x340u);
    }
L_001a6e08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a6e0c:;
    {
        cpu->r[1] = rd32(0x001a6e14u + + 0x33cu);
    }
L_001a6e10:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001a6e14:;
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
L_001a6e18:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a6e20u, cpu->r[3], 0, 0);
    }
L_001a6e1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001a6e20:;
    {
        cpu->r[10] = rd32(0x001a6e28u + + 0x32cu);
    }
L_001a6e24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001a6e28:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a6e2c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001a6e30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_001a6e34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6e38:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001a6e3c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001a6e40:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001a6e44:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001a6e48:;
    {
        cpu->r[10] = add_flags(cpu, 0x001a6e50u, cpu->r[10], 0, 0);
    }
L_001a6e4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6e50:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001a6e54:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[14] + cpu->r[3]);
    }
L_001a6e58:;
    {
        cpu->r[3] = 0x000067b8u;
    }
L_001a6e5c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a6e60:;
    {
        cpu->r[9] = 0x0000004eu;
    }
L_001a6e64:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_001a6e68:;
    {
        cpu->r[11] = 0x0000003cu;
    }
L_001a6e6c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x14u);
    }
L_001a6e70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000001eu, 0, 0);
    }
L_001a6e74:;
    {
        goto L_001a6e8c;
    }
L_001a6e78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a6e7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001a6e80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a6e84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000003u;
        }
    }
L_001a6e88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001a6e8c:;
    {
        cpu->r[1] = rd8(cpu->r[10] + cpu->r[4]);
    }
L_001a6e90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6e94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a6e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001a6e9c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6ea0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6ea4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a6ea8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004du, 0, 0);
    }
L_001a6eac:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001a6eb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a6eb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001a6eb8:;
    {
        cpu->r[14] = 0x001a6ebcu; fn_001a6aa0(cpu);
    }
L_001a6ebc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_001a6ec0:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
    }
L_001a6ec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6e78;
        }
    }
L_001a6ec8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6ecc:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a6ed0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6ed4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001a6ed8:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_001a6edc:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_001a6ee0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + cpu->r[3]);
    }
L_001a6ee4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001b8u, 0, 0);
    }
L_001a6ee8:;
    {
        cpu->r[2] = rd32(0x001a6ef0u + + 0x268u);
    }
L_001a6eec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a6ef0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001a6ef4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000025u, 0, 0);
    }
L_001a6ef8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001a6f00u, cpu->r[2], 0, 0);
    }
L_001a6efc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001a6f00:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001a6f04:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a6f08:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_001a6f0c:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001a6f10:;
    {
        goto L_001a6f28;
    }
L_001a6f14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a6f18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001a6f1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a6f20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000003u;
        }
    }
L_001a6f24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001a6f28:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[4]);
    }
L_001a6f2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a6f30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001a6f34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[5], 0, 0);
    }
L_001a6f38:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6f3c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6f40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a6f44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004du, 0, 0);
    }
L_001a6f48:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a6f4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a6f50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001a6f54:;
    {
        cpu->r[14] = 0x001a6f58u; fn_001a6aa0(cpu);
    }
L_001a6f58:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_001a6f5c:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[3] = v;
    }
L_001a6f60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a6f14;
        }
    }
L_001a6f64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6f68:;
    {
        cpu->r[4] = 0x00001158u;
    }
L_001a6f6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6f70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a6f74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a6f78:;
    {
        cpu->r[5] = 0x00000060u;
    }
L_001a6f7c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[14] + cpu->r[4]);
    }
L_001a6f80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000018cu, 0, 0);
    }
L_001a6f84:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6f88:;
    {
        cpu->r[6] = 0x0000003bu;
    }
L_001a6f8c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a6f90:;
    {
        cpu->r[12] = 0x00000006u;
    }
L_001a6f94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a6f98:;
    {
        cpu->r[12] = 0x00000007u;
    }
L_001a6f9c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6fa0:;
    {
        cpu->r[14] = 0x001a6fa4u; fn_001a6aa0(cpu);
    }
L_001a6fa4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6fa8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a6fac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6fb0:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001a6fb4:;
    {
        cpu->r[11] = rd32(0x001a6fbcu + + 0x1a0u);
    }
L_001a6fb8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[4]);
    }
L_001a6fbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x000001b8u, 0, 0);
    }
L_001a6fc0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001a6fc4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001a6fc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000288u, 0, 0);
    }
L_001a6fcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001a6fd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001a6fd4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a6fd8:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_001a6fdc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a6fe0:;
    {
        cpu->r[14] = 0x001a6fe4u; fn_001a6aa0(cpu);
    }
L_001a6fe4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a6fe8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a6fec:;
    {
        cpu->r[11] = add_flags(cpu, 0x001a6ff4u, cpu->r[11], 0, 0);
    }
L_001a6ff0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001a6ff4:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[2] + cpu->r[4]);
    }
L_001a6ff8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e4u, 0, 0);
    }
L_001a6ffc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001a7000:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001a7004:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000068u, 0, 0);
    }
L_001a7008:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001a700c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001a7010:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001a7014:;
    {
        goto L_001a702c;
    }
L_001a7018:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a701c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001a7020:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001a7024:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000003u;
        }
    }
L_001a7028:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001a702c:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[5]);
    }
L_001a7030:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001a7034:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001a7038:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_001a703c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a7040:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a7044:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001a7048:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000004du, 0, 0);
    }
L_001a704c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a7050:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000002cu, 0, 0);
    }
L_001a7054:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001a7058:;
    {
        cpu->r[14] = 0x001a705cu; fn_001a6aa0(cpu);
    }
L_001a705c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_001a7060:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[3] = v;
    }
L_001a7064:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7018;
        }
    }
L_001a7068:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a706c:;
    {
        cpu->r[3] = 0x00001158u;
    }
L_001a7070:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a7074:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000003cu, 0, 0);
    }
L_001a7078:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001a707c:;
    {
        cpu->r[4] = 0x0000003bu;
    }
L_001a7080:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001a7084:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], 0x00000134u, 0, 0);
    }
L_001a7088:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001a708c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a7090:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000097u, 0, 0);
    }
L_001a7094:;
    {
        cpu->r[8] = 0x00000096u;
    }
L_001a7098:;
    {
        cpu->r[12] = 0x00000014u;
    }
L_001a709c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001a70a0:;
    {
        cpu->r[12] = 0x00000013u;
    }
L_001a70a4:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a70a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a70ac:;
    {
        cpu->r[14] = 0x001a70b0u; fn_001a6aa0(cpu);
    }
L_001a70b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a70b4:;
    {
        cpu->r[12] = 0x00000031u;
    }
L_001a70b8:;
    {
        wr8(cpu->r[5] + + 0x1cu, cpu->r[12]);
    }
L_001a70bc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001a70c0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a70c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000160u, 0, 0);
    }
L_001a70c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a70cc:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_001a70d0:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_001a70d4:;
    {
        wr8(cpu->r[14] + + 0x151u, cpu->r[12]);
    }
L_001a70d8:;
    {
        cpu->r[12] = 0x00000033u;
    }
L_001a70dc:;
    {
        wr8(cpu->r[14] + + 0x152u, cpu->r[12]);
    }
L_001a70e0:;
    {
        cpu->r[12] = 0x000001a4u;
    }
L_001a70e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001a70e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001a70ec:;
    {
        cpu->r[12] = 0x0000000fu;
    }
L_001a70f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a70f4:;
    {
        cpu->r[12] = 0x0000000eu;
    }
L_001a70f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a70fc:;
    {
        cpu->r[14] = 0x001a7100u; fn_001a6aa0(cpu);
    }
L_001a7100:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a7104:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x000001a4u, 0, 0);
    }
L_001a7108:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001a710c:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_001a7110:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x0000018cu, 0, 0);
    }
L_001a7114:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001a7118:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001a711c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_001a7120:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001a7124:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001a7128:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001a712c:;
    {
        cpu->r[14] = 0x001a7130u; fn_001a6aa0(cpu);
    }
L_001a7130:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001a7134:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001a7138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000001b8u, 0, 0);
    }
L_001a713c:;
    {
        cpu->r[3] = 0x00001148u;
    }
L_001a7140:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_001a7144:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001a7148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a714cu)) return;
    }
}

/* _ZN19OnlineKeyboardInput6UpdateEv @ 001a7160 (arm) */
void fn_001a7160(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a7160:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_001a7164:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001a7168:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001a716c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001a7170:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7174u)) return;
        }
    }
L_001a7174:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001a7178:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001a717c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001a71b0;
        }
    }
L_001a7180:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001a7184:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001a7188u)) return;
        }
    }
L_001a7188:;
    {
        cpu->r[2] = 0x0000115eu;
    }
L_001a718c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001a7190:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_001a7194:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a7198:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001a719c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000032u, 0, 0);
        }
    }
L_001a71a0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
        }
    }
L_001a71a4:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
        }
    }
L_001a71a8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_001a71ac:;
    {
        goto L_001a71d4;
    }
L_001a71b0:;
    {
        cpu->r[2] = 0x0000115au;
    }
L_001a71b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001a71b8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_001a71bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001a71c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001a71c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
        }
    }
L_001a71c8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
        }
    }
L_001a71cc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
        }
    }
L_001a71d0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_001a71d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a71d8:;
    {
        cpu->r[14] = 0x001a71dcu; fn_001a6e04(cpu);
    }
L_001a71dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001a71e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001a71e4:;
    {
        return fn_001a6af8(cpu);
    }
}

/* _ZN15OnlineKeyButtonC1Ev @ 001a71e8 (arm) */
void fn_001a71e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a71e8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001a71ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001a71f0:;
    {
        wr16(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_001a71f4:;
    {
        wr8(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_001a71f8:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_001a71fc:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_001a7200:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001a7204:;
    {
        wr16(cpu->r[0] + + 0x6u, cpu->r[2]);
    }
L_001a7208:;
    {
        wr8(cpu->r[3] + + 0x26u, cpu->r[2]);
    }
L_001a720c:;
    {
        wr8(cpu->r[3] + + 0x27u, cpu->r[2]);
    }
L_001a7210:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001a7214:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_001a7218:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19OnlineKeyboardInputC1Ev @ 001a721c (arm) */
void fn_001a721c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001a721c:;
    {
        cpu->r[3] = rd32(0x001a7224u + + 0x9cu);
    }
L_001a7220:;
    {
        cpu->r[2] = rd32(0x001a7228u + + 0x9cu);
    }
L_001a7224:;
    {
        cpu->r[3] = add_flags(cpu, 0x001a722cu, cpu->r[3], 0, 0);
    }
L_001a7228:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001a722c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001a7230:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001a7234:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001a7238:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001a723c:;
    {
        cpu->r[6] = 0x00000898u;
    }
L_001a7240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001a7244:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_001a7248:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001a724c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a7250:;
    {
        cpu->r[14] = 0x001a7254u; fn_001a71e8(cpu);
    }
L_001a7254:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001a7258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7248;
        }
    }
L_001a725c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x000008b0u, 0, 0);
    }
L_001a7260:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001a7264:;
    {
        cpu->r[5] = 0x00000898u;
    }
L_001a7268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001a726c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_001a7270:;
    {
        cpu->r[14] = 0x001a7274u; fn_001a71e8(cpu);
    }
L_001a7274:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001a7278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001a7268;
        }
    }
L_001a727c:;
    {
        cpu->r[2] = 0x00001150u;
    }
L_001a7280:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001a7284:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001a7288:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a728c:;
    {
        cpu->r[2] = 0x00001158u;
    }
L_001a7290:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a7294:;
    {
        cpu->r[2] = 0x00001160u;
    }
L_001a7298:;
    {
        wr8(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a729c:;
    {
        cpu->r[2] = 0x0000115au;
    }
L_001a72a0:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a72a4:;
    {
        cpu->r[2] = 0x0000115cu;
    }
L_001a72a8:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a72ac:;
    {
        cpu->r[2] = 0x0000115eu;
    }
L_001a72b0:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a72b4:;
    {
        cpu->r[2] = 0x00001154u;
    }
L_001a72b8:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001a72bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001a72c0u)) return;
    }
}
