#include "functions.h"

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_10StringCompESt4pairIKS7_NS3_13SZipFileEntryEENS_10_Select1stISC_EENS_11_MapTraitsTISC_EENS4_ISC_LS5_0EEEE9_M_insertEPNS_18_Rb_tree_node_baseERKSC_SK_SK_ @ 00201218 (arm) */
void fn_00201218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00201218:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0020121c:;
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
L_00201220:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00201224:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00201228:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0020122c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00201230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201648;
        }
    }
L_00201234:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00201238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020123c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201468;
        }
    }
L_00201240:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00201248:;
    {
        cpu->r[14] = 0x0020124cu; fn_0020109c(cpu);
    }
L_0020124c:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_00201250:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00201254:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201258:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0020125c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201640;
        }
    }
L_00201260:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00201264:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[7]);
    }
L_00201268:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020126c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00201270:;
    {
        wr8(cpu->r[12], cpu->r[3]);
    }
L_00201274:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_00201278:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0020127c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00201280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201354;
        }
    }
L_00201284:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_00201288:;
    {
        cpu->r[1] = rd8(cpu->r[2]);
    }
L_0020128c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00201290:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201350;
        }
    }
L_00201294:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_00201298:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0020129c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_002012a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201374;
        }
    }
L_002012a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_002012a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002012d0;
        }
    }
L_002012ac:;
    {
        cpu->r[10] = rd8(cpu->r[1]);
    }
L_002012b0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_002012b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002012d0;
        }
    }
L_002012b8:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_002012bc:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_002012c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_002012c4:;
    {
        wr8(cpu->r[0], cpu->r[10]);
    }
L_002012c8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_002012cc:;
    {
        goto L_0020127c;
    }
L_002012d0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_002012d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_002012d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_002012dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_002012e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_002012e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201420;
        }
    }
L_002012e8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_002012ec:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_002012f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_002012f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_002012f8:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_002012fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_00201300:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00201304:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_00201308:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
        }
    }
L_0020130c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00201310:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00201314:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00201318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0020131c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_00201320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201338;
        }
    }
L_00201324:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00201328:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x8u);
    }
L_0020132c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00201330:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1] + + 0x8u, cpu->r[0]);
        }
    }
L_00201334:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
        }
    }
L_00201338:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0020133c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_00201340:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00201344:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00201348:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020134c:;
    {
        goto L_0020127c;
    }
L_00201350:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00201354:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00201358:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0020135c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00201360:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_00201364:;
    {
        wr32(cpu->r[8], cpu->r[12]);
    }
L_00201368:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0020136c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00201370:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00201374u)) return;
    }
L_00201374:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00201378:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0020137c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002013a4;
        }
    }
L_00201380:;
    {
        cpu->r[10] = rd8(cpu->r[2]);
    }
L_00201384:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00201388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002013a4;
        }
    }
L_0020138c:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_00201390:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00201394:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_00201398:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0020139c:;
    {
        wr8(cpu->r[0], cpu->r[10]);
    }
L_002013a0:;
    {
        goto L_0020127c;
    }
L_002013a4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_002013a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_002013ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_002013b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_002013b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_002013b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002015f8;
        }
    }
L_002013bc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_002013c0:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_002013c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_002013c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_002013cc:;
    {
        wr8(cpu->r[3], cpu->r[7]);
    }
L_002013d0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xcu);
    }
L_002013d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002013d8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[0]);
    }
L_002013dc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_002013e0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_002013e4:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_002013e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_002013ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_002013f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
        }
    }
L_002013f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020140c;
        }
    }
L_002013f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_002013fc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_00201400:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00201404:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_00201408:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
        }
    }
L_0020140c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00201410:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_00201414:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00201418:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020141c:;
    {
        goto L_0020127c;
    }
L_00201420:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0xcu);
    }
L_00201424:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00201428:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
        }
    }
L_0020142c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_00201430:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[5]);
    }
L_00201434:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_00201438:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020143c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00201440:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_00201444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020145c;
        }
    }
L_00201448:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_0020144c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_00201450:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00201454:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
        }
    }
L_00201458:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
        }
    }
L_0020145c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00201460:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_00201464:;
    {
        goto L_002012e8;
    }
L_00201468:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0020146c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201668;
        }
    }
L_00201474:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00201478:;
    {
        cpu->r[0] = 0x00000094u;
    }
L_0020147c:;
    {
        cpu->r[14] = 0x00201480u; fn_00097dd0(cpu);
    }
L_00201480:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00201484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_00201488:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_0020148c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201490:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x10u);
    }
L_00201494:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[3]);
    }
L_00201498:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x14u);
    }
L_0020149c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_002014a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002014a4:;
    {
        cpu->r[14] = 0x002014a8u; fn_001d55a8(cpu);
    }
L_002014a8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_002014ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_002014b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002014c4;
        }
    }
L_002014b4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_002014b8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_002014bc:;
    {
        cpu->r[14] = 0x002014c0u; imp_memcpy(cpu); /* memcpy */
    }
L_002014c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_002014c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_002014c8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_002014cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_002014d0:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_002014d4:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_002014d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002014dc:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x28u);
    }
L_002014e0:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_002014e4:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x2cu);
    }
L_002014e8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_002014ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002014f0:;
    {
        cpu->r[14] = 0x002014f4u; fn_001d55a8(cpu);
    }
L_002014f4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_002014f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3cu);
    }
L_002014fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201510;
        }
    }
L_00201500:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00201504:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00201508:;
    {
        cpu->r[14] = 0x0020150cu; imp_memcpy(cpu); /* memcpy */
    }
L_0020150c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00201510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_00201514:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_00201518:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0020151c:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_00201520:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_00201524:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201528:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x40u);
    }
L_0020152c:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_00201530:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x44u);
    }
L_00201534:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_00201538:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0020153c:;
    {
        cpu->r[14] = 0x00201540u; fn_001d55a8(cpu);
    }
L_00201540:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_00201544:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_00201548:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020155c;
        }
    }
L_0020154c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00201550:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00201554:;
    {
        cpu->r[14] = 0x00201558u; imp_memcpy(cpu); /* memcpy */
    }
L_00201558:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0020155c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_00201560:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_00201564:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00201568:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0020156c:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[3]);
    }
L_00201570:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201574:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x58u);
    }
L_00201578:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[3]);
    }
L_0020157c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x5cu);
    }
L_00201580:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_00201584:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00201588:;
    {
        cpu->r[14] = 0x0020158cu; fn_001d55a8(cpu);
    }
L_0020158c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_00201590:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x6cu);
    }
L_00201594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002015a8;
        }
    }
L_00201598:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0020159c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_002015a0:;
    {
        cpu->r[14] = 0x002015a4u; imp_memcpy(cpu); /* memcpy */
    }
L_002015a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_002015a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000064u, 0, 0);
    }
L_002015ac:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_002015b0:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[0]);
    }
L_002015b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000074u, 0, 0);
    }
L_002015b8:;
    {
        wr8(cpu->r[0], cpu->r[11]);
    }
L_002015bc:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_002015c0:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[9] = base + 16u;
    }
L_002015c4:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x60u);
    }
L_002015c8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[11]);
    }
L_002015cc:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[5]);
    }
L_002015d0:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[6]);
    }
L_002015d4:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[10] = base + 16u;
    }
L_002015d8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_002015dc:;
    {
        uint32_t base = cpu->r[9];
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
L_002015e0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_002015e4:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[11]);
    }
L_002015e8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
        }
    }
L_002015ec:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        cpu->r[10] = base + 12u;
    }
L_002015f0:;
    {
        wr16(cpu->r[10], cpu->r[3]);
    }
L_002015f4:;
    {
        goto L_00201260;
    }
L_002015f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_002015fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201600:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_00201604:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
        }
    }
L_00201608:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0020160c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_00201610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00201614:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00201618:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
        }
    }
L_0020161c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201634;
        }
    }
L_00201620:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00201624:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_00201628:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0020162c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
        }
    }
L_00201630:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_00201634:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_00201638:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_0020163c:;
    {
        goto L_002013bc;
    }
L_00201640:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_00201644:;
    {
        goto L_00201260;
    }
L_00201648:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0020164c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00201650:;
    {
        cpu->r[14] = 0x00201654u; fn_0020109c(cpu);
    }
L_00201654:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00201658:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0020165c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00201660:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00201664:;
    {
        goto L_00201260;
    }
L_00201668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_0020166c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_00201670:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201674:;
    {
        cpu->r[14] = 0x00201678u; fn_00200b80(cpu);
    }
L_00201678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0020167c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201240;
        }
    }
L_00201680:;
    {
        goto L_00201474;
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_10StringCompESt4pairIKS7_NS3_13SZipFileEntryEENS_10_Select1stISC_EENS_11_MapTraitsTISC_EENS4_ISC_LS5_0EEEE13insert_uniqueERKSC_ @ 00201684 (arm) */
void fn_00201684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00201684:;
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
L_00201688:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_0020168c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00201690:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00201694:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00201698:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0020169c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_002016a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_002016a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020177c;
        }
    }
L_002016a8:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x14u);
    }
L_002016ac:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x10u);
    }
L_002016b0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_002016b4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_002016b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_002016bc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20u);
    }
L_002016c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_002016c4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_002016c8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_002016cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_002016d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_002016d4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_002016d8:;
    {
        cpu->r[14] = 0x002016dcu; imp_memcmp(cpu); /* memcmp */
    }
L_002016dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_002016e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002016e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002016f8;
        }
    }
L_002016e8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_002016ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_002016f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_002016f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00201718;
        }
    }
L_002016f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002016fc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00201718;
        }
    }
L_00201700:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201704:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00201708:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0020170c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201724;
        }
    }
L_00201710:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00201714:;
    {
        goto L_002016b4;
    }
L_00201718:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0020171c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00201720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201710;
        }
    }
L_00201724:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201728:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
        }
    }
L_0020172c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020177c;
        }
    }
L_00201730:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00201734:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00201738:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0020173c:;
    {
        cpu->r[14] = 0x00201740u; imp_memcmp(cpu); /* memcmp */
    }
L_00201740:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201758;
        }
    }
L_00201748:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_0020174c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_002017f4;
        }
    }
L_00201750:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00201754:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00201758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0020175c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_002017f4;
        }
    }
L_00201760:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00201764:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_00201768:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0020176c:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_00201770:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00201774:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00201778:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0020177cu)) return;
    }
L_0020177c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00201780:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_00201784:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00201788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020188c;
        }
    }
L_0020178c:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00201790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201794:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002017a8;
        }
    }
L_00201798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020179c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_002017a0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_002017a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201878;
        }
    }
L_002017a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_002017ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_002017b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002017bc;
        }
    }
L_002017b4:;
    {
        goto L_00201828;
    }
L_002017b8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_002017bc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_002017c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002017c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002017b8;
        }
    }
L_002017c8:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_002017cc:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_002017d0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x24u);
    }
L_002017d4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x20u);
    }
L_002017d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_002017dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_002017e0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_002017e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_002017e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_002017ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_002017f0:;
    {
        goto L_00201730;
    }
L_002017f4:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_002017f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_002017fc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00201800:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00201804:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00201808:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0020180c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00201810:;
    {
        cpu->r[14] = 0x00201814u; fn_00201218(cpu);
    }
L_00201814:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00201818:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_0020181c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00201820:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_00201824:;
    {
        goto L_00201770;
    }
L_00201828:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020182c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_00201830:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00201834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002017c8;
        }
    }
L_00201838:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0020183c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_00201840:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00201844:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00201848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201838;
        }
    }
L_0020184c:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_00201850:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_00201854:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00201858:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x24u);
    }
L_0020185c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_00201860:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x20u);
    }
L_00201864:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_00201868:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0020186c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_00201870:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_00201874:;
    {
        goto L_00201730;
    }
L_00201878:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0020187c:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_00201880:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_00201884:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00201888:;
    {
        goto L_00201858;
    }
L_0020188c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00201890:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00201894:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00201898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0020189c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_002018a0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_002018a4:;
    {
        cpu->r[14] = 0x002018a8u; fn_00201218(cpu);
    }
L_002018a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_002018ac:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_002018b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_002018b4:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_002018b8:;
    {
        goto L_00201770;
    }
}

/* _ZN3vox10CZipReader15extractFilenameEPNS_13SZipFileEntryE @ 002018bc (arm) */
void fn_002018bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002018bc:;
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
L_002018c0:;
    {
        cpu->r[5] = rd32(0x002018c8u + + 0x20cu);
    }
L_002018c4:;
    {
        cpu->r[6] = rd32(0x002018ccu + + 0x20cu);
    }
L_002018c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_002018cc:;
    {
        cpu->r[5] = add_flags(cpu, 0x002018d4u, cpu->r[5], 0, 0);
    }
L_002018d0:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x66u);
    }
L_002018d4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_002018d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_002018dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_002018e0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_002018e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002018e8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_002018ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201a64;
        }
    }
L_002018f0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x20u);
    }
L_002018f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002018f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[1] + + 0x14u);
        }
    }
L_002018fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201954;
        }
    }
L_00201900:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x10u);
    }
L_00201904:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_00201908:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_0020190c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201954;
        }
    }
L_00201910:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00201914:;
    {
        goto L_0020191c;
    }
L_00201918:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0020191c:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_00201920:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00201924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00201928:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000041u, 1, 0);
    }
L_0020192c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00201930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000019u, 1, 1);
    }
L_00201934:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
        }
    }
L_00201938:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
        }
    }
L_0020193c:;
    {
        wr8(cpu->r[1], cpu->r[2]);
    }
L_00201940:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x14u);
    }
L_00201944:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00201948:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_0020194c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00201950:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00201918;
        }
    }
L_00201954:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_00201958:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0020195c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_00201960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201978;
        }
    }
L_00201964:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_00201968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201a80;
        }
    }
L_0020196c:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0x1u;
        cpu->r[3] = rd8(cpu->r[10] + - 0x1u);
        cpu->r[10] = wb_tmp;
    }
L_00201970:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_00201974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201964;
        }
    }
L_00201978:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_0020197c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201a80;
        }
    }
L_00201980:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00201984:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_00201988:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0020198c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00201990:;
    {
        cpu->r[14] = 0x00201994u; imp_strlen(cpu); /* strlen */
    }
L_00201994:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00201998:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0020199c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_002019a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_002019a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_002019a8:;
    {
        cpu->r[14] = 0x002019acu; fn_001f3660(cpu);
    }
L_002019ac:;
    {
        cpu->r[1] = rd32(0x002019b4u + + 0x128u);
    }
L_002019b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_002019b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x002019bcu, cpu->r[1], 0, 0);
    }
L_002019b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_002019bc:;
    {
        cpu->r[14] = 0x002019c0u; fn_001f3660(cpu);
    }
L_002019c0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x14u);
    }
L_002019c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_002019c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_002019cc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 0);
    }
L_002019d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_002019d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_002019d8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_002019dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_002019e0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
        }
    }
L_002019e4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
        }
    }
L_002019e8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_002019ec:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_002019f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002019f4:;
    {
        cpu->r[14] = 0x002019f8u; fn_001d55a8(cpu);
    }
L_002019f8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_002019fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00201a00:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00201a04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201a18;
        }
    }
L_00201a08:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00201a0c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00201a10:;
    {
        cpu->r[14] = 0x00201a14u; imp_memcpy(cpu); /* memcpy */
    }
L_00201a14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00201a18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00201a1c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00201a20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00201a24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00201a28:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00201a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201a40;
        }
    }
L_00201a30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00201a34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00201a38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00201a3c:;
    {
        cpu->r[14] = 0x00201a40u; fn_001f3660(cpu);
    }
L_00201a40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00201a44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00201a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201ab0;
        }
    }
L_00201a4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201a50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201ab0;
        }
    }
L_00201a54:;
    {
        cpu->r[14] = 0x00201a58u; fn_00097dc8(cpu);
    }
L_00201a58:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x21u);
    }
L_00201a5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201a60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201abc;
        }
    }
L_00201a64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00201a68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00201a6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00201a70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00201a74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201ad0;
        }
    }
L_00201a78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00201a7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00201a80u)) return;
    }
L_00201a80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00201a84:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00201a88:;
    {
        cpu->r[14] = 0x00201a8cu; imp_strlen(cpu); /* strlen */
    }
L_00201a8c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00201a90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00201a94:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00201a98:;
    {
        cpu->r[14] = 0x00201a9cu; fn_001f3660(cpu);
    }
L_00201a9c:;
    {
        cpu->r[1] = rd32(0x00201aa4u + + 0x3cu);
    }
L_00201aa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_00201aa4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00201aacu, cpu->r[1], 0, 0);
    }
L_00201aa8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00201aac:;
    {
        cpu->r[14] = 0x00201ab0u; fn_001f3660(cpu);
    }
L_00201ab0:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x21u);
    }
L_00201ab4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201a64;
        }
    }
L_00201abc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00201ac0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00201ac4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_00201ac8:;
    {
        cpu->r[14] = 0x00201accu; fn_001f3660(cpu);
    }
L_00201acc:;
    {
        goto L_00201a64;
    }
L_00201ad0:;
    {
        cpu->r[14] = 0x00201ad4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00201ad4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 1, 22u, &shc); cpu->r[8] = v;
        }
    }
L_00201ad8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00201adc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[0], 1, 1u, &shc); cpu->r[14] = v;
        }
    }
L_00201ae0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[2] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[2]);
        cpu->r[13] = (uint32_t)v;
        cpu->r[14] = (uint32_t)(v >> 32);
        cpu->r[2] = wb_tmp;
        }
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_10StringCompESt4pairIKS7_NS3_13SZipFileEntryEENS_10_Select1stISC_EENS_11_MapTraitsTISC_EENS4_ISC_LS5_0EEEE13insert_uniqueENS_17_Rb_tree_iteratorISC_SG_EERKSC_ @ 00201ae4 (arm) */
void fn_00201ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00201ae4:;
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
L_00201ae8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00201aec:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00201af0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00201af4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00201af8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00201afc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00201b00:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00201b04:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00201b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201cf8;
        }
    }
L_00201b0c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00201b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201e54;
        }
    }
L_00201b14:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_00201b18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201b1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201bf8;
        }
    }
L_00201b20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_00201b24:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00201b28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201b34;
        }
    }
L_00201b2c:;
    {
        goto L_00201c18;
    }
L_00201b30:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00201b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201b38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201b3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201b30;
        }
    }
L_00201b40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00201b44:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x14u);
    }
L_00201b48:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x10u);
    }
L_00201b4c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00201b50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_00201b54:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00201b58:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_00201b5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00201b60:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00201b64:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00201b68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_00201b6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_00201b70:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00201b74:;
    {
        cpu->r[14] = 0x00201b78u; imp_memcmp(cpu); /* memcmp */
    }
L_00201b78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00201b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201b80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201b9c;
        }
    }
L_00201b84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00201b88:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_00201b8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00201b90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00201b9c;
        }
    }
L_00201b94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00201b98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00201b9c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_00201ba0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201c40;
        }
    }
L_00201ba4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_00201ba8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00201bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201bb8;
        }
    }
L_00201bb0:;
    {
        goto L_00201ee8;
    }
L_00201bb4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00201bb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00201bbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00201bc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201bb4;
        }
    }
L_00201bc4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00201bc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201cd4;
        }
    }
L_00201bcc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201bd0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00201bd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00201bd8:;
    {
        cpu->r[14] = 0x00201bdcu; imp_memcmp(cpu); /* memcmp */
    }
L_00201bdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201be0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201cb0;
        }
    }
L_00201be4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00201be8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00201bec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00201cb4;
        }
    }
L_00201bf0:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_00201bf4:;
    {
        goto L_00201cec;
    }
L_00201bf8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00201bfc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00201c00:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00201c04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
        }
    }
L_00201c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201b40;
        }
    }
L_00201c0c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_00201c10:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00201c14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201b34;
        }
    }
L_00201c18:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x4u);
    }
L_00201c1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00201c20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00201c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201b40;
        }
    }
L_00201c28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00201c2c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00201c30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00201c34:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00201c38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201c28;
        }
    }
L_00201c3c:;
    {
        goto L_00201b40;
    }
L_00201c40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00201c44:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00201c48:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_00201c4c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00201c50:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00201c54:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_00201c58:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00201c5c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_00201c60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_00201c64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_00201c68:;
    {
        cpu->r[14] = 0x00201c6cu; imp_memcmp(cpu); /* memcmp */
    }
L_00201c6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00201c70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00201c74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201c78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201e40;
        }
    }
L_00201c7c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_00201c80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00201ba4;
        }
    }
L_00201c84:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201c88:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00201c8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201e20;
        }
    }
L_00201c90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201c94:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00201c98:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201c9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201ca0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00201ca4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00201ca8:;
    {
        cpu->r[14] = 0x00201cacu; fn_00201218(cpu);
    }
L_00201cac:;
    {
        goto L_00201cec;
    }
L_00201cb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00201bf0;
        }
    }
L_00201cb4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00201cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f34;
        }
    }
L_00201cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00201cc0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00201cc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_00201cc8:;
    {
        cpu->r[14] = 0x00201cccu; fn_00200b80(cpu);
    }
L_00201ccc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201cd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201f2c;
        }
    }
L_00201cd4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201cd8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00201cdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00201ce0:;
    {
        cpu->r[14] = 0x00201ce4u; fn_00201684(cpu);
    }
L_00201ce4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00201ce8:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00201cec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201cf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00201cf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00201cf8u)) return;
    }
L_00201cf8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00201cfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201d00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f8c;
        }
    }
L_00201d04:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_00201d08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00201d0c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x10u);
    }
L_00201d10:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00201d14:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x20u);
    }
L_00201d18:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00201d1c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_00201d20:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00201d24:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_00201d28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_00201d2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00201d30:;
    {
        cpu->r[14] = 0x00201d34u; imp_memcmp(cpu); /* memcmp */
    }
L_00201d34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201d38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201d4c;
        }
    }
L_00201d3c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_00201d40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00201c90;
        }
    }
L_00201d44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00201d48:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00201d4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201d50:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00201c90;
        }
    }
L_00201d54:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_00201d58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00201d5c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00201d60:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00201d64:;
    {
        cpu->r[14] = 0x00201d68u; fn_00200b80(cpu);
    }
L_00201d68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f7c;
        }
    }
L_00201d70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00201d74:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00201d78:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0xcu);
    }
L_00201d7c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00201d80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201e10;
        }
    }
L_00201d84:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_00201d88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_00201d8c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00201d90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[12];
        }
    }
L_00201d94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201dac;
        }
    }
L_00201d98:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00201d9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00201da0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_00201da4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00201da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201d98;
        }
    }
