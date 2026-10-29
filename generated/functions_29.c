#include "functions.h"

/* _ZN5Scene19MP_UpdateAfterFrameEv @ 000c116c (arm) */
void fn_000c116c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c116c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000c1170:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c1174:;
    {
        cpu->r[14] = 0x000c1178u; fn_000bd364(cpu);
    }
L_000c1178:;
    {
        cpu->r[4] = rd32(0x000c1180u + + 0x78u);
    }
L_000c117c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c1180:;
    {
        cpu->r[14] = 0x000c1184u; fn_000c0da4(cpu);
    }
L_000c1184:;
    {
        cpu->r[3] = rd32(0x000c118cu + + 0x70u);
    }
L_000c1188:;
    {
        cpu->r[4] = add_flags(cpu, 0x000c1190u, cpu->r[4], 0, 0);
    }
L_000c118c:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000c1190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c1194:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1198:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c119c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c11a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c11a4u)) return;
        }
    }
L_000c11a4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x316u);
    }
L_000c11a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c11ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c11b0u)) return;
        }
    }
L_000c11b0:;
    {
        cpu->r[2] = 0x0000672du;
    }
L_000c11b4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c11b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c11bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c11c0u)) return;
        }
    }
L_000c11c0:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000c11c4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c11c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c11cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c11d0u)) return;
        }
    }
L_000c11d0:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c11d4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c11d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c11dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c11ec;
        }
    }
L_000c11e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c11e4:;
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
L_000c11e8:;
    {
        return fn_000ba168(cpu);
    }
L_000c11ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c11f0:;
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
L_000c11f4:;
    {
        return fn_000bc6d8(cpu);
    }
}

/* _ZN5Scene25MP_HandleIncomingMessagesEv @ 000c1200 (arm) */
void fn_000c1200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c1200:;
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
L_000c1204:;
    {
        cpu->r[5] = rd32(0x000c120cu + + 0x9acu);
    }
L_000c1208:;
    {
        cpu->r[6] = rd32(0x000c1210u + + 0x9acu);
    }
L_000c120c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000c1210:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c1218u, cpu->r[5], 0, 0);
    }
L_000c1214:;
    {
        cpu->r[2] = rd32(0x000c121cu + + 0x9a4u);
    }
L_000c1218:;
    {
        cpu->r[1] = rd32(0x000c1220u + + 0x9a4u);
    }
L_000c121c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c1220:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1224:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c122cu, cpu->r[2], 0, 0);
    }
L_000c1228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001a4u, 0, 0);
    }
L_000c122c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000c1230:;
    {
        cpu->r[2] = rd32(0x000c1238u + + 0x990u);
    }
L_000c1234:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000c1238:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c123c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000002fu, 0, 0);
    }
L_000c1240:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c1248u, cpu->r[1], 0, 0);
    }
L_000c1244:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c124cu, cpu->r[2], 0, 0);
    }
L_000c1248:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001a4u, 0, 0);
    }
L_000c124c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001a4u, 0, 0);
    }
L_000c1250:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000c1254:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000c1258:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000c125c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c1260:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c1264:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000c1268:;
    {
        cpu->r[14] = 0x000c126cu; fn_001b2ac8(cpu);
    }
L_000c126c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1340;
        }
    }
L_000c1274:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1278:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x2fu);
    }
L_000c127c:;
    {
        cpu->r[9] = rd32(cpu->r[3]);
    }
L_000c1280:;
    {
        cpu->r[14] = 0x000c1284u; fn_0009b4d0(cpu);
    }
L_000c1284:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000017c0u, 0, 0);
    }
L_000c1288:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000001cu, 0, 0);
    }
L_000c128c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_000c1290:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[0]);
    }
L_000c1294:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_000c1298:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_000c129c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000015u, 1, 1);
    }
L_000c12a0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000c152c;
        case 1: goto L_000c1300;
        case 2: goto L_000c148c;
        case 3: goto L_000c131c;
        case 4: goto L_000c131c;
        case 5: goto L_000c131c;
        case 6: goto L_000c131c;
        case 7: goto L_000c1680;
        case 8: goto L_000c131c;
        case 9: goto L_000c131c;
        case 10: goto L_000c131c;
        case 11: goto L_000c131c;
        case 12: goto L_000c131c;
        case 13: goto L_000c1764;
        case 14: goto L_000c131c;
        case 15: goto L_000c1420;
        case 16: goto L_000c131c;
        case 17: goto L_000c13a4;
        case 18: goto L_000c131c;
        case 19: goto L_000c1348;
        case 20: goto L_000c15dc;
        case 21: goto L_000c1448;
        default: guest_unimplemented(cpu, 0x000c12a0u); return; }
        }
    }
L_000c12a4:;
    {
        goto L_000c131c;
    }
L_000c1300:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c1304:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000c1308:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c130c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1310:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1848;
        }
    }
L_000c131c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1320:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000c1324:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c1328:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c132c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1330:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000c1334:;
    {
        cpu->r[14] = 0x000c1338u; fn_001b2ac8(cpu);
    }
L_000c1338:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c133c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1274;
        }
    }
L_000c1340:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c1344:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1348u)) return;
    }
L_000c1348:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c134c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1350:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1354:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000c1358:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c135c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c131c;
        }
    }
L_000c1364:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x4u);
    }
L_000c1368:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c136c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x3u);
    }
L_000c1370:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5u);
    }
L_000c1374:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c1378:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 16u, &shc); cpu->r[1] = v;
    }
L_000c137c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_000c1380:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x6u);
    }
L_000c1384:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000c1388:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 24u, &shc), 0, 0);
    }
L_000c138c:;
    {
        cpu->r[14] = 0x000c1390u; fn_000bcf10(cpu);
    }
L_000c1390:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1394:;
    {
        cpu->r[14] = 0x000c1398u; fn_000bcf58(cpu);
    }
L_000c1398:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c139c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c13a0:;
    {
        goto L_000c1258;
    }
L_000c13a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5u);
    }
L_000c13a8:;
    {
        cpu->r[9] = 0x000042d0u;
    }
L_000c13ac:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000c13b0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c13b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000c13b8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c13bc:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c13c0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c13c4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c13c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000c13cc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8u);
    }
L_000c13d0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x3u);
    }
L_000c13d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c13d8:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x4u);
    }
L_000c13dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x418u);
    }
L_000c13e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1258;
        }
    }
L_000c13e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c13e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c13ec:;
    {
        cpu->r[14] = 0x000c13f0u; fn_00186cf0(cpu);
    }
L_000c13f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c13f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c13f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c13fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_000c1400:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c1404:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c1408:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_000c140c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_000c1410:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4]; cpu->r[2] = v;
    }
L_000c1414:;
    {
        cpu->r[14] = 0x000c1418u; fn_00186cc4(cpu);
    }
L_000c1418:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c141c:;
    {
        goto L_000c1258;
    }
L_000c1420:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c1424:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1428:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c142c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1430:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000c1434:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000c1438:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000c143c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c1440:;
    {
        wr8(cpu->r[2] + + 0x316u, cpu->r[1]);
    }
L_000c1444:;
    {
        goto L_000c1258;
    }
L_000c1448:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c144c:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c1450:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1454:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1458:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c145c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c131c;
        }
    }
L_000c1464:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c1468:;
    {
        cpu->r[0] = 0x00005f68u;
    }
L_000c146c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000c1470:;
    {
        wr32(cpu->r[3] + cpu->r[0], cpu->r[2]);
    }
L_000c1474:;
    {
        cpu->r[0] = rd32(0x000c147cu + + 0x750u);
    }
L_000c1478:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c1480u, cpu->r[0], 0, 0);
    }
L_000c147c:;
    {
        cpu->r[14] = 0x000c1480u; fn_001d0ac4(cpu);
    }
L_000c1480:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1484:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1488:;
    {
        goto L_000c1258;
    }
L_000c148c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1490:;
    {
        cpu->r[12] = 0x00005f58u;
    }
L_000c1494:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000c1498:;
    {
        cpu->r[9] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_000c149c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000c14a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c14c0;
        }
    }
L_000c14a4:;
    {
        cpu->r[11] = 0x00001c90u;
    }
L_000c14a8:;
    {
        cpu->r[1] = 0x00006737u;
    }
L_000c14ac:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c14b0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000c14b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c14b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c14bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1a34;
        }
    }
L_000c14c0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000c14c4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c14c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[13] + + 0x2fu);
        }
    }
L_000c14cc:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[2] = v;
    }
L_000c14d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000019c0u, 0, 0);
        }
    }
L_000c14d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
        }
    }
L_000c14d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c14dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
        }
    }
L_000c14e0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c14e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c14e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c14ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c14f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c14f4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c131c;
        }
    }
L_000c14f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000c14fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c1500:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c1504:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c1508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c150c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c131c;
        }
    }
L_000c1510:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000c1514:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1518:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x2fu);
    }
L_000c151c:;
    {
        cpu->r[14] = 0x000c1520u; fn_000bc17c(cpu);
    }
L_000c1520:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1524:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1528:;
    {
        goto L_000c1258;
    }
L_000c152c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c1530:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1534:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1538:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000c153c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1540:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c131c;
        }
    }
L_000c1548:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c154c:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c1550:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c1554:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000c1558:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[4] = v;
    }
L_000c155c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1560:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c19f4;
        }
    }
L_000c1568:;
    {
        cpu->r[0] = rd32(0x000c1570u + + 0x660u);
    }
L_000c156c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000c1570:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1574:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c157cu, cpu->r[0], 0, 0);
    }
L_000c1578:;
    {
        cpu->r[14] = 0x000c157cu; fn_001d0ac4(cpu);
    }
L_000c157c:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000c1580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c15a0;
        }
    }
L_000c1584:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c1588:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c158c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1590:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000c1594:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c1598:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c159c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c1a20;
        }
    }
L_000c15a0:;
    {
        cpu->r[3] = 0x0000389eu;
    }
L_000c15a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c15a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c15ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c15b0:;
    {
        cpu->r[1] = rd32(0x000c15b8u + + 0x61cu);
    }
L_000c15b4:;
    {
        cpu->r[2] = rd32(0x000c15bcu + + 0x61cu);
    }
L_000c15b8:;
    {
        cpu->r[3] = rd32(0x000c15c0u + + 0x61cu);
    }
L_000c15bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c15c4u, cpu->r[1], 0, 0);
    }
L_000c15c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c15c8u, cpu->r[2], 0, 0);
    }
L_000c15c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c15c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c15d0u, cpu->r[3], 0, 0);
    }
L_000c15cc:;
    {
        cpu->r[14] = 0x000c15d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c15d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c15d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c15d8:;
    {
        goto L_000c1258;
    }
L_000c15dc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c15e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c15e4:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c15e8:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000c15ec:;
    {
        cpu->r[2] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_000c15f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c15f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c131c;
        }
    }
L_000c15f8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c15fc:;
    {
        cpu->r[3] = 0x000063c4u;
    }
L_000c1600:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c1604:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
        }
    }
L_000c1608:;
    {
        wr32(cpu->r[9] + cpu->r[3], cpu->r[1]);
    }
L_000c160c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_000c1610:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c131c;
        }
    }
L_000c1614:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c1618:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000c161c:;
    {
        cpu->r[14] = rd8(cpu->r[4] + + 0x5u);
    }
L_000c1620:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_000c1624:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c1628:;
    {
        cpu->r[5] = rd8(cpu->r[4] + + 0x4u);
    }
L_000c162c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_000c1630:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x6u);
    }
L_000c1634:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x3u);
    }
L_000c1638:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 16u, &shc); cpu->r[14] = v;
    }
L_000c163c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000c1640:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[5], 2, 8u, &shc), 0, 0);
    }
L_000c1644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000018c0u, 0, 0);
    }
L_000c1648:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_000c164c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000c1650:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000032u, 0, 0);
    }
L_000c1654:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 24u, &shc), 0, 0);
    }
L_000c1658:;
    {
        cpu->r[1] = 0x00001740u;
    }
L_000c165c:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[14]);
    }
L_000c1660:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000005u, 0, 0);
    }
L_000c1664:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c1668:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[3]);
    }
L_000c166c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c1614;
        }
    }
L_000c1670:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c1674:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1678:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c167c:;
    {
        goto L_000c1258;
    }
L_000c1680:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1684:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c1688:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c168c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c1690:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c18b8;
        }
    }
L_000c1698:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c169c:;
    {
        cpu->r[11] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c16a0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c16a4:;
    {
        uint32_t v = cpu->r[11] & 0x0000000fu; cpu->r[11] = v;
    }
L_000c16a8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_000c16ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x000019c0u, 0, 0);
    }
L_000c16b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000c16b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c16b8:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c16bc:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_000c16c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c16e0;
        }
    }
L_000c16c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00006300u, 0, 0);
    }
L_000c16c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c16cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c16d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c16d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c16d8:;
    {
        cpu->r[3] = 0x00001cedu;
    }
L_000c16dc:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000c16e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c16e4:;
    {
        cpu->r[14] = 0x000c16e8u; fn_000ba368(cpu);
    }
L_000c16e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c16ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1b68;
        }
    }
L_000c16f0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c16f4:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000c16f8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c16fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c1700:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1704:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c1708:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c170c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1710:;
    {
        cpu->r[14] = 0x000c1718u;
    }
L_000c1714:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1718u)) return;
    }
L_000c1718:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c171c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c1720:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c1724:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c1728:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c172c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1730:;
    {
        cpu->r[14] = 0x000c1738u;
    }
L_000c1734:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1738u)) return;
    }
L_000c1738:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_000c173c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c175c;
        }
    }
L_000c1740:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1744:;
    {
        cpu->r[1] = 0x00005f53u;
    }
L_000c1748:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c174c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1750:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c1754:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_000c1758:;
    {
        cpu->r[14] = 0x000c175cu; fn_000bd0ec(cpu);
    }
L_000c175c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1760:;
    {
        goto L_000c1258;
    }
L_000c1764:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1768:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c176c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1770:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c1774:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1778:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c179c;
        }
    }
L_000c177c:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000c1780:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c1784:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c1788:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c178c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c179c;
        }
    }
L_000c1790:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c1794:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000c1798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1258;
        }
    }
L_000c179c:;
    {
        cpu->r[9] = 0x00001c90u;
    }
L_000c17a0:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000c17a4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c17a8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c17ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c17b0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x317u);
    }
L_000c17b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c17b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1998;
        }
    }
L_000c17bc:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c17c0:;
    {
        cpu->r[9] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c17c4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c17c8:;
    {
        uint32_t v = cpu->r[9] & 0x0000000fu; cpu->r[9] = v;
    }
L_000c17cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c17d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c17dc;
        }
    }
L_000c17d4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_000c17d8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000c187c;
        }
    }
L_000c17dc:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c17e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c17e4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000c17e8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c187c;
        }
    }
L_000c17ec:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c17f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c17f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1ad8;
        }
    }
L_000c17f8:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000c17fc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000c1800:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1b40;
        }
    }
L_000c1808:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c180c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c1810:;
    {
        cpu->r[14] = 0x000c1814u; fn_0009689c(cpu);
    }
L_000c1814:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1818:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c181c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000c1820:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1824:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000c1828:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c182c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1830:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000c1834:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c1838:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_000c183c:;
    {
        cpu->r[14] = 0x000c1840u; fn_0018cbb0(cpu);
    }
L_000c1840:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1844:;
    {
        goto L_000c1258;
    }
L_000c1848:;
    {
        cpu->r[0] = rd32(0x000c1850u + + 0x390u);
    }
L_000c184c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c1854u, cpu->r[0], 0, 0);
    }
L_000c1850:;
    {
        cpu->r[14] = 0x000c1854u; fn_001d0ac4(cpu);
    }
L_000c1854:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1858:;
    {
        cpu->r[3] = 0x0000672du;
    }
L_000c185c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1860:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c1864:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c131c;
        }
    }
L_000c1868:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c186c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c1870:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_000c1874:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c1878:;
    {
        goto L_000c1258;
    }
L_000c187c:;
    {
        cpu->r[3] = 0x0000385fu;
    }
L_000c1880:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c1884:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c1888:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c188c:;
    {
        cpu->r[1] = rd32(0x000c1894u + + 0x350u);
    }
L_000c1890:;
    {
        cpu->r[2] = rd32(0x000c1898u + + 0x350u);
    }
L_000c1894:;
    {
        cpu->r[3] = rd32(0x000c189cu + + 0x350u);
    }
L_000c1898:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c18a0u, cpu->r[1], 0, 0);
    }
L_000c189c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c18a4u, cpu->r[2], 0, 0);
    }
L_000c18a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c18a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c18acu, cpu->r[3], 0, 0);
    }
L_000c18a8:;
    {
        cpu->r[14] = 0x000c18acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c18ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c18b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c18b4:;
    {
        goto L_000c1258;
    }
L_000c18b8:;
    {
        cpu->r[11] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c18bc:;
    {
        cpu->r[0] = rd32(0x000c18c4u + + 0x32cu);
    }
L_000c18c0:;
    {
        uint32_t v = cpu->r[11] & 0x0000000fu; cpu->r[11] = v;
    }
L_000c18c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c18ccu, cpu->r[0], 0, 0);
    }
L_000c18c8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c18cc:;
    {
        cpu->r[14] = 0x000c18d0u; imp_printf(cpu); /* printf */
    }
L_000c18d0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c18d4:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c18d8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c18dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c18e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1934;
        }
    }
L_000c18e4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000c18e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1934;
        }
    }
L_000c18ec:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000c18f0:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c18f4:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c18f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c18fc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c1900:;
    {
        cpu->r[14] = 0x000c1904u; fn_000c0d80(cpu);
    }
L_000c1904:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1908:;
    {
        cpu->r[14] = 0x000c190cu; fn_00096928(cpu);
    }
L_000c190c:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c1910:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1914:;
    {
        cpu->r[14] = 0x000c1918u; fn_0018ba6c(cpu);
    }
L_000c1918:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000c191c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1920:;
    {
        cpu->r[14] = 0x000c1924u; fn_001aaf48(cpu);
    }
L_000c1924:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c1928:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c192c:;
    {
        cpu->r[14] = 0x000c1930u; fn_000f361c(cpu);
    }
L_000c1930:;
    {
        goto L_000c1340;
    }
L_000c1934:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c1938:;
    {
        cpu->r[0] = rd32(0x000c1940u + + 0x2b4u);
    }
L_000c193c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1940:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c1948u, cpu->r[0], 0, 0);
    }
L_000c1944:;
    {
        cpu->r[14] = 0x000c1948u; imp_printf(cpu); /* printf */
    }
L_000c1948:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000007u, 1, 1);
    }
L_000c194c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c1970;
        }
    }
L_000c1950:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00006300u, 0, 0);
    }
L_000c1954:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000001eu, 0, 0);
    }
L_000c1958:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000c195c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000c1960:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1964:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00001cedu;
        }
    }
L_000c1968:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000c196c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000c1970:;
    {
        cpu->r[2] = 0x00001b3cu;
    }
L_000c1974:;
    {
        cpu->r[3] = 0x00001b40u;
    }
L_000c1978:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c197c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1980:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c1984:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000c1988:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[11]);
    }
L_000c198c:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[0]);
    }
L_000c1990:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c1994:;
    {
        goto L_000c1258;
    }
L_000c1998:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
    }
L_000c199c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c19a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1aa0;
        }
    }
L_000c19a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2u);
    }
L_000c19a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c19ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1a78;
        }
    }
L_000c19b0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c19b4:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000c19b8:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000c19bc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c19c0:;
    {
        cpu->r[14] = 0x000c19c4u; fn_000f34a0(cpu);
    }
L_000c19c4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c19c8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c19cc:;
    {
        cpu->r[14] = 0x000c19d4u;
    }
L_000c19d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c19d4u)) return;
    }
L_000c19d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c19d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c175c;
        }
    }
L_000c19dc:;
    {
        cpu->r[2] = 0x00004bf8u;
    }
L_000c19e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c19e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c19e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c19ec:;
    {
        wr8(cpu->r[7] + cpu->r[2], cpu->r[1]);
    }
L_000c19f0:;
    {
        goto L_000c1258;
    }
L_000c19f4:;
    {
        cpu->r[0] = rd32(0x000c19fcu + + 0x1fcu);
    }
L_000c19f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c19fc:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c1a04u, cpu->r[0], 0, 0);
    }
L_000c1a00:;
    {
        cpu->r[14] = 0x000c1a04u; fn_001d0ac4(cpu);
    }
L_000c1a04:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c1a08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1a0c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1a10:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000c1a14:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c1a18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c1a1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c15a0;
        }
    }
L_000c1a20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1a24:;
    {
        cpu->r[14] = 0x000c1a28u; fn_000967fc(cpu);
    }
L_000c1a28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1a2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1a30:;
    {
        goto L_000c1258;
    }
L_000c1a34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c1a38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c1a3c:;
    {
        cpu->r[14] = 0x000c1a40u; fn_000f34a0(cpu);
    }
L_000c1a40:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c1a44:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c1a48:;
    {
        cpu->r[14] = 0x000c1a50u;
    }
L_000c1a4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1a50u)) return;
    }
L_000c1a50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c1a54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c1a58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1a5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[2]);
        }
    }
L_000c1a60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00006737u;
        }
    }
L_000c1a64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[2]);
        }
    }
L_000c1a68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
        }
    }
L_000c1a6c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[9]);
        }
    }
L_000c1a70:;
    {
        cpu->r[9] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_000c1a74:;
    {
        goto L_000c14c0;
    }
L_000c1a78:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1a7c:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000c1a80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c1a84:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000c1a88:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000c1a8c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1a90:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000c1a94:;
    {
        cpu->r[14] = 0x000c1a98u; fn_0018cbb0(cpu);
    }
L_000c1a98:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c1a9c:;
    {
        goto L_000c1258;
    }
L_000c1aa0:;
    {
        cpu->r[3] = 0x00003864u;
    }
L_000c1aa4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c1aa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c1aac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c1ab0:;
    {
        cpu->r[1] = rd32(0x000c1ab8u + + 0x144u);
    }
L_000c1ab4:;
    {
        cpu->r[2] = rd32(0x000c1abcu + + 0x144u);
    }
L_000c1ab8:;
    {
        cpu->r[3] = rd32(0x000c1ac0u + + 0x144u);
    }
L_000c1abc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c1ac4u, cpu->r[1], 0, 0);
    }
L_000c1ac0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c1ac8u, cpu->r[2], 0, 0);
    }
L_000c1ac4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c1ac8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c1ad0u, cpu->r[3], 0, 0);
    }
L_000c1acc:;
    {
        cpu->r[14] = 0x000c1ad0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c1ad0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c1ad4:;
    {
        goto L_000c19a4;
    }
L_000c1ad8:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c1adc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c1ae0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c1ae4:;
    {
        cpu->r[14] = 0x000c1ae8u; fn_0009689c(cpu);
    }
L_000c1ae8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1aec:;
    {
        cpu->r[14] = 0x000c1af0u; fn_000968d4(cpu);
    }
L_000c1af0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1af4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c131c;
        }
    }
L_000c1af8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1afc:;
    {
        cpu->r[12] = 0x00006737u;
    }
