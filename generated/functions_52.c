#include "functions.h"

/* _ZN14gxBezierCurve3D1Ev @ 0014420c (arm) */
void fn_0014420c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014420c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00144210:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00144214:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_00144218:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014421c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014422c;
        }
    }
L_00144220:;
    {
        cpu->r[14] = 0x00144224u; fn_0018ba60(cpu);
    }
L_00144224:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144228:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_0014422c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_00144230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144244;
        }
    }
L_00144238:;
    {
        cpu->r[14] = 0x0014423cu; fn_0018ba60(cpu);
    }
L_0014423c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144240:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00144244:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_00144248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014424c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014425c;
        }
    }
L_00144250:;
    {
        cpu->r[14] = 0x00144254u; fn_0018ba60(cpu);
    }
L_00144254:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144258:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_0014425c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00144260:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144274;
        }
    }
L_00144268:;
    {
        cpu->r[14] = 0x0014426cu; fn_0018ba60(cpu);
    }
L_0014426c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144270:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00144274:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00144278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014427c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014428c;
        }
    }
L_00144280:;
    {
        cpu->r[14] = 0x00144284u; fn_0018ba60(cpu);
    }
L_00144284:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144288:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_0014428c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00144290:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144294:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001442a4;
        }
    }
L_00144298:;
    {
        cpu->r[14] = 0x0014429cu; fn_0018ba60(cpu);
    }
L_0014429c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001442a0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001442a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001442a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001442ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001442b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001442c8;
        }
    }
L_001442b4:;
    {
        cpu->r[14] = 0x001442b8u; fn_0018ba60(cpu);
    }
L_001442b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001442bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001442c0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001442c4:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001442c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001442cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001442e0;
        }
    }
L_001442d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001442d4:;
    {
        cpu->r[14] = 0x001442d8u; fn_0018ba60(cpu);
    }
L_001442d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001442dc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001442e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001442e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001442e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001442f8;
        }
    }
L_001442ec:;
    {
        cpu->r[14] = 0x001442f0u; fn_0018ba60(cpu);
    }
L_001442f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001442f4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001442f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001442fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144310;
        }
    }
L_00144304:;
    {
        cpu->r[14] = 0x00144308u; fn_0018ba60(cpu);
    }
L_00144308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014430c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00144310:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00144314:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144328;
        }
    }
L_0014431c:;
    {
        cpu->r[14] = 0x00144320u; fn_0018ba60(cpu);
    }
L_00144320:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144324:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00144328:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014432c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00144330u)) return;
    }
}

/* _ZN14gxBezierCurve3D2Ev @ 00144330 (arm) */
void fn_00144330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00144330:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00144334:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00144338:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_0014433c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144350;
        }
    }
L_00144344:;
    {
        cpu->r[14] = 0x00144348u; fn_0018ba60(cpu);
    }
L_00144348:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014434c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00144350:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_00144354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144368;
        }
    }
L_0014435c:;
    {
        cpu->r[14] = 0x00144360u; fn_0018ba60(cpu);
    }
L_00144360:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144364:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00144368:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_0014436c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144380;
        }
    }
L_00144374:;
    {
        cpu->r[14] = 0x00144378u; fn_0018ba60(cpu);
    }
L_00144378:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014437c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_00144380:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00144384:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144398;
        }
    }
L_0014438c:;
    {
        cpu->r[14] = 0x00144390u; fn_0018ba60(cpu);
    }
L_00144390:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144394:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00144398:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0014439c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001443a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001443b0;
        }
    }
L_001443a4:;
    {
        cpu->r[14] = 0x001443a8u; fn_0018ba60(cpu);
    }
L_001443a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001443ac:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001443b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_001443b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001443b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001443c8;
        }
    }
L_001443bc:;
    {
        cpu->r[14] = 0x001443c0u; fn_0018ba60(cpu);
    }
L_001443c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001443c4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001443c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001443cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001443d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001443d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001443ec;
        }
    }
L_001443d8:;
    {
        cpu->r[14] = 0x001443dcu; fn_0018ba60(cpu);
    }
L_001443dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001443e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001443e4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001443e8:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001443ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001443f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144404;
        }
    }
L_001443f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001443f8:;
    {
        cpu->r[14] = 0x001443fcu; fn_0018ba60(cpu);
    }
L_001443fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144400:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00144404:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00144408:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014440c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014441c;
        }
    }
L_00144410:;
    {
        cpu->r[14] = 0x00144414u; fn_0018ba60(cpu);
    }
L_00144414:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144418:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_0014441c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00144420:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00144424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144434;
        }
    }
L_00144428:;
    {
        cpu->r[14] = 0x0014442cu; fn_0018ba60(cpu);
    }
L_0014442c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144430:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00144434:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00144438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014443c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014444c;
        }
    }
L_00144440:;
    {
        cpu->r[14] = 0x00144444u; fn_0018ba60(cpu);
    }
L_00144444:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00144448:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0014444c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00144450:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00144454u)) return;
    }
}

/* _ZN14gxBezierCurve3C1EiP8Vector3d @ 00144454 (arm) */
void fn_00144454(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00144454:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00144458:;
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
L_0014445c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00144460:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00144464:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00144468:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014446c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00144470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144a14;
        }
    }
L_00144474:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00144478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0014447c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_00144480:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00144484:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144488:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014448c:;
    {
        cpu->r[14] = 0x00144490u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144490:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00144494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001444c0;
        }
    }
L_00144498:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0014449c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001444a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001444a8u + + 0x10cu);
    }
L_001444a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001444a8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001444ac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001444b0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001444b4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001444b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001444bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001444a4;
        }
    }
L_001444c0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001444c4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001444c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001444cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014453c;
        }
    }
L_001444d0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_001444d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001444d8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001444dc:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001444e0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001444e4:;
    {
        goto L_001444ec;
    }
L_001444e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001444ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001444f0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001444f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001444f8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001444fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00144500:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00144504:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00144508:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0014450c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00144510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00144514:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_00144518:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0014451c:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00144520:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00144524:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00144528:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014452c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[10]);
    }
L_00144530:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144534:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144538:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001444e8;
        }
    }
L_0014453c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_00144540:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00144544:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144548:;
    {
        cpu->r[14] = 0x0014454cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014454c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00144550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144578;
        }
    }
L_00144554:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00144558:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00144560u + + 0x54u);
    }
L_0014455c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00144560:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144564:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00144568:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014456c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014455c;
        }
    }
L_00144578:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014457c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00144580:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00144584:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014460c;
        }
    }
L_00144588:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_0014458c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00144590:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_00144594:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00144598:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0014459c:;
    {
        goto L_001445bc;
    }
L_001445b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_001445bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001445c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001445c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001445c8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001445cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001445d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001445d4:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_001445d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001445dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001445e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001445e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_001445e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001445ec:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_001445f0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001445f4:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001445f8:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001445fc:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[10]);
    }
L_00144600:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144604:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144608:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001445b8;
        }
    }
L_0014460c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00144610:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00144614:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
        }
    }
L_00144618:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00144954;
        }
    }
L_0014461c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144620:;
    {
        cpu->r[14] = 0x00144624u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144628:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_0014462c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00144630:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00144634:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144638:;
    {
        cpu->r[14] = 0x0014463cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014463c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00144644:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_00144648:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_0014464c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144674;
        }
    }
L_00144650:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
    }
L_00144654:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00144658:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_0014465c:;
    {
        cpu->r[1] = rd32(cpu->r[14]);
    }
L_00144660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00144664:;
    {
        wr32(cpu->r[14] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_00144668:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0014466c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00144670:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00144658;
        }
    }
L_00144674:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00144678:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00144680u + - 0xd0u);
    }
L_0014467c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_00144680:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00144684:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00144688:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014468c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144690:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144694:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001446f0;
        }
    }
L_00144698:;
    {
        cpu->r[12] = cpu->r[14];
    }
L_0014469c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001446a0:;
    {
        cpu->r[5] = rd32(cpu->r[14] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001446a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001446a8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_001446ac:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001446b0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
    }
L_001446b4:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001446b8:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[10]);
    }
L_001446bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001446c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001446c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001446c8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001446cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001446d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001446d4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001446d8:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x4u;
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
        cpu->r[1] = wb_tmp;
    }
L_001446dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001446bc;
        }
    }
L_001446e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001446e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001446e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001446ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001446a0;
        }
    }
L_001446f0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001446f4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001446f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001446fc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_00144700:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144704:;
    {
        cpu->r[14] = 0x00144708u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0014470c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00144710:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144714:;
    {
        cpu->r[14] = 0x00144718u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144718:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0014471c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00144720:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_00144724:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_00144728:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
        }
    }
L_0014472c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00144730:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001448f4;
        }
    }
L_00144734:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00144738:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0014473c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_00144740:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_00144744:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00144748:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0014474c:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_00144750:;
    {
        *vfp_s(cpu, 6) = *(float*)G(0x00144758u + - 0x1a4u);
    }
L_00144754:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00144758:;
    {
        *vfp_s(cpu, 7) = *(float*)G(0x00144760u + - 0x1b0u);
    }
L_0014475c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00144760:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_00144764:;
    {
        uint32_t v = cpu->r[9] & 0x00000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00144768:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,6);
    }
L_0014476c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[6] = v;
        }
    }
L_00144770:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00144774:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00144778:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0014477c:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[5]);
    }
L_00144780:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[6] = v;
        }
    }
L_00144784:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
        }
    }
L_00144788:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
        }
    }
L_0014478c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_00144790:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00144794:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
        }
    }
L_00144798:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_0014479c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144844;
        }
    }
L_001447a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001447a4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_001447a8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001447ac:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001447b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001447b4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001447b8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001447bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001447c0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_001447c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_001447c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001447cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001447d0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001447d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001447d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001447dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001447e0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001447e4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_001447e8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_001447ec:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001447f0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001447f4:;
    {
        cpu->r[14] = rd32(cpu->r[7] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001447f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001447fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00144800:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00144804:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_00144808:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[10]);
    }
L_0014480c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[14]);
    }
L_00144810:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00144814:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00144818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0014481c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_00144820:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00144824:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_00144828:;
    {
        vfp_vmla(cpu, 15, 8, 9);
    }
L_0014482c:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00144830:;
    {
        vfp_vmul(cpu, 13, 12, 13);
    }
L_00144834:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_00144838:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014483c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001447d8;
        }
    }
L_00144840:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_00144844:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00144848:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_0014484c:;
    {
        vfp_vadd(cpu, 14, 15, 15);
    }
L_00144850:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00144854:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00144858:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014485c:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[3]);
    }
L_00144860:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001448ac;
        }
    }
L_00144864:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_00144868:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0014486c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00144870:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00144874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00144878:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0014487c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00144880:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_00144884:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144888:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0014488c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00144890:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00144894:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_00144898:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_0014489c:;
    {
        vfp_vmul(cpu, 13, 13, 13);
    }
L_001448a0:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_001448a4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001448a8:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[7]);
    }
L_001448ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001448b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001448b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 0);
    }
L_001448b8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001448bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001448c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001448c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001448c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001448cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001448d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001448d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001448d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001448dc:;
    {
        vfp_vdiv(cpu, 15, 7, 15);
    }
L_001448e0:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001448e4:;
    {
        wr32(cpu->r[0] + cpu->r[11], cpu->r[7]);
    }
L_001448e8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001448ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00144764;
        }
    }
L_001448f0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_001448f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001448f8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00144900u + - 0x350u);
    }
L_001448fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144900:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00144904:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144908:;
    {
        cpu->r[14] = 0x0014490cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014490c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144910:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_00144914:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144918:;
    {
        cpu->r[14] = 0x0014491cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014491c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144920:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_00144924:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144928:;
    {
        cpu->r[14] = 0x0014492cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014492c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144930:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00144934:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144938:;
    {
        cpu->r[14] = 0x0014493cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014493c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144940:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_00144944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00144948:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0014494c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00144950:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00144954u)) return;
    }
L_00144954:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 0);
    }
L_00144958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0014495c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144960:;
    {
        cpu->r[14] = 0x00144964u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144964:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00144968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144990;
        }
    }
L_0014496c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00144970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00144978u + - 0x3c4u);
    }
L_00144974:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00144978:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014497c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_00144980:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144984:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0014498c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144974;
        }
    }
L_00144990:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144994:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00144998:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_0014499c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014461c;
        }
    }
L_001449a0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_001449a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001449a8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 0);
    }
L_001449ac:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001449b0:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001449b4:;
    {
        goto L_001449bc;
    }
L_001449b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001449bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001449c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001449c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001449c8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001449cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001449d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001449d4:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_001449d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001449dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001449e0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001449e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_001449e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001449ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001449f0:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_001449f4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001449f8:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001449fc:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144a00:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[8]);
    }
L_00144a04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144a08:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144a0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001449b8;
        }
    }
L_00144a10:;
    {
        goto L_0014461c;
    }
L_00144a14:;
    {
        cpu->r[1] = rd32(0x00144a1cu + - 0x47cu);
    }
L_00144a18:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00144a1c:;
    {
        cpu->r[12] = rd32(0x00144a24u + - 0x480u);
    }
L_00144a20:;
    {
        cpu->r[14] = 0x00000483u;
    }
L_00144a24:;
    {
        cpu->r[2] = rd32(0x00144a2cu + - 0x484u);
    }
L_00144a28:;
    {
        cpu->r[1] = add_flags(cpu, 0x00144a30u, cpu->r[1], 0, 0);
    }
L_00144a2c:;
    {
        cpu->r[3] = rd32(0x00144a34u + - 0x488u);
    }
L_00144a30:;
    {
        cpu->r[12] = add_flags(cpu, 0x00144a38u, cpu->r[12], 0, 0);
    }
L_00144a34:;
    {
        cpu->r[2] = add_flags(cpu, 0x00144a3cu, cpu->r[2], 0, 0);
    }
L_00144a38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000058u, 0, 0);
    }
L_00144a3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00144a44u, cpu->r[3], 0, 0);
    }
L_00144a40:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00144a44:;
    {
        cpu->r[14] = 0x00144a48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00144a48:;
    {
        goto L_00144474;
    }
}

/* _ZN14gxBezierCurve3C2EiP8Vector3d @ 00144a4c (arm) */
void fn_00144a4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00144a4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00144a50:;
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
L_00144a54:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00144a58:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00144a5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00144a60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00144a64:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00144a68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014500c;
        }
    }
L_00144a6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00144a70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00144a74:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_00144a78:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00144a7c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144a80:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00144a84:;
    {
        cpu->r[14] = 0x00144a88u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144a88:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00144a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144ab8;
        }
    }
L_00144a90:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00144a94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00144a98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00144aa0u + + 0x10cu);
    }
L_00144a9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144aa0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144aa4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00144aa8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144aac:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144ab0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144ab4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144a9c;
        }
    }
L_00144ab8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144abc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00144ac0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00144ac4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144b34;
        }
    }
L_00144ac8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x8u);
    }
L_00144acc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00144ad0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00144ad4:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00144ad8:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00144adc:;
    {
        goto L_00144ae4;
    }
L_00144ae0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00144ae4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00144ae8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00144aec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00144af0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00144af4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00144af8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00144afc:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00144b00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144b04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00144b08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00144b0c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_00144b10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144b14:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00144b18:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00144b1c:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00144b20:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144b24:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[10]);
    }
L_00144b28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144b2c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144b30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00144ae0;
        }
    }
L_00144b34:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_00144b38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00144b3c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144b40:;
    {
        cpu->r[14] = 0x00144b44u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144b44:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00144b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144b70;
        }
    }
L_00144b4c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00144b50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00144b58u + + 0x54u);
    }
L_00144b54:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00144b58:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144b5c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00144b60:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144b64:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144b68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144b6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144b54;
        }
    }
L_00144b70:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144b74:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00144b78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_00144b7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144c04;
        }
    }
L_00144b80:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_00144b84:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00144b88:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_00144b8c:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00144b90:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00144b94:;
    {
        goto L_00144bb4;
    }
L_00144bb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00144bb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00144bb8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00144bbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00144bc0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00144bc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00144bc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00144bcc:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00144bd0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00144bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00144bdc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_00144be0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144be4:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00144be8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00144bec:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00144bf0:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144bf4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[10]);
    }
L_00144bf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144bfc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144c00:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00144bb0;
        }
    }
L_00144c04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00144c08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00144c0c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
        }
    }
L_00144c10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00144f4c;
        }
    }
L_00144c14:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144c18:;
    {
        cpu->r[14] = 0x00144c1cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00144c1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144c20:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00144c24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00144c28:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00144c2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144c30:;
    {
        cpu->r[14] = 0x00144c34u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144c38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00144c3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_00144c40:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_00144c44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144c6c;
        }
    }
L_00144c48:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
    }
L_00144c4c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00144c50:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_00144c54:;
    {
        cpu->r[1] = rd32(cpu->r[14]);
    }
L_00144c58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00144c5c:;
    {
        wr32(cpu->r[14] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_00144c60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144c64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00144c68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00144c50;
        }
    }
L_00144c6c:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00144c70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00144c78u + - 0xd0u);
    }
L_00144c74:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_00144c78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00144c7c:;
    {
        cpu->r[2] = rd32(cpu->r[14]);
    }
L_00144c80:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144c84:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144c88:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144c8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144ce8;
        }
    }
L_00144c90:;
    {
        cpu->r[12] = cpu->r[14];
    }
L_00144c94:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00144c98:;
    {
        cpu->r[5] = rd32(cpu->r[14] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00144c9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00144ca0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_00144ca4:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00144ca8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
    }
L_00144cac:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00144cb0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[10]);
    }
L_00144cb4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00144cb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00144cbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00144cc0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00144cc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144cc8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00144ccc:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00144cd0:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x4u;
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
        cpu->r[1] = wb_tmp;
    }
L_00144cd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00144cb4;
        }
    }
L_00144cd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00144cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00144ce0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00144ce4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144c98;
        }
    }
L_00144ce8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00144cec:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00144cf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00144cf4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_00144cf8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144cfc:;
    {
        cpu->r[14] = 0x00144d00u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144d00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00144d04:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00144d08:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144d0c:;
    {
        cpu->r[14] = 0x00144d10u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144d10:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00144d14:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00144d18:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_00144d1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_00144d20:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
        }
    }
L_00144d24:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00144d28:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00144eec;
        }
    }
L_00144d2c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00144d30:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00144d34:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_00144d38:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_00144d3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00144d40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00144d44:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_00144d48:;
    {
        *vfp_s(cpu, 6) = *(float*)G(0x00144d50u + - 0x1a4u);
    }
L_00144d4c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00144d50:;
    {
        *vfp_s(cpu, 7) = *(float*)G(0x00144d58u + - 0x1b0u);
    }
L_00144d54:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00144d58:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_00144d5c:;
    {
        uint32_t v = cpu->r[9] & 0x00000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00144d60:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,6);
    }
L_00144d64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[6] = v;
        }
    }
L_00144d68:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00144d6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00144d70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00144d74:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[5]);
    }
L_00144d78:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[6] = v;
        }
    }
L_00144d7c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
        }
    }
L_00144d80:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
        }
    }
L_00144d84:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_00144d88:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00144d8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
        }
    }
L_00144d90:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00144d94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144e3c;
        }
    }
L_00144d98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00144d9c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_00144da0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_00144da4:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00144da8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00144dac:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00144db0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_00144db4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00144db8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_00144dbc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00144dc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00144dc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00144dc8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144dcc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_00144dd0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00144dd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00144dd8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00144ddc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_00144de0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_00144de4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00144de8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144dec:;
    {
        cpu->r[14] = rd32(cpu->r[7] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00144df0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_00144df4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00144df8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_00144dfc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_00144e00:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[10]);
    }
L_00144e04:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[14]);
    }
L_00144e08:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00144e0c:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00144e10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00144e14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_00144e18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00144e1c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_00144e20:;
    {
        vfp_vmla(cpu, 15, 8, 9);
    }
L_00144e24:;
    {
        vfp_vmla(cpu, 15, 10, 11);
    }
L_00144e28:;
    {
        vfp_vmul(cpu, 13, 12, 13);
    }
L_00144e2c:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_00144e30:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00144e34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144dd0;
        }
    }
L_00144e38:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_00144e3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00144e40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00144e44:;
    {
        vfp_vadd(cpu, 14, 15, 15);
    }
L_00144e48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00144e4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00144e50:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144e54:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[3]);
    }
L_00144e58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144ea4;
        }
    }
L_00144e5c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_00144e60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00144e64:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00144e68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00144e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00144e70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00144e74:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00144e78:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_00144e7c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144e80:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00144e84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00144e88:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00144e8c:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_00144e90:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00144e94:;
    {
        vfp_vmul(cpu, 13, 13, 13);
    }
L_00144e98:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_00144e9c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144ea0:;
    {
        wr32(cpu->r[10] + cpu->r[11], cpu->r[7]);
    }
L_00144ea4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00144ea8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00144eac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 0);
    }
L_00144eb0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00144eb4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00144eb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00144ebc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00144ec0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00144ec4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_00144ec8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00144ecc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00144ed0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_00144ed4:;
    {
        vfp_vdiv(cpu, 15, 7, 15);
    }
L_00144ed8:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00144edc:;
    {
        wr32(cpu->r[0] + cpu->r[11], cpu->r[7]);
    }
L_00144ee0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00144ee4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00144d5c;
        }
    }
L_00144ee8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_00144eec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00144ef0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00144ef8u + - 0x350u);
    }
L_00144ef4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00144ef8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00144efc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144f00:;
    {
        cpu->r[14] = 0x00144f04u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144f04:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144f08:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_00144f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144f10:;
    {
        cpu->r[14] = 0x00144f14u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144f14:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144f18:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_00144f1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144f20:;
    {
        cpu->r[14] = 0x00144f24u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144f24:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144f28:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00144f2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00144f30:;
    {
        cpu->r[14] = 0x00144f34u; imp__Znaj(cpu); /* _Znaj */
    }
L_00144f34:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00144f38:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_00144f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00144f40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00144f44:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00144f48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00144f4cu)) return;
    }
L_00144f4c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 0);
    }
L_00144f50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00144f54:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00144f58:;
    {
        cpu->r[14] = 0x00144f5cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00144f5c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00144f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00144f88;
        }
    }
L_00144f64:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00144f68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00144f70u + - 0x3c4u);
    }
L_00144f6c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00144f70:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144f74:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_00144f78:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144f7c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00144f80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144f84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00144f6c;
        }
    }
L_00144f88:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00144f8c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00144f90:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_00144f94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00144c14;
        }
    }
L_00144f98:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_00144f9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00144fa0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 0);
    }
L_00144fa4:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00144fa8:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00144fac:;
    {
        goto L_00144fb4;
    }
L_00144fb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00144fb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00144fb8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00144fbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00144fc0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00144fc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00144fc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00144fcc:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00144fd0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00144fd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00144fd8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00144fdc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_00144fe0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00144fe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00144fe8:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00144fec:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00144ff0:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00144ff4:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00144ff8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[8]);
    }
L_00144ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00145000:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145004:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00144fb0;
        }
    }
L_00145008:;
    {
        goto L_00144c14;
    }
L_0014500c:;
    {
        cpu->r[1] = rd32(0x00145014u + - 0x47cu);
    }
L_00145010:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00145014:;
    {
        cpu->r[12] = rd32(0x0014501cu + - 0x480u);
    }
L_00145018:;
    {
        cpu->r[14] = 0x00000483u;
    }
L_0014501c:;
    {
        cpu->r[2] = rd32(0x00145024u + - 0x484u);
    }
L_00145020:;
    {
        cpu->r[1] = add_flags(cpu, 0x00145028u, cpu->r[1], 0, 0);
    }
L_00145024:;
    {
        cpu->r[3] = rd32(0x0014502cu + - 0x488u);
    }
L_00145028:;
    {
        cpu->r[12] = add_flags(cpu, 0x00145030u, cpu->r[12], 0, 0);
    }
L_0014502c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00145034u, cpu->r[2], 0, 0);
    }
L_00145030:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000058u, 0, 0);
    }
L_00145034:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014503cu, cpu->r[3], 0, 0);
    }
L_00145038:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014503c:;
    {
        cpu->r[14] = 0x00145040u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00145040:;
    {
        goto L_00144a6c;
    }
}

/* _ZN13gxLookAtCurve7computeEP7CMatrixS1_R8Vector3d @ 00145044 (arm) */
void fn_00145044(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145044:;
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
L_00145048:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x1cu);
    }
L_0014504c:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x6u);
    }
L_00145050:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x2cu);
    }
L_00145054:;
    {
        cpu->r[14] = rd8(cpu->r[0] + + 0x8u);
    }
L_00145058:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014505c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00145060:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00145064:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[7] = v;
    }
L_00145068:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014506c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_00145070:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00145074:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00145078:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0014507c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00145080:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00145084:;
    {
        vfp_vsub(cpu, 10, 10, 15);
    }
L_00145088:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0014508c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00145094u + + 0x2a8u);
    }
L_00145090:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00145094:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145098:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014509c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450a0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001450a4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_001450a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001450ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450bc:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001450c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001450c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001450cc:;
    {
        vfp_vsub(cpu, 12, 13, 12);
    }
L_001450d0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001450d4:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x7u);
    }