L_00201dac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201db0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00201db4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_00201db8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00201dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201fc4;
        }
    }
L_00201dc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00201dc4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00201dc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_00201dcc:;
    {
        cpu->r[14] = 0x00201dd0u; fn_00200b80(cpu);
    }
L_00201dd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f60;
        }
    }
L_00201dd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00201ddc:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00201de0:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0xcu);
    }
L_00201de4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00201de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201fa4;
        }
    }
L_00201dec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201df0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00201df4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201df8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201dfc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00201e00:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00201e04:;
    {
        cpu->r[14] = 0x00201e08u; fn_00201218(cpu);
    }
L_00201e08:;
    {
        goto L_00201cec;
    }
L_00201e0c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00201e10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00201e14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201e18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201e0c;
        }
    }
L_00201e1c:;
    {
        goto L_00201db8;
    }
L_00201e20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201e24:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00201e28:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201e2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201e30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00201e34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00201e38:;
    {
        cpu->r[14] = 0x00201e3cu; fn_00201218(cpu);
    }
L_00201e3c:;
    {
        goto L_00201cec;
    }
L_00201e40:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00201ba4;
        }
    }
L_00201e44:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201e48:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00201e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201c90;
        }
    }
L_00201e50:;
    {
        goto L_00201e20;
    }
L_00201e54:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_00201e58:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_00201e5c:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x10u);
    }
L_00201e60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00201e64:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00201e68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_00201e6c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_00201e70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201e74:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00201e78:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_00201e7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_00201e80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_00201e84:;
    {
        cpu->r[14] = 0x00201e88u; imp_memcmp(cpu); /* memcmp */
    }
L_00201e88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201e8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201ea0;
        }
    }
L_00201e90:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_00201e94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00201ea8;
        }
    }
L_00201e98:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00201e9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00201ea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00201ea4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00201ecc;
        }
    }
L_00201ea8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201eac:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00201eb0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201eb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201eb8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00201ebc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00201ec0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00201ec4:;
    {
        cpu->r[14] = 0x00201ec8u; fn_00201218(cpu);
    }
L_00201ec8:;
    {
        goto L_00201cec;
    }
L_00201ecc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201ed0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00201ed4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00201ed8:;
    {
        cpu->r[14] = 0x00201edcu; fn_00201684(cpu);
    }
L_00201edc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00201ee0:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00201ee4:;
    {
        goto L_00201cec;
    }
L_00201ee8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_00201eec:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_00201ef0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00201ef4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[5];
        }
    }
L_00201ef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f10;
        }
    }
L_00201efc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00201f00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00201f04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_00201f08:;
    {
        goto L_00201bc4;
    }
L_00201f0c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00201f10:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00201f14:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_00201f18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00201f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201f0c;
        }
    }
L_00201f20:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00201f24:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00201f28:;
    {
        goto L_00201efc;
    }
L_00201f2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00201f30:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00201f34:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00201f38:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00201f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201dec;
        }
    }
L_00201f40:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201f44:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00201f48:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201f4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201f50:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00201f54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00201f58:;
    {
        cpu->r[14] = 0x00201f5cu; fn_00201218(cpu);
    }
L_00201f5c:;
    {
        goto L_00201cec;
    }
L_00201f60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201f64:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00201f68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00201f6c:;
    {
        cpu->r[14] = 0x00201f70u; fn_00201684(cpu);
    }
L_00201f70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_00201f74:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00201f78:;
    {
        goto L_00201cec;
    }
L_00201f7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00201f80:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00201f84:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00201f88:;
    {
        goto L_00201cec;
    }
L_00201f8c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00201f90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00201f94:;
    {
        cpu->r[14] = 0x00201f98u; fn_00201684(cpu);
    }
L_00201f98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_00201f9c:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00201fa0:;
    {
        goto L_00201cec;
    }
L_00201fa4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201fa8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00201fac:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201fb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201fb4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00201fb8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00201fbc:;
    {
        cpu->r[14] = 0x00201fc0u; fn_00201218(cpu);
    }
L_00201fc0:;
    {
        goto L_00201cec;
    }
L_00201fc4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00201fc8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00201fcc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00201fd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00201fd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00201fd8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00201fdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00201fe0:;
    {
        cpu->r[14] = 0x00201fe4u; fn_00201218(cpu);
    }
L_00201fe4:;
    {
        goto L_00201cec;
    }
}

/* _ZN3vox10CZipReader15scanLocalHeaderEv @ 00201fe8 (arm) */
void fn_00201fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00201fe8:;
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
L_00201fec:;
    {
        cpu->r[9] = rd32(0x00201ff4u + + 0x780u);
    }
L_00201ff0:;
    {
        cpu->r[2] = rd32(0x00201ff8u + + 0x780u);
    }
L_00201ff4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000570u, 1, 0);
    }
L_00201ff8:;
    {
        cpu->r[9] = add_flags(cpu, 0x00202000u, cpu->r[9], 0, 0);
    }
L_00201ffc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00202000:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_00202004:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00202008:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0020200c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00202010:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202014:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00202018:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0020201c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00202020:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00202024:;
    {
        wr32(cpu->r[13] + + 0x518u, cpu->r[5]);
    }
L_00202028:;
    {
        wr32(cpu->r[13] + + 0x51cu, cpu->r[5]);
    }
L_0020202c:;
    {
        wr32(cpu->r[13] + + 0x574u, cpu->r[3]);
    }
L_00202030:;
    {
        cpu->r[14] = 0x00202034u; fn_001d55a8(cpu);
    }
L_00202034:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x518u);
    }
L_00202038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0020203c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00202040:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00202044:;
    {
        wr8(cpu->r[2], cpu->r[4]);
    }
L_00202048:;
    {
        wr32(cpu->r[13] + + 0x530u, cpu->r[3]);
    }
L_0020204c:;
    {
        wr32(cpu->r[13] + + 0x534u, cpu->r[3]);
    }
L_00202050:;
    {
        cpu->r[14] = 0x00202054u; fn_001d55a8(cpu);
    }
L_00202054:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x530u);
    }
L_00202058:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0020205c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00202060:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00202064:;
    {
        wr8(cpu->r[2], cpu->r[4]);
    }
L_00202068:;
    {
        wr32(cpu->r[13] + + 0x548u, cpu->r[3]);
    }
L_0020206c:;
    {
        wr32(cpu->r[13] + + 0x54cu, cpu->r[3]);
    }
L_00202070:;
    {
        cpu->r[14] = 0x00202074u; fn_001d55a8(cpu);
    }
L_00202074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x548u);
    }
L_00202078:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_0020207c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_00202080:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00202084:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00202088:;
    {
        wr8(cpu->r[0], cpu->r[4]);
    }
L_0020208c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_00202090:;
    {
        wr32(cpu->r[13] + + 0x550u, cpu->r[4]);
    }
L_00202094:;
    {
        wr32(cpu->r[13] + + 0x554u, cpu->r[4]);
    }
L_00202098:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0020209c:;
    {
        wr32(cpu->r[13] + + 0x558u, cpu->r[4]);
    }
L_002020a0:;
    {
        wr32(cpu->r[13] + + 0x55cu, cpu->r[4]);
    }
L_002020a4:;
    {
        wr32(cpu->r[13] + + 0x560u, cpu->r[4]);
    }
L_002020a8:;
    {
        wr32(cpu->r[13] + + 0x564u, cpu->r[4]);
    }
L_002020ac:;
    {
        wr32(cpu->r[13] + + 0x568u, cpu->r[4]);
    }
L_002020b0:;
    {
        wr32(cpu->r[13] + + 0x56cu, cpu->r[4]);
    }
L_002020b4:;
    {
        wr16(cpu->r[14] + + 0x70u, cpu->r[4]);
    }
L_002020b8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_002020bc:;
    {
        cpu->r[14] = 0x002020c4u;
    }
L_002020c0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002020c4u)) return;
    }
L_002020c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x554u);
    }
L_002020c8:;
    {
        cpu->r[2] = 0x00004c51u;
    }
L_002020cc:;
    {
        cpu->r[3] = 0x00004b50u;
    }
L_002020d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0504u << 16);
    }
L_002020d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0403u << 16);
    }
L_002020d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_002020dc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
        }
    }
L_002020e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[4];
        }
    }
L_002020e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202348;
        }
    }
L_002020e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_002020ec:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x6eu);
    }
L_002020f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_002020f4:;
    {
        add_flags(cpu, cpu->r[7], 0x00000002u, 0, 1);
    }
L_002020f8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00202698;
        }
    }
L_002020fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x51cu);
    }
L_00202100:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x518u);
    }
L_00202104:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_00202108:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0020210c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[4] = cpu->r[7];
        }
    }
L_00202110:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00202114:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00202118:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000010u;
        }
    }
L_0020211c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x508u);
        }
    }
L_00202120:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_00202124:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00202128:;
    {
        if (cond_test(cpu, 3)) {
        goto L_002026a8;
        }
    }
L_0020212c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_00202130:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_00202134:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00202138:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0020213c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00202140:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[14] + + 0x6eu);
    }
L_00202144:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00202148:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0020214c:;
    {
        cpu->r[14] = 0x00202154u;
    }
L_00202150:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00202154u)) return;
    }
L_00202154:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_00202158:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000570u, 0, 0);
    }
L_0020215c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00202160:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x6eu);
    }
L_00202164:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00202168:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0020216c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_00202170:;
    {
        wr8(cpu->r[3] + - 0x560u, cpu->r[2]);
    }
L_00202174:;
    {
        cpu->r[14] = 0x00202178u; imp_strlen(cpu); /* strlen */
    }
L_00202178:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0020217c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_00202180:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202184:;
    {
        cpu->r[14] = 0x00202188u; fn_001f3660(cpu);
    }
L_00202188:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0020218c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00202190:;
    {
        cpu->r[14] = 0x00202194u; fn_002018bc(cpu);
    }
L_00202194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_00202198:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0x70u);
    }
L_0020219c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_002021a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202720;
        }
    }
L_002021a4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_002021a8:;
    {
        cpu->r[3] = rd16(cpu->r[14] + + 0x5au);
    }
L_002021ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_002021b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020274c;
        }
    }
L_002021b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_002021b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000024u, 0, 0);
    }
L_002021bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_002021c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002021c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002021c8:;
    {
        cpu->r[14] = 0x002021d0u;
    }
L_002021cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002021d0u)) return;
    }
L_002021d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_002021d4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_002021d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_002021dc:;
    {
        cpu->r[14] = rd16(cpu->r[3] + + 0x68u);
    }
L_002021e0:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x66u);
    }
L_002021e4:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_002021e8:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[14], 2, 16u, &shc); cpu->r[1] = v;
    }
L_002021ec:;
    {
        wr32(cpu->r[13] + + 0x550u, cpu->r[0]);
    }
L_002021f0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_002021f4:;
    {
        cpu->r[14] = 0x002021fcu;
    }
L_002021f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x002021fcu)) return;
    }
L_002021fc:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x28u);
    }
L_00202200:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00202204:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_00202208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020227c;
        }
    }
L_0020220c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x534u);
    }
L_00202210:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x530u);
    }
L_00202214:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00202218:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 0);
    }
L_0020221c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00202220:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00202224:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20u);
    }
L_00202228:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0020222c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00202230:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00202234:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_00202238:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_0020223c:;
    {
        cpu->r[14] = 0x00202240u; imp_memcmp(cpu); /* memcmp */
    }
L_00202240:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202244:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202268;
        }
    }
L_00202248:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0020224c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0020226c;
        }
    }
L_00202250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00202254:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00202258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020227c;
        }
    }
L_0020225c:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_00202260:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00202264:;
    {
        goto L_0020221c;
    }
L_00202268:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00202250;
        }
    }
L_0020226c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00202270:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00202274:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00202278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020225c;
        }
    }
L_0020227c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_00202280:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[4], 1, 1);
    }
L_00202284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002023c4;
        }
    }
L_00202288:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x534u);
    }
L_0020228c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00202290:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x24u);
    }
L_00202294:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_00202298:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0020229c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x530u);
    }
L_002022a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_002022a4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_002022a8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_002022ac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_002022b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_002022b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_002022b8:;
    {
        cpu->r[14] = 0x002022bcu; imp_memcmp(cpu); /* memcmp */
    }
L_002022bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002022c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002023c0;
        }
    }
L_002022c4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_002022c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_002023c4;
        }
    }
L_002022cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000028u, 0, 0);
    }
L_002022d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_002022d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002022e4;
        }
    }
L_002022d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x51cu);
    }
L_002022dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x518u);
    }
L_002022e0:;
    {
        cpu->r[14] = 0x002022e4u; fn_001f3660(cpu);
    }
L_002022e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_002022e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_002022ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002022f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202300;
        }
    }
L_002022f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x534u);
    }
L_002022f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x530u);
    }
L_002022fc:;
    {
        cpu->r[14] = 0x00202300u; fn_001f3660(cpu);
    }
L_00202300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000058u, 0, 0);
    }
L_00202304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00202308:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0020230c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020231c;
        }
    }
L_00202310:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54cu);
    }
L_00202314:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x548u);
    }
L_00202318:;
    {
        cpu->r[14] = 0x0020231cu; fn_001f3660(cpu);
    }
L_0020231c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000550u, 0, 0);
    }
L_00202320:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000074u, 0, 0);
    }
L_00202324:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00202328:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x550u);
    }
L_0020232c:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00202330:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[4] = base + 16u;
    }
L_00202334:;
    {
        wr32(cpu->r[6] + + 0x70u, cpu->r[8]);
    }
L_00202338:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0020233c:;
    {
        uint32_t base = cpu->r[4];
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
L_00202340:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        cpu->r[12] = base + 12u;
    }
L_00202344:;
    {
        wr16(cpu->r[12], cpu->r[3]);
    }
L_00202348:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54cu);
    }
L_0020234c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00202350:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202364;
        }
    }
L_00202358:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0020235c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202364;
        }
    }
L_00202360:;
    {
        cpu->r[14] = 0x00202364u; fn_00097dc8(cpu);
    }
L_00202364:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x534u);
    }
L_00202368:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0020236c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202380;
        }
    }
L_00202374:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202380;
        }
    }
L_0020237c:;
    {
        cpu->r[14] = 0x00202380u; fn_00097dc8(cpu);
    }
L_00202380:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x51cu);
    }
L_00202384:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00202388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202398;
        }
    }
L_0020238c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202398;
        }
    }
L_00202394:;
    {
        cpu->r[14] = 0x00202398u; fn_00097dc8(cpu);
    }
L_00202398:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0020239c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_002023a0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_002023a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x574u);
    }
L_002023a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002023ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_002023b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202770;
        }
    }
L_002023b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000017cu, 0, 0);
    }
L_002023b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_002023bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002023c0u)) return;
    }
L_002023c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_002022cc;
        }
    }
L_002023c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000490u, 0, 0);
    }
L_002023c8:;
    {
        cpu->r[2] = 0x0000006au;
    }
L_002023cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_002023d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002023d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_002023d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_002023dc:;
    {
        cpu->r[14] = 0x002023e0u; imp_memset(cpu); /* memset */
    }
L_002023e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_002023e4:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_002023e8:;
    {
        wr32(cpu->r[13] + + 0x4acu, cpu->r[8]);
    }
L_002023ec:;
    {
        wr32(cpu->r[13] + + 0x4b0u, cpu->r[8]);
    }
L_002023f0:;
    {
        cpu->r[14] = 0x002023f4u; fn_001d55a8(cpu);
    }
L_002023f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4acu);
    }
L_002023f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_002023fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00202400:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00202404:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000410u, 0, 0);
    }
L_00202408:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_0020240c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00202410:;
    {
        wr32(cpu->r[13] + + 0x4c4u, cpu->r[3]);
    }
L_00202414:;
    {
        wr32(cpu->r[13] + + 0x4c8u, cpu->r[3]);
    }
L_00202418:;
    {
        cpu->r[14] = 0x0020241cu; fn_001d55a8(cpu);
    }
L_0020241c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4c4u);
    }
L_00202420:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_00202424:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00202428:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_0020242c:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_00202430:;
    {
        wr32(cpu->r[13] + + 0x4dcu, cpu->r[3]);
    }
L_00202434:;
    {
        wr32(cpu->r[13] + + 0x4e0u, cpu->r[3]);
    }
L_00202438:;
    {
        cpu->r[14] = 0x0020243cu; fn_001d55a8(cpu);
    }
L_0020243c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4dcu);
    }
L_00202440:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00202444:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_00202448:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x530u);
    }
L_0020244c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x534u);
    }
L_00202450:;
    {
        wr32(cpu->r[13] + + 0x428u, cpu->r[7]);
    }
L_00202454:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_00202458:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0020245c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00202460:;
    {
        wr32(cpu->r[13] + + 0x42cu, cpu->r[7]);
    }
L_00202464:;
    {
        cpu->r[14] = 0x00202468u; fn_001d55a8(cpu);
    }
L_00202468:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0020246c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x42cu);
    }
L_00202470:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00202474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202488;
        }
    }
L_00202478:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0020247c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00202480:;
    {
        cpu->r[14] = 0x00202484u; imp_memcpy(cpu); /* memcpy */
    }
L_00202484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00202488:;
    {
        wr32(cpu->r[13] + + 0x428u, cpu->r[0]);
    }
L_0020248c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00202490:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00202494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_00202498:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4acu);
    }
L_0020249c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_002024a0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4b0u);
    }
L_002024a4:;
    {
        wr32(cpu->r[13] + + 0x440u, cpu->r[2]);
    }
L_002024a8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_002024ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_002024b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002024b4:;
    {
        wr32(cpu->r[13] + + 0x444u, cpu->r[2]);
    }
L_002024b8:;
    {
        cpu->r[14] = 0x002024bcu; fn_001d55a8(cpu);
    }
L_002024bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_002024c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x444u);
    }
L_002024c4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_002024c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002024dc;
        }
    }
L_002024cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_002024d0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_002024d4:;
    {
        cpu->r[14] = 0x002024d8u; imp_memcpy(cpu); /* memcpy */
    }
L_002024d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_002024dc:;
    {
        wr32(cpu->r[13] + + 0x440u, cpu->r[0]);
    }
L_002024e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002024e4:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_002024e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_002024ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4c4u);
    }
L_002024f0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_002024f4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4c8u);
    }
L_002024f8:;
    {
        wr32(cpu->r[13] + + 0x458u, cpu->r[2]);
    }
L_002024fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_00202500:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00202504:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00202508:;
    {
        wr32(cpu->r[13] + + 0x45cu, cpu->r[2]);
    }
L_0020250c:;
    {
        cpu->r[14] = 0x00202510u; fn_001d55a8(cpu);
    }
L_00202510:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00202514:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x45cu);
    }
L_00202518:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0020251c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202530;
        }
    }
L_00202520:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00202524:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00202528:;
    {
        cpu->r[14] = 0x0020252cu; imp_memcpy(cpu); /* memcpy */
    }
L_0020252c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00202530:;
    {
        wr32(cpu->r[13] + + 0x458u, cpu->r[0]);
    }
L_00202534:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00202538:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_0020253c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000048u, 0, 0);
    }
L_00202540:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4dcu);
    }
L_00202544:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00202548:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4e0u);
    }
L_0020254c:;
    {
        wr32(cpu->r[13] + + 0x470u, cpu->r[2]);
    }
L_00202550:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_00202554:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00202558:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0020255c:;
    {
        wr32(cpu->r[13] + + 0x474u, cpu->r[2]);
    }
L_00202560:;
    {
        cpu->r[14] = 0x00202564u; fn_001d55a8(cpu);
    }
L_00202564:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00202568:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x474u);
    }
L_0020256c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00202570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202584;
        }
    }
L_00202574:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00202578:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0020257c:;
    {
        cpu->r[14] = 0x00202580u; imp_memcpy(cpu); /* memcpy */
    }
L_00202580:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00202584:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000004e0u, 0, 0);
    }
L_00202588:;
    {
        wr32(cpu->r[13] + + 0x470u, cpu->r[0]);
    }
L_0020258c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00202590:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00202594:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00202598:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000470u, 0, 0);
    }
L_0020259c:;
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
L_002025a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_002025a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_002025a8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_002025ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4e4u);
    }
L_002025b0:;
    {
        wr32(cpu->r[13] + + 0x478u, cpu->r[3]);
    }
L_002025b4:;
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
    }
L_002025b8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        cpu->r[12] = base + 12u;
    }
L_002025bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], 0x00000008u, 1, 0);
    }
L_002025c0:;
    {
        wr16(cpu->r[12], cpu->r[3]);
    }
L_002025c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_002025c8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_002025cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_002025d0:;
    {
        cpu->r[14] = 0x002025d4u; fn_00201ae4(cpu);
    }
L_002025d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x474u);
    }
L_002025d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000048u, 0, 0);
    }
L_002025dc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_002025e0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_002025e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002025f4;
        }
    }
L_002025e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002025ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002025f4;
        }
    }
L_002025f0:;
    {
        cpu->r[14] = 0x002025f4u; fn_00097dc8(cpu);
    }
L_002025f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x45cu);
    }
L_002025f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_002025fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202610;
        }
    }
L_00202604:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202610;
        }
    }
L_0020260c:;
    {
        cpu->r[14] = 0x00202610u; fn_00097dc8(cpu);
    }
L_00202610:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x444u);
    }
L_00202614:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_00202618:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0020261c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020262c;
        }
    }
L_00202620:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202624:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020262c;
        }
    }
L_00202628:;
    {
        cpu->r[14] = 0x0020262cu; fn_00097dc8(cpu);
    }
L_0020262c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x42cu);
    }
L_00202630:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00202634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202644;
        }
    }
L_00202638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0020263c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202644;
        }
    }
L_00202640:;
    {
        cpu->r[14] = 0x00202644u; fn_00097dc8(cpu);
    }
L_00202644:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4e0u);
    }
L_00202648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0020264c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202660;
        }
    }
L_00202654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202660;
        }
    }
L_0020265c:;
    {
        cpu->r[14] = 0x00202660u; fn_00097dc8(cpu);
    }
L_00202660:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4c8u);
    }
L_00202664:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_00202668:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0020266c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020267c;
        }
    }
L_00202670:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020267c;
        }
    }
L_00202678:;
    {
        cpu->r[14] = 0x0020267cu; fn_00097dc8(cpu);
    }
L_0020267c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4b0u);
    }
L_00202680:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00202684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002022cc;
        }
    }
L_00202688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0020268c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002022cc;
        }
    }
L_00202690:;
    {
        cpu->r[14] = 0x00202694u; fn_00097dc8(cpu);
    }
L_00202694:;
    {
        goto L_002022cc;
    }