L_000c1b00:;
    {
        cpu->r[14] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1b04:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c1b08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1b0c:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000c1b10:;
    {
        wr8(cpu->r[14] + cpu->r[12], cpu->r[3]);
    }
L_000c1b14:;
    {
        cpu->r[3] = 0x00005f94u;
    }
L_000c1b18:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000c1b1c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_000c1b20:;
    {
        cpu->r[14] = 0x000c1b24u; fn_000ba460(cpu);
    }
L_000c1b24:;
    {
        cpu->r[4] = rd32(cpu->r[9]);
    }
L_000c1b28:;
    {
        cpu->r[14] = 0x000c1b2cu; fn_0009b4d0(cpu);
    }
L_000c1b2c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c1b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1b34:;
    {
        cpu->r[14] = 0x000c1b38u; fn_000967dc(cpu);
    }
L_000c1b38:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c1b3c:;
    {
        goto L_000c1258;
    }
L_000c1b40:;
    {
        cpu->r[2] = 0x00005f94u;
    }
L_000c1b44:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1b48:;
    {
        cpu->r[12] = 0x000001f4u;
    }
L_000c1b4c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c1b50:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_000c1b54:;
    {
        cpu->r[14] = 0x000c1b58u; fn_000ba460(cpu);
    }
L_000c1b58:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c1b5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1b60:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c1b64:;
    {
        goto L_000c1808;
    }
L_000c1b68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1b6c:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c1b70:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c1b74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1b78:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c1b7c:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000c1b80:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1b84:;
    {
        cpu->r[14] = 0x000c1b88u; fn_000c0d80(cpu);
    }
L_000c1b88:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1b8c:;
    {
        cpu->r[14] = 0x000c1b90u; fn_00096928(cpu);
    }
L_000c1b90:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c1b94:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1b98:;
    {
        cpu->r[14] = 0x000c1b9cu; fn_0018ba6c(cpu);
    }
L_000c1b9c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000c1ba0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1ba4:;
    {
        cpu->r[14] = 0x000c1ba8u; fn_001aaf48(cpu);
    }
L_000c1ba8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c1bac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1bb0:;
    {
        cpu->r[14] = 0x000c1bb4u; fn_000f361c(cpu);
    }
L_000c1bb4:;
    {
        goto L_000c1340;
    }
}

/* _ZN5Scene11MP_WaitDataEv @ 000c1c08 (arm) */
void fn_000c1c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c1c08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000c1c0c:;
    {
        cpu->r[7] = rd32(0x000c1c14u + + 0xbcu);
    }
L_000c1c10:;
    {
        cpu->r[8] = rd32(0x000c1c18u + + 0xbcu);
    }
L_000c1c14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1c18:;
    {
        cpu->r[7] = add_flags(cpu, 0x000c1c20u, cpu->r[7], 0, 0);
    }
L_000c1c1c:;
    {
        cpu->r[14] = 0x000c1c20u; fn_000c1200(cpu);
    }
L_000c1c20:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000c1c24:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000c1c28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1c2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c1c30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1c34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1c38u)) return;
        }
    }
L_000c1c38:;
    {
        cpu->r[1] = 0x00006737u;
    }
L_000c1c3c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c1c40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c1c44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1c48u)) return;
        }
    }
L_000c1c48:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_000c1c4c:;
    {
        cpu->r[5] = rd8(cpu->r[2] + + 0x317u);
    }
L_000c1c50:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c1c54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c1c58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c1c5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c1c60:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c1cb4;
        }
    }
L_000c1c64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c1c68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1c6c:;
    {
        cpu->r[14] = 0x000c1c70u; fn_000bb544(cpu);
    }
L_000c1c70:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1c74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1c98;
        }
    }
L_000c1c7c:;
    {
        cpu->r[14] = 0x000c1c80u; fn_000bd594(cpu);
    }
L_000c1c80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c1c84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1c88:;
    {
        cpu->r[14] = 0x000c1c8cu; fn_000bb544(cpu);
    }
L_000c1c8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1c94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1c7c;
        }
    }
L_000c1c98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c1c9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c1ca0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c1ca4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c1ca8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c1c64;
        }
    }
L_000c1cac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000c1cb0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1cb4:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c1cb8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c1cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1cc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1cc4u)) return;
        }
    }
L_000c1cc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c1cc8:;
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
L_000c1ccc:;
    {
        return fn_000bd414(cpu);
    }
}

/* _ZN5Scene20MP_UpdateBeforeFrameEv @ 000c1cd8 (arm) */
void fn_000c1cd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c1cd8:;
    {
        return fn_000c1c08(cpu);
    }
}

/* _ZN5Scene17ResetCarsQuadrantEv @ 000c1cdc (arm) */
void fn_000c1cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c1cdc:;
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
L_000c1ce0:;
    {
        cpu->r[8] = 0x00008cbcu;
    }
L_000c1ce4:;
    {
        cpu->r[7] = 0x00008cc4u;
    }
L_000c1ce8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c1cec:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c1cf0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c1cf4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000c1cf8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000c1cfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c1d00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1d08u)) return;
        }
    }
L_000c1d08:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000c1d0c:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000c1d10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c1d14:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c1d18:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c1d1c:;
    {
        cpu->r[11] = 0x00001688u;
    }
L_000c1d20:;
    {
        goto L_000c1d50;
    }
L_000c1d24:;
    {
        cpu->r[2] = 0x0000168cu;
    }
L_000c1d28:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000c1d2c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000c1d30:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000c1d34:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[2]);
    }
L_000c1d38:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000c1d3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c1d40:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c1d44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c1d48:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000c1d4c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c1dbc;
        }
    }
L_000c1d50:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c1d54:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000c1d58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
        }
    }
L_000c1d5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
        }
    }
L_000c1d60:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c1d64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000c1d68:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000c1d6c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c1d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1d38;
        }
    }
L_000c1d74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_000c1d78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000c1d7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c1d24;
        }
    }
L_000c1d80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c1d84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c1d88:;
    {
        cpu->r[14] = 0x000c1d8cu; fn_00173e14(cpu);
    }
L_000c1d8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 1);
    }
L_000c1d90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c1d24;
        }
    }
L_000c1d94:;
    {
        cpu->r[2] = 0x0000168cu;
    }
L_000c1d98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c1d9c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[3]);
    }
L_000c1da0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c1da4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000c1da8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000c1dac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c1db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c1db4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000c1db8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c1d50;
        }
    }
L_000c1dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1dc0u)) return;
    }
}

/* _ZN5Scene15UpdateCopsSoundEi @ 000c1dc0 (arm) */
void fn_000c1dc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c1dc0:;
    {
        cpu->r[3] = rd32(0x000c1dc8u + + 0x338u);
    }
L_000c1dc4:;
    {
        cpu->r[2] = rd32(0x000c1dccu + + 0x338u);
    }
L_000c1dc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c1dd0u, cpu->r[3], 0, 0);
    }
L_000c1dcc:;
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
L_000c1dd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c1dd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000c1dd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1ddc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c1de0:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000c1de4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1de8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1dec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1f90;
        }
    }
L_000c1df0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c1df4:;
    {
        cpu->r[2] = 0x00001740u;
    }
L_000c1df8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1dfc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c1e00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c1e04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c1e08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c1e0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c1e10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c1e14:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c1e18:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1e1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1f90;
        }
    }
L_000c1e20:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000c1e24:;
    {
        cpu->r[5] = (~0x80000000u);
    }
L_000c1e28:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000c1e2c:;
    {
        cpu->r[12] = 0x00001788u;
    }
L_000c1e30:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000c1e34:;
    {
        cpu->r[14] = 0x00007fffu;
    }
L_000c1e38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000c1e3c:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_000c1e40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00018c00u, 0, 0);
    }
L_000c1e44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0010u << 16);
    }
L_000c1e48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000c1e4c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x9cu);
    }
L_000c1e50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c1e54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1ec8;
        }
    }
L_000c1e58:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000c1e5c:;
    {
        uint32_t v = cpu->r[0] & cpu->r[3]; cpu->r[3] = v;
    }
L_000c1e60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c1e64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1ec8;
        }
    }
L_000c1e68:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000c1e6c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000c1e70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_000c1e74:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000c1e78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_000c1e7c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000c1e80:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c1e84:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_000c1e88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000c1e8c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_000c1e90:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[9] = v;
    }
L_000c1e94:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000c1e98:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_000c1e9c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[9];
        }
    }
L_000c1ea0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000c1ea4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000c1ea8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000c1eac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_000c1eb0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000c1eb4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_000c1eb8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_000c1ebc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c1ec8;
        }
    }
L_000c1ec0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c1ec4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_000c1ec8:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001cu, 1, 1);
    }
L_000c1ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1e38;
        }
    }
L_000c1ed0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 13u, &shc); cpu->r[5] = v;
    }
L_000c1ed4:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000064u, cpu->r[5], 1, 0);
    }
L_000c1ed8:;
    {
        uint32_t v = cpu->r[5] & ~ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000c1edc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c1ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1f98;
        }
    }
L_000c1ee4:;
    {
        cpu->r[3] = 0x00001cf8u;
    }
L_000c1ee8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c1eec:;
    {
        cpu->r[6] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000c1ef0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c1ef4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c1f68;
        }
    }
L_000c1ef8:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c1efc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c1f00:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c1f04:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000c1f08:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c1f0c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c1f10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c1f14:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000c1f18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c1f1c:;
    {
        cpu->r[14] = 0x000c1f20u; fn_000fd224(cpu);
    }
L_000c1f20:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c1f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c20a8;
        }
    }
L_000c1f28:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_000c1f2c:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000c1f30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_000c1f34:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c1f38:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c1f3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c1f40:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c1f44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c1f48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_000c1f4c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000c1f50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c1f54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c1f58:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c1f5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c1f60:;
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
L_000c1f64:;
    {
        return fn_000fd1d0(cpu);
    }
L_000c1f68:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000c1f6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c1f70:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c1f74:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c1f78:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c1f7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c1f80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c1f84:;
    {
        cpu->r[14] = 0x000c1f88u; fn_000fd224(cpu);
    }
L_000c1f88:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c1f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c2054;
        }
    }
L_000c1f90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c1f94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c1f98u)) return;
    }
L_000c1f98:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000c1f9c:;
    {
        cpu->r[0] = 0x00001cf8u;
    }
L_000c1fa0:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c1fa4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c1fa8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c1fac:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c1fb0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c1fb4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000c1fb8:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_000c1fbc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000c1fc0:;
    {
        cpu->r[14] = 0x000c1fc4u; fn_000fd224(cpu);
    }
L_000c1fc4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c1fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1fdc;
        }
    }
L_000c1fcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c1fd0:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c1fd4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000c1fd8:;
    {
        cpu->r[14] = 0x000c1fdcu; fn_000fd218(cpu);
    }
L_000c1fdc:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000c1fe0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c1fe4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c1fe8:;
    {
        cpu->r[1] = 0x0000008bu;
    }
L_000c1fec:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c1ff0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c1ff4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c1ff8:;
    {
        cpu->r[14] = 0x000c1ffcu; fn_000fd224(cpu);
    }
L_000c1ffc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c2000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c2014;
        }
    }
L_000c2004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c2008:;
    {
        cpu->r[1] = 0x0000008bu;
    }
L_000c200c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000c2010:;
    {
        cpu->r[14] = 0x000c2014u; fn_000fd218(cpu);
    }
L_000c2014:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000c2018:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c201c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c2020:;
    {
        cpu->r[1] = 0x0000008cu;
    }
L_000c2024:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c2028:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c202c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c2030:;
    {
        cpu->r[14] = 0x000c2034u; fn_000fd224(cpu);
    }
L_000c2034:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c2038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1f90;
        }
    }
L_000c203c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c2040:;
    {
        cpu->r[1] = 0x0000008cu;
    }
L_000c2044:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000c2048:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c204c:;
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
L_000c2050:;
    {
        return fn_000fd218(cpu);
    }
L_000c2054:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c2058:;
    {
        cpu->r[7] = 0x00001cfcu;
    }
L_000c205c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c2060:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2064:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c2068:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x490u);
    }
L_000c206c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c2070:;
    {
        cpu->r[14] = 0x000c2074u; fn_000fd224(cpu);
    }
L_000c2074:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c2078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c20c8;
        }
    }
L_000c207c:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_000c2080:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000c2084:;
    {
        cpu->r[1] = 0x00001cfcu;
    }
L_000c2088:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_000c208c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c2090:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c2094:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2098:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c209c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c20a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c20a4:;
    {
        goto L_000c1f48;
    }
L_000c20a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c20ac:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c20b0:;
    {
        cpu->r[1] = 0x0000008au;
    }
L_000c20b4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000c20b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c20bc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000c20c0:;
    {
        cpu->r[14] = 0x000c20c4u; fn_000fd248(cpu);
    }
L_000c20c4:;
    {
        goto L_000c1f28;
    }
L_000c20c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c20cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c20d0:;
    {
        cpu->r[14] = 0x000c20d4u; fn_000964c8(cpu);
    }
L_000c20d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c20d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c20dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c20e0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c20e4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x490u);
    }
L_000c20e8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c20ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000008bu, 0, 0);
    }
L_000c20f0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000c20f4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[1]);
    }
L_000c20f8:;
    {
        cpu->r[14] = 0x000c20fcu; fn_000fd248(cpu);
    }
L_000c20fc:;
    {
        goto L_000c207c;
    }
}

/* _ZN5Scene21UpdateAIPlaybackStateEv @ 000c2108 (arm) */
void fn_000c2108(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c2108:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c210c:;
    {
        cpu->r[2] = rd32(0x000c2114u + + 0x204u);
    }
L_000c2110:;
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
L_000c2114:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000c2118:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000c211c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[10] + + 0x108u);
    }
L_000c2120:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2124:;
    {
        cpu->r[0] = rd32(0x000c212cu + + 0x1f0u);
    }
L_000c2128:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c2130u, cpu->r[2], 0, 0);
    }
L_000c212c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000c2130:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000c2134:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000c2138:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000c213c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000c2140:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_000c2144:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_000c2148:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_000c214c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c2150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c2154:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c2158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c215c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c2160:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c2250;
        }
    }
L_000c2164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000c2168:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000c216c:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_000c2170:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_000c2174:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_000c2178:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000c217c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000c2180:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c2184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000c2188:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x7cu);
    }
L_000c218c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_000c2190:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_000c2194:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c225c;
        }
    }
L_000c2198:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c219c:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000004u;
        wr32(cpu->r[5], cpu->r[11]);
        cpu->r[5] = wb_tmp;
    }
L_000c21a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_000c21a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000c21a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c2184;
        }
    }
L_000c21ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c21b0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c21b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c21b8:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000c21bc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c21c0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c21c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000c21c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000c21cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0xc4u);
    }
L_000c21d0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,16));
    }
L_000c21d4:;
    {
        vfp_sync_flags(cpu);
    }
L_000c21d8:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_000c21dc:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000c223c;
        }
    }
L_000c21e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000c21e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c21e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000c21ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c2220;
        }
    }
L_000c21f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000c21f4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000c21f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000c0u, 0, 0);
    }
L_000c21fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2200:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000c2204:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000c2208:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000c220c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000c2210:;
    {
        vfp_sync_flags(cpu);
    }
L_000c2214:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000c2218:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000c221c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c2200;
        }
    }
L_000c2220:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000c2224:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c223c;
        }
    }
L_000c2228:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa0u);
    }
L_000c222c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2230:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c2308;
        }
    }
L_000c2234:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000c2238:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_000c223c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_000c2240:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_000c2244:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000c2248:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000c224c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c21cc;
        }
    }
L_000c2250:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c2254:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000c2258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c225cu)) return;
    }
L_000c225c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c2260:;
    {
        cpu->r[14] = 0x000c2264u; fn_0015ed94(cpu);
    }
L_000c2264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000c2268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c2198;
        }
    }
L_000c226c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x3dcu);
    }
L_000c2270:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[10] + + 0xf8u);
    }
L_000c2274:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x3dcu);
    }
L_000c2278:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[10] + + 0xf0u);
    }
L_000c227c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x3d4u);
    }
L_000c2280:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000c2284:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000c2288:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c228c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x3d4u);
    }
L_000c2290:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x3d8u);
    }
L_000c2294:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000c2298:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000c229c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x3d8u);
    }
L_000c22a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000c22a4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000c22a8:;
    {
        vfp_vmul(cpu, 12, 14, 13);
    }
L_000c22ac:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c22b0:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000c22b4:;
    {
        vfp_vmla(cpu, 12, 11, 10);
    }
L_000c22b8:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000c22bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c22c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_000c22c4:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c22c8:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,11);
    }
L_000c22cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000c22d0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000c22ec;
        }
    }
L_000c22d4:;
    {
        vfp_vadd(cpu, 13, 11, 11);
    }
L_000c22d8:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_000c22dc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c22e0:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_000c22e4:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c22e8:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c22ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x24u);
    }
L_000c22f0:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000c22f4:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000c22f8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000c22fc:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000c2300:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2304:;
    {
        goto L_000c219c;
    }
L_000c2308:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000c230c:;
    {
        vfp_sync_flags(cpu);
    }
L_000c2310:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000c223c;
        }
    }
L_000c2314:;
    {
        goto L_000c2234;
    }
}

/* _ZN5Scene18UpdateEngineSound2Eii @ 000c2320 (arm) */
void fn_000c2320(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c2320:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c2324:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000c2328:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c232c:;
    {
        cpu->r[0] = rd32(0x000c2334u + + 0x150u);
    }
L_000c2330:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000c2334:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c2338:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c2340u, cpu->r[0], 0, 0);
    }
L_000c233c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000c2340:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000c2344:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000c2348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c234c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c2350:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_000c2354:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000c2358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c2370;
        }
    }
L_000c235c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c2360:;
    {
        cpu->r[14] = 0x000c2364u; fn_000c0d80(cpu);
    }
L_000c2364:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2368:;
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
L_000c236c:;
    {
        return fn_0016c724(cpu);
    }
L_000c2370:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x498u);
    }
L_000c2374:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c2378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c235c;
        }
    }
L_000c237c:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000c2380:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c2384:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c2388:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c238c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c235c;
        }
    }
L_000c2390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c244c;
        }
    }
L_000c2394:;
    {
        cpu->r[2] = 0x00004350u;
    }
L_000c2398:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c239c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c23a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c23a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c244c;
        }
    }
L_000c23a8:;
    {
        cpu->r[1] = rd32(0x000c23b0u + + 0xd8u);
    }
L_000c23ac:;
    {
        cpu->r[12] = 0x00001c0cu;
    }
L_000c23b0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000c23b4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c23b8:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[12]);
    }
L_000c23bc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000c23c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c2450;
        }
    }
L_000c23c4:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000c23c8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c23cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c23d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x490u);
    }
L_000c23d4:;
    {
        wr8(cpu->r[1] + + 0xc4u, cpu->r[12]);
    }
L_000c23d8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x490u);
    }
L_000c23dc:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0xc4u);
    }
L_000c23e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c23e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c23e8u)) return;
        }
    }
L_000c23e8:;
    {
        cpu->r[1] = 0x00001740u;
    }
L_000c23ec:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_000c23f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c23f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c23f8u)) return;
        }
    }
L_000c23f8:;
    {
        cpu->r[1] = 0x00006737u;
    }
L_000c23fc:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000c2400:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c2404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c2408u)) return;
        }
    }
L_000c2408:;
    {
        cpu->r[2] = 0x00004318u;
    }
L_000c240c:;
    {
        cpu->r[12] = 0x0000431cu;
    }
L_000c2410:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c2414:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000c2418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c241c:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_000c2420:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c2424:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_000c2428:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000c242c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000c2430:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000c2434:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[12]; cpu->r[4] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000c2438:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000c243c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_000c2440:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000c2444:;
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
L_000c2448:;
    {
        return fn_0016c724(cpu);
    }
L_000c244c:;
    {
        cpu->r[1] = rd32(0x000c2454u + + 0x34u);
    }
L_000c2450:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000c2454:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000c2458:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c245c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c2460:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000c2464:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c2468:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x490u);
    }
L_000c246c:;
    {
        wr8(cpu->r[1] + + 0xc4u, cpu->r[0]);
    }
L_000c2470:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x490u);
    }
L_000c2474:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0xc4u);
    }
L_000c2478:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c247c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c2480u)) return;
        }
    }
L_000c2480:;
    {
        goto L_000c23e8;
    }
}

/* _ZN5Scene12ComputeRanksEv @ 000c248c (arm) */
void fn_000c248c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c248c:;
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
L_000c2490:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000c2494:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c2498:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_000c249c:;
    {
        cpu->r[2] = rd32(0x000c24a4u + + 0x260u);
    }
L_000c24a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000c24a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c24acu, cpu->r[2], 0, 0);
    }
L_000c24a8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c24ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000c24b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c24b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c24b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c24bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
        }
    }
L_000c24c0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
        }
    }
L_000c24c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c2548;
        }
    }
L_000c24c8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c24cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c24d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c24d4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000c24d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], 0x00018c00u, 0, 0);
    }
L_000c24dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c24e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000007cu, 0, 0);
    }
L_000c24e4:;
    {
        cpu->r[7] = 0x00001740u;
    }
L_000c24e8:;
    {
        cpu->r[11] = 0x00001788u;
    }
L_000c24ec:;
    {
        cpu->r[9] = 0x000010d0u;
    }
L_000c24f0:;
    {
        cpu->r[10] = 0x0000167cu;
    }
L_000c24f4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000c24f8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c24fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26f0;
        }
    }
L_000c2504:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_000c2508:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c250c:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_000c2510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26c8;
        }
    }
L_000c2514:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_000c2518:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000c251c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000c2520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26c8;
        }
    }
L_000c2524:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c2528:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000c252c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_000c2530:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c2534:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c2538:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c253c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000c2540:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c2544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c24f8;
        }
    }
L_000c2548:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c254c:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_000c2550:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c2554:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c2558:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000c255c:;
    {
        cpu->r[3] = rd32(0x000c2564u + + 0x1a4u);
    }
L_000c2560:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000c2564:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000c2568:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000c256c:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000c2570:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c2574:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c2578:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_000c257c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000c2580:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c2604;
        }
    }
L_000c2584:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x4u);
    }
L_000c2588:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c258c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c267c;
        }
    }
L_000c2594:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c2598:;
    {
        cpu->r[11] = 0x000010d0u;
    }
L_000c259c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000c25a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000c25a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000c25a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c267c;
        }
    }
L_000c25ac:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x14u);
    }
L_000c25b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c25b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26bc;
        }
    }
L_000c25b8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x10u);
    }
L_000c25bc:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000c25c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c25c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c25c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c25cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c25d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26bc;
        }
    }
L_000c25d4:;
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
    }
L_000c25d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000c25dc:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_000c25e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_000c25e4:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000c25e8:;
    {
        uint32_t base = cpu->r[5];
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
L_000c25ec:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000c25f0:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000c25f4:;
    {
        uint32_t base = cpu->r[10];
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
L_000c25f8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000c25fc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_000c2600:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c2584;
        }
    }
L_000c2604:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c2608:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c260c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c2570;
        }
    }
L_000c2610:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c2614:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c2618:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c2674;
        }
    }
L_000c261c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c2620:;
    {
        cpu->r[5] = 0x0000173cu;
    }
L_000c2624:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c2628:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000c262c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_000c2630:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c2634:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000154u, 0, 0);
    }
L_000c2638:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c263c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_000c2640:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000c2644:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_000c2648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_000c264c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000c2650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c2654:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c2658:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c265c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + cpu->r[5], cpu->r[3]);
        }
    }
L_000c2660:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_000c2664:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c2668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000c266c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c2670:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c263c;
        }
    }
L_000c2674:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000c2678:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c267cu)) return;
    }
L_000c267c:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x14u);
    }
L_000c2680:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c26a0;
        }
    }
L_000c2688:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000c268c:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000c2690:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000c2694:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c2698:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000c269c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c25d4;
        }
    }
L_000c26a0:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_000c26a4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_000c26a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c26ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c26b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c26b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c26b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c25d4;
        }
    }
L_000c26bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000c26c0:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000c26c4:;
    {
        goto L_000c25fc;
    }
L_000c26c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000c26cc:;
    {
        cpu->r[14] = 0x000c26d0u; fn_001614b4(cpu);
    }
L_000c26d0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c26d4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000c26d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000c26dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c26e0:;
    {
        uint32_t v = cpu->r[3] & 0x00300000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000c26e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c26e8:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000c26ec:;
    {
        goto L_000c252c;
    }
L_000c26f0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c26f4:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000c26f8:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000c26fc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_000c2700:;
    {
        goto L_000c2530;
    }
}

/* _ZN5Scene20SortObjectsDrawOrderEv @ 000c270c (arm) */
void fn_000c270c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c270c:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000c2710:;
    {
        cpu->r[12] = 0x00001c84u;
    }
L_000c2714:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2718:;
    {
        cpu->r[2] = 0x00001c88u;
    }
L_000c271c:;
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
L_000c2720:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000c2724:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c2728:;
    {
        cpu->r[5] = 0x00001c78u;
    }
L_000c272c:;
    {
        cpu->r[4] = 0x00001c7cu;
    }