L_001450d8:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_001450dc:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001450e0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001450e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001452c0;
        }
    }
L_001450e8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00145268;
        }
    }
L_001450ec:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000002u, 1, 1);
    }
L_001450f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[6] + + 0x5u);
        }
    }
L_001450f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145294;
        }
    }
L_001450f8:;
    {
        { uint32_t v = cpu->r[14] & 0x00000004u; set_nz(cpu, v); }
    }
L_001450fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145150;
        }
    }
L_00145100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_00145104:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00145108:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014510c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00145110:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00145114:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x38u);
    }
L_00145118:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + - 0x38u);
    }
L_0014511c:;
    {
        vfp_vmul(cpu, 15, 14, 13);
    }
L_00145120:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x3cu);
    }
L_00145124:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + - 0x3cu);
    }
L_00145128:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + - 0x34u);
    }
L_0014512c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + - 0x34u);
    }
L_00145130:;
    {
        vfp_vmla(cpu, 15, 11, 12);
    }
L_00145134:;
    {
        vfp_vmla(cpu, 15, 10, 9);
    }
L_00145138:;
    {
        vfp_vmls(cpu, 9, 10, 15);
    }
L_0014513c:;
    {
        vfp_vmls(cpu, 11, 12, 15);
    }
L_00145140:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00145144:;
    {
        vfp_vmls(cpu, 13, 14, 15);
    }
L_00145148:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0014514c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00145150:;
    {
        cpu->r[14] = 0x00145154u; fn_00155f80(cpu);
    }
L_00145154:;
    {
        cpu->r[10] = rd8(cpu->r[6] + + 0x6u);
    }
L_00145158:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x7u);
    }
L_0014515c:;
    {
        cpu->r[7] = 0x00005556u;
    }
L_00145160:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000003u, cpu->r[10], 1, 0);
    }
L_00145164:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x5555u << 16);
    }
L_00145168:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0014516c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00145170:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00145174:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00145178:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014517c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00145180:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[3]; cpu->r[14] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00145184:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00145188:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0014518c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00145190:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00145194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00145198:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0014519c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001451a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001451a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001451a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_001451ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001451b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001451b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001451b8:;
    {
        cpu->r[14] = 0x001451bcu; fn_00155a0c(cpu);
    }
L_001451bc:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001451c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001451c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_001451c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000003cu, 1, 0);
    }
L_001451cc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001451d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_001451d4:;
    {
        cpu->r[14] = 0x001451d8u; fn_00155f80(cpu);
    }
L_001451d8:;
    {
        cpu->r[6] = rd8(cpu->r[6] + + 0x7u);
    }
L_001451dc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001451e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001451e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_001451e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001451ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001451f0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001451f4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_001451f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001451fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00145200:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00145204:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00145208:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0014520c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00145210:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00145214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_00145218:;
    {
        cpu->r[14] = 0x0014521cu; fn_00155a0c(cpu);
    }
L_0014521c:;
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
L_00145220:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00145224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
    }
L_00145228:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000003cu, 1, 0);
    }
L_0014522c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00145230:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00145234:;
    {
        cpu->r[14] = 0x00145238u; fn_00155f80(cpu);
    }
L_00145238:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014523c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00145240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00145244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00145248:;
    {
        cpu->r[14] = 0x0014524cu; fn_00152e10(cpu);
    }
L_0014524c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00145250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00145254:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00145258:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014525c:;
    {
        cpu->r[14] = 0x00145260u; fn_0015364c(cpu);
    }
L_00145260:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00145264:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145268u)) return;
    }
L_00145268:;
    {
        cpu->r[14] = rd8(cpu->r[6] + + 0x5u);
    }
L_0014526c:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_00145270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145328;
        }
    }
L_00145274:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00145278:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014527c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00145284u + + 0xbcu);
    }
L_00145280:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00145284:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145288:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014528c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145290:;
    {
        goto L_001450f8;
    }
L_00145294:;
    {
        cpu->r[14] = rd8(cpu->r[6] + + 0x5u);
    }
L_00145298:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014529c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145314;
        }
    }
L_001452a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001452a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001452a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001452b0u + + 0x90u);
    }
L_001452ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001452b0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001452b4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001452b8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001452bc:;
    {
        goto L_001450f8;
    }
L_001452c0:;
    {
        cpu->r[14] = rd8(cpu->r[6] + + 0x5u);
    }
L_001452c4:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_001452c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001452f4;
        }
    }
L_001452cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001452d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001452d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_001452d8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x24u);
    }
L_001452dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001452e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001452e4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001452e8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001452ec:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001452f0:;
    {
        goto L_001450f8;
    }
L_001452f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001452f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001452fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00145304u + + 0x3cu);
    }
L_00145300:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00145304:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145308:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014530c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145310:;
    {
        goto L_001450f8;
    }
L_00145314:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00145318:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_0014531c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_00145320:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x28u);
    }
L_00145324:;
    {
        goto L_001452dc;
    }
L_00145328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0014532c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00145330:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_00145334:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x20u);
    }
L_00145338:;
    {
        goto L_001452dc;
    }
}

/* _ZN12gxPolynomial10boundRootsERfS0_ @ 00145344 (arm) */
void fn_00145344(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145344:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00145348:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014534c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_00145350:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145354:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00145358:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014535c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001453b8;
        }
    }
L_00145360:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00145364:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00145368:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00145370u + + 0x50u);
    }
L_0014536c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00145370:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00145374:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00145378:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_0014537c:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00145380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014536c;
        }
    }
L_00145384:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_00145388:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_0014538c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145390:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001453a0;
        }
    }
L_00145394:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00145398:;
    {
        cpu->r[14] = 0x0014539cu; imp_sqrtf(cpu); /* sqrtf */
    }
L_0014539c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001453a0:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001453a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001453a8:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001453ac:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001453b0:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001453b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001453b8u)) return;
    }
L_001453b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001453c0u);
    }
L_001453bc:;
    {
        goto L_00145384;
    }
}

/* _ZN12gxPolynomial20computeRoots_QuadricEPf @ 001453c4 (arm) */
void fn_001453c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001453c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001453c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001453d0u + + 0xd8u);
    }
L_001453cc:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_001453d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001453d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001453d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001453dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001453e0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001453e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001453e8:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001453ec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001453f4u + + 0xb8u);
    }
L_001453f0:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001453f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_001453f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001453fc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00145400:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014542c;
        }
    }
L_00145404:;
    {
        vfp_vabs(cpu, 11, 15);
    }
L_00145408:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00145410u + + 0xa0u);
    }
L_0014540c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_00145410:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00145418u + + 0x9cu);
    }
L_00145414:;
    {
        vfp_sync_flags(cpu);
    }
L_00145418:;
    {
        vfp_vdiv(cpu, 16, 12, 13);
    }
L_0014541c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00145438;
        }
    }
L_00145420:;
    {
        vfp_vnmul(cpu, 15, 14, 16);
    }
L_00145424:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00145428:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014542c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00145430:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00145434:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00145438u)) return;
    }
L_00145438:;
    {
        vfp_vsqrt(cpu, 13, 15);
    }
L_0014543c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,13));
    }
L_00145440:;
    {
        vfp_sync_flags(cpu);
    }
L_00145444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014546c;
        }
    }
L_00145448:;
    {
        vfp_vneg(cpu, 15, 14);
    }
L_0014544c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00145450:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_00145454:;
    {
        vfp_vsub(cpu, 13, 15, 13);
    }
L_00145458:;
    {
        vfp_vmul(cpu, 14, 14, 16);
    }
L_0014545c:;
    {
        vfp_vmul(cpu, 15, 13, 16);
    }
L_00145460:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00145464:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145468:;
    {
        goto L_0014542c;
    }
L_0014546c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00145470:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00145474:;
    {
        cpu->r[14] = 0x00145478u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00145478:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0014547c:;
    {
        vfp_vneg(cpu, 15, 14);
    }
L_00145480:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00145484:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00145488:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_0014548c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00145490:;
    {
        vfp_vsub(cpu, 13, 15, 13);
    }
L_00145494:;
    {
        vfp_vmul(cpu, 14, 14, 16);
    }
L_00145498:;
    {
        vfp_vmul(cpu, 15, 13, 16);
    }
L_0014549c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001454a0:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001454a4:;
    {
        goto L_0014542c;
    }
}

/* _ZN12gxPolynomial20computeRoots_QuadricEffPf @ 001454b8 (arm) */
void fn_001454b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001454b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001454c0u + + 0x110u);
    }
L_001454bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001454c0:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_001454c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001454c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001454cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001454d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001454d4:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001454d8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_001454dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001454e0:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[2];
    }
L_001454e4:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001454e8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001454f0u + + 0xe4u);
    }
L_001454ec:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001454f0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_001454f4:;
    {
        vfp_sync_flags(cpu);
    }
L_001454f8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014553c;
        }
    }
L_001454fc:;
    {
        vfp_vabs(cpu, 11, 15);
    }
L_00145500:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00145508u + + 0xd0u);
    }
L_00145504:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_00145508:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00145510u + + 0xccu);
    }
L_0014550c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145510:;
    {
        vfp_vdiv(cpu, 16, 12, 13);
    }
L_00145514:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0014554c;
        }
    }
L_00145518:;
    {
        vfp_vnmul(cpu, 15, 14, 16);
    }
L_0014551c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00145520:;
    {
        vfp_sync_flags(cpu);
    }
L_00145524:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014553c;
        }
    }
L_00145528:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,18));
    }
L_0014552c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145530:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00145534:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00145538:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00145540;
        }
    }
L_0014553c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00145540:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00145544:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00145548:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014554cu)) return;
    }
L_0014554c:;
    {
        vfp_vsqrt(cpu, 13, 15);
    }
L_00145550:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,13));
    }
L_00145554:;
    {
        vfp_sync_flags(cpu);
    }
L_00145558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145574;
        }
    }
L_0014555c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00145560:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00145564:;
    {
        cpu->r[14] = 0x00145568u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00145568:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014556c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00145570:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00145574:;
    {
        vfp_vneg(cpu, 15, 14);
    }
L_00145578:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_0014557c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00145580:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_00145584:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00145588:;
    {
        vfp_vmul(cpu, 14, 14, 16);
    }
L_0014558c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145590:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001455c8;
        }
    }
L_00145594:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,18));
    }
L_00145598:;
    {
        vfp_sync_flags(cpu);
    }
L_0014559c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[3] = ea + 4u;
        }
    }
L_001455a0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001455a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001455c8;
        }
    }
L_001455a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,17));
    }
L_001455ac:;
    {
        vfp_sync_flags(cpu);
    }
L_001455b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00145540;
        }
    }
L_001455b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,18));
    }
L_001455b8:;
    {
        vfp_sync_flags(cpu);
    }
L_001455bc:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001455c0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001455c4:;
    {
        goto L_00145540;
    }
L_001455c8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001455cc:;
    {
        goto L_001455a8;
    }
}

/* _ZN9gxComplex4SqrtEv @ 001455e0 (arm) */
void fn_001455e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001455e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001455e4:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001455e8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001455f0u + + 0x158u);
    }
L_001455ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001455f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001455f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001455f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001455fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00145600:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0014562c;
        }
    }
L_00145604:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00145608:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_0014560c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_00145610:;
    {
        vfp_sync_flags(cpu);
    }
L_00145614:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00145634;
        }
    }
L_00145618:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00145620u + + 0x12cu);
    }
L_0014561c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145620:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145624:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00145628:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014562cu)) return;
    }
L_0014562c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00145630:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00145634:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00145638:;
    {
        vfp_sync_flags(cpu);
    }
L_0014563c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001456b0;
        }
    }
L_00145640:;
    {
        vfp_vsqrt(cpu, 17, 15);
    }
L_00145644:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,17));
    }
L_00145648:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014564c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00145728;
        }
    }
L_00145654:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014565cu + + 0xf4u);
    }
L_00145658:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_0014565c:;
    {
        vfp_vmla(cpu, 14, 16, 16);
    }
L_00145660:;
    {
        vfp_vsqrt(cpu, 16, 14);
    }
L_00145664:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014566cu + + 0xe8u);
    }
L_00145668:;
    {
        vfp_vadd(cpu, 15, 16, 15);
    }
L_0014566c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00145670:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_00145674:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_00145678:;
    {
        vfp_sync_flags(cpu);
    }
L_0014567c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001456ec;
        }
    }
L_00145680:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00145684:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00145688:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_0014568c:;
    {
        vfp_sync_flags(cpu);
    }
L_00145690:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014570c;
        }
    }
L_00145694:;
    {
        vfp_vadd(cpu, 13, 15, 15);
    }
L_00145698:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_0014569c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001456a0:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_001456a4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001456a8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001456ac:;
    {
        goto L_00145624;
    }
L_001456b0:;
    {
        vfp_vsqrt(cpu, 17, 14);
    }
L_001456b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,17));
    }
L_001456b8:;
    {
        vfp_vdiv(cpu, 16, 15, 14);
    }
L_001456bc:;
    {
        vfp_sync_flags(cpu);
    }
L_001456c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00145738;
        }
    }
L_001456c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001456ccu + + 0x84u);
    }
L_001456c8:;
    {
        vfp_vmla(cpu, 15, 16, 16);
    }
L_001456cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001456d4u + + 0x80u);
    }
L_001456d0:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_001456d4:;
    {
        vfp_vadd(cpu, 16, 15, 16);
    }
L_001456d8:;
    {
        vfp_vmul(cpu, 14, 16, 14);
    }
L_001456dc:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_001456e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_001456e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001456e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145680;
        }
    }
L_001456ec:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001456f0:;
    {
        cpu->r[14] = 0x001456f4u; imp_sqrtf(cpu); /* sqrtf */
    }
L_001456f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001456f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001456fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00145700:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00145704:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_00145708:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00145694;
        }
    }
L_0014570c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00145710:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00145714:;
    {
        vfp_sync_flags(cpu);
    }
L_00145718:;
    {
        if (cond_test(cpu, 12)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_0014571c:;
    {
        vfp_vadd(cpu, 13, 15, 15);
    }
L_00145720:;
    {
        vfp_vdiv(cpu, 14, 14, 13);
    }
L_00145724:;
    {
        goto L_001456a4;
    }
L_00145728:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014572c:;
    {
        cpu->r[14] = 0x00145730u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00145730:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00145734:;
    {
        goto L_00145654;
    }
L_00145738:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014573c:;
    {
        cpu->r[14] = 0x00145740u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00145740:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00145744:;
    {
        goto L_001456c4;
    }
}

/* _ZN14gxBezierCurve28getSpeedEf @ 00145758 (arm) */
void fn_00145758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145758:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014575c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00145760:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00145764:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00145768:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0014576c:;
    {
        cpu->r[14] = 0x00145770u; fn_001433b8(cpu);
    }
L_00145770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00145774:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00145778:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0014577c:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00145780:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00145784:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00145788:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014578c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00145790u)) return;
    }
}

/* _ZN14gxBezierCurve29getLengthEff @ 00145790 (arm) */
void fn_00145790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145790:;
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
L_00145794:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00145798:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[1];
    }
L_0014579c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001457a0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001457a4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_001457a8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001457ac:;
    {
        cpu->r[14] = 0x001457b0u; fn_00145758(cpu);
    }
L_001457b0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,19);
    }
L_001457b4:;
    {
        vfp_vsub(cpu, 17, 17, 19);
    }
L_001457b8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001457bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001457c0:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_001457c4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001457c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001457cc:;
    {
        cpu->r[14] = 0x001457d0u; fn_00145758(cpu);
    }
L_001457d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001457d8u + + 0x10cu);
    }
L_001457d4:;
    {
        *vfp_s(cpu,18) = *vfp_s(cpu,15);
    }
L_001457d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001457dc:;
    {
        vfp_vmul(cpu, 15, 17, 15);
    }
L_001457e0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001457e4:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_001457e8:;
    {
        vfp_vmul(cpu, 20, 15, 16);
    }
L_001457ec:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,20);
    }
L_001457f0:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x28u;
        wr32(cpu->r[8] + - 0x28u, cpu->r[0]);
        cpu->r[8] = wb_tmp;
    }
L_001457f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000014u, 0, 0);
    }
L_001457f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001458cc;
        }
    }
L_001457fc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00145800:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00145808u + + 0xe0u);
    }
L_00145804:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_00145808:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014580c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00145810:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00145814:;
    {
        vfp_vsub(cpu, 15, 15, 18);
    }
L_00145818:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,19);
    }
L_0014581c:;
    {
        vfp_vmla(cpu, 14, 15, 17);
    }
L_00145820:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00145824:;
    {
        cpu->r[14] = 0x00145828u; fn_00145758(cpu);
    }
L_00145828:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0014582c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00145830:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_00145834:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00145804;
        }
    }
L_00145838:;
    {
        vfp_vmla(cpu, 20, 17, 16);
    }
L_0014583c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00145840:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00145844:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00145848:;
    {
        vfp_vmul(cpu, 14, 20, 18);
    }
L_0014584c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00145850:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00145854:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00145858:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0014585c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00145860:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00145864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00145868:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_0014586c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00145870:;
    {
        vfp_vnmls(cpu, 15, 12, 14);
    }
L_00145874:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00145878:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0014587c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145880:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00145884:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x14u);
        }
    }
L_00145888:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00145850;
        }
    }
L_0014588c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00145890:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00145894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00145898:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0014589c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001458a0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001458a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001458a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00145894;
        }
    }
L_001458ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001458b0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_001458b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001458d4;
        }
    }
L_001458b8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001458bc:;
    {
        vfp_vmul(cpu, 17, 17, 18);
    }
L_001458c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001458c4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[13]);
    }
L_001458c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001457fc;
        }
    }
L_001458cc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001458d4u + + 0x14u);
    }
L_001458d0:;
    {
        goto L_00145838;
    }
L_001458d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001458d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001458dc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_001458e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001458e4u)) return;
    }
}

/* _ZN14gxBezierCurve28setKnotsEP8Vector2d @ 001458ec (arm) */
void fn_001458ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001458ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_001458f0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001458f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001458f8:;
    {
        vfp_vsub(cpu, 9, 9, 15);
    }
L_001458fc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00145900:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00145904:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00145908:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[14] + + 0x4u);
    }
L_0014590c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00145914u + + 0xb0u);
    }
L_00145910:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_00145914:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x1cu);
    }
L_00145918:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_0014591c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00145920:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00145924:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_00145928:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014592c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00145930:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145934:;
    {
        vfp_vsub(cpu, 10, 8, 10);
    }
L_00145938:;
    {
        vfp_vmla(cpu, 13, 9, 15);
    }
L_0014593c:;
    {
        vfp_vmla(cpu, 14, 10, 15);
    }
L_00145940:;
    {
        vfp_vsub(cpu, 13, 13, 11);
    }
L_00145944:;
    {
        vfp_vsub(cpu, 14, 14, 12);
    }
L_00145948:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014594c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00145950:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_00145954:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00145958:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014595c:;
    {
        vfp_vadd(cpu, 13, 13, 13);
    }
L_00145960:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_00145964:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00145968:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[14] + + 0x4u);
    }
L_0014596c:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_00145970:;
    {
        vfp_vsub(cpu, 13, 9, 13);
    }
L_00145974:;
    {
        vfp_vsub(cpu, 14, 10, 14);
    }
L_00145978:;
    {
        vfp_vadd(cpu, 13, 13, 11);
    }
L_0014597c:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_00145980:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_00145984:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_00145988:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014598c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00145990:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00145994:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00145998:;
    {
        vfp_vsub(cpu, 13, 13, 14);
    }
L_0014599c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_001459a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001459a4:;
    {
        vfp_vsub(cpu, 14, 12, 14);
    }
L_001459a8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001459ac:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001459b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001459b4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001459b8:;
    {
        cpu->r[14] = 0x001459bcu; fn_00145790(cpu);
    }
L_001459bc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001459c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001459c4u)) return;
    }
}

/* _ZN14gxBezierCurve218ParamFromArcLengthEff @ 001459c8 (arm) */
void fn_001459c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001459c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001459cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_001459d0:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_001459d4:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[2];
    }
L_001459d8:;
    {
        vfp_vdiv(cpu, 16, 18, 15);
    }
L_001459dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_001459e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001459e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001459e8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001459ec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001459f0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x001459f8u + + 0xa4u);
    }
L_001459f4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x001459fcu + + 0xa4u);
    }
L_001459f8:;
    {
        vfp_vadd(cpu, 16, 16, 14);
    }
L_001459fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00145a00:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145a04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00145a08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00145a0c:;
    {
        cpu->r[14] = 0x00145a10u; fn_00145790(cpu);
    }
L_00145a10:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145a14:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00145a18:;
    {
        vfp_vsub(cpu, 17, 15, 18);
    }
L_00145a1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00145a20:;
    {
        vfp_vabs(cpu, 15, 17);
    }
L_00145a24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,19));
    }
L_00145a28:;
    {
        vfp_sync_flags(cpu);
    }
L_00145a2c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00145a8c;
        }
    }
L_00145a30:;
    {
        cpu->r[14] = 0x00145a34u; fn_00145758(cpu);
    }
L_00145a34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00145a38:;
    {
        vfp_vdiv(cpu, 15, 17, 14);
    }
L_00145a3c:;
    {
        vfp_vabs(cpu, 14, 15);
    }
L_00145a40:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,20));
    }
L_00145a44:;
    {
        vfp_sync_flags(cpu);
    }
L_00145a48:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00145a8c;
        }
    }
L_00145a4c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000014u, 1, 1);
    }
L_00145a50:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00145a54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001459fc;
        }
    }
L_00145a58:;
    {
        cpu->r[1] = rd32(0x00145a60u + + 0x44u);
    }
L_00145a5c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00145a60:;
    {
        cpu->r[12] = rd32(0x00145a68u + + 0x40u);
    }
L_00145a64:;
    {
        cpu->r[14] = 0x0000041cu;
    }
L_00145a68:;
    {
        cpu->r[2] = rd32(0x00145a70u + + 0x3cu);
    }
L_00145a6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00145a74u, cpu->r[1], 0, 0);
    }
L_00145a70:;
    {
        cpu->r[3] = rd32(0x00145a78u + + 0x38u);
    }
L_00145a74:;
    {
        cpu->r[12] = add_flags(cpu, 0x00145a7cu, cpu->r[12], 0, 0);
    }
L_00145a78:;
    {
        cpu->r[2] = add_flags(cpu, 0x00145a80u, cpu->r[2], 0, 0);
    }
L_00145a7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00145a80:;
    {
        cpu->r[3] = add_flags(cpu, 0x00145a88u, cpu->r[3], 0, 0);
    }
L_00145a84:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00145a88:;
    {
        cpu->r[14] = 0x00145a8cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00145a8c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145a90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00145a94:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00145a98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145a9cu)) return;
    }
}

/* _Z4qExpPf @ 00145ab4 (arm) */
void fn_00145ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145ab4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00145ab8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00145abc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00145ac0:;
    {
        vfp_vmul(cpu, 16, 15, 15);
    }
L_00145ac4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00145ac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00145acc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145ad0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00145ad4:;
    {
        vfp_vmla(cpu, 16, 14, 14);
    }
L_00145ad8:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_00145adc:;
    {
        cpu->r[14] = 0x00145ae0u; imp_expf(cpu); /* expf */
    }
L_00145ae0:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_00145ae4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00145ae8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145aec:;
    {
        cpu->r[14] = 0x00145af0u; imp_cosf(cpu); /* cosf */
    }
L_00145af0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00145af4:;
    {
        vfp_sync_flags(cpu);
    }
L_00145af8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00145afc:;
    {
        vfp_vmul(cpu, 15, 17, 14);
    }
L_00145b00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145b48;
        }
    }
L_00145b08:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145b0c:;
    {
        cpu->r[14] = 0x00145b10u; imp_sinf(cpu); /* sinf */
    }
L_00145b10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00145b14:;
    {
        vfp_vmul(cpu, 15, 17, 14);
    }
L_00145b18:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00145b1c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00145b20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00145b24:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_00145b28:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00145b2c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00145b30:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00145b34:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00145b38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00145b3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145b40:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00145b44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00145b48u)) return;
    }
L_00145b48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00145b50u);
    }
L_00145b4c:;
    {
        goto L_00145b1c;
    }
}

/* _Z4qLogPf @ 00145b54 (arm) */
void fn_00145b54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145b54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00145b58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00145b5c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00145b60:;
    {
        vfp_vmul(cpu, 16, 15, 15);
    }
L_00145b64:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_00145b68:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00145b6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00145b70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145b74:;
    {
        vfp_vmla(cpu, 16, 13, 13);
    }
L_00145b78:;
    {
        vfp_vmla(cpu, 16, 14, 14);
    }
L_00145b7c:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,16);
    }
L_00145b80:;
    {
        vfp_vmla(cpu, 11, 15, 15);
    }
L_00145b84:;
    {
        vfp_vsqrt(cpu, 17, 16);
    }
L_00145b88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_00145b8c:;
    {
        cpu->r[14] = 0x00145b90u; imp_logf(cpu); /* logf */
    }
L_00145b90:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_00145b94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,17));
    }
L_00145b98:;
    {
        vfp_sync_flags(cpu);
    }
