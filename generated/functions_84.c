#include "functions.h"

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM20EmulateDecodeSegmentEiPNS_12SegmentStateE @ 001f10e8 (arm) */
void fn_001f10e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f10e8:;
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
L_001f10ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f10f0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f10f4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001f10f8:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
    }
L_001f10fc:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0xau);
    }
L_001f1100:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001f1104:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f1108:;
    {
        cpu->r[14] = 0x001f110cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f110c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001f1110:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1114:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f1118:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f125c;
        }
    }
L_001f111c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001f1120:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001f1124:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000184u, 0, 0);
    }
L_001f1128:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000005eu, 0, 0);
    }
L_001f112c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f1130:;
    {
        goto L_001f11fc;
    }
L_001f1134:;
    {
        cpu->r[0] = rd32(cpu->r[7] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001f1138:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f113c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f1140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1230;
        }
    }
L_001f1144:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f124c;
        }
    }
L_001f114c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f1150:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f1154:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001f1158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f115c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001f1160:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f1164:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[5];
        }
    }
L_001f1168:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_001f116c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001f1170:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f1174:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001f1178:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f117c:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001f1180:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f1184:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001f1188:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f118c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001f1190:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001f1194:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f1198:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f11f4;
        }
    }
L_001f119c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f11a0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f11a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
        }
    }
L_001f11a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f11b8;
        }
    }
L_001f11ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001f11b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f11b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f12c8;
        }
    }
L_001f11b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f11bc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001f11c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f11c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f11e0;
        }
    }
L_001f11c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001f11cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f11d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f12e8;
        }
    }
L_001f11d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f11d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f11dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1324;
        }
    }
L_001f11e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001f11e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f11e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f127c;
        }
    }
L_001f11ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f11f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f12b4;
        }
    }
L_001f11f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f11f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f12a8;
        }
    }
L_001f11fc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x40u);
    }
L_001f1200:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1134;
        }
    }
L_001f1208:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001f120c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1210:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001f1214:;
    {
        cpu->r[14] = 0x001f121cu;
    }
L_001f1218:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f121cu)) return;
    }
L_001f121c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001f1220:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f1224:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[10]);
    }
L_001f1228:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f122c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1144;
        }
    }
L_001f1230:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1234:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001f1238:;
    {
        cpu->r[14] = 0x001f123cu; fn_001f0ed4(cpu);
    }
L_001f123c:;
    {
        wr32(cpu->r[6], cpu->r[10]);
    }
L_001f1240:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1244:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001f1248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f114c;
        }
    }
L_001f124c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
    }
L_001f1250:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 0);
    }
L_001f1254:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f1258:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001f125c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001f1260:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f1264:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6]; cpu->r[9] = v;
    }
L_001f1268:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f126c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f1270:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001f1274:;
    {
        uint32_t v = cpu->r[0] * cpu->r[9]; cpu->r[0] = v;
    }
L_001f1278:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f127cu)) return;
    }
L_001f127c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001f1280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f11f4;
        }
    }
L_001f1288:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001f128c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1290:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f1294:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f1298:;
    {
        cpu->r[14] = 0x001f12a0u;
    }
L_001f129c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f12a0u)) return;
    }
L_001f12a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f12a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f11fc;
        }
    }
L_001f12a8:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
    }
L_001f12ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 0);
    }
L_001f12b0:;
    {
        goto L_001f125c;
    }
L_001f12b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f12b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f12bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f12c0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f11f4;
        }
    }
L_001f12c4:;
    {
        goto L_001f124c;
    }
L_001f12c8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001f12cc:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f12d0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f12d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f12d8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f12dc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f12e0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001f12e4:;
    {
        goto L_001f11b8;
    }
L_001f12e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001f12ec:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f12f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f12f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f12f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f12fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1300:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f1304:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f1308:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f130c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f1310:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1314:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001f1318:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f131c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f11e0;
        }
    }
L_001f1324:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1328:;
    {
        cpu->r[14] = 0x001f132cu; fn_001f08e8(cpu);
    }
L_001f132c:;
    {
        goto L_001f11e0;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM37EmulateDecodeCurrentSegmentWithOffsetEi @ 001f1330 (arm) */
void fn_001f1330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1330:;
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
L_001f1334:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f1338:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f133c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1340:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f1344:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001f1348:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f134c:;
    {
        cpu->r[14] = 0x001f1350u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f1350:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x168u);
    }
L_001f1354:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x15cu);
    }
L_001f1358:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f135c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f1360:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001f1364:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
        }
    }
L_001f1368:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
        }
    }
L_001f136c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f1370:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001f1374:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f14a8;
        }
    }
L_001f1378:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001f137c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f1380:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000184u, 0, 0);
    }
L_001f1384:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000005eu, 0, 0);
    }
L_001f1388:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f138c:;
    {
        goto L_001f144c;
    }
L_001f1390:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001f1394:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f1398:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f139c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1480;
        }
    }
L_001f13a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f13a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f149c;
        }
    }
L_001f13a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f13ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f13b0:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001f13b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f13b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_001f13bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f13c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[5];
        }
    }
L_001f13c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_001f13c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001f13cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f13d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001f13d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001f13d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001f13dc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001f13e0:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_001f13e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001f13e8:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[12]);
    }
L_001f13ec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1444;
        }
    }
L_001f13f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x138u);
    }
L_001f13f4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f13f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
        }
    }
L_001f13fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f140c;
        }
    }
L_001f1400:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f1404:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f1408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1514;
        }
    }
L_001f140c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f1410:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001f1414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1418:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1430;
        }
    }
L_001f141c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x140u);
    }
L_001f1420:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1534;
        }
    }
L_001f1428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f142c:;
    {
        cpu->r[14] = 0x001f1430u; fn_001f08e8(cpu);
    }
L_001f1430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f1434:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f1438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f14bc;
        }
    }
L_001f143c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f1440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1500;
        }
    }
L_001f1444:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f1448:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f14e8;
        }
    }
L_001f144c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x160u);
    }
L_001f1450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1390;
        }
    }
L_001f1458:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f145c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1460:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f1464:;
    {
        cpu->r[14] = 0x001f146cu;
    }
L_001f1468:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f146cu)) return;
    }
L_001f146c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001f1470:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f1474:;
    {
        wr8(cpu->r[4] + + 0x160u, cpu->r[10]);
    }
L_001f1478:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f147c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f13a0;
        }
    }
L_001f1480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1484:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f1488:;
    {
        cpu->r[14] = 0x001f148cu; fn_001f0ed4(cpu);
    }
L_001f148c:;
    {
        wr32(cpu->r[6], cpu->r[10]);
    }
L_001f1490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1494:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[0]);
    }
L_001f1498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f13a8;
        }
    }
L_001f149c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f14a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f14a4:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001f14a8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001f14ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001f14b0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_001f14b4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[0] = v;
    }
L_001f14b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f14bcu)) return;
    }
L_001f14bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f14c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f14c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1444;
        }
    }
L_001f14c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f14cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f14d0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f14d4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f14d8:;
    {
        cpu->r[14] = 0x001f14e0u;
    }
L_001f14dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f14e0u)) return;
    }
L_001f14e0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f14e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f144c;
        }
    }
L_001f14e8:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f14ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001f14f0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001f14f4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_001f14f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[0] = v;
    }
L_001f14fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1500u)) return;
    }
L_001f1500:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f1504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f1508:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f150c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1444;
        }
    }
L_001f1510:;
    {
        goto L_001f149c;
    }
L_001f1514:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f1518:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f151c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f1520:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f1524:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1528:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f152c:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[2]);
    }
L_001f1530:;
    {
        goto L_001f140c;
    }
L_001f1534:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f1538:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f153c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f1540:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f1544:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f1548:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f154c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f1550:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f1554:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f1558:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f155c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1560:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[3]);
    }
L_001f1564:;
    {
        goto L_001f1428;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM11DecodeBlockEPvPNS_12SegmentStateE @ 001f1568 (arm) */
void fn_001f1568(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1568:;
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
L_001f156c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000014cu, 1, 0);
    }
L_001f1570:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f1574:;
    {
        cpu->r[0] = rd32(0x001f157cu + + 0x4b0u);
    }
L_001f1578:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_001f157c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001f1580:;
    {
        cpu->r[2] = rd32(0x001f1588u + + 0x4a8u);
    }
L_001f1584:;
    {
        cpu->r[0] = add_flags(cpu, 0x001f158cu, cpu->r[0], 0, 0);
    }
L_001f1588:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f158c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001f1590:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_001f1594:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001f1598:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_001f159c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001f15a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_001f15a4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f15a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f15ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001f15b0:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001f15b4:;
    {
        cpu->r[14] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_001f15b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f15bc:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x8u);
    }
L_001f15c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f15c4:;
    {
        wr32(cpu->r[13] + + 0x144u, cpu->r[12]);
    }
L_001f15c8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f15cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[14], 0, 0);
    }
L_001f15d0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001f15d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f15d8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_001f15dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_001f15e0:;
    {
        cpu->r[4] = rd16(cpu->r[6] + + 0xau);
    }
L_001f15e4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f15e8:;
    {
        cpu->r[14] = 0x001f15f0u;
    }
L_001f15ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f15f0u)) return;
    }
L_001f15f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001f15f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1614;
        }
    }
L_001f15f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001f15fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f1600:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f1604:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f1608:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f160c:;
    {
        cpu->r[14] = 0x001f1614u;
    }
L_001f1610:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1614u)) return;
    }
L_001f1614:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f1618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000001a0u, 0, 0);
    }
L_001f161c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001f1620:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_001f1624:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x19cu);
    }
L_001f1628:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_001f162c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x10u);
    }
L_001f1630:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f1634:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001f1638:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_001f163c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001f1640:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001f1644:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f1648:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_001f164c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f1650:;
    {
        cpu->r[14] = 0x001f1658u;
    }
L_001f1654:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1658u)) return;
    }
L_001f1658:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f165c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f1660:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f1664:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f1668:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f166c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f1670:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001f1674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001f1678:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001f167c:;
    {
        cpu->r[14] = 0x001f1680u; imp_memcpy(cpu); /* memcpy */
    }
L_001f1680:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1684:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_001f1688:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1a08;
        }
    }
L_001f168c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001f1690:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001f1694:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001f1698:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001f169c:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001f16a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001f16a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001a4u, 0, 0);
    }
L_001f16a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f16ac:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f16b0:;
    {
        cpu->r[14] = 0x001f16b4u; imp_memcpy(cpu); /* memcpy */
    }
L_001f16b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001f16b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001f16bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f16a0;
        }
    }
L_001f16c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000148u, 0, 0);
    }
L_001f16c4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001f16c8:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x34u;
        wr32(cpu->r[1] + - 0x34u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_001f16cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_001f16d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001f16d4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001f16d8:;
    {
        goto L_001f16e0;
    }
L_001f16dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f16e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001f16e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001f16e8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001f16ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f16dc;
        }
    }
L_001f16f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f16f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f16f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[4] = v;
    }
L_001f16fc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001f1700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001f1704:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001f1708:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000001a0u, 0, 0);
    }
L_001f170c:;
    {
        cpu->r[0] = rd16(cpu->r[0]);
    }
L_001f1710:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[4];
        wr16(cpu->r[2], cpu->r[0]);
        cpu->r[2] = wb_tmp;
    }
L_001f1714:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_001f1718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f171c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001f1720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1700;
        }
    }
L_001f1724:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 0);
    }
L_001f1728:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_001f172c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f1730:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001f1734:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
        }
    }
L_001f1738:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1940;
        }
    }
L_001f173c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1740:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_001f1744:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1748:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001f174c:;
    {
        cpu->r[0] = rd32(0x001f1754u + + 0x2e0u);
    }
L_001f1750:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001f1754:;
    {
        cpu->r[1] = rd32(0x001f175cu + + 0x2dcu);
    }
L_001f1758:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001f175c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001f1760:;
    {
        cpu->r[3] = rd32(0x001f1768u + + 0x2d4u);
    }
L_001f1764:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001f1768:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f176c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f1774u, cpu->r[3], 0, 0);
    }
L_001f1770:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_001f1774:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000b4u, 0, 0);
    }
L_001f1778:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_001f177c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_001f1780:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001f1784:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_001f1788:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001f178c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_001f1790:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001f1794:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1798:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f179c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1924;
        }
    }
L_001f17a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f17a4:;
    {
        cpu->r[10] = 0x00008000u;
    }
L_001f17a8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f17ac:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xffffu << 16);
    }
L_001f17b0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_001f17b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f17b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f17bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001f17c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_001f17c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f17c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_001f17cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f17d0:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001f17d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_001f17d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_001f17dc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001f17e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001f17e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001f17e8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001f17ec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001f17f0:;
    {
        cpu->r[4] = rd8(cpu->r[6] + + 0x2u);
    }
L_001f17f4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f17f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f17fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f1800:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f1804:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 16u, &shc); cpu->r[4] = v;
    }
L_001f1808:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x1u);
    }
L_001f180c:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[7]);
    }
L_001f1810:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x3u);
    }
L_001f1814:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_001f1818:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_001f181c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001f1820:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 24u, &shc), 0, 0);
    }
L_001f1824:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001f1828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1988;
        }
    }
L_001f182c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f1830:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[3] = v;
    }
L_001f1834:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f1838:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[11]);
    }
L_001f183c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f1840:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001f1844:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f1848:;
    {
        cpu->r[0] = rd8(cpu->r[11] + + 0x2u);
    }
L_001f184c:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_001f1850:;
    {
        goto L_001f1894;
    }
L_001f1854:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f1858:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001f185c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001f1860:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_001f1864:;
    {
        cpu->r[2] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_001f1868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001f186c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_001f1870:;
    {
        wr16(cpu->r[8], cpu->r[3]);
    }
L_001f1874:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f1878:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000058u, 1, 1);
    }
L_001f187c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000058u;
        }
    }
L_001f1880:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 1);
    }
L_001f1884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f18d4;
        }
    }
L_001f1888:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 4u, &shc); cpu->r[4] = v;
    }
L_001f188c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001f1890:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[3] = v;
    }
L_001f1894:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f1898:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_001f189c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[10] + cpu->r[2]);
    }
L_001f18a0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001f18a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_001f18a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_001f18ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
        }
    }
L_001f18b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f18b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 2u, &shc), 0, 0);
        }
    }
L_001f18b8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_001f18bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1854;
        }
    }
L_001f18c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001f18c4:;
    {
        cpu->r[2] = 0x00007fffu;
    }
L_001f18c8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001f18cc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_001f18d0:;
    {
        goto L_001f1864;
    }
L_001f18d4:;
    {
        wr8(cpu->r[11] + + 0x2u, cpu->r[0]);
    }
L_001f18d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001f18dc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f18e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f18e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f18e8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001f18ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f18f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f18f4:;
    {
        wr16(cpu->r[11], cpu->r[3]);
    }
L_001f18f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001f18fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001f1900:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_001f1904:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001f1908:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f190c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f17f0;
        }
    }
L_001f1910:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f1914:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001f1918:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001f191c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001f1920:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001f1924:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f1928:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001f192c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f1930:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_001f1934:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001f1938:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_001f193c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f1794;
        }
    }
L_001f1940:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f1944:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f1948:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_001f194c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0xcu);
    }
L_001f1950:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001f1954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001f1958:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f195c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f1960:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_001f1964:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
        }
    }
L_001f1968:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f196c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001f1970:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x144u);
    }
L_001f1974:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f1978:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f197c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1a28;
        }
    }
L_001f1980:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000014cu, 0, 0);
    }
L_001f1984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1988u)) return;
    }
L_001f1988:;
    {
        cpu->r[0] = 0x00000164u;
    }
L_001f198c:;
    {
        cpu->r[14] = 0x001f1990u; fn_00097dd4(cpu);
    }
L_001f1990:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f1994:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f1998:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001f199c:;
    {
        cpu->r[2] = 0x000000b2u;
    }
L_001f19a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001f19a4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f19a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f19ac:;
    {
        wr32(cpu->r[8], cpu->r[7]);
    }
L_001f19b0:;
    {
        cpu->r[14] = 0x001f19b4u; imp_memcpy(cpu); /* memcpy */
    }
L_001f19b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f19b8:;
    {
        cpu->r[2] = 0x00000164u;
    }
L_001f19bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f19c0:;
    {
        cpu->r[14] = 0x001f19c4u; imp_memcpy(cpu); /* memcpy */
    }
L_001f19c4:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001f19c8:;
    {
        cpu->r[14] = 0x001f19ccu; fn_00097dd4(cpu);
    }
L_001f19cc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_001f19d0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f19d4:;
    {
        cpu->r[14] = cpu->r[0];
    }
L_001f19d8:;
    {
        uint32_t base = cpu->r[7];
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
L_001f19dc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f19e0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_001f19e4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f19e8:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_001f19ec:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001f19f0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f19f4:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001f19f8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001f19fc:;
    {
        cpu->r[14] = 0x001f1a00u; imp_memcpy(cpu); /* memcpy */
    }
L_001f1a00:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_001f1a04:;
    {
        goto L_001f182c;
    }
L_001f1a08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1a0c:;
    {
        wr32(cpu->r[13] + + 0x114u, cpu->r[9]);
    }
L_001f1a10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1a14:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
        }
    }
L_001f1a18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f16f0;
        }
    }
L_001f1a1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f1a20:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001f1a24:;
    {
        goto L_001f1724;
    }
L_001f1a28:;
    {
        cpu->r[14] = 0x001f1a2cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001f1a2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 2, 29u, &shc); cpu->r[8] = v;
        }
    }
L_001f1a30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001f1a34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_001f1a38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, (cpu->r[7] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001f1a3c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[4] + (-cpu->r[12]);
        wr16(cpu->r[4], cpu->r[0]);
        cpu->r[4] = wb_tmp;
        }
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM34SetDecodingBufferToSegmentPositionEPNS_12SegmentStateE @ 001f1a40 (arm) */
void fn_001f1a40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1a40:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f1a44:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x170u);
    }
L_001f1a48:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0xcu);
    }
L_001f1a4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f1a50:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001f1a54:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f1a58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f1a5c:;
    {
        cpu->r[14] = 0x001f1a60u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f1a60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001f1a64:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[8] = v;
    }
L_001f1a68:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f1a6c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_001f1a70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x170u);
    }
L_001f1a74:;
    {
        cpu->r[14] = 0x001f1a78u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f1a78:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x10u);
    }
L_001f1a7c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f1a80:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f1a84:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001f1a88:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_001f1a8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f1a90:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f1a94:;
    {
        cpu->r[14] = 0x001f1a98u; fn_001f1568(cpu);
    }
L_001f1a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000005eu, 0, 0);
    }
L_001f1a9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001f1aa0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_001f1aa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f1aa8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001f1aac:;
    {
        wr32(cpu->r[7] + + 0x184u, cpu->r[3]);
    }
L_001f1ab0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[6]);
    }
L_001f1ab4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1ab8u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM4SeekEiPNS_12SegmentStateE @ 001f1ab8 (arm) */
void fn_001f1ab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1ab8:;
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
L_001f1abc:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_001f1ac0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f1ac4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001f1ac8:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x3cu);
    }
L_001f1acc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f1ad0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001f1ad4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f1ad8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_001f1adc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x10u);
        }
    }
L_001f1ae0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001f1ae4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f1ae8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001f1aec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = (~0x00000000u);
        }
    }
L_001f1af0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1afc;
        }
    }
L_001f1af4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1af8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1afcu)) return;
    }
L_001f1afc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x170u);
    }
L_001f1b00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f1b04:;
    {
        cpu->r[14] = 0x001f1b08u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f1b08:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x10u);
    }
L_001f1b0c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x4u);
    }
L_001f1b10:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001f1b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f1b18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f1b1c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_001f1b20:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f1b24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f1b28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f1b2c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[12]);
    }
L_001f1b30:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[7], 2, 3u, &shc));
    }
L_001f1b34:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f1b38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_001f1b3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001f1b40:;
    {
        cpu->r[14] = 0x001f1b48u;
    }
L_001f1b44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1b48u)) return;
    }
L_001f1b48:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1b4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1af4;
        }
    }
L_001f1b50:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x170u);
    }
L_001f1b54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001f1b58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f1b5c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f1b60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1b64:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[10] = v;
    }
L_001f1b68:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001f1b6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000005eu, 0, 0);
    }
L_001f1b70:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 0);
    }
L_001f1b74:;
    {
        wr32(cpu->r[3] + + 0x184u, cpu->r[6]);
    }
L_001f1b78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001f1b7c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[10]);
    }
L_001f1b80:;
    {
        cpu->r[14] = 0x001f1b84u; fn_001f1568(cpu);
    }
L_001f1b84:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001f1b88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f1b8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1b90u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM13DecodeSegmentEPviPNS_12SegmentStateE @ 001f1b90 (arm) */
void fn_001f1b90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1b90:;
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
L_001f1b94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f1b98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f1b9c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f1ba0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1ba4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001f1ba8:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f1bac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f1bb0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001f1bb4:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f1bb8:;
    {
        cpu->r[14] = 0x001f1bbcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f1bbc:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001f1bc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1bc4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001f1bc8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f1bcc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1d58;
        }
    }
L_001f1bd0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001f1bd4:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001f1bd8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000184u, 0, 0);
    }
L_001f1bdc:;
    {
        cpu->r[7] = rd32(cpu->r[13]);
    }
L_001f1be0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000005eu, 0, 0);
    }
L_001f1be4:;
    {
        goto L_001f1ce4;
    }
L_001f1be8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001f1bec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001f1bf0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f1bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1d1c;
        }
    }
L_001f1bf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1d44;
        }
    }
L_001f1c00:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f1c04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f1c08:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001f1c0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001f1c10:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001f1c14:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001f1c18:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001f1c1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_001f1c20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[6];
        }
    }
L_001f1c24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001f1c28:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001f1c2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001f1c30:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_001f1c34:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f1c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f1c3c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[0] = v;
    }
L_001f1c40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f1c44:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6]; cpu->r[2] = v;
    }
L_001f1c48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001f1c4c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001f1c50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f1c54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001f1c58:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f1c5c:;
    {
        cpu->r[14] = 0x001f1c60u; imp_memcpy(cpu); /* memcpy */
    }
L_001f1c60:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001f1c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001f1c68:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001f1c6c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f1c70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f1c74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001f1c78:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_001f1c7c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001f1c80:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1cdc;
        }
    }
L_001f1c84:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_001f1c88:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f1c8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_001f1c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1ca0;
        }
    }
L_001f1c94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001f1c98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f1c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1de0;
        }
    }
L_001f1ca0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f1ca4:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001f1ca8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1cc8;
        }
    }
L_001f1cb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_001f1cb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1e00;
        }
    }
L_001f1cbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f1cc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1e3c;
        }
    }
L_001f1cc8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001f1ccc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f1cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1d7c;
        }
    }
L_001f1cd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f1cd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1db8;
        }
    }