L_00202698:;
    {
        cpu->r[0] = rd32(0x002026a0u + + 0xdcu);
    }
L_0020269c:;
    {
        cpu->r[0] = add_flags(cpu, 0x002026a4u, cpu->r[0], 0, 0);
    }
L_002026a0:;
    {
        cpu->r[14] = 0x002026a4u; fn_00208298(cpu);
    }
L_002026a4:;
    {
        goto L_002020fc;
    }
L_002026a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002026ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002026b0:;
    {
        cpu->r[14] = 0x002026b4u; fn_00097dd0(cpu);
    }
L_002026b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x51cu);
    }
L_002026b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x518u);
    }
L_002026bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_002026c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_002026c4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_002026c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_002026cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_002026ec;
        }
    }
L_002026d0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_002026d4:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[8]);
    }
L_002026d8:;
    {
        wr8(cpu->r[7] + cpu->r[8], cpu->r[3]);
    }
L_002026dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_002026e0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_002026e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002026d4;
        }
    }
L_002026e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_002026ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002026f0:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_002026f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x51cu);
    }
L_002026f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_002026fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020270c;
        }
    }
L_00202700:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020270c;
        }
    }
L_00202708:;
    {
        cpu->r[14] = 0x0020270cu; fn_00097dc8(cpu);
    }
L_0020270c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00202710:;
    {
        wr32(cpu->r[13] + + 0x518u, cpu->r[8]);
    }
L_00202714:;
    {
        wr32(cpu->r[13] + + 0x51cu, cpu->r[7]);
    }
L_00202718:;
    {
        wr32(cpu->r[13] + + 0x508u, cpu->r[4]);
    }
L_0020271c:;
    {
        goto L_0020212c;
    }
L_00202720:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00202724:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00202728:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0020272c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00202730:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00202734:;
    {
        cpu->r[14] = 0x0020273cu;
    }
L_00202738:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0020273cu)) return;
    }
L_0020273c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000500u, 0, 0);
    }
L_00202740:;
    {
        cpu->r[3] = rd16(cpu->r[14] + + 0x5au);
    }
L_00202744:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00202748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002021b4;
        }
    }
L_0020274c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_00202750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000005au, 0, 0);
    }
L_00202754:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00202758:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0020275c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00202760:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00202764:;
    {
        cpu->r[14] = 0x0020276cu;
    }
L_00202768:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0020276cu)) return;
    }
L_0020276c:;
    {
        goto L_002021b4;
    }
L_00202770:;
    {
        cpu->r[14] = 0x00202774u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00202774:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[8], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_00202778:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0020277c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 4, 26u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN3vox10CZipReaderC1EPKcbb @ 00202780 (arm) */
void fn_00202780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202780:;
    {
        cpu->r[12] = rd32(0x00202788u + + 0xccu);
    }
L_00202784:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00202788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0020278c:;
    {
        cpu->r[0] = rd32(0x00202794u + + 0xc4u);
    }
L_00202790:;
    {
        cpu->r[12] = add_flags(cpu, 0x00202798u, cpu->r[12], 0, 0);
    }
L_00202794:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00202798:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0020279c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_002027a0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_002027a4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_002027a8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_002027ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_002027b0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[0]);
        cpu->r[5] = wb_tmp;
    }
L_002027b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_002027b8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_002027bc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_002027c0:;
    {
        cpu->r[14] = 0x002027c4u; fn_001d55a8(cpu);
    }
L_002027c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_002027c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002027cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_002027d0:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_002027d4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_002027d8:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_002027dc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_002027e0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_002027e4:;
    {
        wr8(cpu->r[4] + + 0x20u, cpu->r[7]);
    }
L_002027e8:;
    {
        wr8(cpu->r[4] + + 0x21u, cpu->r[8]);
    }
L_002027ec:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_002027f0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_002027f4:;
    {
        cpu->r[14] = 0x002027f8u; fn_0020029c(cpu);
    }
L_002027f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002027fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_00202800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020281c;
        }
    }
L_00202804:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00202808:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0020280c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_00202810:;
    {
        cpu->r[14] = 0x00202818u;
    }
L_00202814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00202818u)) return;
    }
L_00202818:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0020281c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020284c;
        }
    }
L_00202824:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00202828:;
    {
        cpu->r[14] = 0x0020282cu; imp_strlen(cpu); /* strlen */
    }
L_0020282c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00202830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00202834:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202838:;
    {
        cpu->r[14] = 0x0020283cu; fn_001f3660(cpu);
    }
L_0020283c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00202840:;
    {
        cpu->r[14] = 0x00202844u; fn_00201fe8(cpu);
    }
L_00202844:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020283c;
        }
    }
L_0020284c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00202850:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00202854u)) return;
    }
}

/* _ZN3vox10CZipReaderC2EPKcbb @ 0020285c (arm) */
void fn_0020285c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020285c:;
    {
        cpu->r[12] = rd32(0x00202864u + + 0xccu);
    }
L_00202860:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00202864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00202868:;
    {
        cpu->r[0] = rd32(0x00202870u + + 0xc4u);
    }
L_0020286c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00202874u, cpu->r[12], 0, 0);
    }
L_00202870:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00202874:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00202878:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_0020287c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00202880:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00202884:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00202888:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0020288c:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000008u;
        wr32(cpu->r[5], cpu->r[0]);
        cpu->r[5] = wb_tmp;
    }
L_00202890:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202894:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_00202898:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_0020289c:;
    {
        cpu->r[14] = 0x002028a0u; fn_001d55a8(cpu);
    }
L_002028a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_002028a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002028a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_002028ac:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_002028b0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_002028b4:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_002028b8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_002028bc:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_002028c0:;
    {
        wr8(cpu->r[4] + + 0x20u, cpu->r[7]);
    }
L_002028c4:;
    {
        wr8(cpu->r[4] + + 0x21u, cpu->r[8]);
    }
L_002028c8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_002028cc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_002028d0:;
    {
        cpu->r[14] = 0x002028d4u; fn_0020029c(cpu);
    }
L_002028d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002028d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_002028dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002028f8;
        }
    }
L_002028e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002028e4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_002028e8:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_002028ec:;
    {
        cpu->r[14] = 0x002028f4u;
    }
L_002028f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002028f4u)) return;
    }
L_002028f4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002028f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002028fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202928;
        }
    }
L_00202900:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00202904:;
    {
        cpu->r[14] = 0x00202908u; imp_strlen(cpu); /* strlen */
    }
L_00202908:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0020290c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00202910:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202914:;
    {
        cpu->r[14] = 0x00202918u; fn_001f3660(cpu);
    }
L_00202918:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020291c:;
    {
        cpu->r[14] = 0x00202920u; fn_00201fe8(cpu);
    }
L_00202920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202918;
        }
    }
L_00202928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020292c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00202930u)) return;
    }
}

/* crc32mpc @ 00202938 (arm) */
void fn_00202938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202938:;
    {
        cpu->r[3] = rd32(0x00202940u + + 0xa0u);
    }
L_0020293c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00202940:;
    {
        cpu->r[3] = add_flags(cpu, 0x00202948u, cpu->r[3], 0, 0);
    }
L_00202944:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00202948:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0020294c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202994;
        }
    }
L_00202950:;
    {
        cpu->r[5] = 0x00008320u;
    }
L_00202954:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00202958:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0xedb8u << 16);
    }
L_0020295c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00202960:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00202964:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00202968:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0020296c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[2], 3, 1u, &shc); cpu->r[2] = v;
        }
    }
L_00202970:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[2], 3, 1u, &shc); cpu->r[2] = v;
        }
    }
L_00202974:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 1);
    }
L_00202978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202964;
        }
    }
L_0020297c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_00202980:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00202984:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000100u, 1, 1);
    }
L_00202988:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020295c;
        }
    }
L_0020298c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00202990:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00202994:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00202998:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_0020299c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_002029d4;
        }
    }
L_002029a0:;
    {
        cpu->r[4] = rd32(0x002029a8u + + 0x3cu);
    }
L_002029a4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_002029a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002029ac:;
    {
        cpu->r[4] = add_flags(cpu, 0x002029b4u, cpu->r[4], 0, 0);
    }
L_002029b0:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_002029b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_002029b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_002029bc:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[12]; cpu->r[12] = v;
    }
L_002029c0:;
    {
        uint32_t v = cpu->r[12] & 0x000000ffu; cpu->r[12] = v;
    }
L_002029c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002029c8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_002029cc:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[2], 3, 8u, &shc); cpu->r[2] = v;
    }
L_002029d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002029b0;
        }
    }
L_002029d4:;
    {
        cpu->r[0] = (~cpu->r[2]);
    }
L_002029d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_002029dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_bits_golomb_dec @ 002029e8 (arm) */
void fn_002029e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002029e8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_002029ec:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_002029f0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_002029f4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_002029f8:;
    {
        cpu->r[4] = rd8(cpu->r[12]);
    }
L_002029fc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00202a00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00202a04:;
    {
        uint32_t v = cpu->r[2] & cpu->r[4]; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00202a08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
        }
    }
L_00202a0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_00202a10:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_00202a14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202a48;
        }
    }
L_00202a18:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00202a1c:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_00202a20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00202a24:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00202a28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00202a2c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00202a30:;
    {
        cpu->r[2] = rd8(cpu->r[12]);
    }
L_00202a34:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00202a38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00202a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202a20;
        }
    }
L_00202a40:;
    {
        cpu->r[3] = 0x00000080u;
    }
L_00202a44:;
    {
        cpu->r[5] = 0x00000007u;
    }
L_00202a48:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[2]; set_nz(cpu, v); }
    }
L_00202a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202a78;
        }
    }
L_00202a50:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00202a54:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00202a58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00202a5c:;
    {
        uint32_t v = cpu->r[2] & shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_00202a60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202a58;
        }
    }
L_00202a64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00202a68:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00202a6c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_00202a70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00202a74:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00202a78:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00202a7c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_00202a80:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00202ab0;
        }
    }
L_00202a84:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00202a88:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00202a8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00202a90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00202a94:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00202a98:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00202a9c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00202aa0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00202aa4:;
    {
        cpu->r[6] = rd8(cpu->r[12]);
    }
L_00202aa8:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00202aac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00202a8c;
        }
    }
L_00202ab0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00202ab4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
    }
L_00202ab8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_00202abc:;
    {
        cpu->r[3] = (~shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc));
    }
L_00202ac0:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[2], 3, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_00202ac4:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202ac8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00202acc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_bits_get_size @ 00202ad0 (arm) */
void fn_00202ad0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202ad0:;
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
L_00202ad4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_00202ad8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00202adc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00202ae0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00202ae4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00202ae8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00202aec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00202af0:;
    {
        cpu->r[10] = 0x0000007fu;
    }
L_00202af4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00202af8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00202afc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_00202b00:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 7u, &shc); cpu->r[3] = v;
    }
L_00202b04:;
    {
        uint32_t v = cpu->r[7] & 0x00000007u; cpu->r[1] = v;
    }
L_00202b08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00202b0c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[8], 1, 3u, &shc), 1, 0);
    }
L_00202b10:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00202b14:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[4], 3, 25u, &shc); cpu->r[3] = v;
    }
L_00202b18:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 7u, &shc); cpu->r[2] = v;
    }
L_00202b1c:;
    {
        cpu->r[8] = rd8(cpu->r[12] + - 0x1u);
    }
L_00202b20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00202b24:;
    {
        cpu->r[4] = rd8(cpu->r[12]);
    }
L_00202b28:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00202b2c:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[4] = v;
    }
L_00202b30:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[4] = v;
    }
L_00202b34:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[4]);
    }
L_00202b38:;
    {
        { uint32_t v = cpu->r[4] & 0x00000080u; set_nz(cpu, v); }
    }
L_00202b3c:;
    {
        uint32_t v = cpu->r[4] & 0x000000ffu; cpu->r[4] = v;
    }
L_00202b40:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00202b44:;
    {
        uint32_t v = cpu->r[4] & cpu->r[10]; cpu->r[8] = v;
    }
L_00202b48:;
    {
        uint32_t v = cpu->r[5] & cpu->r[11]; cpu->r[9] = v;
    }
L_00202b4c:;
    {
        uint32_t v = cpu->r[8] | cpu->r[2]; cpu->r[4] = v;
    }
L_00202b50:;
    {
        uint32_t v = cpu->r[9] | cpu->r[3]; cpu->r[5] = v;
    }
L_00202b54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00202afc;
        }
    }
L_00202b58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00202b5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00202b60:;
    {
        wr64(cpu->r[3], ((uint64_t)cpu->r[5] << 32) | cpu->r[4]);
    }
L_00202b64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00202b68:;
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
L_00202b6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_bits_get_block @ 00202b70 (arm) */
void fn_00202b70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202b70:;
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
L_00202b74:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[14] = v1;
    }
L_00202b78:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00202b7c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000008u, 1, 0);
    }
L_00202b80:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00202b84:;
    {
        uint32_t v = cpu->r[14] & 0x00000007u; cpu->r[2] = v;
    }
L_00202b88:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00202b8c:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_00202b90:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00202b94:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_00202b98:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_00202b9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_00202ba0:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00202ba4:;
    {
        cpu->r[14] = rd8(cpu->r[5] + cpu->r[14]);
    }
L_00202ba8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00202bac:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_00202bb0:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_00202bb4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00202bb8:;
    {
        wr8(cpu->r[4], cpu->r[2]);
    }
L_00202bbc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[14] = v1;
    }
L_00202bc0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000008u, 1, 0);
    }
L_00202bc4:;
    {
        uint32_t v = cpu->r[14] & 0x00000007u; cpu->r[2] = v;
    }
L_00202bc8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00202bcc:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_00202bd0:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_00202bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_00202bd8:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00202bdc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[14]);
    }
L_00202be0:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_00202be4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00202be8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00202bec:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[2]);
    }
L_00202bf0:;
    {
        cpu->r[14] = 0x00202bf4u; fn_00202ad0(cpu);
    }
L_00202bf4:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x8u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_00202bf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00202bfc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00202c00:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[7] = v;
    }
L_00202c04:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00202c08:;
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
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00202c0cu)) return;
        }
    }
L_00202c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202c28;
        }
    }
L_00202c10:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00202c14:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00202c18:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_00202c1c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00202c20:;
    {
        wr64(cpu->r[4] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_00202c24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00202c28u)) return;
    }
L_00202c28:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_00202c2c:;
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
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00202c30u)) return;
        }
    }
L_00202c30:;
    {
        goto L_00202c10;
    }
}

/* mpc_bits_log_dec @ 00202c34 (arm) */
void fn_00202c34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202c34:;
    {
        cpu->r[3] = rd32(0x00202c3cu + + 0xf4u);
    }
L_00202c38:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00202c3c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00202c40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00202c48u, cpu->r[3], 0, 0);
    }
L_00202c44:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00202c48:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_00202c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00202c50:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00202c54:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202cd0;
        }
    }
L_00202c58:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00202c5c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00202c60:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00202c64:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_00202c68:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00202c6c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00202c70:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_00202c74:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_00202c78:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00202c7c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_00202c80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00202c84:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_00202c88:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_00202c8c:;
    {
        cpu->r[5] = rd8(cpu->r[4] + - 0x1u);
    }
L_00202c90:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00202c94:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202c98:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202cc8;
        }
    }
L_00202c9c:;
    {
        cpu->r[5] = rd8(cpu->r[4] + - 0x2u);
    }
L_00202ca0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00202ca4:;
    {
        cpu->r[6] = rd8(cpu->r[4] + - 0x3u);
    }
L_00202ca8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 16u, &shc); cpu->r[5] = v;
    }
L_00202cac:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, 24u, &shc); cpu->r[5] = v;
    }
L_00202cb0:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[5], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202cb4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202cc8;
        }
    }
L_00202cb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00202cbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
        }
    }
L_00202cc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd8(cpu->r[4] + - 0x4u);
        }
    }
L_00202cc4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00202cc8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00202ccc:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202cd0:;
    {
        cpu->r[3] = rd32(0x00202cd8u + + 0x5cu);
    }
L_00202cd4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00202cdcu, cpu->r[3], 0, 0);
    }
L_00202cd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00202cdc:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x20u);
    }
L_00202ce0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00202ce4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00202d28;
        }
    }
L_00202ce8:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00202cec:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00202cf0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00202cf4:;
    {
        uint32_t v = cpu->r[4] & 0x00000007u; cpu->r[1] = v;
    }
L_00202cf8:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00202cfc:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 3u, &shc); cpu->r[4] = v;
    }
L_00202d00:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000000u, cpu->r[4], 1, 0);
    }
L_00202d04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00202d08:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_00202d0c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[4]);
    }
L_00202d10:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_00202d14:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00202d18:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00202d1c:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_00202d20:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00202d24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00202d28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00202d2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_00202d38 @ 00202d38 (arm) */
void fn_00202d38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202d38:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_00202d3c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00202d40:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_00202d44:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[3] = v;
    }
L_00202d48:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00202d4c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_00202d50:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_00202d54:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_00202d58:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00202d5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00202d60:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00202d64:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[12]);
    }
L_00202d68:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x1u);
    }
L_00202d6c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00202d70:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202d74:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202da4;
        }
    }
L_00202d78:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x2u);
    }
L_00202d7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_00202d80:;
    {
        cpu->r[4] = rd8(cpu->r[2] + - 0x3u);
    }
L_00202d84:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00202d88:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 24u, &shc); cpu->r[12] = v;
    }
L_00202d8c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202d90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202da4;
        }
    }
L_00202d94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00202d98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
        }
    }
L_00202d9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[2] + - 0x4u);
        }
    }
L_00202da0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_00202da4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00202da8:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00202dac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00202db0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_decoder_set_streaminfo @ 00202db4 (arm) */
void fn_00202db4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202db4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00202db8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x40u);
    }
L_00202dbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00202dc0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00202dc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e0u, 0, 0);
    }
L_00202dc8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00202dcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00202dd0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[6]);
        wr32(cpu->r[13] + 8u, cpu->r[7]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00202dd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00202dd8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00202ddc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x18u);
    }
L_00202de0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00202de4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00202de8:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00202dec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00202df0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202e00;
        }
    }
L_00202df4:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x38u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_00202df8:;
    {
        wr64(cpu->r[4] + + 0x10u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_00202dfc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[6] = v1;
        cpu->r[7] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00202e00u)) return;
    }
L_00202e00:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_00202e04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00202e08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202df4;
        }
    }
L_00202e0c:;
    {
        uint64_t v = rd64(cpu->r[1] + + 0x38u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_00202e10:;
    {
        cpu->r[0] = 0x0000047fu;
    }
L_00202e14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00202e18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00202e1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 1);
    }
L_00202e20:;
    {
        cpu->r[2] = 0x00000480u;
    }
L_00202e24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00202e28:;
    {
        cpu->r[14] = 0x00202e2cu; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_00202e2c:;
    {
        cpu->r[3] = 0x00000480u;
    }
L_00202e30:;
    {
        { uint64_t v = (uint64_t)cpu->r[0] * (uint64_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_00202e34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[7]; cpu->r[7] = v;
    }
L_00202e38:;
    {
        wr64(cpu->r[4] + + 0x10u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_00202e3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[6] = v1;
        cpu->r[7] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00202e40u)) return;
    }
}

/* mpc_decoder_exit @ 00202e40 (arm) */
void fn_00202e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202e40:;
    {
        return fn_00200ae8(cpu);
    }
}

/* mpc_decoder_reset_scf @ 00202e44 (arm) */
void fn_00202e44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202e44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00202e48:;
    {
        cpu->r[2] = 0x00000180u;
    }
L_00202e4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00202e50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00202e54:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00202e58:;
    {
        cpu->r[14] = 0x00202e5cu; imp_memset(cpu); /* memset */
    }
L_00202e5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001b0u, 0, 0);
    }
L_00202e60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00202e64:;
    {
        cpu->r[2] = 0x00000180u;
    }
L_00202e68:;
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
L_00202e6c:;
    {
        imp_memset(cpu); /* tail memset */ return;
    }
}

/* mpc_decoder_setup @ 00202e70 (arm) */
void fn_00202e70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202e70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00202e74:;
    {
        cpu->r[2] = 0x0000a590u;
    }
L_00202e78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00202e7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00202e80:;
    {
        cpu->r[14] = 0x00202e84u; imp_memset(cpu); /* memset */
    }
L_00202e84:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00202e88:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00202e8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00202e90:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00202e94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00202e98:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00202e9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3ff0u << 16);
    }
L_00202ea0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00202ea4:;
    {
        return fn_001f69e0(cpu);
    }
}

/* mpc_decoder_init @ 00202ea8 (arm) */
void fn_00202ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202ea8:;
    {
        cpu->r[1] = rd32(0x00202eb0u + + 0x44u);
    }
L_00202eac:;
    {
        cpu->r[3] = 0x00000081u;
    }
L_00202eb0:;
    {
        cpu->r[2] = rd32(0x00202eb8u + + 0x40u);
    }
L_00202eb4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00202eb8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00202ec0u, cpu->r[1], 0, 0);
    }
L_00202ebc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00202ec0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00202ec8u, cpu->r[2], 0, 0);
    }
L_00202ec4:;
    {
        cpu->r[0] = 0x0000a590u;
    }
L_00202ec8:;
    {
        cpu->r[14] = 0x00202eccu; fn_00200aec(cpu);
    }
L_00202ecc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00202ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00202eec;
        }
    }
L_00202ed4:;
    {
        cpu->r[14] = 0x00202ed8u; fn_00202e70(cpu);
    }
L_00202ed8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202edc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00202ee0:;
    {
        cpu->r[14] = 0x00202ee4u; fn_00202db4(cpu);
    }
L_00202ee4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00202ee8:;
    {
        cpu->r[14] = 0x00202eecu; fn_002073bc(cpu);
    }
L_00202eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00202ef0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00202ef4u)) return;
    }
}

/* mpc_decoder_read_bitstream_sv8 @ 00202efc (arm) */
void fn_00202efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00202efc:;
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
L_00202f00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_00202f04:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00202f08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00202f0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00202f10:;
    {
        cpu->r[2] = rd32(0x00202f18u + + 0xfa8u);
    }
L_00202f14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00202f18:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00202f1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00202f24u, cpu->r[2], 0, 0);
    }
L_00202f20:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00202f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203f1c;
        }
    }
L_00202f28:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00202f2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00202f30:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_00202f34:;
    {
        cpu->r[2] = rd8(cpu->r[1]);
    }
L_00202f38:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x2u);
    }
L_00202f3c:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x1u);
    }
L_00202f40:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00202f44:;
    {
        cpu->r[6] = rd32(0x00202f4cu + + 0xf78u);
    }