L_00145b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145bac;
        }
    }
L_00145ba0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00145ba4:;
    {
        cpu->r[14] = 0x00145ba8u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00145ba8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_00145bac:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00145bb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00145bb4:;
    {
        cpu->r[14] = 0x00145bb8u; imp_atan2f(cpu); /* atan2f */
    }
L_00145bb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00145bc0u + + 0x38u);
    }
L_00145bbc:;
    {
        vfp_vmul(cpu, 15, 18, 15);
    }
L_00145bc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00145bc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00145bc8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00145bcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145bd0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00145bd4:;
    {
        vfp_vdiv(cpu, 15, 11, 17);
    }
L_00145bd8:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00145bdc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00145be0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00145be4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00145be8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00145bec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145bf0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00145bf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00145bf8u)) return;
    }
}

/* _ZN16gxBSplineExpQuat4evalEfPf @ 00145bfc (arm) */
void fn_00145bfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145bfc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00145c00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145c04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00145c08:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00145c0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00145c10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00145c14:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00145c18:;
    {
        cpu->r[14] = 0x00145c1cu; fn_00142dcc(cpu);
    }
L_00145c1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00145c20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145c24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00145c28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00145c2c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00145c30:;
    {
        cpu->r[14] = 0x00145c38u;
    }
L_00145c34:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00145c38u)) return;
    }
L_00145c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00145c3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145c40:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00145c44:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[1] = v;
    }
L_00145c48:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00145c4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00145c50:;
    {
        cpu->r[14] = 0x00145c54u; imp_memcpy(cpu); /* memcpy */
    }
L_00145c54:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x10u);
    }
L_00145c58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00145c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00145cc0;
        }
    }
L_00145c60:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00145c64:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_00145c68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145c6c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00145c70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00145c74:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00145c78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00145c7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00145c80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00145c84:;
    {
        cpu->r[14] = 0x00145c88u; fn_00143150(cpu);
    }
L_00145c88:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00145c8c:;
    {
        cpu->r[14] = 0x00145c90u; fn_00145b54(cpu);
    }
L_00145c90:;
    {
        cpu->r[1] = rd32(cpu->r[8] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00145c94:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00145c98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00145c9c:;
    {
        cpu->r[14] = 0x00145ca0u; fn_001432d4(cpu);
    }
L_00145ca0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00145ca4:;
    {
        cpu->r[14] = 0x00145ca8u; fn_00145ab4(cpu);
    }
L_00145ca8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00145cac:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00145cb0:;
    {
        cpu->r[14] = 0x00145cb4u; fn_001432a4(cpu);
    }
L_00145cb4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x10u);
    }
L_00145cb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00145cbc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00145c68;
        }
    }
L_00145cc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00145cc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145cc8u)) return;
    }
}

/* _Z4qMapPf @ 00145cc8 (arm) */
void fn_00145cc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145cc8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00145ccc:;
    {
        vfp_vmul(cpu, 15, 13, 13);
    }
L_00145cd0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_00145cd4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00145cd8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00145cdc:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x00145ce4u + + 0x40u);
    }
L_00145ce0:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00145ce4:;
    {
        vfp_vmla(cpu, 15, 11, 11);
    }
L_00145ce8:;
    {
        vfp_vmul(cpu, 9, 14, 14);
    }
L_00145cec:;
    {
        vfp_vadd(cpu, 10, 15, 9);
    }
L_00145cf0:;
    {
        vfp_vdiv(cpu, 10, 8, 10);
    }
L_00145cf4:;
    {
        vfp_vsub(cpu, 15, 15, 9);
    }
L_00145cf8:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_00145cfc:;
    {
        vfp_vmul(cpu, 15, 15, 10);
    }
L_00145d00:;
    {
        vfp_vmul(cpu, 14, 14, 10);
    }
L_00145d04:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145d08:;
    {
        vfp_vmul(cpu, 11, 11, 14);
    }
L_00145d0c:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_00145d10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00145d14:;
    {
        vfp_vmul(cpu, 15, 13, 14);
    }
L_00145d18:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00145d1c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00145d20:;
    {
        return fn_001402d4(cpu);
    }
}

/* _ZN19gxBSplineQuatOffset4evalEfPf @ 00145d28 (arm) */
void fn_00145d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145d28:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00145d2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00145d30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00145d34:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00145d38:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00145d3c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_00145d40:;
    {
        cpu->r[14] = 0x00145d44u; fn_00143054(cpu);
    }
L_00145d44:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00145d48:;
    {
        cpu->r[14] = 0x00145d4cu; fn_00145cc8(cpu);
    }
L_00145d4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00145d50:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
    }
L_00145d54:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00145d58:;
    {
        cpu->r[14] = 0x00145d5cu; fn_00143150(cpu);
    }
L_00145d5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00145d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145d64u)) return;
    }
}

/* _ZN13gxBSplineQuat4evalEfPf @ 00145d64 (arm) */
void fn_00145d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145d64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00145d68:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00145d6c:;
    {
        cpu->r[14] = 0x00145d70u; fn_00143054(cpu);
    }
L_00145d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00145d74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00145d78:;
    {
        return fn_00145cc8(cpu);
    }
}

/* _ZN12gxPolynomial4evalE9gxComplex @ 00145d7c (arm) */
void fn_00145d7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145d7c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00145d80:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00145d84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00145d88:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00145d8c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00145d90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00145d94:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00145d98:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00145d9c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13]);
    }
L_00145da0:;
    {
        cpu->r[14] = 0x00145da4u; fn_00143430(cpu);
    }
L_00145da4:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x28u);
    }
L_00145da8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00145dac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00145e1c;
        }
    }
L_00145db0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00145db4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00145db8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_00145dbc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00145dc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00145dc4:;
    {
        vfp_vmul(cpu, 13, 14, 17);
    }
L_00145dc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_00145dcc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00145dd0:;
    {
        vfp_vmul(cpu, 14, 14, 16);
    }
L_00145dd4:;
    {
        vfp_vmla(cpu, 13, 15, 16);
    }
L_00145dd8:;
    {
        vfp_vnmls(cpu, 14, 15, 17);
    }
L_00145ddc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00145de0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00145de4:;
    {
        cpu->r[14] = 0x00145de8u; fn_00143410(cpu);
    }
L_00145de8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00145dec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00145df0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00145df4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00145df8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00145dfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145e00:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_00145e04:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00145e08:;
    {
        cpu->r[14] = 0x00145e0cu; fn_00143410(cpu);
    }
L_00145e0c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00145e10:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00145e14:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00145e18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00145dc0;
        }
    }
L_00145e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00145e20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00145e24:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00145e28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145e2cu)) return;
    }
}

/* _ZN12gxPolynomial8LaguerreER9gxComplex @ 00145e2c (arm) */
void fn_00145e2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00145e2c:;
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
L_00145e30:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00145e34:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00145e38:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00145e40u + + 0x3c4u);
    }
L_00145e3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_00145e40:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00145e44:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x28u);
    }
L_00145e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00145e4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00145e50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00145e54:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00145e58:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00145e5c:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_00145e60:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00145e64:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_00145e68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_00145e6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00145e70:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00145e74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00145e78:;
    {
        cpu->r[14] = 0x00145e7cu; fn_0014347c(cpu);
    }
L_00145e7c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x28u);
    }
L_00145e80:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00145e84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00145e88:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x00145e90u + + 0x378u);
    }
L_00145e8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00145e90:;
    {
        cpu->r[14] = 0x00145e94u; fn_0014347c(cpu);
    }
L_00145e94:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00145e98:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145e9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000f0u, 0, 0);
    }
L_00145ea0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00145ea4:;
    {
        cpu->r[14] = 0x00145ea8u; fn_00143600(cpu);
    }
L_00145ea8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145eac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_00145eb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00145eb4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00145eb8:;
    {
        cpu->r[14] = 0x00145ebcu; fn_00143600(cpu);
    }
L_00145ebc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00145ec0:;
    {
        cpu->r[14] = 0x00145ec4u; fn_00143430(cpu);
    }
L_00145ec4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[11] + + 0x28u);
    }
L_00145ec8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00145ecc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_00145ed0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00145ed4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_00145ed8:;
    {
        cpu->r[3] = rd32(0x00145ee0u + + 0x32cu);
    }
L_00145edc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00145ee0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00145ee8u, cpu->r[3], 0, 0);
    }
L_00145ee4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00145ee8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00145eec:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00145ef0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00145ef4:;
    {
        cpu->r[14] = 0x00145ef8u; fn_00145d7c(cpu);
    }
L_00145ef8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xf8u);
    }
L_00145efc:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00145f00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00145f04:;
    {
        vfp_sync_flags(cpu);
    }
L_00145f08:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00145f30;
        }
    }
L_00145f0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_00145f10:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00145f14:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00145f18:;
    {
        vfp_sync_flags(cpu);
    }
L_00145f1c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00145f30;
        }
    }
L_00145f20:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00145f24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_00145f28:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00145f2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00145f30u)) return;
    }
L_00145f30:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00145f34:;
    {
        vfp_vsub(cpu, 20, 16, 21);
    }
L_00145f38:;
    {
        cpu->r[14] = 0x00145f3cu; fn_00143444(cpu);
    }
L_00145f3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00145f40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00145f44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000c0u, 0, 0);
    }
L_00145f48:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00145f4c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_00145f50:;
    {
        cpu->r[14] = 0x00145f54u; fn_00145d7c(cpu);
    }
L_00145f54:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00145f58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00145f5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_00145f60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00145f64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_00145f68:;
    {
        cpu->r[14] = 0x00145f6cu; fn_00145d7c(cpu);
    }
L_00145f6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xf8u);
    }
L_00145f70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_00145f74:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xf4u);
    }
L_00145f78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xf0u);
    }
L_00145f7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00145f80:;
    {
        vfp_vmul(cpu, 11, 15, 12);
    }
L_00145f84:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_00145f88:;
    {
        vfp_vmla(cpu, 11, 14, 13);
    }
L_00145f8c:;
    {
        vfp_vnmls(cpu, 12, 14, 15);
    }
L_00145f90:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_00145f94:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00145f98:;
    {
        cpu->r[14] = 0x00145f9cu; fn_00143410(cpu);
    }
L_00145f9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_00145fa0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_00145fa4:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00145fa8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00145fac:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_00145fb0:;
    {
        vfp_vnmls(cpu, 14, 15, 15);
    }
L_00145fb4:;
    {
        vfp_vadd(cpu, 13, 13, 13);
    }
L_00145fb8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00145fbc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00145fc0:;
    {
        cpu->r[14] = 0x00145fc4u; fn_00143410(cpu);
    }
L_00145fc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_00145fc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xf8u);
    }
L_00145fcc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xecu);
    }
L_00145fd0:;
    {
        vfp_vmul(cpu, 11, 15, 12);
    }
L_00145fd4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe8u);
    }
L_00145fd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_00145fdc:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_00145fe0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0xd8u);
    }
L_00145fe4:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_00145fe8:;
    {
        vfp_vmla(cpu, 11, 14, 13);
    }
L_00145fec:;
    {
        vfp_vnmls(cpu, 12, 14, 15);
    }
L_00145ff0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_00145ff4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00145ff8:;
    {
        cpu->r[14] = 0x00145ffcu; fn_00143410(cpu);
    }
L_00145ffc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc8u);
    }
L_00146000:;
    {
        vfp_vsub(cpu, 15, 18, 15);
    }
L_00146004:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_00146008:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014600c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xccu);
    }
L_00146010:;
    {
        vfp_vsub(cpu, 15, 19, 15);
    }
L_00146014:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00146018:;
    {
        cpu->r[14] = 0x0014601cu; fn_00143410(cpu);
    }
L_0014601c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xd0u);
    }
L_00146020:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_00146024:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xd4u);
    }
L_00146028:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_0014602c:;
    {
        vfp_vmul(cpu, 13, 16, 15);
    }
L_00146030:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00146034:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00146038:;
    {
        cpu->r[14] = 0x0014603cu; fn_00143410(cpu);
    }
L_0014603c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xb8u);
    }
L_00146040:;
    {
        vfp_vsub(cpu, 15, 15, 18);
    }
L_00146044:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_00146048:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014604c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xbcu);
    }
L_00146050:;
    {
        vfp_vsub(cpu, 15, 15, 19);
    }
L_00146054:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00146058:;
    {
        cpu->r[14] = 0x0014605cu; fn_00143410(cpu);
    }
L_0014605c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_00146060:;
    {
        vfp_vmul(cpu, 14, 20, 15);
    }
L_00146064:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_00146068:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014606c:;
    {
        vfp_vmul(cpu, 13, 20, 15);
    }
L_00146070:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00146074:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00146078:;
    {
        cpu->r[14] = 0x0014607cu; fn_00143410(cpu);
    }
L_0014607c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00146080:;
    {
        cpu->r[14] = 0x00146084u; fn_001455e0(cpu);
    }
L_00146084:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_00146088:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc0u);
    }
L_0014608c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00146090:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_00146094:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146098:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014609c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc4u);
    }
L_001460a0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_001460a4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001460a8:;
    {
        cpu->r[14] = 0x001460acu; fn_00143410(cpu);
    }
L_001460ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_001460b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc0u);
    }
L_001460b4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001460b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_001460bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001460c0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001460c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc4u);
    }
L_001460c8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001460cc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001460d0:;
    {
        cpu->r[14] = 0x001460d4u; fn_00143410(cpu);
    }
L_001460d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_001460d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_001460dc:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_001460e0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_001460e4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_001460e8:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_001460ec:;
    {
        vfp_vmla(cpu, 14, 12, 12);
    }
L_001460f0:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001460f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001460f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001460fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_00146100:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00146104:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00146108:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014610c:;
    {
        cpu->r[14] = 0x00146110u; fn_00143444(cpu);
    }
L_00146110:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_00146114:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_00146118:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_0014611c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x100u);
    }
L_00146120:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_00146124:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00146128:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014612c:;
    {
        vfp_vsub(cpu, 13, 13, 14);
    }
L_00146130:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x104u);
    }
L_00146134:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00146138:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0014613c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00146140:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00146144:;
    {
        cpu->r[14] = 0x00146148u; fn_00143410(cpu);
    }
L_00146148:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_0014614c:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00146150:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00146154:;
    {
        vfp_sync_flags(cpu);
    }
L_00146158:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00146170;
        }
    }
L_0014615c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_00146160:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00146164:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00146168:;
    {
        vfp_sync_flags(cpu);
    }
L_0014616c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00145f20;
        }
    }
L_00146170:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00146174:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00146178:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014617c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00146180:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00146184:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00146188:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_0014618c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00146190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00146194:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_00146198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146220;
        }
    }
L_0014619c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_001461a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001461a4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001461a8:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001461ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_001461b0:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001461b4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001461b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001461bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001461c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000051u, 1, 1);
    }
L_001461c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00145ee8;
        }
    }
L_001461c8:;
    {
        cpu->r[1] = rd32(0x001461d0u + + 0x40u);
    }
L_001461cc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001461d0:;
    {
        cpu->r[12] = rd32(0x001461d8u + + 0x3cu);
    }
L_001461d4:;
    {
        cpu->r[14] = 0x000002e3u;
    }
L_001461d8:;
    {
        cpu->r[2] = rd32(0x001461e0u + + 0x38u);
    }
L_001461dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001461e4u, cpu->r[1], 0, 0);
    }
L_001461e0:;
    {
        cpu->r[3] = rd32(0x001461e8u + + 0x34u);
    }
L_001461e4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001461ecu, cpu->r[12], 0, 0);
    }
L_001461e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001461f0u, cpu->r[2], 0, 0);
    }
L_001461ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000a0u, 0, 0);
    }
L_001461f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001461f8u, cpu->r[3], 0, 0);
    }
L_001461f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001461f8:;
    {
        cpu->r[14] = 0x001461fcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001461fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00146200:;
    {
        goto L_00145f24;
    }
L_00146220:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00146224:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_00146228:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0014622c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00146230:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x7cu);
    }
L_00146234:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00146238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_0014623c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00146240:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00146244:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00146248:;
    {
        cpu->r[14] = 0x0014624cu; fn_00143410(cpu);
    }
L_0014624c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_00146250:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00146254:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00146258:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0014625c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_00146260:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00146264:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00146268:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014626c:;
    {
        goto L_001461bc;
    }
}

/* _ZN12gxPolynomial20computeRoots_NonZeroEPf @ 00146270 (arm) */
void fn_00146270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146270:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00146274:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x28u);
    }
L_00146278:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0014627c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00146280:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00146284:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00146288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014632c;
        }
    }
L_0014628c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_00146290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146324;
        }
    }
L_00146294:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00146298:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001462a8;
        }
    }
L_0014629c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001462a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001462a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001462a8u)) return;
    }
L_001462a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001462ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001462b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001462b4:;
    {
        cpu->r[14] = 0x001462b8u; fn_00145344(cpu);
    }
L_001462b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001462bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001462c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001462c4:;
    {
        cpu->r[14] = 0x001462c8u; fn_00143410(cpu);
    }
L_001462c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001462cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001462d0:;
    {
        cpu->r[14] = 0x001462d4u; fn_00145e2c(cpu);
    }
L_001462d4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001462d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146334;
        }
    }
L_001462dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_001462e0:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001462e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001462ecu + + 0xa4u);
    }
L_001462e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001462ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001462f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0014636c;
        }
    }
L_001462f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001462f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001462fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146304:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00146308:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[3]);
        cpu->r[6] = wb_tmp;
    }
L_0014630c:;
    {
        cpu->r[14] = 0x00146310u; fn_00143670(cpu);
    }
L_00146310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146314:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00146318:;
    {
        cpu->r[14] = 0x0014631cu; fn_00146270(cpu);
    }
L_0014631c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00146320:;
    {
        goto L_001462a0;
    }
L_00146324:;
    {
        cpu->r[14] = 0x00146328u; fn_001453c4(cpu);
    }
L_00146328:;
    {
        goto L_001462a0;
    }
L_0014632c:;
    {
        cpu->r[14] = 0x00146330u; fn_00143654(cpu);
    }
L_00146330:;
    {
        goto L_001462a0;
    }
L_00146334:;
    {
        cpu->r[1] = rd32(0x0014633cu + + 0x58u);
    }
L_00146338:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014633c:;
    {
        cpu->r[12] = rd32(0x00146344u + + 0x54u);
    }
L_00146340:;
    {
        cpu->r[14] = 0x00000379u;
    }
L_00146344:;
    {
        cpu->r[2] = rd32(0x0014634cu + + 0x50u);
    }
L_00146348:;
    {
        cpu->r[1] = add_flags(cpu, 0x00146350u, cpu->r[1], 0, 0);
    }
L_0014634c:;
    {
        cpu->r[3] = rd32(0x00146354u + + 0x4cu);
    }
L_00146350:;
    {
        cpu->r[12] = add_flags(cpu, 0x00146358u, cpu->r[12], 0, 0);
    }
L_00146354:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014635cu, cpu->r[2], 0, 0);
    }
L_00146358:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000acu, 0, 0);
    }
L_0014635c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00146364u, cpu->r[3], 0, 0);
    }
L_00146360:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00146364:;
    {
        cpu->r[14] = 0x00146368u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00146368:;
    {
        goto L_0014629c;
    }
L_0014636c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00146370:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146374:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146378:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014637c:;
    {
        cpu->r[14] = 0x00146380u; fn_001436dc(cpu);
    }
L_00146380:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146384:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00146388:;
    {
        cpu->r[14] = 0x0014638cu; fn_00146270(cpu);
    }
L_0014638c:;
    {
        goto L_001462a0;
    }
}

/* _ZN12gxPolynomial12computeRootsEPf @ 001463a4 (arm) */
void fn_001463a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001463a4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001463a8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001463ac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x28u);
    }
L_001463b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001463b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001463b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001463bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00146478;
        }
    }
L_001463c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001463c4:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001463c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001463d0u + + 0xb8u);
    }
L_001463cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001463d0:;
    {
        vfp_sync_flags(cpu);
    }
L_001463d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00146478;
        }
    }
L_001463d8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001463dc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001463e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001463e8u + + 0xa4u);
    }
L_001463e4:;
    {
        goto L_00146400;
    }
L_001463e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001463ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001463f0:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001463f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_001463f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001463fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00146410;
        }
    }
L_00146400:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00146404:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00146408:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0014640c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001463e8;
        }
    }
L_00146410:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00146414:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_00146418:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014641c:;
    {
        cpu->r[14] = 0x00146420u; fn_0014347c(cpu);
    }
L_00146420:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00146424:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00146428:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00146458;
        }
    }
L_0014642c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00146430:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00146434:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00146438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0014643c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00146440:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00146444:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00146448:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014644c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_00146450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00146454:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146438;
        }
    }
L_00146458:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014645c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00146464u + + 0x28u);
    }
L_00146460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00146464:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[1] = ea + 4u;
    }
L_00146468:;
    {
        cpu->r[14] = 0x0014646cu; fn_00146270(cpu);
    }
L_0014646c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00146470:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00146474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146478u)) return;
    }
L_00146478:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014647c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00146480:;
    {
        cpu->r[14] = 0x00146484u; fn_00146270(cpu);
    }
L_00146484:;
    {
        goto L_00146470;
    }
}

/* _ZN12gxPolynomial20computeRoots_NonZeroEffPf @ 00146490 (arm) */
void fn_00146490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146490:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_00146494:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00146498:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014649c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001464a0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001464a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_001464a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001464ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001464b0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001464b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001465a8;
        }
    }
L_001464b8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001464bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001465a0;
        }
    }
L_001464c0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001464c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001464d8;
        }
    }
L_001464c8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001464cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001464d0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001464d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001464d8u)) return;
    }
L_001464d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001464dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001464e0:;
    {
        cpu->r[14] = 0x001464e4u; fn_00145344(cpu);
    }
L_001464e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_001464e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_001464ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001464f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001464c8;
        }
    }
L_001464f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_001464f8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_001464fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_00146500:;
    {
        vfp_sync_flags(cpu);
    }
L_00146504:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001464c8;
        }
    }
L_00146508:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0014650c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00146510:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146514:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146518:;
    {
        cpu->r[14] = 0x0014651cu; fn_00143410(cpu);
    }
L_0014651c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146520:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00146524:;
    {
        cpu->r[14] = 0x00146528u; fn_00145e2c(cpu);
    }
L_00146528:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014652c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001465b0;
        }
    }
L_00146530:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_00146534:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00146538:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00146540u + + 0xe0u);
    }
L_0014653c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00146540:;
    {
        vfp_sync_flags(cpu);
    }
L_00146544:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001465f4;
        }
    }
L_00146548:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_0014654c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_00146550:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00146554:;
    {
        vfp_sync_flags(cpu);
    }
L_00146558:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001465ec;
        }
    }
L_0014655c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00146560:;
    {
        vfp_sync_flags(cpu);
    }
L_00146564:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[6] = ea + 4u;
        }
    }
L_00146568:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0014656c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001465ec;
        }
    }
L_00146570:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00146574:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00146578:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014657c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146580:;
    {
        cpu->r[14] = 0x00146584u; fn_00143670(cpu);
    }
L_00146584:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146588:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014658c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00146590:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00146594:;
    {
        cpu->r[14] = 0x00146598u; fn_00146490(cpu);
    }
L_00146598:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0014659c:;
    {
        goto L_001464cc;
    }
L_001465a0:;
    {
        cpu->r[14] = 0x001465a4u; fn_001454b8(cpu);
    }
L_001465a4:;
    {
        goto L_001464cc;
    }
L_001465a8:;
    {
        cpu->r[14] = 0x001465acu; fn_0014415c(cpu);
    }
L_001465ac:;
    {
        goto L_001464cc;
    }
L_001465b0:;
    {
        cpu->r[1] = rd32(0x001465b8u + + 0x6cu);
    }
L_001465b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001465b8:;
    {
        cpu->r[12] = rd32(0x001465c0u + + 0x68u);
    }
L_001465bc:;
    {
        cpu->r[14] = 0x00000342u;
    }
L_001465c0:;
    {
        cpu->r[2] = rd32(0x001465c8u + + 0x64u);
    }
L_001465c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001465ccu, cpu->r[1], 0, 0);
    }
L_001465c8:;
    {
        cpu->r[3] = rd32(0x001465d0u + + 0x60u);
    }
L_001465cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001465d4u, cpu->r[12], 0, 0);
    }
L_001465d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001465d8u, cpu->r[2], 0, 0);
    }
L_001465d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000c4u, 0, 0);
    }
L_001465d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001465e0u, cpu->r[3], 0, 0);
    }
L_001465dc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001465e0:;
    {
        cpu->r[14] = 0x001465e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001465e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001465e8:;
    {
        goto L_001464cc;
    }
L_001465ec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001465f0:;
    {
        goto L_00146570;
    }
L_001465f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001465f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001465fc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00146600:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00146604:;
    {
        cpu->r[14] = 0x00146608u; fn_001436dc(cpu);
    }
L_00146608:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014660c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146610:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00146614:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00146618:;
    {
        cpu->r[14] = 0x0014661cu; fn_00146490(cpu);
    }
L_0014661c:;
    {
        goto L_001464cc;
    }
}