L_000c2730:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c2734:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c2738:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c273c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c2740:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c2744:;
    {
        cpu->r[0] = rd32(0x000c274cu + + 0x1c8u);
    }
L_000c2748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c274c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2750:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c2758u, cpu->r[0], 0, 0);
    }
L_000c2754:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[1]);
    }
L_000c2758:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[1]);
    }
L_000c275c:;
    {
        wr32(cpu->r[6] + cpu->r[12], cpu->r[1]);
    }
L_000c2760:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000c2764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c28d4;
        }
    }
L_000c2768:;
    {
        cpu->r[2] = 0x00008c44u;
    }
L_000c276c:;
    {
        cpu->r[12] = rd32(0x000c2774u + + 0x1a4u);
    }
L_000c2770:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c2774:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[2]);
    }
L_000c2778:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000c277c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000c2780:;
    {
        cpu->r[7] = rd32(cpu->r[12]);
    }
L_000c2784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c28dc;
        }
    }
L_000c2788:;
    {
        cpu->r[2] = 0x00001c64u;
    }
L_000c278c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c2790:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c2794:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000c2798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c27b8;
        }
    }
L_000c279c:;
    {
        cpu->r[14] = cpu->r[1];
    }
L_000c27a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000c27a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c27a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c27ac:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0x194u, cpu->r[14]);
        }
    }
L_000c27b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000c27b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c27a0;
        }
    }
L_000c27b8:;
    {
        cpu->r[3] = rd32(0x000c27c0u + + 0x15cu);
    }
L_000c27bc:;
    {
        cpu->r[4] = 0x00001bc8u;
    }
L_000c27c0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c27c4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c27c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000c27cc:;
    {
        cpu->r[14] = 0x000c27d0u; fn_000bc9ec(cpu);
    }
L_000c27d0:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_000c27d4:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000c27d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c27dc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_000c27e0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000c27e4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000c27e8:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[2]);
    }
L_000c27ec:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c27f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c2838;
        }
    }
L_000c27f4:;
    {
        cpu->r[1] = 0x00008c40u;
    }
L_000c27f8:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_000c27fc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c2800:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c2804:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000c2808:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c280c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000c2810:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000c2814:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c2818:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000c281c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[3]);
    }
L_000c2820:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000c2824:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000c2828:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c282c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0x194u, cpu->r[5]);
        }
    }
L_000c2830:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c2834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c281c;
        }
    }
L_000c2838:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000c283c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2840:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c2844:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2848:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c28d4;
        }
    }
L_000c284c:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000c2850:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2854:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c2858:;
    {
        cpu->r[10] = 0x00001c64u;
    }
L_000c285c:;
    {
        cpu->r[9] = 0x00001c60u;
    }
L_000c2860:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c2864:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c2868:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c286c:;
    {
        cpu->r[8] = 0x00001310u;
    }
L_000c2870:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000c2878u + + 0x98u);
    }
L_000c2874:;
    {
        goto L_000c28a0;
    }
L_000c2878:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c287c:;
    {
        cpu->r[14] = 0x000c2880u; fn_000ea310(cpu);
    }
L_000c2880:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c2884:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
        }
    }
L_000c2888:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[3]);
        }
    }
L_000c288c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000c2890:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c2894:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c2898:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c28d4;
        }
    }
L_000c289c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000c28a0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000c28a4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c28a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c288c;
        }
    }
L_000c28ac:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x186u);
    }
L_000c28b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_000c28b4:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000c28b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c28bc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
        }
    }
L_000c28c0:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[3]);
        }
    }
L_000c28c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000c2878;
        }
    }
L_000c28c8:;
    {
        cpu->r[14] = 0x000c28ccu; fn_0012dcdc(cpu);
    }
L_000c28cc:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_000c28d0:;
    {
        goto L_000c2878;
    }
L_000c28d4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000c28d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c28dcu)) return;
    }
L_000c28dc:;
    {
        cpu->r[1] = 0x00001c64u;
    }
L_000c28e0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c28e4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000c28e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c28ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000c28f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c28d4;
        }
    }
L_000c28f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000c28f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000c28fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c2900:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[1] + + 0x194u, cpu->r[12]);
        }
    }
L_000c2904:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000c2908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c28f4;
        }
    }
L_000c290c:;
    {
        goto L_000c2858;
    }
}

/* _ZN5Scene15RenderLensFlareEv @ 000c2920 (arm) */
void fn_000c2920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c2920:;
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
L_000c2924:;
    {
        cpu->r[13] -= 56u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
        wr64(cpu->r[13] + 48u, *(uint64_t*)vfp_d(cpu, 14));
    }
L_000c2928:;
    {
        cpu->r[6] = rd32(0x000c2930u + + 0x360u);
    }
L_000c292c:;
    {
        cpu->r[2] = rd32(0x000c2934u + + 0x360u);
    }
L_000c2930:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000c2934:;
    {
        cpu->r[6] = add_flags(cpu, 0x000c293cu, cpu->r[6], 0, 0);
    }
L_000c2938:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c293c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_000c2940:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000c2944:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c2948:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c294c:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000c2950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c2954:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000c2958:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c295c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c349c;
        }
    }
L_000c2960:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000c2964:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2968:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000c296c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c2970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c2974:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c2978:;
    {
        cpu->r[14] = 0x000c2980u;
    }
L_000c297c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c2980u)) return;
    }
L_000c2980:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c2984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3430;
        }
    }
L_000c2988:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000c298c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000c2990:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c2994:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000c2998:;
    {
        *vfp_s(cpu, 25) = *(float*)G(0x000c29a0u + + 0x2d8u);
    }
L_000c299c:;
    {
        cpu->r[10] = 0x000011e8u;
    }
L_000c29a0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000c29a4:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000c29a8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000c29b0u + + 0x2ccu);
    }
L_000c29ac:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c29b4u + + 0x2ccu);
    }
L_000c29b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c29b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c29b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c29bc:;
    {
        cpu->r[14] = 0x000c29c4u;
    }
L_000c29c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c29c4u)) return;
    }
L_000c29c4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[0]);
    }
L_000c29c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000c29cc:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000c29d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000c29d4:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000c29d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_000c29dc:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[7] + + 0x84u);
    }
L_000c29e0:;
    {
        vfp_vsub(cpu, 19, 22, 19);
    }
L_000c29e4:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[7] + + 0x48u);
    }
L_000c29e8:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[7] + + 0xc0u);
    }
L_000c29ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x10cu);
    }
L_000c29f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[7] + + 0x110u);
    }
L_000c29f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x114u);
    }
L_000c29f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000c29fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00064000u, 0, 0);
    }
L_000c2a00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000b4u, 0, 0);
    }
L_000c2a04:;
    {
        vfp_vmul(cpu, 18, 19, 19);
    }
L_000c2a08:;
    {
        vfp_vsub(cpu, 20, 23, 20);
    }
L_000c2a0c:;
    {
        vfp_vmla(cpu, 18, 20, 20);
    }
L_000c2a10:;
    {
        vfp_vsub(cpu, 21, 24, 21);
    }
L_000c2a14:;
    {
        vfp_vmla(cpu, 18, 21, 21);
    }
L_000c2a18:;
    {
        vfp_vsqrt(cpu, 18, 18);
    }
L_000c2a1c:;
    {
        vfp_vsub(cpu, 13, 13, 22);
    }
L_000c2a20:;
    {
        vfp_vsub(cpu, 14, 14, 24);
    }
L_000c2a24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c2a28:;
    {
        vfp_vsub(cpu, 15, 15, 23);
    }
L_000c2a2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c2a30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2a34:;
    {
        cpu->r[14] = 0x000c2a38u; fn_00155f80(cpu);
    }
L_000c2a38:;
    {
        *vfp_s(cpu, 26) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_000c2a3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c2a44u + + 0x240u);
    }
L_000c2a40:;
    {
        vfp_vdiv(cpu, 14, 15, 18);
    }
L_000c2a44:;
    {
        *vfp_s(cpu, 27) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000c2a48:;
    {
        cpu->r[3] = 0x00001298u;
    }
L_000c2a4c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000c2a54u + + 0x234u);
    }
L_000c2a50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000c2a54:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_000c2a58:;
    {
        *vfp_s(cpu, 28) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_000c2a5c:;
    {
        vfp_vmul(cpu, 15, 19, 26);
    }
L_000c2a60:;
    {
        vfp_vmla(cpu, 15, 20, 27);
    }
L_000c2a64:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,25);
    }
L_000c2a68:;
    {
        vfp_vmla(cpu, 11, 12, 13);
    }
L_000c2a6c:;
    {
        vfp_vmla(cpu, 15, 21, 28);
    }
L_000c2a70:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000c2a74:;
    {
        vfp_vmul(cpu, 19, 14, 15);
    }
L_000c2a78:;
    {
        cpu->r[14] = 0x000c2a7cu; imp_cosf(cpu); /* cosf */
    }
L_000c2a7c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000c2a80:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000c2a84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c2a88:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c2a8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000c2a90:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_000c2a94:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[9], 1, 31u, &shc); cpu->r[9] = v;
    }
L_000c2a98:;
    {
        vfp_vmla(cpu, 22, 18, 26);
    }
L_000c2a9c:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[0];
    }
L_000c2aa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c2aa4:;
    {
        vfp_vmla(cpu, 23, 18, 27);
    }
L_000c2aa8:;
    {
        vfp_vmla(cpu, 24, 18, 28);
    }
L_000c2aac:;
    {
        vfp_vsub(cpu, 22, 22, 15);
    }
L_000c2ab0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c2ab4:;
    {
        vfp_vsub(cpu, 23, 23, 15);
    }
L_000c2ab8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c2abc:;
    {
        vfp_vsub(cpu, 18, 24, 15);
    }
L_000c2ac0:;
    {
        cpu->r[14] = 0x000c2ac4u; fn_0014814c(cpu);
    }
L_000c2ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c2ac8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c2acc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c2ad0:;
    {
        cpu->r[14] = 0x000c2ad8u;
    }
L_000c2ad4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c2ad8u)) return;
    }
L_000c2ad8:;
    {
        cpu->r[2] = 0x00001290u;
    }
L_000c2adc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c2ae0:;
    {
        cpu->r[3] = 0x42000000u;
    }
L_000c2ae4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c2ae8:;
    {
        cpu->r[2] = 0x00001294u;
    }
L_000c2aec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c2af4u + + 0x198u);
    }
L_000c2af0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c2af4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2af8:;
    {
        cpu->r[14] = 0x000c2afcu; fn_00154cb0(cpu);
    }
L_000c2afc:;
    {
        cpu->r[3] = rd32(0x000c2b04u + + 0x194u);
    }
L_000c2b00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000c2b08:;
    {
        vfp_vmul(cpu, 21, 22, 22);
    }
L_000c2b0c:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c2b10:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000c2b14:;
    {
        cpu->r[14] = 0x000c2b18u; fn_0009b31c(cpu);
    }
L_000c2b18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2b1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c2b20:;
    {
        cpu->r[14] = 0x000c2b24u; fn_0012e264(cpu);
    }
L_000c2b24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c2b28:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000c2b2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c2b34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c2b38:;
    {
        cpu->r[14] = 0x000c2b40u;
    }
L_000c2b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c2b40u)) return;
    }
L_000c2b40:;
    {
        cpu->r[3] = rd32(0x000c2b48u + + 0x154u);
    }
L_000c2b44:;
    {
        cpu->r[1] = 0x000078d2u;
    }
L_000c2b48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b4c:;
    {
        vfp_vmla(cpu, 21, 23, 23);
    }
L_000c2b50:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c2b54:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000c2b58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c2b5c:;
    {
        cpu->r[14] = 0x000c2b60u; fn_00135cf4(cpu);
    }
L_000c2b60:;
    {
        cpu->r[1] = 0x000078d3u;
    }
L_000c2b64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b68:;
    {
        vfp_vmla(cpu, 21, 18, 18);
    }
L_000c2b6c:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_000c2b70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c2b74:;
    {
        cpu->r[14] = 0x000c2b78u; fn_00135cf4(cpu);
    }
L_000c2b78:;
    {
        cpu->r[1] = 0x000078d5u;
    }
L_000c2b7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b80:;
    {
        vfp_vsqrt(cpu, 21, 21);
    }
L_000c2b84:;
    {
        cpu->r[10] = rd32(cpu->r[0]);
    }
L_000c2b88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c2b8c:;
    {
        cpu->r[14] = 0x000c2b90u; fn_00135cf4(cpu);
    }
L_000c2b90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c2b94:;
    {
        cpu->r[1] = 0x000078d4u;
    }
L_000c2b98:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c2b9c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000c2ba0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c2ba4:;
    {
        cpu->r[14] = 0x000c2ba8u; fn_00135cf4(cpu);
    }
L_000c2ba8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c2bac:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c2bb0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000c2bb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2bb8:;
    {
        cpu->r[14] = 0x000c2bbcu; fn_0012e230(cpu);
    }
L_000c2bbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2bc0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2bc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2bc8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c2bcc:;
    {
        cpu->r[14] = 0x000c2bd0u; fn_0012f12c(cpu);
    }
L_000c2bd0:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000c2bd4:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_000c2bd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c2bdc:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000c2be0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000c2be4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x418u);
    }
L_000c2be8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xd8u);
    }
L_000c2bec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c2bf0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000c2bf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000c2bf8:;
    {
        cpu->r[14] = 0x000c2bfcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000c2bfc:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000064u, cpu->r[0], 1, 0);
    }
L_000c2c00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c2c04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2c08:;
    {
        cpu->r[14] = 0x000c2c0cu; fn_000b98c8(cpu);
    }
L_000c2c0c:;
    {
        cpu->r[1] = 0x0000cccdu;
    }
L_000c2c10:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3eccu << 16);
    }
L_000c2c14:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2c18:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2c1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c2c20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2c24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2c28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2c2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2c30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2c34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2c38:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2c3c:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2c40:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2c44:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2c48:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2c4c:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2c50:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2c58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2c5c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2c60:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[12]);
    }
L_000c2c64:;
    {
        cpu->r[14] = 0x000c2c68u; fn_00130de4(cpu);
    }
L_000c2c68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), *vfp_s(cpu,20));
    }
L_000c2c6c:;
    {
        vfp_sync_flags(cpu);
    }
L_000c2c70:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c33ec;
        }
    }
L_000c2c74:;
    {
        goto L_000c2cb0;
    }
L_000c2cb0:;
    {
        vfp_vdiv(cpu, 15, 17, 21);
    }
L_000c2cb4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2cb8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2cbc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c2cc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2cc4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c2cc8:;
    {
        vfp_vmul(cpu, 18, 15, 18);
    }
L_000c2ccc:;
    {
        vfp_vmul(cpu, 19, 15, 23);
    }
L_000c2cd0:;
    {
        vfp_vmul(cpu, 20, 15, 22);
    }
L_000c2cd4:;
    {
        cpu->r[14] = 0x000c2cd8u; fn_0012f12c(cpu);
    }
L_000c2cd8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2cdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c2ce0:;
    {
        cpu->r[14] = 0x000c2ce4u; fn_000b98c8(cpu);
    }
L_000c2ce4:;
    {
        cpu->r[1] = 0x0000999au;
    }
L_000c2ce8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3ed9u << 16);
    }
L_000c2cec:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2cf0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2cf4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c2cf8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2cfc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2d08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2d0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d10:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2d14:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2d18:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2d1c:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2d20:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2d24:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2d28:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2d2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2d30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2d34:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2d38:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[12]);
    }
L_000c2d3c:;
    {
        cpu->r[14] = 0x000c2d40u; fn_00130de4(cpu);
    }
L_000c2d40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2d44:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c2d48:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2d4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2d50:;
    {
        cpu->r[14] = 0x000c2d54u; fn_0012f12c(cpu);
    }
L_000c2d54:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2d58:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000c2d5c:;
    {
        cpu->r[14] = 0x000c2d60u; fn_000b98c8(cpu);
    }
L_000c2d60:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_000c2d64:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3de6u << 16);
    }
L_000c2d68:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2d6c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2d70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c2d74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2d78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2d84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2d88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2d8c:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2d90:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2d94:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2d98:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2d9c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2da0:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2da4:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2dac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2db0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2db4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_000c2db8:;
    {
        cpu->r[14] = 0x000c2dbcu; fn_00130de4(cpu);
    }
L_000c2dbc:;
    {
        vfp_vmul(cpu, 13, 21, 25);
    }
L_000c2dc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c2dc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c2dc8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c2dcc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2dd0:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000c2dd4:;
    {
        vfp_vmla(cpu, 12, 13, 19);
    }
L_000c2dd8:;
    {
        vfp_vmla(cpu, 14, 13, 20);
    }
L_000c2ddc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c2de0:;
    {
        vfp_vmla(cpu, 15, 13, 18);
    }
L_000c2de4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c2de8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2dec:;
    {
        cpu->r[14] = 0x000c2df0u; fn_000b98c8(cpu);
    }
L_000c2df0:;
    {
        cpu->r[1] = 0x0000d70bu;
    }
L_000c2df4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c2df8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3d23u << 16);
    }
L_000c2dfc:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2e00:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2e04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2e08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2e0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2e10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2e14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2e18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2e1c:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2e20:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2e24:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2e28:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2e2c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2e30:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2e34:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2e38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2e3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2e40:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2e44:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[12]);
    }
L_000c2e48:;
    {
        cpu->r[14] = 0x000c2e4cu; fn_00130de4(cpu);
    }
L_000c2e4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2e50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c2e54:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2e58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2e5c:;
    {
        cpu->r[14] = 0x000c2e60u; fn_0012f12c(cpu);
    }
L_000c2e60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c2e68u + - 0x1c8u);
    }
L_000c2e64:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c2e68:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c2e6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c2e70:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c2e74:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2e78:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000c2e7c:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c2e80:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c2e84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c2e88:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c2e8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c2e90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2e94:;
    {
        cpu->r[14] = 0x000c2e98u; fn_000b98c8(cpu);
    }
L_000c2e98:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,25);
    }
L_000c2e9c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c2ea0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_000c2ea4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2ea8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2eac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2eb0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2eb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2eb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2ebc:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2ec0:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2ec4:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2ec8:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2ecc:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2ed0:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2ed4:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2ed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2edc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2ee0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2ee4:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_000c2ee8:;
    {
        cpu->r[14] = 0x000c2eecu; fn_00130de4(cpu);
    }
L_000c2eec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c2ef0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c2ef4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2ef8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2efc:;
    {
        cpu->r[14] = 0x000c2f00u; fn_0012f12c(cpu);
    }
L_000c2f00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c2f08u + - 0x264u);
    }
L_000c2f04:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c2f08:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c2f0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c2f10:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c2f14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2f18:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_000c2f1c:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c2f20:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c2f24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c2f28:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c2f2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c2f30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2f34:;
    {
        cpu->r[14] = 0x000c2f38u; fn_000b98c8(cpu);
    }
L_000c2f38:;
    {
        cpu->r[1] = 0x00001eb8u;
    }
L_000c2f3c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c2f40:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3d85u << 16);
    }
L_000c2f44:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2f48:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2f4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2f50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2f54:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2f58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2f5c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2f60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2f64:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2f68:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c2f6c:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c2f70:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c2f74:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c2f78:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c2f7c:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c2f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c2f84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c2f88:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c2f8c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[12]);
    }
L_000c2f90:;
    {
        cpu->r[14] = 0x000c2f94u; fn_00130de4(cpu);
    }
L_000c2f94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c2f9cu + - 0x2f4u);
    }
L_000c2f98:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c2f9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c2fa0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c2fa4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c2fa8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c2fac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c2fb0:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c2fb4:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c2fb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c2fbc:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c2fc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c2fc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c2fc8:;
    {
        cpu->r[14] = 0x000c2fccu; fn_000b98c8(cpu);
    }
L_000c2fcc:;
    {
        cpu->r[1] = 0x000051ebu;
    }
L_000c2fd0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c2fd4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3d38u << 16);
    }
L_000c2fd8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c2fdc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c2fe0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c2fe4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2fe8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2fec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2ff0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c2ff4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c2ff8:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c2ffc:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c3000:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c3004:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c3008:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c300c:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c3010:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c3014:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3018:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c301c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c3020:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[12]);
    }
L_000c3024:;
    {
        cpu->r[14] = 0x000c3028u; fn_00130de4(cpu);
    }
L_000c3028:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c3030u + - 0x384u);
    }
L_000c302c:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c3030:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c3034:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c3038:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c303c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c3040:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_000c3044:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c3048:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c304c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c3050:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c3054:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c3058:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c305c:;
    {
        cpu->r[14] = 0x000c3060u; fn_000b98c8(cpu);
    }
L_000c3060:;
    {
        cpu->r[1] = 0x000051ebu;
    }
L_000c3064:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c3068:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3db8u << 16);
    }
L_000c306c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c3070:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c3074:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c3078:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c307c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3080:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3084:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3088:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c308c:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c3090:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c3094:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c3098:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c309c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c30a0:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c30a4:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c30a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c30ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c30b0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c30b4:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[12]);
    }
L_000c30b8:;
    {
        cpu->r[14] = 0x000c30bcu; fn_00130de4(cpu);
    }
L_000c30bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c30c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c30c4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c30c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c30cc:;
    {
        cpu->r[14] = 0x000c30d0u; fn_0012f12c(cpu);
    }
L_000c30d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c30d8u + + 0x390u);
    }
L_000c30d4:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c30d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c30dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c30e0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c30e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c30e8:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_000c30ec:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c30f0:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c30f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c30f8:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c30fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c3100:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3104:;
    {
        cpu->r[14] = 0x000c3108u; fn_000b98c8(cpu);
    }
L_000c3108:;
    {
        cpu->r[1] = 0x0000147bu;
    }
L_000c310c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c3110:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3d2eu << 16);
    }
L_000c3114:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c3118:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c311c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c3120:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3124:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3128:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c312c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3130:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3134:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c3138:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c313c:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c3140:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c3144:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c3148:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c314c:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c3150:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3154:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c3158:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c315c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_000c3160:;
    {
        cpu->r[14] = 0x000c3164u; fn_00130de4(cpu);
    }
L_000c3164:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c316cu + + 0x300u);
    }
L_000c3168:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c316c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c3170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c3174:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c3178:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c317c:;
    {
        cpu->r[0] = 0x00000009u;
    }
L_000c3180:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c3184:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c3188:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c318c:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c3190:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c3194:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3198:;
    {
        cpu->r[14] = 0x000c319cu; fn_000b98c8(cpu);
    }
L_000c319c:;
    {
        cpu->r[1] = 0x0000c290u;
    }
L_000c31a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c31a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3d75u << 16);
    }
L_000c31a8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c31ac:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c31b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c31b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c31b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c31bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c31c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c31c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c31c8:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c31cc:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c31d0:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c31d4:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c31d8:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c31dc:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c31e0:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c31e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c31e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c31ec:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c31f0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_000c31f4:;
    {
        cpu->r[14] = 0x000c31f8u; fn_00130de4(cpu);
    }
L_000c31f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c31fc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c3200:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c3204:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3208:;
    {
        cpu->r[14] = 0x000c320cu; fn_0012f12c(cpu);
    }
L_000c320c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c3214u + + 0x25cu);
    }
L_000c3210:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c3214:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c3218:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c321c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c3220:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c3224:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_000c3228:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c322c:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c3230:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c3234:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c3238:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c323c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3240:;
    {
        cpu->r[14] = 0x000c3244u; fn_000b98c8(cpu);
    }
L_000c3244:;
    {
        cpu->r[1] = 0x0000d70bu;
    }
L_000c3248:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c324c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3da3u << 16);
    }
L_000c3250:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c3254:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c3258:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c325c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3260:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3264:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3268:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c326c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3270:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c3274:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c3278:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c327c:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c3280:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c3284:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c3288:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c328c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3290:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c3294:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c3298:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_000c329c:;
    {
        cpu->r[14] = 0x000c32a0u; fn_00130de4(cpu);
    }
L_000c32a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c32a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c32a8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c32ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c32b0:;
    {
        cpu->r[14] = 0x000c32b4u; fn_0012f12c(cpu);
    }
L_000c32b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c32bcu + + 0x1b8u);
    }