L_00202f48:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00202f4c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00202f50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00202f54:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00202f58:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x24u);
    }
L_00202f5c:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00202f60:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00202f64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00202f68:;
    {
        cpu->r[7] = rd8(cpu->r[3] + shifter(cpu->r[12], 2, 1u, &shc));
    }
L_00202f6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00202f70:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00202f74:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x1u);
    }
L_00202f78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204440;
        }
    }
L_00202f7c:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_00202f80:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00202f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_00202f88:;
    {
        cpu->r[12] = rd16(cpu->r[7] + cpu->r[12]);
    }
L_00202f8c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00202f90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00202fa0;
        }
    }
L_00202f94:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00202f98:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00202f9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00202f94;
        }
    }
L_00202fa0:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_00202fa4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00202fa8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00202fac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_00202fb0:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00202fb4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_00202fb8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_00202fbc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00202fc0:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00202fc4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00202fc8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00202fcc:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_00202fd0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_00202fd4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[12], 1, 0);
    }
L_00202fd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc), 1, 0);
    }
L_00202fdc:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_00202fe0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[1] + cpu->r[3]);
    }
L_00202fe4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00202fe8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[5]);
    }
L_00202fec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_00202ff0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000021u, 1, 0);
        }
    }
L_00202ff4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[5]);
        }
    }
L_00202ff8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00202ffc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203000:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00203004:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_00203008:;
    {
        wr32(cpu->r[11] + + 0x24u, cpu->r[9]);
    }
L_0020300c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203f64;
        }
    }
L_00203010:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203014:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00203018:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x4u);
    }
L_0020301c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00203020:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0020304c;
        }
    }
L_00203024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000560u, 0, 0);
    }
L_00203028:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0020302c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00203030:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00203034:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00203038:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0020303c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00203040:;
    {
        wr32(cpu->r[3] + - 0x80u, cpu->r[1]);
    }
L_00203044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00203048:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00203034;
        }
    }
L_0020304c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00203050:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_00203054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203f34;
        }
    }
L_00203058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0020305c:;
    {
        cpu->r[3] = rd32(0x00203064u + + 0xe64u);
    }
L_00203060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00203064:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00203068:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0020306c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000088u, 0, 0);
    }
L_00203070:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_00203074:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00203078:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0020347c;
        }
    }
L_0020307c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203080:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00203084:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00203088:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000016c0u, 0, 0);
    }
L_0020308c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_00203090:;
    {
        goto L_002030ac;
    }
L_00203094:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_00203098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203f14;
        }
    }
L_0020309c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_002030a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_002030a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_002030a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002031ac;
        }
    }
L_002030ac:;
    {
        cpu->r[1] = rd32(cpu->r[2] + - 0x1c0u);
    }
L_002030b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x140u);
    }
L_002030b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_002030b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = (~0x00000000u);
        }
    }
L_002030bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_002030c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002030c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_002030c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203094;
        }
    }
L_002030cc:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_002030d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_002030d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_002030d8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_002030dc:;
    {
        cpu->r[10] = rd8(cpu->r[12]);
    }
L_002030e0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + - 0xcu);
    }
L_002030e4:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x2u);
    }
L_002030e8:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_002030ec:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[1] = v;
    }
L_002030f0:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_002030f4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[1] = v;
    }
L_002030f8:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_002030fc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[10] = v;
    }
L_00203100:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00203104:;
    {
        cpu->r[3] = rd8(cpu->r[5] + shifter(cpu->r[10], 2, 1u, &shc));
    }
L_00203108:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0020310c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203110:;
    {
        cpu->r[10] = rd8(cpu->r[10] + + 0x1u);
    }
L_00203114:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020343c;
        }
    }
L_00203118:;
    {
        cpu->r[9] = rd32(cpu->r[5]);
    }
L_0020311c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00203120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_00203124:;
    {
        cpu->r[10] = rd16(cpu->r[9] + cpu->r[10]);
    }
L_00203128:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0020312c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020313c;
        }
    }
L_00203130:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203134:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_00203138:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203130;
        }
    }
L_0020313c:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203140:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x4u);
    }
L_00203144:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 0);
    }
L_00203148:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[10], 1, 3u, &shc), 1, 0);
    }
L_0020314c:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00203150:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203154:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_00203158:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[12] = v;
    }
L_0020315c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00203160:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00203164:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203168:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[6], 1, 0);
    }
L_0020316c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc), 1, 0);
    }
L_00203170:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_00203174:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s8(cpu->r[5] + cpu->r[3]);
    }
L_00203178:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x1c0u);
    }
L_0020317c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00203180:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203184:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_00203188:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_0020318c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + - 0x80u, cpu->r[3]);
        }
    }
L_00203190:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x140u);
    }
L_00203194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203198:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] & 0x00000003u; cpu->r[10] = v;
        }
    }
L_0020319c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2], cpu->r[10]);
        }
    }
L_002031a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_002031a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_002031a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002030ac;
        }
    }
L_002031ac:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_002031b0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_002031b4:;
    {
        cpu->r[11] = rd32(0x002031bcu + + 0xd10u);
    }
L_002031b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00001500u, 0, 0);
    }
L_002031bc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x000001b0u, 0, 0);
    }
L_002031c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_002031c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_002031c8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_002031cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_002031d0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_002031d4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_002031d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_002031dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_002031e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_002031e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00001600u, 0, 0);
    }
L_002031e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00001640u, 0, 0);
    }
L_002031ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_002031f0:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_002031f4:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x140u);
    }
L_002031f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_002031fc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_00203200:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00203204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00203208:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0020320c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00203210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203410;
        }
    }
L_00203214:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_00203218:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0020321c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203890;
        }
    }
L_00203220:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00203224:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203228:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020322c:;
    {
        cpu->r[6] = rd8(cpu->r[1]);
    }
L_00203230:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_00203234:;
    {
        cpu->r[5] = rd8(cpu->r[1] + + 0x2u);
    }
L_00203238:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_0020323c:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[5] = v;
    }
L_00203240:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00203244:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00203248:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0020324c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[5] = v;
    }
L_00203250:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_00203254:;
    {
        cpu->r[6] = rd8(cpu->r[3] + shifter(cpu->r[5], 2, 1u, &shc));
    }
L_00203258:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0020325c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00203260:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x1u);
    }
L_00203264:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203838;
        }
    }
L_00203268:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x88u);
    }
L_0020326c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00203270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00203274:;
    {
        cpu->r[5] = rd16(cpu->r[6] + cpu->r[5]);
    }
L_00203278:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0020327c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020328c;
        }
    }
L_00203280:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[5] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203284:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00203288:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203280;
        }
    }
L_0020328c:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203290:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203294:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00203298:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_0020329c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_002032a0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_002032a4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_002032a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_002032ac:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[1] = v;
    }
L_002032b0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002032b4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_002032b8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002032bc:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_002032c0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8cu);
    }
L_002032c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc), 1, 0);
    }
L_002032c8:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_002032cc:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[5] + cpu->r[3]);
    }
L_002032d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000040u, 1, 1);
    }
L_002032d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203854;
        }
    }
L_002032d8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
    }
L_002032dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 0);
    }
L_002032e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_002032e4:;
    {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
    }
L_002032e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 0);
    }
L_002032ec:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_002032f0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_002032f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_002032f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002032fc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00203300:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00203304:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00203308:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0020330c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00203310:;
    {
        goto L_0020332c;
    }
L_00203314:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00203318:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0020331c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00203320:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00203324:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00203328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203410;
        }
    }
L_0020332c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00203330:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00203334:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203314;
        }
    }
L_00203338:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0020333c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203340:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203344:;
    {
        cpu->r[8] = rd8(cpu->r[0]);
    }
L_00203348:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_0020334c:;
    {
        cpu->r[7] = rd8(cpu->r[0] + + 0x2u);
    }
L_00203350:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x1u);
    }
L_00203354:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[7] = v;
    }
L_00203358:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_0020335c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00203360:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00203364:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00203368:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0020336c:;
    {
        cpu->r[8] = rd8(cpu->r[6] + shifter(cpu->r[7], 2, 1u, &shc));
    }
L_00203370:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00203374:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00203378:;
    {
        cpu->r[6] = rd8(cpu->r[6] + + 0x1u);
    }
L_0020337c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203484;
        }
    }
L_00203380:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00203384:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00203388:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0020338c:;
    {
        cpu->r[7] = rd16(cpu->r[8] + cpu->r[7]);
    }
L_00203390:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_00203394:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002033a4;
        }
    }
L_00203398:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[6] + + 0x4u);
        cpu->r[6] = wb_tmp;
    }
L_0020339c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_002033a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203398;
        }
    }
L_002033a4:;
    {
        cpu->r[7] = rd8(cpu->r[6] + + 0x2u);
    }
L_002033a8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_002033ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[7], 1, 3u, &shc), 1, 0);
    }
L_002033b0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002033b4:;
    {
        cpu->r[0] = rd8(cpu->r[6] + + 0x2u);
    }
L_002033b8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_002033bc:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_002033c0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002033c4:;
    {
        cpu->r[0] = rd8(cpu->r[6] + + 0x2u);
    }
L_002033c8:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[6] + + 0x3u);
    }
L_002033cc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_002033d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc), 1, 0);
    }
L_002033d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_002033d8:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_002033dc:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[1] + cpu->r[0]);
    }
L_002033e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001fu, 1, 1);
    }
L_002033e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002034a4;
        }
    }
L_002033e8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_002033ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_002033f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_002033f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 0);
    }
L_002033f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_002033fc:;
    {
        uint32_t v = cpu->r[1] & 0x0000007fu; cpu->r[1] = v;
    }
L_00203400:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 0);
    }
L_00203404:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00203408:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0020340c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020332c;
        }
    }
L_00203410:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00203414:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x1c0u);
    }
L_00203418:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0020341c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x80u);
    }
L_00203420:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002034e4;
        }
    }
L_00203424:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00203428:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020342c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002034e4;
        }
    }
L_00203430:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00203434:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_00203438:;
    {
        goto L_0020320c;
    }
L_0020343c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00203440:;
    {
        cpu->r[10] = (uint32_t)((int8_t)cpu->r[10]);
    }
L_00203444:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_00203448:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0020344c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00203450:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00203454:;
    {
        goto L_00203178;
    }
L_00203458:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x30u);
    }
L_0020345c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00203460:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00203464:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_00203468:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0020346c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_00203470:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00203474:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_00203478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203584;
        }
    }
L_0020347c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00203480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00203484u)) return;
    }
L_00203484:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[6]);
    }
L_00203488:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 0);
    }
L_0020348c:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001fu, 1, 1);
    }
L_00203490:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[1] = v;
    }
L_00203494:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[5], 1, 3u, &shc), 1, 0);
    }
L_00203498:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_0020349c:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_002034a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002033e8;
        }
    }
L_002034a4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_002034a8:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_002034ac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 0);
    }
L_002034b0:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[1] = v;
    }
L_002034b4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002034b8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 3u, &shc); cpu->r[5] = v;
    }
L_002034bc:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_002034c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_002034c4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002034c8:;
    {
        cpu->r[5] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_002034cc:;
    {
        cpu->r[0] = rd8(cpu->r[0] + - 0x1u);
    }
L_002034d0:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_002034d4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_002034d8:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[6] = v;
    }
L_002034dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_002034e0:;
    {
        goto L_002033e8;
    }
L_002034e4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_002034e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_002034ec:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_002034f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_002034f4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_002034f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_002034fc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00203500:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00203504:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_00203508:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_0020350c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_00203510:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_00203514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002031dc;
        }
    }
L_00203518:;
    {
        cpu->r[9] = rd32(0x00203520u + + 0x9b0u);
    }
L_0020351c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00203520:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203524:;
    {
        cpu->r[12] = rd32(0x0020352cu + + 0x9a8u);
    }
L_00203528:;
    {
        cpu->r[1] = rd32(0x00203530u + + 0x9a8u);
    }
L_0020352c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_00203530:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_00203534:;
    {
        cpu->r[1] = add_flags(cpu, 0x0020353cu, cpu->r[1], 0, 0);
    }
L_00203538:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_0020353c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00203540:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00203544:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00203548:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0020354c:;
    {
        cpu->r[6] = rd32(0x00203554u + + 0x99cu);
    }
L_00203550:;
    {
        cpu->r[7] = rd32(0x00203558u + + 0x994u);
    }
L_00203554:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00203558:;
    {
        cpu->r[1] = rd32(0x00203560u + + 0x97cu);
    }
L_0020355c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[9]);
    }
L_00203560:;
    {
        cpu->r[1] = add_flags(cpu, 0x00203568u, cpu->r[1], 0, 0);
    }
L_00203564:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_00203568:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_0020356c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_00203570:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_00203574:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_00203578:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0020357c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_00203580:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[7]);
    }
L_00203584:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_00203588:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_0020358c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_00203594:;
    {
        cpu->r[2] = rd16(cpu->r[9]);
    }
L_00203598:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_0020359c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000330u, 0, 0);
    }
L_002035a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000378u, 0, 0);
    }
L_002035a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_002035a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_002035ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_002035b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_002035b4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_002035b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_002035bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002036c4;
        }
    }
L_002035c0:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_002035c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_002035c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203700;
        }
    }
L_002035cc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_002035d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002038e4;
        }
    }
L_002035d4:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_002035d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203c9c;
        }
    }
L_002035dc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 1);
    }
L_002035e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00203b58;
        }
    }
L_002035e4:;
    {
        cpu->r[3] = rd32(0x002035ecu + + 0x8f4u);
    }
L_002035e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_002035ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_002035f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_002035f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_002035f8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_002035fc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00203600:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_00203604:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_00203608:;
    {
        cpu->r[7] = rd8(cpu->r[0]);
    }
L_0020360c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00203610:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x2u);
    }
L_00203614:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00203618:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[2] = v;
    }
L_0020361c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00203620:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00203624:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00203628:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0020362c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + shifter(cpu->r[7], 2, 1u, &shc));
    }
L_00203630:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00203634:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203638:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x1u);
    }
L_0020363c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002036e4;
        }
    }
L_00203640:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_00203644:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00203648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0020364c:;
    {
        cpu->r[7] = rd16(cpu->r[8] + cpu->r[7]);
    }
L_00203650:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00203654:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203664;
        }
    }
L_00203658:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_0020365c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00203660:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203658;
        }
    }
L_00203664:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203668:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x4u);
    }
L_0020366c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_00203670:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[8], 1, 3u, &shc), 1, 0);
    }
L_00203674:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00203678:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_0020367c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00203680:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00203684:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00203688:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_0020368c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00203690:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_00203694:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, (cpu->r[0] & 0xffu), &shc), 1, 0);
    }
L_00203698:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_0020369c:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s8(cpu->r[7] + cpu->r[0]);
    }
L_002036a0:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_002036a4:;
    {
        wr8(cpu->r[13] + + 0x6cu, cpu->r[7]);
    }
L_002036a8:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 24); cpu->r[2] = (uint32_t)(v >> 28); }
    }
L_002036ac:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 28); cpu->r[3] = (uint32_t)(v >> 28); }
    }
L_002036b0:;
    {
        wr16(cpu->r[1] + + 0x2u, cpu->r[2]);
    }
L_002036b4:;
    {
        wr16(cpu->r[1], cpu->r[3]);
    }
L_002036b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_002036bc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_002036c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203604;
        }
    }
L_002036c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_002036c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_002036cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_002036d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x80u);
    }
L_002036d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203458;
        }
    }
L_002036d8:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_002036dc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_002036e0:;
    {
        goto L_002035b8;
    }
L_002036e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_002036e8:;
    {
        cpu->r[7] = (uint32_t)((int8_t)cpu->r[7]);
    }
L_002036ec:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_002036f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_002036f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_002036f8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_002036fc:;
    {
        goto L_002036a0;
    }
L_00203700:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203704:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00203708:;
    {
        cpu->r[3] = rd32(0x00203710u + + 0x7d0u);
    }
L_0020370c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_00203710:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00203714:;
    {
        cpu->r[7] = 0x00000006u;
    }
L_00203718:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0020371c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00203720:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000088u, 0, 0);
    }
L_00203724:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_00203728:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_0020372c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[5] = v1;
    }
L_00203730:;
    {
        cpu->r[6] = rd8(cpu->r[0]);
    }
L_00203734:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00203738:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x2u);
    }
L_0020373c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00203740:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00203744:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00203748:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0020374c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[6] = v;
    }
L_00203750:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00203754:;
    {
        cpu->r[3] = rd8(cpu->r[12] + shifter(cpu->r[6], 2, 1u, &shc));
    }
L_00203758:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0020375c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203760:;
    {
        cpu->r[6] = rd8(cpu->r[6] + + 0x1u);
    }
L_00203764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020381c;
        }
    }
L_00203768:;
    {
        cpu->r[8] = rd32(cpu->r[12]);
    }
L_0020376c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00203770:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_00203774:;
    {
        cpu->r[6] = rd16(cpu->r[8] + cpu->r[6]);
    }
L_00203778:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0020377c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020378c;
        }
    }
L_00203780:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[6] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203784:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_00203788:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203780;
        }
    }
L_0020378c:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203790:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_00203794:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_00203798:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_0020379c:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_002037a0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_002037a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_002037a8:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_002037ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002037b0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_002037b4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002037b8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_002037bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, (cpu->r[0] & 0xffu), &shc), 1, 0);
    }
L_002037c0:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[0] = v;
    }
L_002037c4:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[12] + cpu->r[0]);
    }
L_002037c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_002037cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000114u, 0, 0);
    }
L_002037d0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[6] + + 0x14u);
    }
L_002037d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[3]);
    }
L_002037d8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[6] + + 0x94u);
    }
L_002037dc:;
    {
        wr16(cpu->r[1], cpu->r[0]);
    }
L_002037e0:;
    {
        wr16(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_002037e4:;
    {
        wr16(cpu->r[1] + + 0x2u, cpu->r[3]);
    }
L_002037e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_002037ec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_002037f0:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x194u);
    }
L_002037f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002038dc;
        }
    }
L_002037f8:;
    {
        cpu->r[3] = (uint32_t)((int8_t)cpu->r[3]);
    }
L_002037fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_00203800:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 3, 1u, &shc), 0, 0);
    }
L_00203804:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_00203808:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_0020380c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00203810:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00203814:;
    {
        cpu->r[12] = rd32(cpu->r[3] + - 0xcu);
    }
L_00203818:;
    {
        goto L_0020372c;
    }
L_0020381c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00203820:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[6]);
    }
L_00203824:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_00203828:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0020382c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00203830:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00203834:;
    {
        goto L_002037c8;
    }
L_00203838:;
    {
        cpu->r[5] = (uint32_t)((int8_t)cpu->r[5]);
    }
L_0020383c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00203840:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000040u, 1, 1);
    }
L_00203844:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00203848:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_0020384c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00203850:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002032d8;
        }
    }
L_00203854:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_00203858:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 0);
    }
L_0020385c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[3] = v;
    }
L_00203860:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00203864:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_00203868:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0020386c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00203870:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00203874:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_00203878:;
    {
        cpu->r[2] = rd8(cpu->r[2] + - 0x1u);
    }
L_0020387c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00203880:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00203884:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[5] = v;
    }
L_00203888:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_0020388c:;
    {
        goto L_002032d8;
    }
L_00203890:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203894:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00203898:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 0);
    }
L_0020389c:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[2] = v;
    }
L_002038a0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_002038a4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_002038a8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_002038ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_002038b0:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_002038b4:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_002038b8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + - 0x1u);
    }
L_002038bc:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_002038c0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_002038c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002038c8:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_002038cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 0);
    }
L_002038d0:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_002038d4:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_002038d8:;
    {
        goto L_002032f0;
    }
L_002038dc:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_002038e0:;
    {
        goto L_002036c4;
    }
L_002038e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_002038e8:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_002038ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_002038f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_002038f4:;
    {
        cpu->r[3] = rd32(0x002038fcu + + 0x5f8u);
    }
L_002038f8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_002038fc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00203900:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00203904:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00203908:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[6] = v1;
    }
L_0020390c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00203910:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_00203914:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_00203918:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x2u);
    }
L_0020391c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00203920:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00203924:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00203928:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0020392c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 10u, &shc); cpu->r[3] = v;
    }
L_00203930:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00203934:;
    {
        cpu->r[2] = rd8(cpu->r[7] + shifter(cpu->r[3], 2, 1u, &shc));
    }
L_00203938:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0020393c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00203940:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1u);
    }
L_00203944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203b04;
        }
    }
L_00203948:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0020394c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00203950:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_00203954:;
    {
        cpu->r[2] = rd16(cpu->r[9] + cpu->r[1]);
    }
L_00203958:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0020395c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020396c;
        }
    }
L_00203960:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[2] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203964:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00203968:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203960;
        }
    }
L_0020396c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203970:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_00203974:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00203978:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_0020397c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00203980:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203984:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00203988:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[2] = v;
    }
L_0020398c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00203990:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203994:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00203998:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_0020399c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc), 1, 0);
    }
L_002039a0:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_002039a4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[11] + cpu->r[3]);
    }
L_002039a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_002039ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_002039b0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_002039b4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203ac4;
        }
    }
L_002039b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_002039bc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_002039c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_002039c4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = sub_flags(cpu, 0x00000012u, cpu->r[1], 1, 0);
        }
    }
L_002039c8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_002039cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_002039d0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_002039d4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_002039d8:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_002039dc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_002039e0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_002039e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 5u, &shc), 0, 0);
    }
L_002039e8:;
    {
        cpu->r[9] = rd32(cpu->r[4]);
    }
L_002039ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 7u, &shc), 0, 0);
    }
L_002039f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_002039f4:;
    {
        cpu->r[7] = rd8(cpu->r[6] + + 0x11u);
    }
L_002039f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_002039fc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00203a00:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_00203a04:;
    {
        uint32_t v = cpu->r[11] & 0x00000007u; cpu->r[5] = v;
    }
L_00203a08:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00203a0c:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 3u, &shc); cpu->r[11] = v;
    }
L_00203a10:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000010u, cpu->r[5], 1, 0);
    }
L_00203a14:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_00203a18:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00203a1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00203a20:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00203a24:;
    {
        cpu->r[9] = rd8(cpu->r[9] + cpu->r[11]);
    }
L_00203a28:;
    {
        cpu->r[11] = rd8(cpu->r[6] + - 0x1u);
    }
L_00203a2c:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[11] = v;
    }
L_00203a30:;
    {
        uint32_t v = shifter(cpu->r[11], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[11] = v;
    }
L_00203a34:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203a6c;
        }
    }