/* _ZN12gxPolynomial12computeRootsEffPff @ 00146634 (arm) */
void fn_00146634(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146634:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00146638:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014663c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00146640:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x28u);
    }
L_00146644:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_00146648:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014664c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00146650:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00146654:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00146658:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00146728;
        }
    }
L_0014665c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00146660:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00146664:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014666cu + + 0x100u);
    }
L_00146668:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0014666c:;
    {
        vfp_sync_flags(cpu);
    }
L_00146670:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00146728;
        }
    }
L_00146674:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00146678:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0014667c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00146684u + + 0xecu);
    }
L_00146680:;
    {
        goto L_0014669c;
    }
L_00146684:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00146688:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0014668c:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00146690:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_00146694:;
    {
        vfp_sync_flags(cpu);
    }
L_00146698:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001466ac;
        }
    }
L_0014669c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001466a0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001466a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001466a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146684;
        }
    }
L_001466ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001466b0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_001466b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001466b8:;
    {
        cpu->r[14] = 0x001466bcu; fn_0014347c(cpu);
    }
L_001466bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001466c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001466c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001466f4;
        }
    }
L_001466c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001466cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001466d0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001466d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001466d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001466dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001466e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001466e4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001466e8:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_001466ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001466f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001466d4;
        }
    }
L_001466f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001466f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001466fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00146710;
        }
    }
L_00146700:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_00146704:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00146708:;
    {
        vfp_sync_flags(cpu);
    }
L_0014670c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00146748;
        }
    }
L_00146710:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146714:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00146718:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014671c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00146720:;
    {
        cpu->r[14] = 0x00146724u; fn_00146490(cpu);
    }
L_00146724:;
    {
        goto L_0014673c;
    }
L_00146728:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014672c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00146730:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00146734:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00146738:;
    {
        cpu->r[14] = 0x0014673cu; fn_00146490(cpu);
    }
L_0014673c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00146740:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00146744:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146748u)) return;
    }
L_00146748:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014674c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00146754u + + 0x1cu);
    }
L_00146750:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00146754:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[3] = ea + 4u;
    }
L_00146758:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014675c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00146760:;
    {
        cpu->r[14] = 0x00146764u; fn_00146490(cpu);
    }
L_00146764:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00146768:;
    {
        goto L_0014673c;
    }
}

/* _ZN14gxBezierCurve210DistanceToERfR8Vector2d @ 00146774 (arm) */
void fn_00146774(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146774:;
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
L_00146778:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0014677c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00146780:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00146784:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00146788:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000050u, 1, 0);
    }
L_0014678c:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00146790:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00146794:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146798:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0014679c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001467a0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001467a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001467a8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_001467ac:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001467b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001467b4:;
    {
        vfp_vsub(cpu, 17, 17, 15);
    }
L_001467b8:;
    {
        cpu->r[14] = 0x001467bcu; fn_0014347c(cpu);
    }
L_001467bc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_001467c0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_001467c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_001467c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001467cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001467d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001467d4:;
    {
        *vfp_s(cpu, 3) = *(float*)G(0x001467dcu + + 0x168u);
    }
L_001467d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001467dc:;
    {
        vfp_vmul(cpu, 8, 11, 11);
    }
L_001467e0:;
    {
        vfp_vmul(cpu, 6, 10, 12);
    }
L_001467e4:;
    {
        vfp_vmul(cpu, 4, 16, 10);
    }
L_001467e8:;
    {
        vfp_vmul(cpu, 7, 10, 10);
    }
L_001467ec:;
    {
        vfp_vmul(cpu, 10, 10, 11);
    }
L_001467f0:;
    {
        vfp_vmul(cpu, 5, 11, 12);
    }
L_001467f4:;
    {
        vfp_vmul(cpu, 9, 16, 11);
    }
L_001467f8:;
    {
        vfp_vmla(cpu, 8, 14, 14);
    }
L_001467fc:;
    {
        vfp_vmla(cpu, 10, 13, 14);
    }
L_00146800:;
    {
        vfp_vmla(cpu, 4, 17, 13);
    }
L_00146804:;
    {
        vfp_vmla(cpu, 5, 14, 15);
    }
L_00146808:;
    {
        vfp_vmul(cpu, 11, 12, 12);
    }
L_0014680c:;
    {
        vfp_vmla(cpu, 6, 13, 15);
    }
L_00146810:;
    {
        vfp_vmla(cpu, 9, 17, 14);
    }
L_00146814:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014681cu + + 0x12cu);
    }
L_00146818:;
    {
        vfp_vmul(cpu, 12, 16, 12);
    }
L_0014681c:;
    {
        vfp_vmla(cpu, 7, 13, 13);
    }
L_00146820:;
    {
        vfp_vmla(cpu, 11, 15, 15);
    }
L_00146824:;
    {
        vfp_vadd(cpu, 8, 8, 8);
    }
L_00146828:;
    {
        vfp_vmla(cpu, 12, 17, 15);
    }
L_0014682c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00146834u + + 0x118u);
    }
L_00146830:;
    {
        vfp_vmul(cpu, 15, 10, 15);
    }
L_00146834:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00146838:;
    {
        vfp_vadd(cpu, 5, 4, 5);
    }
L_0014683c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00146840:;
    {
        vfp_vmla(cpu, 8, 6, 14);
    }
L_00146844:;
    {
        vfp_vadd(cpu, 9, 9, 9);
    }
L_00146848:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_0014684c:;
    {
        vfp_vmul(cpu, 15, 7, 3);
    }
L_00146850:;
    {
        vfp_vmul(cpu, 14, 5, 3);
    }
L_00146854:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00146858:;
    {
        vfp_vadd(cpu, 11, 9, 11);
    }
L_0014685c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00146860:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00146864:;
    {
        cpu->r[14] = 0x00146868u; fn_001434d0(cpu);
    }
L_00146868:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014686c:;
    {
        cpu->r[14] = 0x00146870u; fn_001435b4(cpu);
    }
L_00146870:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00146874:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00146878:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014687c:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_00146880:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00146888u + + 0xc8u);
    }
L_00146884:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00146888:;
    {
        cpu->r[14] = 0x0014688cu; fn_00146634(cpu);
    }
L_0014688c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00146890:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00146894:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xbf80u << 16);
        }
    }
L_00146898:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146928;
        }
    }
L_0014689c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001468a0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001468a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001468a8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001468b0u + + 0xa4u);
    }
L_001468ac:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001468b4u + + 0xa4u);
    }
L_001468b0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001468b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001468b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001468bc:;
    {
        cpu->r[14] = 0x001468c0u; fn_0014336c(cpu);
    }
L_001468c0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_001468c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001468c8:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_001468cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001468d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_001468d4:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_001468d8:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_001468dc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001468e0:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001468e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001468e8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001468f8;
        }
    }
L_001468ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_001468f0:;
    {
        vfp_sync_flags(cpu);
    }
L_001468f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146904;
        }
    }
L_001468f8:;
    {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
    }
L_001468fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00146900:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_00146904:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00146908:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_0014690c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001468b0;
        }
    }
L_00146910:;
    {
        vfp_vsqrt(cpu, 15, 17);
    }
L_00146914:;
    {
        *(uint32_t*)G(cpu->r[9]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00146918:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_0014691c:;
    {
        vfp_sync_flags(cpu);
    }
L_00146920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146934;
        }
    }
L_00146924:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00146928:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_0014692c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00146930:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146934u)) return;
    }
L_00146934:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00146938:;
    {
        cpu->r[14] = 0x0014693cu; imp_sqrtf(cpu); /* sqrtf */
    }
L_0014693c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00146940:;
    {
        goto L_00146924;
    }
}

/* _ZN7IdxFaceC2Ev @ 0014695c (arm) */
void fn_0014695c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014695c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146960:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00146964:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_00146968:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_0014696c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7IdxFaceC1Ev @ 00146970 (arm) */
void fn_00146970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146970:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146974:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00146978:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_0014697c:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_00146980:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7IdxVertD2Ev @ 00146984 (arm) */
void fn_00146984(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146984:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7IdxVertD1Ev @ 00146988 (arm) */
void fn_00146988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146988:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7IdxVerteqERS_ @ 0014698c (arm) */
void fn_0014698c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014698c:;
    {
        cpu->r[2] = rd16(cpu->r[0]);
    }
L_00146990:;
    {
        cpu->r[3] = rd16(cpu->r[1]);
    }
L_00146994:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_00146998:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014699c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001469ac;
        }
    }
L_001469a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001469a4:;
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
L_001469a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001469ac:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0x12u);
    }
L_001469b0:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x12u);
    }
L_001469b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001469b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_001469bc:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0x14u);
    }
L_001469c0:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x14u);
    }
L_001469c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001469c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_001469cc:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0x16u);
    }
L_001469d0:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x16u);
    }
L_001469d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001469d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_001469dc:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0x18u);
    }
L_001469e0:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x18u);
    }
L_001469e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001469e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_001469ec:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x1au);
    }
L_001469f0:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1au);
    }
L_001469f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001469f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_001469fc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00146a00:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00146a04:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00146a08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146a0c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00146a10:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00146a18u + + 0xa0u);
    }
L_00146a14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00146a1cu + + 0xa0u);
    }
L_00146a18:;
    {
        goto L_00146a50;
    }
L_00146a1c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_00146a20:;
    {
        vfp_sync_flags(cpu);
    }
L_00146a24:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00146a28:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00146a2c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00146a30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00146a34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00146a38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00146a3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_00146a40:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000001eu, 1, 1);
    }
L_00146a44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00146a48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00146a4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146a8c;
        }
    }
L_00146a50:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x1bu);
    }
L_00146a54:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x1bu);
    }
L_00146a58:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00146a5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_00146a60:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x3cu);
    }
L_00146a64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x3cu);
    }
L_00146a68:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00146a6c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00146a70:;
    {
        vfp_sync_flags(cpu);
    }
L_00146a74:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00146a1c;
        }
    }
L_00146a78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_00146a7c:;
    {
        vfp_sync_flags(cpu);
    }
L_00146a80:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00146a84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00146a88:;
    {
        goto L_00146a2c;
    }
L_00146a8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00146a90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00146a94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00146a98:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x2u);
    }
L_00146a9c:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x2u);
    }
L_00146aa0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00146aa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001469a0;
        }
    }
L_00146aa8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000010u, 1, 1);
    }
L_00146aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146a8c;
        }
    }
L_00146ab0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00146ab4:;
    {
        goto L_001469a4;
    }
}

/* _ZN11VtxDataListC2Ev @ 00146ac0 (arm) */
void fn_00146ac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146ac0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146ac4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00146ac8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11VtxDataListC1Ev @ 00146acc (arm) */
void fn_00146acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146acc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146ad0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00146ad4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11VtxDataList6LocateEP7IdxVert @ 00146ad8 (arm) */
void fn_00146ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146ad8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00146adc:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00146ae0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00146ae4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00146ae8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146afc;
        }
    }
L_00146aec:;
    {
        goto L_00146b10;
    }
L_00146af0:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xb8u);
    }
L_00146af4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00146af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146b10;
        }
    }
L_00146afc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146b00:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146b04:;
    {
        cpu->r[14] = 0x00146b08u; fn_0014698c(cpu);
    }
L_00146b08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00146b0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146af0;
        }
    }
L_00146b10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146b14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146b18u)) return;
    }
}

/* _ZN11VtxDataList6AppendEP7IdxVert @ 00146b18 (arm) */
void fn_00146b18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146b18:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00146b1c:;
    {
        wr32(cpu->r[1] + + 0xb8u, cpu->r[3]);
    }
L_00146b20:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00146b24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11VtxDataList5CountEv @ 00146b28 (arm) */
void fn_00146b28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146b28:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00146b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146b30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00146b34:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00146b38:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00146b3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xb8u);
    }
L_00146b40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00146b44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146b48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146b3c;
        }
    }
L_00146b4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z7readIdxRPhi @ 00146b50 (arm) */
void fn_00146b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146b50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00146b54:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00146b58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146b5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00146b60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146b8c;
        }
    }
L_00146b64:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00146b68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146b6c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00146b70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00146b74:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        cpu->r[12] = rd8(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00146b78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00146b7c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00146b80:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00146b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00146b88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146b74;
        }
    }
L_00146b8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00146b90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z10IntAsFloatj @ 00146b94 (arm) */
void fn_00146b94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146b94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11VtxDataList6RmHeadEv @ 00146b98 (arm) */
void fn_00146b98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146b98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00146b9c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00146ba0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00146ba4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00146ba8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00146bacu)) return;
        }
    }
L_00146bac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb8u);
    }
L_00146bb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146bb4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00146bb8:;
    {
        cpu->r[14] = 0x00146bbcu; fn_00146988(cpu);
    }
L_00146bbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146bc0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00146bc4:;
    {
        return fn_0018ba20(cpu);
    }
}

/* _ZN11VtxDataListD1Ev @ 00146bc8 (arm) */
void fn_00146bc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146bc8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00146bcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00146bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146bd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146bf0;
        }
    }
L_00146bdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146be0:;
    {
        cpu->r[14] = 0x00146be4u; fn_00146b98(cpu);
    }
L_00146be4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00146be8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146bdc;
        }
    }
L_00146bf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146bf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00146bf8u)) return;
    }
}

/* _ZN11VtxDataListD2Ev @ 00146bf8 (arm) */
void fn_00146bf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146bf8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00146bfc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00146c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146c04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146c20;
        }
    }
L_00146c0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146c10:;
    {
        cpu->r[14] = 0x00146c14u; fn_00146b98(cpu);
    }
L_00146c14:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00146c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00146c1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00146c0c;
        }
    }
L_00146c20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146c24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00146c28u)) return;
    }
}

/* _ZN7IdxVertaSERS_ @ 00146c28 (arm) */
void fn_00146c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146c28:;
    {
        cpu->r[2] = rd16(cpu->r[1]);
    }
L_00146c2c:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0x12u);
    }
L_00146c30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00146c34:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_00146c38:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0x14u);
    }
L_00146c3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146c40:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_00146c44:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00146c48:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1au);
    }
L_00146c4c:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00146c50:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0x16u);
    }
L_00146c54:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[3]);
    }
L_00146c58:;
    {
        wr16(cpu->r[0] + + 0x16u, cpu->r[2]);
    }
L_00146c5c:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0x18u);
    }
L_00146c60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_00146c64:;
    {
        wr16(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00146c68:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00146c6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00146c70:;
    {
        cpu->r[14] = 0x00146c74u; imp_memcpy(cpu); /* memcpy */
    }
L_00146c74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000001bu, 0, 0);
    }
L_00146c78:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00146c7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000001bu, 0, 0);
    }
L_00146c80:;
    {
        cpu->r[14] = 0x00146c84u; imp_memcpy(cpu); /* memcpy */
    }
L_00146c84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_00146c88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000003cu, 0, 0);
    }
L_00146c8c:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00146c90:;
    {
        cpu->r[14] = 0x00146c94u; imp_memcpy(cpu); /* memcpy */
    }
L_00146c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00146c98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146c9cu)) return;
    }
}

/* _ZN7IdxVertC1Ev @ 00146c9c (arm) */
void fn_00146c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146c9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00146ca0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00146ca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00146ca8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00146cac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00146cb0:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[4]);
    }
L_00146cb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00146cb8:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[4]);
    }
L_00146cbc:;
    {
        wr16(cpu->r[5], cpu->r[4]);
    }
L_00146cc0:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00146cc4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001bu, 0, 0);
    }
L_00146ccc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146cd0:;
    {
        wr8(cpu->r[5] + + 0x1au, cpu->r[4]);
    }
L_00146cd4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146cd8:;
    {
        wr16(cpu->r[5] + + 0x12u, cpu->r[4]);
    }
L_00146cdc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146ce0:;
    {
        wr16(cpu->r[5] + + 0x14u, cpu->r[4]);
    }
L_00146ce4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146ce8:;
    {
        wr16(cpu->r[5] + + 0x16u, cpu->r[4]);
    }
L_00146cec:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_00146cf0:;
    {
        wr16(cpu->r[5] + + 0x18u, cpu->r[4]);
    }
L_00146cf4:;
    {
        cpu->r[14] = 0x00146cf8u; imp_memset(cpu); /* memset */
    }
L_00146cf8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00146cfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_00146d00:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00146d04:;
    {
        cpu->r[14] = 0x00146d08u; imp_memset(cpu); /* memset */
    }
L_00146d08:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00146d0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00146d10:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00146d14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146d18u)) return;
    }
}

/* _ZN7IdxVertC2Ev @ 00146d18 (arm) */
void fn_00146d18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146d18:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00146d1c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00146d20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00146d24:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00146d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00146d2c:;
    {
        wr16(cpu->r[5] + + 0x2u, cpu->r[4]);
    }
L_00146d30:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00146d34:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[4]);
    }
L_00146d38:;
    {
        wr16(cpu->r[5], cpu->r[4]);
    }
L_00146d3c:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00146d40:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146d44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000001bu, 0, 0);
    }
L_00146d48:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146d4c:;
    {
        wr8(cpu->r[5] + + 0x1au, cpu->r[4]);
    }
L_00146d50:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146d54:;
    {
        wr16(cpu->r[5] + + 0x12u, cpu->r[4]);
    }
L_00146d58:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146d5c:;
    {
        wr16(cpu->r[5] + + 0x14u, cpu->r[4]);
    }
L_00146d60:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        wr16(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_00146d64:;
    {
        wr16(cpu->r[5] + + 0x16u, cpu->r[4]);
    }
L_00146d68:;
    {
        wr16(cpu->r[3], cpu->r[4]);
    }
L_00146d6c:;
    {
        wr16(cpu->r[5] + + 0x18u, cpu->r[4]);
    }
L_00146d70:;
    {
        cpu->r[14] = 0x00146d74u; imp_memset(cpu); /* memset */
    }
L_00146d74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00146d78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_00146d7c:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00146d80:;
    {
        cpu->r[14] = 0x00146d84u; imp_memset(cpu); /* memset */
    }
L_00146d84:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00146d88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00146d8c:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[3]);
    }
L_00146d90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146d94u)) return;
    }
}

/* _ZN8CTexAnimC2Ev @ 00146d94 (arm) */
void fn_00146d94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146d94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146d98:;
    {
        wr32(cpu->r[0] + + 0x140u, cpu->r[2]);
    }
L_00146d9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CTexAnimC1Ev @ 00146da0 (arm) */
void fn_00146da0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146da0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146da4:;
    {
        wr32(cpu->r[0] + + 0x140u, cpu->r[2]);
    }
L_00146da8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CTexAnimD2Ev @ 00146dac (arm) */
void fn_00146dac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146dac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CTexAnimD1Ev @ 00146db0 (arm) */
void fn_00146db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146db0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CTexAnim5CleanEv @ 00146db4 (arm) */
void fn_00146db4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146db4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00146db8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00146dbc:;
    {
        wr32(cpu->r[0] + + 0x140u, cpu->r[3]);
    }
L_00146dc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00146dc4:;
    {
        cpu->r[14] = 0x00146dc8u; fn_0009b4d0(cpu);
    }
L_00146dc8:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[0]);
    }
L_00146dcc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00146dd0u)) return;
    }
}

/* _ZN8CTexAnim6UpdateEv @ 00146dd0 (arm) */
void fn_00146dd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146dd0:;
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
L_00146dd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00146dd8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00146ddc:;
    {
        cpu->r[14] = 0x00146de0u; fn_0009b4d0(cpu);
    }
L_00146de0:;
    {
        cpu->r[9] = rd32(0x00146de8u + + 0xdcu);
    }
L_00146de4:;
    {
        cpu->r[11] = rd32(0x00146decu + + 0xdcu);
    }
L_00146de8:;
    {
        cpu->r[9] = add_flags(cpu, 0x00146df0u, cpu->r[9], 0, 0);
    }
L_00146dec:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x140u);
    }
L_00146df0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_00146df4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00146df8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x144u);
    }
L_00146dfc:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_00146e00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00146e04:;
    {
        wr32(cpu->r[8] + + 0x144u, cpu->r[0]);
    }
L_00146e08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00146e0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00146e6c;
        }
    }
L_00146e10:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00146e14:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00146e18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00146e1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00146e20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00146e24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00146e28:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00146e2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00146e30:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00146e58;
        }
    }
L_00146e34:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_00146e38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00146e3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00146e40:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00146e44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00146e48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00146e74;
        }
    }
L_00146e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00146e50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00146e54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00146e34;
        }
    }
L_00146e58:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x140u);
    }
L_00146e5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00146e60:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_00146e64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00146e68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00146e18;
        }
    }
L_00146e6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00146e70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146e74u)) return;
    }
L_00146e74:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_00146e78:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146e7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146e80:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00146e84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00146e88:;
    {
        cpu->r[14] = 0x00146e8cu; fn_00135c90(cpu);
    }
L_00146e8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00146e90:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00146e94:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00146e98:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_00146e9c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00146ea0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00146ea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00146eac;
        }
    }
L_00146ea8:;
    {
        cpu->r[14] = 0x00146eacu; fn_00135c3c(cpu);
    }
L_00146eac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00146eb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00146eb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00146e78;
        }
    }
L_00146eb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00146ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00146ec0:;
    {
        goto L_00146e50;
    }
}

/* _ZN8CTexAnim7AddAnimEiii @ 00146ecc (arm) */
void fn_00146ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146ecc:;
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
L_00146ed0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00146ed4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x140u);
    }
L_00146ed8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00146edc:;
    {
        cpu->r[8] = rd32(0x00146ee4u + + 0xd4u);
    }
L_00146ee0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00146ee4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00146ee8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00146eec:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[2], 2, 4u, &shc), cpu->r[1]);
    }
L_00146ef0:;
    {
        cpu->r[8] = add_flags(cpu, 0x00146ef8u, cpu->r[8], 0, 0);
    }
L_00146ef4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x140u);
    }
L_00146ef8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00146efc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_00146f00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x140u);
    }
L_00146f04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00146f08:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_00146f0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146f10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x140u);
    }
L_00146f14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_00146f18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00146f1c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00146f20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00146fb0;
        }
    }
L_00146f24:;
    {
        cpu->r[9] = rd32(0x00146f2cu + + 0x90u);
    }
L_00146f28:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00146f2c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00146f30:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_00146f34:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00146f38:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00146f3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00146f40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00146f44:;
    {
        cpu->r[14] = 0x00146f48u; fn_00135d9c(cpu);
    }
L_00146f48:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00146f4c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00146f30;
        }
    }
L_00146f50:;
    {
        cpu->r[4] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00146f54:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00146f58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146f5c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00146f60:;
    {
        cpu->r[14] = 0x00146f64u; fn_00135c90(cpu);
    }
L_00146f64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00146f68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146f6c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00146f70:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00146f74:;
    {
        cpu->r[14] = 0x00146f78u; fn_00135c90(cpu);
    }
L_00146f78:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00146f7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00146f80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00146f84:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00146f88:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00146f8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00146f90:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00146f94:;
    {
        cpu->r[14] = 0x00146f98u; fn_00136660(cpu);
    }
L_00146f98:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x140u);
    }
L_00146f9c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00146fa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00146fa4:;
    {
        wr32(cpu->r[7] + + 0x140u, cpu->r[3]);
    }
L_00146fa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00146fac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00146fb0u)) return;
    }
L_00146fb0:;
    {
        cpu->r[9] = rd32(0x00146fb8u + + 0x4u);
    }
L_00146fb4:;
    {
        goto L_00146f50;
    }
}

/* _ZN9LightOmni7getTypeEv @ 00146fc0 (arm) */
void fn_00146fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146fc0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00146fc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightOmni6getPosEv @ 00146fc8 (arm) */
void fn_00146fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146fc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00146fcc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightSpot7getTypeEv @ 00146fd0 (arm) */
void fn_00146fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146fd0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00146fd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13LightSpecular7getTypeEv @ 00146fd8 (arm) */
void fn_00146fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146fd8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00146fdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Light8setColorEhhhh @ 00146fe0 (arm) */
void fn_00146fe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146fe0:;
    {
        cpu->r[12] = rd8(cpu->r[13]);
    }
L_00146fe4:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00146fe8:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[2]);
    }
L_00146fec:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[12]);
    }
L_00146ff0:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[3]);
    }
L_00146ff4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5LightC1Ev @ 00146ff8 (arm) */
void fn_00146ff8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00146ff8:;
    {
        cpu->r[12] = rd32(0x00147000u + + 0x40u);
    }
L_00146ffc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00147000:;
    {
        cpu->r[14] = rd32(0x00147008u + + 0x3cu);
    }
L_00147004:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014700cu, cpu->r[12], 0, 0);
    }
L_00147008:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014700c:;
    {
        cpu->r[5] = 0x000000ffu;
    }
L_00147010:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147014:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00147018:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014701c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00147020:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00147024:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00147028:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0014702c:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_00147030:;
    {
        cpu->r[14] = 0x00147034u; fn_00146fe0(cpu);
    }
L_00147034:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147038:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014703c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00147040u)) return;
    }
}

/* _ZN5LightC2Ev @ 00147048 (arm) */
void fn_00147048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147048:;
    {
        cpu->r[12] = rd32(0x00147050u + + 0x40u);
    }
L_0014704c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00147050:;
    {
        cpu->r[14] = rd32(0x00147058u + + 0x3cu);
    }