L_000c32b8:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c32bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c32c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c32c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c32c8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c32cc:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_000c32d0:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c32d4:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c32d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c32dc:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c32e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c32e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c32e8:;
    {
        cpu->r[14] = 0x000c32ecu; fn_000b98c8(cpu);
    }
L_000c32ec:;
    {
        cpu->r[1] = 0x0000cccdu;
    }
L_000c32f0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c32f4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3e4cu << 16);
    }
L_000c32f8:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c32fc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c3300:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c3304:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3308:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c330c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3310:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c3314:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3318:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c331c:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c3320:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c3324:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c3328:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c332c:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c3330:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c3334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3338:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c333c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c3340:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_000c3344:;
    {
        cpu->r[14] = 0x000c3348u; fn_00130de4(cpu);
    }
L_000c3348:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c334c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c3350:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c3354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3358:;
    {
        cpu->r[14] = 0x000c335cu; fn_0012f12c(cpu);
    }
L_000c335c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c3364u + + 0x114u);
    }
L_000c3360:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_000c3364:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000c3368:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000c336c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000c3370:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c3374:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_000c3378:;
    {
        vfp_vmla(cpu, 12, 13, 18);
    }
L_000c337c:;
    {
        vfp_vmla(cpu, 14, 13, 19);
    }
L_000c3380:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c3384:;
    {
        vfp_vmla(cpu, 15, 13, 20);
    }
L_000c3388:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c338c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3390:;
    {
        cpu->r[14] = 0x000c3394u; fn_000b98c8(cpu);
    }
L_000c3394:;
    {
        cpu->r[1] = 0x3e400000u;
    }
L_000c3398:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c339c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000c33a0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000c33a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000c33a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c33ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c33b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c33b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c33b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c33bc:;
    {
        cpu->r[1] = (cpu->r[0] >> 24) & 0xffu;
    }
L_000c33c0:;
    {
        wr8(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000c33c4:;
    {
        wr8(cpu->r[13] + + 0x33u, cpu->r[1]);
    }
L_000c33c8:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_000c33cc:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_000c33d0:;
    {
        wr8(cpu->r[13] + + 0x31u, cpu->r[1]);
    }
L_000c33d4:;
    {
        wr8(cpu->r[13] + + 0x32u, cpu->r[0]);
    }
L_000c33d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c33dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c33e0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000c33e4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_000c33e8:;
    {
        cpu->r[14] = 0x000c33ecu; fn_00130de4(cpu);
    }
L_000c33ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c33f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c33f4:;
    {
        cpu->r[14] = 0x000c33f8u; fn_0012e1f4(cpu);
    }
L_000c33f8:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c33fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3400:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c3404:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c3408:;
    {
        cpu->r[14] = 0x000c3410u;
    }
L_000c340c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3410u)) return;
    }
L_000c3410:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3414:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c3418:;
    {
        cpu->r[14] = 0x000c341cu; fn_0012e264(cpu);
    }
L_000c341c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000c3420:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_000c3424:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_000c3428:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        *(uint64_t*)vfp_d(cpu, 14) = rd64(cpu->r[13] + 48u);
        cpu->r[13] += 56u;
    }
L_000c342c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3430u)) return;
    }
L_000c3430:;
    {
        cpu->r[1] = rd32(0x000c3438u + + 0x44u);
    }
L_000c3434:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c3438:;
    {
        cpu->r[12] = rd32(0x000c3440u + + 0x40u);
    }
L_000c343c:;
    {
        cpu->r[14] = 0x00001596u;
    }
L_000c3440:;
    {
        cpu->r[2] = rd32(0x000c3448u + + 0x3cu);
    }
L_000c3444:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c344cu, cpu->r[1], 0, 0);
    }
L_000c3448:;
    {
        cpu->r[3] = rd32(0x000c3450u + + 0x38u);
    }
L_000c344c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c3454u, cpu->r[12], 0, 0);
    }
L_000c3450:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c3458u, cpu->r[2], 0, 0);
    }
L_000c3454:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001c0u, 0, 0);
    }
L_000c3458:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c3460u, cpu->r[3], 0, 0);
    }
L_000c345c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c3460:;
    {
        cpu->r[14] = 0x000c3464u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c3464:;
    {
        goto L_000c2988;
    }
L_000c349c:;
    {
        cpu->r[1] = rd32(0x000c34a4u + - 0x18u);
    }
L_000c34a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c34a4:;
    {
        cpu->r[12] = rd32(0x000c34acu + - 0x1cu);
    }
L_000c34a8:;
    {
        cpu->r[14] = 0x00001595u;
    }
L_000c34ac:;
    {
        cpu->r[2] = rd32(0x000c34b4u + - 0x20u);
    }
L_000c34b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c34b8u, cpu->r[1], 0, 0);
    }
L_000c34b4:;
    {
        cpu->r[3] = rd32(0x000c34bcu + - 0x24u);
    }
L_000c34b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c34c0u, cpu->r[12], 0, 0);
    }
L_000c34bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c34c4u, cpu->r[2], 0, 0);
    }
L_000c34c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001c0u, 0, 0);
    }
L_000c34c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c34ccu, cpu->r[3], 0, 0);
    }
L_000c34c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c34cc:;
    {
        cpu->r[14] = 0x000c34d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c34d0:;
    {
        goto L_000c2960;
    }
}

/* _ZN5Scene12RenderSkyBoxEb @ 000c34d4 (arm) */
void fn_000c34d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c34d4:;
    {
        cpu->r[3] = rd32(0x000c34dcu + + 0x2f0u);
    }
L_000c34d8:;
    {
        cpu->r[2] = 0x00001c98u;
    }
L_000c34dc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000c34e0:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000c34e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c34e8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000c34ec:;
    {
        cpu->r[1] = rd32(0x000c34f4u + + 0x2dcu);
    }
L_000c34f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c34f8u, cpu->r[3], 0, 0);
    }
L_000c34f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c34f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000c34fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c3500:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c3504:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x17cu);
    }
L_000c3508:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_000c350c:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_000c3510:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c3514:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c3518:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c351c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2] + + 0xc0u);
    }
L_000c3520:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[2] + + 0x48u);
    }
L_000c3524:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[2] + + 0x84u);
    }
L_000c3528:;
    {
        cpu->r[14] = 0x000c3530u;
    }
L_000c352c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3530u)) return;
    }
L_000c3530:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c3534:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_000c3538:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000c353c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x28u);
    }
L_000c3540:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000c3544:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3738;
        }
    }
L_000c3548:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_000c354c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x30u);
    }
L_000c3550:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001au, 1, 1);
    }
L_000c3554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c357c;
        }
    }
L_000c3558:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000c355c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c357c;
        }
    }
L_000c3560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c3564:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000c3568:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c3738;
        }
    }
L_000c356c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x7cu);
    }
L_000c3570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004cu, 0, 0);
    }
L_000c3574:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001au, 1, 1);
    }
L_000c3578:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3558;
        }
    }
L_000c357c:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_000c3580:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c3584:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_000c3588:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000c358c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000c3590:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c3598u + + 0x228u);
    }
L_000c3594:;
    {
        vfp_vsub(cpu, 17, 16, 17);
    }
L_000c3598:;
    {
        cpu->r[7] = 0x00001c98u;
    }
L_000c359c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,19);
    }
L_000c35a0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c35a4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000c35a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c35ac:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000c35b0:;
    {
        cpu->r[14] = 0x000c35b4u; fn_000b5ccc(cpu);
    }
L_000c35b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c35b8:;
    {
        cpu->r[14] = 0x000c35bcu; fn_000ea4dc(cpu);
    }
L_000c35bc:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000c35c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c35c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c35c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c35cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3788;
        }
    }
L_000c35d0:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000c35d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c35d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c35dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c35e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c35e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c35e8:;
    {
        cpu->r[14] = 0x000c35f0u;
    }
L_000c35ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c35f0u)) return;
    }
L_000c35f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c35f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3750;
        }
    }
L_000c35f8:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000c35fc:;
    {
        cpu->r[7] = 0x00001c9cu;
    }
L_000c3600:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3604:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c3608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c360c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c3610:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c3614:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c3618:;
    {
        cpu->r[14] = 0x000c3620u;
    }
L_000c361c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3620u)) return;
    }
L_000c3620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c3624:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000c3628:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0]);
    }
L_000c362c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000c3630:;
    {
        vfp_vsub(cpu, 16, 16, 19);
    }
L_000c3634:;
    {
        cpu->r[14] = 0x000c3638u; fn_00153600(cpu);
    }
L_000c3638:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c3640u + + 0x184u);
    }
L_000c363c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3640:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3644:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000c3648:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000c3650u + + 0x178u);
    }
L_000c364c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c3650:;
    {
        vfp_vsub(cpu, 15, 17, 17);
    }
L_000c3654:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3658:;
    {
        vfp_vsub(cpu, 20, 20, 18);
    }
L_000c365c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c3660:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000c3664:;
    {
        cpu->r[14] = 0x000c3668u; fn_00155f80(cpu);
    }
L_000c3668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c366c:;
    {
        cpu->r[14] = 0x000c3670u; fn_00155f80(cpu);
    }
L_000c3670:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c3674:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c3678:;
    {
        cpu->r[14] = 0x000c367cu; imp_atan2f(cpu); /* atan2f */
    }
L_000c367c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c3680:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000c3684:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c3688:;
    {
        cpu->r[14] = 0x000c368cu; imp_atan2f(cpu); /* atan2f */
    }
L_000c368c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c3690:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c3694:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000c3698:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000c369c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c36a0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000c36a4:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_000c36a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c36ac:;
    {
        cpu->r[14] = 0x000c36b0u; fn_000b5fc4(cpu);
    }
L_000c36b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c36b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000c36b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000c36bc:;
    {
        cpu->r[14] = 0x000c36c0u; fn_00154350(cpu);
    }
L_000c36c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c36c4:;
    {
        cpu->r[14] = 0x000c36c8u; fn_000ea4dc(cpu);
    }
L_000c36c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c36cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3744;
        }
    }
L_000c36d0:;
    {
        cpu->r[2] = 0x0000176cu;
    }
L_000c36d4:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000c36d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c36dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c36e0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c36e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000c36e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000000eu;
        }
    }
L_000c36ec:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_000c36f0:;
    {
        cpu->r[3] = 0x00001c98u;
    }
L_000c36f4:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000c36f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c36fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3700:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c3704:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c3708:;
    {
        cpu->r[14] = 0x000c3710u;
    }
L_000c370c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3710u)) return;
    }
L_000c3710:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000c3714:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c3718:;
    {
        cpu->r[0] = 0x00000b60u;
    }
L_000c371c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000c3720:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_000c3724:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000c3728:;
    {
        cpu->r[14] = 0x000c372cu; imp_glEnable(cpu); /* glEnable */
    }
L_000c372c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c3730:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000c3734:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3738u)) return;
    }
L_000c3738:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c373c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3590;
        }
    }
L_000c3740:;
    {
        goto L_000c372c;
    }
L_000c3744:;
    {
        cpu->r[0] = 0x00000b60u;
    }
L_000c3748:;
    {
        cpu->r[14] = 0x000c374cu; imp_glDisable(cpu); /* glDisable */
    }
L_000c374c:;
    {
        goto L_000c36d0;
    }
L_000c3750:;
    {
        cpu->r[1] = rd32(0x000c3758u + + 0x7cu);
    }
L_000c3754:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c3758:;
    {
        cpu->r[12] = rd32(0x000c3760u + + 0x78u);
    }
L_000c375c:;
    {
        cpu->r[14] = 0x00001517u;
    }
L_000c3760:;
    {
        cpu->r[2] = rd32(0x000c3768u + + 0x74u);
    }
L_000c3764:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c376cu, cpu->r[1], 0, 0);
    }
L_000c3768:;
    {
        cpu->r[3] = rd32(0x000c3770u + + 0x70u);
    }
L_000c376c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c3774u, cpu->r[12], 0, 0);
    }
L_000c3770:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c3778u, cpu->r[2], 0, 0);
    }
L_000c3774:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001d0u, 0, 0);
    }
L_000c3778:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c3780u, cpu->r[3], 0, 0);
    }
L_000c377c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c3780:;
    {
        cpu->r[14] = 0x000c3784u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c3784:;
    {
        goto L_000c35f8;
    }
L_000c3788:;
    {
        cpu->r[1] = rd32(0x000c3790u + + 0x54u);
    }
L_000c378c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c3790:;
    {
        cpu->r[12] = rd32(0x000c3798u + + 0x50u);
    }
L_000c3794:;
    {
        cpu->r[14] = 0x00001516u;
    }
L_000c3798:;
    {
        cpu->r[2] = rd32(0x000c37a0u + + 0x4cu);
    }
L_000c379c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c37a4u, cpu->r[1], 0, 0);
    }
L_000c37a0:;
    {
        cpu->r[3] = rd32(0x000c37a8u + + 0x48u);
    }
L_000c37a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c37acu, cpu->r[12], 0, 0);
    }
L_000c37a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c37b0u, cpu->r[2], 0, 0);
    }
L_000c37ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001d0u, 0, 0);
    }
L_000c37b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c37b8u, cpu->r[3], 0, 0);
    }
L_000c37b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c37b8:;
    {
        cpu->r[14] = 0x000c37bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c37bc:;
    {
        goto L_000c35d0;
    }
}

/* _ZN5Scene19UpdateCameraBobbingEv @ 000c37f4 (arm) */
void fn_000c37f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c37f4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c37f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000c37fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000c3800:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c3804:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3808:;
    {
        cpu->r[0] = 0x0000002au;
    }
L_000c380c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3810:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c3814:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c3818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c381c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c3820:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c3824:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_000c3828:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000c382c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x464u);
    }
L_000c3830:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000c3834:;
    {
        cpu->r[14] = 0x000c3838u; fn_00093f34(cpu);
    }
L_000c3838:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000c383c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000c3840:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000c3844:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_000c3848:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c3850u + + 0x15cu);
    }
L_000c384c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000c3850:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c3854:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c3858:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000c385c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c38b0;
        }
    }
L_000c3860:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000c3864:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3868:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c386c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x154u);
    }
L_000c3870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3874:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000c3878:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x154u, cpu->r[3]);
        }
    }
L_000c387c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c397c;
        }
    }
L_000c3880:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x150u);
    }
L_000c3884:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c3888:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000c388c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x150u, cpu->r[2]);
        }
    }
L_000c3890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3998;
        }
    }
L_000c3894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c391c;
        }
    }
L_000c389c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x150u);
    }
L_000c38a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c38a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c38cc;
        }
    }
L_000c38a8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000c38ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c38b0u)) return;
    }
L_000c38b0:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000c38b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c38b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c38bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c38c0:;
    {
        wr32(cpu->r[3] + + 0x154u, cpu->r[2]);
    }
L_000c38c4:;
    {
        wr32(cpu->r[3] + + 0x150u, cpu->r[2]);
    }
L_000c38c8:;
    {
        goto L_000c38a8;
    }
L_000c38cc:;
    {
        cpu->r[14] = 0x000c38d0u; imp_lrand48(cpu); /* lrand48 */
    }
L_000c38d0:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_000c38d4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_000c38d8:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000c38dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c38e0:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c38e4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000c38e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c38ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000c38f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000c38f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000c38f8:;
    {
        wr32(cpu->r[5] + + 0x150u, cpu->r[0]);
    }
L_000c38fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x150u);
    }
L_000c3900:;
    {
        cpu->r[14] = 0x000c3904u; imp_lrand48(cpu); /* lrand48 */
    }
L_000c3904:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c3908:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000c390c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c3910:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_000c3914:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[5]);
    }
L_000c3918:;
    {
        goto L_000c38a8;
    }
L_000c391c:;
    {
        cpu->r[14] = 0x000c3920u; imp_lrand48(cpu); /* lrand48 */
    }
L_000c3920:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_000c3924:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_000c3928:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000c392c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c3930:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3934:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c3938:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000c393c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000c3940:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000c3944:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000c3948:;
    {
        wr32(cpu->r[5] + + 0x154u, cpu->r[0]);
    }
L_000c394c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x154u);
    }
L_000c3950:;
    {
        cpu->r[14] = 0x000c3954u; imp_lrand48(cpu); /* lrand48 */
    }
L_000c3954:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3958:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_000c395c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000c3960:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c3964:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_000c3968:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x150u);
    }
L_000c396c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3970:;
    {
        wr32(cpu->r[7] + + 0x154u, cpu->r[8]);
    }
L_000c3974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c38a8;
        }
    }
L_000c3978:;
    {
        goto L_000c38cc;
    }
L_000c397c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x150u);
    }
L_000c3980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000c3984:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x154u, cpu->r[3]);
        }
    }
L_000c3988:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c398c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000c3990:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x150u, cpu->r[2]);
        }
    }
L_000c3994:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c3894;
        }
    }
L_000c3998:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000c399c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x150u, cpu->r[2]);
        }
    }
L_000c39a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c39a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c389c;
        }
    }
L_000c39a8:;
    {
        goto L_000c391c;
    }
}

/* _ZN5Scene11ResetCameraEv @ 000c39b0 (arm) */
void fn_000c39b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c39b0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000c39b4:;
    {
        cpu->r[4] = 0x00008818u;
    }
L_000c39b8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c39bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c39c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c39c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c39c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000c39cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000c39d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c39d4:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_000c39d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c39dc:;
    {
        cpu->r[14] = 0x000c39e0u; fn_0014960c(cpu);
    }
L_000c39e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000c39e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c39e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_000c39ec:;
    {
        return fn_0014be44(cpu);
    }
}

/* _ZN5Scene10loadLightsEP8LZMAFile @ 000c39f0 (arm) */
void fn_000c39f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c39f0:;
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
L_000c39f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c39f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000c39fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000c3a00:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000c3a04:;
    {
        cpu->r[14] = 0x000c3a08u; fn_000fc678(cpu);
    }
L_000c3a08:;
    {
        cpu->r[6] = 0x00008448u;
    }
L_000c3a0c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c3a10:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000c3a14:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_000c3a18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c3a1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3a28;
        }
    }
L_000c3a20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c3a24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3a28u)) return;
    }
L_000c3a28:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000c3a2c:;
    {
        cpu->r[14] = 0x000c3a30u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c3a30:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000c3a34:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3a38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c3a3c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000c3a40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000c3a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3a20;
        }
    }
L_000c3a48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3a4c:;
    {
        cpu->r[14] = 0x000c3a50u; imp__Znaj(cpu); /* _Znaj */
    }
L_000c3a50:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c3a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_000c3a58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3a20;
        }
    }
L_000c3a5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c3a60:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c3a64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3a68:;
    {
        cpu->r[14] = 0x000c3a6cu; fn_000fc5f4(cpu);
    }
L_000c3a6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3a70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3a74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000c3a78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3b14;
        }
    }
L_000c3a7c:;
    {
        cpu->r[3] = rd32(0x000c3a84u + + 0x1dcu);
    }
L_000c3a80:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000c3a84:;
    {
        cpu->r[10] = rd32(0x000c3a8cu + + 0x1d8u);
    }
L_000c3a88:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000c3a8c:;
    {
        cpu->r[9] = rd32(0x000c3a94u + + 0x1d4u);
    }
L_000c3a90:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c3a98u, cpu->r[3], 0, 0);
    }
L_000c3a94:;
    {
        cpu->r[11] = rd32(0x000c3a9cu + + 0x1d0u);
    }
L_000c3a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e0u, 0, 0);
    }
L_000c3a9c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c3aa4u, cpu->r[10], 0, 0);
    }
L_000c3aa0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c3aa8u, cpu->r[9], 0, 0);
    }
L_000c3aa4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c3aa8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c3ab0u, cpu->r[11], 0, 0);
    }
L_000c3aac:;
    {
        goto L_000c3adc;
    }
L_000c3ab0:;
    {
        cpu->r[12] = 0x000009d3u;
    }
L_000c3ab4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c3ab8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c3abc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c3ac0:;
    {
        cpu->r[14] = 0x000c3ac4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c3ac4:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000c3ac8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c3acc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3ad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3ad4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c3ad8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3b14;
        }
    }
L_000c3adc:;
    {
        cpu->r[12] = rd8(cpu->r[8] + cpu->r[6]);
    }
L_000c3ae0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000c3ae4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
        }
    }
L_000c3ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3ac4;
        }
    }
L_000c3aec:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
        }
    }
L_000c3af0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000c3ac4;
        }
    }
L_000c3af4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_000c3af8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c3afc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c3b00:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c3b04:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000c3b08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3ab0;
        }
    }
L_000c3b0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_000c3b10:;
    {
        goto L_000c3ac4;
    }
L_000c3b14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c3b18:;
    {
        cpu->r[14] = 0x000c3b1cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000c3b1c:;
    {
        cpu->r[3] = 0x0000844cu;
    }
L_000c3b20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3b24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c3b28:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000c3b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3c50;
        }
    }
L_000c3b30:;
    {
        cpu->r[14] = 0x000c3b34u; fn_0018b9ac(cpu);
    }
L_000c3b34:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000c3b38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3b3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3b40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3b44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3c38;
        }
    }
L_000c3b48:;
    {
        cpu->r[3] = rd32(0x000c3b50u + + 0x120u);
    }
L_000c3b4c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000c3b50:;
    {
        cpu->r[10] = rd32(0x000c3b58u + + 0x11cu);
    }
L_000c3b54:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000c3b58:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c3b60u, cpu->r[3], 0, 0);
    }
L_000c3b5c:;
    {
        cpu->r[11] = rd32(0x000c3b64u + + 0x114u);
    }
L_000c3b60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e0u, 0, 0);
    }
L_000c3b64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c3b68:;
    {
        cpu->r[3] = rd32(0x000c3b70u + + 0x10cu);
    }
L_000c3b6c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c3b74u, cpu->r[10], 0, 0);
    }
L_000c3b70:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c3b78u, cpu->r[11], 0, 0);
    }
L_000c3b74:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c3b7cu, cpu->r[3], 0, 0);
    }
L_000c3b78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c3b7c:;
    {
        goto L_000c3bcc;
    }
L_000c3b80:;
    {
        cpu->r[14] = 0x000c3b84u; fn_0018ba6c(cpu);
    }
L_000c3b84:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000c3b88:;
    {
        cpu->r[14] = 0x000c3b8cu; fn_001470a8(cpu);
    }
L_000c3b8c:;
    {
        cpu->r[2] = 0x00008444u;
    }
L_000c3b90:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c3b94:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c3b98:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c3b9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c3ba0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c3ba4:;
    {
        wr32(cpu->r[2] + cpu->r[7], cpu->r[9]);
    }
L_000c3ba8:;
    {
        cpu->r[14] = 0x000c3bb0u;
    }
L_000c3bac:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3bb0u)) return;
    }
L_000c3bb0:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000c3bb4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c3bb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3bbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000c3bc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3bc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c3bc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3c38;
        }
    }
L_000c3bcc:;
    {
        cpu->r[12] = rd8(cpu->r[8] + cpu->r[6]);
    }
L_000c3bd0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000c3bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3c10;
        }
    }
L_000c3bd8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_000c3bdc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000c3b80;
        }
    }
L_000c3be0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_000c3be4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c3be8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c3bec:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000c3bf0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c3bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3c24;
        }
    }
L_000c3bf8:;
    {
        cpu->r[12] = 0x00000a02u;
    }
L_000c3bfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c3c00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c3c04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c3c08:;
    {
        cpu->r[14] = 0x000c3c0cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c3c0c:;
    {
        goto L_000c3bb0;
    }
L_000c3c10:;
    {
        cpu->r[0] = 0x00000040u;
    }
L_000c3c14:;
    {
        cpu->r[14] = 0x000c3c18u; fn_0018ba6c(cpu);
    }
L_000c3c18:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000c3c1c:;
    {
        cpu->r[14] = 0x000c3c20u; fn_00147344(cpu);
    }
L_000c3c20:;
    {
        goto L_000c3b8c;
    }
L_000c3c24:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_000c3c28:;
    {
        cpu->r[14] = 0x000c3c2cu; fn_0018ba6c(cpu);
    }
L_000c3c2c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000c3c30:;
    {
        cpu->r[14] = 0x000c3c34u; fn_0014728c(cpu);
    }
L_000c3c34:;
    {
        goto L_000c3b8c;
    }
L_000c3c38:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c3c3c:;
    {
        cpu->r[14] = 0x000c3c40u; fn_0018b9ac(cpu);
    }
L_000c3c40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c3c44:;
    {
        cpu->r[14] = 0x000c3c48u; fn_0018ba60(cpu);
    }
L_000c3c48:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c3c4c:;
    {
        goto L_000c3a20;
    }
L_000c3c50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c3c54:;
    {
        cpu->r[14] = 0x000c3c58u; fn_0018ba60(cpu);
    }
L_000c3c58:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_000c3c5c:;
    {
        goto L_000c3a20;
    }
}