L_00203a38:;
    {
        cpu->r[2] = rd8(cpu->r[6] + - 0x2u);
    }
L_00203a3c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000018u, 1, 1);
    }
L_00203a40:;
    {
        cpu->r[9] = rd8(cpu->r[6] + - 0x3u);
    }
L_00203a44:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00203a48:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[9], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00203a4c:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[2], 3, (cpu->r[5] & 0xffu), &shc); cpu->r[11] = v;
    }
L_00203a50:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203a6c;
        }
    }
L_00203a54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00203a58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[6] + - 0x4u);
        }
    }
L_00203a5c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_00203a60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000020u, cpu->r[5], 1, 0);
        }
    }
L_00203a64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_00203a68:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] | shifter(cpu->r[9], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_00203a6c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203a70:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00203a74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_00203a78:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00203a7c:;
    {
        uint32_t v = cpu->r[11] & cpu->r[7]; cpu->r[7] = v;
    }
L_00203a80:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00203a84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 7u, &shc), 0, 0);
    }
L_00203a88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_00203a8c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00203a90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203b20;
        }
    }
L_00203a94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00203a98:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00203a9c:;
    {
        cpu->r[0] = 0x00000012u;
    }
L_00203aa0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00203aa4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00203aa8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00203aac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00203ab0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
        }
    }
L_00203ab4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[6] | shifter(cpu->r[8], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_00203ab8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000080u, 1, 0);
        }
    }
L_00203abc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203ac0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203aa0;
        }
    }
L_00203ac4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_00203ac8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00203acc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = (~cpu->r[6]);
        }
    }
L_00203ad0:;
    {
        { uint32_t v = cpu->r[6] & 0x00020000u; set_nz(cpu, v); }
    }
L_00203ad4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00203ad8:;
    {
        wr16(cpu->r[10] + cpu->r[3], cpu->r[11]);
    }
L_00203adc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203ce0;
        }
    }
L_00203ae0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00203ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000024u, 1, 1);
    }
L_00203ae8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203d30;
        }
    }
L_00203aec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000012u, 0, 0);
    }
L_00203af0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_00203af4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000024u, 1, 1);
    }
L_00203af8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203908;
        }
    }
L_00203afc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_00203b00:;
    {
        goto L_002036c4;
    }
L_00203b04:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00203b08:;
    {
        cpu->r[1] = (uint32_t)((int8_t)cpu->r[1]);
    }
L_00203b0c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[3] = v;
    }
L_00203b10:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00203b14:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_00203b18:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00203b1c:;
    {
        goto L_002039a8;
    }
L_00203b20:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00203b24:;
    {
        uint32_t v = cpu->r[5] & 0x00000007u; cpu->r[11] = v;
    }
L_00203b28:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
    }
L_00203b2c:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 31u, &shc); cpu->r[5] = v;
    }
L_00203b30:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00203b34:;
    {
        wr32(cpu->r[4], cpu->r[9]);
    }
L_00203b38:;
    {
        cpu->r[6] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_00203b3c:;
    {
        cpu->r[5] = rd8(cpu->r[9] + - 0x1u);
    }
L_00203b40:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_00203b44:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[5] = v;
    }
L_00203b48:;
    {
        uint32_t v = cpu->r[5] & 0x00000001u; cpu->r[5] = v;
    }
L_00203b4c:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[7], 2, 1u, &shc); cpu->r[7] = v;
    }
L_00203b50:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_00203b54:;
    {
        goto L_00203a94;
    }
L_00203b58:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000008u, 1, 1);
    }
L_00203b5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00203d38;
        }
    }
L_00203b60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00203b64:;
    {
        cpu->r[3] = 0x00000110u;
    }
L_00203b68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203b6c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00203b70:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00203b74:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[2] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_00203b78:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x214u);
    }
L_00203b7c:;
    {
        cpu->r[3] = rd32(0x00203b84u + + 0x35cu);
    }
L_00203b80:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[7] = v;
    }
L_00203b84:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00203b88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x000002a8u, 1, 0);
    }
L_00203b8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000330u, 1, 0);
    }
L_00203b90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00203b94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00203b98:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_00203b9c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00203ba0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00203ba4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_00203ba8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000004u;
        }
    }
L_00203bac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00203bb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_00203bb4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203bb8:;
    {
        cpu->r[8] = rd8(cpu->r[1]);
    }
L_00203bbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00203bc0:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x2u);
    }
L_00203bc4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_00203bc8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00203bcc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + - 0xcu);
    }
L_00203bd0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00203bd4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00203bd8:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00203bdc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[8] = v;
    }
L_00203be0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00203be4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + shifter(cpu->r[8], 2, 1u, &shc));
    }
L_00203be8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00203bec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00203bf0:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x1u);
    }
L_00203bf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203c80;
        }
    }
L_00203bf8:;
    {
        cpu->r[10] = rd32(cpu->r[0]);
    }
L_00203bfc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00203c00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00203c04:;
    {
        cpu->r[8] = rd16(cpu->r[10] + cpu->r[8]);
    }
L_00203c08:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00203c0c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203c1c;
        }
    }
L_00203c10:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[8] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203c14:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00203c18:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203c10;
        }
    }
L_00203c1c:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203c20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00203c24:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
    }
L_00203c28:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[8], 1, 3u, &shc), 1, 0);
    }
L_00203c2c:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_00203c30:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203c34:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_00203c38:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[1] = v;
    }
L_00203c3c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00203c40:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203c44:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00203c48:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_00203c4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, (cpu->r[1] & 0xffu), &shc), 1, 0);
    }
L_00203c50:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[1] = v;
    }
L_00203c54:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s8(cpu->r[0] + cpu->r[1]);
    }
L_00203c58:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_00203c5c:;
    {
        wr16(cpu->r[5] + cpu->r[12], cpu->r[8]);
    }
L_00203c60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_00203c64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000048u, 1, 1);
    }
L_00203c68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002036c4;
        }
    }
L_00203c6c:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_00203c70:;
    {
        uint32_t v = cpu->r[8] ^ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00203c74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[8], 1, 31u, &shc), 1, 0);
    }
L_00203c78:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 3, 1u, &shc), 0, 0);
    }
L_00203c7c:;
    {
        goto L_00203ba0;
    }
L_00203c80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00203c84:;
    {
        cpu->r[8] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_00203c88:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_00203c8c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00203c90:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00203c94:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00203c98:;
    {
        goto L_00203c58;
    }
L_00203c9c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203ca0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00203ca4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00203ca8:;
    {
        cpu->r[14] = 0x00203cacu; fn_00207138(cpu);
    }
L_00203cac:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[2] = v;
    }
L_00203cb0:;
    {
        cpu->r[3] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00203cb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 3, 24u, &shc), 0, 0);
    }
L_00203cb8:;
    {
        cpu->r[0] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00203cbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000001fcu, 1, 0);
    }
L_00203cc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_00203cc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00203cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00203ccc:;
    {
        wr16(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_00203cd0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00203cd4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000048u, 1, 1);
    }
L_00203cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203ca4;
        }
    }
L_00203cdc:;
    {
        goto L_002036c4;
    }
L_00203ce0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203ce4:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00203ce8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00203cec:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[2] = v;
    }
L_00203cf0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00203cf4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_00203cf8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_00203cfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00203d00:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00203d04:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_00203d08:;
    {
        cpu->r[1] = rd8(cpu->r[1] + - 0x1u);
    }
L_00203d0c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00203d10:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00203d14:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_00203d18:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00203d1c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00203d20:;
    {
        wr16(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_00203d24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00203d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000024u, 1, 1);
    }
L_00203d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203aec;
        }
    }
L_00203d30:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00203d34:;
    {
        goto L_00203ad0;
    }
L_00203d38:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203d3c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00203d40:;
    {
        cpu->r[2] = rd32(0x00203d48u + + 0x19cu);
    }
L_00203d44:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00203d48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_00203d4c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], 0x00000009u, 1, 0);
    }
L_00203d50:;
    {
        cpu->r[1] = (~shifter(cpu->r[1], 2, (cpu->r[12] & 0xffu), &shc));
    }
L_00203d54:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00203d58:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00203d5c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00203d60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00203d64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00203d68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00203d6c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_00203d70:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[9] = v0;
        cpu->r[10] = v1;
    }
L_00203d74:;
    {
        cpu->r[6] = rd8(cpu->r[9]);
    }
L_00203d78:;
    {
        cpu->r[2] = rd8(cpu->r[9] + + 0x1u);
    }
L_00203d7c:;
    {
        cpu->r[1] = rd8(cpu->r[9] + + 0x2u);
    }
L_00203d80:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00203d84:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00203d88:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00203d8c:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00203d90:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[2] = v;
    }
L_00203d94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00203d98:;
    {
        cpu->r[1] = rd8(cpu->r[0] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_00203d9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00203da0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00203da4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_00203da8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203ef8;
        }
    }
L_00203dac:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00203db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_00203db4:;
    {
        cpu->r[1] = rd16(cpu->r[7] + cpu->r[1]);
    }
L_00203db8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00203dbc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203dcc;
        }
    }
L_00203dc0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        cpu->r[1] = rd16(cpu->r[2] + + 0x4u);
        cpu->r[2] = wb_tmp;
    }
L_00203dc4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00203dc8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203dc0;
        }
    }
L_00203dcc:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_00203dd0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_00203dd4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[1], 1, 3u, &shc), 1, 0);
    }
L_00203dd8:;
    {
        wr32(cpu->r[4], cpu->r[9]);
    }
L_00203ddc:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_00203de0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00203de4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_00203de8:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[1] = v;
    }
L_00203dec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00203df0:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_00203df4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x3u);
    }
L_00203df8:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[1], 1, 0);
    }
L_00203dfc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[6], 1, (cpu->r[1] & 0xffu), &shc), 1, 0);
    }
L_00203e00:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[1] = v;
    }
L_00203e04:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[9] + cpu->r[1]);
    }
L_00203e08:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000009u, 1, 1);
    }
L_00203e0c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_00203e10:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00203e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00203ea0;
        }
    }
L_00203e18:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203e1c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00203e20:;
    {
        cpu->r[9] = rd32(cpu->r[4]);
    }
L_00203e24:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_00203e28:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_00203e2c:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[2] = v;
    }
L_00203e30:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00203e34:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_00203e38:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_00203e3c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_00203e40:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00203e44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_00203e48:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00203e4c:;
    {
        cpu->r[6] = rd8(cpu->r[9] + cpu->r[6]);
    }
L_00203e50:;
    {
        cpu->r[9] = rd8(cpu->r[1] + - 0x1u);
    }
L_00203e54:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00203e58:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00203e5c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203e8c;
        }
    }
L_00203e60:;
    {
        cpu->r[9] = rd8(cpu->r[1] + - 0x2u);
    }
L_00203e64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00203e68:;
    {
        cpu->r[11] = rd8(cpu->r[1] + - 0x3u);
    }
L_00203e6c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 16u, &shc); cpu->r[9] = v;
    }
L_00203e70:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[11], 2, 24u, &shc); cpu->r[9] = v;
    }
L_00203e74:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[9], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00203e78:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203e8c;
        }
    }
L_00203e7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00203e80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000020u, cpu->r[2], 1, 0);
        }
    }
L_00203e84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd8(cpu->r[1] + - 0x4u);
        }
    }
L_00203e88:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] | shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_00203e8c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00203e90:;
    {
        uint32_t v = cpu->r[6] & cpu->r[11]; cpu->r[6] = v;
    }
L_00203e94:;
    {
        uint32_t v = cpu->r[10] | cpu->r[6]; cpu->r[2] = v;
    }
L_00203e98:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00203e9c:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00203ea0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00203ea4:;
    {
        cpu->r[10] = rd16(cpu->r[1]);
    }
L_00203ea8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_00203eac:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00203eb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00203eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000048u, 1, 1);
    }
L_00203eb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203d70;
        }
    }
L_00203ebc:;
    {
        goto L_002036c4;
    }
L_00203ef8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_00203efc:;
    {
        cpu->r[2] = (uint32_t)((int8_t)cpu->r[2]);
    }
L_00203f00:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[6] = v;
    }
L_00203f04:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00203f08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[1], 1, 3u, &shc), 1, 0);
    }
L_00203f0c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00203f10:;
    {
        goto L_00203e08;
    }
L_00203f14:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00203f18:;
    {
        goto L_002030cc;
    }
L_00203f1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00203f20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00203f24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00203f28:;
    {
        cpu->r[14] = 0x00203f2cu; fn_00202c34(cpu);
    }
L_00203f2c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_00203f30:;
    {
        goto L_00202ff8;
    }
L_00203f34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00203f38:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00203f3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00203f40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_00203f44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00203f48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00203f4c:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_00203f50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_00203f54:;
    {
        wr8(cpu->r[3] + - 0x20u, cpu->r[1]);
    }
L_00203f58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00203f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00203f48;
        }
    }
L_00203f60:;
    {
        goto L_00203058;
    }
L_00203f64:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00203f68:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00203f6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00203f70:;
    {
        cpu->r[1] = rd8(cpu->r[2]);
    }
L_00203f74:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00203f78:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x2u);
    }
L_00203f7c:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x1u);
    }
L_00203f80:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00203f84:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203f88:;
    {
        cpu->r[5] = rd32(0x00203f90u + - 0xa8u);
    }
L_00203f8c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00203f90:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00203f94:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00203f98:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00203f9c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00203fa0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00203fa4:;
    {
        cpu->r[6] = rd8(cpu->r[3] + shifter(cpu->r[12], 2, 1u, &shc));
    }
L_00203fa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00203fac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00203fb0:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x1u);
    }
L_00203fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204424;
        }
    }
L_00203fb8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00203fbc:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00203fc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00203fc4:;
    {
        cpu->r[12] = rd16(cpu->r[6] + cpu->r[12]);
    }
L_00203fc8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00203fcc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00203fdc;
        }
    }
L_00203fd0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00203fd4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00203fd8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00203fd0;
        }
    }
L_00203fdc:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203fe0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00203fe4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00203fe8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00203fec:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00203ff0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00203ff4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00203ff8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00203ffc:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[2] = v;
    }
L_00204000:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00204004:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00204008:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_0020400c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_00204010:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_00204014:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc), 1, 0);
    }
L_00204018:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_0020401c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s8(cpu->r[12] + cpu->r[3]);
    }
L_00204020:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00204024:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000540u, 0, 0);
    }
L_00204028:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0020402c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_00204030:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204034:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[1]);
    }
L_00204038:;
    {
        cpu->r[0] = rd8(cpu->r[2]);
    }
L_0020403c:;
    {
        cpu->r[6] = rd8(cpu->r[2] + + 0x1u);
    }
L_00204040:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_00204044:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_00204048:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[1] = v;
    }
L_0020404c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204050:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00204054:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00204058:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0020405c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[6] = v;
    }
L_00204060:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00204064:;
    {
        cpu->r[7] = rd8(cpu->r[3] + shifter(cpu->r[6], 2, 1u, &shc));
    }
L_00204068:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0020406c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00204070:;
    {
        cpu->r[6] = rd8(cpu->r[6] + + 0x1u);
    }
L_00204074:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204408;
        }
    }
L_00204078:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_0020407c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00204080:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00204084:;
    {
        cpu->r[6] = rd16(cpu->r[7] + cpu->r[6]);
    }
L_00204088:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_0020408c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020409c;
        }
    }
L_00204090:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[6] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00204094:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00204098:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204090;
        }
    }
L_0020409c:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0x2u);
    }
L_002040a0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_002040a4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_002040a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 3u, &shc), 1, 0);
    }
L_002040ac:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_002040b0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002040b4:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[5]);
    }
L_002040b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_002040bc:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[2] = v;
    }
L_002040c0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_002040c4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002040c8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002040cc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_002040d0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x4u);
    }
L_002040d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, (cpu->r[2] & 0xffu), &shc), 1, 0);
    }
L_002040d8:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_002040dc:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[6] + cpu->r[3]);
    }
L_002040e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_002040e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000560u, 0, 0);
    }
L_002040e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_002040ec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_002040f0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[6]);
    }
L_002040f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_002040f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000011u, 1, 0);
        }
    }
L_002040fc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_00204100:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000000fu, 1, 1);
    }
L_00204104:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00204108:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000011u, 1, 0);
        }
    }
L_0020410c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_00204110:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[6]);
        }
    }
L_00204114:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00204118:;
    {
        if (cond_test(cpu, 14)) {
        goto L_002042dc;
        }
    }
L_0020411c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00204120:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000540u, 0, 0);
    }
L_00204124:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00204128:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0020412c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00001500u, 0, 0);
    }
L_00204130:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00204134:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000034u, 0, 0);
    }
L_00204138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0020413c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00204140:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x4u);
    }
L_00204144:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204148:;
    {
        cpu->r[8] = rd8(cpu->r[12]);
    }
L_0020414c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00204150:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x2u);
    }
L_00204154:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_00204158:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[1] = v;
    }
L_0020415c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00204160:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00204164:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000088u, 0, 0);
        }
    }
L_00204168:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0020416c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00204170:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[8] = v;
    }
L_00204174:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00204178:;
    {
        cpu->r[3] = rd8(cpu->r[7] + shifter(cpu->r[8], 2, 1u, &shc));
    }
L_0020417c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00204180:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00204184:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x1u);
    }
L_00204188:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002043ec;
        }
    }
L_0020418c:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_00204190:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00204194:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00204198:;
    {
        cpu->r[8] = rd16(cpu->r[10] + cpu->r[8]);
    }
L_0020419c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_002041a0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002041b0;
        }
    }
L_002041a4:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[8] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_002041a8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_002041ac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002041a4;
        }
    }
L_002041b0:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x2u);
    }
L_002041b4:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x4u);
    }
L_002041b8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_002041bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[8], 1, 3u, &shc), 1, 0);
    }
L_002041c0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_002041c4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_002041c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_002041cc:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_002041d0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002041d4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_002041d8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002041dc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_002041e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc), 1, 0);
    }
L_002041e4:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_002041e8:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s8(cpu->r[7] + cpu->r[3]);
    }
L_002041ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x4u);
    }
L_002041f0:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_002041f4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_002041f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x7cu);
    }
L_002041fc:;
    {
        sub_flags(cpu, cpu->r[8], 0x0000000fu, 1, 1);
    }
L_00204200:;
    {
        wr32(cpu->r[2] + - 0x8u, cpu->r[8]);
    }
L_00204204:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000011u, 1, 0);
        }
    }
L_00204208:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2] + - 0x8u, cpu->r[8]);
        }
    }
L_0020420c:;
    {
        cpu->r[8] = rd8(cpu->r[12]);
    }
L_00204210:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00204214:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x2u);
    }
L_00204218:;
    {
        cpu->r[3] = rd8(cpu->r[12] + + 0x1u);
    }
L_0020421c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00204220:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204224:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00204228:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[1] = v;
    }
L_0020422c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000088u, 0, 0);
        }
    }
L_00204230:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00204234:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00204238:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[8] = v;
    }
L_0020423c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00204240:;
    {
        cpu->r[3] = rd8(cpu->r[7] + shifter(cpu->r[8], 2, 1u, &shc));
    }
L_00204244:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00204248:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020424c:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x1u);
    }
L_00204250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002043d0;
        }
    }
L_00204254:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_00204258:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_0020425c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00204260:;
    {
        cpu->r[8] = rd16(cpu->r[10] + cpu->r[8]);
    }
L_00204264:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00204268:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204278;
        }
    }
L_0020426c:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[8] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00204270:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00204274:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0020426c;
        }
    }
L_00204278:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x2u);
    }
L_0020427c:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x4u);
    }
L_00204280:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_00204284:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[8], 1, 3u, &shc), 1, 0);
    }
L_00204288:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_0020428c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x2u);
    }
L_00204290:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00204294:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204298:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0020429c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x2u);
    }
L_002042a0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002042a4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000010u, cpu->r[0], 1, 0);
    }
L_002042a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, (cpu->r[0] & 0xffu), &shc), 1, 0);
    }
L_002042ac:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_002042b0:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s8(cpu->r[7] + cpu->r[3]);
    }
L_002042b4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x7cu);
    }
L_002042b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_002042bc:;
    {
        wr32(cpu->r[2] + + 0x78u, cpu->r[8]);
    }
L_002042c0:;
    {
        sub_flags(cpu, cpu->r[8], 0x0000000fu, 1, 1);
    }
L_002042c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000011u, 1, 0);
        }
    }
L_002042c8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2] + + 0x78u, cpu->r[8]);
        }
    }
L_002042cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_002042d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_002042d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020413c;
        }
    }
L_002042d8:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_002042dc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_002042e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_002042e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002042e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002043c8;
        }
    }
L_002042ec:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_002042f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_002042f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_002042f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00204340;
        }
    }
L_002042fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00204300:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00204304:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00204308:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0020430c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00001500u, 0, 0);
    }
L_00204310:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_00204314:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00204318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0020431c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00204320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204330;
        }
    }
L_00204324:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x80u);
    }
L_00204328:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0020432c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00204334;
        }
    }
L_00204330:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00204334:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00204338:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0020433c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204314;
        }
    }
L_00204340:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00204344:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00204348:;
    {
        cpu->r[14] = 0x0020434cu; fn_00202c34(cpu);
    }
L_0020434c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00204350:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00204354:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_00204358:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0020435c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00204360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020445c;
        }
    }
L_00204364:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 1u, &shc), 1, 1);
    }
L_00204368:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~cpu->r[3]);
        }
    }
L_0020436c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00204370:;
    {
        if (cond_test(cpu, 12)) {
        goto L_002043c8;
        }
    }
L_00204374:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00204378:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0020437c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000540u, 0, 0);
    }
L_00204380:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00204384:;
    {
        cpu->r[12] = cpu->r[8];
    }
L_00204388:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0020438c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + - 0x4u);
    }
L_00204390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_00204394:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001740u, 0, 0);
    }
L_00204398:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0020439c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_002043a0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[1] = v;
    }
L_002043a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002043b4;
        }
    }
L_002043a8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x7cu);
    }
L_002043ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_002043b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002043bc;
        }
    }
L_002043b4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_002043b8:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_002043bc:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_002043c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_002043c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020438c;
        }
    }
L_002043c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_002043cc:;
    {
        goto L_00203010;
    }
L_002043d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_002043d4:;
    {
        cpu->r[8] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_002043d8:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_002043dc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002043e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_002043e4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_002043e8:;
    {
        goto L_002042b4;
    }
L_002043ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_002043f0:;
    {
        cpu->r[8] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_002043f4:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_002043f8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002043fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00204400:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00204404:;
    {
        goto L_002041ec;
    }
L_00204408:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_0020440c:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[6]);
    }