L_00147054:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014705cu, cpu->r[12], 0, 0);
    }
L_00147058:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014705c:;
    {
        cpu->r[5] = 0x000000ffu;
    }
L_00147060:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147064:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00147068:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014706c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00147070:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00147074:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00147078:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0014707c:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_00147080:;
    {
        cpu->r[14] = 0x00147084u; fn_00146fe0(cpu);
    }
L_00147084:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147088:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014708c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00147090u)) return;
    }
}

/* _ZN9LightOmni6setPosEfff @ 00147098 (arm) */
void fn_00147098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147098:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0014709c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001470a0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001470a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightOmniC1Ev @ 001470a8 (arm) */
void fn_001470a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001470a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001470ac:;
    {
        cpu->r[5] = rd32(0x001470b4u + + 0x40u);
    }
L_001470b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001470b4:;
    {
        cpu->r[14] = 0x001470b8u; fn_00147048(cpu);
    }
L_001470b8:;
    {
        cpu->r[12] = rd32(0x001470c0u + + 0x38u);
    }
L_001470bc:;
    {
        cpu->r[5] = add_flags(cpu, 0x001470c4u, cpu->r[5], 0, 0);
    }
L_001470c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001470c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001470c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001470cc:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001470d0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001470d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001470d8:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001470dc:;
    {
        cpu->r[14] = 0x001470e0u; fn_00147098(cpu);
    }
L_001470e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001470e8u + + 0x8u);
    }
L_001470e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001470e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001470ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001470f0u)) return;
    }
}

/* _ZN9LightOmniC2Ev @ 001470fc (arm) */
void fn_001470fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001470fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147100:;
    {
        cpu->r[5] = rd32(0x00147108u + + 0x40u);
    }
L_00147104:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147108:;
    {
        cpu->r[14] = 0x0014710cu; fn_00147048(cpu);
    }
L_0014710c:;
    {
        cpu->r[12] = rd32(0x00147114u + + 0x38u);
    }
L_00147110:;
    {
        cpu->r[5] = add_flags(cpu, 0x00147118u, cpu->r[5], 0, 0);
    }
L_00147114:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00147118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014711c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00147120:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00147124:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00147128:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0014712c:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00147130:;
    {
        cpu->r[14] = 0x00147134u; fn_00147098(cpu);
    }
L_00147134:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014713cu + + 0x8u);
    }
L_00147138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014713c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147140:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147144u)) return;
    }
}

/* _ZN9LightSpot6setDirEfff @ 00147150 (arm) */
void fn_00147150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147150:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00147154:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_00147158:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0014715c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightSpot9setAttenAEfff @ 00147160 (arm) */
void fn_00147160(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147160:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00147164:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_00147168:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_0014716c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightSpot9setAttenDEfff @ 00147170 (arm) */
void fn_00147170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147170:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00147174:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_00147178:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0014717c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9LightSpot9setAttenDEif @ 00147180 (arm) */
void fn_00147180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147180:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00147184:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00147188:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00147204;
        case 1: goto L_001471e8;
        case 2: goto L_001471c8;
        case 3: goto L_001471a0;
        default: guest_unimplemented(cpu, 0x00147188u); return; }
        }
    }
L_0014718c:;
    {
        goto L_00147214;
    }
L_001471a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001471a8u + + 0x7cu);
    }
L_001471a4:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_001471a8:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_001471ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001471b4u + + 0x74u);
    }
L_001471b0:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001471b4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001471bcu + + 0x70u);
    }
L_001471b8:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001471bc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001471c0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001471c4:;
    {
        return fn_00147170(cpu);
    }
L_001471c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001471d0u + + 0x54u);
    }
L_001471cc:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001471d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001471d8u + + 0x58u);
    }
L_001471d4:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_001471d8:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001471dc:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_001471e0:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001471e4:;
    {
        goto L_001471bc;
    }
L_001471e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001471f0u + + 0x34u);
    }
L_001471ec:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001471f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001471f8u + + 0x34u);
    }
L_001471f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001471fcu + + 0x2cu);
    }
L_001471f8:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_001471fc:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_00147200:;
    {
        goto L_001471bc;
    }
L_00147204:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014720cu + + 0x1cu);
    }
L_00147208:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_0014720c:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_00147210:;
    {
        goto L_001471bc;
    }
L_00147214:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014721cu + + 0xcu);
    }
L_00147218:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_0014721c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00147220:;
    {
        goto L_001471bc;
    }
}

/* _ZN13LightSpecular6setDirEfff @ 00147234 (arm) */
void fn_00147234(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147234:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00147238:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0014723c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00147240:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13LightSpecular8setAttenEfff @ 00147244 (arm) */
void fn_00147244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147244:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00147248:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_0014724c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00147250:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13LightSpecular12setShininessEf @ 00147254 (arm) */
void fn_00147254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147254:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00147258:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00147260u + + 0x1cu);
    }
L_0014725c:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00147260:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00147268u + + 0x18u);
    }
L_00147264:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147268:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014726c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00147274u + + 0x10u);
    }
L_00147270:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00147274:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00147278:;
    {
        return fn_00147244(cpu);
    }
}

/* _ZN13LightSpecular6EnableEiP7CMatrixS1_ @ 00147288 (arm) */
void fn_00147288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147288:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13LightSpecularC1Ev @ 0014728c (arm) */
void fn_0014728c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014728c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147290:;
    {
        cpu->r[5] = rd32(0x00147298u + + 0x48u);
    }
L_00147294:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147298:;
    {
        cpu->r[14] = 0x0014729cu; fn_00147048(cpu);
    }
L_0014729c:;
    {
        cpu->r[2] = rd32(0x001472a4u + + 0x40u);
    }
L_001472a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001472a8u, cpu->r[5], 0, 0);
    }
L_001472a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001472a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001472ac:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001472b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001472b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001472b8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001472bc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001472c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001472c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001472c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xbf80u << 16);
    }
L_001472cc:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001472d0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001472d4:;
    {
        cpu->r[14] = 0x001472d8u; fn_00147234(cpu);
    }
L_001472d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001472dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001472e0u)) return;
    }
}

/* _ZN13LightSpecularC2Ev @ 001472e8 (arm) */
void fn_001472e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001472e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001472ec:;
    {
        cpu->r[5] = rd32(0x001472f4u + + 0x48u);
    }
L_001472f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001472f4:;
    {
        cpu->r[14] = 0x001472f8u; fn_00147048(cpu);
    }
L_001472f8:;
    {
        cpu->r[2] = rd32(0x00147300u + + 0x40u);
    }
L_001472fc:;
    {
        cpu->r[5] = add_flags(cpu, 0x00147304u, cpu->r[5], 0, 0);
    }
L_00147300:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00147304:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00147308:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0014730c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147310:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00147314:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00147318:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0014731c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00147320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00147324:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xbf80u << 16);
    }
L_00147328:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0014732c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00147330:;
    {
        cpu->r[14] = 0x00147334u; fn_00147234(cpu);
    }
L_00147334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147338:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014733cu)) return;
    }
}

/* _ZN9LightSpotC1Ev @ 00147344 (arm) */
void fn_00147344(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147344:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147348:;
    {
        cpu->r[5] = rd32(0x00147350u + + 0x54u);
    }
L_0014734c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147350:;
    {
        cpu->r[14] = 0x00147354u; fn_001470fc(cpu);
    }
L_00147354:;
    {
        cpu->r[2] = rd32(0x0014735cu + + 0x4cu);
    }
L_00147358:;
    {
        cpu->r[5] = add_flags(cpu, 0x00147360u, cpu->r[5], 0, 0);
    }
L_0014735c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00147360:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00147364:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00147368:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014736c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00147370:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00147374:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00147378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014737c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00147380:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00147384:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_00147388:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014738c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00147390:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xbf80u << 16);
    }
L_00147394:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00147398:;
    {
        cpu->r[14] = 0x0014739cu; fn_00147150(cpu);
    }
L_0014739c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001473a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001473a4u)) return;
    }
}

/* _ZN9LightSpotC2Ev @ 001473ac (arm) */
void fn_001473ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001473ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001473b0:;
    {
        cpu->r[5] = rd32(0x001473b8u + + 0x54u);
    }
L_001473b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001473b8:;
    {
        cpu->r[14] = 0x001473bcu; fn_001470fc(cpu);
    }
L_001473bc:;
    {
        cpu->r[2] = rd32(0x001473c4u + + 0x4cu);
    }
L_001473c0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001473c8u, cpu->r[5], 0, 0);
    }
L_001473c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001473c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001473cc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001473d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001473d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001473d8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001473dc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001473e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001473e4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001473e8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001473ec:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001473f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001473f4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001473f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xbf80u << 16);
    }
L_001473fc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00147400:;
    {
        cpu->r[14] = 0x00147404u; fn_00147150(cpu);
    }
L_00147404:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147408:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014740cu)) return;
    }
}

/* _ZN9LightSpot6EnableEiP7CMatrixS1_ @ 00147414 (arm) */
void fn_00147414(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147414:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147418:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014741c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00004000u, 0, 0);
    }
L_00147420:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_00147424:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00147428:;
    {
        cpu->r[1] = 0x00001203u;
    }
L_0014742c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147430:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00147434:;
    {
        cpu->r[14] = 0x00147438u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147438:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014743c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00147440:;
    {
        cpu->r[1] = 0x00001206u;
    }
L_00147444:;
    {
        cpu->r[14] = 0x00147448u; imp_glLightf(cpu); /* glLightf */
    }
L_00147448:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014744c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00147450:;
    {
        cpu->r[1] = 0x00001204u;
    }
L_00147454:;
    {
        cpu->r[14] = 0x00147458u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0014745c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147460:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00147464:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_00147468:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_0014746c:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00147470:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_00147474:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147478:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0014747c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147480:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_00147484:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147488:;
    {
        cpu->r[14] = 0x0014748cu; imp_glLightfv(cpu); /* glLightfv */
    }
L_0014748c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00147490:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00147498:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_0014749c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_001474a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_001474a4:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_001474a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_001474ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001474b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_001474b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001474b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001474bc:;
    {
        cpu->r[14] = 0x001474c0u; imp_glLightfv(cpu); /* glLightfv */
    }
L_001474c0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x7u);
    }
L_001474c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_001474c8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_001474cc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_001474d0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x5u);
    }
L_001474d4:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_001474d8:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x6u);
    }
L_001474dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001474e0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[4];
    }
L_001474e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001474ecu + + 0x54u);
    }
L_001474e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001474ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001474f0:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_001474f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_001474f8:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001474fc:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_00147500:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_00147504:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_00147508:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_0014750c:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_00147510:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00147514:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00147518:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014751c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00147520:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00147524:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00147528:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014752c:;
    {
        cpu->r[14] = 0x00147530u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147530:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147534:;
    {
        cpu->r[14] = 0x00147538u; imp_glEnable(cpu); /* glEnable */
    }
L_00147538:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0014753c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147540u)) return;
    }
}

/* _ZN9LightOmni6EnableEiP7CMatrixS1_ @ 00147544 (arm) */
void fn_00147544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147544:;
    {
        cpu->r[3] = rd32(0x0014754cu + + 0x138u);
    }
L_00147548:;
    {
        cpu->r[2] = rd32(0x00147550u + + 0x138u);
    }
L_0014754c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00147554u, cpu->r[3], 0, 0);
    }
L_00147550:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147554:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00004000u, 0, 0);
    }
L_00147558:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014755c:;
    {
        cpu->r[1] = rd32(0x00147564u + + 0x128u);
    }
L_00147560:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00147564:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_00147568:;
    {
        cpu->r[2] = rd32(0x00147570u + + 0x120u);
    }
L_0014756c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00147570:;
    {
        cpu->r[4] = rd32(0x00147578u + + 0x11cu);
    }
L_00147574:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_00147578:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0014757c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00147584u, cpu->r[4], 0, 0);
    }
L_00147580:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00147584:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00147588:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0014758c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00147590:;
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
L_00147594:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00147598:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0014759c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001475a0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001475a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001475a8:;
    {
        cpu->r[1] = 0x00001203u;
    }
L_001475ac:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001475b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001475b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001475b8:;
    {
        cpu->r[14] = 0x001475bcu; imp_glLightfv(cpu); /* glLightfv */
    }
L_001475bc:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x7u);
    }
L_001475c0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_001475c4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x4u);
    }
L_001475c8:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_001475cc:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x5u);
    }
L_001475d0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_001475d4:;
    {
        cpu->r[6] = rd8(cpu->r[6] + + 0x6u);
    }
L_001475d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001475dc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
    }
L_001475e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001475e8u + + 0x98u);
    }
L_001475e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001475e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001475ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001475f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001475f4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001475f8:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_001475fc:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_00147600:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_00147604:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_00147608:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_0014760c:;
    {
        vfp_vmul(cpu, 11, 11, 15);
    }
L_00147610:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00147614:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00147618:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014761c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00147620:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00147624:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00147628:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014762c:;
    {
        cpu->r[14] = 0x00147630u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_00147634:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00147638:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_0014763c:;
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
L_00147640:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_00147644:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00147648:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014764c:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_00147650:;
    {
        cpu->r[14] = 0x00147654u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147654:;
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
L_00147658:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_0014765c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_00147660:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147664:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00147668:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_0014766c:;
    {
        cpu->r[14] = 0x00147670u; imp_glLightfv(cpu); /* glLightfv */
    }
L_00147670:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147674:;
    {
        cpu->r[14] = 0x00147678u; imp_glEnable(cpu); /* glEnable */
    }
L_00147678:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014767c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147680u)) return;
    }
}

/* _ZN9LightSpot9setAttenAEi @ 00147698 (arm) */
void fn_00147698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147698:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x3cu);
    }
L_0014769c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001476a4u + + 0x158u);
    }
L_001476a0:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001476a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001476acu + + 0x154u);
    }
L_001476a8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001476ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001476b0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001476b4:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_001476b8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001476bc:;
    {
        cpu->r[14] = 0x001476c0u; imp_cosf(cpu); /* cosf */
    }
L_001476c0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001476c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 1);
    }
L_001476c8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[5]) {
        case 0: goto L_00147744;
        case 1: goto L_00147754;
        case 2: goto L_00147768;
        case 3: goto L_00147784;
        case 4: goto L_001477a0;
        case 5: goto L_001477cc;
        case 6: goto L_001476ec;
        default: guest_unimplemented(cpu, 0x001476c8u); return; }
        }
    }
L_001476cc:;
    {
        goto L_00147734;
    }
L_001476ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001476f4u + + 0x110u);
    }
L_001476f0:;
    {
        vfp_vmul(cpu, 11, 15, 14);
    }
L_001476f4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001476fcu + + 0x10cu);
    }
L_001476f8:;
    {
        vfp_vsub(cpu, 13, 12, 15);
    }
L_001476fc:;
    {
        vfp_vmul(cpu, 10, 11, 15);
    }
L_00147700:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00147708u + + 0x104u);
    }
L_00147704:;
    {
        vfp_vmul(cpu, 13, 13, 13);
    }
L_00147708:;
    {
        vfp_vmul(cpu, 11, 15, 11);
    }
L_0014770c:;
    {
        vfp_vdiv(cpu, 15, 10, 13);
    }
L_00147710:;
    {
        vfp_vdiv(cpu, 14, 14, 13);
    }
L_00147714:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_00147718:;
    {
        vfp_vadd(cpu, 12, 15, 12);
    }
L_0014771c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147720:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00147724:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00147728:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014772c:;
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
L_00147730:;
    {
        return fn_00147160(cpu);
    }
L_00147734:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014773cu + + 0xd4u);
    }
L_00147738:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
    }
L_0014773c:;
    {
        *vfp_s(cpu,12) = *vfp_s(cpu,14);
    }
L_00147740:;
    {
        goto L_0014771c;
    }
L_00147744:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014774cu + + 0xc4u);
    }
L_00147748:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00147750u + + 0xb8u);
    }
L_0014774c:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
    }
L_00147750:;
    {
        goto L_0014771c;
    }
L_00147754:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014775cu + + 0xb8u);
    }
L_00147758:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00147760u + + 0xb8u);
    }
L_0014775c:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_00147760:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00147768u + + 0xa8u);
    }
L_00147764:;
    {
        goto L_0014771c;
    }
L_00147768:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00147770u + + 0x98u);
    }
L_0014776c:;
    {
        vfp_vsub(cpu, 12, 13, 15);
    }
L_00147770:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00147778u + + 0x98u);
    }
L_00147774:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00147778:;
    {
        vfp_vdiv(cpu, 13, 13, 12);
    }
L_0014777c:;
    {
        vfp_vdiv(cpu, 12, 15, 12);
    }
L_00147780:;
    {
        goto L_0014771c;
    }
L_00147784:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014778cu + + 0x7cu);
    }
L_00147788:;
    {
        vfp_vsub(cpu, 13, 14, 15);
    }
L_0014778c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00147794u + + 0x7cu);
    }
L_00147790:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00147794:;
    {
        vfp_vdiv(cpu, 14, 14, 13);
    }
L_00147798:;
    {
        vfp_vdiv(cpu, 13, 15, 13);
    }
L_0014779c:;
    {
        goto L_0014771c;
    }
L_001477a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001477a8u + + 0x74u);
    }
L_001477a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001477acu + + 0x5cu);
    }
L_001477a8:;
    {
        vfp_vsub(cpu, 12, 15, 13);
    }
L_001477ac:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001477b0:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_001477b4:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_001477b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001477c0u + + 0x60u);
    }
L_001477bc:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_001477c0:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_001477c4:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_001477c8:;
    {
        goto L_0014771c;
    }
L_001477cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001477d4u + + 0x34u);
    }
L_001477d0:;
    {
        vfp_vadd(cpu, 11, 15, 13);
    }
L_001477d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001477dcu + + 0x48u);
    }
L_001477d8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001477e0u + + 0x2cu);
    }
L_001477dc:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_001477e0:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_001477e4:;
    {
        vfp_vmul(cpu, 13, 13, 13);
    }
L_001477e8:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001477ec:;
    {
        vfp_vdiv(cpu, 14, 14, 13);
    }
L_001477f0:;
    {
        vfp_vdiv(cpu, 12, 15, 13);
    }
L_001477f4:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_001477f8:;
    {
        goto L_0014771c;
    }
}

/* _ZN5Light7DisableEi @ 00147828 (arm) */
void fn_00147828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147828:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00004000u, 0, 0);
    }
L_0014782c:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _ZN5Light4loadEP8LZMAFile @ 00147830 (arm) */
void fn_00147830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147830:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00147834:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147838:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014783c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00147840:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00147844:;
    {
        cpu->r[14] = 0x00147848u; fn_000fc678(cpu);
    }
L_00147848:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014784c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00147850:;
    {
        cpu->r[14] = 0x00147854u; fn_000fc678(cpu);
    }
L_00147854:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00147858:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014785c:;
    {
        cpu->r[14] = 0x00147860u; fn_000fc678(cpu);
    }
L_00147860:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00147864:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00147868:;
    {
        cpu->r[14] = 0x0014786cu; fn_000fc678(cpu);
    }
L_0014786c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00147870:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00147874:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00147878:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014787c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147880:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00147884:;
    {
        cpu->r[14] = 0x00147888u; fn_00146fe0(cpu);
    }
L_00147888:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014788c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147890u)) return;
    }
}

/* _ZN13LightSpecular4loadEP8LZMAFile @ 00147890 (arm) */
void fn_00147890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147890:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00147894:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00147898:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014789c:;
    {
        cpu->r[14] = 0x001478a0u; fn_00147830(cpu);
    }
L_001478a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478a4:;
    {
        cpu->r[14] = 0x001478a8u; fn_000fc5fc(cpu);
    }
L_001478a8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001478ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478b0:;
    {
        cpu->r[14] = 0x001478b4u; fn_000fc5fc(cpu);
    }
L_001478b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001478b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478bc:;
    {
        cpu->r[14] = 0x001478c0u; fn_000fc5fc(cpu);
    }
L_001478c0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001478c4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001478c8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001478cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001478d0:;
    {
        cpu->r[14] = 0x001478d4u; fn_00147234(cpu);
    }
L_001478d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478d8:;
    {
        cpu->r[14] = 0x001478dcu; fn_000fc5fc(cpu);
    }
L_001478dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001478e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478e4:;
    {
        cpu->r[14] = 0x001478e8u; fn_000fc5fc(cpu);
    }
L_001478e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001478ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001478f0:;
    {
        cpu->r[14] = 0x001478f4u; fn_000fc5fc(cpu);
    }
L_001478f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001478f8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001478fc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00147900:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147904:;
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
L_00147908:;
    {
        return fn_00147244(cpu);
    }
}

/* _ZN9LightOmni4loadEP8LZMAFile @ 0014790c (arm) */
void fn_0014790c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014790c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00147910:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00147914:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00147918:;
    {
        cpu->r[14] = 0x0014791cu; fn_00147830(cpu);
    }
L_0014791c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147920:;
    {
        cpu->r[14] = 0x00147924u; fn_000fc5fc(cpu);
    }
L_00147924:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00147928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014792c:;
    {
        cpu->r[14] = 0x00147930u; fn_000fc5fc(cpu);
    }
L_00147930:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00147934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147938:;
    {
        cpu->r[14] = 0x0014793cu; fn_000fc5fc(cpu);
    }
L_0014793c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00147940:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00147944:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00147948:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014794c:;
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
L_00147950:;
    {
        return fn_00147098(cpu);
    }
}

/* _ZN9LightSpot4loadEP8LZMAFile @ 00147954 (arm) */
void fn_00147954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147954:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00147958:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014795c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00147960:;
    {
        cpu->r[14] = 0x00147964u; fn_0014790c(cpu);
    }
L_00147964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147968:;
    {
        cpu->r[14] = 0x0014796cu; fn_000fc5fc(cpu);
    }
L_0014796c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00147970:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147974:;
    {
        cpu->r[14] = 0x00147978u; fn_000fc5fc(cpu);
    }
L_00147978:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014797c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00147980:;
    {
        cpu->r[14] = 0x00147984u; fn_000fc5fc(cpu);
    }
L_00147984:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00147988:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014798c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00147990:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147994:;
    {
        cpu->r[14] = 0x00147998u; fn_00147150(cpu);
    }
L_00147998:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014799c:;
    {
        cpu->r[14] = 0x001479a0u; fn_000fc5fc(cpu);
    }
L_001479a0:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[0]);
    }
L_001479a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479a8:;
    {
        cpu->r[14] = 0x001479acu; fn_000fc5fc(cpu);
    }
L_001479ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001479b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479b4:;
    {
        cpu->r[14] = 0x001479b8u; fn_000fc5fc(cpu);
    }
L_001479b8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001479bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479c0:;
    {
        cpu->r[14] = 0x001479c4u; fn_000fc5fc(cpu);
    }
L_001479c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001479c8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001479cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001479d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001479d4:;
    {
        cpu->r[14] = 0x001479d8u; fn_00147160(cpu);
    }
L_001479d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479dc:;
    {
        cpu->r[14] = 0x001479e0u; fn_000fc5fc(cpu);
    }
L_001479e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001479e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479e8:;
    {
        cpu->r[14] = 0x001479ecu; fn_000fc5fc(cpu);
    }
L_001479ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001479f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001479f4:;
    {
        cpu->r[14] = 0x001479f8u; fn_000fc5fc(cpu);
    }
L_001479f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001479fc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00147a00:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00147a04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00147a08:;
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
L_00147a0c:;
    {
        return fn_00147170(cpu);
    }
}

/* _ZN6ShaderC2Ev @ 00147a10 (arm) */
void fn_00147a10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147a10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147a14:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_00147a18:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147a1c:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_00147a20:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00147a24:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_00147a28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6ShaderC1Ev @ 00147a2c (arm) */
void fn_00147a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147a2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147a30:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_00147a34:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147a38:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_00147a3c:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00147a40:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_00147a44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Shader12GetTexMapNumEv @ 00147a48 (arm) */
void fn_00147a48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147a48:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x44u);
    }
L_00147a4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Shader9GetTexMapEii @ 00147a50 (arm) */
void fn_00147a50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147a50:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x44u);
    }
L_00147a54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00147a58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00147a78;
        }
    }
L_00147a5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00147a60:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_00147a64:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_00147a68:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x58u);
    }
L_00147a6c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00147a70:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00147a74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00147a78:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00147a7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Shader11GetTexCoordEii @ 00147a80 (arm) */
void fn_00147a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147a80:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x44u);
    }
L_00147a84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00147a88:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00147a8c:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00147a90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00147a94:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_00147a98:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_00147a9c:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x59u);
    }
L_00147aa0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00147aa4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00147aa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Shader13ForceAdditiveEb @ 00147aac (arm) */
void fn_00147aac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147aac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombineC2Ev @ 00147ab0 (arm) */
void fn_00147ab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147ab0:;
    {
        cpu->r[2] = 0x00000302u;
    }
L_00147ab4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00147abcu + + 0x7cu);
    }
L_00147ab8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00147abc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147ac0:;
    {
        cpu->r[5] = 0x00001702u;
    }
L_00147ac4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147ac8:;
    {
        cpu->r[4] = 0x00008578u;
    }