/* _ZN5Scene12RayIntersectEP8Vector3dS1_S1_PP17StaticSceneObjectPP7TexturePfS8_ @ 000c3c80 (arm) */
void fn_000c3c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c3c80:;
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
L_000c3c84:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000c3c88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c3c8c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_000c3c90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000c3c94:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000c3c98:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000c3c9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000c3ca0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000c3ca4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000c3ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3de8;
        }
    }
L_000c3cac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3de8;
        }
    }
L_000c3cb4:;
    {
        cpu->r[3] = 0x00001c78u;
    }
L_000c3cb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3cbc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c3cc0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c3cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3de8;
        }
    }
L_000c3cc8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000c3cd0u + + 0x128u);
    }
L_000c3ccc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c3cd0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000c3cd4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000c3cd8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000c3cdc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c3ce0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c3ce4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000c3ce8:;
    {
        *vfp_s(cpu,20) = *vfp_s(cpu,18);
    }
L_000c3cec:;
    {
        *vfp_s(cpu,19) = *vfp_s(cpu,18);
    }
L_000c3cf0:;
    {
        *vfp_s(cpu,22) = *vfp_s(cpu,18);
    }
L_000c3cf4:;
    {
        *vfp_s(cpu,21) = *vfp_s(cpu,18);
    }
L_000c3cf8:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,18);
    }
L_000c3cfc:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,18);
    }
L_000c3d00:;
    {
        goto L_000c3d54;
    }
L_000c3d04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c3d08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c3d0c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
        }
    }
L_000c3d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3d24;
        }
    }
L_000c3d14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_000c3d18:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_000c3d1c:;
    {
        vfp_sync_flags(cpu);
    }
L_000c3d20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3d88;
        }
    }
L_000c3d24:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_000c3d28:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_000c3d2c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x180u);
    }
L_000c3d30:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000c3d34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000c3d38:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000c3d3c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c3d40:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_000c3d44:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_000c3d48:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
    }
L_000c3d4c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000c3d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3d9c;
        }
    }
L_000c3d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c3d58:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c3d5c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c3d60:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000c3d64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3d68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3d6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c3d70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_000c3d74:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000c3d78:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_000c3d7c:;
    {
        cpu->r[14] = 0x000c3d80u; fn_000ea80c(cpu);
    }
L_000c3d80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c3d84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3d04;
        }
    }
L_000c3d88:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
    }
L_000c3d8c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x180u);
    }
L_000c3d90:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c3d94:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
    }
L_000c3d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3d54;
        }
    }
L_000c3d9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c3da0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c3da4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3de8;
        }
    }
L_000c3da8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c3dac:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000c3db0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_000c3db4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c3db8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000c3dbc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000c3dc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c3dc4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000c3dc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c3dcc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000c3dd0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000c3dd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x90u);
    }
L_000c3dd8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_000c3ddc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x94u);
    }
L_000c3de0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_000c3de4:;
    {
        goto L_000c3dec;
    }
L_000c3de8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c3dec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000c3df0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000c3df4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3df8u)) return;
    }
}

/* _ZN5Scene24UpdatePlayerCarParticlesEv @ 000c3dfc (arm) */
void fn_000c3dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c3dfc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c3e00:;
    {
        cpu->r[2] = rd32(0x000c3e08u + + 0xd4u);
    }
L_000c3e04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3e08:;
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
L_000c3e0c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c3e10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000c3e14:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c3e18:;
    {
        cpu->r[0] = rd32(0x000c3e20u + + 0xc0u);
    }
L_000c3e1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c3e24u, cpu->r[2], 0, 0);
    }
L_000c3e20:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_000c3e24:;
    {
        cpu->r[9] = 0x00008c4cu;
    }
L_000c3e28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00000290u, 0, 0);
    }
L_000c3e2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c3e30:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000c3e34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000c3e38:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000c3e3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_000c3e40:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c3e44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000280u, 0, 0);
    }
L_000c3e48:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c3e4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000c3e50:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000c3e54:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_000c3e58:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c3e5c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000c3e60:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c3e64:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000c3e68:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x528u);
    }
L_000c3e6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c3e70:;
    {
        cpu->r[14] = 0x000c3e74u; fn_00180c78(cpu);
    }
L_000c3e74:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x524u);
    }
L_000c3e78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c3e7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c3e80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000c3e84:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x1c1u);
    }
L_000c3e88:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = rd8(cpu->r[0] + + 0x1c0u);
        }
    }
L_000c3e8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c3e90:;
    {
        cpu->r[14] = 0x000c3e94u; fn_000b9660(cpu);
    }
L_000c3e94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c3e98:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000c3e9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3ec8;
        }
    }
L_000c3ea4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000c3ea8:;
    {
        cpu->r[14] = 0x000c3eacu; fn_00158164(cpu);
    }
L_000c3eac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c3eb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000c3eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3ec8;
        }
    }
L_000c3eb8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000c3ebc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c3ec0:;
    {
        cpu->r[14] = 0x000c3ec4u; fn_00158fe8(cpu);
    }
L_000c3ec4:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_000c3ec8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000c3ecc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_000c3ed0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3e68;
        }
    }
L_000c3ed4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c3ed8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3edcu)) return;
    }
}

/* _ZN5Scene14ReloadNextStepEv @ 000c3ee4 (arm) */
void fn_000c3ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c3ee4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000c3ee8:;
    {
        cpu->r[6] = 0x000017f4u;
    }
L_000c3eec:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c3ef0:;
    {
        cpu->r[5] = rd32(0x000c3ef8u + + 0xacu);
    }
L_000c3ef4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000c3ef8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c3efc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000c3f00:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c3f08u, cpu->r[5], 0, 0);
    }
L_000c3f04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000c3f08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c3f2c;
        }
    }
L_000c3f0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000c3f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c3f48;
        }
    }
L_000c3f14:;
    {
        cpu->r[2] = 0x000017f4u;
    }
L_000c3f18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c3f1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c3f20:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000c3f24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c3f28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c3f2cu)) return;
    }
L_000c3f2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00004700u, 0, 0);
    }
L_000c3f30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_000c3f34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000c3f38:;
    {
        cpu->r[14] = 0x000c3f3cu; fn_000b12f4(cpu);
    }
L_000c3f3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c3f40:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000c3f44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c3f14;
        }
    }
L_000c3f48:;
    {
        cpu->r[3] = rd32(0x000c3f50u + + 0x58u);
    }
L_000c3f4c:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000c3f50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c3f54:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c3f58:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c3f5c:;
    {
        cpu->r[14] = 0x000c3f60u; fn_00135de0(cpu);
    }
L_000c3f60:;
    {
        cpu->r[1] = 0x00005207u;
    }
L_000c3f64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c3f68:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c3f6c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c3f70:;
    {
        cpu->r[14] = 0x000c3f74u; fn_00135de0(cpu);
    }
L_000c3f74:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c3f78:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c3f7c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c3f80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c3f84:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000c3f88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c3f8c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000c3f90:;
    {
        cpu->r[14] = 0x000c3f94u; fn_00136660(cpu);
    }
L_000c3f94:;
    {
        cpu->r[3] = 0x000017f4u;
    }
L_000c3f98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c3f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c3fa0:;
    {
        goto L_000c3f14;
    }
}

/* _ZN5Scene16PrepareInterruptEv @ 000c3fac (arm) */
void fn_000c3fac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c3fac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000c3fb0:;
    {
        cpu->r[7] = 0x000017f0u;
    }
L_000c3fb4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c3fb8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c3fbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000c3fc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c3fc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c400c;
        }
    }
L_000c3fc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00011c00u, 0, 0);
    }
L_000c3fcc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c3fd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_000c3fd4:;
    {
        goto L_000c3fe8;
    }
L_000c3fd8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c3fdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000c3fe0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c3fe4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c400c;
        }
    }
L_000c3fe8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000007u, 1, 1);
    }
L_000c3fec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c3ff0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c3fd8;
        }
    }
L_000c3ff4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c3ff8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000c3ffc:;
    {
        cpu->r[14] = 0x000c4000u; fn_000b0558(cpu);
    }
L_000c4000:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c4004:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c4008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c3fe8;
        }
    }
L_000c400c:;
    {
        cpu->r[3] = 0x000017f4u;
    }
L_000c4010:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c4014:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4018:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000c401c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4020u)) return;
    }
}

/* _ZN5Scene23GetAvailableUnusedColorEi @ 000c4020 (arm) */
void fn_000c4020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4020:;
    {
        cpu->r[2] = rd32(0x000c4028u + + 0x364u);
    }
L_000c4024:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c4028:;
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
L_000c402c:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000c4030:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_000c4034:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c4038:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c403c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000c4040:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000c4044:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c4048:;
    {
        cpu->r[2] = rd32(0x000c4050u + + 0x340u);
    }
L_000c404c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c4054u, cpu->r[0], 0, 0);
    }
L_000c4050:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c4054:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000c4058:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000c405c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000c4060:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c4064:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c4068:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c406c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000c4070:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c4074:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000c4078:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_000c407c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000c4080:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c4084:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000c4088:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000c408c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c4090:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c4094:;
    {
        cpu->r[3] = 0x00001934u;
    }
L_000c4098:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c409c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000c40a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c40a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c40a8:;
    {
        cpu->r[14] = 0x000c40acu; imp__Znaj(cpu); /* _Znaj */
    }
L_000c40ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c40b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c40b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000c40b8:;
    {
        cpu->r[14] = 0x000c40bcu; imp_memset(cpu); /* memset */
    }
L_000c40bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c40c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c40c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4354;
        }
    }
L_000c40c8:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x000c40d0u + + 0x2a0u);
    }
L_000c40cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000c40d0:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x000c40d8u + + 0x2a0u);
    }
L_000c40d4:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c40d8:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x000c40e0u + + 0x2a0u);
    }
L_000c40dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c40e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c40e4:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000c40e8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000c40ec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000c40f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000c40f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000c40f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000c40fc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000c4104u + + 0x284u);
    }
L_000c4100:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000c4104:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000c4108:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000c410c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c4110:;
    {
        cpu->r[14] = 0x000c4114u; fn_000931e4(cpu);
    }
L_000c4114:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c4118:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000c411c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000c4120:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c4124:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000c4128:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c412c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c4130:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_000c4134:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000c4138:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000c413c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c4140:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_000c4144:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[1]);
        }
    }
L_000c4148:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c414c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000c4150:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c4154:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000c4158:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_000c415c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_000c4160:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000c4164:;
    {
        cpu->r[14] = 0x000c4168u; fn_00093254(cpu);
    }
L_000c4168:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_000c416c:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_000c4170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_000c4174:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c4178:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c417c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c4180:;
    {
        *vfp_d(cpu,5) = *vfp_d(cpu,8);
    }
L_000c4184:;
    {
        *vfp_d(cpu, 5) = -(*vfp_d(cpu, 5) - *vfp_d(cpu, 6) * *vfp_d(cpu, 8));
    }
L_000c4188:;
    {
        *vfp_d(cpu,7) = *vfp_d(cpu,11);
    }
L_000c418c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 10);
    }
L_000c4190:;
    {
        *vfp_d(cpu,6) = *vfp_d(cpu,7);
    }
L_000c4194:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000c4198:;
    {
        vfp_vadd(cpu, 14, 14, 18);
    }
L_000c419c:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_000c41a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c41a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c41a8:;
    {
        cpu->r[14] = 0x000c41acu; fn_0012b848(cpu);
    }
L_000c41ac:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c41b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4338;
        }
    }
L_000c41b4:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c41b8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c41bc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c41c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c41c4:;
    {
        cpu->r[11] = 0x00000032u;
    }
L_000c41c8:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_000c41cc:;
    {
        goto L_000c41dc;
    }
L_000c41d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c41d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_000c41d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4334;
        }
    }
L_000c41dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c41e0:;
    {
        *vfp_d(cpu,5) = *vfp_d(cpu,8);
    }
L_000c41e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000c41e8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c41ec:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[2]; cpu->r[2] = v;
    }
L_000c41f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000c41f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001a00u, 0, 0);
    }
L_000c41f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_000c41fc:;
    {
        cpu->r[4] = rd16(cpu->r[3] + + 0x6u);
    }
L_000c4200:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x8u);
    }
L_000c4204:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x5u);
    }
L_000c4208:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[14] = v;
    }
L_000c420c:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[14] = v;
    }
L_000c4210:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000c4214:;
    {
        cpu->r[4] = rd16(cpu->r[2] + + 0x6u);
    }
L_000c4218:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x8u);
    }
L_000c421c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x5u);
    }
L_000c4220:;
    {
        cpu->r[12] = rd16(cpu->r[3] + + 0xau);
    }
L_000c4224:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_000c4228:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xcu);
    }
L_000c422c:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[14] = v;
    }
L_000c4230:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[14];
    }
L_000c4234:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_000c4238:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x9u);
    }
L_000c423c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_000c4240:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[2] = v;
    }
L_000c4244:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000c4248:;
    {
        *vfp_d(cpu, 5) = -(*vfp_d(cpu, 5) - *vfp_d(cpu, 6) * *vfp_d(cpu, 8));
    }
L_000c424c:;
    {
        *vfp_d(cpu,6) = *vfp_d(cpu,5);
    }
L_000c4250:;
    {
        *vfp_d(cpu,5) = *vfp_d(cpu,11);
    }
L_000c4254:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) + *vfp_d(cpu, 6) * *vfp_d(cpu, 10);
    }
L_000c4258:;
    {
        vfp_vadd(cpu, 14, 14, 18);
    }
L_000c425c:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,5);
    }
L_000c4260:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c4264:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c4268:;
    {
        cpu->r[14] = 0x000c426cu; fn_0012b848(cpu);
    }
L_000c426c:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x39u);
    }
L_000c4270:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x3du);
    }
L_000c4274:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x38u);
    }
L_000c4278:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000c427c:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x3cu);
    }
L_000c4280:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c4284:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000c4288:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x3eu);
    }
L_000c428c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x3au);
    }
L_000c4290:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000c4294:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000c4298:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_000c429c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000c42a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c42a4:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000c42a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_000c42ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000c42b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_000c42b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c41d0;
        }
    }
L_000c42b8:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_000c42bc:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000c42c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c42c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000c42c8:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000c42cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000c42d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c410c;
        }
    }
L_000c42d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c42d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c42dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4354;
        }
    }
L_000c42e0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000c42e4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c42e8:;
    {
        cpu->r[14] = 0x000c42ecu; fn_000964c8(cpu);
    }
L_000c42ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c42f0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000c42f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c42f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c42fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4308;
        }
    }
L_000c4300:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000c4304:;
    {
        cpu->r[14] = 0x000c4308u; fn_0018ba60(cpu);
    }
L_000c4308:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c430c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c4310:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c4314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c4318:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_000c431c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c4320:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c4324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c436c;
        }
    }
L_000c4328:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000c432c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000c4330:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4334u)) return;
    }
L_000c4334:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_000c4338:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c433c:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000c4340:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c4344:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000c4348:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c434c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000c4350:;
    {
        goto L_000c42bc;
    }
L_000c4354:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4358:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000c435c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c4360:;
    {
        cpu->r[14] = 0x000c4364u; fn_000964c8(cpu);
    }
L_000c4364:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c4368:;
    {
        goto L_000c42f4;
    }
L_000c436c:;
    {
        cpu->r[14] = 0x000c4370u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000c4370:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_000c4374:;
    {
        if (cond_test(cpu, 4)) {
        /* svc */
        }
    }
L_000c4378:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t base = cpu->r[9];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        uint32_t v4 = rd32(ea + 16u);
        uint32_t v5 = rd32(ea + 20u);
        uint32_t v6 = rd32(ea + 24u);
        uint32_t v7 = rd32(ea + 28u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
        cpu->r[4] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[11] = v5;
        cpu->r[12] = v6;
        uint32_t t = v7;
        if (guest_pc_write(cpu, t, entry_lr, 0x000c437cu)) return;
        }
    }
L_000c437c:;
    {
        if (cond_test(cpu, 4)) {
        /* svc */
        }
    }
L_000c4380:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & cpu->r[0]; cpu->r[0] = v;
        }
    }
L_000c4384:;
    {
        if (cond_test(cpu, 4)) {
        /* svc */
        }
    }
L_000c4388:;
    {
        if (cond_test(cpu, 4)) {
        /* svc */
        }
    }
L_000c438c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 1, 7u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
        }
    }
L_000c4390:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN5Scene13InitCarColorsEv @ 000c4398 (arm) */
void fn_000c4398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4398:;
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
L_000c439c:;
    {
        cpu->r[7] = rd32(0x000c43a4u + + 0x2b8u);
    }
L_000c43a0:;
    {
        cpu->r[9] = rd32(0x000c43a8u + + 0x2b8u);
    }
L_000c43a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000c43a8:;
    {
        cpu->r[7] = add_flags(cpu, 0x000c43b0u, cpu->r[7], 0, 0);
    }
L_000c43ac:;
    {
        cpu->r[2] = rd32(0x000c43b4u + + 0x2b0u);
    }
L_000c43b0:;
    {
        cpu->r[11] = rd32(0x000c43b8u + + 0x2b0u);
    }
L_000c43b4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c43b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c43bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c43c4u, cpu->r[2], 0, 0);
    }
L_000c43c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001ecu, 0, 0);
    }
L_000c43c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c43c8:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000c43cc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c43d4u, cpu->r[11], 0, 0);
    }
L_000c43d0:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_000c43d4:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_000c43d8:;
    {
        cpu->r[3] = rd32(0x000c43e0u + + 0x28cu);
    }
L_000c43dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000c43e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c43e8u, cpu->r[3], 0, 0);
    }
L_000c43e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c43e8:;
    {
        cpu->r[3] = rd32(0x000c43f0u + + 0x280u);
    }
L_000c43ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c43f4u, cpu->r[3], 0, 0);
    }
L_000c43f0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000c43f4:;
    {
        goto L_000c4460;
    }
L_000c43f8:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000c43fc:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000c4400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c461c;
        }
    }
L_000c4408:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000c440c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000c4410:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c4414:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c4418:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c441c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c45e4;
        }
    }
L_000c4424:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c4428:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000c442c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4430:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000c4434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c4438:;
    {
        uint32_t v = cpu->r[1] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_000c443c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00001500u, 0, 0);
    }
L_000c4440:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_000c4444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000015u, 0, 0);
    }
L_000c4448:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000c444c:;
    {
        cpu->r[14] = 0x000c4450u; imp_memcpy(cpu); /* memcpy */
    }
L_000c4450:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000c4454:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c4458:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_000c445c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4578;
        }
    }
L_000c4460:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000c4464:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_000c4468:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_000c446c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4560;
        }
    }
L_000c4474:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000c4478:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000c447c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c43f8;
        }
    }
L_000c4484:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c4488:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c448c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c4490:;
    {
        cpu->r[3] = 0x0000150cu;
    }
L_000c4494:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c4498:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c449c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c4450;
        }
    }
L_000c44a0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c44a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c44a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c44ac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c44b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c44b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000c44b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c44bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c44c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
        }
    }
L_000c44c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000c44c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000c44cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
        }
    }
L_000c44d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c44d4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c44d8:;
    {
        cpu->r[3] = 0x00001934u;
    }
L_000c44dc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c44e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c44e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4634;
        }
    }
L_000c44e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000c44ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c44f0:;
    {
        cpu->r[14] = 0x000c44f4u; fn_000c4020(cpu);
    }
L_000c44f4:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000c44f8:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c44fc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c4500:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c4504:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000c4508:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c450c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000c4510:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000c4514:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
        }
    }
L_000c4518:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c451c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000c4520:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
        }
    }
L_000c4524:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000c4528:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_000c452c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[1]; cpu->r[0] = v;
    }
L_000c4530:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000c4534:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c4538:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000c453c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
        }
    }
L_000c4540:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_000c4544:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_000c4548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_000c454c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c4550:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000c4554:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000c4558:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000c455c:;
    {
        cpu->r[14] = 0x000c4560u; fn_00093254(cpu);
    }
L_000c4560:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_000c4564:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000c4568:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000020u, 1, 1);
    }
L_000c456c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c4570:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_000c4574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4460;
        }
    }
L_000c4578:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c457c:;
    {
        cpu->r[14] = 0x000c4580u; fn_00096b88(cpu);
    }
L_000c4580:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c45dc;
        }
    }
L_000c4588:;
    {
        cpu->r[8] = 0x00008c78u;
    }
L_000c458c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c4590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c4594:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4598:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c45dc;
        }
    }
L_000c459c:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000c45a0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c45a4:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c45a8:;
    {
        cpu->r[7] = 0x00000032u;
    }
L_000c45ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c45b0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000c45b4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4] + cpu->r[0]; cpu->r[0] = v;
    }
L_000c45b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c45bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00007e00u, 0, 0);
    }
L_000c45c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_000c45c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000c45c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_000c45cc:;
    {
        cpu->r[14] = 0x000c45d0u; imp_memcpy(cpu); /* memcpy */
    }
L_000c45d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c45d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c45d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c45ac;
        }
    }
L_000c45dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000c45e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c45e4u)) return;
    }
L_000c45e4:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000c45e8:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_000c45ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c45f0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000c45f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000c45f8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[0]; cpu->r[1] = v;
    }
L_000c45fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000c4600:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_000c4604:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001680u, 0, 0);
    }
L_000c4608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002du, 0, 0);
    }
L_000c460c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_000c4610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000c4614:;
    {
        cpu->r[14] = 0x000c4618u; imp_memcpy(cpu); /* memcpy */
    }
L_000c4618:;
    {
        goto L_000c4450;
    }
L_000c461c:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000c4620:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000c4624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000c4628:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c462c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c4630:;
    {
        goto L_000c441c;
    }
L_000c4634:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c4638:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000c463c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4640:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c4644:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c4648:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c464c:;
    {
        cpu->r[12] = 0x00000572u;
    }
L_000c4650:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c4654:;
    {
        cpu->r[14] = 0x000c4658u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c4658:;
    {
        goto L_000c44e8;
    }
}

/* _ZN5Scene13InitCarModelsEv @ 000c4674 (arm) */
void fn_000c4674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4674:;
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
L_000c4678:;
    {
        cpu->r[10] = 0x00001c90u;
    }
L_000c467c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c4680:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000c4684:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c4688:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000c468c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000c4690:;
    {
        cpu->r[8] = rd32(0x000c4698u + + 0x1fcu);
    }
L_000c4694:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c4698:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c469c:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c46a4u, cpu->r[8], 0, 0);
    }
L_000c46a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x444u);
    }
L_000c46a4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_000c46a8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_000c46ac:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x10u);
    }
L_000c46b0:;
    {
        cpu->r[14] = 0x000c46b4u; fn_00096114(cpu);
    }
L_000c46b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c46b8:;
    {
        cpu->r[14] = 0x000c46bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_000c46bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c46c0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000c46c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4888;
        }
    }
L_000c46c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c46cc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000c46d0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c46d4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000c46d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x444u);
    }
L_000c46dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000c46e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000004cu, 0, 0);
    }
L_000c46e4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x10u);
    }
L_000c46e8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_000c46ec:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[11] + cpu->r[0], cpu->r[3]);
        }
    }
L_000c46f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c46f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_000c46f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
        }
    }
L_000c46fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c4700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c46d8;
        }
    }
L_000c4704:;
    {
        cpu->r[3] = rd32(0x000c470cu + + 0x18cu);
    }