L_00204410:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00204414:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00204418:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_0020441c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00204420:;
    {
        goto L_002040e0;
    }
L_00204424:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00204428:;
    {
        cpu->r[1] = (uint32_t)((int8_t)cpu->r[12]);
    }
L_0020442c:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00204430:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00204434:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_00204438:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0020443c:;
    {
        goto L_00204020;
    }
L_00204440:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00204444:;
    {
        cpu->r[3] = (uint32_t)((int8_t)cpu->r[12]);
    }
L_00204448:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[2] = v;
    }
L_0020444c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00204450:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_00204454:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00204458:;
    {
        goto L_00202fe4;
    }
L_0020445c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00204460:;
    {
        cpu->r[3] = rd32(0x00204468u + - 0x57cu);
    }
L_00204464:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00204468:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0020446c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204470:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00204474:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00204478:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_0020447c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00204480:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00204484:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[9] = v;
    }
L_00204488:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_0020448c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204490:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204494:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_00204498:;
    {
        cpu->r[3] = rd32(0x002044a0u + - 0x5b0u);
    }
L_0020449c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_002044a0:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_002044a4:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_002044a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_002044ac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 7u, &shc), 0, 0);
    }
L_002044b0:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_002044b4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_002044b8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_002044bc:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_002044c0:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_002044c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_002044c8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_002044cc:;
    {
        cpu->r[7] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_002044d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_002044d4:;
    {
        cpu->r[6] = rd8(cpu->r[3] + - 0x1u);
    }
L_002044d8:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_002044dc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_002044e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204510;
        }
    }
L_002044e4:;
    {
        cpu->r[7] = rd8(cpu->r[3] + - 0x2u);
    }
L_002044e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_002044ec:;
    {
        cpu->r[8] = rd8(cpu->r[3] + - 0x3u);
    }
L_002044f0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 16u, &shc); cpu->r[7] = v;
    }
L_002044f4:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[8], 2, 24u, &shc); cpu->r[7] = v;
    }
L_002044f8:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_002044fc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204510;
        }
    }
L_00204500:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00204504:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = sub_flags(cpu, 0x00000020u, cpu->r[2], 1, 0);
        }
    }
L_00204508:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd8(cpu->r[3] + - 0x4u);
        }
    }
L_0020450c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] | shifter(cpu->r[8], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_00204510:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_00204514:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_00204518:;
    {
        cpu->r[7] = rd32(0x00204520u + - 0x62cu);
    }
L_0020451c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_00204520:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204524:;
    {
        cpu->r[8] = rd32(cpu->r[9] + cpu->r[7]);
    }
L_00204528:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0020452c:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[7], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00204530:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_00204534:;
    {
        cpu->r[8] = rd32(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00204538:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_0020453c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204574;
        }
    }
L_00204540:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00204544:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[6] = v;
    }
L_00204548:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_0020454c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[7] = v;
    }
L_00204550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00204554:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00204558:;
    {
        cpu->r[7] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_0020455c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + - 0x1u);
    }
L_00204560:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00204564:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00204568:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_0020456c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00204570:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_00204574:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0xc0000001u, 1, 0);
    }
L_00204578:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0020457c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00204580:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00204584:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00204588:;
    {
        cpu->r[6] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_0020458c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00204590:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00204594:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00204598:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
        }
    }
L_0020459c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
        }
    }
L_002045a0:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[7], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_002045a4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000080u, 1, 0);
        }
    }
L_002045a8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_002045ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204588;
        }
    }
L_002045b0:;
    {
        goto L_00204364;
    }
}

/* mpc_decoder_read_bitstream_sv7 @ 002045b4 (arm) */
void fn_002045b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002045b4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_002045b8:;
    {
        cpu->r[2] = 0x00001530u;
    }
L_002045bc:;
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
L_002045c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_002045c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_002045c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_002045cc:;
    {
        cpu->r[0] = rd32(0x002045d4u + + 0xf48u);
    }
L_002045d0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_002045d4:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_002045d8:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[1] = v;
    }
L_002045dc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_002045e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x002045e8u, cpu->r[0], 0, 0);
    }
L_002045e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_002045e8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_002045ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_002045f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002045f4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_002045f8:;
    {
        cpu->r[0] = rd8(cpu->r[12] + cpu->r[0]);
    }
L_002045fc:;
    {
        cpu->r[12] = rd8(cpu->r[3] + - 0x1u);
    }
L_00204600:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00204604:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00204608:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[1] = v;
    }
L_0020460c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00204610:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204614:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00204618:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[1] = v;
    }
L_0020461c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00204620:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_00204624:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00204628:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0020462c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00204630:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00204634:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[0]);
    }
L_00204638:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0020463c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + - 0x1u);
    }
L_00204640:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00204644:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00204648:;
    {
        cpu->r[3] = 0x000015b0u;
    }
L_0020464c:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[11] = v;
    }
L_00204650:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_00204654:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204f64;
        }
    }
L_00204658:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0020465c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204f64;
        }
    }
L_00204660:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00204664:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00204668:;
    {
        if (cond_test(cpu, 14)) {
        goto L_002047f0;
        }
    }
L_0020466c:;
    {
        cpu->r[3] = rd32(0x00204674u + + 0xeacu);
    }
L_00204670:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00001580u, 0, 0);
    }
L_00204674:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_0020467c:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00204680:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00204684:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00204688:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[8] = v1;
    }
L_0020468c:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_00204690:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_00204694:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204698:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[2] = v;
    }
L_0020469c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[2] = v;
    }
L_002046a0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[8] & 0xffu), &shc); cpu->r[2] = v;
    }
L_002046a4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_002046a8:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[10] = v;
    }
L_002046ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_002046b0:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x4u);
    }
L_002046b4:;
    {
        cpu->r[10] = rd8(cpu->r[10] + + 0x5u);
    }
L_002046b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002046bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205014;
        }
    }
L_002046c0:;
    {
        cpu->r[9] = rd32(cpu->r[6]);
    }
L_002046c4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_002046c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_002046cc:;
    {
        cpu->r[10] = rd16(cpu->r[9] + cpu->r[10]);
    }
L_002046d0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_002046d4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002046e4;
        }
    }
L_002046d8:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_002046dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_002046e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002046d8;
        }
    }
L_002046e4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002046e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_002046ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_002046f0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002046f4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002046f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_002046fc:;
    {
        uint32_t v = cpu->r[8] & 0x00000007u; cpu->r[8] = v;
    }
L_00204700:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_00204704:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00204708:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_0020470c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205034;
        }
    }
L_00204710:;
    {
        cpu->r[3] = rd32(cpu->r[1] + - 0x84u);
    }
L_00204714:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00204718:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0020471c:;
    {
        wr32(cpu->r[1] + - 0x80u, cpu->r[10]);
    }
L_00204720:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204724:;
    {
        cpu->r[10] = rd8(cpu->r[0]);
    }
L_00204728:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_0020472c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204730:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00204734:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00204738:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[8] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0020473c:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_00204740:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 10u, &shc); cpu->r[10] = v;
    }
L_00204744:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00204748:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x4u);
    }
L_0020474c:;
    {
        cpu->r[10] = rd8(cpu->r[10] + + 0x5u);
    }
L_00204750:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00204754:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204fb8;
        }
    }
L_00204758:;
    {
        cpu->r[9] = rd32(cpu->r[7]);
    }
L_0020475c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00204760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
    }
L_00204764:;
    {
        cpu->r[10] = rd16(cpu->r[9] + cpu->r[10]);
    }
L_00204768:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0020476c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020477c;
        }
    }
L_00204770:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00204774:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00204778:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204770;
        }
    }
L_0020477c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00204780:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_00204784:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_00204788:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_0020478c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00204790:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_00204794:;
    {
        uint32_t v = cpu->r[8] & 0x00000007u; cpu->r[8] = v;
    }
L_00204798:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0020479c:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_002047a0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_002047a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00204fd8;
        }
    }
L_002047a8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + - 0x4u);
    }
L_002047ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_002047b0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + - 0x80u);
    }
L_002047b4:;
    {
        wr32(cpu->r[1], cpu->r[10]);
    }
L_002047b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002047bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002047c8;
        }
    }
L_002047c0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_002047c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002047d8;
        }
    }
L_002047c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_002047cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002047d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204984;
        }
    }
L_002047d4:;
    {
        cpu->r[11] = cpu->r[12];
    }
L_002047d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_002047dc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_002047e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_002047e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_002047e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_002047ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00204688;
        }
    }
L_002047f0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_002047f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00205090;
        }
    }
L_002047f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_002047fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00001500u, 0, 0);
    }
L_00204800:;
    {
        cpu->r[6] = rd32(0x00204808u + + 0xd1cu);
    }
L_00204804:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_00204808:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0020480c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00204810:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_00204814:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204818:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_0020481c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00204820:;
    {
        cpu->r[7] = rd16(cpu->r[3]);
    }
L_00204824:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00204828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020482c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00204898;
        }
    }
L_00204830:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_00204834:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204838:;
    {
        cpu->r[8] = rd8(cpu->r[10]);
    }
L_0020483c:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x1u);
    }
L_00204840:;
    {
        cpu->r[2] = rd8(cpu->r[10] + + 0x2u);
    }
L_00204844:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00204848:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[8] = v;
    }
L_0020484c:;
    {
        uint32_t v = shifter(cpu->r[8], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
    }
L_00204850:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_00204854:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_00204858:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
        }
    }
L_0020485c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00204870;
        }
    }
L_00204860:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00204864:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[2] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_00204868:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_0020486c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204864;
        }
    }
L_00204870:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00204874:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00204878:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_0020487c:;
    {
        wr32(cpu->r[4], cpu->r[10]);
    }
L_00204880:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00204884:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00204888:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_0020488c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204890:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00204894:;
    {
        wr32(cpu->r[1] + + 0x140u, cpu->r[3]);
    }
L_00204898:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x80u);
    }
L_0020489c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002048a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020490c;
        }
    }
L_002048a4:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_002048a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_002048ac:;
    {
        cpu->r[8] = rd8(cpu->r[10]);
    }
L_002048b0:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x1u);
    }
L_002048b4:;
    {
        cpu->r[2] = rd8(cpu->r[10] + + 0x2u);
    }
L_002048b8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[2] = v;
    }
L_002048bc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[8] = v;
    }
L_002048c0:;
    {
        uint32_t v = shifter(cpu->r[8], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[8] = v;
    }
L_002048c4:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_002048c8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_002048cc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
        }
    }
L_002048d0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_002048e4;
        }
    }
L_002048d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_002048d8:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x4u;
        cpu->r[2] = rd16(cpu->r[3] + + 0x4u);
        cpu->r[3] = wb_tmp;
    }
L_002048dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_002048e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002048d8;
        }
    }
L_002048e4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002048e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_002048ec:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_002048f0:;
    {
        wr32(cpu->r[4], cpu->r[10]);
    }
L_002048f4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_002048f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_002048fc:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204900:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204904:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3] + + 0x3u);
    }
L_00204908:;
    {
        wr32(cpu->r[1] + + 0x1c0u, cpu->r[3]);
    }
L_0020490c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00204910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00204914:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[11], 1, 1);
    }
L_00204918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204824;
        }
    }
L_0020491c:;
    {
        cpu->r[8] = rd32(0x00204924u + + 0xc04u);
    }
L_00204920:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_00204924:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204928:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_0020492c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00204930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000001b0u, 0, 0);
    }
L_00204934:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00204938:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0020493c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_00204940:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204944:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_00204948:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0020494c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00204950:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00204954:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00204958:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0020495c:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x140u);
    }
L_00204960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00204964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00204c2c;
        }
    }
L_00204968:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 1);
    }
L_0020496c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[12]) {
        case 0: goto L_00204d9c;
        case 1: goto L_00204c4c;
        case 2: goto L_00204a88;
        case 3: goto L_002049d4;
        default: guest_unimplemented(cpu, 0x0020496cu); return; }
        }
    }
L_00204970:;
    {
        goto L_002049cc;
    }
L_00204984:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204988:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0020498c:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_00204990:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00001740u, 0, 0);
    }
L_00204994:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00204998:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_0020499c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_002049a0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_002049a4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_002049a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_002049ac:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_002049b0:;
    {
        cpu->r[0] = rd8(cpu->r[8] + cpu->r[0]);
    }
L_002049b4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + - 0x1u);
    }
L_002049b8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_002049bc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_002049c0:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_002049c4:;
    {
        wr8(cpu->r[10] + + 0x2fu, cpu->r[3]);
    }
L_002049c8:;
    {
        goto L_002047d4;
    }
L_002049cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_002049d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002049d4u)) return;
    }
L_002049d4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_002049d8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_002049dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_002049e0:;
    {
        cpu->r[10] = rd8(cpu->r[12]);
    }
L_002049e4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_002049e8:;
    {
        cpu->r[7] = rd8(cpu->r[12] + + 0x2u);
    }
L_002049ec:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x1u);
    }
L_002049f0:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[7] = v;
    }
L_002049f4:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_002049f8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
    }
L_002049fc:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204a00:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00204a04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00204a08:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x4u);
    }
L_00204a0c:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x5u);
    }
L_00204a10:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00204a14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002052bc;
        }
    }
L_00204a18:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204a1c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00204a20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00204a24:;
    {
        cpu->r[7] = rd16(cpu->r[10] + cpu->r[7]);
    }
L_00204a28:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204a2c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204a3c;
        }
    }
L_00204a30:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[5] + + 0x4u);
        cpu->r[5] = wb_tmp;
    }
L_00204a34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204a38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204a30;
        }
    }
L_00204a3c:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204a40:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00204a44:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00204a48:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204a4c:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204a50:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00204a54:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204a58:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204a5c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[5] + + 0x3u);
    }
L_00204a60:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002052d8;
        }
    }
L_00204a68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_00204a6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00204a70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00204a74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00204a78:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[6]);
        cpu->r[0] = wb_tmp;
    }
L_00204a7c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_00204a80:;
    {
        wr32(cpu->r[5], cpu->r[6]);
    }
L_00204a84:;
    {
        goto L_00204bfc;
    }
L_00204a88:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00204a8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204a90:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204a94:;
    {
        cpu->r[10] = rd8(cpu->r[12]);
    }
L_00204a98:;
    {
        cpu->r[7] = rd8(cpu->r[12] + + 0x2u);
    }
L_00204a9c:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x1u);
    }
L_00204aa0:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[7] = v;
    }
L_00204aa4:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[8]);
    }
L_00204aa8:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00204aac:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00204ab0:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204ab4:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00204ab8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00204abc:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x4u);
    }
L_00204ac0:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x5u);
    }
L_00204ac4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00204ac8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205260;
        }
    }
L_00204acc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204ad0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00204ad4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00204ad8:;
    {
        cpu->r[7] = rd16(cpu->r[10] + cpu->r[7]);
    }
L_00204adc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204ae0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204af0;
        }
    }
L_00204ae4:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[5] + + 0x4u);
        cpu->r[5] = wb_tmp;
    }
L_00204ae8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204aec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204ae4;
        }
    }
L_00204af0:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204af4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00204af8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00204afc:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204b00:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204b04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00204b08:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204b0c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204b10:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[5] + + 0x3u);
    }
L_00204b14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204b18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020527c;
        }
    }
L_00204b1c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_00204b20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00204b24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00204b28:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204b2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00204b30:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_00204b34:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_00204b38:;
    {
        cpu->r[11] = rd32(cpu->r[11] + cpu->r[8]);
    }
L_00204b3c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_00204b40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00204b44:;
    {
        cpu->r[7] = rd8(cpu->r[10]);
    }
L_00204b48:;
    {
        cpu->r[6] = rd8(cpu->r[10] + + 0x1u);
    }
L_00204b4c:;
    {
        cpu->r[12] = rd8(cpu->r[10] + + 0x2u);
    }
L_00204b50:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204b54:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00204b58:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[12] = v;
    }
L_00204b5c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204b60:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00204b64:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00204b68:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00204b6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00204b70:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x4u);
    }
L_00204b74:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x5u);
    }
L_00204b78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00204b7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002051a8;
        }
    }
L_00204b80:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204b84:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00204b88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00204b8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00204b90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00204b94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204b98:;
    {
        cpu->r[12] = rd16(cpu->r[6] + cpu->r[12]);
    }
L_00204b9c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_00204ba0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204bc0;
        }
    }
L_00204ba4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00204ba8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00204bac:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x4u;
        cpu->r[5] = rd16(cpu->r[12] + + 0x4u);
        cpu->r[12] = wb_tmp;
    }
L_00204bb0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00204bb4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204bac;
        }
    }
L_00204bb8:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_00204bbc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00204bc0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00204bc4:;
    {
        cpu->r[6] = rd8(cpu->r[7] + + 0x2u);
    }
L_00204bc8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_00204bcc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00204bd0:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00204bd4:;
    {
        cpu->r[6] = rd8(cpu->r[7] + + 0x2u);
    }
L_00204bd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_00204bdc:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[6] = v;
    }
L_00204be0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00204be4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s8(cpu->r[7] + + 0x3u);
    }
L_00204be8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 1);
    }
L_00204bec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002051c4;
        }
    }
L_00204bf0:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_00204bf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00204bf8:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_00204bfc:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00204c00:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000400u, 1, 1);
    }
L_00204c04:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x00008080u;
        }
    }
L_00204c08:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3], cpu->r[10]);
        }
    }
L_00204c0c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00204c10:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000400u, 1, 1);
    }
L_00204c14:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00008080u;
        }
    }
L_00204c18:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0], cpu->r[11]);
        }
    }
L_00204c1c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00204c20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000400u, 1, 1);
    }
L_00204c24:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00008080u;
        }
    }
L_00204c28:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5], cpu->r[12]);
        }
    }
L_00204c2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00204c30:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x80u);
    }
L_00204c34:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x1c0u);
    }
L_00204c38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205070;
        }
    }
L_00204c3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00204c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205070;
        }
    }
L_00204c44:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00204c48:;
    {
        goto L_00204960;
    }
L_00204c4c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00204c50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204c54:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204c58:;
    {
        cpu->r[10] = rd8(cpu->r[12]);
    }
L_00204c5c:;
    {
        cpu->r[7] = rd8(cpu->r[12] + + 0x2u);
    }
L_00204c60:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x1u);
    }
L_00204c64:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[7] = v;
    }
L_00204c68:;
    {
        cpu->r[5] = rd32(cpu->r[11] + cpu->r[8]);
    }
L_00204c6c:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00204c70:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00204c74:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204c78:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00204c7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00204c80:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x4u);
    }
L_00204c84:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x5u);
    }
L_00204c88:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00204c8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002053d4;
        }
    }
L_00204c90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204c94:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00204c98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00204c9c:;
    {
        cpu->r[7] = rd16(cpu->r[10] + cpu->r[7]);
    }
L_00204ca0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204ca4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204cb4;
        }
    }
L_00204ca8:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[5] + + 0x4u);
        cpu->r[5] = wb_tmp;
    }
L_00204cac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204cb0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204ca8;
        }
    }
L_00204cb4:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204cb8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00204cbc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00204cc0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204cc4:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204cc8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00204ccc:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204cd0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204cd4:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[5] + + 0x3u);
    }
L_00204cd8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002053f0;
        }
    }
L_00204ce0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_00204ce4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00204ce8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00204cec:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00204cf0:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00204cf4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204cf8:;
    {
        cpu->r[12] = rd8(cpu->r[7]);
    }
L_00204cfc:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x2u);
    }
L_00204d00:;
    {
        cpu->r[6] = rd8(cpu->r[7] + + 0x1u);
    }
L_00204d04:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00204d08:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204d0c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00204d10:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[8]);
    }
L_00204d14:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00204d18:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204d1c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00204d20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00204d24:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x4u);
    }
L_00204d28:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x5u);
    }
L_00204d2c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00204d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205200;
        }
    }
L_00204d34:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204d38:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00204d3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_00204d40:;
    {
        cpu->r[12] = rd16(cpu->r[11] + cpu->r[12]);
    }
L_00204d44:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_00204d48:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204d58;
        }
    }
L_00204d4c:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[0] + + 0x4u);
        cpu->r[0] = wb_tmp;
    }
L_00204d50:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_00204d54:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204d4c;
        }
    }
L_00204d58:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204d5c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00204d60:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_00204d64:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204d68:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204d6c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00204d70:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[12] = v;
    }
L_00204d74:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00204d78:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[0] + + 0x3u);
    }
L_00204d7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00204d80:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204d84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205224;
        }
    }
L_00204d88:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00204d8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00204d90:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00204d94:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_00204d98:;
    {
        goto L_00204bfc;
    }
L_00204d9c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00204da0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204da4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204da8:;
    {
        cpu->r[7] = rd8(cpu->r[12] + + 0x2u);
    }
L_00204dac:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[8]);
    }
L_00204db0:;
    {
        cpu->r[10] = rd8(cpu->r[12]);
    }
L_00204db4:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x1u);
    }
L_00204db8:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[7] = v;
    }
L_00204dbc:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00204dc0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00204dc4:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204dc8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00204dcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00204dd0:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x4u);
    }
L_00204dd4:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x5u);
    }
L_00204dd8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00204ddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205378;
        }
    }
L_00204de0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204de4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00204de8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_00204dec:;
    {
        cpu->r[7] = rd16(cpu->r[11] + cpu->r[7]);
    }
L_00204df0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204df4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204e04;
        }
    }
L_00204df8:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[5] + + 0x4u);
        cpu->r[5] = wb_tmp;
    }
L_00204dfc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00204e00:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204df8;
        }
    }
L_00204e04:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204e08:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00204e0c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_00204e10:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204e14:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x2u);
    }
L_00204e18:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00204e1c:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_00204e20:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00204e24:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[5] + + 0x3u);
    }
L_00204e28:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205394;
        }
    }
L_00204e30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_00204e34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00204e38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00204e3c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00204e40:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00204e44:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204e48:;
    {
        cpu->r[12] = rd8(cpu->r[7]);
    }
L_00204e4c:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x2u);
    }
L_00204e50:;
    {
        cpu->r[6] = rd8(cpu->r[7] + + 0x1u);
    }
L_00204e54:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00204e58:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204e5c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00204e60:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[8]);
    }
L_00204e64:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00204e68:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00204e6c:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00204e70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00204e74:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x4u);
    }
L_00204e78:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x5u);
    }
L_00204e7c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00204e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205318;
        }
    }
L_00204e84:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204e88:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00204e8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_00204e90:;
    {
        cpu->r[12] = rd16(cpu->r[11] + cpu->r[12]);
    }
L_00204e94:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_00204e98:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204ea8;
        }
    }