L_001f1cdc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f1ce0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1da8;
        }
    }
L_001f1ce4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x40u);
    }
L_001f1ce8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1be8;
        }
    }
L_001f1cf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f1cf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1cf8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f1cfc:;
    {
        cpu->r[14] = 0x001f1d04u;
    }
L_001f1d00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1d04u)) return;
    }
L_001f1d04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f1d08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001f1d0c:;
    {
        wr8(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_001f1d10:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001f1d14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f1d18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1bf8;
        }
    }
L_001f1d1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f1d20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1d24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f1d28:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001f1d2c:;
    {
        cpu->r[14] = 0x001f1d30u; fn_001f1568(cpu);
    }
L_001f1d30:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f1d34:;
    {
        wr32(cpu->r[8], cpu->r[12]);
    }
L_001f1d38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1d3c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[0]);
    }
L_001f1d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1c00;
        }
    }
L_001f1d44:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1d48:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001f1d4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001f1d50:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f1d54:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_001f1d58:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001f1d5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f1d60:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6]; cpu->r[10] = v;
    }
L_001f1d64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f1d68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f1d6c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
        }
    }
L_001f1d70:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10]; cpu->r[0] = v;
    }
L_001f1d74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f1d78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1d7cu)) return;
    }
L_001f1d7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001f1d80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1cdc;
        }
    }
L_001f1d88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f1d8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1d90:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f1d94:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f1d98:;
    {
        cpu->r[14] = 0x001f1da0u;
    }
L_001f1d9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1da0u)) return;
    }
L_001f1da0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f1da4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f1ce4;
        }
    }
L_001f1da8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001f1dac:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1db0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001f1db4:;
    {
        goto L_001f1d58;
    }
L_001f1db8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f1dbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f1dc0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f1dc4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1cdc;
        }
    }
L_001f1dc8:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001f1dcc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f1dd0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1dd4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_001f1dd8:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_001f1ddc:;
    {
        goto L_001f1d58;
    }
L_001f1de0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f1de4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001f1de8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f1dec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f1df0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1df4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f1df8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[2]);
    }
L_001f1dfc:;
    {
        goto L_001f1ca0;
    }
L_001f1e00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f1e04:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001f1e08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f1e0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f1e10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f1e14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f1e18:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f1e1c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f1e20:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f1e24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f1e28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f1e2c:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001f1e30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f1e34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1cc8;
        }
    }
L_001f1e3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1e40:;
    {
        cpu->r[14] = 0x001f1e44u; fn_001f08e8(cpu);
    }
L_001f1e44:;
    {
        goto L_001f1cc8;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM30DecodeCurrentSegmentWithOffsetEPvi @ 001f1e48 (arm) */
void fn_001f1e48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1e48:;
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
L_001f1e4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f1e50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f1e54:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f1e58:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f1e5c:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f1e60:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001f1e64:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 3u, &shc); cpu->r[5] = v;
    }
L_001f1e68:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5]; cpu->r[1] = v;
    }
L_001f1e6c:;
    {
        cpu->r[14] = 0x001f1e70u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f1e70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x168u);
    }
L_001f1e74:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x15cu);
    }
L_001f1e78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f1e7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f1e80:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001f1e84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001f1e88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f1eb4;
        }
    }
L_001f1e8c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_001f1e90:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001f1e94:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f1e98:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_001f1e9c:;
    {
        cpu->r[14] = 0x001f1ea0u; imp_memset(cpu); /* memset */
    }
L_001f1ea0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x168u);
    }
L_001f1ea4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f1ea8:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
    }
L_001f1eac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001f1eb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001f1eb4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f1eb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2038;
        }
    }
L_001f1ebc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001f1ec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f1ec4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001f1ec8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001f1ecc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000184u, 0, 0);
    }
L_001f1ed0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000005eu, 0, 0);
    }
L_001f1ed4:;
    {
        goto L_001f1fcc;
    }
L_001f1ed8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001f1edc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001f1ee0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f1ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2004;
        }
    }
L_001f1ee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f1eec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f202c;
        }
    }
L_001f1ef0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f1ef4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001f1ef8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f1efc:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001f1f00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001f1f04:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001f1f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f1f0c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001f1f10:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_001f1f14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[5];
        }
    }
L_001f1f18:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001f1f1c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f1f20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001f1f24:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001f1f28:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[0] = v;
    }
L_001f1f2c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001f1f30:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5]; cpu->r[2] = v;
    }
L_001f1f34:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001f1f38:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f1f3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001f1f40:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f1f44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f1f48:;
    {
        cpu->r[14] = 0x001f1f4cu; imp_memcpy(cpu); /* memcpy */
    }
L_001f1f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f1f50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f1f54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001f1f58:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001f1f5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f1f60:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[3]);
    }
L_001f1f64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f1f68:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_001f1f6c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1fc4;
        }
    }
L_001f1f70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x138u);
    }
L_001f1f74:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f1f78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
        }
    }
L_001f1f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1f8c;
        }
    }
L_001f1f80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f1f84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f1f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2098;
        }
    }
L_001f1f8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f1f90:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001f1f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1f98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1fb0;
        }
    }
L_001f1f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x140u);
    }
L_001f1fa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f1fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f20b8;
        }
    }
L_001f1fa8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1fac:;
    {
        cpu->r[14] = 0x001f1fb0u; fn_001f08e8(cpu);
    }
L_001f1fb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f1fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f1fb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2050;
        }
    }
L_001f1fbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f1fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2084;
        }
    }
L_001f1fc4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f1fc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f207c;
        }
    }
L_001f1fcc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x160u);
    }
L_001f1fd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f1fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1ed8;
        }
    }
L_001f1fd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f1fdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f1fe0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f1fe4:;
    {
        cpu->r[14] = 0x001f1fecu;
    }
L_001f1fe8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f1fecu)) return;
    }
L_001f1fec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001f1ff0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001f1ff4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f1ff8:;
    {
        wr8(cpu->r[4] + + 0x160u, cpu->r[12]);
    }
L_001f1ffc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f2000:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1ee8;
        }
    }
L_001f2004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f200c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f2010:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001f2014:;
    {
        cpu->r[14] = 0x001f2018u; fn_001f1568(cpu);
    }
L_001f2018:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f201c:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001f2020:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2024:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001f2028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f1ef0;
        }
    }
L_001f202c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001f2030:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f2034:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[2]);
    }
L_001f2038:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f203c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001f2040:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_001f2044:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001f2048:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f204c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2050u)) return;
    }
L_001f2050:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f2054:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f1fc4;
        }
    }
L_001f205c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f2060:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2064:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f2068:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f206c:;
    {
        cpu->r[14] = 0x001f2074u;
    }
L_001f2070:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2074u)) return;
    }
L_001f2074:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f2078:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f1fcc;
        }
    }
L_001f207c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001f2080:;
    {
        goto L_001f2038;
    }
L_001f2084:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f2088:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f208c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f2090:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f1fc4;
        }
    }
L_001f2094:;
    {
        goto L_001f202c;
    }
L_001f2098:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f209c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f20a0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f20a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f20a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f20ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f20b0:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[2]);
    }
L_001f20b4:;
    {
        goto L_001f1f8c;
    }
L_001f20b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f20bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f20c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f20c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f20c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f20cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f20d0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f20d4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f20d8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f20dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f20e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f20e4:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[3]);
    }
L_001f20e8:;
    {
        goto L_001f1fa8;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCMD1Ev @ 001f20ec (arm) */
void fn_001f20ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f20ec:;
    {
        cpu->r[2] = rd32(0x001f20f4u + + 0xd0u);
    }
L_001f20f0:;
    {
        cpu->r[1] = rd32(0x001f20f8u + + 0xd0u);
    }
L_001f20f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f20fcu, cpu->r[2], 0, 0);
    }
L_001f20f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x174u);
    }
L_001f20fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f2100:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001f2104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2108:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f210c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001f2110:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001f2114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2188;
        }
    }
L_001f2118:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001f211c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2138;
        }
    }
L_001f2124:;
    {
        cpu->r[14] = 0x001f2128u; fn_00097dc8(cpu);
    }
L_001f2128:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f212c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f2130:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2134:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001f2138:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f213c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2158;
        }
    }
L_001f2144:;
    {
        cpu->r[14] = 0x001f2148u; fn_00097dc8(cpu);
    }
L_001f2148:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f214c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f2150:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2154:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_001f2158:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f215c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2178;
        }
    }
L_001f2164:;
    {
        cpu->r[14] = 0x001f2168u; fn_00097dc8(cpu);
    }
L_001f2168:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f216c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f2170:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2174:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_001f2178:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f217c:;
    {
        cpu->r[14] = 0x001f2180u; fn_00097dc8(cpu);
    }
L_001f2180:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f2184:;
    {
        wr32(cpu->r[5] + + 0x174u, cpu->r[3]);
    }
L_001f2188:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x19cu);
    }
L_001f218c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f21a0;
        }
    }
L_001f2194:;
    {
        cpu->r[14] = 0x001f2198u; fn_00097dc8(cpu);
    }
L_001f2198:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f219c:;
    {
        wr32(cpu->r[5] + + 0x19cu, cpu->r[3]);
    }
L_001f21a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000001a0u, 0, 0);
    }
L_001f21a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000001c0u, 0, 0);
    }
L_001f21a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001f21ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f21b0:;
    {
        cpu->r[14] = 0x001f21b4u; fn_001930d4(cpu);
    }
L_001f21b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001f21b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f21a8;
        }
    }
L_001f21bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f21c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f21c4u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCMD0Ev @ 001f21cc (arm) */
void fn_001f21cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f21cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f21d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f21d4:;
    {
        cpu->r[14] = 0x001f21d8u; fn_001f20ec(cpu);
    }
L_001f21d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f21dc:;
    {
        cpu->r[14] = 0x001f21e0u; fn_0018ba20(cpu);
    }
L_001f21e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f21e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f21e8u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCMD2Ev @ 001f21e8 (arm) */
void fn_001f21e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f21e8:;
    {
        cpu->r[2] = rd32(0x001f21f0u + + 0xd0u);
    }
L_001f21ec:;
    {
        cpu->r[1] = rd32(0x001f21f4u + + 0xd0u);
    }
L_001f21f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f21f8u, cpu->r[2], 0, 0);
    }
L_001f21f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x174u);
    }
L_001f21f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f21fc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001f2200:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2204:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f2208:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001f220c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001f2210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2284;
        }
    }
L_001f2214:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001f2218:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f221c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2234;
        }
    }
L_001f2220:;
    {
        cpu->r[14] = 0x001f2224u; fn_00097dc8(cpu);
    }
L_001f2224:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f2228:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f222c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2230:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001f2234:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f2238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f223c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2254;
        }
    }
L_001f2240:;
    {
        cpu->r[14] = 0x001f2244u; fn_00097dc8(cpu);
    }
L_001f2244:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f2248:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f224c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2250:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_001f2254:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f2258:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f225c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2274;
        }
    }
L_001f2260:;
    {
        cpu->r[14] = 0x001f2264u; fn_00097dc8(cpu);
    }
L_001f2264:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x174u);
    }
L_001f2268:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f226c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f2270:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_001f2274:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2278:;
    {
        cpu->r[14] = 0x001f227cu; fn_00097dc8(cpu);
    }
L_001f227c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f2280:;
    {
        wr32(cpu->r[5] + + 0x174u, cpu->r[3]);
    }
L_001f2284:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x19cu);
    }
L_001f2288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f228c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f229c;
        }
    }
L_001f2290:;
    {
        cpu->r[14] = 0x001f2294u; fn_00097dc8(cpu);
    }
L_001f2294:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f2298:;
    {
        wr32(cpu->r[5] + + 0x19cu, cpu->r[3]);
    }
L_001f229c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x000001a0u, 0, 0);
    }
L_001f22a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000001c0u, 0, 0);
    }
L_001f22a4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 0);
    }
L_001f22a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f22ac:;
    {
        cpu->r[14] = 0x001f22b0u; fn_001930d4(cpu);
    }
L_001f22b0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001f22b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f22a4;
        }
    }
L_001f22b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f22bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f22c0u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCMC1EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001f22c8 (arm) */
void fn_001f22c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f22c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f22cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001f22d0:;
    {
        cpu->r[6] = rd32(0x001f22d8u + + 0x1a4u);
    }
L_001f22d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f22d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f22dc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f22e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000001a0u, 0, 0);
    }
L_001f22e4:;
    {
        cpu->r[6] = add_flags(cpu, 0x001f22ecu, cpu->r[6], 0, 0);
    }
L_001f22e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f22ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f22f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f22f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001f22f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001f22fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f2300:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001f2304:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f2308:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001f230c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001f2310:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001f2314:;
    {
        cpu->r[14] = 0x001f2318u; fn_001f005c(cpu);
    }
L_001f2318:;
    {
        cpu->r[3] = rd32(0x001f2320u + + 0x160u);
    }
L_001f231c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f2320:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001f2324:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[2]);
    }
L_001f2328:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[2]);
    }
L_001f232c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001f2330:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f2334:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001f2338:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001f233c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001f2340:;
    {
        cpu->r[14] = 0x001f2344u; fn_001930c0(cpu);
    }
L_001f2344:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000020u, 1, 1);
    }
L_001f2348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2338;
        }
    }
L_001f234c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_001f2350:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001f2354:;
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
L_001f2358:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001f235c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001f2360:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x10u);
    }
L_001f2364:;
    {
        cpu->r[14] = 0x001f2368u; fn_00097dd4(cpu);
    }
L_001f2368:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[0]);
    }
L_001f236c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f2370:;
    {
        cpu->r[14] = 0x001f2374u; fn_00097dd4(cpu);
    }
L_001f2374:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2378:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f237c:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[0]);
    }
L_001f2380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2458;
        }
    }
L_001f2384:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2458;
        }
    }
L_001f238c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001f2390:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f2394:;
    {
        cpu->r[14] = 0x001f2398u; fn_00097dd4(cpu);
    }
L_001f2398:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f239c:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_001f23a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f23a4:;
    {
        cpu->r[14] = 0x001f23a8u; fn_00097dd4(cpu);
    }
L_001f23a8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f23ac:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_001f23b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f23b4:;
    {
        cpu->r[14] = 0x001f23b8u; fn_00097dd4(cpu);
    }
L_001f23b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f23bc:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001f23c0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001f23c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f23c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2458;
        }
    }
L_001f23cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f23d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f23d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2458;
        }
    }
L_001f23d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f23dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f23e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2458;
        }
    }
L_001f23e4:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0xau);
    }
L_001f23e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f23ec:;
    {
        wr32(cpu->r[4] + + 0x178u, cpu->r[5]);
    }
L_001f23f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001f23f4:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[5]);
    }
L_001f23f8:;
    {
        wr32(cpu->r[4] + + 0x180u, cpu->r[5]);
    }
L_001f23fc:;
    {
        wr32(cpu->r[4] + + 0x184u, cpu->r[5]);
    }
L_001f2400:;
    {
        wr32(cpu->r[4] + + 0x188u, cpu->r[5]);
    }
L_001f2404:;
    {
        wr32(cpu->r[4] + + 0x18cu, cpu->r[5]);
    }
L_001f2408:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[5]);
    }
L_001f240c:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[5]);
    }
L_001f2410:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[5]);
    }
L_001f2414:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f245c;
        }
    }
L_001f2418:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001f241c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f2420:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_001f2424:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001f2428:;
    {
        cpu->r[14] = 0x001f242cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f242c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f2430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001f2434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f2438:;
    {
        wr32(cpu->r[4] + + 0x170u, cpu->r[0]);
    }
L_001f243c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2470;
        }
    }
L_001f2440:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[5]);
    }
L_001f2444:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001f2448:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001f244c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001f2450:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001f2454:;
    {
        goto L_001f2470;
    }
L_001f2458:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f245c:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[3]);
    }
L_001f2460:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f2464:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[3]);
    }
L_001f2468:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001f246c:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001f2470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2474:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001f2478:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f247cu)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCMC2EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001f2484 (arm) */
void fn_001f2484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2484:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f2488:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001f248c:;
    {
        cpu->r[6] = rd32(0x001f2494u + + 0x1a4u);
    }
L_001f2490:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f2494:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f2498:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f249c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x000001a0u, 0, 0);
    }
L_001f24a0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001f24a8u, cpu->r[6], 0, 0);
    }
L_001f24a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f24a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f24ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f24b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001f24b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001f24b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f24bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001f24c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f24c4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001f24c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001f24cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001f24d0:;
    {
        cpu->r[14] = 0x001f24d4u; fn_001f005c(cpu);
    }
L_001f24d4:;
    {
        cpu->r[3] = rd32(0x001f24dcu + + 0x160u);
    }
L_001f24d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f24dc:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001f24e0:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[2]);
    }
L_001f24e4:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[2]);
    }
L_001f24e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001f24ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f24f0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001f24f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001f24f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001f24fc:;
    {
        cpu->r[14] = 0x001f2500u; fn_001930c0(cpu);
    }
L_001f2500:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000020u, 1, 1);
    }
L_001f2504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f24f4;
        }
    }
L_001f2508:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_001f250c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001f2510:;
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
L_001f2514:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001f2518:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001f251c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x10u);
    }
L_001f2520:;
    {
        cpu->r[14] = 0x001f2524u; fn_00097dd4(cpu);
    }
L_001f2524:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[0]);
    }
L_001f2528:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f252c:;
    {
        cpu->r[14] = 0x001f2530u; fn_00097dd4(cpu);
    }
L_001f2530:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2534:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f2538:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[0]);
    }
L_001f253c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2614;
        }
    }
L_001f2540:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f2544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2614;
        }
    }
L_001f2548:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001f254c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f2550:;
    {
        cpu->r[14] = 0x001f2554u; fn_00097dd4(cpu);
    }
L_001f2554:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2558:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_001f255c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f2560:;
    {
        cpu->r[14] = 0x001f2564u; fn_00097dd4(cpu);
    }
L_001f2564:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2568:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_001f256c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f2570:;
    {
        cpu->r[14] = 0x001f2574u; fn_00097dd4(cpu);
    }
L_001f2574:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x174u);
    }
L_001f2578:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001f257c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001f2580:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f2584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2614;
        }
    }
L_001f2588:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f258c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f2590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2614;
        }
    }
L_001f2594:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f2598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f259c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2614;
        }
    }
L_001f25a0:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0xau);
    }
L_001f25a4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f25a8:;
    {
        wr32(cpu->r[4] + + 0x178u, cpu->r[5]);
    }
L_001f25ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001f25b0:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[5]);
    }
L_001f25b4:;
    {
        wr32(cpu->r[4] + + 0x180u, cpu->r[5]);
    }
L_001f25b8:;
    {
        wr32(cpu->r[4] + + 0x184u, cpu->r[5]);
    }
L_001f25bc:;
    {
        wr32(cpu->r[4] + + 0x188u, cpu->r[5]);
    }
L_001f25c0:;
    {
        wr32(cpu->r[4] + + 0x18cu, cpu->r[5]);
    }
L_001f25c4:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[5]);
    }
L_001f25c8:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[5]);
    }
L_001f25cc:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[5]);
    }
L_001f25d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2618;
        }
    }
L_001f25d4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001f25d8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f25dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_001f25e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001f25e4:;
    {
        cpu->r[14] = 0x001f25e8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f25e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f25ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001f25f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f25f4:;
    {
        wr32(cpu->r[4] + + 0x170u, cpu->r[0]);
    }
L_001f25f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f262c;
        }
    }
L_001f25fc:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[5]);
    }
L_001f2600:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001f2604:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001f2608:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001f260c:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001f2610:;
    {
        goto L_001f262c;
    }
L_001f2614:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f2618:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[3]);
    }
L_001f261c:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f2620:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[3]);
    }
L_001f2624:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001f2628:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001f262c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2630:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001f2634:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2638u)) return;
    }
}

/* _ZN3vox29NativeSubDecoderIMAADPCMStateD1Ev @ 001f2640 (arm) */
void fn_001f2640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2640:;
    {
        cpu->r[3] = rd32(0x001f2648u + + 0x24u);
    }
L_001f2644:;
    {
        cpu->r[2] = rd32(0x001f264cu + + 0x24u);
    }
L_001f2648:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f2650u, cpu->r[3], 0, 0);
    }
L_001f264c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f2650:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f2654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f2658:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f265c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f2660:;
    {
        cpu->r[14] = 0x001f2664u; fn_001efc40(cpu);
    }
L_001f2664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2668:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f266cu)) return;
    }
}

/* _ZN3vox29NativeSubDecoderIMAADPCMStateD0Ev @ 001f2674 (arm) */
void fn_001f2674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2674:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f2678:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f267c:;
    {
        cpu->r[14] = 0x001f2680u; fn_001f2640(cpu);
    }
L_001f2680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2684:;
    {
        cpu->r[14] = 0x001f2688u; fn_0018ba20(cpu);
    }
L_001f2688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f268c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2690u)) return;
    }
}

/* _ZN3vox29NativeSubDecoderIMAADPCMStateD2Ev @ 001f2690 (arm) */
void fn_001f2690(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2690:;
    {
        cpu->r[3] = rd32(0x001f2698u + + 0x24u);
    }
L_001f2694:;
    {
        cpu->r[2] = rd32(0x001f269cu + + 0x24u);
    }
L_001f2698:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f26a0u, cpu->r[3], 0, 0);
    }
L_001f269c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f26a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f26a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f26a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f26ac:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f26b0:;
    {
        cpu->r[14] = 0x001f26b4u; fn_001efc40(cpu);
    }
L_001f26b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f26b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f26bcu)) return;
    }
}

/* _ZN3vox29NativeSubDecoderIMAADPCMStateC1EPNS_22NativePlaylistsManagerE @ 001f26c4 (arm) */
void fn_001f26c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f26c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f26c8:;
    {
        cpu->r[4] = rd32(0x001f26d0u + + 0x20u);
    }
L_001f26cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f26d0:;
    {
        cpu->r[14] = 0x001f26d4u; fn_001f0360(cpu);
    }
L_001f26d4:;
    {
        cpu->r[3] = rd32(0x001f26dcu + + 0x18u);
    }
L_001f26d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f26e0u, cpu->r[4], 0, 0);
    }
L_001f26dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f26e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f26e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f26e8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f26ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f26f0u)) return;
    }
}

/* _ZN3vox29NativeSubDecoderIMAADPCMStateC2EPNS_22NativePlaylistsManagerE @ 001f26f8 (arm) */
void fn_001f26f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f26f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f26fc:;
    {
        cpu->r[4] = rd32(0x001f2704u + + 0x20u);
    }
L_001f2700:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f2704:;
    {
        cpu->r[14] = 0x001f2708u; fn_001f0360(cpu);
    }
L_001f2708:;
    {
        cpu->r[3] = rd32(0x001f2710u + + 0x18u);
    }
L_001f270c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f2714u, cpu->r[4], 0, 0);
    }