L_000c4708:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c470c:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c4710:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000c4714:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c4718:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000c471c:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000c4720:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_000c4724:;
    {
        cpu->r[8] = 0x00005f60u;
    }
L_000c4728:;
    {
        cpu->r[3] = 0x0000150cu;
    }
L_000c472c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c4730:;
    {
        cpu->r[12] = 0x000063f0u;
    }
L_000c4734:;
    {
        goto L_000c4790;
    }
L_000c4738:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000c473c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4838;
        }
    }
L_000c4744:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000c4748:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000c474c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000c4750:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000c4754:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c4758:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c47ac;
        }
    }
L_000c475c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[9], 0, 0);
    }
L_000c4760:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000c4764:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001680u, 0, 0);
    }
L_000c4768:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_000c476c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000020u, 0, 0);
    }
L_000c4770:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000c4774:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000c4778:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x5u);
    }
L_000c477c:;
    {
        wr8(cpu->r[5] + + 0x5u, cpu->r[1]);
    }
L_000c4780:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c4784:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_000c4788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c47d4;
        }
    }
L_000c478c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c4790:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000c4794:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[8]);
    }
L_000c4798:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c479c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4738;
        }
    }
L_000c47a0:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000c47a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000c47a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c484c;
        }
    }
L_000c47ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000c47b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c47b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00001500u, 0, 0);
    }
L_000c47b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_000c47bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000c47c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000c47c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_000c47c8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x5u);
    }
L_000c47cc:;
    {
        wr8(cpu->r[5] + + 0x5u, cpu->r[1]);
    }
L_000c47d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c478c;
        }
    }
L_000c47d4:;
    {
        cpu->r[12] = 0x00008c78u;
    }
L_000c47d8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c47dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000c47e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c47e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4820;
        }
    }
L_000c47e8:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000c47ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c47f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c47f4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_000c47f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c47fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000c4800:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00007e00u, 0, 0);
    }
L_000c4804:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000c4808:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_000c480c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x8u);
    }
L_000c4810:;
    {
        wr8(cpu->r[2] + + 0x5u, cpu->r[1]);
    }
L_000c4814:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000c4818:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c481c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c47f4;
        }
    }
L_000c4820:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000c4824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4880;
        }
    }
L_000c4828:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c482c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c4830:;
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
L_000c4834:;
    {
        return fn_0018ba60(cpu);
    }
L_000c4838:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000c483c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000c4840:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000c4844:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000c4848:;
    {
        goto L_000c4754;
    }
L_000c484c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4850:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000c4854:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000c4858:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000019c0u, 0, 0);
    }
L_000c485c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c4860:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000c4864:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c4868:;
    {
        cpu->r[14] = 0x000c486cu; fn_000965cc(cpu);
    }
L_000c486c:;
    {
        cpu->r[1] = rd8(cpu->r[11] + cpu->r[0]);
    }
L_000c4870:;
    {
        wr8(cpu->r[5] + + 0x5u, cpu->r[1]);
    }
L_000c4874:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_000c4878:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000c487c:;
    {
        goto L_000c4780;
    }
L_000c4880:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c4884:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4888u)) return;
    }
L_000c4888:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000c488c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000c4890:;
    {
        goto L_000c4704;
    }
}

/* _ZN5Scene29CollideCarsWithDynamicObjectsEv @ 000c489c (arm) */
void fn_000c489c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c489c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c48a0:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000c48a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c48a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c48ac:;
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
L_000c48b0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000c48b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c48b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c48bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000c48c0:;
    {
        cpu->r[1] = rd32(0x000c48c8u + + 0x364u);
    }
L_000c48c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c48c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c48cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c48d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c48d8u, cpu->r[1], 0, 0);
    }
L_000c48d4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000c48d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4bac;
        }
    }
L_000c48dc:;
    {
        cpu->r[3] = rd32(0x000c48e4u + + 0x34cu);
    }
L_000c48e0:;
    {
        cpu->r[10] = 0x00004274u;
    }
L_000c48e4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000c48e8:;
    {
        cpu->r[1] = 0x00008cb8u;
    }
L_000c48ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c48f0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000c48f8u + + 0x330u);
    }
L_000c48f4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000c48f8:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000c48fc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000c4900:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000c4904:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c4908:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000c490c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000c4910:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c4914:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000c4918:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000c491c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_000c4920:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c4924:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000c4928:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000c492c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_000c4930:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000c4934:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000c4938:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000c493c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c4940:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000c4944:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c4948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4b7c;
        }
    }
L_000c494c:;
    {
        cpu->r[8] = 0x00004270u;
    }
L_000c4950:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000c4954:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c4958:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c495c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4b7c;
        }
    }
L_000c4960:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c4964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000c4968:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c496c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000c4970:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c4974:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c4978:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c497c:;
    {
        goto L_000c4990;
    }
L_000c4980:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c4984:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000c4988:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000c498c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c4b7c;
        }
    }
L_000c4990:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000c4994:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_000c4998:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c499c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c49a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11eu);
    }
L_000c49a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c49a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4a48;
        }
    }
L_000c49ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000c49b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x3dcu);
    }
L_000c49b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x3d8u);
    }
L_000c49b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c49bc:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000c49c0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000c49c4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c49c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c49cc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000c49d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c49d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c49d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c49dc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c49e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c49e4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c49e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c49ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c49f0:;
    {
        cpu->r[14] = 0x000c49f4u; fn_000b5cc4(cpu);
    }
L_000c49f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c49f8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c49fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c4a00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c4a04:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c4a08:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000c4a0c:;
    {
        cpu->r[14] = 0x000c4a14u;
    }
L_000c4a10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4a14u)) return;
    }
L_000c4a14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c4a18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4a1c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c4a20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4120u << 16);
    }
L_000c4a24:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000c4a28:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c4a2c:;
    {
        cpu->r[14] = 0x000c4a30u; fn_0012de3c(cpu);
    }
L_000c4a30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4a34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4a48;
        }
    }
L_000c4a38:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c4a3c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c4a40:;
    {
        { uint32_t v = cpu->r[3] & 0x00000018u; set_nz(cpu, v); }
    }
L_000c4a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4bb8;
        }
    }
L_000c4a48:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11cu);
    }
L_000c4a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4a50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c4a54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000c4a58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c4a5c:;
    {
        cpu->r[14] = 0x000c4a64u;
    }
L_000c4a60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4a64u)) return;
    }
L_000c4a64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000c4a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c4a6c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11cu);
    }
L_000c4a70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4a74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4c00;
        }
    }
L_000c4a78:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000c4a7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x3dcu);
    }
L_000c4a80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x3d8u);
    }
L_000c4a84:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c4a88:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000c4a8c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000c4a90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4a94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c4a98:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000c4a9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c4aa0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c4aa4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c4aa8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c4aac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c4ab0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c4ab4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c4ab8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c4abc:;
    {
        cpu->r[14] = 0x000c4ac0u; fn_000b5cc4(cpu);
    }
L_000c4ac0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c4ac4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c4ac8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c4acc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c4ad0:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c4ad4:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000c4ad8:;
    {
        cpu->r[14] = 0x000c4ae0u;
    }
L_000c4adc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4ae0u)) return;
    }
L_000c4ae0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c4ae4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c4ae8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c4aec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4120u << 16);
    }
L_000c4af0:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000c4af4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c4af8:;
    {
        cpu->r[14] = 0x000c4afcu; fn_0012de3c(cpu);
    }
L_000c4afc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4b00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c4b04:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0xe8u);
    }
L_000c4b08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c4b0c:;
    {
        cpu->r[14] = 0x000c4b10u; fn_000c0508(cpu);
    }
L_000c4b10:;
    {
        cpu->r[1] = 0x00001d1cu;
    }
L_000c4b14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c4b18:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000c4b1c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000c4b20:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c4b24:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000c4b28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c4b2c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_000c4b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4c14;
        }
    }
L_000c4b34:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c4b38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c4b3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c4b40:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000c4b44:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000c4b48:;
    {
        cpu->r[14] = 0x000c4b50u;
    }
L_000c4b4c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4b50u)) return;
    }
L_000c4b50:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c4b54:;
    {
        cpu->r[14] = 0x000c4b58u; fn_000a5c98(cpu);
    }
L_000c4b58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x190u);
    }
L_000c4b5c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000c4b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c4b64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c4b68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000c4b6c:;
    {
        cpu->r[14] = 0x000c4b70u; fn_000e0890(cpu);
    }
L_000c4b70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000c4b74:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000c4b78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c4990;
        }
    }
L_000c4b7c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c4b80:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000c4b84:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c4b88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4b8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c4b90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c4b94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c4b98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c4b9c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000c4ba0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000c4ba4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000c4ba8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c4910;
        }
    }
L_000c4bac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000c4bb0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000c4bb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4bb8u)) return;
    }
L_000c4bb8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c4bbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4bc0:;
    {
        cpu->r[14] = 0x000c4bc8u;
    }
L_000c4bc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4bc8u)) return;
    }
L_000c4bc8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x378u);
    }
L_000c4bcc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000c4bd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4a48;
        }
    }
L_000c4bd4:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_000c4bd8:;
    {
        wr32(cpu->r[6] + + 0x64u, cpu->r[3]);
    }
L_000c4bdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x124u);
    }
L_000c4be0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c4be4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c4be8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4bec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c4bf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000c4bf4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c4bf8:;
    {
        cpu->r[14] = 0x000c4bfcu; fn_00172294(cpu);
    }
L_000c4bfc:;
    {
        goto L_000c4a48;
    }
L_000c4c00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4c04:;
    {
        cpu->r[14] = 0x000c4c08u; fn_0015d920(cpu);
    }
L_000c4c08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4980;
        }
    }
L_000c4c10:;
    {
        goto L_000c4a78;
    }
L_000c4c14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4c18:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_000c4c1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c4c20:;
    {
        cpu->r[14] = 0x000c4c24u; fn_00161bec(cpu);
    }
L_000c4c24:;
    {
        goto L_000c4b34;
    }
}

/* _ZN5Scene20UpdateSpawnedObjectsEv @ 000c4c34 (arm) */
void fn_000c4c34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4c34:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000c4c38:;
    {
        cpu->r[8] = 0x00001c70u;
    }
L_000c4c3c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c4c40:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c4c44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000c4c48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4c4c:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4c50u)) return;
        }
    }
L_000c4c50:;
    {
        cpu->r[7] = 0x00001c68u;
    }
L_000c4c54:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c4c58:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c4c5c:;
    {
        goto L_000c4c98;
    }
L_000c4c60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000c4c64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c4c68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c4c6c:;
    {
        cpu->r[14] = 0x000c4c74u;
    }
L_000c4c70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4c74u)) return;
    }
L_000c4c74:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c4c78:;
    {
        cpu->r[14] = 0x000c4c80u;
    }
L_000c4c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4c80u)) return;
    }
L_000c4c80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000c4c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4cd0;
        }
    }
L_000c4c88:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000c4c8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c4c90:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c4c94:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c4cf0;
        }
    }
L_000c4c98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000c4c9c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000c4ca0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c4ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4c88;
        }
    }
L_000c4ca8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000c4cac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c4cb0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c4cb4:;
    {
        cpu->r[14] = 0x000c4cbcu;
    }
L_000c4cb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4cbcu)) return;
    }
L_000c4cbc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c4cc0:;
    {
        cpu->r[14] = 0x000c4cc8u;
    }
L_000c4cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4cc8u)) return;
    }
L_000c4cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000c4ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4c60;
        }
    }
L_000c4cd0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c4cd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c4cd8:;
    {
        cpu->r[14] = 0x000c4ce0u;
    }
L_000c4cdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4ce0u)) return;
    }
L_000c4ce0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000c4ce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c4ce8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c4cec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c4c98;
        }
    }
L_000c4cf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4cf4u)) return;
    }
}

/* _ZN5Scene21DestroyAnimatedObjectEP17StaticSceneObject @ 000c4cf4 (arm) */
void fn_000c4cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4cf4:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000c4cf8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4cfc:;
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
L_000c4d00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c4d04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c4d08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000c4d0c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000c4d10:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000c4d14:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000c4ddc;
        }
    }
L_000c4d18:;
    {
        cpu->r[9] = rd32(0x000c4d20u + + 0xdcu);
    }
L_000c4d1c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000c4d20:;
    {
        cpu->r[8] = rd32(0x000c4d28u + + 0xd8u);
    }
L_000c4d24:;
    {
        cpu->r[10] = rd32(0x000c4d2cu + + 0xd8u);
    }
L_000c4d28:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c4d30u, cpu->r[9], 0, 0);
    }
L_000c4d2c:;
    {
        cpu->r[11] = rd32(0x000c4d34u + + 0xd4u);
    }
L_000c4d30:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c4d38u, cpu->r[8], 0, 0);
    }
L_000c4d34:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c4d3cu, cpu->r[10], 0, 0);
    }
L_000c4d38:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000001fcu, 0, 0);
    }
L_000c4d3c:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c4d44u, cpu->r[11], 0, 0);
    }
L_000c4d40:;
    {
        goto L_000c4d50;
    }
L_000c4d44:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_000c4d48:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000c4ddc;
        }
    }
L_000c4d4c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c4d50:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c4d54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c4d74;
        }
    }
L_000c4d58:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c4d5c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c4d60:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000c4d64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c4d68:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000c4d6c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000c4d70:;
    {
        cpu->r[14] = 0x000c4d74u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c4d74:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000c4d78:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_000c4d7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4d80:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c4d84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c4d88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000c4d8c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000c4d90:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_000c4d94:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000c4d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4d44;
        }
    }
L_000c4d9c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c4da0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000c4da4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000c4da8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4dc4;
        }
    }
L_000c4dac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000c4db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4de4;
        }
    }
L_000c4db4:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000c4db8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000c4dbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4dc0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_000c4dc4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000c4dc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4ddc;
        }
    }
L_000c4dcc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c4dd0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000c4dd4:;
    {
        cpu->r[14] = 0x000c4ddcu;
    }
L_000c4dd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4ddcu)) return;
    }
L_000c4ddc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c4de0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4de4u)) return;
    }
L_000c4de4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c4de8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000c4dec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000c4df0:;
    {
        cpu->r[14] = 0x000c4df4u; imp_memcpy(cpu); /* memcpy */
    }
L_000c4df4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000c4df8:;
    {
        goto L_000c4db4;
    }
}

/* _ZN5Scene24GetObjectBySpawnWaypointEP8WAYPOINT @ 000c4e0c (arm) */
void fn_000c4e0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4e0c:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000c4e10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c4e14:;
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
L_000c4e18:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c4e1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c4e20:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000c4e24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c4e28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4e74;
        }
    }
L_000c4e2c:;
    {
        cpu->r[7] = 0x00001c68u;
    }
L_000c4e30:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000c4e34:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c4e38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c4e3c:;
    {
        goto L_000c4e4c;
    }
L_000c4e40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000c4e44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c4e48:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c4e74;
        }
    }
L_000c4e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c4e50:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c4e54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c4e58:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c4e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4e40;
        }
    }
L_000c4e60:;
    {
        cpu->r[14] = 0x000c4e64u; fn_000b5a6c(cpu);
    }
L_000c4e64:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_000c4e68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4e40;
        }
    }
L_000c4e6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4e70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4e74u)) return;
    }
L_000c4e74:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c4e78:;
    {
        goto L_000c4e6c;
    }
}

/* _ZN5Scene21RenderAnimatedObjectsEv @ 000c4e7c (arm) */
void fn_000c4e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c4e7c:;
    {
        cpu->r[3] = rd32(0x000c4e84u + + 0x268u);
    }
L_000c4e80:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c4e84:;
    {
        cpu->r[1] = rd32(0x000c4e8cu + + 0x264u);
    }
L_000c4e88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c4e8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c4e94u, cpu->r[3], 0, 0);
    }
L_000c4e90:;
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
L_000c4e94:;
    {
        cpu->r[10] = 0x00004270u;
    }
L_000c4e98:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c4e9c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000c4ea0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_000c4ea4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c4ea8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000c4eac:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000c4eb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4eb4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000c4eb8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c4ebc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000c4ec0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c4ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c4ec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c4ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c4ed0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c4ed4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c4fd4;
        }
    }
L_000c4ed8:;
    {
        cpu->r[7] = 0x00004274u;
    }
L_000c4edc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c4ee0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000c4ee4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c4ee8:;
    {
        goto L_000c4f24;
    }
L_000c4eec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000c4ef0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c4ef4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c4ef8:;
    {
        cpu->r[14] = 0x000c4f00u;
    }
L_000c4efc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4f00u)) return;
    }
L_000c4f00:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c4f04:;
    {
        cpu->r[14] = 0x000c4f0cu;
    }
L_000c4f08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4f0cu)) return;
    }
L_000c4f0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000c4f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4f5c;
        }
    }
L_000c4f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c4f18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c4f1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c4f20:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c4fd4;
        }
    }
L_000c4f24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c4f28:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c4f2c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c4f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4f14;
        }
    }
L_000c4f34:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000c4f38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c4f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c4f40:;
    {
        cpu->r[14] = 0x000c4f48u;
    }
L_000c4f44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4f48u)) return;
    }
L_000c4f48:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c4f4c:;
    {
        cpu->r[14] = 0x000c4f54u;
    }
L_000c4f50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4f54u)) return;
    }
L_000c4f54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000c4f58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4eec;
        }
    }
L_000c4f5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4f60:;
    {
        cpu->r[14] = 0x000c4f64u; fn_000ea4dc(cpu);
    }
L_000c4f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c4f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4f14;
        }
    }
L_000c4f6c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x120u);
    }
L_000c4f70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4f74:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c4f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c4fb0;
        }
    }
L_000c4f80:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x3d4u);
    }
L_000c4f84:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[8] + + 0x3dcu);
    }
L_000c4f88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x3d8u);
    }
L_000c4f8c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c4f90:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000c4f94:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000c4f98:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c4f9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c4fa0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c4fa4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c4fa8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c4fac:;
    {
        cpu->r[14] = 0x000c4fb0u; fn_000b5c44(cpu);
    }
L_000c4fb0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c4fb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c4fb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c4fbc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c4fc0:;
    {
        cpu->r[14] = 0x000c4fc8u;
    }
L_000c4fc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c4fc8u)) return;
    }
L_000c4fc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c4fcc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c4fd0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c4f24;
        }
    }
L_000c4fd4:;
    {
        cpu->r[10] = 0x00001c70u;
    }
L_000c4fd8:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c4fdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c4fe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c4fe4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c50e4;
        }
    }
L_000c4fe8:;
    {
        cpu->r[7] = 0x00001c68u;
    }
L_000c4fec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c4ff0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c4ff4:;
    {
        cpu->r[9] = cpu->r[13];
    }
L_000c4ff8:;
    {
        goto L_000c5034;
    }
L_000c4ffc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000c5000:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c5004:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c5008:;
    {
        cpu->r[14] = 0x000c5010u;
    }
L_000c500c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5010u)) return;
    }
L_000c5010:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c5014:;
    {
        cpu->r[14] = 0x000c501cu;
    }
L_000c5018:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c501cu)) return;
    }
L_000c501c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000c5020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c506c;
        }
    }
L_000c5024:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c5028:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c502c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c5030:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c50e4;
        }
    }
L_000c5034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5038:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000c503c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c5040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5024;
        }
    }
L_000c5044:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_000c5048:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c504c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c5050:;
    {
        cpu->r[14] = 0x000c5058u;
    }
L_000c5054:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5058u)) return;
    }
L_000c5058:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000c505c:;
    {
        cpu->r[14] = 0x000c5064u;
    }
L_000c5060:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5064u)) return;
    }
L_000c5064:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000c5068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c4ffc;
        }
    }
L_000c506c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c5070:;
    {
        cpu->r[14] = 0x000c5074u; fn_000ea4dc(cpu);
    }
L_000c5074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5024;
        }
    }
L_000c507c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x120u);
    }
L_000c5080:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c5084:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_000c5088:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c508c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c50c0;
        }
    }
L_000c5090:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x3d4u);
    }
L_000c5094:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[8] + + 0x3dcu);
    }
L_000c5098:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x3d8u);
    }
L_000c509c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c50a0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000c50a4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000c50a8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c50ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c50b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c50b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000c50b8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c50bc:;
    {
        cpu->r[14] = 0x000c50c0u; fn_000b5c44(cpu);
    }
L_000c50c0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c50c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c50c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c50cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c50d0:;
    {
        cpu->r[14] = 0x000c50d8u;
    }
L_000c50d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c50d8u)) return;
    }
L_000c50d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c50dc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c50e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5034;
        }
    }
L_000c50e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c50e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c50ecu)) return;
    }
}

/* _ZN5Scene24SaveCarPositionsConstFPSEv @ 000c50f4 (arm) */
void fn_000c50f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c50f4:;
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
L_000c50f8:;
    {
        cpu->r[10] = 0x00008cbcu;
    }
L_000c50fc:;
    {
        cpu->r[6] = 0x00008cc4u;
    }
L_000c5100:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c5104:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c5108:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c510c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000c5110:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c5114:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000c5118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c511c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c5120:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c51b4;
        }
    }
L_000c5124:;
    {
        cpu->r[7] = 0x00008cb8u;
    }
L_000c5128:;
    {
        cpu->r[8] = 0x00008cc0u;
    }
L_000c512c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c5130:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c5134:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c5138:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000c513c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000c5140:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000c5144:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_000c5148:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c514c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5150:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000c5154:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c5158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c515c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000c5160:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000c5164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c51a0;
        }
    }
L_000c5168:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x3d4u);
    }
L_000c516c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000c5170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000c5174:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c5178:;
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
L_000c517c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c5180:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c5184:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000c5188:;
    {
        wr32(cpu->r[3] + + 0x440u, cpu->r[2]);
    }
L_000c518c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5190:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c5194:;
    {
        wr32(cpu->r[3] + + 0x444u, cpu->r[2]);
    }
L_000c5198:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c519c:;
    {
        wr32(cpu->r[3] + + 0x448u, cpu->r[2]);
    }
L_000c51a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c51a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c51a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c51ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000c51b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5138;
        }
    }
L_000c51b4:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c51b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c51bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c51c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c51c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c528c;
        }
    }
L_000c51c8:;
    {
        cpu->r[9] = rd32(0x000c51d0u + + 0xc4u);
    }
L_000c51cc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c51d0:;
    {
        cpu->r[8] = rd32(0x000c51d8u + + 0xc0u);
    }
L_000c51d4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000c51d8:;
    {
        cpu->r[10] = rd32(0x000c51e0u + + 0xbcu);
    }
L_000c51dc:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c51e4u, cpu->r[9], 0, 0);
    }
L_000c51e0:;
    {
        cpu->r[11] = rd32(0x000c51e8u + + 0xb8u);
    }
L_000c51e4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c51ecu, cpu->r[8], 0, 0);
    }
L_000c51e8:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c51f0u, cpu->r[10], 0, 0);
    }
L_000c51ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000208u, 0, 0);
    }
L_000c51f0:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c51f8u, cpu->r[11], 0, 0);
    }
L_000c51f4:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c51f8:;
    {
        cpu->r[12] = 0x000082a4u;
    }
L_000c51fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5200:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c5204:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c5208:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c520c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 1);
    }
L_000c5210:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000c5214:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000c5218:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000c521c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5258;
        }
    }
L_000c5220:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x3d4u);
    }
L_000c5224:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000c5228:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000c522c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c5230:;
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
L_000c5234:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c5238:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c523c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000c5240:;
    {
        wr32(cpu->r[3] + + 0x440u, cpu->r[2]);
    }
L_000c5244:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5248:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c524c:;
    {
        wr32(cpu->r[3] + + 0x444u, cpu->r[2]);
    }
L_000c5250:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c5254:;
    {
        wr32(cpu->r[3] + + 0x448u, cpu->r[2]);
    }
L_000c5258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c525c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c5260:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c528c;
        }
    }
L_000c5264:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c5268:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c51f4;
        }
    }
L_000c526c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000c5270:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000c5274:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000c5278:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c527c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c5280:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000c5284:;
    {
        cpu->r[14] = 0x000c5288u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c5288:;
    {
        goto L_000c51f4;
    }
L_000c528c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c5290:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5294u)) return;
    }
}