L_00147acc:;
    {
        cpu->r[12] = 0x00008576u;
    }
L_00147ad0:;
    {
        cpu->r[1] = 0x00000300u;
    }
L_00147ad4:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00147ad8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00147adc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147ae0:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_00147ae4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147ae8:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00147aec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00147af4u + + 0x48u);
    }
L_00147af0:;
    {
        cpu->r[2] = 0x00002100u;
    }
L_00147af4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_00147af8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00147afc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b00:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147b04:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00147b0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147b10:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_00147b14:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00147b18:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00147b1c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_00147b20:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00147b24:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_00147b28:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_00147b2c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_00147b30:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00147b34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombineC1Ev @ 00147b40 (arm) */
void fn_00147b40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147b40:;
    {
        cpu->r[2] = 0x00000302u;
    }
L_00147b44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00147b4cu + + 0x7cu);
    }
L_00147b48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00147b4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b50:;
    {
        cpu->r[5] = 0x00001702u;
    }
L_00147b54:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b58:;
    {
        cpu->r[4] = 0x00008578u;
    }
L_00147b5c:;
    {
        cpu->r[12] = 0x00008576u;
    }
L_00147b60:;
    {
        cpu->r[1] = 0x00000300u;
    }
L_00147b64:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00147b68:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00147b6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b70:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_00147b74:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b78:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00147b7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00147b84u + + 0x48u);
    }
L_00147b80:;
    {
        cpu->r[2] = 0x00002100u;
    }
L_00147b84:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_00147b88:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00147b8c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b90:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147b94:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147b98:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00147b9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147ba0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_00147ba4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00147ba8:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00147bac:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_00147bb0:;
    {
        wr8(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00147bb4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_00147bb8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_00147bbc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_00147bc0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00147bc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombineD2Ev @ 00147bd0 (arm) */
void fn_00147bd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147bd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombineD1Ev @ 00147bd4 (arm) */
void fn_00147bd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147bd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombine7ColorOpEiiiiiiif @ 00147bd8 (arm) */
void fn_00147bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147bd8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00147bdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00147be0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00147be4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147be8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00147bec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00147bf0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00147bf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00147bf8:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00147bfc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00147c00:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00147c04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00147c08:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00147c0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombine7AlphaOpEiiiiiiif @ 00147c10 (arm) */
void fn_00147c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c10:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_00147c14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00147c18:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00147c1c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147c20:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00147c24:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00147c28:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00147c2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00147c30:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[3]);
    }
L_00147c34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00147c38:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00147c3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00147c40:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00147c44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13TexEnvCombine13ColorConstantEffff @ 00147c48 (arm) */
void fn_00147c48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_00147c4c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[1]);
    }
L_00147c50:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00147c54:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_00147c58:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[3]);
    }
L_00147c5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6Shader13SetPaletteMtxEiP7CMatrix @ 00147c60 (arm) */
void fn_00147c60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgrC2Ev @ 00147c64 (arm) */
void fn_00147c64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147c68:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00147c6c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00147c70:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00147c74:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00147c78:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147c7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgrC1Ev @ 00147c80 (arm) */
void fn_00147c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c80:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00147c84:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00147c88:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00147c8c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00147c90:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00147c94:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00147c98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr14PrepareShadersEv @ 00147c9c (arm) */
void fn_00147c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147c9c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00147ca0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr14ValidateShaderEi @ 00147ca4 (arm) */
void fn_00147ca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147ca4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00147ca8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00147cc0;
        }
    }
L_00147cac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00147cb0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00147cb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00147cc0;
        }
    }
L_00147cb8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00147cbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00147cc0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00147cc4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00147cc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr11ClearShaderEv @ 00147ccc (arm) */
void fn_00147ccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147ccc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr10SetTexGensEv @ 00147cd0 (arm) */
void fn_00147cd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147cd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr12ClearTexGensEv @ 00147cd4 (arm) */
void fn_00147cd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147cd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9ShaderMgr9GetShaderEi @ 00147cd8 (arm) */
void fn_00147cd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147cd8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00147cdc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00147ce0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00147ce4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00147ce8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00147cf8;
        }
    }
L_00147cec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00147cf0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00147cf4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00147d2c;
        }
    }
L_00147cf8:;
    {
        cpu->r[1] = rd32(0x00147d00u + + 0x40u);
    }
L_00147cfc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00147d00:;
    {
        cpu->r[2] = rd32(0x00147d08u + + 0x3cu);
    }
L_00147d04:;
    {
        cpu->r[14] = 0x00000379u;
    }
L_00147d08:;
    {
        cpu->r[3] = rd32(0x00147d10u + + 0x38u);
    }
L_00147d0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00147d14u, cpu->r[1], 0, 0);
    }
L_00147d10:;
    {
        cpu->r[12] = rd32(0x00147d18u + + 0x34u);
    }
L_00147d14:;
    {
        cpu->r[2] = add_flags(cpu, 0x00147d1cu, cpu->r[2], 0, 0);
    }
L_00147d18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00147d20u, cpu->r[3], 0, 0);
    }
L_00147d1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00147d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00147d28u, cpu->r[12], 0, 0);
    }
L_00147d24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00147d28:;
    {
        cpu->r[14] = 0x00147d2cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00147d2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00147d30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00147d34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_00147d38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00147d3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00147d40u)) return;
    }
}

/* _ZN13TexEnvCombine5ApplyEi @ 00147d50 (arm) */
void fn_00147d50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147d50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00147d54:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x58u);
    }
L_00147d58:;
    {
        cpu->r[5] = rd32(0x00147d60u + + 0x118u);
    }
L_00147d5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147d60:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_00147d64:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00147d68:;
    {
        cpu->r[5] = add_flags(cpu, 0x00147d70u, cpu->r[5], 0, 0);
    }
L_00147d6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147d70u)) return;
        }
    }
L_00147d70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00008400u, 0, 0);
    }
L_00147d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_00147d78:;
    {
        cpu->r[14] = 0x00147d7cu; imp_glActiveTexture(cpu); /* glActiveTexture */
    }
L_00147d7c:;
    {
        cpu->r[3] = rd32(0x00147d84u + + 0xf8u);
    }
L_00147d80:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00147d84:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00147d88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00147d8c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00147d90:;
    {
        cpu->r[14] = 0x00147d94u; fn_0012e788(cpu);
    }
L_00147d94:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00147d98:;
    {
        cpu->r[3] = 0x00008570u;
    }
L_00147d9c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00147da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00147dc4;
        }
    }
L_00147da4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x44u);
    }
L_00147da8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00147dac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00147db0u)) return;
        }
    }
L_00147db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00147db4:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147db8:;
    {
        cpu->r[1] = 0x00002201u;
    }
L_00147dbc:;
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
L_00147dc0:;
    {
        imp_glTexEnvfv(cpu); /* tail glTexEnvfv */ return;
    }
L_00147dc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00147dc8:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147dcc:;
    {
        cpu->r[1] = 0x00008571u;
    }
L_00147dd0:;
    {
        cpu->r[14] = 0x00147dd4u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147dd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00147dd8:;
    {
        cpu->r[3] = 0x000086afu;
    }
L_00147ddc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00147de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00147df4;
        }
    }
L_00147de4:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147de8:;
    {
        cpu->r[1] = 0x00008572u;
    }
L_00147dec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00147df0:;
    {
        cpu->r[14] = 0x00147df4u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147df4:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147df8:;
    {
        cpu->r[1] = 0x00008580u;
    }
L_00147dfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00147e00:;
    {
        cpu->r[14] = 0x00147e04u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00147e08:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147e0c:;
    {
        cpu->r[1] = 0x00008590u;
    }
L_00147e10:;
    {
        cpu->r[14] = 0x00147e14u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00147e18:;
    {
        cpu->r[3] = 0x00001e01u;
    }
L_00147e1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00147e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00147da4;
        }
    }
L_00147e24:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147e28:;
    {
        cpu->r[1] = 0x00008581u;
    }
L_00147e2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00147e30:;
    {
        cpu->r[14] = 0x00147e34u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00147e38:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147e3c:;
    {
        cpu->r[1] = 0x00008591u;
    }
L_00147e40:;
    {
        cpu->r[14] = 0x00147e44u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00147e48:;
    {
        cpu->r[3] = 0x00008575u;
    }
L_00147e4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00147e50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00147da4;
        }
    }
L_00147e54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_00147e58:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147e5c:;
    {
        cpu->r[1] = 0x00008582u;
    }
L_00147e60:;
    {
        cpu->r[14] = 0x00147e64u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e64:;
    {
        cpu->r[0] = 0x00002300u;
    }
L_00147e68:;
    {
        cpu->r[1] = 0x00008592u;
    }
L_00147e6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00147e70:;
    {
        cpu->r[14] = 0x00147e74u; imp_glTexEnvi(cpu); /* glTexEnvi */
    }
L_00147e74:;
    {
        goto L_00147da4;
    }
}

/* _ZN6Shader11SetMaterialEP8Material @ 00147e80 (arm) */
void fn_00147e80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147e80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00147e84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147e88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00147e8c:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_00147e90:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_00147e94:;
    {
        cpu->r[14] = 0x00147e98u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_00147e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_00147e9c:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_00147ea0:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_00147ea4:;
    {
        cpu->r[14] = 0x00147ea8u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_00147ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00147eac:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_00147eb0:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_00147eb4:;
    {
        cpu->r[14] = 0x00147eb8u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_00147eb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_00147ebc:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_00147ec0:;
    {
        cpu->r[1] = 0x00001600u;
    }
L_00147ec4:;
    {
        cpu->r[14] = 0x00147ec8u; imp_glMaterialfv(cpu); /* glMaterialfv */
    }
L_00147ec8:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x44u);
    }
L_00147ecc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[4];
    }
L_00147ed0:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00147ed4:;
    {
        cpu->r[0] = 0x00000408u;
    }
L_00147ed8:;
    {
        cpu->r[1] = 0x00001601u;
    }
L_00147edc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00147ee0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00147ee4:;
    {
        imp_glMaterialf(cpu); /* tail glMaterialf */ return;
    }
}

/* _ZN6Shader3SetEv @ 00147ee8 (arm) */
void fn_00147ee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00147ee8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00147eec:;
    {
        cpu->r[5] = rd32(0x00147ef4u + + 0x230u);
    }
L_00147ef0:;
    {
        cpu->r[8] = rd32(0x00147ef8u + + 0x230u);
    }
L_00147ef4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00147ef8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00147f00u, cpu->r[5], 0, 0);
    }
L_00147efc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00147f00:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_00147f04:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00147f08:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00147f0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00147f10:;
    {
        cpu->r[6] = rd32(cpu->r[7]);
    }
L_00147f14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00147f18:;
    {
        cpu->r[14] = 0x00147f1cu; fn_0012e9c4(cpu);
    }
L_00147f1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00147f20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_00147f24:;
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
L_00147f28:;
    {
        cpu->r[14] = 0x00147f2cu; fn_0012e938(cpu);
    }
L_00147f2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_00147f30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00147f34:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x28u);
    }
L_00147f38:;
    {
        cpu->r[14] = 0x00147f3cu; fn_0012e89c(cpu);
    }
L_00147f3c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x6u);
    }
L_00147f40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00147f44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00147fd8;
        }
    }
L_00147f48:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00147f4c:;
    {
        cpu->r[14] = 0x00147f50u; fn_0012e19c(cpu);
    }
L_00147f50:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x7u);
    }
L_00147f54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00147f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001480a0;
        }
    }
L_00147f5c:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_00147f60:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00147f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00147f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148064;
        }
    }
L_00147f6c:;
    {
        cpu->r[3] = 0x000017a8u;
    }
L_00147f70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00147f78u + + 0x1a8u);
    }
L_00147f74:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00147f78:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00147f7c:;
    {
        cpu->r[3] = 0x000017a9u;
    }
L_00147f80:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00147f84:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00147f88:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00147f8c:;
    {
        cpu->r[3] = 0x000017aau;
    }
L_00147f90:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00147f94:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00147f98:;
    {
        cpu->r[3] = 0x000017abu;
    }
L_00147f9c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00147fa0:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00147fa4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_00147fa8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00147fac:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00147fb0:;
    {
        vfp_vdiv(cpu, 10, 11, 15);
    }
L_00147fb4:;
    {
        vfp_vdiv(cpu, 11, 12, 15);
    }
L_00147fb8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00147fbc:;
    {
        vfp_vdiv(cpu, 12, 13, 15);
    }
L_00147fc0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_00147fc4:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_00147fc8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00147fcc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00147fd0:;
    {
        cpu->r[14] = 0x00147fd4u; imp_glColor4f(cpu); /* glColor4f */
    }
L_00147fd4:;
    {
        goto L_00147ff0;
    }
L_00147fd8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00147fdc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00147fe0:;
    {
        cpu->r[14] = 0x00147fe4u; fn_0012e19c(cpu);
    }
L_00147fe4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x7u);
    }
L_00147fe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00147fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00147f5c;
        }
    }
L_00147ff0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00147ff4:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x4u);
    }
L_00147ff8:;
    {
        cpu->r[14] = 0x00147ffcu; fn_0012e824(cpu);
    }
L_00147ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00148000:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00148004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148014;
        }
    }
L_00148008:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4cu);
    }
L_0014800c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00148010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014807c;
        }
    }
L_00148014:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00148018:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014801c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00148020:;
    {
        cpu->r[14] = 0x00148024u; fn_0012e0f0(cpu);
    }
L_00148024:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x44u);
    }
L_00148028:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014802c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00148030:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_00148034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014805c;
        }
    }
L_00148038:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0014803c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00148040:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00148044:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00148048:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_0014804c:;
    {
        cpu->r[14] = 0x00148050u; fn_00147d50(cpu);
    }
L_00148050:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x44u);
    }
L_00148054:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00148058:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00148038;
        }
    }
L_0014805c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00148060:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148064u)) return;
    }
L_00148064:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00148068:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_0014806c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00148070:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00148074:;
    {
        cpu->r[14] = 0x00148078u; imp_glColor4f(cpu); /* glColor4f */
    }
L_00148078:;
    {
        goto L_00147ff0;
    }
L_0014807c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00148080:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00148084:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00148088:;
    {
        cpu->r[14] = 0x0014808cu; fn_0012e0f0(cpu);
    }
L_0014808c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00148090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001480d8;
        }
    }
L_00148098:;
    {
        cpu->r[14] = 0x0014809cu; fn_00147e80(cpu);
    }
L_0014809c:;
    {
        goto L_00148024;
    }
L_001480a0:;
    {
        cpu->r[3] = rd32(0x001480a8u + + 0x84u);
    }
L_001480a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001480a8:;
    {
        cpu->r[3] = rd32(0x001480b0u + + 0x80u);
    }
L_001480ac:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001480b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001480b4:;
    {
        cpu->r[3] = rd32(0x001480bcu + + 0x78u);
    }
L_001480b8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001480bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001480c0:;
    {
        cpu->r[3] = rd32(0x001480c8u + + 0x70u);
    }
L_001480c4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001480c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001480cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001480d0:;
    {
        cpu->r[14] = 0x001480d4u; imp_glColor4f(cpu); /* glColor4f */
    }
L_001480d4:;
    {
        goto L_00147fe4;
    }
L_001480d8:;
    {
        cpu->r[1] = rd32(0x001480e0u + + 0x5cu);
    }
L_001480dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001480e0:;
    {
        cpu->r[12] = rd32(0x001480e8u + + 0x58u);
    }
L_001480e4:;
    {
        cpu->r[14] = 0x000000fcu;
    }
L_001480e8:;
    {
        cpu->r[2] = rd32(0x001480f0u + + 0x54u);
    }
L_001480ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001480f4u, cpu->r[1], 0, 0);
    }
L_001480f0:;
    {
        cpu->r[3] = rd32(0x001480f8u + + 0x50u);
    }
L_001480f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001480fcu, cpu->r[12], 0, 0);
    }
L_001480f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00148100u, cpu->r[2], 0, 0);
    }
L_001480fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_00148100:;
    {
        cpu->r[3] = add_flags(cpu, 0x00148108u, cpu->r[3], 0, 0);
    }
L_00148104:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00148108:;
    {
        cpu->r[14] = 0x0014810cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014810c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00148110:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148024;
        }
    }
L_00148118:;
    {
        cpu->r[14] = 0x0014811cu; fn_00147e80(cpu);
    }
L_0014811c:;
    {
        goto L_00148024;
    }
}

/* _ZN9ShaderMgr9SetShaderEi @ 0014814c (arm) */
void fn_0014814c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014814c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00148150:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00148154:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00148158:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014815c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001481a0;
        }
    }
L_00148160:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00148164:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00148168:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001481a0;
        }
    }
L_0014816c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00148170:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00148174:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00148178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0014817c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00148180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001481ec;
        }
    }
L_00148184:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00148188:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014818c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 4u, &shc), cpu->r[5]);
    }
L_00148190:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00148194:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00148198:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0014819c:;
    {
        return fn_00147ee8(cpu);
    }
L_001481a0:;
    {
        cpu->r[1] = rd32(0x001481a8u + + 0x4cu);
    }
L_001481a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001481a8:;
    {
        cpu->r[12] = rd32(0x001481b0u + + 0x48u);
    }
L_001481ac:;
    {
        cpu->r[14] = 0x0000034du;
    }
L_001481b0:;
    {
        cpu->r[2] = rd32(0x001481b8u + + 0x44u);
    }
L_001481b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001481bcu, cpu->r[1], 0, 0);
    }
L_001481b8:;
    {
        cpu->r[3] = rd32(0x001481c0u + + 0x40u);
    }
L_001481bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001481c4u, cpu->r[12], 0, 0);
    }
L_001481c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001481c8u, cpu->r[2], 0, 0);
    }
L_001481c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001481c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001481d0u, cpu->r[3], 0, 0);
    }
L_001481cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001481d0:;
    {
        cpu->r[14] = 0x001481d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001481d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001481d8:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001481dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001481e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_001481e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001481e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148184;
        }
    }
L_001481ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001481f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001481f4u)) return;
    }
}

/* _ZN6Shader4LoadEP8LZMAFilei @ 00148204 (arm) */
void fn_00148204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148204:;
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
L_00148208:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014820c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00148210:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00148214:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00148218:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014821c:;
    {
        cpu->r[14] = 0x00148220u; fn_000fc678(cpu);
    }
L_00148220:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148224:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00148228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014822c:;
    {
        cpu->r[14] = 0x00148230u; fn_000fc678(cpu);
    }
L_00148230:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[0]);
    }
L_00148234:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148238:;
    {
        cpu->r[14] = 0x0014823cu; fn_000fc678(cpu);
    }
L_0014823c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148240:;
    {
        wr8(cpu->r[4] + + 0x7u, cpu->r[0]);
    }
L_00148244:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001485ec;
        }
    }
L_0014824c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148250:;
    {
        cpu->r[14] = 0x00148254u; fn_000fc678(cpu);
    }
L_00148254:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00148258:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014825c:;
    {
        cpu->r[14] = 0x00148260u; fn_000fc628(cpu);
    }
L_00148260:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00148264:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148268:;
    {
        cpu->r[14] = 0x0014826cu; fn_000fc628(cpu);
    }
L_0014826c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00148270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148274:;
    {
        cpu->r[14] = 0x00148278u; fn_000fc628(cpu);
    }
L_00148278:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_0014827c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148280:;
    {
        cpu->r[14] = 0x00148284u; fn_000fc628(cpu);
    }
L_00148284:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00148288:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014828c:;
    {
        cpu->r[14] = 0x00148290u; fn_000fc628(cpu);
    }
L_00148290:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00148294:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148298:;
    {
        cpu->r[14] = 0x0014829cu; fn_000fc628(cpu);
    }
L_0014829c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001482a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001482a4:;
    {
        cpu->r[14] = 0x001482a8u; fn_000fc628(cpu);
    }
L_001482a8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_001482ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001482b0:;
    {
        cpu->r[14] = 0x001482b4u; fn_000fc628(cpu);
    }
L_001482b4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001482b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001482bc:;
    {
        cpu->r[14] = 0x001482c0u; fn_000fc678(cpu);
    }
L_001482c0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001482c4:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_001482c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001482cc:;
    {
        cpu->r[14] = 0x001482d0u; fn_000fc678(cpu);
    }
L_001482d0:;
    {
        { uint32_t v = cpu->r[0] & 0x000000ffu; set_nz(cpu, v); }
    }
L_001482d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148668;
        }
    }
L_001482d8:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x44u);
    }
L_001482dc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001482e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148468;
        }
    }
L_001482e4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001482e8:;
    {
        cpu->r[11] = 0x0000005cu;
    }
L_001482ec:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001482f0:;
    {
        cpu->r[9] = 0x00008570u;
    }
L_001482f4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001482fcu + + 0x368u);
    }
L_001482f8:;
    {
        goto L_00148310;
    }
L_001482fc:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x44u);
    }
L_00148300:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00148304:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_00148308:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_0014830c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00148468;
        }
    }
L_00148310:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148314:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00148318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148594;
        }
    }
L_0014831c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148320:;
    {
        cpu->r[14] = 0x00148324u; fn_000fc628(cpu);
    }
L_00148324:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148328:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0014832c:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[0]);
    }
L_00148330:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148334:;
    {
        cpu->r[14] = 0x00148338u; fn_000fc678(cpu);
    }
L_00148338:;
    {
        wr8(cpu->r[10] + + 0x58u, cpu->r[0]);
    }
L_0014833c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148340:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148344:;
    {
        cpu->r[14] = 0x00148348u; fn_000fc678(cpu);
    }
L_00148348:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0014834c:;
    {
        wr8(cpu->r[7] + + 0x59u, cpu->r[0]);
    }
L_00148350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148354:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00148358:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0014835c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00148360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148478;
        }
    }
L_00148364:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148368:;
    {
        cpu->r[14] = 0x0014836cu; fn_000fc678(cpu);
    }
L_0014836c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148370:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148374:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00148378:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014837c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00148380:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148384:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148388:;
    {
        cpu->r[14] = 0x0014838cu; fn_000fc678(cpu);
    }
L_0014838c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148390:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00148394:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00148398:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014839c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001483a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001483a4:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001483a8:;
    {
        cpu->r[14] = 0x001483acu; fn_000fc678(cpu);
    }
L_001483ac:;
    {
        wr8(cpu->r[7] + + 0x44u, cpu->r[0]);
    }
L_001483b0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_001483b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001483b8:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x44u);
    }
L_001483bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001483c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001482fc;
        }
    }
L_001483c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001483c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001483cc:;
    {
        cpu->r[14] = 0x001483d0u; fn_000fc678(cpu);
    }
L_001483d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001483d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001483d8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001483dc:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001483e0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001483e4:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_001483e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001483ec:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_001483f0:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001483f4:;
    {
        cpu->r[14] = 0x001483f8u; fn_000fc678(cpu);
    }
L_001483f8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001483fc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148400:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148404:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148408:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014840c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148410:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148414:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148418:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014841c:;
    {
        cpu->r[14] = 0x00148420u; fn_000fc678(cpu);
    }
L_00148420:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148424:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00148428:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_0014842c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148430:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148434:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148438:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014843c:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148440:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148444:;
    {
        cpu->r[14] = 0x00148448u; fn_000fc678(cpu);
    }
L_00148448:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014844c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148450:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148454:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148458:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014845c:;
    {
        cpu->r[10] = rd8(cpu->r[4] + + 0x44u);
    }
L_00148460:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_00148464:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00148310;
        }
    }
L_00148468:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014846c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00148470:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00148474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148478u)) return;
    }
L_00148478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014847c:;
    {
        cpu->r[14] = 0x00148480u; fn_000fc628(cpu);
    }
L_00148480:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148484:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148488:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_0014848c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148490:;
    {
        cpu->r[14] = 0x00148494u; fn_000fc628(cpu);
    }
L_00148494:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148498:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0014849c:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[0]);
    }
L_001484a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001484a4:;
    {
        cpu->r[14] = 0x001484a8u; fn_000fc628(cpu);
    }
L_001484a8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_001484ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001484b0:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001484b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001484b8:;
    {
        cpu->r[14] = 0x001484bcu; fn_000fc628(cpu);
    }
L_001484bc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_001484c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001484c4:;
    {
        wr32(cpu->r[10] + + 0x10u, cpu->r[0]);
    }
L_001484c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001484cc:;
    {
        cpu->r[14] = 0x001484d0u; fn_000fc628(cpu);
    }
L_001484d0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_001484d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001484d8:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[0]);
    }
L_001484dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001484e0:;
    {
        cpu->r[14] = 0x001484e4u; fn_000fc628(cpu);
    }
L_001484e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_001484e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001484ec:;
    {
        wr32(cpu->r[10] + + 0x24u, cpu->r[0]);
    }
L_001484f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001484f4:;
    {
        cpu->r[14] = 0x001484f8u; fn_000fc628(cpu);
    }
L_001484f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_001484fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148500:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[0]);
    }
L_00148504:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148508:;
    {
        cpu->r[14] = 0x0014850cu; fn_000fc628(cpu);
    }
L_0014850c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148510:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00148514:;
    {
        wr32(cpu->r[10] + + 0x2cu, cpu->r[0]);
    }