L_001f2710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f2714:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f2718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f271c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f2720:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2724u)) return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM4SeekEj @ 001f272c (arm) */
void fn_001f272c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f272c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f2730:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM17GetDecodingBufferEv @ 001f2734 (arm) */
void fn_001f2734(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2734:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f2738:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM21ReleaseDecodingBufferEi @ 001f273c (arm) */
void fn_001f273c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f273c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM34SetDecodingBufferToSegmentPositionEPNS_12SegmentStateE @ 001f2740 (arm) */
void fn_001f2740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2740:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCMD2Ev @ 001f2744 (arm) */
void fn_001f2744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2744:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCMD1Ev @ 001f2748 (arm) */
void fn_001f2748(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2748:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM31GetBytePositionFromSampleOffsetEj @ 001f274c (arm) */
void fn_001f274c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f274c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x10u);
    }
L_001f2750:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_001f2754:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM4SeekEiPNS_12SegmentStateE @ 001f2758 (arm) */
void fn_001f2758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2758:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f275c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f2760:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001f2764:;
    {
        cpu->r[6] = rd16(cpu->r[0] + + 0x10u);
    }
L_001f2768:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[2] + + 0x10u);
        }
    }
L_001f276c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f2770:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f2774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f2778:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f277c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001f2780:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_001f2784:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001f2788:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f278c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2790u)) return;
        }
    }
L_001f2790:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_001f2794:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_001f2798:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f279c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f27a0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[4]; cpu->r[6] = v;
    }
L_001f27a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f27a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001f27ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f27b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001f27b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f27b8:;
    {
        cpu->r[14] = 0x001f27c0u;
    }
L_001f27bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f27c0u)) return;
    }
L_001f27c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f27c4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0xcu, cpu->r[4]);
        }
    }
L_001f27c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
        }
    }
L_001f27cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f27d0u)) return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM5ResetEv @ 001f27d0 (arm) */
void fn_001f27d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f27d0:;
    {
        return fn_001ef8f4(cpu);
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM8SetStateEPNS_24NativeSubDecoderPCMStateE @ 001f27d4 (arm) */
void fn_001f27d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f27d4:;
    {
        return fn_001ef694(cpu);
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM8GetStateEPNS_24NativeSubDecoderPCMStateE @ 001f27d8 (arm) */
void fn_001f27d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f27d8:;
    {
        return fn_001ef7c4(cpu);
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM20EmulateDecodeSegmentEiPNS_12SegmentStateE @ 001f27dc (arm) */
void fn_001f27dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f27dc:;
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
L_001f27e0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001f27e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f27e8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001f27ec:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_001f27f0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f27f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f27f8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f27fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001f2800:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f2804:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f2808:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f280c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_001f2810:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2814:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001f2818:;
    {
        cpu->r[9] = rd16(cpu->r[8] + + 0x10u);
    }
L_001f281c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f2820:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f2824:;
    {
        cpu->r[14] = 0x001f282cu;
    }
L_001f2828:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f282cu)) return;
    }
L_001f282c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f2830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2850;
        }
    }
L_001f2834:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f2838:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f283c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f2840:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2844:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2848:;
    {
        cpu->r[14] = 0x001f2850u;
    }
L_001f284c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2850u)) return;
    }
L_001f2850:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f2854:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001f2858:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2964;
        }
    }
L_001f285c:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_001f2860:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001f2864:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9] + cpu->r[9]; cpu->r[7] = v;
    }
L_001f2868:;
    {
        goto L_001f291c;
    }
L_001f286c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f2870:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f2874:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f2878:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f287c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2880:;
    {
        cpu->r[14] = 0x001f2888u;
    }
L_001f2884:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2888u)) return;
    }
L_001f2888:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f288c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f2890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001f2894:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f2898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f295c;
        }
    }
L_001f289c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f28a0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f28a4:;
    {
        cpu->r[14] = 0x001f28a8u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f28a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f28ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_001f28b0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f28b4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f28b8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2914;
        }
    }
L_001f28bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f28c0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f28c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
        }
    }
L_001f28c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f28d8;
        }
    }
L_001f28cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001f28d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f28d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f29b8;
        }
    }
L_001f28d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f28dc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001f28e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f28e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2900;
        }
    }
L_001f28e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001f28ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f28f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f29d8;
        }
    }
L_001f28f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f28f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f28fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2a18;
        }
    }
L_001f2900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001f2904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f2908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f297c;
        }
    }
L_001f290c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f2910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f29a4;
        }
    }
L_001f2914:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001f2918:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2964;
        }
    }
L_001f291c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f2920:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001f2924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f2928:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001f292c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f286c;
        }
    }
L_001f2930:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f2934:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001f2938:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f293c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f2940:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2944:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2948:;
    {
        cpu->r[14] = 0x001f2950u;
    }
L_001f294c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2950u)) return;
    }
L_001f2950:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f2954:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_001f2958:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f289c;
        }
    }
L_001f295c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f2960:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001f2964:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2968:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f296c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f2970:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f2974:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001f2978:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f297cu)) return;
    }
L_001f297c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001f2980:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2914;
        }
    }
L_001f2988:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001f298c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f2990:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f2994:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f2998:;
    {
        cpu->r[14] = 0x001f29a0u;
    }
L_001f299c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f29a0u)) return;
    }
L_001f29a0:;
    {
        goto L_001f2914;
    }
L_001f29a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f29a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f29ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f29b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2914;
        }
    }
L_001f29b4:;
    {
        goto L_001f295c;
    }
L_001f29b8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x2cu);
    }
L_001f29bc:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f29c0:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f29c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f29c8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f29cc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f29d0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001f29d4:;
    {
        goto L_001f28d8;
    }
L_001f29d8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x2cu);
    }
L_001f29dc:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f29e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f29e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f29e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f29ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f29f0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f29f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f29f8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f29fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f2a00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2a04:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9] + cpu->r[9]; cpu->r[7] = v;
    }
L_001f2a08:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001f2a0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2a10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2a14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2900;
        }
    }
L_001f2a18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f2a1c:;
    {
        cpu->r[14] = 0x001f2a20u; fn_001f08e8(cpu);
    }
L_001f2a20:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f2a24:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9] + cpu->r[9]; cpu->r[7] = v;
    }
L_001f2a28:;
    {
        goto L_001f2900;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM37EmulateDecodeCurrentSegmentWithOffsetEi @ 001f2a2c (arm) */
void fn_001f2a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2a2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f2a30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x120u);
    }
L_001f2a34:;
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
L_001f2a38:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f2a3c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x168u);
    }
L_001f2a40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f2a44:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x10u);
    }
L_001f2a48:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001f2a4c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f2a50:;
    {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_001f2a54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f2a58:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x168u, cpu->r[3]);
        }
    }
L_001f2a5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f2a60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f2a64:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x128u);
    }
L_001f2a68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001f2a6c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f2a70:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x134u);
    }
L_001f2a74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001f2a78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2a7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2a80:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[6] * cpu->r[10]; cpu->r[6] = v;
        }
    }
L_001f2a84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f2a88:;
    {
        cpu->r[14] = 0x001f2a90u;
    }
L_001f2a8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2a90u)) return;
    }
L_001f2a90:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f2a94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2ab4;
        }
    }
L_001f2a98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2a9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f2aa0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f2aa4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2aa8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2aac:;
    {
        cpu->r[14] = 0x001f2ab4u;
    }
L_001f2ab0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2ab4u)) return;
    }
L_001f2ab4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001f2ab8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f2bc4;
        }
    }
L_001f2abc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10] + cpu->r[10]; cpu->r[7] = v;
    }
L_001f2ac0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f2ac4:;
    {
        goto L_001f2b7c;
    }
L_001f2ac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2acc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f2ad0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f2ad4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2ad8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2adc:;
    {
        cpu->r[14] = 0x001f2ae4u;
    }
L_001f2ae0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2ae4u)) return;
    }
L_001f2ae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2ae8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f2aec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001f2af0:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[3]);
    }
L_001f2af4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2bbc;
        }
    }
L_001f2af8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2afc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f2b00:;
    {
        cpu->r[14] = 0x001f2b04u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f2b04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f2b08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_001f2b0c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f2b10:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[0]);
    }
L_001f2b14:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2b74;
        }
    }
L_001f2b18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x138u);
    }
L_001f2b1c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 1u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001f2b20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x13cu);
        }
    }
L_001f2b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2b34;
        }
    }
L_001f2b28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f2b2c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001f2b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2c38;
        }
    }
L_001f2b34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f2b38:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[2]);
    }
L_001f2b3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f2b40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2b60;
        }
    }
L_001f2b44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x140u);
    }
L_001f2b48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2c04;
        }
    }
L_001f2b50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2b54:;
    {
        cpu->r[14] = 0x001f2b58u; fn_001f08e8(cpu);
    }
L_001f2b58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f2b5c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10] + cpu->r[10]; cpu->r[7] = v;
    }
L_001f2b60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f2b64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001f2b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2bcc;
        }
    }
L_001f2b6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001f2b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2bf4;
        }
    }
L_001f2b74:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001f2b78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2bc4;
        }
    }
L_001f2b7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2b80:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_001f2b84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f2b88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001f2b8c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2ac8;
        }
    }
L_001f2b90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2b94:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001f2b98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f2b9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f2ba0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2ba4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2ba8:;
    {
        cpu->r[14] = 0x001f2bb0u;
    }
L_001f2bac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2bb0u)) return;
    }
L_001f2bb0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f2bb4:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[7]);
    }
L_001f2bb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2af8;
        }
    }
L_001f2bbc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f2bc0:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001f2bc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f2bc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2bccu)) return;
    }
L_001f2bcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f2bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2b74;
        }
    }
L_001f2bd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f2bdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2be0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f2be4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001f2be8:;
    {
        cpu->r[14] = 0x001f2bf0u;
    }
L_001f2bec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2bf0u)) return;
    }
L_001f2bf0:;
    {
        goto L_001f2b74;
    }
L_001f2bf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f2bf8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f2bfc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2b74;
        }
    }
L_001f2c00:;
    {
        goto L_001f2bbc;
    }
L_001f2c04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f2c08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f2c0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2c10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f2c14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f2c18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2c1c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f2c20:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f2c24:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f2c28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f2c2c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2c30:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[3]);
    }
L_001f2c34:;
    {
        goto L_001f2b50;
    }
L_001f2c38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f2c3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f2c40:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001f2c44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f2c48:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f2c4c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f2c50:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001f2c54:;
    {
        goto L_001f2b34;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM13DecodeSegmentEPviPNS_12SegmentStateE @ 001f2c58 (arm) */
void fn_001f2c58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2c58:;
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
L_001f2c5c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001f2c60:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f2c64:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001f2c68:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001f2c6c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001f2c70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f2c74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f2c78:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f2c7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001f2c80:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f2c84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f2c88:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2c8c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_001f2c90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2c94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_001f2c98:;
    {
        cpu->r[10] = rd16(cpu->r[4] + + 0x10u);
    }
L_001f2c9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001f2ca0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f2ca4:;
    {
        cpu->r[14] = 0x001f2cacu;
    }
L_001f2ca8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2cacu)) return;
    }
L_001f2cac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001f2cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2cd0;
        }
    }
L_001f2cb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2cb8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f2cbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f2cc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2cc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2cc8:;
    {
        cpu->r[14] = 0x001f2cd0u;
    }
L_001f2ccc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2cd0u)) return;
    }
L_001f2cd0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f2cd4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001f2cd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2de4;
        }
    }
L_001f2cdc:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_001f2ce0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001f2ce4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10] + cpu->r[10]; cpu->r[7] = v;
    }
L_001f2ce8:;
    {
        goto L_001f2d9c;
    }
L_001f2cec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2cf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_001f2cf4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2cf8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2cfc:;
    {
        cpu->r[14] = 0x001f2d04u;
    }
L_001f2d00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2d04u)) return;
    }
L_001f2d04:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f2d08:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f2d0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f2d10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2d14:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_001f2d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2ddc;
        }
    }
L_001f2d1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f2d20:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f2d24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001f2d28:;
    {
        cpu->r[14] = 0x001f2d2cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f2d2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f2d30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f2d34:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001f2d38:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2d94;
        }
    }
L_001f2d3c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_001f2d40:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f2d44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_001f2d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2d58;
        }
    }
L_001f2d4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001f2d50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f2d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2e38;
        }
    }
L_001f2d58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f2d5c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001f2d60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2d64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2d80;
        }
    }
L_001f2d68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_001f2d6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2e58;
        }
    }
L_001f2d74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f2d78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2e98;
        }
    }
L_001f2d80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001f2d84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f2d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2dfc;
        }
    }
L_001f2d8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f2d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2e24;
        }
    }
L_001f2d94:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001f2d98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2de4;
        }
    }
L_001f2d9c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f2da0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_001f2da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001f2da8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001f2dac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2cec;
        }
    }
L_001f2db0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2db4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001f2db8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_001f2dbc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2dc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2dc4:;
    {
        cpu->r[14] = 0x001f2dccu;
    }
L_001f2dc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2dccu)) return;
    }
L_001f2dcc:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001f2dd0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f2dd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2dd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2d1c;
        }
    }
L_001f2ddc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f2de0:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_001f2de4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f2de8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f2dec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f2df0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f2df4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
        }
    }
L_001f2df8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2dfcu)) return;
    }
L_001f2dfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001f2e00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2d94;
        }
    }
L_001f2e08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f2e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2e10:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f2e14:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f2e18:;
    {
        cpu->r[14] = 0x001f2e20u;
    }
L_001f2e1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2e20u)) return;
    }
L_001f2e20:;
    {
        goto L_001f2d94;
    }
L_001f2e24:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f2e28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f2e2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f2e30:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2d94;
        }
    }
L_001f2e34:;
    {
        goto L_001f2ddc;
    }
L_001f2e38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f2e3c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001f2e40:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f2e44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f2e48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2e4c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f2e50:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[2]);
    }
L_001f2e54:;
    {
        goto L_001f2d58;
    }
L_001f2e58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f2e5c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001f2e60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2e64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f2e68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f2e6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2e70:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f2e74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f2e78:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f2e7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f2e80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f2e84:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10] + cpu->r[10]; cpu->r[7] = v;
    }
L_001f2e88:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001f2e8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f2e90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2e94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2d80;
        }
    }
L_001f2e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2e9c:;
    {
        cpu->r[14] = 0x001f2ea0u; fn_001f08e8(cpu);
    }
L_001f2ea0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x14u);
    }
L_001f2ea4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10] + cpu->r[10]; cpu->r[7] = v;
    }
L_001f2ea8:;
    {
        goto L_001f2d80;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCM30DecodeCurrentSegmentWithOffsetEPvi @ 001f2eac (arm) */
void fn_001f2eac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f2eac:;
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
L_001f2eb0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f2eb4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f2eb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f2ebc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x120u);
    }
L_001f2ec0:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001f2ec4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x168u);
    }
L_001f2ec8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f2ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f2ed0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f2ed4:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x10u);
    }
L_001f2ed8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001f2edc:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_001f2ee0:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x134u);
    }
L_001f2ee4:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f2ee8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f2f08;
        }
    }
L_001f2eec:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8]; cpu->r[5] = v;
    }
L_001f2ef0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f2ef4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f2ef8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f2efc:;
    {
        cpu->r[14] = 0x001f2f00u; imp_memset(cpu); /* memset */
    }
L_001f2f00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f2f04:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
    }
L_001f2f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2f0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2f10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2f14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2f18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001f2f1c:;
    {
        cpu->r[14] = 0x001f2f24u;
    }
L_001f2f20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2f24u)) return;
    }
L_001f2f24:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_001f2f28:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_001f2f2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2f4c;
        }
    }
L_001f2f30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2f34:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f2f38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f2f3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2f40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2f44:;
    {
        cpu->r[14] = 0x001f2f4cu;
    }
L_001f2f48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2f4cu)) return;
    }
L_001f2f4c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001f2f50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f305c;
        }
    }
L_001f2f54:;
    {
        uint32_t v = cpu->r[11] * cpu->r[8] + cpu->r[8]; cpu->r[6] = v;
    }
L_001f2f58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f2f5c:;
    {
        goto L_001f3014;
    }
L_001f2f60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f2f64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001f2f68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f2f6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f2f70:;
    {
        cpu->r[14] = 0x001f2f78u;
    }
L_001f2f74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f2f78u)) return;
    }
L_001f2f78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2f7c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f2f80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f2f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f2f88:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[2]);
    }
L_001f2f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3054;
        }
    }
L_001f2f90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f2f94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f2f98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001f2f9c:;
    {
        cpu->r[14] = 0x001f2fa0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f2fa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f2fa4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f2fa8:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[0]);
    }
L_001f2fac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f300c;
        }
    }
L_001f2fb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x138u);
    }
L_001f2fb4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 1u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001f2fb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x13cu);
        }
    }
L_001f2fbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f2fcc;
        }
    }
L_001f2fc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f2fc4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001f2fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f30d0;
        }
    }
L_001f2fcc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f2fd0:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[2]);
    }
L_001f2fd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f2fd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2ff8;
        }
    }
L_001f2fdc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x140u);
    }
L_001f2fe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f2fe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f309c;
        }
    }
L_001f2fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f2fec:;
    {
        cpu->r[14] = 0x001f2ff0u; fn_001f08e8(cpu);
    }
L_001f2ff0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_001f2ff4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[8]; cpu->r[6] = v;
    }
L_001f2ff8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f2ffc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001f3000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3064;
        }
    }
L_001f3004:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001f3008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f308c;
        }
    }
L_001f300c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001f3010:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f305c;
        }
    }
L_001f3014:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x128u);
    }
L_001f3018:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_001f301c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001f3020:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001f3024:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f2f60;
        }
    }
L_001f3028:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f302c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001f3030:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001f3034:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3038:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f303c:;
    {
        cpu->r[14] = 0x001f3044u;
    }
L_001f3040:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3044u)) return;
    }
L_001f3044:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[6]);
    }
L_001f3048:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f304c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3050:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f2f90;
        }
    }
L_001f3054:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f3058:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001f305c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f3060:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3064u)) return;
    }
L_001f3064:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f3068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f306c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f300c;
        }
    }
L_001f3070:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f3074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3078:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f307c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001f3080:;
    {
        cpu->r[14] = 0x001f3088u;
    }
L_001f3084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3088u)) return;
    }
L_001f3088:;
    {
        goto L_001f300c;
    }
L_001f308c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f3090:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f3094:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f300c;
        }
    }
L_001f3098:;
    {
        goto L_001f3054;
    }
L_001f309c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f30a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f30a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f30a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f30ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f30b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f30b4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f30b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f30bc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001f30c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f30c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f30c8:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[3]);
    }
L_001f30cc:;
    {
        goto L_001f2fe8;
    }
L_001f30d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f30d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f30d8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001f30dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f30e0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f30e4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f30e8:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001f30ec:;
    {
        goto L_001f2fcc;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCMD0Ev @ 001f30f0 (arm) */
void fn_001f30f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f30f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f30f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f30f8:;
    {
        cpu->r[14] = 0x001f30fcu; fn_001f2748(cpu);
    }
L_001f30fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3100:;
    {
        cpu->r[14] = 0x001f3104u; fn_0018ba20(cpu);
    }
L_001f3104:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3108:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f310cu)) return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCMC1EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001f310c (arm) */
void fn_001f310c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f310c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001f3110:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001f3114:;
    {
        cpu->r[4] = rd32(0x001f311cu + + 0x54u);
    }
L_001f3118:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f311c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f3120:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f3128u, cpu->r[4], 0, 0);
    }
L_001f3124:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f3128:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f312c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f3130:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f3134:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001f3138:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f313c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001f3140:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001f3144:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001f3148:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f314c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001f3150:;
    {
        cpu->r[14] = 0x001f3154u; fn_001f005c(cpu);
    }
L_001f3154:;
    {
        cpu->r[3] = rd32(0x001f315cu + + 0x18u);
    }
L_001f3158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f315c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f3160:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f3164:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f3168:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001f316c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3170u)) return;
    }
}

/* _ZN3vox22VoxNativeSubDecoderPCMC2EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001f3178 (arm) */
void fn_001f3178(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3178:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001f317c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001f3180:;
    {
        cpu->r[4] = rd32(0x001f3188u + + 0x54u);
    }
L_001f3184:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3188:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f318c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f3194u, cpu->r[4], 0, 0);
    }
L_001f3190:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f3194:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f3198:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f319c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f31a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001f31a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f31a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001f31ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001f31b0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001f31b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001f31b8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001f31bc:;
    {
        cpu->r[14] = 0x001f31c0u; fn_001f005c(cpu);
    }
L_001f31c0:;
    {
        cpu->r[3] = rd32(0x001f31c8u + + 0x18u);
    }
L_001f31c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f31c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f31cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f31d0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f31d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001f31d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f31dcu)) return;
    }
}

/* _ZN3vox24NativeSubDecoderPCMStateD1Ev @ 001f31e4 (arm) */
void fn_001f31e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f31e4:;
    {
        cpu->r[3] = rd32(0x001f31ecu + + 0x24u);
    }
L_001f31e8:;
    {
        cpu->r[2] = rd32(0x001f31f0u + + 0x24u);
    }
L_001f31ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f31f4u, cpu->r[3], 0, 0);
    }
L_001f31f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f31f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f31f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f31fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3200:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3204:;
    {
        cpu->r[14] = 0x001f3208u; fn_001efc40(cpu);
    }
L_001f3208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f320c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3210u)) return;
    }
}

/* _ZN3vox24NativeSubDecoderPCMStateD0Ev @ 001f3218 (arm) */
void fn_001f3218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3218:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f321c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3220:;
    {
        cpu->r[14] = 0x001f3224u; fn_001f31e4(cpu);
    }
L_001f3224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3228:;
    {
        cpu->r[14] = 0x001f322cu; fn_0018ba20(cpu);
    }
L_001f322c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3230:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3234u)) return;
    }
}

/* _ZN3vox24NativeSubDecoderPCMStateD2Ev @ 001f3234 (arm) */
void fn_001f3234(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3234:;
    {
        cpu->r[3] = rd32(0x001f323cu + + 0x24u);
    }
L_001f3238:;
    {
        cpu->r[2] = rd32(0x001f3240u + + 0x24u);
    }
L_001f323c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3244u, cpu->r[3], 0, 0);
    }
L_001f3240:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3244:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3248:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f324c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3250:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3254:;
    {
        cpu->r[14] = 0x001f3258u; fn_001efc40(cpu);
    }
L_001f3258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f325c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3260u)) return;
    }
}

/* _ZN3vox24NativeSubDecoderPCMStateC1EPNS_22NativePlaylistsManagerE @ 001f3268 (arm) */
void fn_001f3268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3268:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f326c:;
    {
        cpu->r[4] = rd32(0x001f3274u + + 0x20u);
    }
L_001f3270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3274:;
    {
        cpu->r[14] = 0x001f3278u; fn_001f0360(cpu);
    }