/* _ZN5Scene19UpdateCarCollisionsEv @ 000c52a4 (arm) */
void fn_000c52a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c52a4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c52a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c52ac:;
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
L_000c52b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c52b4:;
    {
        cpu->r[10] = 0x000082a4u;
    }
L_000c52b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000c52bc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c52c0:;
    {
        cpu->r[8] = rd32(0x000c52c8u + + 0x6c0u);
    }
L_000c52c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c52c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c52cc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000c52d0:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c52d8u, cpu->r[8], 0, 0);
    }
L_000c52d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c52d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c52dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c52e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c52e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c52e8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c52ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c5320;
        }
    }
L_000c52f0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c52f4:;
    {
        cpu->r[7] = 0x000082a8u;
    }
L_000c52f8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c52fc:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000c5300:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5304:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000c5308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000c530c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000c5310:;
    {
        cpu->r[14] = 0x000c5314u; fn_00172214(cpu);
    }
L_000c5314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c5318:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000c531c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5300;
        }
    }
L_000c5320:;
    {
        cpu->r[7] = 0x00008cbcu;
    }
L_000c5324:;
    {
        cpu->r[6] = 0x00008cc4u;
    }
L_000c5328:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c532c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c5330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5334:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c5338:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c533c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c5340:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c5398;
        }
    }
L_000c5344:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000c5348:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000c534c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c5350:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c5354:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c5358:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c535c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000c5360:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000c5364:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000c5368:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c536c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5370:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c5374:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c5378:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c537c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5384;
        }
    }
L_000c5380:;
    {
        cpu->r[14] = 0x000c5384u; fn_00172214(cpu);
    }
L_000c5384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5388:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c538c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c5390:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c5394:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5358;
        }
    }
L_000c5398:;
    {
        cpu->r[1] = rd32(0x000c53a0u + + 0x5ecu);
    }
L_000c539c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000c53a0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000c53a4:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000c53a8:;
    {
        cpu->r[9] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_000c53ac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000c53b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c57c4;
        }
    }
L_000c53b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c53b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
        }
    }
L_000c53bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001e4u, 0, 0);
        }
    }
L_000c53c0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
        }
    }
L_000c53c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c5678;
        }
    }
L_000c53c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000c53cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c53d0:;
    {
        cpu->r[11] = 0x00008cc4u;
    }
L_000c53d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000002a4u, 0, 0);
    }
L_000c53d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c53dc:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c53e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c53e4:;
    {
        cpu->r[12] = 0x00008cb8u;
    }
L_000c53e8:;
    {
        cpu->r[1] = 0x00008cc0u;
    }
L_000c53ec:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c53f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001e4u, 0, 0);
    }
L_000c53f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c53f8:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c53fc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c5400:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000c5404:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5408:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000c540c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000c5410:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000c5414:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000c5418:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c541c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000c5420:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000c5424:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
        }
    }
L_000c5428:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_000c542c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000c5430:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
        }
    }
L_000c5434:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000c5438:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c543c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5440:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000c5444:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c5448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5650;
        }
    }
L_000c544c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c5450:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_000c5454:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_000c5458:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000c545c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x3dcu);
    }
L_000c5460:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_000c5464:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_000c5468:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_000c546c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_000c5470:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_000c5474:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[1]; cpu->r[0] = v;
    }
L_000c5478:;
    {
        cpu->r[14] = 0x000c547cu; fn_0017fa74(cpu);
    }
L_000c547c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c5480:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c5484:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000c5488:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5498;
        }
    }
L_000c548c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_000c5490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00007d00u, 1, 1);
    }
L_000c5494:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c5650;
        }
    }
L_000c5498:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c549c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c54a0:;
    {
        cpu->r[14] = 0x000c54a8u;
    }
L_000c54a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c54a8u)) return;
    }
L_000c54a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c54ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5650;
        }
    }
L_000c54b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c54b4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_000c54b8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_000c54bc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000c54c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000c54c4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000c54c8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_000c54cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000c54d0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_000c54d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c54d8:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_000c54dc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_000c54e0:;
    {
        cpu->r[14] = 0x000c54e8u;
    }
L_000c54e4:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c54e8u)) return;
    }
L_000c54e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c54ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c54f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000c54f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_000c54f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c54fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000c5500:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[12] = v1;
    }
L_000c5504:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8] + cpu->r[6]; cpu->r[8] = v;
    }
L_000c5508:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000c550c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c5510:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10] + cpu->r[8]; cpu->r[1] = v;
    }
L_000c5514:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c5518:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000c551c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000c5520:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000c5524:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] | 0x00000001u; cpu->r[6] = v;
        }
    }
L_000c5528:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000c552c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_000c5530:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_000c5534:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c55a8;
        }
    }
L_000c5538:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000c553c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000c5540:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000c5544:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_000c5548:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000c554c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
        }
    }
L_000c5550:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000c5554:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5558:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000c555c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c5560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c558c;
        }
    }
L_000c5564:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c5568:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c556c:;
    {
        cpu->r[14] = 0x000c5574u;
    }
L_000c5570:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5574u)) return;
    }
L_000c5574:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000c5578:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c557c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5580:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c5584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c558c;
        }
    }
L_000c5588:;
    {
        cpu->r[14] = 0x000c558cu; fn_00163464(cpu);
    }
L_000c558c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c5590:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000c5594:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000c5598:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000c559c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c55a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000c55a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5538;
        }
    }
L_000c55a8:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000c55ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c55b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c55b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c55b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5964;
        }
    }
L_000c55bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c55c0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c55c4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_000c55c8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000c55cc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c55d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c55d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000c55d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
        }
    }
L_000c55dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c563c;
        }
    }
L_000c55e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000c55e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018000u, 0, 0);
    }
L_000c55e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_000c55ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c55f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c55f4:;
    {
        cpu->r[14] = 0x000c55fcu;
    }
L_000c55f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c55fcu)) return;
    }
L_000c55fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c562c;
        }
    }
L_000c5604:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c5608:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c560c:;
    {
        cpu->r[14] = 0x000c5614u;
    }
L_000c5610:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5614u)) return;
    }
L_000c5614:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000c5618:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c561c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c5624:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c562c;
        }
    }
L_000c5628:;
    {
        cpu->r[14] = 0x000c562cu; fn_00163464(cpu);
    }
L_000c562c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c5630:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000c5634:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000c5638:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c55e0;
        }
    }
L_000c563c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_000c5640:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000c5644:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000078u, 1, 1);
    }
L_000c5648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c55cc;
        }
    }
L_000c564c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c5650:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c5654:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000c5658:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c565c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5660:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000c5664:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000c5668:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c566c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c5670:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000c5674:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c5420;
        }
    }
L_000c5678:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c567c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_000c5680:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000c5684:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000c5688:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000c568c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000c5690:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c5694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c5698:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000c569c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c577c;
        }
    }
L_000c56a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c56a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_000c56a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018000u, 0, 0);
    }
L_000c56ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_000c56b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c56b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c56b8:;
    {
        cpu->r[14] = 0x000c56c0u;
    }
L_000c56bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c56c0u)) return;
    }
L_000c56c0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c56c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c576c;
        }
    }
L_000c56c8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000c56cc:;
    {
        cpu->r[14] = 0x000c56d4u;
    }
L_000c56d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c56d4u)) return;
    }
L_000c56d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c56d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c576c;
        }
    }
L_000c56dc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c56e0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000c56e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c56e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c56ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c575c;
        }
    }
L_000c56f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c56f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c56f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000c56fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00018000u, 0, 0);
    }
L_000c5700:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000001f0u, 0, 0);
    }
L_000c5704:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c5708:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c570c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c5710:;
    {
        cpu->r[14] = 0x000c5718u;
    }
L_000c5714:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c5718u)) return;
    }
L_000c5718:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c571c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c574c;
        }
    }
L_000c5720:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c5724:;
    {
        cpu->r[14] = 0x000c572cu;
    }
L_000c5728:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c572cu)) return;
    }
L_000c572c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5730:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c5734:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5738:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c573c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c574c;
        }
    }
L_000c5740:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000c5744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c574c;
        }
    }
L_000c5748:;
    {
        cpu->r[14] = 0x000c574cu; fn_00163464(cpu);
    }
L_000c574c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c5750:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c5754:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000c5758:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c5704;
        }
    }
L_000c575c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000002cu, 0, 0);
    }
L_000c5760:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c5764:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000084u, 1, 1);
    }
L_000c5768:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c56e4;
        }
    }
L_000c576c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000c5770:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000c5774:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_000c5778:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c56a0;
        }
    }
L_000c577c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c5780:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000c5784:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c5788:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000028u, 0, 0);
    }
L_000c578c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c5790:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000c5794:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5690;
        }
    }
L_000c5798:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c579c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c57a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000c57a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c57a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000b8u, 0, 0);
    }
L_000c57ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c57b0:;
    {
        cpu->r[14] = 0x000c57b4u; fn_00181518(cpu);
    }
L_000c57b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c57b8:;
    {
        cpu->r[14] = 0x000c57bcu; fn_000c489c(cpu);
    }
L_000c57bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000c57c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c57c4u)) return;
    }
L_000c57c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c57c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c579c;
        }
    }
L_000c57cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000c57d0:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000c57d4:;
    {
        cpu->r[11] = 0x00008cc0u;
    }
L_000c57d8:;
    {
        cpu->r[6] = 0x00008cbcu;
    }
L_000c57dc:;
    {
        cpu->r[5] = 0x00008cc4u;
    }
L_000c57e0:;
    {
        cpu->r[12] = 0x000082a0u;
    }
L_000c57e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000002a4u, 0, 0);
    }
L_000c57e8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c57ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000c57f0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c57f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c57f8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c57fc:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c5800:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000c5804:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c5808:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000c580c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000c5810:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000c5814:;
    {
        goto L_000c5850;
    }
L_000c5818:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c581c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000c5820:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c5824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c5828:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c582c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c5830:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000c5834:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c5838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c583c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c5840:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000c5844:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000c5848:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c584c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c579c;
        }
    }
L_000c5850:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c5854:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000c5858:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
        }
    }
L_000c585c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_000c5860:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000c5864:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000c5868:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000c586c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5870:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_000c5874:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000c5878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5958;
        }
    }
L_000c587c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000c5880:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c5884:;
    {
        cpu->r[14] = 0x000c588cu;
    }
L_000c5888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c588cu)) return;
    }
L_000c588c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5818;
        }
    }
L_000c5894:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c5898:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c589c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c58a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c58a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c58a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c58ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000c58b0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_000c58b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[12];
        }
    }
L_000c58b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c5924;
        }
    }
L_000c58bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000c58c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000c58c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000c58c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000c58cc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c58d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
        }
    }
L_000c58d4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000c58d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c58dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5908;
        }
    }
L_000c58e0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000c58e4:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000c58e8:;
    {
        cpu->r[14] = 0x000c58f0u;
    }
L_000c58ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c58f0u)) return;
    }
L_000c58f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c58f4:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000c58f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000c58fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c5900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5908;
        }
    }
L_000c5904:;
    {
        cpu->r[14] = 0x000c5908u; fn_00163464(cpu);
    }
L_000c5908:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000c590c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000c5910:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c5914:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000c5918:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c591c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000c5920:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c58bc;
        }
    }
L_000c5924:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c5928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c592c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c5930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5820;
        }
    }
L_000c5934:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c5938:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000c593c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5940:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c5944:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c5948:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c594c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000c5950:;
    {
        cpu->r[14] = 0x000c5954u; fn_0016380c(cpu);
    }
L_000c5954:;
    {
        goto L_000c5820;
    }
L_000c5958:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c595c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c5960:;
    {
        goto L_000c5820;
    }
L_000c5964:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000c5968:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c596c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5970:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c5974:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c5978:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c597c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000c5980:;
    {
        cpu->r[14] = 0x000c5984u; fn_0016380c(cpu);
    }
L_000c5984:;
    {
        goto L_000c55bc;
    }
}

/* _ZN5Scene12updateReplayEb @ 000c5990 (arm) */
void fn_000c5990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c5990:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c5994:;
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
L_000c5998:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000c599c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c59a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c59a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000c59a8:;
    {
        cpu->r[0] = rd32(0x000c59b0u + + 0x4f0u);
    }
L_000c59ac:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000c59b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c59b4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c59bcu, cpu->r[0], 0, 0);
    }
L_000c59b8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000c59bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c59c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c59c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c59c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c59cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c59d0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000c59d4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c59d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c59dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5e28;
        }
    }
L_000c59e0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c59e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5aac;
        }
    }
L_000c59e8:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c59ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c59f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c59f4:;
    {
        cpu->r[14] = 0x000c59f8u; fn_00096b6c(cpu);
    }
L_000c59f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c59fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5e4c;
        }
    }
L_000c5a00:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000c5a04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5a08:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c5a0c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000c5a10:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000c5a14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c5a84;
        }
    }
L_000c5a18:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c5a1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c5a20:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5a24:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000c5a28:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_000c5a2c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c5a30:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5a34:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c5a38:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c5a3c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000c5a40:;
    {
        cpu->r[6] = 0x0000173cu;
    }
L_000c5a44:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[5] = v;
    }
L_000c5a48:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_000c5a4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_000c5a50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000c5a54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000c5a58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000c5a5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_000c5a60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
        }
    }
L_000c5a64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
        }
    }
L_000c5a68:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c5a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5a70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
        }
    }
L_000c5a74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_000c5a78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000c5a7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000c5a80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5a4c;
        }
    }
L_000c5a84:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c5a88:;
    {
        cpu->r[12] = rd32(0x000c5a90u + + 0x414u);
    }
L_000c5a8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5a90:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000c5a94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c5a98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000c5a9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000c5aa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000c5aa4:;
    {
        cpu->r[14] = 0x000c5aa8u; fn_000f5c88(cpu);
    }
L_000c5aa8:;
    {
        goto L_000c5acc;
    }
L_000c5aac:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c5ab0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5ab4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c5ab8:;
    {
        cpu->r[14] = 0x000c5abcu; fn_00096b88(cpu);
    }
L_000c5abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5ac0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5e58;
        }
    }
L_000c5ac4:;
    {
        cpu->r[2] = rd32(0x000c5accu + + 0x3d8u);
    }
L_000c5ac8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000c5acc:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000c5ad0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5ad4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c5ad8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c5adc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c64c8;
        }
    }
L_000c5ae0:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000c5ae4:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000c5ae8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5aec:;
    {
        cpu->r[9] = 0x00008cc0u;
    }
L_000c5af0:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c5af4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c5af8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5afc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c5b00:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c5b04:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c5b08:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000c5b10u + + 0x37cu);
    }
L_000c5b0c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c5b14u + + 0x37cu);
    }
L_000c5b10:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000c5b18u + + 0x37cu);
    }
L_000c5b14:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000c5b1cu + + 0x37cu);
    }
L_000c5b18:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000c5b20u + + 0x37cu);
    }
L_000c5b1c:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000c5b20:;
    {
        goto L_000c5bfc;
    }
L_000c5b24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5b28:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5b2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c5b30:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000c5b34:;
    {
        cpu->r[14] = 0x000c5b38u; fn_0009969c(cpu);
    }
L_000c5b38:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c5b3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5b40:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5b44:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c5b48:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c5b4c:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_000c5b50:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x380u);
        }
    }
L_000c5b54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c5b58:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000c5b5c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_000c5b60:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 16);
        }
    }
L_000c5b64:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 17);
        }
    }
L_000c5b68:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 18);
        }
    }
L_000c5b6c:;
    {
        if (cond_test(cpu, 1)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_000c5b70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000c5b74:;
    {
        cpu->r[14] = 0x000c5b78u; fn_0009962c(cpu);
    }
L_000c5b78:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x484u);
    }
L_000c5b7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5b80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5b84:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000c5b88:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000c5b8c:;
    {
        cpu->r[14] = 0x000c5b90u; fn_0009962c(cpu);
    }
L_000c5b90:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c5b94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5b98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5b9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c5ba0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000c5ba4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000c5ba8:;
    {
        uint32_t v = cpu->r[3] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_000c5bac:;
    {
        cpu->r[14] = 0x000c5bb0u; fn_0009962c(cpu);
    }
L_000c5bb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x194u);
    }
L_000c5bb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5bb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5bbc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000c5bc0:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000c5bc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000c5bc8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x194u, cpu->r[3]);
        }
    }
L_000c5bcc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c5bd0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c5bd4:;
    {
        cpu->r[14] = 0x000c5bd8u; fn_0009962c(cpu);
    }
L_000c5bd8:;
    {
        cpu->r[0] = 0x00008cbcu;
    }
L_000c5bdc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000c5be0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c5be4:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_000c5be8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c5bec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5bf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5bf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c5bf8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c5c5c;
        }
    }
L_000c5bfc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c5c00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000c5c04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000c5c08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000c5c0c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5c10:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5c14:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000c5c18:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c5c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5be4;
        }
    }
L_000c5c20:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c5c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5ef8;
        }
    }
L_000c5c28:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5c2c:;
    {
        cpu->r[14] = 0x000c5c30u; fn_00096b6c(cpu);
    }
L_000c5c30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5b24;
        }
    }
L_000c5c38:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000c5c3c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c5c44:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_000c5c48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c5c4c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5c54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c5c58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c5bfc;
        }
    }
L_000c5c5c:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000c5c60:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c5c68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000c5c6c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000c5c70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c5c74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c6030;
        }
    }
L_000c5c78:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000c5c7c:;
    {
        cpu->r[9] = 0x00008cc0u;
    }
L_000c5c80:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c5c84:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c88:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c8c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c5c90:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c5c94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c5c98:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000c5ca0u + + 0x1ecu);
    }
L_000c5c9c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c5ca4u + + 0x1ecu);
    }
L_000c5ca0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000c5ca8u + + 0x1ecu);
    }
L_000c5ca4:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000c5cacu + + 0x1ecu);
    }
L_000c5ca8:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000c5cb0u + + 0x1ecu);
    }
L_000c5cac:;
    {
        goto L_000c5d4c;
    }
L_000c5cb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5cb4:;
    {
        cpu->r[14] = 0x000c5cb8u; fn_00096b6c(cpu);
    }
L_000c5cb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5d14;
        }
    }
L_000c5cc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5cc4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5cc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c5ccc:;
    {
        cpu->r[14] = 0x000c5cd0u; fn_0009969c(cpu);
    }
L_000c5cd0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c5cd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5cd8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5cdc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000c5ce0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c5ce4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c5ce8:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_000c5cec:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x380u);
        }
    }
L_000c5cf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000c5cf4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c5cf8:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_000c5cfc:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 16);
        }
    }
L_000c5d00:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 17);
        }
    }
L_000c5d04:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 18);
        }
    }
L_000c5d08:;
    {
        if (cond_test(cpu, 1)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_000c5d0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000c5d10:;
    {
        cpu->r[14] = 0x000c5d14u; fn_0009962c(cpu);
    }
L_000c5d14:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c5d18:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000c5d1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c5d20:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c5d24:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_000c5d28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c5d2c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c5d30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c5d34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c5d38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c5d3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000c5d40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000c5d44:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000c5d48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c6030;
        }
    }
L_000c5d4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000c5d50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c5d54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000c5d58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000c5d5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000c5d60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5d64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c5d68:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000c5d6c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000c5d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5d14;
        }
    }
L_000c5d74:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c5d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c5cb0;
        }
    }
L_000c5d7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5d80:;
    {
        cpu->r[14] = 0x000c5d84u; fn_00096b88(cpu);
    }
L_000c5d84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5d14;
        }
    }
L_000c5d8c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000c5d90:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c5d94:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_000c5d98:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c5d9c:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_000c5da0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5da4:;
    {
        wr32(cpu->r[6] + + 0x3c8u, cpu->r[1]);
    }
L_000c5da8:;
    {
        wr32(cpu->r[6] + + 0x3ccu, cpu->r[12]);
    }
L_000c5dac:;
    {
        wr32(cpu->r[6] + + 0x3d0u, cpu->r[14]);
    }
L_000c5db0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5db4:;
    {
        cpu->r[14] = 0x000c5db8u; fn_0009957c(cpu);
    }
L_000c5db8:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000c5dbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000003d4u, 0, 0);
    }
L_000c5dc0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5dc4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c5dc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_000c5dcc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5dd0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_000c5dd4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5dd8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c5ddc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5de0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c5de4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c5de8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_000c5dec:;
    {
        wr32(cpu->r[6] + + 0x404u, cpu->r[12]);
    }
L_000c5df0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5df4:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c5df8:;
    {
        wr32(cpu->r[6] + + 0x408u, cpu->r[14]);
    }
L_000c5dfc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c5e00:;
    {
        wr32(cpu->r[6] + + 0x40cu, cpu->r[12]);
    }
L_000c5e04:;
    {
        cpu->r[14] = 0x000c5e08u; fn_000994e0(cpu);
    }
L_000c5e08:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000c5e0c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c5e10:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_000c5e14:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_000c5e18:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_000c5e1c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c5e20:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x380u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c5e24:;
    {
        goto L_000c5d14;
    }
L_000c5e28:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000c5e2c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000c5e30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c5e34:;
    {
        cpu->r[14] = 0x000c5e38u; fn_00096b6c(cpu);
    }
L_000c5e38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c59e0;
        }
    }
L_000c5e40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000c5e44:;
    {
        cpu->r[14] = 0x000c5e48u; fn_000996c8(cpu);
    }
L_000c5e48:;
    {
        goto L_000c59e0;
    }
L_000c5e4c:;
    {
        cpu->r[3] = rd32(0x000c5e54u + + 0x50u);
    }
L_000c5e50:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000c5e54:;
    {
        goto L_000c5acc;
    }
L_000c5e58:;
    {
        cpu->r[1] = rd32(0x000c5e60u + + 0x44u);
    }
L_000c5e5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c5e60:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000c5e64:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000c5e68:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c5e6c:;
    {
        cpu->r[14] = 0x000c5e70u; fn_00096b88(cpu);
    }
L_000c5e70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5acc;
        }
    }
L_000c5e78:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000c5e7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006700u, 0, 0);
    }
L_000c5e80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000c5e84:;
    {
        cpu->r[14] = 0x000c5e88u; fn_000fb05c(cpu);
    }
L_000c5e88:;
    {
        goto L_000c5acc;
    }
L_000c5ef8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5efc:;
    {
        cpu->r[14] = 0x000c5f00u; fn_00096b88(cpu);
    }
L_000c5f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c5f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c5c38;
        }
    }
L_000c5f08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000c5f0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c5f10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_000c5f14:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000c5f18:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_000c5f1c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c5f20:;
    {
        wr32(cpu->r[6] + + 0x3c8u, cpu->r[3]);
    }
L_000c5f24:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5f28:;
    {
        wr32(cpu->r[6] + + 0x3ccu, cpu->r[1]);
    }
L_000c5f2c:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_000c5f30:;
    {
        wr32(cpu->r[6] + + 0x3d0u, cpu->r[14]);
    }
L_000c5f34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5f38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c5f3c:;
    {
        cpu->r[14] = 0x000c5f40u; fn_0009957c(cpu);
    }
L_000c5f40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c5f44:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5f48:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000c5f4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000003d4u, 0, 0);
    }
L_000c5f50:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c5f54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_000c5f58:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5f5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_000c5f60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5f64:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c5f68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5f6c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c5f70:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c5f74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_000c5f78:;
    {
        wr32(cpu->r[6] + + 0x404u, cpu->r[14]);
    }
L_000c5f7c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c5f80:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c5f84:;
    {
        wr32(cpu->r[6] + + 0x408u, cpu->r[12]);
    }
L_000c5f88:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c5f8c:;
    {
        wr32(cpu->r[6] + + 0x40cu, cpu->r[14]);
    }
L_000c5f90:;
    {
        cpu->r[14] = 0x000c5f94u; fn_000994e0(cpu);
    }
L_000c5f94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5f98:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000c5f9c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5fa0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000c5fa4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c5fa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5fac:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_000c5fb0:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_000c5fb4:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_000c5fb8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c5fbc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x380u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c5fc0:;
    {
        cpu->r[14] = 0x000c5fc4u; fn_000994e0(cpu);
    }