L_00148518:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014851c:;
    {
        cpu->r[14] = 0x00148520u; fn_000fc628(cpu);
    }
L_00148520:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148524:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148528:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[0]);
    }
L_0014852c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148530:;
    {
        cpu->r[14] = 0x00148534u; fn_000fc628(cpu);
    }
L_00148534:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148538:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0014853c:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[0]);
    }
L_00148540:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148544:;
    {
        cpu->r[14] = 0x00148548u; fn_000fc628(cpu);
    }
L_00148548:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_0014854c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148550:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_00148554:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148558:;
    {
        cpu->r[14] = 0x0014855cu; fn_000fc628(cpu);
    }
L_0014855c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148560:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00148564:;
    {
        wr32(cpu->r[10] + + 0x30u, cpu->r[0]);
    }
L_00148568:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014856c:;
    {
        cpu->r[14] = 0x00148570u; fn_000fc628(cpu);
    }
L_00148570:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148574:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_00148578:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[0]);
    }
L_0014857c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148580:;
    {
        cpu->r[14] = 0x00148584u; fn_000fc628(cpu);
    }
L_00148584:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x48u);
    }
L_00148588:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0014858c:;
    {
        wr32(cpu->r[10] + + 0x38u, cpu->r[0]);
    }
L_00148590:;
    {
        goto L_00148364;
    }
L_00148594:;
    {
        uint32_t v = cpu->r[11] * cpu->r[10]; cpu->r[0] = v;
    }
L_00148598:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0014859c:;
    {
        cpu->r[14] = 0x001485a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001485a0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001485a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001485a8:;
    {
        wr32(cpu->r[0], cpu->r[11]);
    }
L_001485ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_001485b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001485e4;
        }
    }
L_001485b4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001485b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001485bc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001485c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001485c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001485c8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001485cc:;
    {
        cpu->r[14] = 0x001485d0u; fn_00147b40(cpu);
    }
L_001485d0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001485d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001485d8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001485dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000005cu, 0, 0);
    }
L_001485e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001485bc;
        }
    }
L_001485e4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[7]);
    }
L_001485e8:;
    {
        goto L_0014831c;
    }
L_001485ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001485f0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001485f8u + + 0x6cu);
    }
L_001485f4:;
    {
        cpu->r[14] = 0x001485f8u; fn_000fc678(cpu);
    }
L_001485f8:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001485fc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148600:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148604:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148608:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_0014860c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148610:;
    {
        cpu->r[14] = 0x00148614u; fn_000fc678(cpu);
    }
L_00148614:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148618:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014861c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148620:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148624:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148628:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014862c:;
    {
        cpu->r[14] = 0x00148630u; fn_000fc678(cpu);
    }
L_00148630:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148634:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148638:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_0014863c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148640:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148644:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148648:;
    {
        cpu->r[14] = 0x0014864cu; fn_000fc678(cpu);
    }
L_0014864c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148650:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148654:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148658:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_0014865c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148660:;
    {
        goto L_0014824c;
    }
L_00148668:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0014866c:;
    {
        cpu->r[14] = 0x00148670u; fn_0018ba6c(cpu);
    }
L_00148670:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00148674:;
    {
        cpu->r[2] = 0x00000048u;
    }
L_00148678:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014867c:;
    {
        cpu->r[14] = 0x00148680u; imp_memset(cpu); /* memset */
    }
L_00148680:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[6]);
    }
L_00148684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148688:;
    {
        cpu->r[14] = 0x0014868cu; fn_000fc678(cpu);
    }
L_0014868c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x40u);
    }
L_00148690:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148694:;
    {
        wr16(cpu->r[6], cpu->r[0]);
    }
L_00148698:;
    {
        cpu->r[3] = rd16(cpu->r[7]);
    }
L_0014869c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001486a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000408u;
        }
    }
L_001486a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001486bc;
        }
    }
L_001486a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001486ac:;
    {
        cpu->r[2] = 0x00000405u;
    }
L_001486b0:;
    {
        cpu->r[1] = 0x00000404u;
    }
L_001486b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001486b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001486bc:;
    {
        wr16(cpu->r[7], cpu->r[3]);
    }
L_001486c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001486c4:;
    {
        cpu->r[14] = 0x001486c8u; fn_000fc678(cpu);
    }
L_001486c8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001486cc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001486d4u + - 0x70u);
    }
L_001486d0:;
    {
        wr8(cpu->r[7] + + 0x44u, cpu->r[0]);
    }
L_001486d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001486d8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x40u);
    }
L_001486dc:;
    {
        cpu->r[14] = 0x001486e0u; fn_000fc678(cpu);
    }
L_001486e0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 4u, &shc); cpu->r[7] = v;
    }
L_001486e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001486e8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x40u);
    }
L_001486ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001486f0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001486f4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001486f8:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_001486fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148700:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148704:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148708:;
    {
        cpu->r[14] = 0x0014870cu; fn_000fc678(cpu);
    }
L_0014870c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x40u);
    }
L_00148710:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148714:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00148718:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_0014871c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148720:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148724:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148728:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 4u, &shc); cpu->r[7] = v;
    }
L_0014872c:;
    {
        cpu->r[14] = 0x00148730u; fn_000fc678(cpu);
    }
L_00148730:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_00148734:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_00148738:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x40u);
    }
L_0014873c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00148740:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_00148744:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148748:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014874c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148750:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148754:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148758:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014875c:;
    {
        cpu->r[14] = 0x00148760u; fn_000fc678(cpu);
    }
L_00148760:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_00148764:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00148768:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014876c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00148770:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00148774:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148778:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001486d4;
        }
    }
L_0014877c:;
    {
        goto L_001482d8;
    }
}

/* _ZN9ShaderMgr11LoadShadersEv @ 00148780 (arm) */
void fn_00148780(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148780:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00148784:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00148788:;
    {
        cpu->r[0] = rd32(0x00148790u + + 0xdcu);
    }
L_0014878c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00148790:;
    {
        cpu->r[0] = add_flags(cpu, 0x00148798u, cpu->r[0], 0, 0);
    }
L_00148794:;
    {
        cpu->r[14] = 0x00148798u; fn_000fc740(cpu);
    }
L_00148798:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014879c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001487ac;
        }
    }
L_001487a0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001487a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001487a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001487acu)) return;
    }
L_001487ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001487b0:;
    {
        cpu->r[14] = 0x001487b4u; fn_000fc628(cpu);
    }
L_001487b4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001487b8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001487bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001487c0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_001487c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001487c8:;
    {
        cpu->r[14] = 0x001487ccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001487cc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001487d0:;
    {
        cpu->r[3] = 0x00000050u;
    }
L_001487d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001487d8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001487dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148800;
        }
    }
L_001487e0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001487e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001487e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001487ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001487f0:;
    {
        cpu->r[14] = 0x001487f4u; fn_00147a2c(cpu);
    }
L_001487f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001487f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000050u, 0, 0);
    }
L_001487fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001487e8;
        }
    }
L_00148800:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00148804:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_00148808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001487a0;
        }
    }
L_0014880c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00148810:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00148814:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014885c;
        }
    }
L_00148818:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0014881c:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00148820:;
    {
        goto L_00148834;
    }
L_00148824:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00148828:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0014882c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014885c;
        }
    }
L_00148830:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_00148834:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_00148838:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014883c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00148840:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00148844:;
    {
        cpu->r[14] = 0x00148848u; fn_00148204(cpu);
    }
L_00148848:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000050u, 0, 0);
    }
L_0014884c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148850:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00148824;
        }
    }
L_00148854:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00148858:;
    {
        goto L_001487a4;
    }
L_0014885c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00148860:;
    {
        cpu->r[14] = 0x00148864u; fn_000fc710(cpu);
    }
L_00148864:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00148868:;
    {
        goto L_001487a4;
    }
}

/* _ZN9ShaderMgr11InitShadersEv @ 00148870 (arm) */
void fn_00148870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148870:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00148874:;
    {
        cpu->r[14] = 0x00148878u; fn_00148780(cpu);
    }
L_00148878:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014887c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00148880:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00148884:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00148888u)) return;
    }
}

/* _ZN6ShaderD1Ev @ 00148888 (arm) */
void fn_00148888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148888:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_0014888c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00148890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00148894:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00148898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001488e0;
        }
    }
L_0014889c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_001488a0:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_001488a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_001488a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001488ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001488b8;
        }
    }
L_001488b0:;
    {
        goto L_001488d0;
    }
L_001488b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001488b8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000005cu, 1, 0);
    }
L_001488bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001488c0:;
    {
        cpu->r[14] = 0x001488c4u; fn_00147bd4(cpu);
    }
L_001488c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_001488c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001488cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001488b4;
        }
    }
L_001488d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_001488d4:;
    {
        cpu->r[14] = 0x001488d8u; fn_0018ba60(cpu);
    }
L_001488d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001488dc:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_001488e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_001488e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001488e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001488f8;
        }
    }
L_001488ec:;
    {
        cpu->r[14] = 0x001488f0u; fn_0018ba20(cpu);
    }
L_001488f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001488f4:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_001488f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001488fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148900u)) return;
    }
}

/* _ZN9ShaderMgrD1Ev @ 00148900 (arm) */
void fn_00148900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148900:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00148904:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00148908:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014890c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00148910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148958;
        }
    }
L_00148914:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00148918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0014891c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_00148920:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00148924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148930;
        }
    }
L_00148928:;
    {
        goto L_00148948;
    }
L_0014892c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148930:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000050u, 1, 0);
    }
L_00148934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148938:;
    {
        cpu->r[14] = 0x0014893cu; fn_00148888(cpu);
    }
L_0014893c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00148940:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00148944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014892c;
        }
    }
L_00148948:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0014894c:;
    {
        cpu->r[14] = 0x00148950u; fn_0018ba60(cpu);
    }
L_00148950:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00148954:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00148958:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014895c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148960u)) return;
    }
}

/* _ZN9ShaderMgrD2Ev @ 00148960 (arm) */
void fn_00148960(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148960:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00148964:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00148968:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014896c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00148970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001489b8;
        }
    }
L_00148974:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_00148978:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0014897c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_00148980:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00148984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148990;
        }
    }
L_00148988:;
    {
        goto L_001489a8;
    }
L_0014898c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148990:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000050u, 1, 0);
    }
L_00148994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148998:;
    {
        cpu->r[14] = 0x0014899cu; fn_00148888(cpu);
    }
L_0014899c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001489a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001489a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014898c;
        }
    }
L_001489a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_001489ac:;
    {
        cpu->r[14] = 0x001489b0u; fn_0018ba60(cpu);
    }
L_001489b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001489b4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001489b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001489bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001489c0u)) return;
    }
}

/* _ZN6ShaderD2Ev @ 001489c0 (arm) */
void fn_001489c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001489c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001489c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001489c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001489cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001489d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148a18;
        }
    }
L_001489d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_001489d8:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_001489dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_001489e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001489e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001489f0;
        }
    }
L_001489e8:;
    {
        goto L_00148a08;
    }
L_001489ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001489f0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x0000005cu, 1, 0);
    }
L_001489f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001489f8:;
    {
        cpu->r[14] = 0x001489fcu; fn_00147bd4(cpu);
    }
L_001489fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_00148a00:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_00148a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001489ec;
        }
    }
L_00148a08:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00148a0c:;
    {
        cpu->r[14] = 0x00148a10u; fn_0018ba60(cpu);
    }
L_00148a10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00148a14:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_00148a18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_00148a1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148a30;
        }
    }
L_00148a24:;
    {
        cpu->r[14] = 0x00148a28u; fn_0018ba20(cpu);
    }
L_00148a28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00148a2c:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_00148a30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00148a34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148a38u)) return;
    }
}

/* _ZN11CGameCamera13ResetMovementEv @ 00148a38 (arm) */
void fn_00148a38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148a38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00148a40u + + 0x34u);
    }
L_00148a3c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x17cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x180u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a50:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a54:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x190u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a58:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x194u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a5c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x198u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a60:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x19cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a64:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00148a70u + + 0x8u);
    }
L_00148a6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00148a70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13ConstrainAgleRiS_ @ 00148a7c (arm) */
void fn_00148a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148a7c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00148a80:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00148a84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00148a88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 1);
    }
L_00148a8c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_00148a90:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_00148a94:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00148a98:;
    {
        add_flags(cpu, cpu->r[2], 0x00000400u, 0, 1);
    }
L_00148a9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_00148aa0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_00148aa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameCamera20UpdateCameraMovementEv @ 00148aa8 (arm) */
void fn_00148aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148aa8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00148ab0u + + 0x170u);
    }
L_00148aac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x184u);
    }
L_00148ab0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00148ab4:;
    {
        vfp_sync_flags(cpu);
    }
L_00148ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148b68;
        }
    }
L_00148abc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x194u);
    }
L_00148ac0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x1a4u);
    }
L_00148ac4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x180u);
    }
L_00148ac8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x17cu);
    }
L_00148acc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,14));
    }
L_00148ad0:;
    {
        vfp_sync_flags(cpu);
    }
L_00148ad4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148ba0;
        }
    }
L_00148ad8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00148adc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x18cu);
    }
L_00148ae0:;
    {
        vfp_sync_flags(cpu);
    }
L_00148ae4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00148aecu + + 0x134u);
        }
    }
L_00148ae8:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x180u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148aec:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x17cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x190u);
    }
L_00148af4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148af8:;
    {
        vfp_sync_flags(cpu);
    }
L_00148afc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148bdc;
        }
    }
L_00148b00:;
    {
        vfp_vsub(cpu, 10, 15, 13);
    }
L_00148b04:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x198u);
    }
L_00148b08:;
    {
        vfp_vabs(cpu, 10, 10);
    }
L_00148b0c:;
    {
        vfp_vabs(cpu, 11, 14);
    }
L_00148b10:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,10), *vfp_s(cpu,11));
    }
L_00148b14:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b18:;
    {
        if (cond_test(cpu, 11)) {
        vfp_vadd(cpu, 13, 13, 14);
        }
    }
L_00148b1c:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x194u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148b20:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x18cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148b24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x19cu);
    }
L_00148b28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1a0u);
    }
L_00148b2c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148b30:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[0] + + 0x194u) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_00148b34:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148c04;
        }
    }
L_00148b3c:;
    {
        vfp_vsub(cpu, 11, 15, 12);
    }
L_00148b40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x1a8u);
    }
L_00148b44:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_00148b48:;
    {
        vfp_vabs(cpu, 13, 14);
    }
L_00148b4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,13));
    }
L_00148b50:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b54:;
    {
        if (cond_test(cpu, 11)) {
        vfp_vadd(cpu, 12, 12, 14);
        }
    }
L_00148b58:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148b5c:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x19cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148b60:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[0] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 12);
        }
    }
L_00148b64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00148b68:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x194u);
    }
L_00148b6c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00148b70:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b74:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x1a4u);
        }
    }
L_00148b78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148ac4;
        }
    }
L_00148b7c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x1a4u);
    }
L_00148b80:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_00148b84:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b88:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00148b8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x180u);
    }
L_00148b90:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x17cu);
    }
L_00148b94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,14));
    }
L_00148b98:;
    {
        vfp_sync_flags(cpu);
    }
L_00148b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148ad8;
        }
    }
L_00148ba0:;
    {
        vfp_vsub(cpu, 9, 14, 15);
    }
L_00148ba4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x188u);
    }
L_00148ba8:;
    {
        vfp_vabs(cpu, 9, 9);
    }
L_00148bac:;
    {
        vfp_vabs(cpu, 10, 11);
    }
L_00148bb0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_00148bb4:;
    {
        vfp_sync_flags(cpu);
    }
L_00148bb8:;
    {
        if (cond_test(cpu, 11)) {
        vfp_vadd(cpu, 15, 15, 11);
        }
    }
L_00148bbc:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00148bc0:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[0] + + 0x17cu) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00148bc4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x18cu);
    }
L_00148bc8:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[0] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x190u);
    }
L_00148bd0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148bd4:;
    {
        vfp_sync_flags(cpu);
    }
L_00148bd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148b00;
        }
    }
L_00148bdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_00148be0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x19cu);
    }
L_00148be4:;
    {
        vfp_sync_flags(cpu);
    }
L_00148be8:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00148bf0u + + 0x30u);
        }
    }
L_00148bec:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x190u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148bf0:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x18cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148bf4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1a0u);
    }
L_00148bf8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148bfc:;
    {
        vfp_sync_flags(cpu);
    }
L_00148c00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148b3c;
        }
    }
L_00148c04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00148c0cu + + 0x18u);
    }
L_00148c08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_00148c0c:;
    {
        vfp_sync_flags(cpu);
    }
L_00148c10:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00148c18u + + 0x8u);
        }
    }
L_00148c14:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148c18:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x19cu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148c1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameCamera17UpdateCamera_HeliEbP8CCarBase @ 00148c28 (arm) */
void fn_00148c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148c28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameCamera8SetShakeEfi @ 00148c2c (arm) */
void fn_00148c2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148c2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00148c30:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00148c34:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x1acu);
        }
    }
L_00148c38:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
        }
    }
L_00148c3c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_00148c40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00148c44:;
    {
        if (cond_test(cpu, 14)) {
        *(uint32_t*)G(cpu->r[0] + + 0x1acu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148c48:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + + 0x1b4u, cpu->r[3]);
        }
    }
L_00148c4c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x1b4u, cpu->r[2]);
        }
    }
L_00148c50:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_00148c54:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 15, 14);
        }
    }
L_00148c58:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0x1b0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00148c5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CGameCamera28IsCameraMovingTowardsSectionEi @ 00148c60 (arm) */
void fn_00148c60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148c60:;
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
L_00148c64:;
    {
        cpu->r[4] = rd32(0x00148c6cu + + 0xd4u);
    }
L_00148c68:;
    {
        cpu->r[7] = rd32(0x00148c70u + + 0xd4u);
    }
L_00148c6c:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_00148c70:;
    {
        cpu->r[4] = add_flags(cpu, 0x00148c78u, cpu->r[4], 0, 0);
    }
L_00148c74:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_00148c78:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_00148c7c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_00148c80:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00148c84:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00148c88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00148c8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00148c90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00148c94:;
    {
        cpu->r[14] = 0x00148c98u; fn_00180c78(cpu);
    }
L_00148c98:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb4u);
    }
L_00148c9c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00148ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_00148ca4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00148d20;
        }
    }
L_00148ca8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00148cac:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00148cb0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00148cb4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00148cb8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00148cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00148cc0:;
    {
        cpu->r[14] = 0x00148cc4u; fn_00180bf0(cpu);
    }
L_00148cc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00148cc8:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_00148ccc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00148cd0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x30u);
    }
L_00148cd4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x30u);
    }
L_00148cd8:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_00148cdc:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00148ce0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00148ce4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x38u);
    }
L_00148ce8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x38u);
    }
L_00148cec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00148cf0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_00148cf4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00148cf8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x138u);
    }
L_00148cfc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x114u);
    }
L_00148d00:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10cu);
    }
L_00148d04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
    }
L_00148d08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x130u);
    }
L_00148d0c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_00148d10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00148d14:;
    {
        uint32_t v = cpu->r[0] - cpu->r[2] * cpu->r[3]; cpu->r[0] = v;
    }
L_00148d18:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_00148d1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148d20u)) return;
    }
L_00148d20:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00148d24:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00148d28:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00148d2c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00148d30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00148d34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00148d38:;
    {
        cpu->r[14] = 0x00148d3cu; fn_00180b68(cpu);
    }
L_00148d3c:;
    {
        goto L_00148cc4;
    }
}

/* _ZN11CGameCamera11UpdateShakeEP8CCarBaseR8Vector4sS3_ @ 00148d48 (arm) */
void fn_00148d48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00148d48:;
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
L_00148d4c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00148d50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00148d54:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00148d58:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00148d5c:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00148d60:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00148d64:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00148d68:;
    {
        cpu->r[14] = 0x00148d70u;
    }
L_00148d6c:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148d70u)) return;
    }
L_00148d70:;
    {
        cpu->r[7] = rd32(0x00148d78u + + 0x42cu);
    }
L_00148d74:;
    {
        cpu->r[7] = add_flags(cpu, 0x00148d7cu, cpu->r[7], 0, 0);
    }
L_00148d78:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148da4;
        }
    }
L_00148d80:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148d84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148d88:;
    {
        cpu->r[14] = 0x00148d90u;
    }
L_00148d8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148d90u)) return;
    }
L_00148d90:;
    {
        cpu->r[2] = 0x00001674u;
    }
L_00148d94:;
    {
        cpu->r[3] = 0x000032fau;
    }
L_00148d98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00148d9c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00148da0:;
    {
        uint32_t v = cpu->r[8] ^ cpu->r[3]; cpu->r[8] = v;
    }
L_00148da4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148dac:;
    {
        cpu->r[14] = 0x00148db4u;
    }
L_00148db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148db4u)) return;
    }
L_00148db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148db8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148ddc;
        }
    }
L_00148dbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148dc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148dc4:;
    {
        cpu->r[14] = 0x00148dccu;
    }
L_00148dc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148dccu)) return;
    }
L_00148dcc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00148dd0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00148dd4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00148dd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149004;
        }
    }
L_00148ddc:;
    {
        cpu->r[5] = rd32(0x00148de4u + + 0x3c4u);
    }
L_00148de0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148de4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148de8:;
    {
        cpu->r[14] = 0x00148df0u;
    }
L_00148dec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148df0u)) return;
    }
L_00148df0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00148df4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148e18;
        }
    }
L_00148df8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148dfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148e00:;
    {
        cpu->r[14] = 0x00148e08u;
    }
L_00148e04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148e08u)) return;
    }
L_00148e08:;
    {
        cpu->r[9] = 0x000016b8u;
    }
L_00148e0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_00148e10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00148e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148e4c;
        }
    }
L_00148e18:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00148e1c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00148e20:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00148e24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00148e28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00148e2c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00148e30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00148e34:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00148e38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00148e3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00148e40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001491b8;
        }
    }
L_00148e44:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00148e48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00148e4cu)) return;
    }
L_00148e4c:;
    {
        cpu->r[2] = 0x0000660du;
    }
L_00148e50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148e54:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0019u << 16);
    }
L_00148e58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148e5c:;
    {
        cpu->r[10] = 0x0000f35fu;
    }
L_00148e60:;
    {
        cpu->r[11] = 0x0000171cu;
    }
L_00148e64:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[8] = v;
    }
L_00148e68:;
    {
        cpu->r[14] = 0x00148e70u;
    }
L_00148e6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148e70u)) return;
    }
L_00148e70:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00148e74:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x3c6eu << 16);
    }
L_00148e78:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00148e7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00148e80:;
    {
        cpu->r[3] = (cpu->r[10] >> 16) & 0x1fu;
    }
L_00148e84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_00148e88:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x418u);
    }
L_00148e8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00148e90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00148e94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00148e98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00148e9c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00148ea0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_00148ea4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00148ea8:;
    {
        cpu->r[14] = 0x00148eacu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00148eac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148eb0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00148eb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148eb8:;
    {
        cpu->r[14] = 0x00148ec0u;
    }
L_00148ebc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148ec0u)) return;
    }
L_00148ec0:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00148ec4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_00148ec8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00148ecc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00148ed0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_00148ed4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00148ed8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148edc:;
    {
        vfp_sync_flags(cpu);
    }
L_00148ee0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00148f18;
        }
    }
L_00148ee4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00148ee8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148eec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148ef0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00148ef8u + + 0x290u);
    }
L_00148ef4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00148efcu + + 0x290u);
    }
L_00148ef8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00148efc:;
    {
        cpu->r[14] = 0x00148f04u;
    }
L_00148f00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148f04u)) return;
    }
L_00148f04:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_00148f08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11]);
    }
L_00148f0c:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00148f10:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00148f14:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00148f18:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00148f1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148f20:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148f24:;
    {
        cpu->r[8] = 0x00001720u;
    }
L_00148f28:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_00148f2c:;
    {
        wr32(cpu->r[6], cpu->r[9]);
    }
L_00148f30:;
    {
        cpu->r[14] = 0x00148f38u;
    }
L_00148f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148f38u)) return;
    }
L_00148f38:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00148f3c:;
    {
        cpu->r[2] = 0x0000660du;
    }
L_00148f40:;
    {
        cpu->r[3] = 0x0000f35fu;
    }
L_00148f44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0019u << 16);
    }
L_00148f48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3c6eu << 16);
    }
L_00148f4c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00148f50:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[10] = v;
    }
L_00148f54:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_00148f58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00148f5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00148f60:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xfu;
    }
L_00148f64:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00148f68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00148f6c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00148f70:;
    {
        cpu->r[2] = 0x000016b8u;
    }
L_00148f74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_00148f78:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00148f7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00148f80:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00148f84:;
    {
        cpu->r[14] = 0x00148f88u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00148f88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148f8c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00148f90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148f94:;
    {
        cpu->r[14] = 0x00148f9cu;
    }
L_00148f98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148f9cu)) return;
    }
L_00148f9c:;
    {
        uint32_t v = cpu->r[10] ^ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00148fa0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[10], 1, 31u, &shc), 1, 0);
    }
L_00148fa4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_00148fa8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00148fac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00148fb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_00148fb4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00148fb8:;
    {
        vfp_sync_flags(cpu);
    }