L_001f3278:;
    {
        cpu->r[3] = rd32(0x001f3280u + + 0x18u);
    }
L_001f327c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f3284u, cpu->r[4], 0, 0);
    }
L_001f3280:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f3284:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f3288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f328c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f3290:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3294u)) return;
    }
}

/* _ZN3vox24NativeSubDecoderPCMStateC2EPNS_22NativePlaylistsManagerE @ 001f329c (arm) */
void fn_001f329c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f329c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f32a0:;
    {
        cpu->r[4] = rd32(0x001f32a8u + + 0x20u);
    }
L_001f32a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f32a8:;
    {
        cpu->r[14] = 0x001f32acu; fn_001f0360(cpu);
    }
L_001f32ac:;
    {
        cpu->r[3] = rd32(0x001f32b4u + + 0x18u);
    }
L_001f32b0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f32b8u, cpu->r[4], 0, 0);
    }
L_001f32b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f32b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f32bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f32c0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f32c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f32c8u)) return;
    }
}

/* _ZN3vox15StreamInterfaceD1Ev @ 001f32d0 (arm) */
void fn_001f32d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15StreamInterface4InitEv @ 001f32d4 (arm) */
void fn_001f32d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15StreamInterface8ShutdownEv @ 001f32d8 (arm) */
void fn_001f32d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15StreamInterface4SizeEv @ 001f32dc (arm) */
void fn_001f32dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f32e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21StreamCursorInterfaceD1Ev @ 001f32e4 (arm) */
void fn_001f32e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21StreamCursorInterface4InitEv @ 001f32e8 (arm) */
void fn_001f32e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21StreamCursorInterface8ShutdownEv @ 001f32ec (arm) */
void fn_001f32ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21StreamCursorInterface7ReadRefERPhi @ 001f32f0 (arm) */
void fn_001f32f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f32f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f32f4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f32f8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001f32fc:;
    {
        cpu->r[14] = 0x001f3304u;
    }
L_001f3300:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3304u)) return;
    }
L_001f3304:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3308u)) return;
    }
}

/* _ZN3vox21StreamCursorInterface20AllowBufferReferenceEv @ 001f3308 (arm) */
void fn_001f3308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3308:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f330c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11StreamCFile7GetTypeEv @ 001f3310 (arm) */
void fn_001f3310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3310:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f3314:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17StreamCFileCursor10IsSeekableEv @ 001f3318 (arm) */
void fn_001f3318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3318:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f331c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox17StreamCFileCursor4InitEv @ 001f3320 (arm) */
void fn_001f3320(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3320:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f3324:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3328:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f332c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3330:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3334u)) return;
        }
    }
L_001f3334:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3338:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f333c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3340u)) return;
        }
    }
L_001f3340:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_001f3344:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_001f3348:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f334c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3350u)) return;
        }
    }
L_001f3350:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3354:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f3358:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f335c:;
    {
        cpu->r[14] = 0x001f3364u;
    }
L_001f3360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3364u)) return;
    }
L_001f3364:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001f3368:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f336cu)) return;
    }
}

/* _ZN3vox17StreamCFileCursor4TellEv @ 001f336c (arm) */
void fn_001f336c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f336c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3370:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3378:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f337c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f3380:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3384u)) return;
        }
    }
L_001f3384:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f3388:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f338c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3390u)) return;
        }
    }
L_001f3390:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3394:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3398:;
    {
        cpu->r[14] = 0x001f33a0u;
    }
L_001f339c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f33a0u)) return;
    }
L_001f33a0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f33a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f33a8u)) return;
    }
}

/* _ZN3vox17StreamCFileCursor4ReadEPhi @ 001f33a8 (arm) */
void fn_001f33a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f33a8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f33ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f33b0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f33b4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001f33b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f33bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001f33c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f33c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f33c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f33fc;
        }
    }
L_001f33cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f33d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f33d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f3404;
        }
    }
L_001f33d8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f33dc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001f33e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f33e4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001f33e8:;
    {
        cpu->r[14] = 0x001f33f0u;
    }
L_001f33ec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f33f0u)) return;
    }
L_001f33f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f33f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001f33f8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001f33fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001f3400:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3404u)) return;
    }
L_001f3404:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001f3408:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001f340c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f3410:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001f3414:;
    {
        cpu->r[14] = 0x001f341cu;
    }
L_001f3418:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f341cu)) return;
    }
L_001f341c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f3420:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001f3424:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f3428:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f342c:;
    {
        goto L_001f33d8;
    }
}

/* _ZN3vox15StreamInterfaceD0Ev @ 001f3430 (arm) */
void fn_001f3430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3430:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3434:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3438:;
    {
        cpu->r[14] = 0x001f343cu; fn_0018ba20(cpu);
    }
L_001f343c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3440:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3444u)) return;
    }
}

/* _ZN3vox21StreamCursorInterfaceD0Ev @ 001f3444 (arm) */
void fn_001f3444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3444:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3448:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f344c:;
    {
        cpu->r[14] = 0x001f3450u; fn_0018ba20(cpu);
    }
L_001f3450:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3454:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3458u)) return;
    }
}

/* _ZN3vox11StreamCFileD1Ev @ 001f3458 (arm) */
void fn_001f3458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3458:;
    {
        cpu->r[3] = rd32(0x001f3460u + + 0x3cu);
    }
L_001f345c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f3460:;
    {
        cpu->r[1] = rd32(0x001f3468u + + 0x38u);
    }
L_001f3464:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f346cu, cpu->r[3], 0, 0);
    }
L_001f3468:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f346c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001f3470:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3474:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001f3478:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000008u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001f347c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_001f3480:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f3484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3494;
        }
    }
L_001f3488:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f348c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3494;
        }
    }
L_001f3490:;
    {
        cpu->r[14] = 0x001f3494u; fn_00097dc8(cpu);
    }
L_001f3494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3498:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f349cu)) return;
    }
}

/* _ZN3vox11StreamCFile13DestroyCursorEPNS_21StreamCursorInterfaceE @ 001f34a4 (arm) */
void fn_001f34a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f34a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f34a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f34ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f34b0u)) return;
        }
    }
L_001f34b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f34b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f34b8:;
    {
        cpu->r[14] = 0x001f34c0u;
    }
L_001f34bc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f34c0u)) return;
    }
L_001f34c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f34c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f34c8:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox17StreamCFileCursor8ShutdownEv @ 001f34cc (arm) */
void fn_001f34cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f34cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f34d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f34d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f34d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f34dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f350c;
        }
    }
L_001f34e0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f34e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f34e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f34ecu)) return;
        }
    }
L_001f34ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_001f34f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f34f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f34f8u)) return;
        }
    }
L_001f34f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f34fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3500:;
    {
        cpu->r[14] = 0x001f3508u;
    }
L_001f3504:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3508u)) return;
    }
L_001f3508:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f350cu)) return;
    }
L_001f350c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3510:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3514:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3518u)) return;
        }
    }
L_001f3518:;
    {
        cpu->r[14] = 0x001f351cu; fn_0020029c(cpu);
    }
L_001f351c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3520:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3524u)) return;
        }
    }
L_001f3524:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3528:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f352c:;
    {
        cpu->r[14] = 0x001f3534u;
    }
L_001f3530:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3534u)) return;
    }
L_001f3534:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3538u)) return;
    }
}

/* _ZN3vox17StreamCFileCursorD1Ev @ 001f3538 (arm) */
void fn_001f3538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3538:;
    {
        cpu->r[3] = rd32(0x001f3540u + + 0x24u);
    }
L_001f353c:;
    {
        cpu->r[2] = rd32(0x001f3544u + + 0x24u);
    }
L_001f3540:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3548u, cpu->r[3], 0, 0);
    }
L_001f3544:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3548:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f354c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3554:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3558:;
    {
        cpu->r[14] = 0x001f355cu; fn_001f34cc(cpu);
    }
L_001f355c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3560:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3564u)) return;
    }
}

/* _ZN3vox11StreamCFile4InitEv @ 001f356c (arm) */
void fn_001f356c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f356c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3570:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f3574:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_001f3578:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f357c:;
    {
        cpu->r[14] = 0x001f3580u; fn_0020029c(cpu);
    }
L_001f3580:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001f3584:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f3588:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001f358c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001f3590:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3594u)) return;
        }
    }
L_001f3594:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001f3598:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f359cu)) return;
        }
    }
L_001f359c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001f35a0:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f35a4:;
    {
        cpu->r[14] = 0x001f35acu;
    }
L_001f35a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35acu)) return;
    }
L_001f35ac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f35b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35b4u)) return;
        }
    }
L_001f35b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f35b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f35bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f35c0:;
    {
        cpu->r[14] = 0x001f35c8u;
    }
L_001f35c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35c8u)) return;
    }
L_001f35c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f35cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f35d0:;
    {
        cpu->r[14] = 0x001f35d8u;
    }
L_001f35d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35d8u)) return;
    }
L_001f35d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001f35dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f35e0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001f35e4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001f35e8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f35ec:;
    {
        cpu->r[14] = 0x001f35f4u;
    }
L_001f35f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35f4u)) return;
    }
L_001f35f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f35f8u)) return;
    }
}

/* _ZN3vox11StreamCFile15CreateNewCursorEv @ 001f35f8 (arm) */
void fn_001f35f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f35f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f35fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3604:;
    {
        cpu->r[4] = rd32(0x001f360cu + + 0x4cu);
    }
L_001f3608:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f360c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f3610:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f3618u, cpu->r[4], 0, 0);
    }
L_001f3614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3618u)) return;
        }
    }
L_001f3618:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f361c:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001f3620:;
    {
        cpu->r[14] = 0x001f3624u; fn_00097dd0(cpu);
    }
L_001f3624:;
    {
        cpu->r[3] = rd32(0x001f362cu + + 0x30u);
    }
L_001f3628:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f362c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f3630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f3634:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f3638:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_001f363c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001f3640:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001f3644:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001f3648:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001f364c:;
    {
        cpu->r[14] = 0x001f3650u; fn_001f3320(cpu);
    }
L_001f3650:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f3654:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3658u)) return;
    }
}

/* _ZNSbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEE9_M_assignEPKcS7_ @ 001f3660 (arm) */
void fn_001f3660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3660:;
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
L_001f3664:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001f3668:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f366c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f3670:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001f3674:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f3678:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001f367c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001f3680:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001f3684:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f36bc;
        }
    }
L_001f3688:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f368c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3834;
        }
    }
L_001f3690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001f3694:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f3698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f36b4;
        }
    }
L_001f369c:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_001f36a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f36a4:;
    {
        wr8(cpu->r[0] + cpu->r[5], cpu->r[1]);
    }
L_001f36a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f36ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f36b0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001f36b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f36b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f36bcu)) return;
    }
L_001f36bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f36c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[2];
        }
    }
L_001f36c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3814;
        }
    }
L_001f36c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001f36cc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001f36d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f36b4;
        }
    }
L_001f36d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001f36d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_001f36dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
        }
    }
L_001f36e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_001f36e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f36e8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001f36ec:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001f37c0;
        }
    }
L_001f36f0:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_001f36f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001f36f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001f36fc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f3700:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f3860;
        }
    }
L_001f3704:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001f3708:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001f370c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
        }
    }
L_001f3710:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
        }
    }
L_001f3714:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001f3718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3854;
        }
    }
L_001f371c:;
    {
        cpu->r[6] = (~0x00000001u);
    }
L_001f3720:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3724:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f3728:;
    {
        cpu->r[14] = 0x001f372cu; fn_00097dd0(cpu);
    }
L_001f372c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f3730:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f3734:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001f3738:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f373c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f3740:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001f3744:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3764;
        }
    }
L_001f3748:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f374c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[8]);
    }
L_001f3750:;
    {
        wr8(cpu->r[10] + cpu->r[8], cpu->r[3]);
    }
L_001f3754:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001f3758:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001f375c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f374c;
        }
    }
L_001f3760:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_001f3764:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f3768:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3788;
        }
    }
L_001f376c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f3770:;
    {
        cpu->r[2] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_001f3774:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_001f3778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f377c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f3780:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3770;
        }
    }
L_001f3784:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001f3788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f378c:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_001f3790:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f3794:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001f3798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f37a8;
        }
    }
L_001f379c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f37a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f37a8;
        }
    }
L_001f37a4:;
    {
        cpu->r[14] = 0x001f37a8u; fn_00097dc8(cpu);
    }
L_001f37a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001f37ac:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_001f37b0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[10]);
    }
L_001f37b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f37b8:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_001f37bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f37c0u)) return;
    }
L_001f37c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001f37c4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_001f37c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f37cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f37ec;
        }
    }
L_001f37d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001f37d4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f37d8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        cpu->r[1] = rd8(cpu->r[2] + + 0x1u);
        cpu->r[2] = wb_tmp;
    }
L_001f37dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001f37e0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x1u;
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001f37e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f37d8;
        }
    }
L_001f37e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f37ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f37f0:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_001f37f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f37f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f37fc:;
    {
        cpu->r[2] = rd8(cpu->r[7]);
    }
L_001f3800:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001f3804:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f3808:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001f380c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001f3810:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3814u)) return;
    }
L_001f3814:;
    {
        cpu->r[14] = 0x001f3818u; imp_memcpy(cpu); /* memcpy */
    }
L_001f3818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f381c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f3820:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001f3824:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001f3828:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001f382c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f36d4;
        }
    }
L_001f3830:;
    {
        goto L_001f36b4;
    }
L_001f3834:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f3838:;
    {
        cpu->r[14] = 0x001f383cu; imp_memcpy(cpu); /* memcpy */
    }
L_001f383c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f3840:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f3844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001f3848:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f384c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f369c;
        }
    }
L_001f3850:;
    {
        goto L_001f36b4;
    }
L_001f3854:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001f3858:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f3720;
        }
    }
L_001f385c:;
    {
        goto L_001f371c;
    }
L_001f3860:;
    {
        cpu->r[0] = rd32(0x001f3868u + + 0x8u);
    }
L_001f3864:;
    {
        cpu->r[0] = add_flags(cpu, 0x001f386cu, cpu->r[0], 0, 0);
    }
L_001f3868:;
    {
        cpu->r[14] = 0x001f386cu; fn_00208298(cpu);
    }
L_001f386c:;
    {
        goto L_001f3704;
    }
}

/* _ZN3vox11StreamCFileC2EPKc @ 001f3874 (arm) */
void fn_001f3874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3874:;
    {
        cpu->r[3] = rd32(0x001f387cu + + 0x60u);
    }
L_001f3878:;
    {
        cpu->r[2] = rd32(0x001f3880u + + 0x60u);
    }
L_001f387c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3884u, cpu->r[3], 0, 0);
    }
L_001f3880:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3884:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3888:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f388c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3890:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3894:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3898:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_001f389c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f38a0:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001f38a4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001f38a8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001f38ac:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[5]);
    }
L_001f38b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f38d4;
        }
    }
L_001f38b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f38b8:;
    {
        cpu->r[14] = 0x001f38bcu; imp_strlen(cpu); /* strlen */
    }
L_001f38bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f38c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001f38c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f38c8:;
    {
        cpu->r[14] = 0x001f38ccu; fn_001f3660(cpu);
    }
L_001f38cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f38d0:;
    {
        cpu->r[14] = 0x001f38d4u; fn_001f356c(cpu);
    }
L_001f38d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f38d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f38dcu)) return;
    }
}

/* _ZN3vox17StreamCFileCursorD0Ev @ 001f38e4 (arm) */
void fn_001f38e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f38e4:;
    {
        cpu->r[3] = rd32(0x001f38ecu + + 0x2cu);
    }
L_001f38e8:;
    {
        cpu->r[2] = rd32(0x001f38f0u + + 0x2cu);
    }
L_001f38ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f38f4u, cpu->r[3], 0, 0);
    }
L_001f38f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f38f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f38f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f38fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3900:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3904:;
    {
        cpu->r[14] = 0x001f3908u; fn_001f34cc(cpu);
    }
L_001f3908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f390c:;
    {
        cpu->r[14] = 0x001f3910u; fn_0018ba20(cpu);
    }
L_001f3910:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3914:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3918u)) return;
    }
}

/* _ZN3vox17StreamCFileCursor11EndOfStreamEv @ 001f3920 (arm) */
void fn_001f3920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3920:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3924:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f392c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3930:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f3934:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3938u)) return;
        }
    }
L_001f3938:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f393c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f3940:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f3978;
        }
    }
L_001f3944:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3948:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f394c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f3950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3968;
        }
    }
L_001f3954:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3958:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f395c:;
    {
        cpu->r[14] = 0x001f3964u;
    }
L_001f3960:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3964u)) return;
    }
L_001f3964:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001f3968:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f396c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f3970:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f3974:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3978u)) return;
    }
L_001f3978:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f397c:;
    {
        cpu->r[14] = 0x001f3984u;
    }
L_001f3980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3984u)) return;
    }
L_001f3984:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3988:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f398c:;
    {
        goto L_001f3944;
    }
}

/* _ZN3vox11StreamCFileD0Ev @ 001f3990 (arm) */
void fn_001f3990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3990:;
    {
        cpu->r[3] = rd32(0x001f3998u + + 0x44u);
    }
L_001f3994:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f3998:;
    {
        cpu->r[1] = rd32(0x001f39a0u + + 0x40u);
    }
L_001f399c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f39a4u, cpu->r[3], 0, 0);
    }
L_001f39a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f39a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001f39a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f39ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001f39b0:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000008u;
        wr32(cpu->r[2], cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001f39b4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x14u);
    }
L_001f39b8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f39bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f39cc;
        }
    }
L_001f39c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f39c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f39cc;
        }
    }
L_001f39c8:;
    {
        cpu->r[14] = 0x001f39ccu; fn_00097dc8(cpu);
    }
L_001f39cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f39d0:;
    {
        cpu->r[14] = 0x001f39d4u; fn_0018ba20(cpu);
    }
L_001f39d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f39d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f39dcu)) return;
    }
}

/* _ZN3vox17StreamCFileCursor4SeekEii @ 001f39e4 (arm) */
void fn_001f39e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f39e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f39e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f39ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f39f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f39f4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f39f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f39fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3a00u)) return;
        }
    }
L_001f3a00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001f3a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3aa8;
        }
    }
L_001f3a08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001f3a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3a58;
        }
    }
L_001f3a10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f3a14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_001f3a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3a80;
        }
    }
L_001f3a1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f3a20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f3a4c;
        }
    }
L_001f3a24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001f3a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3a44;
        }
    }
L_001f3a34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3a38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3a3c:;
    {
        cpu->r[14] = 0x001f3a44u;
    }
L_001f3a40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3a44u)) return;
    }
L_001f3a44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f3a48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3a88;
        }
    }
L_001f3a4c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f3a50:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f3a54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3a58u)) return;
    }
L_001f3a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3a5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3a60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001f3a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3a78;
        }
    }
L_001f3a68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3a6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3a70:;
    {
        cpu->r[14] = 0x001f3a78u;
    }
L_001f3a74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3a78u)) return;
    }
L_001f3a78:;
    {
        cpu->r[5] = (~cpu->r[5]);
    }
L_001f3a7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001f3a80:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001f3a84:;
    {
        goto L_001f3a1c;
    }
L_001f3a88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f3a8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f3a90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f3a94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3a98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3a9c:;
    {
        cpu->r[14] = 0x001f3aa4u;
    }
L_001f3aa0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3aa4u)) return;
    }
L_001f3aa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3aa8u)) return;
    }
L_001f3aa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f3aac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3ab0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f3ac0;
        }
    }
L_001f3ab4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001f3ab8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001f3abc:;
    {
        goto L_001f3a1c;
    }
L_001f3ac0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3ac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3ac8:;
    {
        cpu->r[14] = 0x001f3ad0u;
    }
L_001f3acc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3ad0u)) return;
    }
L_001f3ad0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001f3ad4:;
    {
        goto L_001f3ab4;
    }
}

/* _ZN3vox11StreamCFileC1EPKc @ 001f3ad8 (arm) */
void fn_001f3ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3ad8:;
    {
        cpu->r[3] = rd32(0x001f3ae0u + + 0x60u);
    }
L_001f3adc:;
    {
        cpu->r[2] = rd32(0x001f3ae4u + + 0x60u);
    }
L_001f3ae0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3ae8u, cpu->r[3], 0, 0);
    }
L_001f3ae4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3ae8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3aec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3af0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3af8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3afc:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_001f3b00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3b04:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001f3b08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001f3b0c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001f3b10:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[5]);
    }
L_001f3b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3b38;
        }
    }
L_001f3b18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f3b1c:;
    {
        cpu->r[14] = 0x001f3b20u; imp_strlen(cpu); /* strlen */
    }
L_001f3b20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f3b24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001f3b28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f3b2c:;
    {
        cpu->r[14] = 0x001f3b30u; fn_001f3660(cpu);
    }
L_001f3b30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3b34:;
    {
        cpu->r[14] = 0x001f3b38u; fn_001f356c(cpu);
    }
L_001f3b38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3b3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3b40u)) return;
    }
}

/* _ZN3vox18StreamCFileFactoryEPv @ 001f3b48 (arm) */
void fn_001f3b48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b48:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3b4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3b50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3b54:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001f3b58:;
    {
        cpu->r[14] = 0x001f3b5cu; fn_00097dd0(cpu);
    }
L_001f3b5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f3b60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3b64:;
    {
        cpu->r[14] = 0x001f3b68u; fn_001f3ad8(cpu);
    }
L_001f3b68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3b6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3b70u)) return;
    }
}

/* _ZN3vox18StreamMemoryBuffer7GetTypeEv @ 001f3b70 (arm) */
void fn_001f3b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b70:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f3b74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor10IsSeekableEv @ 001f3b78 (arm) */
void fn_001f3b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b78:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f3b7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor4TellEv @ 001f3b80 (arm) */
void fn_001f3b80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3b84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor20AllowBufferReferenceEv @ 001f3b88 (arm) */
void fn_001f3b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b88:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f3b8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursorD1Ev @ 001f3b90 (arm) */
void fn_001f3b90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursorD0Ev @ 001f3b94 (arm) */
void fn_001f3b94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3b94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3b98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3b9c:;
    {
        cpu->r[14] = 0x001f3ba0u; fn_0018ba20(cpu);
    }
L_001f3ba0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3ba4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3ba8u)) return;
    }
}

/* _ZN3vox18StreamMemoryBuffer13DestroyCursorEPNS_21StreamCursorInterfaceE @ 001f3ba8 (arm) */
void fn_001f3ba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3ba8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3bac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3bb0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3bb4u)) return;
        }
    }
L_001f3bb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f3bb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3bbc:;
    {
        cpu->r[14] = 0x001f3bc4u;
    }
L_001f3bc0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3bc4u)) return;
    }