L_00204e9c:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x4u;
        cpu->r[12] = rd16(cpu->r[0] + + 0x4u);
        cpu->r[0] = wb_tmp;
    }
L_00204ea0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_00204ea4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204e9c;
        }
    }
L_00204ea8:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204eac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00204eb0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_00204eb4:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00204eb8:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x2u);
    }
L_00204ebc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00204ec0:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[12] = v;
    }
L_00204ec4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00204ec8:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s8(cpu->r[0] + + 0x3u);
    }
L_00204ecc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00204ed0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00204ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020533c;
        }
    }
L_00204ed8:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00204edc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00204ee0:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_00204ee4:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00204ee8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204eec:;
    {
        cpu->r[6] = rd8(cpu->r[10]);
    }
L_00204ef0:;
    {
        cpu->r[12] = rd8(cpu->r[10] + + 0x2u);
    }
L_00204ef4:;
    {
        cpu->r[7] = rd8(cpu->r[10] + + 0x1u);
    }
L_00204ef8:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00204efc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_00204f00:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_00204f04:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00204f08:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00204f0c:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00204f10:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 10u, &shc); cpu->r[12] = v;
    }
L_00204f14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00204f18:;
    {
        cpu->r[6] = rd8(cpu->r[12] + + 0x4u);
    }
L_00204f1c:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x5u);
    }
L_00204f20:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00204f24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002051a8;
        }
    }
L_00204f28:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_00204f2c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00204f30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00204f34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00204f38:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00204f3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00204f40:;
    {
        cpu->r[12] = rd16(cpu->r[6] + cpu->r[12]);
    }
L_00204f44:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_00204f48:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00204bc0;
        }
    }
L_00204f4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00204f50:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00204f54:;
    {
        uint32_t wb_tmp = cpu->r[12] + + 0x4u;
        cpu->r[5] = rd16(cpu->r[12] + + 0x4u);
        cpu->r[12] = wb_tmp;
    }
L_00204f58:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00204f5c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00204f54;
        }
    }
L_00204f60:;
    {
        goto L_00204bb8;
    }
L_00204f64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00204f68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00204f6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00204f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00204660;
        }
    }
L_00204f74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204f78:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_00204f7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00204f80:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[3] = v;
    }
L_00204f84:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00204f88:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_00204f8c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_00204f90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00204f94:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00204f98:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_00204f9c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + - 0x1u);
    }
L_00204fa0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00204fa4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00204fa8:;
    {
        uint32_t v = cpu->r[3] & cpu->r[11]; cpu->r[2] = v;
    }
L_00204fac:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_00204fb0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00204fb4:;
    {
        goto L_00204660;
    }
L_00204fb8:;
    {
        cpu->r[10] = (uint32_t)((int8_t)cpu->r[10]);
    }
L_00204fbc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_00204fc0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_00204fc4:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_00204fc8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00204fcc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00204fd0:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00204fd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002047a8;
        }
    }
L_00204fd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00204fdc:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_00204fe0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00204fe4:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00204fe8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00204fec:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_00204ff0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00204ff4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00204ff8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00204ffc:;
    {
        cpu->r[0] = rd8(cpu->r[8] + cpu->r[0]);
    }
L_00205000:;
    {
        cpu->r[10] = rd8(cpu->r[2] + - 0x1u);
    }
L_00205004:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_00205008:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
    }
L_0020500c:;
    {
        uint32_t v = cpu->r[10] & 0x0000000fu; cpu->r[10] = v;
    }
L_00205010:;
    {
        goto L_002047b0;
    }
L_00205014:;
    {
        cpu->r[10] = (uint32_t)((int8_t)cpu->r[10]);
    }
L_00205018:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_0020501c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_00205020:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[2] = v;
    }
L_00205024:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_00205028:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0020502c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00205030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204710;
        }
    }
L_00205034:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205038:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_0020503c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00205040:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
    }
L_00205044:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00205048:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_0020504c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00205050:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00205054:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00205058:;
    {
        cpu->r[0] = rd8(cpu->r[8] + cpu->r[0]);
    }
L_0020505c:;
    {
        cpu->r[10] = rd8(cpu->r[2] + - 0x1u);
    }
L_00205060:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_00205064:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00205068:;
    {
        uint32_t v = cpu->r[10] & 0x0000000fu; cpu->r[10] = v;
    }
L_0020506c:;
    {
        goto L_00204718;
    }
L_00205070:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00205078:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0020507c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00205080:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00205084:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204954;
        }
    }
L_00205088:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_0020508c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_00205090:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00001580u, 0, 0);
    }
L_00205094:;
    {
        cpu->r[2] = rd32(0x0020509cu + + 0x490u);
    }
L_00205098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_0020509c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_002050a0:;
    {
        cpu->r[3] = rd32(0x002050a8u + + 0x488u);
    }
L_002050a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002050a8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_002050ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x002050b4u, cpu->r[3], 0, 0);
    }
L_002050b0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_002050b4:;
    {
        cpu->r[3] = rd32(0x002050bcu + + 0x478u);
    }
L_002050b8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_002050bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x002050c4u, cpu->r[3], 0, 0);
    }
L_002050c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_002050c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_002050c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_002050cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_002049cc;
        }
    }
L_002050d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_002050d4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_002050d8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_002050dc:;
    {
        cpu->r[7] = rd16(cpu->r[3] + - 0x80u);
    }
L_002050e0:;
    {
        cpu->r[3] = 0x00000090u;
    }
L_002050e4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_002050e8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[3] = v;
    }
L_002050ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000330u, 0, 0);
    }
L_002050f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000378u, 0, 0);
    }
L_002050f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_002050f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_002050fc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00205100:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00205104:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00205108:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_0020510c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000011u, 0, 0);
    }
L_00205110:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000022u, 1, 1);
    }
L_00205114:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_002054fc;
        case 1: goto L_002054fc;
        case 2: goto L_002054fc;
        case 3: goto L_002054fc;
        case 4: goto L_002054fc;
        case 5: goto L_002054fc;
        case 6: goto L_002054fc;
        case 7: goto L_002054fc;
        case 8: goto L_002054fc;
        case 9: goto L_002054fc;
        case 10: goto L_002054fc;
        case 11: goto L_002054fc;
        case 12: goto L_002054fc;
        case 13: goto L_002054fc;
        case 14: goto L_002054fc;
        case 15: goto L_002054fc;
        case 16: goto L_002057c4;
        case 17: goto L_002054fc;
        case 18: goto L_002056e8;
        case 19: goto L_00205608;
        case 20: goto L_00205540;
        case 21: goto L_00205540;
        case 22: goto L_00205540;
        case 23: goto L_00205540;
        case 24: goto L_00205540;
        case 25: goto L_00205430;
        case 26: goto L_00205430;
        case 27: goto L_00205430;
        case 28: goto L_00205430;
        case 29: goto L_00205430;
        case 30: goto L_00205430;
        case 31: goto L_00205430;
        case 32: goto L_00205430;
        case 33: goto L_00205430;
        case 34: goto L_00205430;
        default: guest_unimplemented(cpu, 0x00205114u); return; }
        }
    }
L_00205118:;
    {
        goto L_002049cc;
    }
L_002051a8:;
    {
        cpu->r[12] = (uint32_t)((int8_t)cpu->r[12]);
    }
L_002051ac:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_002051b0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 1);
    }
L_002051b4:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[7] = v;
    }
L_002051b8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[6], 1, 3u, &shc), 1, 0);
    }
L_002051bc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[7]);
    }
L_002051c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204bf0;
        }
    }
L_002051c4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_002051c8:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_002051cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_002051d0:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[12] = v;
    }
L_002051d4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_002051d8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_002051dc:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_002051e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_002051e4:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_002051e8:;
    {
        cpu->r[7] = rd8(cpu->r[10] + cpu->r[7]);
    }
L_002051ec:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_002051f0:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_002051f4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_002051f8:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_002051fc:;
    {
        goto L_00204bf8;
    }
L_00205200:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00205204:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00205208:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0020520c:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_00205210:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_00205214:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00205218:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_0020521c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00205220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204d88;
        }
    }
L_00205224:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205228:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_0020522c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_00205230:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[12] = v;
    }
L_00205234:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00205238:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_0020523c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_00205240:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00205244:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00205248:;
    {
        cpu->r[7] = rd8(cpu->r[10] + cpu->r[7]);
    }
L_0020524c:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_00205250:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_00205254:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00205258:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_0020525c:;
    {
        goto L_00204d90;
    }
L_00205260:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[5]);
    }
L_00205264:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00205268:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0020526c:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[5] = v;
    }
L_00205270:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_00205274:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00205278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204b1c;
        }
    }
L_0020527c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205280:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00205284:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00205288:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 0);
    }
L_0020528c:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_00205290:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00205294:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_00205298:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0020529c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_002052a0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_002052a4:;
    {
        cpu->r[6] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_002052a8:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_002052ac:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_002052b0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[12] = v;
    }
L_002052b4:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_002052b8:;
    {
        goto L_00204b28;
    }
L_002052bc:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[5]);
    }
L_002052c0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_002052c4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_002052c8:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[5] = v;
    }
L_002052cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_002052d0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_002052d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204a68;
        }
    }
L_002052d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_002052dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_002052e0:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_002052e4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 0);
    }
L_002052e8:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_002052ec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002052f0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_002052f4:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_002052f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_002052fc:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00205300:;
    {
        cpu->r[6] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_00205304:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_00205308:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_0020530c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00205310:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[6] = v;
    }
L_00205314:;
    {
        goto L_00204a74;
    }
L_00205318:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0020531c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_00205320:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00205324:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_00205328:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_0020532c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00205330:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00205334:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00205338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204ed8;
        }
    }
L_0020533c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205340:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_00205344:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 0);
    }
L_00205348:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[12] = v;
    }
L_0020534c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00205350:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 3u, &shc); cpu->r[6] = v;
    }
L_00205354:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_00205358:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_0020535c:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00205360:;
    {
        cpu->r[7] = rd8(cpu->r[10] + cpu->r[7]);
    }
L_00205364:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_00205368:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_0020536c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00205370:;
    {
        uint32_t v = cpu->r[6] & 0x0000003fu; cpu->r[6] = v;
    }
L_00205374:;
    {
        goto L_00204ee0;
    }
L_00205378:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[5]);
    }
L_0020537c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00205380:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_00205384:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[5] = v;
    }
L_00205388:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_0020538c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00205390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204e30;
        }
    }
L_00205394:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205398:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0020539c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_002053a0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 0);
    }
L_002053a4:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_002053a8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002053ac:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_002053b0:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_002053b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_002053b8:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_002053bc:;
    {
        cpu->r[6] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_002053c0:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_002053c4:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_002053c8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_002053cc:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[6] = v;
    }
L_002053d0:;
    {
        goto L_00204e3c;
    }
L_002053d4:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[5]);
    }
L_002053d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_002053dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_002053e0:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[5] = v;
    }
L_002053e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_002053e8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_002053ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00204ce0;
        }
    }
L_002053f0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_002053f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_002053f8:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_002053fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 0);
    }
L_00205400:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[0] = v;
    }
L_00205404:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00205408:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_0020540c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_00205410:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00205414:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00205418:;
    {
        cpu->r[6] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_0020541c:;
    {
        cpu->r[12] = rd8(cpu->r[12] + - 0x1u);
    }
L_00205420:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_00205424:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00205428:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[6] = v;
    }
L_0020542c:;
    {
        goto L_00204cec;
    }
L_00205430:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205434:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00205438:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0020543c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00205440:;
    {
        cpu->r[2] = rd32(0x00205448u + + 0xf0u);
    }
L_00205444:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[8]);
    }
L_00205448:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_0020544c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205450:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00205454:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_00205458:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0020545c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00205460:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00205464:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[7]);
    }
L_00205468:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0020546c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00205470:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00205474:;
    {
        goto L_0020547c;
    }
L_00205478:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_0020547c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00205480:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00205484:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[3] = v;
    }
L_00205488:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0020548c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 3u, &shc), 1, 0);
    }
L_00205490:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_00205494:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00205498:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0020549c:;
    {
        cpu->r[5] = rd8(cpu->r[2] + - 0x1u);
    }
L_002054a0:;
    {
        cpu->r[12] = rd8(cpu->r[2]);
    }
L_002054a4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[12] = v;
    }
L_002054a8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_002054ac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002054dc;
        }
    }
L_002054b0:;
    {
        cpu->r[5] = rd8(cpu->r[2] + - 0x2u);
    }
L_002054b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 1);
    }
L_002054b8:;
    {
        cpu->r[7] = rd8(cpu->r[2] + - 0x3u);
    }
L_002054bc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 16u, &shc); cpu->r[5] = v;
    }
L_002054c0:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[7], 2, 24u, &shc); cpu->r[5] = v;
    }
L_002054c4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_002054c8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002054dc;
        }
    }
L_002054cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002054d0:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
    }
L_002054d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd8(cpu->r[2] + - 0x4u);
        }
    }
L_002054d8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_002054dc:;
    {
        cpu->r[5] = rd16(cpu->r[10]);
    }
L_002054e0:;
    {
        uint32_t v = cpu->r[12] & cpu->r[9]; cpu->r[12] = v;
    }
L_002054e4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_002054e8:;
    {
        wr16(cpu->r[6] + cpu->r[1], cpu->r[12]);
    }
L_002054ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_002054f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000048u, 1, 1);
    }
L_002054f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205478;
        }
    }
L_002054f8:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_002054fc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205500:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205504:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00205508:;
    {
        cpu->r[7] = rd32(cpu->r[10]);
    }
L_0020550c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205858;
        }
    }
L_00205510:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00205514:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_00205518:;
    {
        goto L_00205108;
    }
L_00205540:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00205544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00205548:;
    {
        cpu->r[14] = 0x0020554cu; fn_00202d38(cpu);
    }
L_0020554c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00205550:;
    {
        cpu->r[1] = 0x00000108u;
    }
L_00205554:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_00205558:;
    {
        cpu->r[2] = rd32(0x00205560u + - 0x24u);
    }
L_0020555c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00205560:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[1] = v;
    }
L_00205564:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205568:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0020556c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[1]; cpu->r[1] = v;
    }
L_00205570:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00205574:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[12] = v1;
    }
L_00205578:;
    {
        cpu->r[7] = rd8(cpu->r[0]);
    }
L_0020557c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x1u);
    }
L_00205580:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x2u);
    }
L_00205584:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00205588:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[1] = v;
    }
L_0020558c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00205590:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00205594:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00205598:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0020559c:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x4u);
    }
L_002055a0:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x5u);
    }
L_002055a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_002055a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205804;
        }
    }
L_002055ac:;
    {
        cpu->r[8] = rd32(cpu->r[10]);
    }
L_002055b0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_002055b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_002055b8:;
    {
        cpu->r[7] = rd16(cpu->r[8] + cpu->r[7]);
    }
L_002055bc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_002055c0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_002055d0;
        }
    }
L_002055c4:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[2] + + 0x4u);
        cpu->r[2] = wb_tmp;
    }
L_002055c8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_002055cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002055c4;
        }
    }
L_002055d0:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_002055d4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_002055d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 3u, &shc), 1, 0);
    }
L_002055dc:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_002055e0:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_002055e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_002055e8:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[1] = v;
    }
L_002055ec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_002055f0:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s8(cpu->r[2] + + 0x3u);
    }
L_002055f4:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[7]);
    }
L_002055f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_002055fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000048u, 1, 1);
    }
L_00205600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205574;
        }
    }
L_00205604:;
    {
        goto L_002054fc;
    }
L_00205608:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0020560c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00205610:;
    {
        cpu->r[14] = 0x00205614u; fn_00202d38(cpu);
    }
L_00205614:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205618:;
    {
        cpu->r[1] = rd32(0x00205620u + - 0xe4u);
    }
L_0020561c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00205620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_00205624:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_00205628:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0020562c:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_00205630:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_00205634:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000108u, 0, 0);
    }
L_00205638:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_0020563c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00205640:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205644:;
    {
        cpu->r[7] = rd8(cpu->r[12]);
    }
L_00205648:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x1u);
    }
L_0020564c:;
    {
        cpu->r[0] = rd8(cpu->r[12] + + 0x2u);
    }
L_00205650:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[0] = v;
    }
L_00205654:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00205658:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0020565c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00205660:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 10u, &shc); cpu->r[7] = v;
    }
L_00205664:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00205668:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x4u);
    }
L_0020566c:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x5u);
    }
L_00205670:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00205674:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205820;
        }
    }
L_00205678:;
    {
        cpu->r[10] = rd32(cpu->r[8]);
    }
L_0020567c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_00205680:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00205684:;
    {
        cpu->r[7] = rd16(cpu->r[10] + cpu->r[7]);
    }
L_00205688:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_0020568c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0020569c;
        }
    }
L_00205690:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x4u;
        cpu->r[7] = rd16(cpu->r[1] + + 0x4u);
        cpu->r[1] = wb_tmp;
    }
L_00205694:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_00205698:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00205690;
        }
    }
L_0020569c:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x2u);
    }
L_002056a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_002056a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 3u, &shc), 1, 0);
    }
L_002056a8:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002056ac:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x2u);
    }
L_002056b0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_002056b4:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[0] = v;
    }
L_002056b8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_002056bc:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s8(cpu->r[1] + + 0x3u);
    }
L_002056c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_002056c4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3e0u);
    }
L_002056c8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x37cu);
    }
L_002056cc:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[1]);
    }
L_002056d0:;
    {
        wr16(cpu->r[3], cpu->r[0]);
    }
L_002056d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_002056d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_002056dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020563c;
        }
    }
L_002056e0:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_002056e4:;
    {
        goto L_002054fc;
    }
L_002056e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_002056ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002056f0:;
    {
        cpu->r[14] = 0x002056f4u; fn_00202d38(cpu);
    }
L_002056f4:;
    {
        cpu->r[1] = rd32(0x002056fcu + - 0x1c0u);
    }
L_002056f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_002056fc:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_00205700:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00205704:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_00205708:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_0020570c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_00205710:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[1]; cpu->r[0] = v;
    }
L_00205714:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[6] = v0;
        cpu->r[7] = v1;
    }
L_00205718:;
    {
        cpu->r[8] = rd8(cpu->r[6]);
    }
L_0020571c:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x1u);
    }
L_00205720:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x2u);
    }
L_00205724:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00205728:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[12] = v;
    }
L_0020572c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[7] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00205730:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_00205734:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 10u, &shc); cpu->r[8] = v;
    }
L_00205738:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0020573c:;
    {
        cpu->r[1] = rd8(cpu->r[8] + + 0x4u);
    }
L_00205740:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x5u);
    }
L_00205744:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00205748:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020583c;
        }
    }
L_0020574c:;
    {
        cpu->r[10] = rd32(cpu->r[0]);
    }
L_00205750:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00205754:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00205758:;
    {
        cpu->r[8] = rd16(cpu->r[10] + cpu->r[8]);
    }
L_0020575c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_00205760:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00205770;
        }
    }
L_00205764:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x4u;
        cpu->r[8] = rd16(cpu->r[1] + + 0x4u);
        cpu->r[1] = wb_tmp;
    }
L_00205768:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 1);
    }
L_0020576c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00205764;
        }
    }
L_00205770:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x2u);
    }
L_00205774:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_00205778:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 3u, &shc), 1, 0);
    }
L_0020577c:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00205780:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x2u);
    }
L_00205784:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_00205788:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[12] = v;
    }
L_0020578c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_00205790:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s8(cpu->r[1] + + 0x3u);
    }
L_00205794:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205798:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0020579c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x310u);
    }
L_002057a0:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x238u);
    }
L_002057a4:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x2a4u);
    }
L_002057a8:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_002057ac:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_002057b0:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[6]);
    }
L_002057b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_002057b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_002057bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205714;
        }
    }
L_002057c0:;
    {
        goto L_002056e0;
    }
L_002057c4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_002057c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_002057cc:;
    {
        cpu->r[14] = 0x002057d0u; fn_00207138(cpu);
    }
L_002057d0:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[2] = v;
    }
L_002057d4:;
    {
        cpu->r[3] = (cpu->r[0] >> 16) & 0xffu;
    }
L_002057d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 3, 24u, &shc), 0, 0);
    }
L_002057dc:;
    {
        cpu->r[0] = (cpu->r[0] >> 8) & 0xffu;
    }
L_002057e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000001fcu, 1, 0);
    }
L_002057e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_002057e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_002057ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_002057f0:;
    {
        wr16(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_002057f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_002057f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000048u, 1, 1);
    }
L_002057fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002057c8;
        }
    }
L_00205800:;
    {
        goto L_002054fc;
    }
L_00205804:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00205808:;
    {
        cpu->r[7] = (uint32_t)((int8_t)cpu->r[7]);
    }
L_0020580c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[1] = v;
    }
L_00205810:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00205814:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 3u, &shc), 1, 0);
    }
L_00205818:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0020581c:;
    {
        goto L_002055f4;
    }
L_00205820:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_00205824:;
    {
        cpu->r[7] = (uint32_t)((int8_t)cpu->r[7]);
    }
L_00205828:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[0] = v;
    }
L_0020582c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00205830:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 3u, &shc), 1, 0);
    }
L_00205834:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00205838:;
    {
        goto L_002056c0;
    }
L_0020583c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_00205840:;
    {
        cpu->r[8] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_00205844:;
    {
        uint32_t v = cpu->r[1] & 0x00000007u; cpu->r[12] = v;
    }
L_00205848:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_0020584c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[1], 1, 3u, &shc), 1, 0);
    }
L_00205850:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00205854:;
    {
        goto L_00205794;
    }
L_00205858:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0020585c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205860:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00205864:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00205868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0020586c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00205870:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00205874:;
    {
        goto L_002050c4;
    }
}

/* mpc_decoder_decode_frame @ 00205878 (arm) */
void fn_00205878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00205878:;
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
L_0020587c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_00205880:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00205884:;
    {
        cpu->r[10] = 0x000001e1u;
    }
L_00205888:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_0020588c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00205890:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x10u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_00205894:;
    {
        cpu->r[7] = rd32(0x0020589cu + + 0x4dcu);
    }
L_00205898:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 1);
    }
L_0020589c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_002058a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_002058a4:;
    {
        wr64(cpu->r[13] + + 0x28u, ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
    }
L_002058a8:;
    {
        cpu->r[7] = add_flags(cpu, 0x002058b0u, cpu->r[7], 0, 0);
    }
L_002058ac:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x18u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_002058b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_002058b4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_002058b8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_002058bc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_002058c0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_002058c4:;
    {
        wr64(cpu->r[13] + + 0x28u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_002058c8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_002058cc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_002058d0:;
    {
        cpu->r[11] = rd32(cpu->r[11] + + 0x4u);
    }
L_002058d4:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_002058d8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_002058dc:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_002058e0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_002058e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00206604;
        }
    }
L_002058e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_002058ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_002058f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002065b4;
        }
    }