L_00148fbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00148ff4;
        }
    }
L_00148fc0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00148fc4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00148fc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00148fcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00148fd4u + + 0x1b4u);
    }
L_00148fd0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00148fd8u + + 0x1b4u);
    }
L_00148fd4:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00148fd8:;
    {
        cpu->r[14] = 0x00148fe0u;
    }
L_00148fdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00148fe0u)) return;
    }
L_00148fe0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00148fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_00148fe8:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00148fec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00148ff0:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00148ff4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00148ff8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00148ffc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[10]);
    }
L_00149000:;
    {
        goto L_00148e18;
    }
L_00149004:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1b4u);
    }
L_00149008:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014900c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[5] + + 0x1acu);
        }
    }
L_00149010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00149150;
        }
    }
L_00149014:;
    {
        cpu->r[5] = rd32(0x0014901cu + + 0x18cu);
    }
L_00149018:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0014901c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x464u);
    }
L_00149020:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00149024:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00149028:;
    {
        cpu->r[0] = 0x0000002bu;
    }
L_0014902c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_00149030:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00149034:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00149038:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0014903c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00149040:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00149044:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[2] = v;
    }
L_00149048:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014904c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00149054u + + 0x13cu);
    }
L_00149050:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00149054:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00149058:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[11], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_0014905c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00149060:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149064:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00149068:;
    {
        cpu->r[14] = 0x0014906cu; fn_00093f34(cpu);
    }
L_0014906c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_00149070:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00149074:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00149078:;
    {
        vfp_vmul(cpu, 14, 13, 15);
    }
L_0014907c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00149084u + + 0x110u);
    }
L_00149080:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00149084:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149088:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014908c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00149090:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00149330;
        }
    }
L_00149094:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_00149098:;
    {
        cpu->r[14] = 0x0014909cu; fn_00093f34(cpu);
    }
L_0014909c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001490a4u + + 0xf4u);
    }
L_001490a0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001490a4:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001490a8:;
    {
        cpu->r[0] = 0x00000033u;
    }
L_001490ac:;
    {
        vfp_vmul(cpu, 16, 15, 17);
    }
L_001490b0:;
    {
        cpu->r[14] = 0x001490b4u; fn_00093f34(cpu);
    }
L_001490b4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001490b8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001490bc:;
    {
        cpu->r[0] = 0x00000034u;
    }
L_001490c0:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001490c4:;
    {
        cpu->r[14] = 0x001490c8u; fn_00093f34(cpu);
    }
L_001490c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001490cc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001490d0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001490d4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001490d8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[10], cpu->r[11]);
        }
    }
L_001490dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149100;
        }
    }
L_001490e0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_001490e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014930c;
        }
    }
L_001490e8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
    }
L_001490ec:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[11];
    }
L_001490f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001490f4:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_001490f8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001490fc:;
    {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00149100:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00149104:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[10] + + 0x4u, cpu->r[9]);
        }
    }
L_00149108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148de0;
        }
    }
L_0014910c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00149110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149134;
        }
    }
L_00149114:;
    {
        cpu->r[3] = 0x0000660du;
    }
L_00149118:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0019u << 16);
    }
L_0014911c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_00149120:;
    {
        cpu->r[8] = 0x0000f35fu;
    }
L_00149124:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x3c6eu << 16);
    }
L_00149128:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0014912c:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 16u, &shc); cpu->r[0] = v;
    }
L_00149130:;
    {
        cpu->r[14] = 0x00149134u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00149134:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
    }
L_00149138:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[9];
    }
L_0014913c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00149140:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00149144:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149148:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014914c:;
    {
        goto L_00148de0;
    }
L_00149150:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[5] + + 0x1acu);
    }
L_00149154:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1b0u);
    }
L_00149158:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_0014915c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00149160:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00149164:;
    {
        wr32(cpu->r[5] + + 0x1b4u, cpu->r[3]);
    }
L_00149168:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x1acu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0014916c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00149014;
        }
    }
L_00149170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00149178u + + 0x24u);
    }
L_00149174:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_00149178:;
    {
        vfp_sync_flags(cpu);
    }
L_0014917c:;
    {
        if (cond_test(cpu, 10)) {
        *vfp_s(cpu, 17) = *(float*)G(0x00149184u + + 0x1cu);
        }
    }
L_00149180:;
    {
        if (cond_test(cpu, 10)) {
        *(uint32_t*)G(cpu->r[5] + + 0x1acu) = *(uint32_t*)vfp_s(cpu, 17);
        }
    }
L_00149184:;
    {
        goto L_00149014;
    }
L_001491b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001491bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001491c0:;
    {
        cpu->r[14] = 0x001491c8u;
    }
L_001491c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001491c8u)) return;
    }
L_001491c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001491cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148e44;
        }
    }
L_001491d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001491d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001491d8:;
    {
        cpu->r[14] = 0x001491e0u;
    }
L_001491dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001491e0u)) return;
    }
L_001491e0:;
    {
        cpu->r[5] = 0x000016bcu;
    }
L_001491e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001491e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001491ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148e44;
        }
    }
L_001491f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001491f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001491f8:;
    {
        cpu->r[14] = 0x00149200u;
    }
L_001491fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149200u)) return;
    }
L_00149200:;
    {
        cpu->r[8] = 0x000016c0u;
    }
L_00149204:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00149208:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014920c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00148e44;
        }
    }
L_00149210:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149218:;
    {
        cpu->r[14] = 0x00149220u;
    }
L_0014921c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149220u)) return;
    }
L_00149220:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00149224:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149228:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0014922c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00148e44;
        }
    }
L_00149230:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149238:;
    {
        cpu->r[14] = 0x00149240u;
    }
L_0014923c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149240u)) return;
    }
L_00149240:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149244:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00149248:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014924c:;
    {
        cpu->r[14] = 0x00149254u;
    }
L_00149250:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149254u)) return;
    }
L_00149254:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014925cu + - 0xacu);
    }
L_00149258:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014925c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[5];
    }
L_00149260:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_00149264:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_00149268:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_0014926c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149270:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
    }
L_00149274:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00149278:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0014927c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00149280:;
    {
        vfp_sync_flags(cpu);
    }
L_00149284:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00149288:;
    {
        cpu->r[14] = 0x00149290u;
    }
L_0014928c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149290u)) return;
    }
L_00149290:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00149294:;
    {
        cpu->r[3] = rd32(0x0014929cu + - 0xf0u);
    }
L_00149298:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_0014929c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_001492a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001492a8u, cpu->r[3], 0, 0);
    }
L_001492a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001492a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001492ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001492b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001492b4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001492b8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001492bc:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001492c0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[2] = v;
    }
L_001492c4:;
    {
        cpu->r[12] = 0x00001674u;
    }
L_001492c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001492cc:;
    {
        cpu->r[12] = 0x00000623u;
    }
L_001492d0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_001492d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000200u, 0, 0);
    }
L_001492d8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 21u, &shc); cpu->r[0] = v;
    }
L_001492dc:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 21u, &shc); cpu->r[0] = v;
    }
L_001492e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001492e4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001492e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001492ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001492f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001492f4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001492f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_001492fc:;
    {
        cpu->r[14] = 0x00149300u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00149300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 12u, &shc), 0, 0);
    }
L_00149304:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_00149308:;
    {
        goto L_00148e44;
    }
L_0014930c:;
    {
        cpu->r[3] = 0x0000660du;
    }
L_00149310:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0019u << 16);
    }
L_00149314:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_00149318:;
    {
        cpu->r[8] = 0x0000f35fu;
    }
L_0014931c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x3c6eu << 16);
    }
L_00149320:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00149324:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 16u, &shc); cpu->r[0] = v;
    }
L_00149328:;
    {
        cpu->r[14] = 0x0014932cu; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_0014932c:;
    {
        goto L_001490e8;
    }
L_00149330:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_00149334:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00149338:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[11];
    }
L_0014933c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[9];
    }
L_00149340:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00149344:;
    {
        cpu->r[0] = 0x00000035u;
    }
L_00149348:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014934c:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00149350:;
    {
        cpu->r[14] = 0x00149354u; fn_00093f34(cpu);
    }
L_00149354:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00149358:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_0014935c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_00149360:;
    {
        vfp_sync_flags(cpu);
    }
L_00149364:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0014936cu + - 0x1b8u);
        }
    }
L_00149368:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
        }
    }
L_0014936c:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vmla(cpu, 17, 15, 14);
        }
    }
L_00149370:;
    {
        goto L_00149094;
    }
}

/* _ZN11CGameCamera18InitCrashAnimationEP8CCarBase @ 00149374 (arm) */
void fn_00149374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149374:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00149378:;
    {
        cpu->r[1] = 0x000000b4u;
    }
L_0014937c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00149380:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00149384:;
    {
        cpu->r[14] = 0x00149388u; fn_000964c8(cpu);
    }
L_00149388:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014938c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00149390:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00149398u + + 0x8u);
    }
L_00149394:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00149398:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014939c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001493a0u)) return;
    }
}

/* _ZN11CGameCamera24SetNewFixedPointLocationEP8CCarBase @ 001493a4 (arm) */
void fn_001493a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001493a4:;
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
L_001493a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001493ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001493b0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001493b4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001493b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001493bc:;
    {
        cpu->r[14] = 0x001493c0u; fn_000964c8(cpu);
    }
L_001493c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1d0u);
    }
L_001493c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001493c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001493cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001493d0:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001493d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001493d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001493dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_001493e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001493e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001493e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001493ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001493f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001493f4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[9] = v;
    }
L_001493f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001493fc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00149400:;
    {
        cpu->r[14] = 0x00149404u; fn_00173e84(cpu);
    }
L_00149404:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00149408:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014940c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149410:;
    {
        cpu->r[14] = 0x00149414u; fn_00173e84(cpu);
    }
L_00149414:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 20u, &shc); cpu->r[3] = v;
    }
L_00149418:;
    {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0014941c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000012cu, 0, 0);
    }
L_00149420:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00149424:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 20u, &shc); cpu->r[3] = v;
    }
L_00149428:;
    {
        cpu->r[6] = rd32(cpu->r[6] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0014942c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00149430:;
    {
        cpu->r[14] = rd32(cpu->r[0] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00149434:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00149438:;
    {
        cpu->r[9] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0014943c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_00149440:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_00149444:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_00149448:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0014944c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[14] = v;
    }
L_00149450:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3]; cpu->r[9] = v;
    }
L_00149454:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00149458:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 12u, &shc), 0, 0);
    }
L_0014945c:;
    {
        wr32(cpu->r[7] + + 0x148u, cpu->r[14]);
    }
L_00149460:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00149464:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 1, 12u, &shc), 0, 0);
    }
L_00149468:;
    {
        wr32(cpu->r[7] + + 0x140u, cpu->r[9]);
    }
L_0014946c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00149470:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00149474:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 12u, &shc), 0, 0);
    }
L_00149478:;
    {
        wr32(cpu->r[7] + + 0x144u, cpu->r[2]);
    }
L_0014947c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
    }
L_00149480:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00149484:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00149488:;
    {
        cpu->r[14] = 0x0014948cu; fn_001857e0(cpu);
    }
L_0014948c:;
    {
        cpu->r[2] = 0x00000bb8u;
    }
L_00149490:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00149494:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001493f4;
        }
    }
L_00149498:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014949c:;
    {
        cpu->r[0] = 0x000000c8u;
    }
L_001494a0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x144u);
    }
L_001494a4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000004u, cpu->r[1], 1, 1);
    }
L_001494a8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000046u;
        }
    }
L_001494ac:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[1] = 0x00000046u;
        }
    }
L_001494b0:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
        }
    }
L_001494b4:;
    {
        if (cond_test(cpu, 6)) {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
        }
    }
L_001494b8:;
    {
        cpu->r[1] = 0x0000015eu;
    }
L_001494bc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000082u, 1, 0);
        }
    }
L_001494c0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000096u, 0, 0);
        }
    }
L_001494c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001494c8:;
    {
        wr32(cpu->r[7] + + 0x144u, cpu->r[3]);
    }
L_001494cc:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_001494d0:;
    {
        wr32(cpu->r[7] + + 0x22cu, cpu->r[3]);
    }
L_001494d4:;
    {
        cpu->r[14] = 0x001494d8u; fn_000964c8(cpu);
    }
L_001494d8:;
    {
        wr32(cpu->r[7] + + 0x230u, cpu->r[0]);
    }
L_001494dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001494e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001494e4u)) return;
    }
}

/* _ZN11CGameCamera23UpdateCamera_FixedPointEbP8CCarBase @ 001494e4 (arm) */
void fn_001494e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001494e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1fcu);
    }
L_001494e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001494ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001494f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001494f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001494f8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001494fc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00149500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149584;
        }
    }
L_00149504:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00149508:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_0014950c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00149510:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00149514:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00149518:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0014951c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00149520:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149524:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149528:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014952c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00149530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_00149534:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x41cu);
    }
L_00149538:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x420u);
    }
L_0014953c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x424u);
    }
L_00149540:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3d4u);
        }
    }
L_00149544:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3dcu);
        }
    }
L_00149548:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d8u);
        }
    }
L_0014954c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00149550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001495e8;
        }
    }
L_00149554:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00149558:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_0014955c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00149560:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00149564:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00149568:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0014956c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00149570:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149574:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149578:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014957c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00149580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149584u)) return;
    }
L_00149584:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x22cu);
    }
L_00149588:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x114u);
    }
L_0014958c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00149590:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00149594:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x22cu, cpu->r[3]);
        }
    }
L_00149598:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0014959c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001495a0:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x3dcu);
    }
L_001495a4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_001495a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001495ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001495b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001495b4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001495b8:;
    {
        cpu->r[14] = 0x001495bcu; fn_001857e0(cpu);
    }
L_001495bc:;
    {
        cpu->r[3] = 0x00000dabu;
    }
L_001495c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001495c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001495d4;
        }
    }
L_001495c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x22cu);
    }
L_001495cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001495d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001495fc;
        }
    }
L_001495d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000140u, 0, 0);
    }
L_001495d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000010cu, 0, 0);
    }
L_001495dc:;
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
L_001495e0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001495e4:;
    {
        goto L_0014952c;
    }
L_001495e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000032u, 0, 0);
    }
L_001495ec:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[0]);
    }
L_001495f0:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[1]);
    }
L_001495f4:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[2]);
    }
L_001495f8:;
    {
        goto L_0014957c;
    }
L_001495fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149600:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00149604:;
    {
        cpu->r[14] = 0x00149608u; fn_001493a4(cpu);
    }
L_00149608:;
    {
        goto L_001495d4;
    }
}

/* _ZN11CGameCamera19SetCameraMovementPYEiiii @ 0014960c (arm) */
void fn_0014960c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014960c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00149610:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00149614:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00149618:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014961c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_00149620:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00149624:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00149628:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_0014962c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001496c0;
        }
    }
L_00149630:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x184u);
    }
L_00149634:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0014963cu + + 0xbcu);
    }
L_00149638:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_0014963c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x194u);
    }
L_00149640:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1a4u);
    }
L_00149644:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x19cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00149648:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00149650u + + 0xacu);
    }
L_0014964c:;
    {
        vfp_sync_flags(cpu);
    }
L_00149650:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_00149654:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00149658:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0014965c:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_00149660:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00149664:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_00149668:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0014966c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
        }
    }
L_00149670:;
    {
        vfp_sync_flags(cpu);
    }
L_00149674:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x190u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00149678:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,11);
        }
    }
L_0014967c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x17cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149680:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149684:;
    {
        vfp_vsub(cpu, 17, 17, 15);
    }
L_00149688:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x18cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014968c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x194u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00149690:;
    {
        vfp_vdiv(cpu, 15, 13, 18);
    }
L_00149694:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00149698:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014969c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x180u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001496a0:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_001496a4:;
    {
        vfp_vdiv(cpu, 15, 17, 18);
    }
L_001496a8:;
    {
        vfp_vdiv(cpu, 14, 16, 18);
    }
L_001496ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x198u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001496b0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x188u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001496b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001496b8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001496bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001496c0u)) return;
    }
L_001496c0:;
    {
        cpu->r[1] = rd32(0x001496c8u + + 0x38u);
    }
L_001496c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001496c8:;
    {
        cpu->r[12] = rd32(0x001496d0u + + 0x34u);
    }
L_001496cc:;
    {
        cpu->r[14] = 0x00000348u;
    }
L_001496d0:;
    {
        cpu->r[2] = rd32(0x001496d8u + + 0x30u);
    }
L_001496d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001496dcu, cpu->r[1], 0, 0);
    }
L_001496d8:;
    {
        cpu->r[3] = rd32(0x001496e0u + + 0x2cu);
    }
L_001496dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001496e4u, cpu->r[12], 0, 0);
    }
L_001496e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001496e8u, cpu->r[2], 0, 0);
    }
L_001496e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001496e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001496f0u, cpu->r[3], 0, 0);
    }
L_001496ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001496f0:;
    {
        cpu->r[14] = 0x001496f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001496f4:;
    {
        goto L_00149630;
    }
}

/* _ZN11CGameCamera9SkipIntroEv @ 00149710 (arm) */
void fn_00149710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149710:;
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
L_00149714:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x15cu);
    }
L_00149718:;
    {
        cpu->r[4] = rd32(0x00149720u + + 0xfcu);
    }
L_0014971c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00149720:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00149724:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00149728:;
    {
        cpu->r[4] = add_flags(cpu, 0x00149730u, cpu->r[4], 0, 0);
    }
L_0014972c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149738;
        }
    }
L_00149730:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00149734:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149738u)) return;
    }
L_00149738:;
    {
        cpu->r[9] = rd32(0x00149740u + + 0xe0u);
    }
L_0014973c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00149740:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_00149744:;
    {
        cpu->r[8] = 0x000081c0u;
    }
L_00149748:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_0014974c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00149750:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00149754:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00149758:;
    {
        cpu->r[14] = 0x0014975cu; fn_0018cbb0(cpu);
    }
L_0014975c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00149760:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00149764:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00149768:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014976c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001497b0;
        }
    }
L_00149770:;
    {
        cpu->r[14] = 0x00149774u; fn_000b70e8(cpu);
    }
L_00149774:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00149778:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0014977c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00149780:;
    {
        cpu->r[14] = 0x00149784u; fn_000b6954(cpu);
    }
L_00149784:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00149788:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014978c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00149790:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_00149794:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_00149798:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0014979c:;
    {
        wr32(cpu->r[12] + cpu->r[8], cpu->r[6]);
    }
L_001497a0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001497a4:;
    {
        cpu->r[14] = 0x001497a8u; fn_000fd248(cpu);
    }
L_001497a8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001497ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_001497b0:;
    {
        cpu->r[12] = 0x0000432cu;
    }
L_001497b4:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001497b8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_001497bc:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_001497c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001497c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001497c8:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_001497cc:;
    {
        cpu->r[3] = 0x00000019u;
    }
L_001497d0:;
    {
        wr32(cpu->r[5] + + 0xe8u, cpu->r[3]);
    }
L_001497d4:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_001497d8:;
    {
        cpu->r[14] = 0x001497dcu; fn_00148c2c(cpu);
    }
L_001497dc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_001497e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001497e4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001497e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbf80u << 16);
    }
L_001497ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001497f0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001497f4:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001497f8:;
    {
        wr8(cpu->r[5] + + 0xf0u, cpu->r[12]);
    }
L_001497fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00149800:;
    {
        cpu->r[14] = 0x00149804u; fn_000bad78(cpu);
    }
L_00149804:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149808:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0014980c:;
    {
        cpu->r[14] = 0x00149810u; fn_000c1cdc(cpu);
    }
L_00149810:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00149814:;
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
L_00149818:;
    {
        return fn_0015ca98(cpu);
    }
}

/* _ZN11CGameCamera17UpdateCamera_AnimEbP8CCarBase @ 00149824 (arm) */
void fn_00149824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149824:;
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
L_00149828:;
    {
        cpu->r[6] = rd32(0x00149830u + + 0x310u);
    }
L_0014982c:;
    {
        cpu->r[7] = rd32(0x00149834u + + 0x310u);
    }
L_00149830:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_00149834:;
    {
        cpu->r[6] = add_flags(cpu, 0x0014983cu, cpu->r[6], 0, 0);
    }
L_00149838:;
    {
        cpu->r[8] = 0x000081c0u;
    }
L_0014983c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00149840:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00149844:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00149848:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014984c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00149850:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00149854:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00149858:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0014985c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00149860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149a88;
        }
    }
L_00149864:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x4cu);
    }
L_00149868:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x3cu);
    }
L_0014986c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00149870:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00149a88;
        }
    }
L_00149874:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00149878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149aec;
        }
    }
L_0014987c:;
    {
        cpu->r[1] = 0x0000432cu;
    }
L_00149880:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_00149884:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00149888:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0014988c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00149a98;
        }
    }
L_00149890:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_00149894:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_00149898:;
    {
        vfp_vneg(cpu, 10, 10);
    }
L_0014989c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_001498a0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_001498a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x7cu);
    }
L_001498a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x78u);
    }
L_001498ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001498b0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001498b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001498b8:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_001498bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001498c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001498c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001498c8:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001498cc:;
    {
        *(int32_t*)vfp_s(cpu,10) = (int32_t)*vfp_s(cpu,10);
    }
L_001498d0:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_001498d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001498d8:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_001498dc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001498e0:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_001498e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001498e8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001498ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001498f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001498f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001498f8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001498fc:;
    {
        cpu->r[14] = 0x00149904u;
    }
L_00149900:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149904u)) return;
    }
L_00149904:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00149908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014990c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149930;
        }
    }
L_00149910:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00149914:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00149918:;
    {
        cpu->r[14] = 0x00149920u;
    }
L_0014991c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149920u)) return;
    }
L_00149920:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00149924:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00149928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014992c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149aa8;
        }
    }
L_00149930:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00149934:;
    {
        cpu->r[3] = 0x00008c48u;
    }
L_00149938:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0014993c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00149940:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10cu);
    }
L_00149944:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00149948:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x124u);
    }
L_0014994c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00149950:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00149954:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00149958:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_0014995c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00149960:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00149964:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00149968:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0014996c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x110u);
    }
L_00149970:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[11];
    }
L_00149974:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x114u);
    }
L_00149978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0014997c:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_00149980:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_00149984:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_00149988:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x128u);
    }
L_0014998c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00149990:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149994:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00149998:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0014999c:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[6]);
    }
L_001499a0:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_001499a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001499a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_001499ac:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_001499b0:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[2]);
    }
L_001499b4:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[1]);
    }
L_001499b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001499bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001499c0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[8];
    }
L_001499c4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_001499c8:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001499cc:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[12]);
    }
L_001499d0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001499d4:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[8]);
    }
L_001499d8:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[7]);
    }
L_001499dc:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[0]);
    }
L_001499e0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001499e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001499e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001499ec:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001499f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001499f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001499f8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001499fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149a90;
        }
    }
L_00149a00:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_00149a04:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0xd00u);
    }
L_00149a08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00149a0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00149a10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00149a14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_00149a18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_00149a1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00149a20:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00149a24:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_00149a28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
        }
    }
L_00149a2c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_00149a30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_00149a34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_00149a38:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00149a3c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00149a40:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x424u);
    }
L_00149a44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
        }
    }
L_00149a48:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00149a4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00149a50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x41cu);
    }
L_00149a54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d4u);
        }
    }
L_00149a58:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x420u);
    }
L_00149a5c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00149a60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3d8u);
        }
    }
L_00149a64:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00149a68:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00149a6c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00149a70:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00149a74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00149a78:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00149a7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00149a80:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00149a84:;
    {
        goto L_00149a90;
    }
L_00149a88:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00149a8c:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[0]);
    }
L_00149a90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00149a94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149a98u)) return;
    }
L_00149a98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00149a9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000005u;
        }
    }
L_00149aa0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[0]);
        }
    }
L_00149aa4:;
    {
        goto L_00149890;
    }
L_00149aa8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00149aac:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00149ab0:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_00149ab4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149ab8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_00149abc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00149ac0:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_00149ac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00149ac8:;
    {
        cpu->r[14] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_00149acc:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00149ad0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00149ad4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_00149ad8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_00149adc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00149ae0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_00149ae4:;
    {
        cpu->r[14] = 0x00149ae8u; fn_00148d48(cpu);
    }
L_00149ae8:;
    {
        goto L_00149930;
    }
L_00149aec:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00149af0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00149af4:;
    {
        cpu->r[14] = 0x00149af8u; fn_000b6fe0(cpu);
    }
L_00149af8:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x4cu);
    }
L_00149afc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x3cu);
    }
L_00149b00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00149b04:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00149b08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00149b34;
        }
    }
L_00149b0c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00149b10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00149b14:;
    {
        cpu->r[14] = 0x00149b18u; fn_000b6954(cpu);
    }
L_00149b18:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00149b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149b20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00149b24:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[5]);
    }
L_00149b28:;
    {
        cpu->r[14] = 0x00149b2cu; fn_00149710(cpu);
    }
L_00149b2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00149b30:;
    {
        goto L_00149890;
    }
L_00149b34:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00149b38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00149b3c:;
    {
        goto L_0014987c;
    }
}