L_001f3bc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3bc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f3bcc:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox18StreamMemoryBufferD1Ev @ 001f3bd0 (arm) */
void fn_001f3bd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3bd0:;
    {
        cpu->r[3] = rd32(0x001f3bd8u + + 0x3cu);
    }
L_001f3bd4:;
    {
        cpu->r[2] = rd32(0x001f3bdcu + + 0x3cu);
    }
L_001f3bd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3be0u, cpu->r[3], 0, 0);
    }
L_001f3bdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3be0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3be4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3be8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3bf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3bf4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001f3bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3c0c;
        }
    }
L_001f3bfc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xcu);
    }
L_001f3c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3c0c;
        }
    }
L_001f3c08:;
    {
        cpu->r[14] = 0x001f3c0cu; fn_00097dc8(cpu);
    }
L_001f3c0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3c10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3c14u)) return;
    }
}

/* _ZN3vox18StreamMemoryBufferD0Ev @ 001f3c1c (arm) */
void fn_001f3c1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3c1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3c20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3c24:;
    {
        cpu->r[14] = 0x001f3c28u; fn_001f3bd0(cpu);
    }
L_001f3c28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3c2c:;
    {
        cpu->r[14] = 0x001f3c30u; fn_0018ba20(cpu);
    }
L_001f3c30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3c38u)) return;
    }
}

/* _ZN3vox18StreamMemoryBufferD2Ev @ 001f3c38 (arm) */
void fn_001f3c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3c38:;
    {
        cpu->r[3] = rd32(0x001f3c40u + + 0x3cu);
    }
L_001f3c3c:;
    {
        cpu->r[2] = rd32(0x001f3c44u + + 0x3cu);
    }
L_001f3c40:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3c48u, cpu->r[3], 0, 0);
    }
L_001f3c44:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3c48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3c4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3c50:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3c58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3c5c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001f3c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3c74;
        }
    }
L_001f3c64:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xcu);
    }
L_001f3c68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3c74;
        }
    }
L_001f3c70:;
    {
        cpu->r[14] = 0x001f3c74u; fn_00097dc8(cpu);
    }
L_001f3c74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3c78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3c7cu)) return;
    }
}

/* _ZN3vox18StreamMemoryBuffer15CreateNewCursorEv @ 001f3c84 (arm) */
void fn_001f3c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3c84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3c88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3c8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3c90:;
    {
        cpu->r[4] = rd32(0x001f3c98u + + 0x38u);
    }
L_001f3c94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3c98:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f3ca0u, cpu->r[4], 0, 0);
    }
L_001f3c9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3ca0u)) return;
        }
    }
L_001f3ca0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3ca4:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001f3ca8:;
    {
        cpu->r[14] = 0x001f3cacu; fn_00097dd0(cpu);
    }
L_001f3cac:;
    {
        cpu->r[2] = rd32(0x001f3cb4u + + 0x20u);
    }
L_001f3cb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3cb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f3cb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3cbc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f3cc0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001f3cc4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_001f3cc8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001f3ccc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3cd0u)) return;
    }
}

/* _ZN3vox18StreamMemoryBufferC1EPNS_24StreamMemoryBufferParamsE @ 001f3cd8 (arm) */
void fn_001f3cd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3cd8:;
    {
        cpu->r[3] = rd32(0x001f3ce0u + + 0xa0u);
    }
L_001f3cdc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001f3ce0:;
    {
        cpu->r[2] = rd32(0x001f3ce8u + + 0x9cu);
    }
L_001f3ce4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3cecu, cpu->r[3], 0, 0);
    }
L_001f3ce8:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001f3cec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3cf0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3cf4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3cf8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3cfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3d00:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001f3d04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3d08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001f3d0c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3d78;
        }
    }
L_001f3d14:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_001f3d18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f3d1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f3d20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd8(cpu->r[5] + + 0x9u);
        }
    }
L_001f3d24:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001f3d28:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001f3d2c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_001f3d30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3d70;
        }
    }
L_001f3d38:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x9u);
    }
L_001f3d3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3d70;
        }
    }
L_001f3d44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3d48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3d78;
        }
    }
L_001f3d4c:;
    {
        cpu->r[14] = 0x001f3d50u; fn_00097dd4(cpu);
    }
L_001f3d50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3d54:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001f3d58:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_001f3d5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3d78;
        }
    }
L_001f3d60:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001f3d64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3d68:;
    {
        cpu->r[14] = 0x001f3d6cu; imp_memcpy(cpu); /* memcpy */
    }
L_001f3d6c:;
    {
        goto L_001f3d78;
    }
L_001f3d70:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f3d74:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f3d78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3d7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3d80u)) return;
    }
}

/* _ZN3vox25StreamMemoryBufferFactoryEPv @ 001f3d88 (arm) */
void fn_001f3d88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3d88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3d8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3d90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3d94:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001f3d98:;
    {
        cpu->r[14] = 0x001f3d9cu; fn_00097dd0(cpu);
    }
L_001f3d9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f3da0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3da4:;
    {
        cpu->r[14] = 0x001f3da8u; fn_001f3cd8(cpu);
    }
L_001f3da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3dac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3db0u)) return;
    }
}

/* _ZN3vox18StreamMemoryBufferC2EPNS_24StreamMemoryBufferParamsE @ 001f3db0 (arm) */
void fn_001f3db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3db0:;
    {
        cpu->r[3] = rd32(0x001f3db8u + + 0xa0u);
    }
L_001f3db4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001f3db8:;
    {
        cpu->r[2] = rd32(0x001f3dc0u + + 0x9cu);
    }
L_001f3dbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f3dc4u, cpu->r[3], 0, 0);
    }
L_001f3dc0:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001f3dc4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f3dc8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3dcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f3dd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f3dd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3dd8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001f3ddc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f3de0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001f3de4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f3de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3e50;
        }
    }
L_001f3dec:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_001f3df0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f3df4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f3df8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd8(cpu->r[5] + + 0x9u);
        }
    }
L_001f3dfc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001f3e00:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001f3e04:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_001f3e08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3e0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3e48;
        }
    }
L_001f3e10:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x9u);
    }
L_001f3e14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3e18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f3e48;
        }
    }
L_001f3e1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3e20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3e50;
        }
    }
L_001f3e24:;
    {
        cpu->r[14] = 0x001f3e28u; fn_00097dd4(cpu);
    }
L_001f3e28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f3e2c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001f3e30:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_001f3e34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3e50;
        }
    }
L_001f3e38:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001f3e3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3e40:;
    {
        cpu->r[14] = 0x001f3e44u; imp_memcpy(cpu); /* memcpy */
    }
L_001f3e44:;
    {
        goto L_001f3e50;
    }
L_001f3e48:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f3e4c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f3e50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f3e54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3e58u)) return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor11EndOfStreamEv @ 001f3e60 (arm) */
void fn_001f3e60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3e60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f3e64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f3e68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3e6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3e70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001f3e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3e88;
        }
    }
L_001f3e78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3e7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3e80:;
    {
        cpu->r[14] = 0x001f3e88u;
    }
L_001f3e84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3e88u)) return;
    }
L_001f3e88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f3e8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001f3e90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f3e94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f3e98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3e9cu)) return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor4SeekEii @ 001f3e9c (arm) */
void fn_001f3e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3e9c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001f3ea0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001f3ea4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f3ea8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f3eac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3eb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
        }
    }
L_001f3eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3ec8;
        }
    }
L_001f3eb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001f3ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3f0c;
        }
    }
L_001f3ec0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f3ec4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[1];
        }
    }
L_001f3ec8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f3ecc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f3f00;
        }
    }
L_001f3ed0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f3ed4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3ed8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001f3edc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3ef0;
        }
    }
L_001f3ee0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f3ee4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f3ee8:;
    {
        cpu->r[14] = 0x001f3ef0u;
    }
L_001f3eec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3ef0u)) return;
    }
L_001f3ef0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001f3ef4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
        }
    }
L_001f3ef8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f3efc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3f04;
        }
    }
L_001f3f00:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f3f04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f3f08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3f0cu)) return;
    }
L_001f3f0c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f3f10:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f3f14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001f3f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3f34;
        }
    }
L_001f3f1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f3f20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f3f24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f3f28:;
    {
        cpu->r[14] = 0x001f3f30u;
    }
L_001f3f2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3f30u)) return;
    }
L_001f3f30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f3f34:;
    {
        cpu->r[1] = (~cpu->r[1]);
    }
L_001f3f38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001f3f3c:;
    {
        goto L_001f3ec8;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor7ReadRefERPhi @ 001f3f40 (arm) */
void fn_001f3f40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3f40:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f3f44:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f3f48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f3f4c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f3f50:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f3f54:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f3f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3fa8;
        }
    }
L_001f3f5c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001f3f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f3fa8;
        }
    }
L_001f3f68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f3f6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f3fa8;
        }
    }
L_001f3f70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f3f74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f3f78:;
    {
        cpu->r[14] = 0x001f3f80u;
    }
L_001f3f7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3f80u)) return;
    }
L_001f3f80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f3f84:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_001f3f88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f3f8c:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_001f3f90:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001f3f94:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f3f98:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_001f3f9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001f3fa0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f3fa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3fa8u)) return;
    }
L_001f3fa8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f3fac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3fb0u)) return;
    }
}

/* _ZN3vox24StreamMemoryBufferCursor4ReadEPhi @ 001f3fb0 (arm) */
void fn_001f3fb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f3fb0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f3fb4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f3fb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f3fbc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f3fc0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f3fc4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_001f3fc8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f3fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f402c;
        }
    }
L_001f3fd0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_001f3fd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f3fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f402c;
        }
    }
L_001f3fdc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f3fe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f402c;
        }
    }
L_001f3fe4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001f3fe8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f3fec:;
    {
        cpu->r[14] = 0x001f3ff4u;
    }
L_001f3ff0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f3ff4u)) return;
    }
L_001f3ff4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f3ff8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_001f3ffc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_001f4000:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 0);
    }
L_001f4004:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f4008:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001f400c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[7];
        }
    }
L_001f4010:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f4014:;
    {
        cpu->r[14] = 0x001f4018u; imp_memcpy(cpu); /* memcpy */
    }
L_001f4018:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001f401c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f4020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001f4024:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_001f4028:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f402cu)) return;
    }
L_001f402c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f4030:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f4034:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4038u)) return;
    }
}

/* _ZN3vox9VoxThread14GetCurThreadIdEv @ 001f4038 (arm) */
void fn_001f4038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4038:;
    {
        imp_pthread_self(cpu); /* tail pthread_self */ return;
    }
}

/* _ZN3vox9VoxThread5SleepEj @ 001f403c (arm) */
void fn_001f403c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f403c:;
    {
        cpu->r[3] = 0x000003e8u;
    }
L_001f4040:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001f4044:;
    {
        imp_usleep(cpu); /* tail usleep */ return;
    }
}

/* _ZN3vox9VoxThread7_UpdateEv @ 001f4048 (arm) */
void fn_001f4048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4048:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f404c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001f4050:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4054:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001f4058:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f405c:;
    {
        cpu->r[14] = 0x001f4060u; fn_001ebcfc(cpu);
    }
L_001f4060:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x11u);
    }
L_001f4064:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4068:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x10u);
    }
L_001f406c:;
    {
        cpu->r[14] = 0x001f4070u; fn_001ebcf8(cpu);
    }
L_001f4070:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f4074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4110;
        }
    }
L_001f4078:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x001f4080u + + 0x98u);
    }
L_001f407c:;
    {
        goto L_001f40f0;
    }
L_001f4080:;
    {
        cpu->r[14] = 0x001f4084u; fn_001d3db8(cpu);
    }
L_001f4084:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[4] + + 0x18u);
    }
L_001f4088:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x18u) = *(uint64_t*)vfp_d(cpu, 8);
    }
L_001f408c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) - *vfp_d(cpu, 7);
    }
L_001f4090:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_001f4094:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_001f4098:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f409c:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) - *vfp_d(cpu, 8);
    }
L_001f40a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f40a4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000042u, cpu->r[3], 1, 0);
    }
L_001f40a8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 9);
    }
L_001f40ac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_001f40b0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f40b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001f40b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f40bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f40c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f40cc;
        }
    }
L_001f40c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000021u, 1, 1);
    }
L_001f40c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000021u;
        }
    }
L_001f40cc:;
    {
        cpu->r[14] = 0x001f40d0u; fn_001f403c(cpu);
    }
L_001f40d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f40d4:;
    {
        cpu->r[14] = 0x001f40d8u; fn_001ebcfc(cpu);
    }
L_001f40d8:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x11u);
    }
L_001f40dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f40e0:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x10u);
    }
L_001f40e4:;
    {
        cpu->r[14] = 0x001f40e8u; fn_001ebcf8(cpu);
    }
L_001f40e8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f40ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4110;
        }
    }
L_001f40f0:;
    {
        cpu->r[14] = 0x001f40f4u; fn_001d3db8(cpu);
    }
L_001f40f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f40f8:;
    {
        *(uint64_t*)vfp_d(cpu,8) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f40fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4080;
        }
    }
L_001f4100:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001f4104:;
    {
        cpu->r[14] = 0x001f410cu;
    }
L_001f4108:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f410cu)) return;
    }
L_001f410c:;
    {
        goto L_001f4080;
    }
L_001f4110:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001f4114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4118u)) return;
    }
}

/* _ZN3vox9VoxThread6UpdateEPv @ 001f4120 (arm) */
void fn_001f4120(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4120:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f4124:;
    {
        cpu->r[14] = 0x001f4128u; fn_001f4048(cpu);
    }
L_001f4128:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f412c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4130u)) return;
    }
}

/* _ZN3vox10funcUpdateEPv @ 001f4130 (arm) */
void fn_001f4130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4130:;
    {
        return fn_001f4120(cpu);
    }
}

/* _ZN3vox9VoxThread4StopEv @ 001f4134 (arm) */
void fn_001f4134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4134:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f4138:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f413c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001f4140:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f4144:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f4148:;
    {
        cpu->r[14] = 0x001f414cu; fn_001ebcfc(cpu);
    }
L_001f414c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f4150:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001f4154:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[5]);
    }
L_001f4158:;
    {
        cpu->r[14] = 0x001f415cu; fn_001ebcf8(cpu);
    }
L_001f415c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001f4160:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f4164:;
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
L_001f4168:;
    {
        imp_pthread_join(cpu); /* tail pthread_join */ return;
    }
}

/* _ZN3vox9VoxThreadD1Ev @ 001f416c (arm) */
void fn_001f416c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f416c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f4170:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4174:;
    {
        cpu->r[14] = 0x001f4178u; fn_001f4134(cpu);
    }
L_001f4178:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001f417c:;
    {
        cpu->r[14] = 0x001f4180u; fn_001ebe28(cpu);
    }
L_001f4180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f4184:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4188u)) return;
    }
}

/* _ZN3vox9VoxThreadD2Ev @ 001f4188 (arm) */
void fn_001f4188(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4188:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f418c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4190:;
    {
        cpu->r[14] = 0x001f4194u; fn_001f4134(cpu);
    }
L_001f4194:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001f4198:;
    {
        cpu->r[14] = 0x001f419cu; fn_001ebe28(cpu);
    }
L_001f419c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f41a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f41a4u)) return;
    }
}

/* _ZN3vox9VoxThreadC1EPFvPvS1_ES1_S1_Pc @ 001f41a8 (arm) */
void fn_001f41a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f41a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f41ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f41b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001f41b4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f41b8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_001f41bc:;
    {
        cpu->r[14] = 0x001f41c0u; fn_001ebe50(cpu);
    }
L_001f41c0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f41c4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f41ccu + + 0x7cu);
    }
L_001f41c8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f41cc:;
    {
        cpu->r[5] = rd32(0x001f41d4u + + 0x7cu);
    }
L_001f41d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f41d4:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[3]);
    }
L_001f41d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001f41e0u, cpu->r[5], 0, 0);
    }
L_001f41dc:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001f41e0:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x18u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001f41e4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11u, cpu->r[2]);
        }
    }
L_001f41e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4224;
        }
    }
L_001f41ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f41f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f422c;
        }
    }
L_001f41f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f41f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001f41fc:;
    {
        cpu->r[2] = 0x0000003fu;
    }
L_001f4200:;
    {
        cpu->r[14] = 0x001f4204u; imp_strncpy(cpu); /* strncpy */
    }
L_001f4204:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f4208:;
    {
        wr8(cpu->r[4] + + 0x5fu, cpu->r[3]);
    }
L_001f420c:;
    {
        cpu->r[2] = rd32(0x001f4214u + + 0x40u);
    }
L_001f4210:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001f4214:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f4218:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001f421c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001f4220:;
    {
        cpu->r[14] = 0x001f4224u; imp_pthread_create(cpu); /* pthread_create */
    }
L_001f4224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f4228:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f422cu)) return;
    }
L_001f422c:;
    {
        cpu->r[2] = rd32(0x001f4234u + + 0x24u);
    }
L_001f4230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001f4234:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f423cu, cpu->r[2], 0, 0);
    }
L_001f4238:;
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
L_001f423c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[3] = base + 8u;
    }
L_001f4240:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_001f4244:;
    {
        goto L_001f420c;
    }
}

/* _ZN3vox9VoxThreadC2EPFvPvS1_ES1_S1_Pc @ 001f4260 (arm) */
void fn_001f4260(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4260:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f4264:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001f426c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f4270:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_001f4274:;
    {
        cpu->r[14] = 0x001f4278u; fn_001ebe50(cpu);
    }
L_001f4278:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001f427c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f4284u + + 0x7cu);
    }
L_001f4280:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f4284:;
    {
        cpu->r[5] = rd32(0x001f428cu + + 0x7cu);
    }
L_001f4288:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f428c:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[3]);
    }
L_001f4290:;
    {
        cpu->r[5] = add_flags(cpu, 0x001f4298u, cpu->r[5], 0, 0);
    }
L_001f4294:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001f4298:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x18u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001f429c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11u, cpu->r[2]);
        }
    }
L_001f42a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f42dc;
        }
    }
L_001f42a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f42a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f42e4;
        }
    }
L_001f42ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f42b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001f42b4:;
    {
        cpu->r[2] = 0x0000003fu;
    }
L_001f42b8:;
    {
        cpu->r[14] = 0x001f42bcu; imp_strncpy(cpu); /* strncpy */
    }
L_001f42bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f42c0:;
    {
        wr8(cpu->r[4] + + 0x5fu, cpu->r[3]);
    }
L_001f42c4:;
    {
        cpu->r[2] = rd32(0x001f42ccu + + 0x40u);
    }
L_001f42c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001f42cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f42d0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001f42d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001f42d8:;
    {
        cpu->r[14] = 0x001f42dcu; imp_pthread_create(cpu); /* pthread_create */
    }
L_001f42dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f42e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f42e4u)) return;
    }
L_001f42e4:;
    {
        cpu->r[2] = rd32(0x001f42ecu + + 0x24u);
    }
L_001f42e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_001f42ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f42f4u, cpu->r[2], 0, 0);
    }
L_001f42f0:;
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
L_001f42f4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        cpu->r[3] = base + 8u;
    }
L_001f42f8:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_001f42fc:;
    {
        goto L_001f42c4;
    }
}

/* _ZNSbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEEC1EPKcRKS4_ @ 001f4318 (arm) */
void fn_001f4318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4318:;
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
L_001f431c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4320:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f4324:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f4328:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[4]);
    }
L_001f432c:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001f4330:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[4]);
    }
L_001f4334:;
    {
        cpu->r[14] = 0x001f4338u; imp_strlen(cpu); /* strlen */
    }
L_001f4338:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001f433c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001f4340:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_001f4344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4380;
        }
    }
L_001f4348:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000010u, 1, 1);
    }
L_001f434c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f4394;
        }
    }
L_001f4350:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001f4354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f436c;
        }
    }
L_001f4358:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f435c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f4360:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f4364:;
    {
        cpu->r[14] = 0x001f4368u; imp_memcpy(cpu); /* memcpy */
    }
L_001f4368:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001f436c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_001f4370:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f4374:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f4378:;
    {
        wr8(cpu->r[10], cpu->r[3]);
    }
L_001f437c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4380u)) return;
    }
L_001f4380:;
    {
        cpu->r[0] = rd32(0x001f4388u + + 0x30u);
    }
L_001f4384:;
    {
        cpu->r[0] = add_flags(cpu, 0x001f438cu, cpu->r[0], 0, 0);
    }
L_001f4388:;
    {
        cpu->r[14] = 0x001f438cu; fn_00208298(cpu);
    }
L_001f438c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f4390:;
    {
        goto L_001f4350;
    }
L_001f4394:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f4398:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f439c:;
    {
        cpu->r[14] = 0x001f43a0u; fn_00097dd0(cpu);
    }
L_001f43a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001f43a4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f43a8:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_001f43ac:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001f43b0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001f43b4:;
    {
        goto L_001f4350;
    }
}

/* _ZSteqIcSt11char_traitsIcEN3vox10SAllocatorIcLNS2_10VoxMemHintE0EEEEbRKSbIT_T0_T1_EPKS6_ @ 001f43bc (arm) */
void fn_001f43bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f43bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f43c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f43c4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f43c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f43cc:;
    {
        cpu->r[14] = 0x001f43d0u; imp_strlen(cpu); /* strlen */
    }
L_001f43d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f43d4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f43d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f43dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001f43e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f43e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f43e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f43ecu)) return;
        }
    }
L_001f43ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f43f0:;
    {
        cpu->r[14] = 0x001f43f4u; imp_memcmp(cpu); /* memcmp */
    }
L_001f43f4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001f43f8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f43fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4400u)) return;
    }
}

/* _ZN3vox8VoxUtils27LoadDataSourceFromFileToRAMEPKcii @ 001f4400 (arm) */
void fn_001f4400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4400:;
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
L_001f4404:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001f4408:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f440c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f4410:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001f4414:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001f4418:;
    {
        cpu->r[14] = 0x001f441cu; fn_001d3cf0(cpu);
    }
L_001f441c:;
    {
        cpu->r[4] = rd32(0x001f4424u + + 0x16cu);
    }
L_001f4420:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f4428u, cpu->r[4], 0, 0);
    }
L_001f4424:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f4428:;
    {
        cpu->r[14] = 0x001f442cu; fn_0020029c(cpu);
    }
L_001f442c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4550;
        }
    }
L_001f4434:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f4438:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001f443c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f4440:;
    {
        cpu->r[14] = 0x001f4448u;
    }
L_001f4444:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4448u)) return;
    }
L_001f4448:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f444c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4550;
        }
    }
L_001f4450:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f4454:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f4458:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f445c:;
    {
        cpu->r[14] = 0x001f4464u;
    }
L_001f4460:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4464u)) return;
    }
L_001f4464:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f4468:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f446c:;
    {
        cpu->r[14] = 0x001f4474u;
    }
L_001f4470:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4474u)) return;
    }
L_001f4474:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4478:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f453c;
        }
    }