L_000c5fc4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000c5fc8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5fcc:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000c5fd0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5fd4:;
    {
        uint32_t v = cpu->r[12] & 0xff000000u; cpu->r[12] = v;
    }
L_000c5fd8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000c5fdc:;
    {
        wr32(cpu->r[6] + + 0x484u, cpu->r[0]);
    }
L_000c5fe0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c5fe4:;
    {
        cpu->r[14] = 0x000c5fe8u; fn_000994e0(cpu);
    }
L_000c5fe8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c5fec:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000c5ff0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c5ff4:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000c5ff8:;
    {
        uint32_t v = cpu->r[0] & ~ 0xff000000u; cpu->r[12] = v;
    }
L_000c5ffc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c6000:;
    {
        uint32_t v = cpu->r[12] | cpu->r[14]; cpu->r[12] = v;
    }
L_000c6004:;
    {
        wr32(cpu->r[6] + cpu->r[10], cpu->r[12]);
    }
L_000c6008:;
    {
        cpu->r[14] = 0x000c600cu; fn_000994e0(cpu);
    }
L_000c600c:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000c6010:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000c6014:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000c6018:;
    {
        wr32(cpu->r[6] + + 0x194u, cpu->r[0]);
    }
L_000c601c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c6020:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_000c6024:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x194u, cpu->r[0]);
        }
    }
L_000c6028:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c602c:;
    {
        goto L_000c5c44;
    }
L_000c6030:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c6034:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c6038:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000c603c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c6040:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000c6044:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c6048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000c604c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c642c;
        }
    }
L_000c6050:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000c6054:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6058:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c605c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6350;
        }
    }
L_000c6064:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c6068:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c606c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6070:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6074:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c6350;
        }
    }
L_000c6078:;
    {
        cpu->r[3] = rd32(0x000c6080u + - 0x1d8u);
    }
L_000c607c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000c6080:;
    {
        cpu->r[1] = rd32(0x000c6088u + - 0x1dcu);
    }
L_000c6084:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000c6088:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6090u, cpu->r[3], 0, 0);
    }
L_000c608c:;
    {
        cpu->r[2] = rd32(0x000c6094u + - 0x1e4u);
    }
L_000c6090:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000208u, 0, 0);
    }
L_000c6094:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000c6098:;
    {
        cpu->r[3] = rd32(0x000c60a0u + - 0x1ecu);
    }
L_000c609c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c60a4u, cpu->r[1], 0, 0);
    }
L_000c60a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c60a8u, cpu->r[2], 0, 0);
    }
L_000c60a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000208u, 0, 0);
    }
L_000c60a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c60b0u, cpu->r[3], 0, 0);
    }
L_000c60ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000208u, 0, 0);
    }
L_000c60b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000208u, 0, 0);
    }
L_000c60b4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000c60b8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000c60bc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000c60c0:;
    {
        goto L_000c6314;
    }
L_000c60c4:;
    {
        cpu->r[7] = 0x000082a4u;
    }
L_000c60c8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c60cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c60d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c60d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c6404;
        }
    }
L_000c60d8:;
    {
        cpu->r[9] = rd32(0x000c60e0u + - 0x228u);
    }
L_000c60dc:;
    {
        cpu->r[10] = 0x000082a8u;
    }
L_000c60e0:;
    {
        cpu->r[11] = rd32(0x000c60e8u + - 0x22cu);
    }
L_000c60e4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c60e8:;
    {
        cpu->r[14] = rd32(0x000c60f0u + - 0x230u);
    }
L_000c60ec:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c60f4u, cpu->r[9], 0, 0);
    }
L_000c60f0:;
    {
        cpu->r[12] = rd32(0x000c60f8u + - 0x234u);
    }
L_000c60f4:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c60fcu, cpu->r[11], 0, 0);
    }
L_000c60f8:;
    {
        cpu->r[14] = add_flags(cpu, 0x000c6100u, cpu->r[14], 0, 0);
    }
L_000c60fc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c6100:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_000c6104:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000c6108:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c610c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c6114u, cpu->r[12], 0, 0);
    }
L_000c6110:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000208u, 0, 0);
    }
L_000c6114:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000c6118:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c611c:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000c6120:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c6124:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000c6128:;
    {
        cpu->r[14] = 0x000c612cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c612c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c6130:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c6134:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c6138:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c613c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000c6140:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000c6144:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000c6148:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000c614c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000c6150:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000c6154:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c6180;
        }
    }
L_000c6158:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c615c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c6160:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000c6164:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6168:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c616c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c6170:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c6174:;
    {
        cpu->r[14] = 0x000c6178u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6178:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000c617c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c6180:;
    {
        wr32(cpu->r[3] + + 0x3c8u, cpu->r[7]);
    }
L_000c6184:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c6188:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c618c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6190:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c6194:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c61c8;
        }
    }
L_000c6198:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c619c:;
    {
        cpu->r[1] = rd32(0x000c61a4u + - 0x2dcu);
    }
L_000c61a0:;
    {
        cpu->r[2] = rd32(0x000c61a8u + - 0x2dcu);
    }
L_000c61a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c61a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c61ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c61b4u, cpu->r[1], 0, 0);
    }
L_000c61b0:;
    {
        cpu->r[3] = rd32(0x000c61b8u + - 0x2e8u);
    }
L_000c61b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c61bcu, cpu->r[2], 0, 0);
    }
L_000c61b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c61bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c61c4u, cpu->r[3], 0, 0);
    }
L_000c61c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c61c4:;
    {
        cpu->r[14] = 0x000c61c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c61c8:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c61cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c61d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c61d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c61d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c61dc:;
    {
        wr32(cpu->r[3] + + 0x3ccu, cpu->r[14]);
    }
L_000c61e0:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c61e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c61e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c61ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c61f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c63c8;
        }
    }
L_000c61f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c61f8:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c61fc:;
    {
        cpu->r[1] = rd32(0x000c6204u + - 0x330u);
    }
L_000c6200:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6204:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c6208:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c620c:;
    {
        cpu->r[2] = rd32(0x000c6214u + - 0x33cu);
    }
L_000c6210:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c6218u, cpu->r[1], 0, 0);
    }
L_000c6214:;
    {
        cpu->r[3] = rd32(0x000c621cu + - 0x340u);
    }
L_000c6218:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6220u, cpu->r[2], 0, 0);
    }
L_000c621c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c6220:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6228u, cpu->r[3], 0, 0);
    }
L_000c6224:;
    {
        cpu->r[14] = 0x000c6228u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6228:;
    {
        cpu->r[2] = 0x000082a8u;
    }
L_000c622c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c6230:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c6234:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c6238:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c623c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c6240:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c6244:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6248:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c624c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000c6250:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c6254:;
    {
        wr32(cpu->r[12] + + 0x3d0u, cpu->r[14]);
    }
L_000c6258:;
    {
        cpu->r[14] = 0x000c625cu; fn_0009957c(cpu);
    }
L_000c625c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c6260:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6264:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6268:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c626c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c62a0;
        }
    }
L_000c6270:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c6274:;
    {
        cpu->r[1] = rd32(0x000c627cu + - 0x39cu);
    }
L_000c6278:;
    {
        cpu->r[2] = rd32(0x000c6280u + - 0x39cu);
    }
L_000c627c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6280:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c6284:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c628cu, cpu->r[1], 0, 0);
    }
L_000c6288:;
    {
        cpu->r[3] = rd32(0x000c6290u + - 0x3a8u);
    }
L_000c628c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c6294u, cpu->r[2], 0, 0);
    }
L_000c6290:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c6294:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c629cu, cpu->r[3], 0, 0);
    }
L_000c6298:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c629c:;
    {
        cpu->r[14] = 0x000c62a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c62a0:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c62a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c62a8:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000c62ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c62b0:;
    {
        cpu->r[7] = 0x000082a4u;
    }
L_000c62b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c62b8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c62bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000003d4u, 0, 0);
    }
L_000c62c0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c62c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c62c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000c62cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c6304;
        }
    }
L_000c62d0:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000c62d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c62d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000c62dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c62e0:;
    {
        cpu->r[1] = rd32(0x000c62e8u + - 0x3fcu);
    }
L_000c62e4:;
    {
        cpu->r[2] = rd32(0x000c62ecu + - 0x3fcu);
    }
L_000c62e8:;
    {
        cpu->r[3] = rd32(0x000c62f0u + - 0x3fcu);
    }
L_000c62ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c62f4u, cpu->r[1], 0, 0);
    }
L_000c62f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c62f8u, cpu->r[2], 0, 0);
    }
L_000c62f4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000c62f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6300u, cpu->r[3], 0, 0);
    }
L_000c62fc:;
    {
        cpu->r[14] = 0x000c6300u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6300:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c6304:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c6308:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000680u, 0, 0);
    }
L_000c630c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c6310:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c6350;
        }
    }
L_000c6314:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c6318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c6390;
        }
    }
L_000c631c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c6320:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6324:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6328:;
    {
        cpu->r[14] = 0x000c632cu; fn_00096b88(cpu);
    }
L_000c632c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c6330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c60c4;
        }
    }
L_000c6334:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c6338:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c633c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6340:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c6344:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000680u, 0, 0);
    }
L_000c6348:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c634c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c6314;
        }
    }
L_000c6350:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c6354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6384;
        }
    }
L_000c6358:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c635c:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000c6360:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c6364:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c6368:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000c636c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000c6370:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000c6374:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000c6378:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c637c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6380:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c64b4;
        }
    }
L_000c6384:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000c6388:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000c638c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6390u)) return;
    }
L_000c6390:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c6394:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c6398:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c639c:;
    {
        cpu->r[14] = 0x000c63a0u; fn_00096b6c(cpu);
    }
L_000c63a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c63a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6334;
        }
    }
L_000c63a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c63ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000c63b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c63b4:;
    {
        cpu->r[14] = 0x000c63b8u; fn_0009969c(cpu);
    }
L_000c63b8:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c63bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c63c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c63c4:;
    {
        goto L_000c6340;
    }
L_000c63c8:;
    {
        cpu->r[1] = 0x000082a8u;
    }
L_000c63cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000c63d0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c63d4:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c63d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c63dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c63e0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c63e4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c63e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c63ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c63f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_000c63f4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c63f8:;
    {
        wr32(cpu->r[12] + + 0x3d0u, cpu->r[14]);
    }
L_000c63fc:;
    {
        cpu->r[14] = 0x000c6400u; fn_0009957c(cpu);
    }
L_000c6400:;
    {
        goto L_000c625c;
    }
L_000c6404:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c6408:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c640c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6410:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000c6414:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000c6418:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000c641c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000c6420:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000c6424:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000c6428:;
    {
        goto L_000c6180;
    }
L_000c642c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000c6430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c64d8;
        }
    }
L_000c6434:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000c6438:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000c643c:;
    {
        cpu->r[10] = 0x00008c78u;
    }
L_000c6440:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001f0u, 0, 0);
    }
L_000c6444:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c6448:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c644c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000c6450:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_000c6454:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c6458:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c645c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c6460:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c6464:;
    {
        cpu->r[14] = 0x000c646cu;
    }
L_000c6468:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c646cu)) return;
    }
L_000c646c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c6470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c64a4;
        }
    }
L_000c6474:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c6478:;
    {
        cpu->r[14] = 0x000c647cu; fn_00096b6c(cpu);
    }
L_000c647c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c6480:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000c6484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c64a4;
        }
    }
L_000c6488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c648c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c6490:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000c6494:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c6498:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_000c649c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000c64a0:;
    {
        cpu->r[14] = 0x000c64a4u; fn_0009969c(cpu);
    }
L_000c64a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c64a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001eu, 1, 1);
    }
L_000c64ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c6454;
        }
    }
L_000c64b0:;
    {
        goto L_000c6050;
    }
L_000c64b4:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c64b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c64bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c64c0:;
    {
        cpu->r[14] = 0x000c64c4u; fn_00099488(cpu);
    }
L_000c64c4:;
    {
        goto L_000c6384;
    }
L_000c64c8:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c64cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c64d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c64d4:;
    {
        goto L_000c5c5c;
    }
L_000c64d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000c64dc:;
    {
        cpu->r[10] = 0x00001c90u;
    }
L_000c64e0:;
    {
        cpu->r[11] = 0x00008c78u;
    }
L_000c64e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001f0u, 0, 0);
    }
L_000c64e8:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c64ec:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c64f0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000c64f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000c64f8:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000c64fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_000c6500:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000c6504:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c6508:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c650c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c6510:;
    {
        cpu->r[14] = 0x000c6518u;
    }
L_000c6514:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6518u)) return;
    }
L_000c6518:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c651c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c657c;
        }
    }
L_000c6520:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000c6524:;
    {
        cpu->r[14] = 0x000c6528u; fn_00096b88(cpu);
    }
L_000c6528:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c652c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000c6530:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000c6534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c657c;
        }
    }
L_000c6538:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000c653c:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_000c6540:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000c6544:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000c6548:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[12]);
    }
L_000c654c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000c6550:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000c6554:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000c6558:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[14]);
    }
L_000c655c:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[12]);
    }
L_000c6560:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_000c6564:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_000c6568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_000c656c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_000c6570:;
    {
        cpu->r[14] = 0x000c6574u; fn_0009957c(cpu);
    }
L_000c6574:;
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
L_000c6578:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c657c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c6580:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001eu, 1, 1);
    }
L_000c6584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c6500;
        }
    }
L_000c6588:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000c658c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c6590:;
    {
        goto L_000c6050;
    }
}

/* _ZN5Scene21ResetCarsInSlowMotionEv @ 000c6594 (arm) */
void fn_000c6594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c6594:;
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
L_000c6598:;
    {
        cpu->r[9] = 0x00008cbcu;
    }
L_000c659c:;
    {
        cpu->r[7] = 0x00008cc4u;
    }
L_000c65a0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c65a4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000c65a8:;
    {
        cpu->r[11] = rd32(0x000c65b0u + + 0x33cu);
    }
L_000c65ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000c65b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000c65b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000c65b8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000c65c0u, cpu->r[11], 0, 0);
    }
L_000c65bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c65c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c65c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c65c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c672c;
        }
    }
L_000c65cc:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000c65d0:;
    {
        cpu->r[2] = rd32(0x000c65d8u + + 0x318u);
    }
L_000c65d4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000c65d8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c65dc:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_000c65e0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000c65e8u + + 0x300u);
    }
L_000c65e4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000c65e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000c65ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_000c65f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_000c65f4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000c65f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000c65fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_000c6600:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000c6604:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000c6608:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c660c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000c6610:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000c6614:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c6618:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c661c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c6620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000003f8u, 0, 0);
    }
L_000c6624:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000c6628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c6714;
        }
    }
L_000c662c:;
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
L_000c6630:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x3d4u);
    }
L_000c6634:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c6638:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000c663c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c6640:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000c6644:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000c6648:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x3f8u);
    }
L_000c664c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x3fcu);
    }
L_000c6650:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_000c6654:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c6658:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c665c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000c6660:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[11]);
    }
L_000c6664:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c6668:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c666c:;
    {
        *(int32_t*)vfp_s(cpu,6) = (int32_t)*vfp_s(cpu,6);
    }
L_000c6670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000c6674:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000c6678:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2]);
    }
L_000c667c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000c6680:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000c6684:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c6688:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[11]);
    }
L_000c668c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3f8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c6690:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c6694:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,6);
    }
L_000c6698:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[2]);
    }
L_000c669c:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_000c66a0:;
    {
        *(int32_t*)vfp_s(cpu,7) = (int32_t)*vfp_s(cpu,7);
    }
L_000c66a4:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c66a8:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[11]);
    }
L_000c66ac:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,7);
    }
L_000c66b0:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[8]);
    }
L_000c66b4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000c66b8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000c66bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c66c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000c66c4:;
    {
        vfp_sync_flags(cpu);
    }
L_000c66c8:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,11);
        }
    }
L_000c66cc:;
    {
        vfp_vdiv(cpu, 15, 11, 15);
    }
L_000c66d0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c66d4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c66d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3fcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c66dc:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c66e0:;
    {
        vfp_vsub(cpu, 12, 12, 8);
    }
L_000c66e4:;
    {
        wr32(cpu->r[3] + + 0x400u, cpu->r[8]);
    }
L_000c66e8:;
    {
        vfp_vsub(cpu, 13, 13, 9);
    }
L_000c66ec:;
    {
        vfp_vsub(cpu, 14, 14, 10);
    }
L_000c66f0:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000c66f4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000c66f8:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000c66fc:;
    {
        wr32(cpu->r[3] + + 0x410u, cpu->r[11]);
    }
L_000c6700:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000c6704:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c6708:;
    {
        wr32(cpu->r[3] + + 0x418u, cpu->r[2]);
    }
L_000c670c:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c6710:;
    {
        wr32(cpu->r[3] + + 0x414u, cpu->r[8]);
    }
L_000c6714:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c6718:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000c671c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000c6720:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000c6724:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c65f4;
        }
    }
L_000c6728:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c672c:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000c6730:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6734:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c6738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c673c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c68e0;
        }
    }
L_000c6740:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000c6744:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6748:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c674c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6750:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c68e0;
        }
    }
L_000c6754:;
    {
        cpu->r[3] = rd32(0x000c675cu + + 0x198u);
    }
L_000c6758:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000c675c:;
    {
        cpu->r[10] = rd32(0x000c6764u + + 0x194u);
    }
L_000c6760:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_000c6764:;
    {
        cpu->r[9] = rd32(0x000c676cu + + 0x190u);
    }
L_000c6768:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6770u, cpu->r[3], 0, 0);
    }
L_000c676c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000208u, 0, 0);
    }
L_000c6770:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c6778u, cpu->r[10], 0, 0);
    }
L_000c6774:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000c6778:;
    {
        cpu->r[9] = add_flags(cpu, 0x000c6780u, cpu->r[9], 0, 0);
    }
L_000c677c:;
    {
        cpu->r[3] = rd32(0x000c6784u + + 0x17cu);
    }
L_000c6780:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000c6784:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c678cu, cpu->r[3], 0, 0);
    }
L_000c6788:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000c678c:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000c6790:;
    {
        cpu->r[4] = 0x000082a4u;
    }
L_000c6794:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c6798:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000c67a0u + + 0x148u);
    }
L_000c679c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c67a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000c67a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c67a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 1);
    }
L_000c67ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000680u, 0, 0);
    }
L_000c67b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c67b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000003f8u, 0, 0);
    }
L_000c67b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000c67bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c68a4;
        }
    }
L_000c67c0:;
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
L_000c67c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x3d4u);
    }
L_000c67c8:;
    {
        cpu->r[6] = rd32(0x000c67d0u + + 0x120u);
    }
L_000c67cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000c67d0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000c67d4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000c67d8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x3f8u);
    }
L_000c67dc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x3fcu);
    }
L_000c67e0:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[6]);
    }
L_000c67e4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000c67e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c67ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000c67f0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2]);
    }
L_000c67f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c67f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c67fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000c6800:;
    {
        *(int32_t*)vfp_s(cpu,6) = (int32_t)*vfp_s(cpu,6);
    }
L_000c6804:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000c6808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000c680c:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[12]);
    }
L_000c6810:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_000c6814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000c6818:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12]);
    }
L_000c681c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3f8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000c6820:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000c6824:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,6);
    }
L_000c6828:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[2]);
    }
L_000c682c:;
    {
        *(int32_t*)vfp_s(cpu,7) = (int32_t)*vfp_s(cpu,7);
    }
L_000c6830:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c6834:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[2]);
    }
L_000c6838:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_000c683c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,7);
    }
L_000c6840:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[12]);
    }
L_000c6844:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000c6848:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000c684c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c6850:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000c6854:;
    {
        vfp_sync_flags(cpu);
    }
L_000c6858:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_000c685c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000c6860:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000c6864:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_000c6868:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3fcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000c686c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c6870:;
    {
        vfp_vsub(cpu, 12, 12, 9);
    }
L_000c6874:;
    {
        wr32(cpu->r[3] + + 0x400u, cpu->r[12]);
    }
L_000c6878:;
    {
        vfp_vsub(cpu, 13, 13, 10);
    }
L_000c687c:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_000c6880:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000c6884:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000c6888:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000c688c:;
    {
        wr32(cpu->r[3] + + 0x410u, cpu->r[2]);
    }
L_000c6890:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000c6894:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c6898:;
    {
        wr32(cpu->r[3] + + 0x418u, cpu->r[12]);
    }
L_000c689c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000c68a0:;
    {
        wr32(cpu->r[3] + + 0x414u, cpu->r[2]);
    }
L_000c68a4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c68a8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c68ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c68e0;
        }
    }
L_000c68b0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000c68b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c678c;
        }
    }
L_000c68b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c68bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c68c0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000c68c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c68c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c68cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c68d0:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c68d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c68d8:;
    {
        cpu->r[14] = 0x000c68dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c68dc:;
    {
        goto L_000c678c;
    }
L_000c68e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000c68e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c68e8u)) return;
    }
}

/* _ZN5Scene14UpdatePowerupsEv @ 000c6904 (arm) */
void fn_000c6904(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c6904:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000c6908:;
    {
        cpu->r[7] = 0x00004278u;
    }
L_000c690c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000c6910:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c6914:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000c6918:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c691c:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6920u)) return;
        }
    }
L_000c6920:;
    {
        cpu->r[6] = 0x0000427cu;
    }
L_000c6924:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c6928:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000c692c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c6930:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000c6934:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c6938:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c693c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c6940:;
    {
        cpu->r[14] = 0x000c6948u;
    }
L_000c6944:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6948u)) return;
    }
L_000c6948:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c694c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c6950:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c692c;
        }
    }
L_000c6954:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6958u)) return;
    }
}

/* _ZN5Scene15RespawnPowerupsEv @ 000c6958 (arm) */
void fn_000c6958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c6958:;
    {
        cpu->r[3] = rd32(0x000c6960u + + 0xd4u);
    }
L_000c695c:;
    {
        cpu->r[2] = rd32(0x000c6964u + + 0xd4u);
    }
L_000c6960:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c6968u, cpu->r[3], 0, 0);
    }
L_000c6964:;
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
L_000c6968:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c696c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c6970:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000c6974:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c6978:;
    {
        cpu->r[14] = 0x000c697cu; fn_00096b6c(cpu);
    }
L_000c697c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c6980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c6a20;
        }
    }
L_000c6984:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c6988:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c698c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c6990:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c6994:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c6a18;
        }
    }
L_000c6998:;
    {
        cpu->r[8] = rd32(0x000c69a0u + + 0x9cu);
    }
L_000c699c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000c69a0:;
    {
        cpu->r[7] = rd32(0x000c69a8u + + 0x98u);
    }
L_000c69a4:;
    {
        cpu->r[6] = rd32(0x000c69acu + + 0x98u);
    }
L_000c69a8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000c69b0u, cpu->r[8], 0, 0);
    }
L_000c69ac:;
    {
        cpu->r[10] = rd32(0x000c69b4u + + 0x94u);
    }
L_000c69b0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000c69b8u, cpu->r[7], 0, 0);
    }
L_000c69b4:;
    {
        cpu->r[6] = add_flags(cpu, 0x000c69bcu, cpu->r[6], 0, 0);
    }
L_000c69b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000068u, 0, 0);
    }
L_000c69bc:;
    {
        cpu->r[10] = add_flags(cpu, 0x000c69c4u, cpu->r[10], 0, 0);
    }
L_000c69c0:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000c69c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000c69c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c69cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c69d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000c69d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c69d8:;
    {
        cpu->r[14] = 0x000c69dcu; fn_000b9040(cpu);
    }
L_000c69dc:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000c69e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c69e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000c69e8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000c69ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c6a18;
        }
    }
L_000c69f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c69f4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c69c0;
        }
    }
L_000c69f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000c69fc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c6a00:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000c6a04:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c6a08:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000c6a0c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000c6a10:;
    {
        cpu->r[14] = 0x000c6a14u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c6a14:;
    {
        goto L_000c69c0;
    }
L_000c6a18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c6a1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c6a20u)) return;
    }
L_000c6a20:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c6a24:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000c6a28:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c6a2c:;
    {
        cpu->r[14] = 0x000c6a30u; fn_00099454(cpu);
    }
L_000c6a30:;
    {
        goto L_000c6984;
    }
}