L_002058f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002058f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_002058fc:;
    {
        cpu->r[14] = 0x00205900u; fn_002045b4(cpu);
    }
L_00205900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00205904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000660u, 1, 1);
    }
L_00205908:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00205a14;
        }
    }
L_0020590c:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x18u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_00205910:;
    {
        cpu->r[0] = 0x00000480u;
    }
L_00205914:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00205918:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x10u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_0020591c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 1);
    }
L_00205920:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_00205924:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00205928:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0020592c:;
    {
        wr64(cpu->r[4] + + 0x18u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_00205930:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00205934:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_00205938:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0020593c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002059a8;
        }
    }
L_00205940:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00205944:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00205948:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00206628;
        }
    }
L_0020594c:;
    {
        cpu->r[2] = 0x00000480u;
    }
L_00205950:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_00205954:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00205958:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x40u);
    }
L_0020595c:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_00205960:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_00205964:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_00205968:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_0020596c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00205970:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00205974:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_00205978:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_0020597c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00205980:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00205984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002059a0;
        }
    }
L_00205988:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0020598c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002065cc;
        }
    }
L_00205990:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00205994:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00205998:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0020599c:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_002059a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_002059a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002059a8u)) return;
    }
L_002059a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000480u, 1, 1);
    }
L_002059ac:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00205940;
        }
    }
L_002059b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_002059b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_002059b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205940;
        }
    }
L_002059bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_002059c0:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_002059c4:;
    {
        cpu->r[14] = 0x002059c8u; fn_00202d38(cpu);
    }
L_002059c8:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x18u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_002059cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_002059d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_002059d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205940;
        }
    }
L_002059d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_002059dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_002059e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205940;
        }
    }
L_002059e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002059e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000480u;
        }
    }
L_002059ec:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000480u, 1, 0);
    }
L_002059f0:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x28u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_002059f4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_002059f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_002059fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_00205a00:;
    {
        wr64(cpu->r[13] + + 0x28u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_00205a04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 1);
    }
L_00205a08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_00205a0c:;
    {
        wr64(cpu->r[4] + + 0x10u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_00205a10:;
    {
        goto L_00205940;
    }
L_00205a14:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x4u);
    }
L_00205a18:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00205a1c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00205a20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00205d5c;
        }
    }
L_00205a24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00001500u, 0, 0);
    }
L_00205a28:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00205a2c:;
    {
        cpu->r[9] = rd32(0x00205a34u + + 0x348u);
    }
L_00205a30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_00205a34:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_00205a38:;
    {
        cpu->r[14] = cpu->r[7];
    }
L_00205a3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00007d00u, 0, 0);
    }
L_00205a40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00008f00u, 0, 0);
    }
L_00205a44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000090u, 0, 0);
    }
L_00205a48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000090u, 0, 0);
    }
L_00205a4c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00205a50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00205a58u + + 0x31cu);
    }
L_00205a54:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00205a58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_00205a5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 3u, &shc), 0, 0);
    }
L_00205a60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001740u, 0, 0);
    }
L_00205a64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00205a68:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00205a6c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00205a70:;
    {
        cpu->r[11] = rd8(cpu->r[1] + + 0x30u);
    }
L_00205a74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000378u, 0, 0);
    }
L_00205a78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000330u, 0, 0);
    }
L_00205a7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00205a80:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00205a84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_00205a88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_00205a8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00205a90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205d80;
        }
    }
L_00205a94:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_00205a98:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00205a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002061b4;
        }
    }
L_00205aa0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x80u);
    }
L_00205aa4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00205aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00206480;
        }
    }
L_00205aac:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x30u);
    }
L_00205ab0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205ab4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00205ab8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205abc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205ac0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_00205ac4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205ac8:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x1b0u);
    }
L_00205acc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205ad0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205ad4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205ad8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00002840u, 0, 0);
    }
L_00205adc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00205ae0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205ae4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[9]);
    }
L_00205ae8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000024u, 0, 0);
    }
L_00205aec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_00205af0:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00205af4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00205af8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00205afc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205b00:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205b04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00205b08:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00205b0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00205b10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205b14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_00205b18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00205b1c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00205b20:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_00205b24:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205b28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205b2c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205b30:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12]);
    }
L_00205b34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205b38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00205b3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205b40:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11]);
    }
L_00205b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205b48:;
    {
        vfp_vmul(cpu, 10, 11, 12);
    }
L_00205b4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00205b50:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00205b54:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_00205b58:;
    {
        vfp_vmul(cpu, 11, 13, 14);
    }
L_00205b5c:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_00205b60:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[14];
    }
L_00205b64:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_00205b68:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205b6c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_00205b70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_00205b74:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00205b78:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205b7c:;
    {
        vfp_vmul(cpu, 13, 10, 13);
    }
L_00205b80:;
    {
        vfp_vmul(cpu, 14, 11, 14);
    }
L_00205b84:;
    {
        vfp_vsub(cpu, 12, 13, 14);
    }
L_00205b88:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00205b8c:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205b90:;
    {
        wr32(cpu->r[3] + cpu->r[11], cpu->r[14]);
    }
L_00205b94:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00205b98:;
    {
        wr32(cpu->r[2] + cpu->r[11], cpu->r[14]);
    }
L_00205b9c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000080u, 0, 0);
    }
L_00205ba0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205b5c;
        }
    }
L_00205ba4:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x34u);
    }
L_00205ba8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205bac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00205bb0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00002840u, 0, 0);
    }
L_00205bb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00205bb8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205bbc:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b4u);
    }
L_00205bc0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205bc4:;
    {
        cpu->r[11] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_00205bc8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205bcc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205bd0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00205bd4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00205bd8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[11] = v0;
        cpu->r[12] = v1;
    }
L_00205bdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205be0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000024u, 0, 0);
    }
L_00205be4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00205be8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00205bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00205bf0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205bf4:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_00205bf8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205bfc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205c00:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205c04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_00205c08:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205c0c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205c10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205c14:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[11]);
    }
L_00205c18:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205c1c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00205c20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205c24:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_00205c28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205c2c:;
    {
        vfp_vmul(cpu, 10, 11, 12);
    }
L_00205c30:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_00205c34:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_00205c38:;
    {
        vfp_vmul(cpu, 11, 13, 14);
    }
L_00205c3c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[11] = v;
    }
L_00205c40:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[11]);
    }
L_00205c44:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_00205c48:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[11]);
    }
L_00205c4c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205c50:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_00205c54:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205c58:;
    {
        vfp_vmul(cpu, 14, 11, 14);
    }
L_00205c5c:;
    {
        vfp_vmul(cpu, 13, 10, 13);
    }
L_00205c60:;
    {
        vfp_vsub(cpu, 12, 13, 14);
    }
L_00205c64:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00205c68:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00205c6c:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205c70:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[11]);
    }
L_00205c74:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[14]);
    }
L_00205c78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00205c7c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00205c80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205c3c;
        }
    }
L_00205c84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205c88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205c8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_00205c90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205c94:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x1b8u);
    }
L_00205c98:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205c9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205ca0:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x38u);
    }
L_00205ca4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00205ca8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00002840u, 0, 0);
    }
L_00205cac:;
    {
        cpu->r[11] = rd32(cpu->r[12] + cpu->r[9]);
    }
L_00205cb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205cb4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_00205cb8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00205cbc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205cc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205cc4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_00205cc8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00205ccc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[10]);
    }
L_00205cd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205cd4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_00205cd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205cdc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00205ce0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_00205ce4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205ce8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12]);
    }
L_00205cec:;
    {
        vfp_vmul(cpu, 10, 11, 12);
    }
L_00205cf0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00205cf4:;
    {
        vfp_vmul(cpu, 11, 13, 14);
    }
L_00205cf8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[8] = v;
    }
L_00205cfc:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[8]);
    }
L_00205d00:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[10];
    }
L_00205d04:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[8]);
    }
L_00205d08:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205d0c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_00205d10:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205d14:;
    {
        vfp_vmul(cpu, 14, 11, 14);
    }
L_00205d18:;
    {
        vfp_vmul(cpu, 13, 10, 13);
    }
L_00205d1c:;
    {
        vfp_vsub(cpu, 12, 13, 14);
    }
L_00205d20:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00205d24:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00205d28:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205d2c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[11]);
    }
L_00205d30:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[8]);
    }
L_00205d34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00205d38:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000024u, 1, 1);
    }
L_00205d3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205cf8;
        }
    }
L_00205d40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00205d44:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00205d48:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00205d4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00205d50:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_00205d54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00205d58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_00205d5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00205d60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00205d64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00205d68:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x8u);
    }
L_00205d6c:;
    {
        cpu->r[14] = 0x00205d70u; fn_00207190(cpu);
    }
L_00205d70:;
    {
        goto L_0020590c;
    }
L_00205d80:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_00205d84:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00205d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00206034;
        }
    }
L_00205d8c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x80u);
    }
L_00205d90:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00205d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00206340;
        }
    }
L_00205d98:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x30u);
    }
L_00205d9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00205da0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205da4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00205da8:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b0u);
    }
L_00205dac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00205db0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205db4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205db8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205dbc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_00205dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205dc4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205dc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205dcc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[9]);
    }
L_00205dd0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00205dd4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205dd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205ddc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00205de0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205de4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00205de8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205dec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00205df4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00205df8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205dfc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205e00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205e04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_00205e08:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00205e0c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205e10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205e14:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205e18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205e1c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[11]);
    }
L_00205e20:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205e24:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00205e28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205e2c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_00205e30:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205e34:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_00205e38:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_00205e3c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205e40:;
    {
        cpu->r[12] = cpu->r[11];
    }
L_00205e44:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_00205e48:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_00205e4c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[14];
    }
L_00205e50:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_00205e54:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205e58:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_00205e5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_00205e60:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00205e64:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205e68:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_00205e6c:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_00205e70:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00205e74:;
    {
        wr32(cpu->r[3] + cpu->r[11], cpu->r[14]);
    }
L_00205e78:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205e7c:;
    {
        wr32(cpu->r[2] + cpu->r[11], cpu->r[14]);
    }
L_00205e80:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000080u, 0, 0);
    }
L_00205e84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205e48;
        }
    }
L_00205e88:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x34u);
    }
L_00205e8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205e90:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00205e94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00002840u, 0, 0);
    }
L_00205e98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00205e9c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205ea0:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b4u);
    }
L_00205ea4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205ea8:;
    {
        cpu->r[11] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_00205eac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205eb0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205eb4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00205eb8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00205ebc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[11] = v0;
        cpu->r[12] = v1;
    }
L_00205ec0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205ec4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000024u, 0, 0);
    }
L_00205ec8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_00205ecc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00205ed0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00205ed4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00205ed8:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_00205edc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205ee0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205ee4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205ee8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_00205eec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205ef0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205ef4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00205ef8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[11]);
    }
L_00205efc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205f00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00205f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205f08:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_00205f0c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00205f10:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_00205f14:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_00205f18:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_00205f1c:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_00205f20:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[11] = v;
    }
L_00205f24:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[11]);
    }
L_00205f28:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_00205f2c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[11]);
    }
L_00205f30:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205f34:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_00205f38:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205f3c:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_00205f40:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_00205f44:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205f48:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00205f4c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[11]);
    }
L_00205f50:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[14]);
    }
L_00205f54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00205f58:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000018u, 1, 1);
    }
L_00205f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205f20;
        }
    }
L_00205f60:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00205f64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205f68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_00205f6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00205f70:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x1b8u);
    }
L_00205f74:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00205f78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00205f7c:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x38u);
    }
L_00205f80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00205f84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x00002840u, 0, 0);
    }
L_00205f88:;
    {
        cpu->r[11] = rd32(cpu->r[12] + cpu->r[9]);
    }
L_00205f8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00205f90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_00205f94:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00205f98:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00205f9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00205fa0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_00205fa4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00205fa8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[10]);
    }
L_00205fac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205fb0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_00205fb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00205fb8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00205fbc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_00205fc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00205fc4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12]);
    }
L_00205fc8:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_00205fcc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00205fd0:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_00205fd4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[8] = v;
    }
L_00205fd8:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[8]);
    }
L_00205fdc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[10];
    }
L_00205fe0:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[8]);
    }
L_00205fe4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00205fe8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_00205fec:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00205ff0:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_00205ff4:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_00205ff8:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00205ffc:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00206000:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[11]);
    }
L_00206004:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[12], 2, 7u, &shc), cpu->r[8]);
    }
L_00206008:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0020600c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000024u, 1, 1);
    }
L_00206010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00205fd4;
        }
    }
L_00206014:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00206018:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0020601c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00206020:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00206024:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_00206028:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_0020602c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_00206030:;
    {
        goto L_00205d5c;
    }
L_00206034:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x80u);
    }
L_00206038:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0020603c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00206180;
        }
    }
L_00206040:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b0u);
    }
L_00206044:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00206048:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0020604c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00206050:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00206054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00206058:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0020605c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00206060:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00206064:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00206068:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_0020606c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206070:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00206074:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[0]);
    }
L_00206078:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0020607c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206080:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00206084:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 1);
    }
L_00206088:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0020608c:;
    {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[11]);
    }
L_00206090:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_00206094:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206098:;
    {
        wr32(cpu->r[2] + cpu->r[10], cpu->r[12]);
    }
L_0020609c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000080u, 0, 0);
    }
L_002060a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206074;
        }
    }
L_002060a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_002060a8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_002060ac:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b4u);
    }
L_002060b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_002060b4:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_002060b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_002060bc:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_002060c0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_002060c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_002060c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002060cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_002060d0:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_002060d4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_002060d8:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_002060dc:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[10]);
    }
L_002060e0:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_002060e4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_002060e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_002060ec:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_002060f0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_002060f4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[11]);
    }
L_002060f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_002060fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 1);
    }
L_00206100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002060d4;
        }
    }
L_00206104:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x1b8u);
    }
L_00206108:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0020610c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00206110:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00002840u, 0, 0);
    }
L_00206114:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_00206118:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_0020611c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00206120:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10]);
    }
L_00206124:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00206128:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_0020612c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206130:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00206134:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00206138:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[8]);
    }
L_0020613c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_00206140:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_00206144:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206148:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0020614c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206150:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[10]);
    }
L_00206154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00206158:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 1);
    }
L_0020615c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206130;
        }
    }
L_00206160:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00206164:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00206168:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0020616c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00206170:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_00206174:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00206178:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_0020617c:;
    {
        goto L_00205d5c;
    }
L_00206180:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00206184:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_00206188:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[11]);
    }
L_0020618c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_00206190:;
    {
        sub_flags(cpu, cpu->r[8], 0x00001200u, 1, 1);
    }
L_00206194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205d40;
        }
    }
L_00206198:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0020619c:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_002061a0:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[11]);
    }
L_002061a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_002061a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00001200u, 1, 1);
    }
L_002061ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206180;
        }
    }
L_002061b0:;
    {
        goto L_00205d40;
    }
L_002061b4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x80u);
    }
L_002061b8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_002061bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020630c;
        }
    }
L_002061c0:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b0u);
    }
L_002061c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_002061c8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_002061cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_002061d0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_002061d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_002061d8:;
    {
        cpu->r[11] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_002061dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002061e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_002061e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_002061e8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_002061ec:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_002061f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_002061f4:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[0]);
    }
L_002061f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_002061fc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206200:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00206204:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 1);
    }
L_00206208:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_0020620c:;
    {
        vfp_vneg(cpu, 13, 14);
    }
L_00206210:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206214:;
    {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[12]);
    }
L_00206218:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0020621c:;
    {
        wr32(cpu->r[2] + cpu->r[10], cpu->r[11]);
    }
L_00206220:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000080u, 0, 0);
    }
L_00206224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002061f4;
        }
    }
L_00206228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0020622c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00206230:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x1b4u);
    }
L_00206234:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00206238:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0020623c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00206240:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00206244:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00206248:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_0020624c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00206250:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00206254:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_00206258:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0020625c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_00206260:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_00206264:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206268:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_0020626c:;
    {
        vfp_vneg(cpu, 13, 14);
    }
L_00206270:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206274:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[10]);
    }
L_00206278:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0020627c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[11]);
    }
L_00206280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00206284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 1);
    }
L_00206288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206258;
        }
    }
L_0020628c:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x1b8u);
    }
L_00206290:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00206294:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00206298:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00002840u, 0, 0);
    }
L_0020629c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_002062a0:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_002062a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_002062a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10]);
    }
L_002062ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_002062b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_002062b4:;
    {
        vfp_vmul(cpu, 12, 13, 14);
    }
L_002062b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_002062bc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_002062c0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_002062c4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_002062c8:;
    {
        vfp_vmul(cpu, 14, 12, 14);
    }
L_002062cc:;
    {
        vfp_vneg(cpu, 13, 14);
    }
L_002062d0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_002062d4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[12]);
    }
L_002062d8:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_002062dc:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[0], 2, 7u, &shc), cpu->r[8]);
    }
L_002062e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_002062e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 1);
    }
L_002062e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002062b8;
        }
    }
L_002062ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_002062f0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_002062f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_002062f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_002062fc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_00206300:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00206304:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_00206308:;
    {
        goto L_00205d5c;
    }
L_0020630c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00206310:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[10]);
    }
L_00206314:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[10]);
    }
L_00206318:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_0020631c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00001200u, 1, 1);
    }
L_00206320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00205d40;
        }
    }
L_00206324:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00206328:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[10]);
    }
L_0020632c:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[10]);
    }
L_00206330:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_00206334:;
    {
        sub_flags(cpu, cpu->r[8], 0x00001200u, 1, 1);
    }
L_00206338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020630c;
        }
    }
L_0020633c:;
    {
        goto L_00205d40;
    }
L_00206340:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x30u);
    }
L_00206344:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00206348:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0020634c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00206350:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_00206354:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00206358:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_0020635c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00206360:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_00206364:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00206368:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_0020636c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206370:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00206374:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_00206378:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0020637c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206380:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_00206384:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_00206388:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0020638c:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_00206390:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206394:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_00206398:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[12]);
    }
L_0020639c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_002063a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206374;
        }
    }
L_002063a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_002063a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002063ac:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x34u);
    }
L_002063b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_002063b4:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_002063b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_002063bc:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_002063c0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_002063c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_002063c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002063cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_002063d0:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_002063d4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_002063d8:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_002063dc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_002063e0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_002063e4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_002063e8:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_002063ec:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_002063f0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[8]);
    }
L_002063f4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[11]);
    }
L_002063f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_002063fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_00206400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002063d4;
        }
    }
L_00206404:;
    {
        cpu->r[8] = rd8(cpu->r[5] + + 0x38u);
    }
L_00206408:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0020640c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00206410:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00002840u, 0, 0);
    }
L_00206414:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_00206418:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_0020641c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00206420:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_00206424:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00206428:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_0020642c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206430:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00206434:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00206438:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_0020643c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_00206440:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206444:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_00206448:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0020644c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[12]);
    }
L_00206450:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[8]);
    }
L_00206454:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00206458:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000024u, 1, 1);
    }
L_0020645c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206430;
        }
    }
L_00206460:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00206464:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00206468:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0020646c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00206470:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_00206474:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00206478:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_0020647c:;
    {
        goto L_00205d5c;
    }
L_00206480:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x30u);
    }
L_00206484:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00206488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0020648c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_00206490:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_00206494:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00206498:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_0020649c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_002064a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_002064a4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_002064a8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_002064ac:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_002064b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_002064b4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_002064b8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_002064bc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_002064c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_002064c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_002064c8:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_002064cc:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_002064d0:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_002064d4:;
    {
        wr32(cpu->r[2] + cpu->r[8], cpu->r[11]);
    }
L_002064d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000080u, 0, 0);
    }
L_002064dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002064b4;
        }
    }
L_002064e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_002064e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_002064e8:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x34u);
    }
L_002064ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002840u, 0, 0);
    }
L_002064f0:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_002064f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_002064f8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_002064fc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00206500:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_00206504:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00206508:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_0020650c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206510:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00206514:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_00206518:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0020651c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206520:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_00206524:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206528:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[8]);
    }
L_0020652c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[8]);
    }
L_00206530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00206534:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_00206538:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206510;
        }
    }
L_0020653c:;
    {
        cpu->r[8] = rd8(cpu->r[5] + + 0x38u);
    }
L_00206540:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00206544:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00206548:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00002840u, 0, 0);
    }
L_0020654c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_00206550:;
    {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[9]);
    }
L_00206554:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_00206558:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_0020655c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_00206560:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_00206564:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00206568:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0020656c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[12]);
    }
L_00206570:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_00206574:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00206578:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0020657c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00206580:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[12]);
    }
L_00206584:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 7u, &shc), cpu->r[12]);
    }
L_00206588:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0020658c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000024u, 1, 1);
    }
L_00206590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206568;
        }
    }
L_00206594:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00206598:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0020659c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_002065a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_002065a4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 1);
    }
L_002065a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_002065ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00205a58;
        }
    }
L_002065b0:;
    {
        goto L_00205d5c;
    }
L_002065b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_002065b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002065bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_002065c0:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0xcu);
    }
L_002065c4:;
    {
        cpu->r[14] = 0x002065c8u; fn_00202efc(cpu);
    }
L_002065c8:;
    {
        goto L_00205900;
    }
L_002065cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_002065d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_002065d4:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_002065d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_002065dc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_002065e0:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x8u);
    }
L_002065e4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[2] = v;
    }
L_002065e8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_002065ec:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_002065f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_002065f4:;
    {
        cpu->r[14] = 0x002065f8u; imp_memmove(cpu); /* memmove */
    }
L_002065f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002065fc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00206600:;
    {
        goto L_002059a0;
    }
L_00206604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020664c;
        }
    }
L_00206608:;
    {
        uint32_t v = cpu->r[0] | cpu->r[1]; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0020660c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002058e8;
        }
    }
L_00206610:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00206614:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00206618:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_0020661c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00206620:;
    {
        wr32(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_00206624:;
    {
        goto L_002059a0;
    }
L_00206628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00206638;
        }
    }
L_0020662c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00206630:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000480u, 1, 1);
    }
L_00206634:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0020594c;
        }
    }
L_00206638:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0020663c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00206640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00206644:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00206648:;
    {
        goto L_00205950;
    }
L_0020664c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00206650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002058e8;
        }
    }
L_00206654:;
    {
        goto L_00206608;
    }
}