L_001f447c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f4480:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001f4484:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001f4488:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f448c:;
    {
        cpu->r[14] = 0x001f4494u;
    }
L_001f4490:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4494u)) return;
    }
L_001f4494:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f4498:;
    {
        cpu->r[14] = 0x001f449cu; fn_00097dd4(cpu);
    }
L_001f449c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f44a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f453c;
        }
    }
L_001f44a4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f44a8:;
    {
        cpu->r[9] = 0x0000ffffu;
    }
L_001f44ac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 0);
    }
L_001f44b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_001f44b4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_001f44b8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001f44bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f44c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f44c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001f44c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f44cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00010000u;
        }
    }
L_001f44d0:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001f44d4:;
    {
        cpu->r[14] = 0x001f44dcu;
    }
L_001f44d8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f44dcu)) return;
    }
L_001f44dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f44e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001f44e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f44ac;
        }
    }
L_001f44e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f44ec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001f44f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f44f4:;
    {
        cpu->r[14] = 0x001f44fcu;
    }
L_001f44f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f44fcu)) return;
    }
L_001f44fc:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001f4500:;
    {
        wr8(cpu->r[13] + + 0x25u, cpu->r[14]);
    }
L_001f4504:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f4508:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f450c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f4510:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001f4514:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f4518:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001f451c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001f4520:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001f4524:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f4528:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_001f452c:;
    {
        wr8(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001f4530:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001f4534:;
    {
        cpu->r[14] = 0x001f4538u; fn_001d396c(cpu);
    }
L_001f4538:;
    {
        goto L_001f4584;
    }
L_001f453c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4540:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f4544:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001f4548:;
    {
        cpu->r[14] = 0x001f4550u;
    }
L_001f454c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4550u)) return;
    }
L_001f4550:;
    {
        cpu->r[2] = rd32(0x001f4558u + + 0x3cu);
    }
L_001f4554:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f4558:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f455c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f4560:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[3]);
    }
L_001f4564:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f4568:;
    {
        wr64(cpu->r[6] + + 0x8u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f456c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f4570:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_001f4574:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001f4578:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_001f457c:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
    }
L_001f4580:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[3]);
    }
L_001f4584:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f4588:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001f458c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4590u)) return;
    }
}

/* _ZN3vox8VoxUtils22LoadDataSourceFromFileEPKcii @ 001f4598 (arm) */
void fn_001f4598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4598:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001f459c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001f45a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f45a4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001f45a8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f45ac:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001f45b0:;
    {
        cpu->r[14] = 0x001f45b4u; fn_001d3cf0(cpu);
    }
L_001f45b4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001f45b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f45bc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f45c0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001f45c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001f45c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f45cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f45d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f45d4:;
    {
        cpu->r[14] = 0x001f45d8u; fn_001d396c(cpu);
    }
L_001f45d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f45dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001f45e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f45e4u)) return;
    }
}

/* _ZN3vox8VoxUtils27LoadDataSourceFromFileAsRAWEPKcii @ 001f45e4 (arm) */
void fn_001f45e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f45e4:;
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
L_001f45e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001f45ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f45f0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001f45f4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f45f8:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001f45fc:;
    {
        cpu->r[14] = 0x001f4600u; fn_001d3cf0(cpu);
    }
L_001f4600:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001f4604:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f4608:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f460c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_001f4610:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f4614:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f4618:;
    {
        cpu->r[14] = 0x001f461cu; fn_001f4598(cpu);
    }
L_001f461c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4620:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f4624:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001f4628:;
    {
        cpu->r[14] = 0x001f462cu; fn_001d388c(cpu);
    }
L_001f462c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f4630:;
    {
        cpu->r[14] = 0x001f4634u; fn_001e51b4(cpu);
    }
L_001f4634:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001f463c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4640u)) return;
    }
}

/* _ZN3vox8VoxUtils24LoadDataSourceFromFileExEPKciNS_21VoxSourceLoadingFlagsEi @ 001f4640 (arm) */
void fn_001f4640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4640:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f4644:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001f4648:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001f464c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f4650:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001f4654:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001f4658:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f465c:;
    {
        cpu->r[14] = 0x001f4660u; fn_001d3cf0(cpu);
    }
L_001f4660:;
    {
        { uint32_t v = cpu->r[4] & 0x00010000u; set_nz(cpu, v); }
    }
L_001f4664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4698;
        }
    }
L_001f4668:;
    {
        { uint32_t v = cpu->r[4] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f466c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f46c8;
        }
    }
L_001f4670:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_001f4674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f46e0;
        }
    }
L_001f4678:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f467c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f4680:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001f4684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4688:;
    {
        cpu->r[14] = 0x001f468cu; fn_001f4598(cpu);
    }
L_001f468c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4690:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001f4694:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4698u)) return;
    }
L_001f4698:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f469c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001f46a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f46a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f46a8:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_001f46ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f46b0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001f46b4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001f46b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001f46bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f46c0:;
    {
        cpu->r[14] = 0x001f46c4u; fn_001d38ec(cpu);
    }
L_001f46c4:;
    {
        goto L_001f468c;
    }
L_001f46c8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f46cc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f46d0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001f46d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f46d8:;
    {
        cpu->r[14] = 0x001f46dcu; fn_001f4400(cpu);
    }
L_001f46dc:;
    {
        goto L_001f468c;
    }
L_001f46e0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f46e4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f46e8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001f46ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f46f0:;
    {
        cpu->r[14] = 0x001f46f4u; fn_001f45e4(cpu);
    }
L_001f46f4:;
    {
        goto L_001f468c;
    }
}

/* _ZN3vox8VoxUtils39LoadDataSourceFromFileAutoDetectDecoderEPKci @ 001f46f8 (arm) */
void fn_001f46f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f46f8:;
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
L_001f46fc:;
    {
        cpu->r[4] = rd32(0x001f4704u + + 0x224u);
    }
L_001f4700:;
    {
        cpu->r[6] = rd32(0x001f4708u + + 0x224u);
    }
L_001f4704:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001f4708:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f4710u, cpu->r[4], 0, 0);
    }
L_001f470c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f4710:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f4714:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001f4718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001f471c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f4720:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001f4724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f47d0;
        }
    }
L_001f4728:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001f472c:;
    {
        cpu->r[1] = 0x0000002eu;
    }
L_001f4730:;
    {
        cpu->r[14] = 0x001f4734u; imp_strrchr(cpu); /* strrchr */
    }
L_001f4734:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f48c0;
        }
    }
L_001f473c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f4740:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001f4744:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f4748:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f474c:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001f4750:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f4754:;
    {
        cpu->r[14] = 0x001f4758u; fn_001f4318(cpu);
    }
L_001f4758:;
    {
        goto L_001f477c;
    }
L_001f475c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f4760:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001f4764:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_001f4768:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001f476c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000060u, 1, 1);
    }
L_001f4770:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
        }
    }
L_001f4774:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
        }
    }
L_001f4778:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001f477c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4780:;
    {
        cpu->r[14] = 0x001f4784u; imp_strlen(cpu); /* strlen */
    }
L_001f4784:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001f4788:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001f475c;
        }
    }
L_001f478c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f4790:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f4794:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001f4798:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_001f479c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4808;
        }
    }
L_001f47a0:;
    {
        cpu->r[1] = rd32(0x001f47a8u + + 0x188u);
    }
L_001f47a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f47a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f47b0u, cpu->r[1], 0, 0);
    }
L_001f47ac:;
    {
        cpu->r[14] = 0x001f47b0u; fn_001f43bc(cpu);
    }
L_001f47b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f47b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f48f4;
        }
    }
L_001f47b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f47bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f47c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f47d0;
        }
    }
L_001f47c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f47c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f47d0;
        }
    }
L_001f47cc:;
    {
        cpu->r[14] = 0x001f47d0u; fn_00097dc8(cpu);
    }
L_001f47d0:;
    {
        cpu->r[2] = rd32(0x001f47d8u + + 0x15cu);
    }
L_001f47d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f47d8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f47dc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f47e0:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_001f47e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f47e8:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f47ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f47f0:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_001f47f4:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_001f47f8:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001f47fc:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_001f4800:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001f4804:;
    {
        goto L_001f48a0;
    }
L_001f4808:;
    {
        cpu->r[1] = rd32(0x001f4810u + + 0x128u);
    }
L_001f480c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4810:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4814:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f481cu, cpu->r[1], 0, 0);
    }
L_001f4818:;
    {
        cpu->r[14] = 0x001f481cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f481c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4874;
        }
    }
L_001f4824:;
    {
        cpu->r[1] = rd32(0x001f482cu + + 0x110u);
    }
L_001f4828:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f482c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4830:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4838u, cpu->r[1], 0, 0);
    }
L_001f4834:;
    {
        cpu->r[14] = 0x001f4838u; imp_memcmp(cpu); /* memcmp */
    }
L_001f4838:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f483c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f490c;
        }
    }
L_001f4840:;
    {
        cpu->r[1] = rd32(0x001f4848u + + 0xf8u);
    }
L_001f4844:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4848:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f484c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4854u, cpu->r[1], 0, 0);
    }
L_001f4850:;
    {
        cpu->r[14] = 0x001f4854u; imp_memcmp(cpu); /* memcmp */
    }
L_001f4854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f47a0;
        }
    }
L_001f485c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4860:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4864:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4868:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f486c:;
    {
        cpu->r[14] = 0x001f4870u; fn_001f4598(cpu);
    }
L_001f4870:;
    {
        goto L_001f4888;
    }
L_001f4874:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4878:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f487c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4880:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f4884:;
    {
        cpu->r[14] = 0x001f4888u; fn_001f4598(cpu);
    }
L_001f4888:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f488c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f4890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f48a0;
        }
    }
L_001f4894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f48a0;
        }
    }
L_001f489c:;
    {
        cpu->r[14] = 0x001f48a0u; fn_00097dc8(cpu);
    }
L_001f48a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001f48a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f48a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f48ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f48b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f48b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4924;
        }
    }
L_001f48b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001f48bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f48c0u)) return;
    }
L_001f48c0:;
    {
        cpu->r[3] = rd32(0x001f48c8u + + 0x6cu);
    }
L_001f48c4:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_001f48c8:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001f48cc:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_001f48d0:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001f48d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f48d8:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001f48dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f48e0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001f48e4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f48e8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001f48ec:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001f48f0:;
    {
        goto L_001f48a0;
    }
L_001f48f4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f48f8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f48fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4900:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f4904:;
    {
        cpu->r[14] = 0x001f4908u; fn_001f4598(cpu);
    }
L_001f4908:;
    {
        goto L_001f4888;
    }
L_001f490c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4910:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4914:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4918:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f491c:;
    {
        cpu->r[14] = 0x001f4920u; fn_001f4598(cpu);
    }
L_001f4920:;
    {
        goto L_001f4888;
    }
L_001f4924:;
    {
        cpu->r[14] = 0x001f4928u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001f4928:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 2, 26u, &shc); cpu->r[5] = v;
        }
    }
L_001f492c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001f4930:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[8], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001f4934:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, 11u, &shc); cpu->r[0] = v;
        }
    }
L_001f4938:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & cpu->r[0]; cpu->r[10] = v;
        }
    }
L_001f493c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[8], 1, 19u, &shc); cpu->r[13] = v;
        }
    }
L_001f4940:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[0]);
        wr16(cpu->r[3], cpu->r[13]);
        cpu->r[3] = wb_tmp;
        }
    }
}

/* _ZN3vox8VoxUtils41LoadDataSourceFromFileAutoDetectDecoderExEPKciNS_21VoxSourceLoadingFlagsEPNS_18DataHandleUserDataE @ 001f4944 (arm) */
void fn_001f4944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4944:;
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
L_001f4948:;
    {
        cpu->r[4] = rd32(0x001f4950u + + 0x248u);
    }
L_001f494c:;
    {
        cpu->r[6] = rd32(0x001f4954u + + 0x248u);
    }
L_001f4950:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001f4954:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f495cu, cpu->r[4], 0, 0);
    }
L_001f4958:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001f495c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f4960:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f4964:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001f4968:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001f496c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f4970:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001f4974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4a20;
        }
    }
L_001f4978:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001f497c:;
    {
        cpu->r[1] = 0x0000002eu;
    }
L_001f4980:;
    {
        cpu->r[14] = 0x001f4984u; imp_strrchr(cpu); /* strrchr */
    }
L_001f4984:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4b20;
        }
    }
L_001f498c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f4990:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001f4994:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f4998:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f499c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001f49a0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f49a4:;
    {
        cpu->r[14] = 0x001f49a8u; fn_001f4318(cpu);
    }
L_001f49a8:;
    {
        goto L_001f49cc;
    }
L_001f49ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f49b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001f49b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_001f49b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001f49bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000060u, 1, 1);
    }
L_001f49c0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
        }
    }
L_001f49c4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
        }
    }
L_001f49c8:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001f49cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f49d0:;
    {
        cpu->r[14] = 0x001f49d4u; imp_strlen(cpu); /* strlen */
    }
L_001f49d4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001f49d8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001f49ac;
        }
    }
L_001f49dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f49e0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f49e4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001f49e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_001f49ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4a58;
        }
    }
L_001f49f0:;
    {
        cpu->r[1] = rd32(0x001f49f8u + + 0x1a8u);
    }
L_001f49f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f49f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4a00u, cpu->r[1], 0, 0);
    }
L_001f49fc:;
    {
        cpu->r[14] = 0x001f4a00u; fn_001f43bc(cpu);
    }
L_001f4a00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4b54;
        }
    }
L_001f4a08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f4a0c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f4a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4a20;
        }
    }
L_001f4a14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4a20;
        }
    }
L_001f4a1c:;
    {
        cpu->r[14] = 0x001f4a20u; fn_00097dc8(cpu);
    }
L_001f4a20:;
    {
        cpu->r[2] = rd32(0x001f4a28u + + 0x17cu);
    }
L_001f4a24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f4a28:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f4a2c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f4a30:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_001f4a34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f4a38:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f4a3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f4a40:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_001f4a44:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_001f4a48:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[3]);
    }
L_001f4a4c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_001f4a50:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_001f4a54:;
    {
        goto L_001f4b00;
    }
L_001f4a58:;
    {
        cpu->r[1] = rd32(0x001f4a60u + + 0x148u);
    }
L_001f4a5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4a60:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4a64:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4a6cu, cpu->r[1], 0, 0);
    }
L_001f4a68:;
    {
        cpu->r[14] = 0x001f4a6cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f4a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4acc;
        }
    }
L_001f4a74:;
    {
        cpu->r[1] = rd32(0x001f4a7cu + + 0x130u);
    }
L_001f4a78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4a7c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4a80:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4a88u, cpu->r[1], 0, 0);
    }
L_001f4a84:;
    {
        cpu->r[14] = 0x001f4a88u; imp_memcmp(cpu); /* memcmp */
    }
L_001f4a88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4b74;
        }
    }
L_001f4a90:;
    {
        cpu->r[1] = rd32(0x001f4a98u + + 0x118u);
    }
L_001f4a94:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f4a98:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4a9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f4aa4u, cpu->r[1], 0, 0);
    }
L_001f4aa0:;
    {
        cpu->r[14] = 0x001f4aa4u; imp_memcmp(cpu); /* memcmp */
    }
L_001f4aa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4aa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f49f0;
        }
    }
L_001f4aac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f4ab0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4ab4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f4ab8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4abc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4ac0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f4ac4:;
    {
        cpu->r[14] = 0x001f4ac8u; fn_001f4640(cpu);
    }
L_001f4ac8:;
    {
        goto L_001f4ae8;
    }
L_001f4acc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f4ad0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4ad4:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4ad8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4adc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f4ae0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f4ae4:;
    {
        cpu->r[14] = 0x001f4ae8u; fn_001f4640(cpu);
    }
L_001f4ae8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f4aec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f4af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4b00;
        }
    }
L_001f4af4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f4af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4b00;
        }
    }
L_001f4afc:;
    {
        cpu->r[14] = 0x001f4b00u; fn_00097dc8(cpu);
    }
L_001f4b00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001f4b04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4b08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f4b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f4b10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f4b14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4b94;
        }
    }
L_001f4b18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001f4b1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4b20u)) return;
    }
L_001f4b20:;
    {
        cpu->r[3] = rd32(0x001f4b28u + + 0x7cu);
    }
L_001f4b24:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_001f4b28:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001f4b2c:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_001f4b30:;
    {
        wr64(cpu->r[5] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001f4b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f4b38:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_001f4b3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f4b40:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_001f4b44:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f4b48:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001f4b4c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001f4b50:;
    {
        goto L_001f4b00;
    }
L_001f4b54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f4b58:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4b5c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4b60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4b64:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f4b68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f4b6c:;
    {
        cpu->r[14] = 0x001f4b70u; fn_001f4640(cpu);
    }
L_001f4b70:;
    {
        goto L_001f4ae8;
    }
L_001f4b74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f4b78:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f4b7c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f4b80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f4b84:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f4b88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f4b8c:;
    {
        cpu->r[14] = 0x001f4b90u; fn_001f4640(cpu);
    }
L_001f4b90:;
    {
        goto L_001f4ae8;
    }
L_001f4b94:;
    {
        cpu->r[14] = 0x001f4b98u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001f4b98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[12]);
        wr16(cpu->r[5], cpu->r[5]);
        cpu->r[5] = wb_tmp;
        }
    }
L_001f4b9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001f4ba0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[8], 2, 16u, &shc); cpu->r[13] = v;
        }
    }
L_001f4ba4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, 11u, &shc); cpu->r[0] = v;
        }
    }
L_001f4ba8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[0]);
        wr16(cpu->r[3], cpu->r[9]);
        cpu->r[3] = wb_tmp;
        }
    }
L_001f4bac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[8], 4, (cpu->r[7] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001f4bb0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[0], 4, 14u, &shc); cpu->r[13] = v;
        }
    }
}

/* sub_001f4bb4 @ 001f4bb4 (arm) */
void fn_001f4bb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4bb4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f4bb8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001f4bbc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001f4bc0:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[3] = v;
    }
L_001f4bc4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001f4bc8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f4bcc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_001f4bd0:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f4bd4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001f4bd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001f4bdc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001f4be0:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[12]);
    }
L_001f4be4:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f4be8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001f4bec:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f4bf0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f4c20;
        }
    }
L_001f4bf4:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x2u);
    }
L_001f4bf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_001f4bfc:;
    {
        cpu->r[4] = rd8(cpu->r[2] + - 0x3u);
    }
L_001f4c00:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_001f4c04:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 24u, &shc); cpu->r[12] = v;
    }
L_001f4c08:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f4c0c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f4c20;
        }
    }
L_001f4c10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f4c14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
        }
    }
L_001f4c18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[2] + - 0x4u);
        }
    }
L_001f4c1c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001f4c20:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f4c24:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f4c28:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f4c2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_demux_pos @ 001f4c30 (arm) */
void fn_001f4c30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4c30:;
    {
        cpu->r[2] = 0x00000174u;
    }
L_001f4c34:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001f4c38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f4c3c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f4c40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4c44:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001f4c48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f4c4c:;
    {
        cpu->r[14] = 0x001f4c54u;
    }
L_001f4c50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4c54u)) return;
    }
L_001f4c54:;
    {
        cpu->r[2] = 0x00000170u;
    }
L_001f4c58:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f4c5c:;
    {
        cpu->r[3] = 0x00000178u;
    }
L_001f4c60:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4c64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000170u, 0, 0);
    }
L_001f4c68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f4c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f4c70:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000008u, cpu->r[3], 1, 0);
    }
L_001f4c74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001f4c78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f4c7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
    }
L_001f4c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f4c84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4c88u)) return;
    }
}

/* mpc_set_replay_level @ 001f4c88 (arm) */
void fn_001f4c88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4c88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f4c8c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f4c90:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f4c94:;
    {
        cpu->r[5] = rd8(cpu->r[13] + + 0x20u);
    }
L_001f4c98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[0] + + 0x36u);
        }
    }
L_001f4c9c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
        }
    }
L_001f4ca0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd16(cpu->r[0] + + 0x34u);
        }
    }
L_001f4ca4:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
        }
    }
L_001f4ca8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[0] + + 0x30u);
        }
    }
L_001f4cac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4cb0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd16(cpu->r[0] + + 0x32u);
        }
    }
L_001f4cb4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_001f4cb8:;
    {
        uint32_t v = cpu->r[5] | cpu->r[2]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f4cbc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001f4cc0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f4cc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001f4cc8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001f4ccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4d34;
        }
    }
L_001f4cd0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001f4cd4:;
    {
        vfp_sync_flags(cpu);
    }
L_001f4cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4d3c;
        }
    }
L_001f4cdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001f4ce0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001f4ce8u + + 0xd8u);
    }
L_001f4ce4:;
    {
        vfp_sync_flags(cpu);
    }
L_001f4ce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4d78;
        }
    }
L_001f4cec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001f4cf4u + + 0xccu);
    }
L_001f4cf0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f4cf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4d1c;
        }
    }
L_001f4cf8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_001f4cfc:;
    {
        vfp_sync_flags(cpu);
    }
L_001f4d00:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f4d04:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f4d08:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f4d0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_001f4d10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[6] = v;
        }
    }
L_001f4d14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f4d18:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
        }
    }
L_001f4d1c:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001f4d20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f4d24:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_001f4d28:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f4d2c:;
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
L_001f4d30:;
    {
        return fn_001f6950(cpu);
    }
L_001f4d34:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f4d38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4d3cu)) return;
    }
L_001f4d3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001f4d44u + + 0x80u);
    }
L_001f4d40:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_001f4d44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f4d48:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f4d4c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4024u << 16);
    }
L_001f4d50:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001f4d54:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_001f4d58:;
    {
        cpu->r[14] = 0x001f4d5cu; imp_pow(cpu); /* pow */
    }
L_001f4d5c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f4d64u + + 0x54u);
    }
L_001f4d60:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001f4d64:;
    {
        vfp_sync_flags(cpu);
    }
L_001f4d68:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f4d6c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 6);
    }
L_001f4d70:;
    {
        *vfp_s(cpu,17) = (float)*vfp_d(cpu,7);
    }
L_001f4d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4cec;
        }
    }
L_001f4d78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001f4d80u + + 0x48u);
    }
L_001f4d7c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_001f4d80:;
    {
        vfp_vmla(cpu, 13, 16, 15);
    }
L_001f4d84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001f4d8cu + + 0x40u);
    }
L_001f4d88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f4d8c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f4d90:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4024u << 16);
    }
L_001f4d94:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001f4d98:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,13);
    }
L_001f4d9c:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001f4da0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_001f4da4:;
    {
        cpu->r[14] = 0x001f4da8u; imp_pow(cpu); /* pow */
    }
L_001f4da8:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f4dac:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001f4db0:;
    {
        goto L_001f4cf0;
    }
}

/* sub_001f4dd0 @ 001f4dd0 (arm) */
void fn_001f4dd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4dd0:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f4dd4:;
    {
        cpu->r[12] = 0x00000178u;
    }
L_001f4dd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4ddc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f4de0:;
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
L_001f4de4:;
    {
        cpu->r[5] = 0x00000174u;
    }
L_001f4de8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4dec:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001f4df0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f4df4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001f4df8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f4dfc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f4e00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000170u, 0, 0);
    }
L_001f4e04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001f4e08:;
    {
        cpu->r[12] = 0x0000eeffu;
    }
L_001f4e0c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001f4e10:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_001f4e14:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000008u, cpu->r[7], 1, 0);
    }
L_001f4e18:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[6], 3, 3u, &shc), 1, 0);
    }
L_001f4e1c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f4f30;
        }
    }
L_001f4e20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001f4e24:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f4f38;
        }
    }
L_001f4e28:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_001f4e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4e34;
        }
    }
L_001f4e30:;
    {
        cpu->r[1] = 0x0000ef00u;
    }
L_001f4e34:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_001f4e38:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001f4e3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
        }
    }
L_001f4e40:;
    {
        cpu->r[2] = sub_flags(cpu, 0x0000ef00u, cpu->r[0], 1, 0);
    }
L_001f4e44:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] & ~ 0x00000003u; cpu->r[10] = v;
        }
    }
L_001f4e48:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] & ~ 0x00000003u; cpu->r[6] = v;
        }
    }
L_001f4e4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[8];
        }
    }
L_001f4e50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
        }
    }
L_001f4e54:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001f4e58:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000170u, 0, 0);
        }
    }
L_001f4e5c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f4ea0;
        }
    }
L_001f4e60:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f4e64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4f40;
        }
    }
L_001f4e68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000170u, 0, 0);
    }
L_001f4e6c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f4e70:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f4e74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001f4e78:;
    {
        cpu->r[14] = 0x001f4e7cu; imp_memmove(cpu); /* memmove */
    }
L_001f4e7c:;
    {
        cpu->r[2] = 0x00000174u;
    }
L_001f4e80:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f4e84:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f4e88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4e8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000170u, 0, 0);
    }
L_001f4e90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001f4e94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001f4e98:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001f4e9c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001f4ea0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f4ea4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_001f4ea8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f4eac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f4eb0:;
    {
        cpu->r[14] = 0x001f4eb8u;
    }
L_001f4eb4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4eb8u)) return;
    }
L_001f4eb8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f4ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4f10;
        }
    }
L_001f4ec0:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f4ec4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 2u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
    }
L_001f4ec8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4ecc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f4ed0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_001f4ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f4f1c;
        }
    }
L_001f4ed8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f4edc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001f4ee0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001f4ee4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001f4ee8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001f4eec:;
    {
        uint32_t v = cpu->r[3] & 0x00ff0000u; cpu->r[6] = v;
    }
L_001f4ef0:;
    {
        uint32_t v = cpu->r[3] & 0x0000ff00u; cpu->r[12] = v;
    }
L_001f4ef4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[8] = v;
    }
L_001f4ef8:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_001f4efc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 3, 8u, &shc); cpu->r[3] = v;
    }
L_001f4f00:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f4f04:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_001f4f08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001f4f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f4ee0;
        }
    }
L_001f4f10:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f4f14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4f18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f4f1c:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f4f20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f4f24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4f28:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f4f2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4f30u)) return;
    }
L_001f4f30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_001f4f34:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f4e30;
        }
    }
L_001f4f38:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f4f3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4f40u)) return;
    }
L_001f4f40:;
    {
        cpu->r[2] = 0x00000174u;
    }
L_001f4f44:;
    {
        cpu->r[1] = 0x00000178u;
    }
L_001f4f48:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f4f4c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f4f50:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001f4f54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f4f58:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_001f4f5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f4f60:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001f4f64:;
    {
        goto L_001f4e68;
    }
}

/* sub_001f4f68 @ 001f4f68 (arm) */
void fn_001f4f68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f4f68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f4f6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f4f70:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 3u, &shc); cpu->r[5] = v;
    }
L_001f4f74:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f4f78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f4f7c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f4f80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001f4f84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x160u);
        }
    }
L_001f4f88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_001f4f8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & ~ 0x00000003u; cpu->r[5] = v;
        }
    }
L_001f4f90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
        }
    }
L_001f4f94:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f4f98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f4f9c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 3u, &shc), 1, 0);
    }
L_001f4fa0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f4fa4:;
    {
        cpu->r[14] = 0x001f4facu;
    }
L_001f4fa8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f4facu)) return;
    }
L_001f4fac:;
    {
        cpu->r[1] = 0x0000017cu;
    }
L_001f4fb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f4fb4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f4fb8:;
    {
        cpu->r[14] = 0x00000170u;
    }
L_001f4fbc:;
    {
        cpu->r[12] = 0x00000174u;
    }
L_001f4fc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001f4fc4:;
    {
        cpu->r[0] = 0x00000178u;
    }
L_001f4fc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f4fcc:;
    {
        cpu->r[3] = 0x00000180u;
    }
L_001f4fd0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_001f4fd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000007u, 0, 0);
    }
L_001f4fd8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001f4fdc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f4fe0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_001f4fe4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f4fe8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
        }
    }
L_001f4fec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f4ff0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 1, 3u, &shc), 0, 0);
        }
    }
L_001f4ff4:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_001f4ff8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
        }
    }
L_001f4ffc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000170u, 0, 0);
    }
L_001f5000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f5004:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_001f5008:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 1, 3u, &shc), 0, 0);
        }
    }
L_001f500c:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_001f5010:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_001f5014:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_001f5018:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_001f501c:;
    {
        cpu->r[14] = 0x001f5020u; fn_001f4dd0(cpu);
    }
L_001f5020:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f5024:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5028:;
    {
        cpu->r[2] = 0x00000178u;
    }
L_001f502c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5030:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[0] = v;
    }
L_001f5034:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5038:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000008u, cpu->r[0], 1, 0);
    }
L_001f503c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001f5040:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 1, 3u, &shc), 0, 0);
    }
L_001f5044:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001f5048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f504cu)) return;
    }
}

/* mpc_demux_get_info @ 001f504c (arm) */
void fn_001f504c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f504c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001f5050:;
    {
        cpu->r[2] = 0x00000168u;
    }
L_001f5054:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f5058:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f505c:;
    {
        imp_memcpy(cpu); /* tail memcpy */ return;
    }
}

/* mpc_demux_exit @ 001f5060 (arm) */
void fn_001f5060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f5060:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f5064:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f5068:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f506c:;
    {
        cpu->r[14] = 0x001f5070u; fn_00202e40(cpu);
    }
L_001f5070:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f5074:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5078:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f507c:;
    {
        cpu->r[14] = 0x001f5080u; fn_00200ae8(cpu);
    }
L_001f5080:;
    {
        cpu->r[3] = 0x00000198u;
    }
L_001f5084:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5088:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f508c:;
    {
        cpu->r[14] = 0x001f5090u; fn_00200ae8(cpu);
    }
L_001f5090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5094:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f5098:;
    {
        return fn_00200ae8(cpu);
    }
}

/* mpc_demux_seek_sample @ 001f509c (arm) */
void fn_001f509c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f509c:;
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
L_001f50a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f50a4:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x48u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f50a8:;
    {
        cpu->r[10] = 0x00000480u;
    }
L_001f50ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x44u);
    }
L_001f50b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001f50b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_001f50b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f50bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f50c0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f50c4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_001f50c8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f50cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001f50d0:;
    {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[10] = v;
    }
L_001f50d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f52f4;
        }
    }
L_001f50d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f52ec;
        }
    }
L_001f50dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f50e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f50e4:;
    {
        wr64(cpu->r[13] + + 0x28u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f50e8:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f50ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f50f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f50f4:;
    {
        cpu->r[14] = 0x001f50f8u; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f50f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f50fc:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f5100:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f5104:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f5108:;
    {
        cpu->r[14] = 0x001f510cu; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f510c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f5110:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_001f5114:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001e0u, 0, 0);
    }
L_001f5118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f511c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001f5120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f545c;
        }
    }
L_001f5124:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5128:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f512c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5130:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_001f5134:;
    {
        uint32_t v = shifter(cpu->r[5], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5138:;
    {
        cpu->r[3] = 0x0000018cu;
    }
L_001f513c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5140:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5148:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f514c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001f5150:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f5154:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5158:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_001f515c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f5160:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f5164:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5168:;
    {
        uint32_t v = cpu->r[10] * cpu->r[7]; cpu->r[10] = v;
    }
L_001f516c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_001f5170:;
    {
        cpu->r[6] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f5174:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[10]);
    }
L_001f5178:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5300;
        }
    }
L_001f517c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f5180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5184:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f5188:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f518c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001f5190:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000174u, 0, 0);
    }
L_001f5194:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001f5198:;
    {
        cpu->r[14] = 0x001f519cu; fn_001f4f68(cpu);
    }
L_001f519c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f51a0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001f51a4:;
    {
        cpu->r[14] = 0x001f51a8u; fn_00202b70(cpu);
    }
L_001f51a8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001f51ac:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f51b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f52c0;
        }
    }
L_001f51b4:;
    {
        cpu->r[2] = rd32(0x001f51bcu + + 0x2fcu);
    }
L_001f51b8:;
    {
        cpu->r[1] = 0x0000018cu;
    }
L_001f51bc:;
    {
        cpu->r[9] = 0x00000188u;
    }
L_001f51c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f51c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f51ccu, cpu->r[2], 0, 0);
    }
L_001f51c8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001f51cc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001f51d0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_001f51d4:;
    {
        goto L_001f5220;
    }
L_001f51d8:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x18u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f51dc:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f51e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_001f51e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f51e8:;
    {
        wr64(cpu->r[12] + + 0x18u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f51ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f51f0:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f51f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f51f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001f51fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001f5200:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f5204:;
    {
        cpu->r[14] = 0x001f5208u; fn_001f4f68(cpu);
    }
L_001f5208:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001f520c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f5210:;
    {
        cpu->r[14] = 0x001f5214u; fn_00202b70(cpu);
    }
L_001f5214:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001f5218:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f521c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f52c0;
        }
    }
L_001f5220:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f5224:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f5228:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f522c:;
    {
        cpu->r[14] = 0x001f5230u; imp_memcmp(cpu); /* memcmp */
    }
L_001f5230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5234:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f51ec;
        }
    }
L_001f5238:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f523c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001f5240:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001f5244:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f524c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f5250:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001f5254:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f5258:;
    {
        uint64_t v = rd64(cpu->r[12] + + 0x18u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f525c:;
    {
        wr64(cpu->r[13] + + 0x18u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f5260:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[1] = v;
    }
L_001f5264:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001f5268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f51d8;
        }
    }
L_001f526c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f5270:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f5274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f51d8;
        }
    }
L_001f5278:;
    {
        cpu->r[2] = 0x00000184u;
    }
L_001f527c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5280:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5284:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f5288:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001f528c:;
    {
        cpu->r[14] = 0x001f5290u; fn_001f4c30(cpu);
    }
L_001f5290:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5294:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f5298:;
    {
        uint64_t v = rd64(cpu->r[12] + + 0x18u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f529c:;
    {
        wr64(cpu->r[13] + + 0x18u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001f52a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f52a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 3u, &shc), 1, 0);
    }
L_001f52a8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_001f52ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f52b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001f52b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f52b8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001f52bc:;
    {
        goto L_001f51d8;
    }
L_001f52c0:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f52c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f52c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f52cc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_001f52d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_001f52d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f52d8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f52dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f52e0:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[1]);
    }
L_001f52e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001f52e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f52ecu)) return;
    }
L_001f52ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f52f0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f50dc;
        }
    }
L_001f52f4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001f52f8:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_001f52fc:;
    {
        goto L_001f50dc;
    }
L_001f5300:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f5304:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001f5308:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001f530c:;
    {
        cpu->r[14] = 0x001f5310u; fn_00202e44(cpu);
    }
L_001f5310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5314:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f5318:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f531c:;
    {
        cpu->r[14] = 0x001f5320u; fn_001f4f68(cpu);
    }
L_001f5320:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001f5324:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f52d4;
        }
    }
L_001f5328:;
    {
        cpu->r[9] = 0x0000018cu;
    }
L_001f532c:;
    {
        cpu->r[10] = 0x00000188u;
    }
L_001f5330:;
    {
        cpu->r[11] = 0x00000174u;
    }
L_001f5334:;
    {
        cpu->r[8] = 0x00000178u;
    }
L_001f5338:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_001f533c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001f5340:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_001f5344:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001f5348:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_001f534c:;
    {
        goto L_001f53e4;
    }
L_001f5350:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f5354:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x18u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f5358:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f535c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_001f5360:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_001f5364:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5368:;
    {
        wr64(cpu->r[13], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f536c:;
    {
        uint64_t v = rd64(cpu->r[13]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f5370:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000014u, 1, 0);
    }
L_001f5374:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f5378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f537c:;
    {
        wr64(cpu->r[1] + + 0x18u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001f5380:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[1] = v;
    }
L_001f5384:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f5388:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[1]);
    }
L_001f538c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f5390:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f5394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_001f5398:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[3]);
    }
L_001f539c:;
    {
        cpu->r[12] = rd8(cpu->r[14] + cpu->r[12]);
    }
L_001f53a0:;
    {
        cpu->r[5] = rd8(cpu->r[3] + - 0x2u);
    }
L_001f53a4:;
    {
        cpu->r[14] = rd8(cpu->r[3] + - 0x3u);
    }
L_001f53a8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f53ac:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 16u, &shc); cpu->r[5] = v;
    }
L_001f53b0:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[5] = v;
    }
L_001f53b4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[12] = v;
    }
L_001f53b8:;
    {
        uint32_t v = shifter(cpu->r[5], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[5] = v;
    }
L_001f53bc:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[12], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f53c0:;
    {
        uint32_t v = cpu->r[1] & ~ 0xff000000u; cpu->r[1] = v;
    }
L_001f53c4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00f00000u; cpu->r[1] = v;
    }
L_001f53c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_001f53cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_001f53d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f53d4:;
    {
        cpu->r[14] = 0x001f53d8u; fn_001f4f68(cpu);
    }
L_001f53d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f53dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001f53e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f52d4;
        }
    }
L_001f53e4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001f53e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001f53ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f53f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f53f4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f53f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001f53fc:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x18u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f5400:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001f5404:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[2] = v;
    }
L_001f5408:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f540c:;
    {
        wr64(cpu->r[13] + + 0x18u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f5410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5350;
        }
    }
L_001f5414:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f5418:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5350;
        }
    }
L_001f541c:;
    {
        cpu->r[2] = 0x00000184u;
    }
L_001f5420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5424:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5428:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f542c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001f5430:;
    {
        cpu->r[14] = 0x001f5434u; fn_001f4c30(cpu);
    }
L_001f5434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5438:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f543c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001f5440:;
    {
        uint64_t v = rd64(cpu->r[3] + + 0x18u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f5444:;
    {
        wr64(cpu->r[13] + + 0x18u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001f5448:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001f544c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001f5450:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f5454:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[2]);
    }
L_001f5458:;
    {
        goto L_001f5350;
    }
L_001f545c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_001f5460:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f548c;
        }
    }
L_001f5464:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5468:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f546c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5470:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 0);
    }
L_001f5474:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00009000u, 0, 0);
    }
L_001f5478:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001f547c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5480:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_001f5484:;
    {
        uint32_t v = shifter(cpu->r[5], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5488:;
    {
        goto L_001f5138;
    }
L_001f548c:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5490:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001f5494:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5498:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f549c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f54a0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f54a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 7u, &shc), 0, 0);
    }
L_001f54a8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f54ac:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_001f54b0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_001f54b4:;
    {
        goto L_001f5138;
    }
}

/* mpc_demux_seek_second @ 001f54c0 (arm) */
void fn_001f54c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f54c0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001f54c4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f54ccu + + 0x34u);
    }
L_001f54c8:;
    {
        *vfp_d(cpu,6) = (double)*(uint32_t*)vfp_s(cpu,12);
    }
L_001f54cc:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[3]<<32)|cpu->r[2];
    }
L_001f54d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f54d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f54d8:;
    {
        *vfp_d(cpu,4) = *vfp_d(cpu,7);
    }
L_001f54dc:;
    {
        *vfp_d(cpu, 4) = *vfp_d(cpu, 4) + *vfp_d(cpu, 6) * *vfp_d(cpu, 5);
    }
L_001f54e0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,4); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f54e4:;
    {
        cpu->r[14] = 0x001f54e8u; imp___aeabi_d2lz(cpu); /* __aeabi_d2lz */
    }
L_001f54e8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f54ec:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001f54f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f54f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f54f8:;
    {
        return fn_001f509c(cpu);
    }
}

/* sub_001f5508 @ 001f5508 (arm) */
void fn_001f5508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f5508:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001f550c:;
    {
        cpu->r[3] = 0x00000194u;
    }
L_001f5510:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5514:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f5518:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001f551c:;
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
L_001f5520:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_001f5524:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001f5528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f552c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5658;
        }
    }
L_001f5530:;
    {
        cpu->r[3] = 0x00000190u;
    }
L_001f5534:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5538:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f553c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f5540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5660;
        }
    }
L_001f5544:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x160u);
    }
L_001f5548:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f554c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001f5550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001f5554:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[3] = v;
    }
L_001f5558:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001f555c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[7] = v;
    }
L_001f5560:;
    {
        wr64(cpu->r[13], ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001f5564:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f5568:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f556c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000174u, 0, 0);
    }
L_001f5570:;
    {
        cpu->r[14] = 0x001f5574u; fn_001f4f68(cpu);
    }
L_001f5574:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f5578:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f557c:;
    {
        cpu->r[14] = 0x001f5580u; fn_00202b70(cpu);
    }
L_001f5580:;
    {
        cpu->r[3] = rd32(0x001f5588u + + 0x3d4u);
    }
L_001f5584:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f558cu, cpu->r[3], 0, 0);
    }
L_001f5588:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001f558c:;
    {
        cpu->r[3] = rd32(0x001f5594u + + 0x3ccu);
    }
L_001f5590:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f5598u, cpu->r[3], 0, 0);
    }
L_001f5594:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001f5598:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f559c:;
    {
        goto L_001f562c;
    }
L_001f55a0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x19u);
    }
L_001f55a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000040u, 1, 1);
    }
L_001f55a8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5658;
        }
    }
L_001f55ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005au, 1, 1);
    }
L_001f55b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f5658;
        }
    }
L_001f55b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f55b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f55bc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f55c0:;
    {
        cpu->r[14] = 0x001f55c4u; imp_memcmp(cpu); /* memcmp */
    }
L_001f55c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f55c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5928;
        }
    }
L_001f55cc:;
    {
        cpu->r[10] = 0x00000190u;
    }
L_001f55d0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001f55d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f55d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f55dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = rd32(cpu->r[13]);
        }
    }
L_001f55e0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[11]);
        }
    }
L_001f55e4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x20u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001f55e8:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f55ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f55f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 1);
    }
L_001f55f4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[8] = v;
    }
L_001f55f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], shifter(cpu->r[7], 1, 31u, &shc), (cpu->cpsr >> 29) & 1, 1);
    }
L_001f55fc:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 3u, &shc); cpu->r[9] = v;
    }
L_001f5600:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[10], 3, 29u, &shc); cpu->r[9] = v;
    }
L_001f5604:;
    {
        uint64_t v = rd64(cpu->r[13]);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_001f5608:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 1);
    }
L_001f560c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f5610:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[9], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5614:;
    {
        wr64(cpu->r[13], ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_001f5618:;
    {
        cpu->r[14] = 0x001f561cu; fn_001f4f68(cpu);
    }
L_001f561c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f5620:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f5624:;
    {
        cpu->r[14] = 0x001f5628u; fn_00202b70(cpu);
    }
L_001f5628:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f562c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f5630:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f5634:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f5638:;
    {
        cpu->r[14] = 0x001f563cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f563c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f593c;
        }
    }
L_001f5644:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x18u);
    }
L_001f5648:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000041u, 1, 0);
    }
L_001f564c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001f5650:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_001f5654:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f55a0;
        }
    }
L_001f5658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001f565c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f5660u)) return;
    }
L_001f5660:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00010000u, 0, 0);
    }
L_001f5664:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001f5668:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000174u, 0, 0);
    }
L_001f566c:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001f5670:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5674:;
    {
        cpu->r[14] = 0x001f5678u; fn_001f4f68(cpu);
    }
L_001f5678:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f567c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f5680:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f5684:;
    {
        cpu->r[14] = 0x001f5688u; fn_00202b70(cpu);
    }
L_001f5688:;
    {
        cpu->r[3] = rd32(0x001f5690u + + 0x2d4u);
    }
L_001f568c:;
    {
        cpu->r[10] = 0x00000194u;
    }
L_001f5690:;
    {
        cpu->r[9] = 0x00000190u;
    }
L_001f5694:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001f5698:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f56a0u, cpu->r[3], 0, 0);
    }
L_001f569c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001f56a0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001f56a4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_001f56a8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001f56ac:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001f56b0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f56b4:;
    {
        goto L_001f5708;
    }
L_001f56b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f56bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f56c0:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_001f56c4:;
    {
        cpu->r[14] = 0x001f56c8u; fn_00202ad0(cpu);
    }
L_001f56c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f56cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001f56d0:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001f56d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001f56d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f56dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001f56e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_001f56e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_001f56e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_001f56ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001f56f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f56f4:;
    {
        cpu->r[14] = 0x001f56f8u; fn_001f4f68(cpu);
    }
L_001f56f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f56fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f5700:;
    {
        cpu->r[14] = 0x001f5704u; fn_00202b70(cpu);
    }
L_001f5704:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f5708:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001f570c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f5710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f5714:;
    {
        cpu->r[14] = 0x001f5718u; imp_memcmp(cpu); /* memcmp */
    }
L_001f5718:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f571c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5720:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f5724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f56b8;
        }
    }
L_001f5728:;
    {
        cpu->r[8] = 0x00000194u;
    }
L_001f572c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001f5730:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001f5734:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f5738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f573c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f5910;
        }
    }
L_001f5740:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f5744:;
    {
        cpu->r[1] = rd32(0x001f574cu + + 0x21cu);
    }
L_001f5748:;
    {
        cpu->r[2] = rd32(0x001f5750u + + 0x21cu);
    }
L_001f574c:;
    {
        cpu->r[3] = 0x00000171u;
    }
L_001f5750:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001f5754:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f575cu, cpu->r[1], 0, 0);
    }
L_001f5758:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f5760u, cpu->r[2], 0, 0);
    }
L_001f575c:;
    {
        cpu->r[10] = 0x00000198u;
    }
L_001f5760:;
    {
        cpu->r[14] = 0x001f5764u; fn_00200aec(cpu);
    }
L_001f5764:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f5768:;
    {
        cpu->r[1] = 0x00000190u;
    }
L_001f576c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001f5770:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f5774:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f5778:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001f577c:;
    {
        cpu->r[7] = 0x00000174u;
    }
L_001f5780:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001f5784:;
    {
        cpu->r[8] = 0x00000178u;
    }
L_001f5788:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_001f578c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001f5790:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001f5794:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f5798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f579c:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_001f57a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], shifter(cpu->r[11], 2, 3u, &shc), 0, 0);
    }
L_001f57a4:;
    {
        cpu->r[14] = 0x001f57a8u; fn_001f4f68(cpu);
    }
L_001f57a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f57ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f57b0:;
    {
        cpu->r[14] = 0x001f57b4u; fn_00202b70(cpu);
    }
L_001f57b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001f57b8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001f57bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f57c0:;
    {
        goto L_001f58f0;
    }
L_001f57c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f57c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_001f57cc:;
    {
        cpu->r[14] = 0x001f57d0u; fn_001f4dd0(cpu);
    }
L_001f57d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f57d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f57d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001f57dc:;
    {
        cpu->r[14] = 0x001f57e0u; fn_00202ad0(cpu);
    }
L_001f57e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f57e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001f57e8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 0);
    }
L_001f57ec:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f57f0:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[3] = v;
    }
L_001f57f4:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_001f57f8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001f57fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5800:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_001f5804:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_001f5808:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001f580c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_001f5810:;
    {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_001f5814:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f5818:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f581c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd8(cpu->r[2] + - 0x2u);
        }
    }
L_001f5820:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f5824:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f5828:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
        }
    }
L_001f582c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[12] = v;
        }
    }
L_001f5830:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f5834:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_001f5838:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001f583c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[3] = v;
    }
L_001f5840:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001f5844:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001f5848:;
    {
        wr16(cpu->r[14] + + 0x8u, cpu->r[1]);
    }
L_001f584c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001f5850:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f5854:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001f5858:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_001f585c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_001f5860:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5864:;
    {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_001f5868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_001f586c:;
    {
        cpu->r[14] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f5870:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f5874:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[2] + - 0x2u);
        }
    }
L_001f5878:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f587c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f5880:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[14], 2, 16u, &shc); cpu->r[14] = v;
        }
    }
L_001f5884:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[14] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[14] = v;
        }
    }
L_001f5888:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f588c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001f5890:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001f5894:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[14], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001f5898:;
    {
        wr16(cpu->r[12] + + 0xau, cpu->r[1]);
    }
L_001f589c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001f58a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001f58a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001f58a8:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000008u, cpu->r[1], 1, 0);
    }
L_001f58ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 3, 3u, &shc), 0, 0);
    }
L_001f58b0:;
    {
        cpu->r[14] = 0x001f58b4u; imp_memcpy(cpu); /* memcpy */
    }
L_001f58b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_001f58b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f58bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001f58c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001f58c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001f58c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f58cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001f58d0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[11]);
    }
L_001f58d4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_001f58d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f58dc:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_001f58e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_001f58e4:;
    {
        cpu->r[14] = 0x001f58e8u; fn_00202b70(cpu);
    }
L_001f58e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000018u, 0, 0);
    }
L_001f58ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f58f0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f58f4:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001f58f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f58fc:;
    {
        cpu->r[14] = 0x001f5900u; imp_memcmp(cpu); /* memcmp */
    }
L_001f5900:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f57c4;
        }
    }
L_001f590c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f5910:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f5914:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5918:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f591c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001f5920:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f5924:;
    {
        goto L_001f5658;
    }
L_001f5928:;
    {
        cpu->r[2] = 0x00000190u;
    }
L_001f592c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f5930:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5934:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001f5938:;
    {
        goto L_001f55e4;
    }
L_001f593c:;
    {
        cpu->r[3] = 0x00000190u;
    }
L_001f5940:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5944:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5948:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f594c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13]);
        }
    }
L_001f5950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_001f5954:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[11]);
        }
    }
L_001f5958:;
    {
        goto L_001f566c;
    }
}

/* mpc_demux_chap @ 001f5970 (arm) */
void fn_001f5970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f5970:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001f5974:;
    {
        cpu->r[4] = 0x00000194u;
    }
L_001f5978:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_001f597c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f5980:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f5984:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001f5988:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f598c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f59c0;
        }
    }
L_001f5990:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f5994:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f5998:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f599c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f59a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000198u;
        }
    }
L_001f59a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_001f59a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_001f59ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f59b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_001f59b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
        }
    }
L_001f59b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f59bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f59c0u)) return;
    }
L_001f59c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f59c4:;
    {
        cpu->r[14] = 0x001f59c8u; fn_001f5508(cpu);
    }
L_001f59c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001f59cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f59d0:;
    {
        goto L_001f5990;
    }
}

/* mpc_demux_chap_nb @ 001f59d4 (arm) */
void fn_001f59d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f59d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f59d8:;
    {
        cpu->r[4] = 0x00000194u;
    }
L_001f59dc:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_001f59e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f59e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001f59e8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f59ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f59f8;
        }
    }
L_001f59f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f59f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f59f8u)) return;
    }
L_001f59f8:;
    {
        cpu->r[14] = 0x001f59fcu; fn_001f5508(cpu);
    }
L_001f59fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_001f5a00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f5a04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f5a08u)) return;
    }
}

/* mpc_demux_decode @ 001f5a08 (arm) */
void fn_001f5a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f5a08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001f5a0c:;
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
L_001f5a10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001f5a14:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001f5a18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f5a1c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001f5a20:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5b0c;
        }
    }
L_001f5a24:;
    {
        cpu->r[3] = 0x00000180u;
    }
L_001f5a28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f5a2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5a30:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_001f5a34:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f5a38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f5a3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00010000u, 0, 0);
        }
    }
L_001f5a40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000174u, 0, 0);
        }
    }
L_001f5a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5c68;
        }
    }
L_001f5a48:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f5a4c:;
    {
        cpu->r[5] = 0x00000174u;
    }
L_001f5a50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5a54:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001f5a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5a5c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5a60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000170u, 0, 0);
    }
L_001f5a64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f5a68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_001f5a6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00001100u, 1, 1);
    }
L_001f5a70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f5e3c;
        }
    }
L_001f5a74:;
    {
        cpu->r[5] = 0x00000178u;
    }
L_001f5a78:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f5a7c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001f5a80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5a84:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f5a88:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5a8c:;
    {
        cpu->r[14] = 0x001f5a90u; fn_00205878(cpu);
    }
L_001f5a90:;
    {
        cpu->r[3] = 0x0000017cu;
    }
L_001f5a94:;
    {
        cpu->r[1] = 0x00000174u;
    }
L_001f5a98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5a9c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f5aa0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5aa4:;
    {
        cpu->r[2] = 0x00000180u;
    }
L_001f5aa8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5aac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5ab0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001f5ab4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_001f5ab8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f5abc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001f5ac0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_001f5ac4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001f5ac8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001f5acc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[6], 2, 3u, &shc), 1, 0);
    }
L_001f5ad0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001f5ad4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f5ad8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f5d2c;
        }
    }
L_001f5adc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f5ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5dd0;
        }
    }
L_001f5ae4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f5ae8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f5aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5c5c;
        }
    }
L_001f5af0:;
    {
        cpu->r[2] = 0x00000174u;
    }
L_001f5af4:;
    {
        cpu->r[3] = 0x00000178u;
    }
L_001f5af8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5afc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5b00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f5b04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5b08:;
    {
        goto L_001f5c38;
    }
L_001f5b0c:;
    {
        cpu->r[5] = 0x0000018cu;
    }
L_001f5b10:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5b14:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001f5b18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5b1c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f5b20:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001f5b24:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f5b28:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x18u);
    }
L_001f5b2c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f5b30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001f5b34:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 7u, &shc), 1, 1);
    }
L_001f5b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5ddc;
        }
    }
L_001f5b3c:;
    {
        cpu->r[1] = 0x00001100u;
    }
L_001f5b40:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001f5b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5b48:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_001f5b4c:;
    {
        cpu->r[14] = 0x001f5b50u; fn_001f4dd0(cpu);
    }
L_001f5b50:;
    {
        cpu->r[12] = 0x00000178u;
    }
L_001f5b54:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f5b58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f5b5c:;
    {
        cpu->r[1] = 0x00000174u;
    }
L_001f5b60:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_001f5b64:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f5b68:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f5b6c:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x10u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f5b70:;
    {
        cpu->r[14] = 0x0000017cu;
    }
L_001f5b74:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000014u, 1, 0);
    }
L_001f5b78:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001f5b7c:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[6] = v;
    }
L_001f5b80:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_001f5b84:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f5b88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 1);
    }
L_001f5b8c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f5b90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5b94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001f5b98:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x18u);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
    }
L_001f5b9c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_001f5ba0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_001f5ba4:;
    {
        cpu->r[7] = rd8(cpu->r[7] + cpu->r[12]);
    }
L_001f5ba8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001f5bac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5bb0:;
    {
        cpu->r[12] = rd8(cpu->r[5] + - 0x2u);
    }
L_001f5bb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5bb8:;
    {
        cpu->r[10] = rd8(cpu->r[5] + - 0x3u);
    }
L_001f5bbc:;
    {
        cpu->r[1] = rd8(cpu->r[5] + - 0x1u);
    }
L_001f5bc0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_001f5bc4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[10], 2, 24u, &shc); cpu->r[12] = v;
    }
L_001f5bc8:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f5bcc:;
    {
        uint32_t v = shifter(cpu->r[12], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f5bd0:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[1], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f5bd4:;
    {
        uint32_t v = cpu->r[1] & ~ 0xff000000u; cpu->r[1] = v;
    }
L_001f5bd8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00f00000u; cpu->r[1] = v;
    }
L_001f5bdc:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[1]);
    }
L_001f5be0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5da4;
        }
    }
L_001f5be4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f5be8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f5bec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_001f5bf0:;
    {
        cpu->r[14] = 0x001f5bf4u; fn_00205878(cpu);
    }
L_001f5bf4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f5bf8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f5bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5c5c;
        }
    }
L_001f5c00:;
    {
        cpu->r[2] = 0x00000174u;
    }
L_001f5c04:;
    {
        cpu->r[1] = 0x00000178u;
    }
L_001f5c08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c0c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c10:;
    {
        cpu->r[3] = 0x0000017cu;
    }
L_001f5c14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001f5c18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c1c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001f5c20:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001f5c24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5c28:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001f5c2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001f5c30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001f5c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5d2c;
        }
    }
L_001f5c38:;
    {
        cpu->r[3] = 0x00000170u;
    }
L_001f5c3c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000008u, cpu->r[1], 1, 0);
    }
L_001f5c40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 3, 3u, &shc), 0, 0);
    }
L_001f5c48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5c4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000170u, 0, 0);
    }
L_001f5c50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f5c54:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001f5c58:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001f5d2c;
        }
    }
L_001f5c5c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f5c60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001f5c64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f5c68u)) return;
    }
L_001f5c68:;
    {
        cpu->r[5] = 0x0000018cu;
    }
L_001f5c6c:;
    {
        cpu->r[1] = 0x00000188u;
    }
L_001f5c70:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c74:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c78:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f5c7c:;
    {
        cpu->r[2] = 0x00000178u;
    }
L_001f5c80:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001f5c84:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5c88:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001f5c8c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f5c90:;
    {
        wr8(cpu->r[13] + + 0x1u, cpu->r[3]);
    }
L_001f5c94:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001f5c98:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f5c9c:;
    {
        wr8(cpu->r[13], cpu->r[3]);
    }
L_001f5ca0:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_001f5ca4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f5ca8:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x18u);
    }
L_001f5cac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001f5cb0:;
    {
        sub_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 7u, &shc), 1, 1);
    }
L_001f5cb4:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000007u; cpu->r[3] = v;
    }
L_001f5cb8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_001f5cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5e0c;
        }
    }
L_001f5cc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f5cc4:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001f5cc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f5ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5cd0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000174u, 0, 0);
    }
L_001f5cd4:;
    {
        cpu->r[14] = 0x001f5cd8u; fn_001f4dd0(cpu);
    }
L_001f5cd8:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001f5cdc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f5ce0:;
    {
        cpu->r[14] = 0x001f5ce4u; fn_00202b70(cpu);
    }
L_001f5ce4:;
    {
        cpu->r[10] = rd32(0x001f5cecu + + 0x1bcu);
    }
L_001f5ce8:;
    {
        cpu->r[9] = rd32(0x001f5cf0u + + 0x1bcu);
    }
L_001f5cec:;
    {
        cpu->r[6] = 0x00000174u;
    }
L_001f5cf0:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_001f5cf4:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_001f5cf8:;
    {
        cpu->r[10] = add_flags(cpu, 0x001f5d00u, cpu->r[10], 0, 0);
    }
L_001f5cfc:;
    {
        cpu->r[9] = add_flags(cpu, 0x001f5d04u, cpu->r[9], 0, 0);
    }
L_001f5d00:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f5d04:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f5d08:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f5d0c:;
    {
        cpu->r[14] = 0x001f5d10u; imp_memcmp(cpu); /* memcmp */
    }
L_001f5d10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5e64;
        }
    }
L_001f5d18:;
    {
        cpu->r[3] = rd8(cpu->r[13]);
    }
L_001f5d1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000041u, 1, 0);
    }
L_001f5d20:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001f5d24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_001f5d28:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5d3c;
        }
    }
L_001f5d2c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f5d30:;
    {
        cpu->r[0] = (~0x00000005u);
    }
L_001f5d34:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_001f5d38:;
    {
        goto L_001f5c60;
    }
L_001f5d3c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x1u);
    }
L_001f5d40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000040u, 1, 1);
    }
L_001f5d44:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5d2c;
        }
    }
L_001f5d48:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005au, 1, 1);
    }
L_001f5d4c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f5d2c;
        }
    }
L_001f5d50:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f5d54:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f5d58:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f5d5c:;
    {
        cpu->r[14] = 0x001f5d60u; imp_memcmp(cpu); /* memcmp */
    }
L_001f5d60:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f5d64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5d68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5e98;
        }
    }
L_001f5d70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f5d74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_001f5d78:;
    {
        cpu->r[14] = 0x001f5d7cu; fn_001f4dd0(cpu);
    }
L_001f5d7c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001f5d80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f5d84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f5d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5d2c;
        }
    }
L_001f5d8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001f5d90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f5d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f5d98:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_001f5d9c:;
    {
        cpu->r[14] = 0x001f5da0u; fn_00202b70(cpu);
    }
L_001f5da0:;
    {
        goto L_001f5d00;
    }
L_001f5da4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000480u, 1, 1);
    }
L_001f5da8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f5dac:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
        }
    }
L_001f5db0:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[1]);
        }
    }
L_001f5db4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f5db8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_001f5dbc:;
    {
        cpu->r[14] = 0x001f5dc0u; fn_00205878(cpu);
    }
L_001f5dc0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001f5dc4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f5dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5c00;
        }
    }
L_001f5dcc:;
    {
        goto L_001f5c5c;
    }
L_001f5dd0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_001f5dd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f5ae4;
        }
    }
L_001f5dd8:;
    {
        goto L_001f5d2c;
    }
L_001f5ddc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x1cu);
    }
L_001f5de0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5de4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5b3c;
        }
    }
L_001f5de8:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f5dec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5df0:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f5df4:;
    {
        cpu->r[14] = 0x001f5df8u; fn_001f4c30(cpu);
    }
L_001f5df8:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_001f5dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5e00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f5e04:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001f5e08:;
    {
        goto L_001f5b3c;
    }
L_001f5e0c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x1cu);
    }
L_001f5e10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5cc0;
        }
    }
L_001f5e18:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f5e1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5e20:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f5e24:;
    {
        cpu->r[14] = 0x001f5e28u; fn_001f4c30(cpu);
    }
L_001f5e28:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_001f5e2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5e30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f5e34:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001f5e38:;
    {
        goto L_001f5cc0;
    }
L_001f5e3c:;
    {
        cpu->r[3] = 0x0000017cu;
    }
L_001f5e40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5e44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5e48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f5e4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f5e50:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001f5e54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001f5e58:;
    {
        cpu->r[14] = 0x001f5e5cu; fn_001f4dd0(cpu);
    }
L_001f5e5c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f5e60:;
    {
        goto L_001f5a74;
    }
L_001f5e64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f5e68:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_001f5e6c:;
    {
        cpu->r[3] = 0x00000180u;
    }
L_001f5e70:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f5e74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f5e78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f5e7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5e80:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 3u, &shc); cpu->r[12] = v;
    }
L_001f5e84:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[12]);
    }
L_001f5e88:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5e8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f5e90:;
    {
        wr8(cpu->r[8] + + 0xcu, cpu->r[1]);
    }
L_001f5e94:;
    {
        goto L_001f5a48;
    }
L_001f5e98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f5e9c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f5ea0:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_001f5ea4:;
    {
        goto L_001f5c60;
    }
}

/* sub_001f5eb0 @ 001f5eb0 (arm) */
void fn_001f5eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f5eb0:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f5eb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00010000u, 0, 0);
    }
L_001f5eb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5ebc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000174u, 0, 0);
    }
L_001f5ec0:;
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
L_001f5ec4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001f5ec8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001f5ecc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f5ed0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001f5ed4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001f5ed8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f5edc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001f5ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5eec;
        }
    }
L_001f5ee4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001f5ee8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f5eecu)) return;
    }
L_001f5eec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001f5ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f5ef4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001f5ef8:;
    {
        cpu->r[14] = 0x001f5efcu; fn_00202ad0(cpu);
    }
L_001f5efc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f5f00:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5f04:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f5f08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5f0c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001f5f10:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001f5f14:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[2] = v;
    }
L_001f5f18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001f5f1c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001f5f20:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x40u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001f5f24:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001f5f28:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_001f5f2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_001f5f30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001f5f34:;
    {
        cpu->r[0] = rd8(cpu->r[14] + cpu->r[0]);
    }
L_001f5f38:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001f5f3c:;
    {
        cpu->r[14] = rd8(cpu->r[1] + - 0x1u);
    }
L_001f5f40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f5f44:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[14] = v;
    }
L_001f5f48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f5f4c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001f5f50:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f5f54:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5f58:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[2] = v;
    }
L_001f5f5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001f5f60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001f5f64:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_001f5f68:;
    {
        cpu->r[2] = 0x00000480u;
    }
L_001f5f6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f5f70:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5f74:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001f5f78:;
    {
        cpu->r[14] = 0x001f5f7cu; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f5f7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 1);
    }
L_001f5f80:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5f84:;
    {
        wr64(cpu->r[13] + + 0x20u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_001f5f88:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f5f8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5f98;
        }
    }
L_001f5f90:;
    {
        sub_flags(cpu, cpu->r[10], 0x00010000u, 1, 1);
    }
L_001f5f94:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6144;
        }
    }
L_001f5f98:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f5f9c:;
    {
        cpu->r[7] = 0x00000480u;
    }
L_001f5fa0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001f5fa4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f5fa8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f5fac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f5fb0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001f5fb4:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_001f5fb8:;
    {
        cpu->r[14] = 0x001f5fbcu; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f5fbc:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001f5fc0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 1);
    }
L_001f5fc4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f5fc8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f5fcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f5fa0;
        }
    }
L_001f5fd0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00010000u, 1, 1);
    }
L_001f5fd4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f5fa0;
        }
    }
L_001f5fd8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f5fdc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001f5fe0:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f5fe4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_001f5fe8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
    }
L_001f5fec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f5ff0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f5ff4:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_001f5ff8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001f5ffc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_001f6000:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_001f6004:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f6008:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f600c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f6010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6158;
        }
    }
L_001f6014:;
    {
        cpu->r[2] = rd32(0x001f601cu + + 0x14cu);
    }
L_001f6018:;
    {
        cpu->r[3] = 0x00000117u;
    }
L_001f601c:;
    {
        cpu->r[1] = rd32(0x001f6024u + + 0x148u);
    }
L_001f6020:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001f6024:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f602cu, cpu->r[2], 0, 0);
    }
L_001f6028:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001f602c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6034u, cpu->r[1], 0, 0);
    }
L_001f6030:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_001f6034:;
    {
        cpu->r[14] = 0x001f6038u; fn_00200aec(cpu);
    }
L_001f6038:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f603c:;
    {
        cpu->r[6] = 0x0000018cu;
    }
L_001f6040:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f6044:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f6048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_001f604c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_001f6050:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f6054:;
    {
        uint32_t v = shifter(cpu->r[2], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f6058:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[2]);
    }
L_001f605c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f6060:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6064:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_001f6068:;
    {
        cpu->r[14] = 0x001f606cu; fn_00202ad0(cpu);
    }
L_001f606c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x160u);
    }
L_001f6070:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f6074:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001f6078:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_001f607c:;
    {
        wr32(cpu->r[11], cpu->r[8]);
    }
L_001f6080:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001f6084:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f6088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f5ee4;
        }
    }
L_001f608c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f6090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6094:;
    {
        cpu->r[14] = 0x001f6098u; fn_00202ad0(cpu);
    }
L_001f6098:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x160u);
    }
L_001f609c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f60a0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f60a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f60a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001f60ac:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001f60b0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[6] = v;
    }
L_001f60b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[11] + + 0x4u, cpu->r[6]);
        }
    }
L_001f60b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001f60bc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_001f60c0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f5ee4;
        }
    }
L_001f60c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_001f60c8:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_001f60cc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_001f60d0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001f60d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_001f60d8:;
    {
        goto L_001f60e4;
    }
L_001f60dc:;
    {
        wr32(cpu->r[1] + - 0x10u, cpu->r[0]);
    }
L_001f60e0:;
    {
        cpu->r[8] = rd32(cpu->r[2] + - 0x10u);
    }
L_001f60e4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001f60e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f60ec:;
    {
        cpu->r[14] = 0x001f60f0u; fn_002029e8(cpu);
    }
L_001f60f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001f60f4:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[2] = v;
    }
L_001f60f8:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 1u, &shc), cpu->r[8], 1, 0);
    }
L_001f60fc:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[1] = v;
    }
L_001f6100:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001f6104:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001f6108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f610c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f6110:;
    {
        uint32_t v = shifter(cpu->r[5], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f6114:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f6118:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000001u; cpu->r[9] = v;
    }
L_001f611c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
        }
    }
L_001f6120:;
    {
        { uint32_t v = cpu->r[5] & cpu->r[10]; set_nz(cpu, v); }
    }
L_001f6124:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001f6128:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_001f612c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001f6130:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f6134:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[0]);
        }
    }
L_001f6138:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001f613c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f60dc;
        }
    }
L_001f6140:;
    {
        goto L_001f5ee4;
    }
L_001f6144:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_001f6148:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001f614c:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_001f6150:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_001f6154:;
    {
        goto L_001f6004;
    }
L_001f6158:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001f615c:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001f6160:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
        }
    }
L_001f6164:;
    {
        goto L_001f6014;
    }
}
