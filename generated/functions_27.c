#include "functions.h"

/* _ZN11CGameObject6SetYawEfb @ 000b61ec (arm) */
void fn_000b61ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b61ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b61f0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000b61f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b61f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b61fc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_000b6200:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000b6204:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[0] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_000b6208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b62ac;
        }
    }
L_000b620c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b6210:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b6214:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_000b6218:;
    {
        cpu->r[14] = 0x000b621cu; fn_001535e0(cpu);
    }
L_000b621c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b6220:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb8u);
    }
L_000b6224:;
    {
        cpu->r[14] = 0x000b6228u; fn_0015429c(cpu);
    }
L_000b6228:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000b622c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000b6230:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xc4u);
    }
L_000b6234:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6238:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xc8u);
    }
L_000b623c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6240:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xccu);
    }
L_000b6244:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6248:;
    {
        cpu->r[14] = 0x000b624cu; fn_00153c38(cpu);
    }
L_000b624c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_000b6250:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000b6254:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b6258:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_000b625c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_000b6260:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_000b6264:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_000b6268:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b626c:;
    {
        wr8(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_000b6270:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b6274:;
    {
        vfp_vadd(cpu, 14, 12, 14);
    }
L_000b6278:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b627c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_000b6280:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_000b6284:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b6288:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b628c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b62a0;
        }
    }
L_000b6290:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b6294:;
    {
        cpu->r[14] = 0x000b6298u; fn_000b2bc8(cpu);
    }
L_000b6298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b629c:;
    {
        cpu->r[14] = 0x000b62a0u; fn_0018ba20(cpu);
    }
L_000b62a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000b62a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b62a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b62acu)) return;
    }
L_000b62ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x78u);
    }
L_000b62b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x6cu);
    }
L_000b62b4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b62b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_000b62bc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b62c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_000b62c4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b62c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b62cc:;
    {
        cpu->r[14] = 0x000b62d0u; imp_atan2f(cpu); /* atan2f */
    }
L_000b62d0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0x78u);
    }
L_000b62d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_000b62d8:;
    {
        vfp_vsub(cpu, 15, 9, 15);
    }
L_000b62dc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_000b62e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_000b62e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b62ecu + + 0x38u);
    }
L_000b62e8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x7cu);
    }
L_000b62ec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_000b62f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b62f4:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000b62f8:;
    {
        vfp_vsub(cpu, 13, 10, 13);
    }
L_000b62fc:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000b6300:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_000b6304:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000b6308:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b630c:;
    {
        vfp_vadd(cpu, 16, 16, 14);
    }
L_000b6310:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6314:;
    {
        vfp_vsub(cpu, 15, 11, 12);
    }
L_000b6318:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b631c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6320:;
    {
        goto L_000b620c;
    }
}

/* _ZN11CGameObject12SetTargetYawEfb @ 000b6328 (arm) */
void fn_000b6328(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6328:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b632c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b6330:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000b6334:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_000b6338:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b633c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b6340:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6344:;
    {
        cpu->r[14] = 0x000b6348u; fn_000b61ec(cpu);
    }
L_000b6348:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b634c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb8u);
        }
    }
L_000b6350:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b6354:;
    {
        wr8(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_000b6358:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vadd(cpu, 16, 15, 16);
        }
    }
L_000b635c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b6360:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b6364:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6368u)) return;
    }
}

/* _ZN11CGameObject16LookTowardTargetEv @ 000b6368 (arm) */
void fn_000b6368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6368:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xc0u);
    }
L_000b636c:;
    {
        cpu->r[3] = rd32(0x000b6374u + + 0x1a0u);
    }
L_000b6370:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6374:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000b6378:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000b637c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b6384u, cpu->r[3], 0, 0);
    }
L_000b6380:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b6384:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6388:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b63cc;
        }
    }
L_000b638c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xbcu);
    }
L_000b6390:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xb8u);
    }
L_000b6394:;
    {
        vfp_vsub(cpu, 11, 15, 13);
    }
L_000b6398:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xd0u);
    }
L_000b639c:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_000b63a0:;
    {
        vfp_vabs(cpu, 12, 14);
    }
L_000b63a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_000b63a8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b63ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b64f0;
        }
    }
L_000b63b0:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_000b63b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b63b8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b63bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b63c0:;
    {
        cpu->r[14] = 0x000b63c4u; fn_000b61ec(cpu);
    }
L_000b63c4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b63c8:;
    {
        goto L_000b6494;
    }
L_000b63cc:;
    {
        cpu->r[2] = rd32(0x000b63d4u + + 0x144u);
    }
L_000b63d0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0xa4u);
    }
L_000b63d4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0xa8u);
    }
L_000b63d8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0xacu);
    }
L_000b63dc:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b63e0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b63e4:;
    {
        cpu->r[14] = 0x000b63e8u; fn_000962e0(cpu);
    }
L_000b63e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b63ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6418;
        }
    }
L_000b63f0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000b63f4:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000b63f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b6400u + + 0x108u);
    }
L_000b63fc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b6400:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000b6404:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b6408:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b640c:;
    {
        vfp_vmul(cpu, 17, 17, 15);
    }
L_000b6410:;
    {
        vfp_vmul(cpu, 18, 18, 15);
    }
L_000b6414:;
    {
        vfp_vmul(cpu, 16, 16, 15);
    }
L_000b6418:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x90u);
    }
L_000b641c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x78u);
    }
L_000b6420:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_000b6424:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x8cu);
    }
L_000b6428:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_000b642c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x94u);
    }
L_000b6430:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x7cu);
    }
L_000b6434:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_000b6438:;
    {
        vfp_vsub(cpu, 13, 13, 10);
    }
L_000b643c:;
    {
        vfp_vmla(cpu, 14, 13, 13);
    }
L_000b6440:;
    {
        vfp_vsub(cpu, 15, 15, 12);
    }
L_000b6444:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_000b6448:;
    {
        vfp_vmul(cpu, 15, 16, 16);
    }
L_000b644c:;
    {
        vfp_vmla(cpu, 15, 18, 18);
    }
L_000b6450:;
    {
        vfp_vsqrt(cpu, 14, 14);
    }
L_000b6454:;
    {
        vfp_vmla(cpu, 15, 17, 17);
    }
L_000b6458:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000b645c:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b6460:;
    {
        vfp_sync_flags(cpu);
    }
L_000b6464:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b64a0;
        }
    }
L_000b6468:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b6470u + + 0x9cu);
    }
L_000b646c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6470:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6474:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6478:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b647c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_000b6480:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000b6484:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b6488:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b648c:;
    {
        cpu->r[14] = 0x000b6490u; fn_000b5c44(cpu);
    }
L_000b6490:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b6494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b6498:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b649c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b64a0u)) return;
    }
L_000b64a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b64a4:;
    {
        vfp_sync_flags(cpu);
    }
L_000b64a8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b64c4;
        }
    }
L_000b64ac:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b64b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000b64b8u + + 0x58u);
    }
L_000b64b4:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_000b64b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000b64bc:;
    {
        vfp_sync_flags(cpu);
    }
L_000b64c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b6468;
        }
    }
L_000b64c4:;
    {
        vfp_vadd(cpu, 11, 16, 11);
    }
L_000b64c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b64cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b64d0:;
    {
        vfp_vadd(cpu, 12, 17, 12);
    }
L_000b64d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b64d8:;
    {
        vfp_vadd(cpu, 10, 18, 10);
    }
L_000b64dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b64e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000b64e4:;
    {
        cpu->r[14] = 0x000b64e8u; fn_000b5c44(cpu);
    }
L_000b64e8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b64ec:;
    {
        goto L_000b6494;
    }
L_000b64f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b64f4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b64f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b64fc:;
    {
        cpu->r[14] = 0x000b6500u; fn_000b61ec(cpu);
    }
L_000b6500:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b6504:;
    {
        goto L_000b6494;
    }
}

/* _ZN11CGameObject6UpdateEv @ 000b651c (arm) */
void fn_000b651c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b651c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xe0u);
    }
L_000b6520:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000b6524:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6528:;
    {
        cpu->r[5] = rd32(0x000b6530u + + 0x150u);
    }
L_000b652c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b6530:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6534:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b653cu, cpu->r[5], 0, 0);
    }
L_000b6538:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b6660;
        }
    }
L_000b653c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6540:;
    {
        cpu->r[14] = 0x000b6544u; fn_000b6010(cpu);
    }
L_000b6544:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b6548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b6628;
        }
    }
L_000b654c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb4u);
    }
L_000b6550:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b6554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6628;
        }
    }
L_000b6558:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b655c:;
    {
        cpu->r[14] = 0x000b6560u; fn_000b5b54(cpu);
    }
L_000b6560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb4u);
    }
L_000b6564:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x14u);
    }
L_000b6568:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b656c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b6628;
        }
    }
L_000b6570:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000b6574:;
    {
        cpu->r[3] = rd32(0x000b657cu + + 0x108u);
    }
L_000b6578:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000b657c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b6580:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000b6584:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b6588:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b658c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b6590:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b65a8;
        }
    }
L_000b6594:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000b6598:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b659c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000b65a0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b65a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b65dc;
        }
    }
L_000b65a8:;
    {
        cpu->r[1] = rd32(0x000b65b0u + + 0xd8u);
    }
L_000b65ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b65b0:;
    {
        cpu->r[12] = rd32(0x000b65b8u + + 0xd4u);
    }
L_000b65b4:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000b65b8:;
    {
        cpu->r[2] = rd32(0x000b65c0u + + 0xd0u);
    }
L_000b65bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b65c4u, cpu->r[1], 0, 0);
    }
L_000b65c0:;
    {
        cpu->r[3] = rd32(0x000b65c8u + + 0xccu);
    }
L_000b65c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b65ccu, cpu->r[12], 0, 0);
    }
L_000b65c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b65d0u, cpu->r[2], 0, 0);
    }
L_000b65cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000b65d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b65d8u, cpu->r[3], 0, 0);
    }
L_000b65d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000b65d8:;
    {
        cpu->r[14] = 0x000b65dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b65dc:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000b65e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b65e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b65e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000b65ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 6u, &shc), 0, 0);
    }
L_000b65f0:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[1]);
    }
L_000b65f4:;
    {
        cpu->r[14] = 0x000b65f8u; fn_000b5a74(cpu);
    }
L_000b65f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b65fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6600:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb4u);
    }
L_000b6604:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000b6608:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b660c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b6610:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6614:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b6618:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b661c:;
    {
        cpu->r[14] = 0x000b6620u; fn_000b5abc(cpu);
    }
L_000b6620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6624:;
    {
        cpu->r[14] = 0x000b6628u; fn_000b5ba0(cpu);
    }
L_000b6628:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b662c:;
    {
        cpu->r[14] = 0x000b6630u; fn_000b6368(cpu);
    }
L_000b6630:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x48u);
    }
L_000b6634:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6658;
        }
    }
L_000b663c:;
    {
        cpu->r[3] = rd32(0x000b6644u + + 0x40u);
    }
L_000b6640:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b6644:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b6648:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b664c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b6650:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b6654:;
    {
        cpu->r[14] = 0x000b6658u; fn_000c4cf4(cpu);
    }
L_000b6658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b665c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6660u)) return;
    }
L_000b6660:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xd4u);
    }
L_000b6664:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xdcu);
    }
L_000b6668:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b666c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000b6670:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[3]);
    }
L_000b6674:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b6678:;
    {
        cpu->r[14] = 0x000b667cu; fn_000b5ba0(cpu);
    }
L_000b667c:;
    {
        goto L_000b653c;
    }
}

/* _ZN11CGameObjectD1Ev @ 000b6698 (arm) */
void fn_000b6698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6698:;
    {
        cpu->r[3] = rd32(0x000b66a0u + + 0x44u);
    }
L_000b669c:;
    {
        cpu->r[2] = rd32(0x000b66a4u + + 0x44u);
    }
L_000b66a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b66a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b66acu, cpu->r[3], 0, 0);
    }
L_000b66a8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x44u);
    }
L_000b66ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b66b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b66b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b66b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b66bc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b66c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b66dc;
        }
    }
L_000b66c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b66c8:;
    {
        cpu->r[14] = 0x000b66ccu; fn_000b2bc8(cpu);
    }
L_000b66cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b66d0:;
    {
        cpu->r[14] = 0x000b66d4u; fn_0018ba20(cpu);
    }
L_000b66d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b66d8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000b66dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b66e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b66e4u)) return;
    }
}

/* _ZN11CGameObjectD0Ev @ 000b66ec (arm) */
void fn_000b66ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b66ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b66f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b66f4:;
    {
        cpu->r[14] = 0x000b66f8u; fn_000b6698(cpu);
    }
L_000b66f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b66fc:;
    {
        cpu->r[14] = 0x000b6700u; fn_0018ba20(cpu);
    }
L_000b6700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6704:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6708u)) return;
    }
}

/* _ZN18CGameObjectAnimLibC2Ev @ 000b6708 (arm) */
void fn_000b6708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6708:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b670c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000b6710:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000b6714:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b6718:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CGameObjectAnimLibC1Ev @ 000b671c (arm) */
void fn_000b671c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b671c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b6720:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000b6724:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000b6728:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b672c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CGameObjectAnimLib4OpenEi @ 000b6730 (arm) */
void fn_000b6730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6730:;
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
L_000b6734:;
    {
        cpu->r[5] = rd32(0x000b673cu + + 0xf0u);
    }
L_000b6738:;
    {
        cpu->r[3] = rd32(0x000b6740u + + 0xf0u);
    }
L_000b673c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b6740:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b6748u, cpu->r[5], 0, 0);
    }
L_000b6744:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000b6748:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b674c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b6750:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b6754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b67c0;
        }
    }
L_000b6758:;
    {
        cpu->r[7] = rd32(0x000b6760u + + 0xd4u);
    }
L_000b675c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000b6760:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b6764:;
    {
        cpu->r[14] = 0x000b6768u; fn_00189f5c(cpu);
    }
L_000b6768:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000b676c:;
    {
        cpu->r[14] = 0x000b6770u; fn_001897b4(cpu);
    }
L_000b6770:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_000b6774:;
    {
        cpu->r[14] = 0x000b6778u; fn_000fc5dc(cpu);
    }
L_000b6778:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_000b677c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b6780:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b67b8;
        }
    }
L_000b6784:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_000b6788:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_000b678c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000b6790:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000b6794:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b67a8;
        }
    }
L_000b6798:;
    {
        goto L_000b6824;
    }
L_000b679c:;
    {
        cpu->r[3] = rd16(cpu->r[5] + cpu->r[3]);
    }
L_000b67a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000b67a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6804;
        }
    }
L_000b67a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b67ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000b67b0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000b67b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b679c;
        }
    }
L_000b67b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b67bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b67c0u)) return;
    }
L_000b67c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b67c4:;
    {
        cpu->r[14] = 0x000b67c8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b67c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b67cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6758;
        }
    }
L_000b67d0:;
    {
        cpu->r[7] = rd32(0x000b67d8u + + 0x5cu);
    }
L_000b67d4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b67d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b67dc:;
    {
        cpu->r[14] = 0x000b67e0u; fn_00189f48(cpu);
    }
L_000b67e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b67e4:;
    {
        cpu->r[14] = 0x000b67e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b67e8:;
    {
        cpu->r[3] = rd32(0x000b67f0u + + 0x48u);
    }
L_000b67ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b67f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b67f4:;
    {
        cpu->r[3] = rd32(0x000b67fcu + + 0x40u);
    }
L_000b67f8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b67fc:;
    {
        cpu->r[14] = 0x000b6800u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b6800:;
    {
        goto L_000b675c;
    }
L_000b6804:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000b6808:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b680c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b6810:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_000b6814:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b6818:;
    {
        cpu->r[14] = 0x000b681cu; fn_000fc5d4(cpu);
    }
L_000b681c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b6820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6824u)) return;
    }
L_000b6824:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b6828:;
    {
        goto L_000b6808;
    }
}

/* _ZN18CGameObjectAnimLib4FreeEv @ 000b6840 (arm) */
void fn_000b6840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6840:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b6844:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6848:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b684c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b6850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6860;
        }
    }
L_000b6854:;
    {
        cpu->r[14] = 0x000b6858u; fn_0018ba60(cpu);
    }
L_000b6858:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b685c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000b6860:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b6864:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b6868:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b686cu)) return;
        }
    }
L_000b686c:;
    {
        cpu->r[14] = 0x000b6870u; fn_0018ba60(cpu);
    }
L_000b6870:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b6874:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000b6878:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b687cu)) return;
    }
}

/* _ZN18CGameObjectAnimLibD1Ev @ 000b687c (arm) */
void fn_000b687c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b687c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b6880:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6884:;
    {
        cpu->r[14] = 0x000b6888u; fn_000b6840(cpu);
    }
L_000b6888:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b688c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6890u)) return;
    }
}

/* _ZN18CGameObjectAnimLibD2Ev @ 000b6890 (arm) */
void fn_000b6890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6890:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b6894:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b6898:;
    {
        cpu->r[14] = 0x000b689cu; fn_000b6840(cpu);
    }
L_000b689c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b68a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b68a4u)) return;
    }
}

/* _ZN15CGameObjectAnimD1Ev @ 000b68a4 (arm) */
void fn_000b68a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b68a4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b68a8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b68ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b68b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b68b4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000b68b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b68bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b68c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b68c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b68d0;
        }
    }
L_000b68c8:;
    {
        cpu->r[14] = 0x000b68ccu; fn_0018ba60(cpu);
    }
L_000b68cc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_000b68d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b68d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b68d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b68b8;
        }
    }
L_000b68dc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x40u);
    }
L_000b68e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b68e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b68f4;
        }
    }
L_000b68e8:;
    {
        cpu->r[14] = 0x000b68ecu; fn_0018ba60(cpu);
    }
L_000b68ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b68f0:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_000b68f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b68f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b68fcu)) return;
    }
}

/* _ZN15CGameObjectAnimD2Ev @ 000b68fc (arm) */
void fn_000b68fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b68fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b6900:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b6904:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b6908:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b690c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000b6910:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b6914:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b6918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b691c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6928;
        }
    }
L_000b6920:;
    {
        cpu->r[14] = 0x000b6924u; fn_0018ba60(cpu);
    }
L_000b6924:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_000b6928:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b692c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b6930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b6910;
        }
    }
L_000b6934:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x40u);
    }
L_000b6938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b693c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b694c;
        }
    }
L_000b6940:;
    {
        cpu->r[14] = 0x000b6944u; fn_0018ba60(cpu);
    }
L_000b6944:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b6948:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_000b694c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b6950:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6954u)) return;
    }
}

/* _ZN15CGameObjectAnim5ResetEv @ 000b6954 (arm) */
void fn_000b6954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6954:;
    {
        cpu->r[3] = rd32(0x000b695cu + + 0xd8u);
    }
L_000b6958:;
    {
        cpu->r[2] = rd32(0x000b6960u + + 0xd8u);
    }
L_000b695c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b6964u, cpu->r[3], 0, 0);
    }
L_000b6960:;
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
L_000b6964:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b6968:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b696c:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_000b6970:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b6974:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[5]);
    }
L_000b6978:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b697c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000b6980:;
    {
        wr8(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_000b6984:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000b6988:;
    {
        cpu->r[14] = 0x000b698cu; fn_00093f34(cpu);
    }
L_000b698c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b6990:;
    {
        cpu->r[12] = 0x00008c44u;
    }
L_000b6994:;
    {
        cpu->r[14] = 0x00008c48u;
    }
L_000b6998:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b699c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000b69a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b69a4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000b69a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b69ac:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000b69b0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbf80u << 16);
    }
L_000b69b4:;
    {
        wr32(cpu->r[7] + cpu->r[14], cpu->r[5]);
    }
L_000b69b8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b69bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b69c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b69c4:;
    {
        vfp_sync_flags(cpu);
    }
L_000b69c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_000b69cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_000b69d0:;
    {
        wr8(cpu->r[10] + cpu->r[12], cpu->r[14]);
    }
L_000b69d4:;
    {
        cpu->r[14] = 0x000b69d8u; fn_000bad78(cpu);
    }
L_000b69d8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000b69dc:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000b69e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b69e4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000b69e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b69ec:;
    {
        wr8(cpu->r[3] + + 0xf0u, cpu->r[5]);
    }
L_000b69f0:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x50u);
    }
L_000b69f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000b69f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b69fcu)) return;
        }
    }
L_000b69fc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b6a00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6a04:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000b6a08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6a24;
        }
    }
L_000b6a10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_000b6a14:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000b6a18:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b6a1c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0xd25u, cpu->r[0]);
        }
    }
L_000b6a20:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0xd24u, cpu->r[0]);
        }
    }
L_000b6a24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b6a28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000b6a2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b6a00;
        }
    }
L_000b6a30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6a34u)) return;
    }
}

/* _ZN15CGameObjectAnim8DoActionEiii @ 000b6a3c (arm) */
void fn_000b6a3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6a3c:;
    {
        cpu->r[12] = rd32(0x000b6a44u + + 0x2a8u);
    }
L_000b6a40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000b6a44:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000b6a48:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b6a50u, cpu->r[12], 0, 0);
    }
L_000b6a4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b6a50:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000b6a54:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_000b6a58:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_000b6b38;
        case 1: goto L_000b6b70;
        case 2: goto L_000b6b88;
        case 3: goto L_000b6af8;
        case 4: goto L_000b6bc0;
        case 5: goto L_000b6c10;
        case 6: goto L_000b6c44;
        case 7: goto L_000b6c64;
        case 8: goto L_000b6af8;
        case 9: goto L_000b6ca4;
        case 10: goto L_000b6a90;
        case 11: goto L_000b6c84;
        default: guest_unimplemented(cpu, 0x000b6a58u); return; }
        }
    }
L_000b6a5c:;
    {
        goto L_000b6b00;
    }
L_000b6a90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6a94:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b6a98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6af8;
        }
    }
L_000b6aa0:;
    {
        cpu->r[1] = rd32(0x000b6aa8u + + 0x248u);
    }
L_000b6aa4:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000b6aa8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b6aac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xd00u);
    }
L_000b6ab0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000b6ab4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000b6ab8:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000b6abc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000b6ac0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b6ac4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b6ac8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000b6acc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00008cc0u;
        }
    }
L_000b6ad0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b6ad4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b6ad8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000b6adc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_000b6ae0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
        }
    }
L_000b6ae4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b6ae8:;
    {
        cpu->r[3] = 0x000018f0u;
    }
L_000b6aec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000b6af0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000b6af4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[4]);
    }
L_000b6af8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6afc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6b00u)) return;
    }
L_000b6b00:;
    {
        cpu->r[1] = rd32(0x000b6b08u + + 0x1ecu);
    }
L_000b6b04:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b6b08:;
    {
        cpu->r[2] = rd32(0x000b6b10u + + 0x1e8u);
    }
L_000b6b0c:;
    {
        cpu->r[14] = 0x000000f1u;
    }
L_000b6b10:;
    {
        cpu->r[3] = rd32(0x000b6b18u + + 0x1e4u);
    }
L_000b6b14:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b6b1cu, cpu->r[1], 0, 0);
    }
L_000b6b18:;
    {
        cpu->r[12] = rd32(0x000b6b20u + + 0x1e0u);
    }
L_000b6b1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b6b24u, cpu->r[2], 0, 0);
    }
L_000b6b20:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b6b28u, cpu->r[3], 0, 0);
    }
L_000b6b24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000b6b28:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b6b30u, cpu->r[12], 0, 0);
    }
L_000b6b2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b6b30:;
    {
        cpu->r[14] = 0x000b6b34u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b6b34:;
    {
        goto L_000b6af8;
    }
L_000b6b38:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000b6b3c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b6b40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b6b44:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000b6b48:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x437fu << 16);
    }
L_000b6b4c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b6b50:;
    {
        cpu->r[0] = rd32(0x000b6b58u + + 0x198u);
    }
L_000b6b54:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000b6b58:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000b6b5c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000b6b60:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000b6b64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6b68:;
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
L_000b6b6c:;
    {
        return fn_000bad78(cpu);
    }
L_000b6b70:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000b6b74:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b6b78:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000b6b7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b6b80:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b6b84:;
    {
        goto L_000b6b50;
    }
L_000b6b88:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000b6b8c:;
    {
        cpu->r[3] = rd32(0x000b6b94u + + 0x15cu);
    }
L_000b6b90:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000b6b94:;
    {
        cpu->r[5] = 0x00008818u;
    }
L_000b6b98:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000b6b9c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b6ba0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b6ba4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b6ba8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b6bac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b6bb0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000b6bb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6bb8:;
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
L_000b6bbc:;
    {
        return fn_00148c2c(cpu);
    }
L_000b6bc0:;
    {
        cpu->r[3] = rd32(0x000b6bc8u + + 0x128u);
    }
L_000b6bc4:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000b6bc8:;
    {
        cpu->r[5] = 0x00008c44u;
    }
L_000b6bcc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6bd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000b6bd4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000b6bd8:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000b6bdc:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b6be0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b6be4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000b6be8:;
    {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[4]);
    }
L_000b6bec:;
    {
        cpu->r[14] = 0x000b6bf0u; fn_00093f34(cpu);
    }
L_000b6bf0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000b6bf4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b6bf8:;
    {
        vfp_sync_flags(cpu);
    }
L_000b6bfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7]);
        }
    }
L_000b6c00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000b6c04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
        }
    }
L_000b6c08:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[3] + cpu->r[5], cpu->r[2]);
        }
    }
L_000b6c0c:;
    {
        goto L_000b6af8;
    }
L_000b6c10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6cc8;
        }
    }
L_000b6c18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6c1c:;
    {
        cpu->r[2] = 0x00008c48u;
    }
L_000b6c20:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b6c24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000b6c28:;
    {
        cpu->r[3] = rd32(0x000b6c30u + + 0xc0u);
    }
L_000b6c2c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b6c30:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b6c34:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b6c38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b6c3c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000b6c40:;
    {
        goto L_000b6af8;
    }
L_000b6c44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6c48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b6c4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6af8;
        }
    }
L_000b6c54:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6c58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000b6c5c:;
    {
        wr8(cpu->r[3] + + 0xd24u, cpu->r[4]);
    }
L_000b6c60:;
    {
        goto L_000b6af8;
    }
L_000b6c64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6c68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b6c6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6af8;
        }
    }
L_000b6c74:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6c78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000b6c7c:;
    {
        wr8(cpu->r[3] + + 0xd25u, cpu->r[4]);
    }
L_000b6c80:;
    {
        goto L_000b6af8;
    }
L_000b6c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6c88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b6c8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b6c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6af8;
        }
    }
L_000b6c94:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6c98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000b6c9c:;
    {
        wr8(cpu->r[3] + + 0xd26u, cpu->r[4]);
    }
L_000b6ca0:;
    {
        goto L_000b6af8;
    }
L_000b6ca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b6ca8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b6cac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b6cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6af8;
        }
    }
L_000b6cb4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6cb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000b6cbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b6cc0:;
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
L_000b6cc4:;
    {
        return fn_000b5a9c(cpu);
    }
L_000b6cc8:;
    {
        cpu->r[2] = rd32(0x000b6cd0u + + 0x20u);
    }
L_000b6ccc:;
    {
        cpu->r[3] = 0x00008c48u;
    }
L_000b6cd0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b6cd4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b6cd8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000b6cdc:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000b6ce0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b6ce4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[4]);
    }
L_000b6ce8:;
    {
        goto L_000b6af8;
    }
}

/* _ZN15CGameObjectAnim12UpdateObjectEib @ 000b6d04 (arm) */
void fn_000b6d04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6d04:;
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
L_000b6d08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b6d0c:;
    {
        cpu->r[4] = rd32(0x000b6d14u + + 0x2c4u);
    }
L_000b6d10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_000b6d14:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b6d18:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b6d20u, cpu->r[4], 0, 0);
    }
L_000b6d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b6e24;
        }
    }
L_000b6d20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000b6d24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_000b6d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b6d2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000b6d30:;
    {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000b6d34:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b6d38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 5u, &shc), 0, 0);
    }
L_000b6d3c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 5u, &shc));
    }
L_000b6d40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6d44:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x1u);
    }
L_000b6d48:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0x5u);
    }
L_000b6d4c:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x2u);
    }
L_000b6d50:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0x4u);
    }
L_000b6d54:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[2] = v;
    }
L_000b6d58:;
    {
        cpu->r[9] = rd8(cpu->r[3] + + 0x6u);
    }
L_000b6d5c:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0x9u);
    }
L_000b6d60:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_000b6d64:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x8u);
    }
L_000b6d68:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000b6d6c:;
    {
        cpu->r[8] = rd8(cpu->r[3] + + 0xau);
    }
L_000b6d70:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[9], 2, 16u, &shc); cpu->r[10] = v;
    }
L_000b6d74:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0xbu);
    }
L_000b6d78:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_000b6d7c:;
    {
        cpu->r[9] = rd8(cpu->r[3] + + 0x7u);
    }
L_000b6d80:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x3u);
    }
L_000b6d84:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[7] = v;
    }
L_000b6d88:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[14] = v;
    }
L_000b6d8c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[14]);
    }
L_000b6d90:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[9], 2, 24u, &shc); cpu->r[10] = v;
    }
L_000b6d94:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[10]);
    }
L_000b6d98:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[2] = v;
    }
L_000b6d9c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_000b6da0:;
    {
        cpu->r[14] = 0x000b6da4u; fn_000b5fc4(cpu);
    }
L_000b6da4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000b6da8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000b6dac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b6db0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000b6db4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_000b6db8:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0xdu);
    }
L_000b6dbc:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x11u);
    }
L_000b6dc0:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xcu);
    }
L_000b6dc4:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0xeu);
    }
L_000b6dc8:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0x15u);
    }
L_000b6dcc:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[12] = v;
    }
L_000b6dd0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x10u);
    }
L_000b6dd4:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0x14u);
    }
L_000b6dd8:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 16u, &shc); cpu->r[12] = v;
    }
L_000b6ddc:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0x12u);
    }
L_000b6de0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[2] = v;
    }
L_000b6de4:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x16u);
    }
L_000b6de8:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_000b6dec:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x17u);
    }
L_000b6df0:;
    {
        cpu->r[14] = rd8(cpu->r[3] + + 0xfu);
    }
L_000b6df4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000b6df8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x13u);
    }
L_000b6dfc:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[4] = v;
    }
L_000b6e00:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[4] = v;
    }
L_000b6e04:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[4]);
    }
L_000b6e08:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[12] = v;
    }
L_000b6e0c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_000b6e10:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000b6e14:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000b6e18:;
    {
        cpu->r[14] = 0x000b6e1cu; fn_000b5c44(cpu);
    }
L_000b6e1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000b6e20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b6e24u)) return;
    }
L_000b6e24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000b6e28:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x4cu);
    }
L_000b6e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000b6e30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b6e38u + + 0x19cu);
    }
L_000b6e34:;
    {
        cpu->r[6] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b6e38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000b6e3c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000b6e40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b6e44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[14], 2, 5u, &shc), 0, 0);
    }
L_000b6e48:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000b6e4c:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x1du);
    }
L_000b6e50:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x1eu);
    }
L_000b6e54:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x1cu);
    }
L_000b6e58:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x1fu);
    }
L_000b6e5c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000b6e60:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000b6e64:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_000b6e68:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000b6e6c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b6e70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b6e74:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b6e78:;
    {
        wr32(cpu->r[3] + + 0xd20u, cpu->r[1]);
    }
L_000b6e7c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0xdu);
    }
L_000b6e80:;
    {
        cpu->r[10] = rd8(cpu->r[2] + + 0x11u);
    }
L_000b6e84:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0xcu);
    }
L_000b6e88:;
    {
        cpu->r[9] = rd8(cpu->r[2] + + 0x15u);
    }
L_000b6e8c:;
    {
        cpu->r[8] = rd8(cpu->r[2] + + 0xeu);
    }
L_000b6e90:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000b6e94:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x12u);
    }
L_000b6e98:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x10u);
    }
L_000b6e9c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x14u);
    }
L_000b6ea0:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[1] = v;
    }
L_000b6ea4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[12] = v;
    }
L_000b6ea8:;
    {
        cpu->r[10] = rd8(cpu->r[2] + + 0x16u);
    }
L_000b6eac:;
    {
        cpu->r[8] = rd8(cpu->r[2] + + 0xfu);
    }
L_000b6eb0:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[12] = v;
    }
L_000b6eb4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000b6eb8:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x17u);
    }
L_000b6ebc:;
    {
        cpu->r[9] = rd8(cpu->r[2] + + 0x13u);
    }
L_000b6ec0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[10], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000b6ec4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[8], 2, 24u, &shc); cpu->r[1] = v;
    }
L_000b6ec8:;
    {
        cpu->r[10] = rd8(cpu->r[2] + + 0x1u);
    }
L_000b6ecc:;
    {
        cpu->r[8] = rd8(cpu->r[2] + + 0x5u);
    }
L_000b6ed0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[7], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000b6ed4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[9], 2, 24u, &shc); cpu->r[9] = v;
    }
L_000b6ed8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_000b6edc:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x19u);
    }
L_000b6ee0:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[3] = v;
    }
L_000b6ee4:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x9u);
    }
L_000b6ee8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_000b6eec:;
    {
        cpu->r[14] = rd8(cpu->r[6] + shifter(cpu->r[14], 2, 5u, &shc));
    }
L_000b6ef0:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_000b6ef4:;
    {
        cpu->r[6] = rd8(cpu->r[2] + + 0x2u);
    }
L_000b6ef8:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[14] = v;
    }
L_000b6efc:;
    {
        cpu->r[10] = rd8(cpu->r[2] + + 0x8u);
    }
L_000b6f00:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x4u);
    }
L_000b6f04:;
    {
        cpu->r[11] = rd8(cpu->r[2] + + 0xau);
    }
L_000b6f08:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[6] = v;
    }
L_000b6f0c:;
    {
        cpu->r[9] = rd8(cpu->r[2] + + 0x6u);
    }
L_000b6f10:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[10] = v;
    }
L_000b6f14:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000b6f18:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[7] = v;
    }
L_000b6f1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b6f20:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[11], 2, 16u, &shc); cpu->r[10] = v;
    }
L_000b6f24:;
    {
        cpu->r[6] = rd8(cpu->r[2] + + 0x1au);
    }
L_000b6f28:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[9], 2, 16u, &shc); cpu->r[9] = v;
    }
L_000b6f2c:;
    {
        cpu->r[8] = rd8(cpu->r[2] + + 0x18u);
    }
L_000b6f30:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_000b6f34:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[8] = v;
    }
L_000b6f38:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x3u);
    }
L_000b6f3c:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[8] = v;
    }
L_000b6f40:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b6f44:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b6f48:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0xbu);
    }
L_000b6f4c:;
    {
        cpu->r[9] = rd8(cpu->r[2] + + 0x1bu);
    }
L_000b6f50:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x7u);
    }
L_000b6f54:;
    {
        uint32_t v = cpu->r[6] ^ 0x80000000u; cpu->r[2] = v;
    }
L_000b6f58:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[6] = v;
    }
L_000b6f5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b6f60:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[10] = v;
    }
L_000b6f64:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[9], 2, 24u, &shc); cpu->r[8] = v;
    }
L_000b6f68:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[7], 2, 24u, &shc); cpu->r[7] = v;
    }
L_000b6f6c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000b6f70:;
    {
        cpu->r[14] = 0x000b6f74u; fn_00155ab4(cpu);
    }
L_000b6f74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b6f78:;
    {
        cpu->r[14] = 0x000b6f7cu; fn_00156008(cpu);
    }
L_000b6f7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b6f80:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b6f84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000b6f88:;
    {
        cpu->r[14] = 0x000b6f8cu; fn_00155b68(cpu);
    }
L_000b6f8c:;
    {
        cpu->r[1] = rd32(0x000b6f94u + + 0x48u);
    }
L_000b6f90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000b6f94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b6f98:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000b6f9c:;
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
L_000b6fa0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[6]);
    }
L_000b6fa4:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_000b6fa8:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000b6fac:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_000b6fb0:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[7]);
    }
L_000b6fb4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_000b6fb8:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000b6fbc:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b6fc0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b6fc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b6fc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000b6fcc:;
    {
        cpu->r[14] = 0x000b6fd0u; fn_000bebbc(cpu);
    }
L_000b6fd0:;
    {
        goto L_000b6e1c;
    }
}

/* _ZN15CGameObjectAnim6UpdateEv @ 000b6fe0 (arm) */
void fn_000b6fe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b6fe0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b6fe4:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x50u);
    }
L_000b6fe8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b6fec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b6ff0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_000b6ff4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000007u;
        }
    }
L_000b6ff8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000b6ffc:;
    {
        goto L_000b700c;
    }
L_000b7000:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b7004:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_000b7008:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b704c;
        }
    }
L_000b700c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000b7010:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000b7014:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b7018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7000;
        }
    }
L_000b701c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_000b7020:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000b7024:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7000;
        }
    }
L_000b702c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[4], 1, 1);
    }
L_000b7030:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000b7034:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b7038:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b703c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b7040:;
    {
        cpu->r[14] = 0x000b7044u; fn_000b6d04(cpu);
    }
L_000b7044:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_000b7048:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b700c;
        }
    }
L_000b704c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000b7050:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b7054:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4cu);
        }
    }
L_000b7058:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b70dc;
        }
    }
L_000b705c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000b7060:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b7064:;
    {
        goto L_000b7070;
    }
L_000b7068:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000b706c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b70dc;
        }
    }
L_000b7070:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_000b7074:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000b7078:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_000b707c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b7080:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x1u);
    }
L_000b7084:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000b7088:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000b708c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000b7090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b7068;
        }
    }
L_000b7094:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x7u);
    }
L_000b7098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b709c:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x3u);
    }
L_000b70a0:;
    {
        cpu->r[6] = rd8(cpu->r[2] + + 0x5u);
    }
L_000b70a4:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x2u);
    }
L_000b70a8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x6u);
    }
L_000b70ac:;
    {
        cpu->r[14] = rd8(cpu->r[2] + + 0x4u);
    }
L_000b70b0:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000b70b4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000b70b8:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[2] = v;
    }
L_000b70bc:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000b70c0:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000b70c4:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000b70c8:;
    {
        cpu->r[14] = 0x000b70ccu; fn_000b6a3c(cpu);
    }
L_000b70cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_000b70d0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000b70d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000b70d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b7070;
        }
    }
L_000b70dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000b70e0:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[12]);
    }
L_000b70e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b70e8u)) return;
    }
}

/* _ZN15CGameObjectAnim9SkipToEndEv @ 000b70e8 (arm) */
void fn_000b70e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b70e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4cu);
    }
L_000b70ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000b70f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b70f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b70f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b70fc:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7100u)) return;
        }
    }
L_000b7100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7104:;
    {
        cpu->r[14] = 0x000b7108u; fn_000b6fe0(cpu);
    }
L_000b7108:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_000b710c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000b7110:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b7114:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b7100;
        }
    }
L_000b7118:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b711cu)) return;
    }
}

/* _ZN18CGameObjectAnimLib4InitEi @ 000b711c (arm) */
void fn_000b711c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b711c:;
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
L_000b7120:;
    {
        cpu->r[4] = rd32(0x000b7128u + + 0x12cu);
    }
L_000b7124:;
    {
        cpu->r[3] = rd32(0x000b712cu + + 0x12cu);
    }
L_000b7128:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b712c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b7134u, cpu->r[4], 0, 0);
    }
L_000b7130:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000b7134:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[1]);
    }
L_000b7138:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b713c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b7140:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7210;
        }
    }
L_000b7148:;
    {
        cpu->r[7] = rd32(0x000b7150u + + 0x10cu);
    }
L_000b714c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b7150:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b7154:;
    {
        cpu->r[14] = 0x000b7158u; fn_00189f5c(cpu);
    }
L_000b7158:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000b715c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b7160:;
    {
        cpu->r[14] = 0x000b7164u; fn_001897b4(cpu);
    }
L_000b7164:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b7168:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000b716c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7170u)) return;
        }
    }
L_000b7170:;
    {
        cpu->r[14] = 0x000b7174u; fn_000fc650(cpu);
    }
L_000b7174:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b7178:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000b717c:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_000b7180:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000b7184:;
    {
        cpu->r[14] = 0x000b7188u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b7188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b718c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_000b7190:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_000b7194:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7198u)) return;
        }
    }
L_000b7198:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[9] = v;
    }
L_000b719c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000b71a0:;
    {
        cpu->r[14] = 0x000b71a4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b71a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b71a8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_000b71ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_000b71b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b71b4u)) return;
        }
    }
L_000b71b4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_000b71b8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000b71bc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b71c0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000b71c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b71fc;
        }
    }
L_000b71c8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b71cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b71d0:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_000b71d4:;
    {
        cpu->r[14] = 0x000b71d8u; fn_000fc628(cpu);
    }
L_000b71d8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4u);
    }
L_000b71dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000b71e0:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[7], 2, 1u, &shc), cpu->r[0]);
    }
L_000b71e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b71e8:;
    {
        cpu->r[14] = 0x000b71ecu; fn_000fc650(cpu);
    }
L_000b71ec:;
    {
        wr16(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_000b71f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_000b71f4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_000b71f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b71cc;
        }
    }
L_000b71fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7200:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000b7204:;
    {
        cpu->r[14] = 0x000b7208u; fn_00189870(cpu);
    }
L_000b7208:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b720c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7210u)) return;
    }
L_000b7210:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b7214:;
    {
        cpu->r[14] = 0x000b7218u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b7218:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b721c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7148;
        }
    }
L_000b7220:;
    {
        cpu->r[7] = rd32(0x000b7228u + + 0x34u);
    }
L_000b7224:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b7228:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b722c:;
    {
        cpu->r[14] = 0x000b7230u; fn_00189f48(cpu);
    }
L_000b7230:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b7234:;
    {
        cpu->r[14] = 0x000b7238u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b7238:;
    {
        cpu->r[3] = rd32(0x000b7240u + + 0x20u);
    }
L_000b723c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b7240:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b7244:;
    {
        cpu->r[3] = rd32(0x000b724cu + + 0x18u);
    }
L_000b7248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b724c:;
    {
        cpu->r[14] = 0x000b7250u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b7250:;
    {
        goto L_000b714c;
    }
}

/* _ZN18CGameObjectAnimLib5CloseEv @ 000b7268 (arm) */
void fn_000b7268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7268:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b726c:;
    {
        cpu->r[4] = rd32(0x000b7274u + + 0x78u);
    }
L_000b7270:;
    {
        cpu->r[3] = rd32(0x000b7278u + + 0x78u);
    }
L_000b7274:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b7278:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b7280u, cpu->r[4], 0, 0);
    }
L_000b727c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b7280:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b7284:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b72a8;
        }
    }
L_000b728c:;
    {
        cpu->r[5] = rd32(0x000b7294u + + 0x60u);
    }
L_000b7290:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_000b7294:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000b7298:;
    {
        cpu->r[14] = 0x000b729cu; fn_00189f5c(cpu);
    }
L_000b729c:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000b72a0:;
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
L_000b72a4:;
    {
        return fn_00189870(cpu);
    }
L_000b72a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b72ac:;
    {
        cpu->r[14] = 0x000b72b0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b72b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b72b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b728c;
        }
    }
L_000b72b8:;
    {
        cpu->r[5] = rd32(0x000b72c0u + + 0x34u);
    }
L_000b72bc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000b72c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b72c4:;
    {
        cpu->r[14] = 0x000b72c8u; fn_00189f48(cpu);
    }
L_000b72c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b72cc:;
    {
        cpu->r[14] = 0x000b72d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b72d0:;
    {
        cpu->r[3] = rd32(0x000b72d8u + + 0x20u);
    }
L_000b72d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b72d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b72dc:;
    {
        cpu->r[3] = rd32(0x000b72e4u + + 0x18u);
    }
L_000b72e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b72e4:;
    {
        cpu->r[14] = 0x000b72e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b72e8:;
    {
        goto L_000b7290;
    }
}

/* _ZN15CGameObjectAnimC1EiP5Scene @ 000b7300 (arm) */
void fn_000b7300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7300:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b7304:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b7308:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b730c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000b7310:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b7314:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000b7318:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_000b731c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b7320:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_000b7324:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_000b7328:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000b732c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000b7330:;
    {
        wr32(cpu->r[2] + + 0x20u, cpu->r[5]);
    }
L_000b7334:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_000b7338:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000b733c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b7330;
        }
    }
L_000b7340:;
    {
        cpu->r[7] = 0x00008190u;
    }
L_000b7344:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_000b7348:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000b734c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b7350:;
    {
        cpu->r[14] = 0x000b7354u; fn_000b6730(cpu);
    }
L_000b7354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b7358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b742c;
        }
    }
L_000b735c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b7360:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x8u);
    }
L_000b7364:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7368:;
    {
        cpu->r[14] = 0x000b736cu; fn_000fc628(cpu);
    }
L_000b736c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7370:;
    {
        cpu->r[14] = 0x000b7374u; fn_000fc650(cpu);
    }
L_000b7374:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b7378:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_000b737c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7380:;
    {
        cpu->r[14] = 0x000b7384u; fn_000fc650(cpu);
    }
L_000b7384:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b7388:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000b738c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7390:;
    {
        cpu->r[14] = 0x000b7394u; fn_000fc650(cpu);
    }
L_000b7394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_000b7398:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b739c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_000b73a0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_000b73a4:;
    {
        cpu->r[14] = 0x000b73a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b73a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000b73ac:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
    }
L_000b73b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b73b4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_000b73b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b73bc:;
    {
        cpu->r[14] = 0x000b73c0u; fn_000fc5f4(cpu);
    }
L_000b73c0:;
    {
        goto L_000b73d0;
    }
L_000b73c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b73c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b73cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7414;
        }
    }
L_000b73d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000b73d4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000b73d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b73dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b73e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b73c4;
        }
    }
L_000b73e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000b73e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_000b73ec:;
    {
        cpu->r[14] = 0x000b73f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b73f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000b73f4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_000b73f8:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_000b73fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b7400:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7404:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b7408:;
    {
        cpu->r[14] = 0x000b740cu; fn_000fc5f4(cpu);
    }
L_000b740c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b7410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b73d0;
        }
    }
L_000b7414:;
    {
        cpu->r[3] = 0x00008190u;
    }
L_000b7418:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b741c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000b7420:;
    {
        cpu->r[14] = 0x000b7424u; fn_000b7268(cpu);
    }
L_000b7424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7428:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b742cu)) return;
    }
L_000b742c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b7430:;
    {
        cpu->r[14] = 0x000b7434u; fn_000b7268(cpu);
    }
L_000b7434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7438:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b743cu)) return;
    }
}

/* _ZN15CGameObjectAnimC2EiP5Scene @ 000b743c (arm) */
void fn_000b743c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b743c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b7440:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b7444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b7448:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000b744c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b7450:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000b7454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_000b7458:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b745c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_000b7460:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_000b7464:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_000b7468:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000b746c:;
    {
        wr32(cpu->r[2] + + 0x20u, cpu->r[5]);
    }
L_000b7470:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x4u;
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_000b7474:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000b7478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b746c;
        }
    }
L_000b747c:;
    {
        cpu->r[7] = 0x00008190u;
    }
L_000b7480:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_000b7484:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000b7488:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b748c:;
    {
        cpu->r[14] = 0x000b7490u; fn_000b6730(cpu);
    }
L_000b7490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b7494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7568;
        }
    }
L_000b7498:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b749c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x8u);
    }
L_000b74a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b74a4:;
    {
        cpu->r[14] = 0x000b74a8u; fn_000fc628(cpu);
    }
L_000b74a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b74ac:;
    {
        cpu->r[14] = 0x000b74b0u; fn_000fc650(cpu);
    }
L_000b74b0:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b74b4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_000b74b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b74bc:;
    {
        cpu->r[14] = 0x000b74c0u; fn_000fc650(cpu);
    }
L_000b74c0:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b74c4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000b74c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b74cc:;
    {
        cpu->r[14] = 0x000b74d0u; fn_000fc650(cpu);
    }
L_000b74d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_000b74d4:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b74d8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_000b74dc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_000b74e0:;
    {
        cpu->r[14] = 0x000b74e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b74e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000b74e8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
    }
L_000b74ec:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b74f0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_000b74f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b74f8:;
    {
        cpu->r[14] = 0x000b74fcu; fn_000fc5f4(cpu);
    }
L_000b74fc:;
    {
        goto L_000b750c;
    }
L_000b7500:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b7504:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b7508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7550;
        }
    }
L_000b750c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000b7510:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000b7514:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b7518:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b751c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7500;
        }
    }
L_000b7520:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000b7524:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_000b7528:;
    {
        cpu->r[14] = 0x000b752cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000b752c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000b7530:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_000b7534:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_000b7538:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b753c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7540:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000b7544:;
    {
        cpu->r[14] = 0x000b7548u; fn_000fc5f4(cpu);
    }
L_000b7548:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000b754c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b750c;
        }
    }
L_000b7550:;
    {
        cpu->r[3] = 0x00008190u;
    }
L_000b7554:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b7558:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000b755c:;
    {
        cpu->r[14] = 0x000b7560u; fn_000b7268(cpu);
    }
L_000b7560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7564:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7568u)) return;
    }
L_000b7568:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000b756c:;
    {
        cpu->r[14] = 0x000b7570u; fn_000b7268(cpu);
    }
L_000b7570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7574:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7578u)) return;
    }
}

/* _ZN8CMiniMapC2Ev @ 000b7578 (arm) */
void fn_000b7578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7578:;
    {
        cpu->r[3] = 0x000007e0u;
    }
L_000b757c:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000b7580:;
    {
        cpu->r[3] = rd32(0x000b7588u + + 0x44u);
    }
L_000b7584:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b7588:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b758c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b7590:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b7594:;
    {
        cpu->r[12] = 0x00000f00u;
    }
L_000b7598:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_000b759c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b75a4u, cpu->r[3], 0, 0);
    }
L_000b75a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b75a4:;
    {
        wr32(cpu->r[2] + + 0x18u, cpu->r[12]);
    }
L_000b75a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000b75ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000b75b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b75a0;
        }
    }
L_000b75b4:;
    {
        cpu->r[2] = rd32(0x000b75bcu + + 0x14u);
    }
L_000b75b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b75bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b75c0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000b75c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b75c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMiniMapC1Ev @ 000b75d4 (arm) */
void fn_000b75d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b75d4:;
    {
        cpu->r[3] = 0x000007e0u;
    }
L_000b75d8:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000b75dc:;
    {
        cpu->r[3] = rd32(0x000b75e4u + + 0x44u);
    }
L_000b75e0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b75e4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b75e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b75ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b75f0:;
    {
        cpu->r[12] = 0x00000f00u;
    }
L_000b75f4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_000b75f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b7600u, cpu->r[3], 0, 0);
    }
L_000b75fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b7600:;
    {
        wr32(cpu->r[2] + + 0x18u, cpu->r[12]);
    }
L_000b7604:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000b7608:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000b760c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b75fc;
        }
    }
L_000b7610:;
    {
        cpu->r[2] = rd32(0x000b7618u + + 0x14u);
    }
L_000b7614:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b7618:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b761c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000b7620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b7624:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMiniMap20SetPlayerCarDotColorEt @ 000b7630 (arm) */
void fn_000b7630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7630:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_000b7634:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMiniMap20GetPlayerCarDotColorEv @ 000b7638 (arm) */
void fn_000b7638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7638:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x14u);
    }
L_000b763c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMiniMap7ClipArcEii @ 000b7640 (arm) */
void fn_000b7640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7640:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b7644:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000005eu, 0, 0);
    }
L_000b7648:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000b764c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b7680;
        }
    }
L_000b7650:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 0);
    }
L_000b7654:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000b7658:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b7680;
        }
    }
L_000b765c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000b7660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000005eu, 0, 0);
    }
L_000b7664:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000b7668:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b7680;
        }
    }
L_000b766c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 0);
    }
L_000b7670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b7674:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b7678:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000b767c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b7680:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b7684:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z14ComputeOutCodeRK8Vector2sS1_S1_ @ 000b7688 (arm) */
void fn_000b7688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7688:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b768c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_000b7690:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b7694:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000b7698:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000b769c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b76b0;
        }
    }
L_000b76a0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000b76a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000b76a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_000b76ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b76b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b76b4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000b76b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b76bc:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[0] | 0x00000004u; cpu->r[0] = v;
        }
    }
L_000b76c0:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b76c4:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_000b76c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b76cc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[0] | 0x00000008u; cpu->r[0] = v;
        }
    }
L_000b76d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CMiniMap8ClipLineER8Vector2sS1_RKS0_S3_ @ 000b76d4 (arm) */
void fn_000b76d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b76d4:;
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
L_000b76d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000b76dc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000b76e0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000b76e4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b76e8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000b76ec:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000b76f0:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000b76f4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b76f8:;
    {
        cpu->r[14] = 0x000b76fcu; fn_000b7688(cpu);
    }
L_000b76fc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b7700:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b7704:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b7708:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b770c:;
    {
        cpu->r[14] = 0x000b7710u; fn_000b7688(cpu);
    }
L_000b7710:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b7714:;
    {
        uint32_t v = cpu->r[6] | cpu->r[5]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b7718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b7728;
        }
    }
L_000b771c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b7720:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b7724:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7728u)) return;
    }
L_000b7728:;
    {
        { uint32_t v = cpu->r[6] & cpu->r[5]; set_nz(cpu, v); }
    }
L_000b772c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b77a0;
        }
    }
L_000b7730:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b7734:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = cpu->r[5];
        }
    }
L_000b7738:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[6];
        }
    }
L_000b773c:;
    {
        { uint32_t v = cpu->r[9] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b77a8;
        }
    }
L_000b7744:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b7748:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_000b774c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b7750:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000b7754:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_000b7758:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
    }
L_000b775c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000b7760:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b7764:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000b7768:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000b776c:;
    {
        cpu->r[14] = 0x000b7770u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b7770:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b7774:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000b7778:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_000b777c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b77c0;
        }
    }
L_000b7780:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000b7784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b7788:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[11]);
    }
L_000b778c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b7790:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b7794:;
    {
        cpu->r[14] = 0x000b7798u; fn_000b7688(cpu);
    }
L_000b7798:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b779c:;
    {
        goto L_000b7714;
    }
L_000b77a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b77a4:;
    {
        goto L_000b7720;
    }
L_000b77a8:;
    {
        { uint32_t v = cpu->r[9] & 0x00000002u; set_nz(cpu, v); }
    }
L_000b77ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b77e0;
        }
    }
L_000b77b0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b77b4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_000b77b8:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x4u);
    }
L_000b77bc:;
    {
        goto L_000b7750;
    }
L_000b77c0:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_000b77c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b77c8:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[11]);
    }
L_000b77cc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b77d0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b77d4:;
    {
        cpu->r[14] = 0x000b77d8u; fn_000b7688(cpu);
    }
L_000b77d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b77dc:;
    {
        goto L_000b7714;
    }
L_000b77e0:;
    {
        { uint32_t v = cpu->r[9] & 0x00000004u; set_nz(cpu, v); }
    }
L_000b77e4:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[11] = v1;
    }
L_000b77e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_000b77ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[10]);
        }
    }
L_000b77f0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
    }
L_000b77f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000b77f8:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000b77fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_000b7800:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b7804:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000b7808:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000b780c:;
    {
        cpu->r[14] = 0x000b7810u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b7810:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b7814:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_000b7818:;
    {
        goto L_000b7778;
    }
}

/* _ZN8CMiniMap12DrawRoadLineERK8Vector4sS2_jR8Vector2sS4_ @ 000b781c (arm) */
void fn_000b781c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b781c:;
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
L_000b7820:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_000b7824:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x8u);
    }
L_000b7828:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000b782c:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_000b7830:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_000b7834:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000b7838:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000b783c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[7]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000b7840:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000b7844:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[8]; cpu->r[9] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000b7848:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000b784c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b7850:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[7], 1, 0);
    }
L_000b7854:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b7858:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000b785c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000b7860:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_000b7864:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000b7868:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 6u, &shc), cpu->r[10], 1, 0);
    }
L_000b786c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000b7870:;
    {
        wr32(cpu->r[5], cpu->r[8]);
    }
L_000b7874:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b7878:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x8u);
    }
L_000b787c:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_000b7880:;
    {
        cpu->r[10] = rd32(0x000b7888u + + 0xbcu);
    }
L_000b7884:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[7]; cpu->r[11] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000b7888:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[9] = v;
    }
L_000b788c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[6]; cpu->r[11] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000b7890:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000b7894:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b789cu, cpu->r[10], 0, 0);
    }
L_000b7898:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[8], 1, 6u, &shc), cpu->r[7], 1, 0);
    }
L_000b789c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_000b78a0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b78a4:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 6u, &shc), cpu->r[9], 1, 0);
    }
L_000b78a8:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_000b78ac:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_000b78b0:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b78b4:;
    {
        cpu->r[9] = rd32(cpu->r[5]);
    }
L_000b78b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x0000004bu, 0, 0);
    }
L_000b78bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[14], 0x00000032u, 0, 0);
    }
L_000b78c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_000b78c4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_000b78c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_000b78cc:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_000b78d0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000063u, 0, 0);
    }
L_000b78d4:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_000b78d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x00000063u, 0, 0);
    }
L_000b78dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_000b78e0:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000b78e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b78e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_000b78ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_000b78f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_000b78f4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_000b78f8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_000b78fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000b7900:;
    {
        cpu->r[14] = 0x000b7904u; fn_000b76d4(cpu);
    }
L_000b7904:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b7908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b793c;
        }
    }
L_000b790c:;
    {
        cpu->r[3] = rd32(0x000b7914u + + 0x34u);
    }
L_000b7910:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b7914:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b7918:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b791c:;
    {
        cpu->r[14] = 0x000b7920u; fn_0012dd58(cpu);
    }
L_000b7920:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b7924:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b7928:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_000b792c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b7930:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b7934:;
    {
        cpu->r[14] = 0x000b7938u; fn_001303c0(cpu);
    }
L_000b7938:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b793c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000b7940:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7944u)) return;
    }
}

/* _ZN8CMiniMap12DrawRoadSideEiiRK8Vector4sRK9CMatrix44 @ 000b794c (arm) */
void fn_000b794c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b794c:;
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
L_000b7950:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_000b7954:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b7958:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b795c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_000b7960:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000b7964:;
    {
        cpu->r[1] = rd32(0x000b796cu + + 0x5c8u);
    }
L_000b7968:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000b796c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xd8u);
    }
L_000b7970:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b7978u, cpu->r[1], 0, 0);
    }
L_000b7974:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_000b7978:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b7f18;
        }
    }
L_000b797c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_000b7980:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b7984:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000b7988:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000b798c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000b7990:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000b7994:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000b7998:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b799c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b798c;
        }
    }
L_000b79a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000b79a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b79c4;
        }
    }
L_000b79a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000b79ac:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000b79b0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000b79b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000b79b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000b79bc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000b79c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b79b0;
        }
    }
L_000b79c4:;
    {
        cpu->r[14] = 0x000b79c8u; fn_00180c78(cpu);
    }
L_000b79c8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b79cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 1);
    }
L_000b79d0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x5cu);
    }
L_000b79d4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_000b79d8:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x54u);
    }
L_000b79dc:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0xcu);
    }
L_000b79e0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
    }
L_000b79e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_000b79e8:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[9]);
    }
L_000b79ec:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_000b79f0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[14]);
    }
L_000b79f4:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[0]);
    }
L_000b79f8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000b7f28;
        }
    }
L_000b79fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_000b7a00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000b7a04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000b7a08:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000b7a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000b7a10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000b7a14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b7a18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b7a08;
        }
    }
L_000b7a1c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000b7a20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b7a40;
        }
    }
L_000b7a24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000b7a28:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000b7a2c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000b7a30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000b7a34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000b7a38:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000b7a3c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b7a2c;
        }
    }
L_000b7a40:;
    {
        cpu->r[14] = 0x000b7a44u; fn_00180c78(cpu);
    }
L_000b7a44:;
    {
        cpu->r[14] = rd32(cpu->r[10]);
    }
L_000b7a48:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x4u);
    }
L_000b7a4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_000b7a50:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 0);
    }
L_000b7a54:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_000b7a58:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x14u);
    }
L_000b7a5c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_000b7a60:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000b7a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000b7a68:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000b7a6c:;
    {
        cpu->r[3] = 0x00008888u;
    }
L_000b7a70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xff88u << 16);
    }
L_000b7a74:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x10u);
    }
L_000b7a78:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0xcu);
    }
L_000b7a7c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_000b7a80:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[14], 1, 0);
    }
L_000b7a84:;
    {
        uint32_t v = cpu->r[11] * cpu->r[8]; cpu->r[12] = v;
    }
L_000b7a88:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_000b7a8c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[12]);
    }
L_000b7a90:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x8u);
    }
L_000b7a94:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b7a98:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[11]);
    }
L_000b7a9c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x14u);
    }
L_000b7aa0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8]; cpu->r[10] = v;
    }
L_000b7aa4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[10]);
    }
L_000b7aa8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x10u);
    }
L_000b7aac:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8]; cpu->r[8] = v;
    }
L_000b7ab0:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[8]);
    }
L_000b7ab4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b7ab8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[8] = v;
    }
L_000b7abc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6]; cpu->r[6] = v;
    }
L_000b7ac0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b7ac4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_000b7ac8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_000b7acc:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[8]);
    }
L_000b7ad0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x74u);
    }
L_000b7ad4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[6]);
    }
L_000b7ad8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_000b7adc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7ae0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[9] + cpu->r[8]; cpu->r[6] = v;
    }
L_000b7ae4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 0);
    }
L_000b7ae8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x8u);
    }
L_000b7aec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_000b7af0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_000b7af4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[10] + cpu->r[6]; cpu->r[10] = v;
    }
L_000b7af8:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_000b7afc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000b7b00:;
    {
        uint32_t v = cpu->r[11] * cpu->r[9] + cpu->r[6]; cpu->r[11] = v;
    }
L_000b7b04:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[10]);
    }
L_000b7b08:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x5cu);
    }
L_000b7b0c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[10]);
    }
L_000b7b10:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b7b14:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_000b7b18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000800u, 0, 0);
    }
L_000b7b1c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[10]);
    }
L_000b7b20:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b7b24:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x70u);
    }
L_000b7b28:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7b2c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[9] + cpu->r[6]; cpu->r[9] = v;
    }
L_000b7b30:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_000b7b34:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x64u);
    }
L_000b7b38:;
    {
        uint32_t v = cpu->r[11] * cpu->r[10] + cpu->r[6]; cpu->r[10] = v;
    }
L_000b7b3c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_000b7b40:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b7b44:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_000b7b48:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000800u, 0, 0);
    }
L_000b7b4c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[9]);
    }
L_000b7b50:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b7b54:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_000b7b58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000800u, 0, 0);
    }
L_000b7b5c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7b60:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_000b7b64:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b7b68:;
    {
        uint32_t v = cpu->r[6] * cpu->r[10] + cpu->r[9]; cpu->r[11] = v;
    }
L_000b7b6c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b7b70:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b7b74:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000800u, 0, 0);
    }
L_000b7b78:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_000b7b7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000800u, 0, 0);
    }
L_000b7b80:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b7b84:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_000b7b88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000800u, 0, 0);
    }
L_000b7b8c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_000b7b90:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x54u);
    }
L_000b7b94:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_000b7b98:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8] + cpu->r[6]; cpu->r[10] = v;
    }
L_000b7b9c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b7ba0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_000b7ba4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_000b7ba8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b7bac:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b7bb0:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[10]);
    }
L_000b7bb4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b7bb8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000b7bbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000b7bc0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[9] + cpu->r[11]; cpu->r[9] = v;
    }
L_000b7bc4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8] + cpu->r[6]; cpu->r[0] = v;
    }
L_000b7bc8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[9]);
    }
L_000b7bcc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x24u);
    }
L_000b7bd0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000b7bd4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[9]);
    }
L_000b7bd8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000b7bdc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b7be0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x18u);
    }
L_000b7be4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b7be8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8] + cpu->r[11]; cpu->r[8] = v;
    }
L_000b7bec:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x28u);
    }
L_000b7bf0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000b7bf4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_000b7bf8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b7bfc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[8]; cpu->r[0] = v;
    }
L_000b7c00:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b7c04:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x60u);
    }
L_000b7c08:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_000b7c0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b7c10:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0] + cpu->r[6]; cpu->r[10] = v;
    }
L_000b7c14:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_000b7c18:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000b7c1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b7c20:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_000b7c24:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_000b7c28:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_000b7c2c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_000b7c30:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7c34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_000b7c38:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[8]);
    }
L_000b7c3c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b7c40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], shifter(cpu->r[8], 1, 12u, &shc), 0, 0);
    }
L_000b7c44:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_000b7c48:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[10]);
    }
L_000b7c4c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b7c50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], shifter(cpu->r[8], 1, 12u, &shc), 0, 0);
    }
L_000b7c54:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[8]);
    }
L_000b7c58:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_000b7c5c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000b7c60:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_000b7c64:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000b7c68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b7c6c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x68u);
    }
L_000b7c70:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[14], cpu->r[7], 1, 0);
    }
L_000b7c74:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b7c78:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 0);
    }
L_000b7c7c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000b7c80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000b7c84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 12u, &shc), 0, 0);
    }
L_000b7c88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_000b7c8c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[10]);
    }
L_000b7c90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b7c94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_000b7c98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000b7c9c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_000b7ca0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[9]);
    }
L_000b7ca4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[11]);
    }
L_000b7ca8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b7cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000b7cb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000b7cb4:;
    {
        cpu->r[14] = 0x000b7cb8u; fn_000b781c(cpu);
    }
L_000b7cb8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_000b7cbc:;
    {
        cpu->r[3] = 0x00008888u;
    }
L_000b7cc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b7cc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xff88u << 16);
    }
L_000b7cc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b7ccc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7]; cpu->r[11] = v;
    }
L_000b7cd0:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000b7cd4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6]; cpu->r[9] = v;
    }
L_000b7cd8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[10] = v0;
        cpu->r[14] = v1;
    }
L_000b7cdc:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[11]);
    }
L_000b7ce0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_000b7ce4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[11]);
    }
L_000b7ce8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000b7cec:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[11]);
    }
L_000b7cf0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b7cf4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7]; cpu->r[11] = v;
    }
L_000b7cf8:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[11]);
    }
L_000b7cfc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x20u);
    }
L_000b7d00:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[11]);
    }
L_000b7d04:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_000b7d08:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_000b7d0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b7d10:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7]; cpu->r[7] = v;
    }
L_000b7d14:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000b7d18:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[11]);
    }
L_000b7d1c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b7d20:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_000b7d24:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[11]);
    }
L_000b7d28:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x24u);
    }
L_000b7d2c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_000b7d30:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_000b7d34:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[6] = v;
    }
L_000b7d38:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x28u);
    }
L_000b7d3c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x60u);
    }
L_000b7d40:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
    }
L_000b7d44:;
    {
        uint32_t v = cpu->r[14] * cpu->r[8] + cpu->r[4]; cpu->r[6] = v;
    }
L_000b7d48:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000b7d4c:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000b7d50:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7d54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000800u, 0, 0);
    }
L_000b7d58:;
    {
        uint32_t v = cpu->r[14] * cpu->r[4] + cpu->r[9]; cpu->r[14] = v;
    }
L_000b7d5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000b7d60:;
    {
        uint32_t v = cpu->r[12] * cpu->r[8] + cpu->r[9]; cpu->r[4] = v;
    }
L_000b7d64:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[14], 0x00000800u, 0, 0);
    }
L_000b7d68:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8] + cpu->r[7]; cpu->r[8] = v;
    }
L_000b7d6c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b7d70:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b7d74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_000b7d78:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000800u, 0, 0);
    }
L_000b7d7c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14] + cpu->r[7]; cpu->r[12] = v;
    }
L_000b7d80:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b7d84:;
    {
        uint32_t v = cpu->r[10] * cpu->r[14] + cpu->r[7]; cpu->r[10] = v;
    }
L_000b7d88:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000b7d8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000b7d90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000800u, 0, 0);
    }
L_000b7d94:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b7d98:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b7d9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000800u, 0, 0);
    }
L_000b7da0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14] + cpu->r[6]; cpu->r[6] = v;
    }
L_000b7da4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b7da8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14] + cpu->r[9]; cpu->r[9] = v;
    }
L_000b7dac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b7db0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b7db4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[7] + cpu->r[4]; cpu->r[4] = v;
    }
L_000b7db8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000b7dbc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[7] + cpu->r[8]; cpu->r[8] = v;
    }
L_000b7dc0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b7dc4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b7dc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_000b7dcc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b7dd0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_000b7dd4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_000b7dd8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14] + cpu->r[12]; cpu->r[12] = v;
    }
L_000b7ddc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], shifter(cpu->r[8], 1, 12u, &shc), 0, 0);
    }
L_000b7de0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[14] + cpu->r[10]; cpu->r[10] = v;
    }
L_000b7de4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b7de8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[8]);
    }
L_000b7dec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000b7df0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_000b7df4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_000b7df8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[4]);
    }
L_000b7dfc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[8], shifter(cpu->r[9], 1, 12u, &shc), 0, 0);
    }
L_000b7e00:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_000b7e04:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[14]);
    }
L_000b7e08:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_000b7e0c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[10]);
    }
L_000b7e10:;
    {
        cpu->r[14] = 0x000b7e14u; fn_000b781c(cpu);
    }
L_000b7e14:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_000b7e18:;
    {
        uint32_t v = cpu->r[0] | cpu->r[9]; cpu->r[0] = v;
    }
L_000b7e1c:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000b7e20:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b7e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b7ec0;
        }
    }
L_000b7e28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x38u);
    }
L_000b7e2c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b7e30:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b7e34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000b7e38:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x84u);
    }
L_000b7e3c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000b7e40:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b7e44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7e54;
        }
    }
L_000b7e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b7e4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_000b7e50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b7e54u)) return;
    }
L_000b7e54:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b7e58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7e48;
        }
    }
L_000b7e5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_000b7e60:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_000b7e64:;
    {
        cpu->r[3] = rd32(0x000b7e6cu + + 0xccu);
    }
L_000b7e68:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xff00u << 16);
    }
L_000b7e6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000002du, 0, 0);
    }
L_000b7e70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004bu, 0, 0);
    }
L_000b7e74:;
    {
        cpu->r[10] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000b7e78:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000b7e7c:;
    {
        cpu->r[14] = 0x000b7e80u; fn_0012dd58(cpu);
    }
L_000b7e80:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_000b7e84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_000b7e88:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000b7e8c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000b7e90:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000b7e94:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[7]; cpu->r[14] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_000b7e98:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000b7e9c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[6]; cpu->r[9] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_000b7ea0:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_000b7ea4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b7ea8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[7], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000b7eac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000b7eb0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[6], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_000b7eb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_000b7eb8:;
    {
        cpu->r[14] = 0x000b7ebcu; fn_00130908(cpu);
    }
L_000b7ebc:;
    {
        goto L_000b7e48;
    }
L_000b7ec0:;
    {
        cpu->r[3] = rd32(0x000b7ec8u + + 0x70u);
    }
L_000b7ec4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000b7ec8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_000b7ecc:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b7ed0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b7ed4:;
    {
        cpu->r[14] = 0x000b7ed8u; fn_0012dd58(cpu);
    }
L_000b7ed8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
    }
L_000b7edc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b7ee0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa0u);
    }
L_000b7ee4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b7ee8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x98u);
    }
L_000b7eec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_000b7ef0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa8u);
    }
L_000b7ef4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000b7ef8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000b7efc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000b7f00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x90u);
    }
L_000b7f04:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000b7f08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_000b7f0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000b7f10:;
    {
        cpu->r[14] = 0x000b7f14u; fn_00130538(cpu);
    }
L_000b7f14:;
    {
        goto L_000b7e28;
    }
L_000b7f18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_000b7f1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b7f20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000b7f24:;
    {
        goto L_000b79a0;
    }
L_000b7f28:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x10u);
    }
L_000b7f2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000b7f30:;
    {
        goto L_000b7a1c;
    }
}

/* _ZN8CMiniMap4InitEP10RoadStructiii @ 000b7f3c (arm) */
void fn_000b7f3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b7f3c:;
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
L_000b7f40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b7f44:;
    {
        cpu->r[4] = rd32(0x000b7f4cu + + 0x154u);
    }
L_000b7f48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b7f4c:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[2]);
    }
L_000b7f50:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b7f58u, cpu->r[4], 0, 0);
    }
L_000b7f54:;
    {
        cpu->r[2] = rd32(0x000b7f5cu + + 0x148u);
    }
L_000b7f58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000b7f5c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[1]);
    }
L_000b7f60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000b7f64:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_000b7f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8054;
        }
    }
L_000b7f6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000b7f70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000005u;
        }
    }
L_000b7f74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
        }
    }
L_000b7f78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x0000009bu;
        }
    }
L_000b7f7c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
        }
    }
L_000b7f80:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000b7f84:;
    {
        cpu->r[3] = rd32(0x000b7f8cu + + 0x11cu);
    }
L_000b7f88:;
    {
        cpu->r[7] = rd32(0x000b7f90u + + 0x11cu);
    }
L_000b7f8c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b7f90:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000b7f94:;
    {
        cpu->r[14] = 0x000b7f98u; fn_00096b5c(cpu);
    }
L_000b7f98:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000b7f9c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b7fa0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000b7fa4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b7fa8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7fac:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000b7fb0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_000b7fb4:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[3];
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_000b7fb8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_000b7fbc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_000b7fc0:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_000b7fc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8000;
        }
    }
L_000b7fc8:;
    {
        cpu->r[6] = rd32(0x000b7fd0u + + 0xe0u);
    }
L_000b7fcc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b7fd0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b7fd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b7fd8:;
    {
        cpu->r[14] = 0x000b7fdcu; fn_0018aa58(cpu);
    }
L_000b7fdc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b7fe0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b7fe4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b7fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8018;
        }
    }
L_000b7fec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b7ff0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b7ff4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b7ff8:;
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
L_000b7ffc:;
    {
        return fn_0018b0ec(cpu);
    }
L_000b8000:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8004:;
    {
        cpu->r[14] = 0x000b8008u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8008:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b800c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8068;
        }
    }
L_000b8010:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_000b8014:;
    {
        goto L_000b7fc8;
    }
L_000b8018:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b801c:;
    {
        cpu->r[14] = 0x000b8020u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8020:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b7fec;
        }
    }
L_000b8028:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b802c:;
    {
        cpu->r[14] = 0x000b8030u; fn_0018aa20(cpu);
    }
L_000b8030:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8034:;
    {
        cpu->r[14] = 0x000b8038u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8038:;
    {
        cpu->r[3] = rd32(0x000b8040u + + 0x74u);
    }
L_000b803c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8040:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8044:;
    {
        cpu->r[3] = rd32(0x000b804cu + + 0x6cu);
    }
L_000b8048:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b804c:;
    {
        cpu->r[14] = 0x000b8050u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b8050:;
    {
        goto L_000b7fec;
    }
L_000b8054:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000b8058:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_000b805c:;
    {
        cpu->r[2] = 0x00000091u;
    }
L_000b8060:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_000b8064:;
    {
        goto L_000b7f80;
    }
L_000b8068:;
    {
        cpu->r[6] = rd32(0x000b8070u + + 0x40u);
    }
L_000b806c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b8070:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b8074:;
    {
        cpu->r[14] = 0x000b8078u; fn_0018aa20(cpu);
    }
L_000b8078:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b807c:;
    {
        cpu->r[14] = 0x000b8080u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8080:;
    {
        cpu->r[3] = rd32(0x000b8088u + + 0x2cu);
    }
L_000b8084:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b8088:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b808c:;
    {
        cpu->r[3] = rd32(0x000b8094u + + 0x24u);
    }
L_000b8090:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8094:;
    {
        cpu->r[14] = 0x000b8098u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b8098:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_000b809c:;
    {
        goto L_000b7fcc;
    }
}

/* _ZN8CMiniMapD1Ev @ 000b80bc (arm) */
void fn_000b80bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b80bc:;
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
L_000b80c0:;
    {
        cpu->r[4] = rd32(0x000b80c8u + + 0xecu);
    }
L_000b80c4:;
    {
        cpu->r[7] = rd32(0x000b80ccu + + 0xecu);
    }
L_000b80c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b80cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b80d4u, cpu->r[4], 0, 0);
    }
L_000b80d0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b80d4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b80d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b80dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8120;
        }
    }
L_000b80e0:;
    {
        cpu->r[6] = rd32(0x000b80e8u + + 0xd4u);
    }
L_000b80e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b80e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b80ec:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_000b80f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b80f4:;
    {
        cpu->r[14] = 0x000b80f8u; fn_0018aa58(cpu);
    }
L_000b80f8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b80fc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b8100:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b8104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8164;
        }
    }
L_000b8108:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b810c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b8110:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8114:;
    {
        cpu->r[14] = 0x000b8118u; fn_0018b0ec(cpu);
    }
L_000b8118:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b811c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8120u)) return;
    }
L_000b8120:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8124:;
    {
        cpu->r[14] = 0x000b8128u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8128:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b812c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b80e0;
        }
    }
L_000b8130:;
    {
        cpu->r[6] = rd32(0x000b8138u + + 0x84u);
    }
L_000b8134:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b8138:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b813c:;
    {
        cpu->r[14] = 0x000b8140u; fn_0018aa20(cpu);
    }
L_000b8140:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8144:;
    {
        cpu->r[14] = 0x000b8148u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8148:;
    {
        cpu->r[3] = rd32(0x000b8150u + + 0x70u);
    }
L_000b814c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b8150:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8154:;
    {
        cpu->r[3] = rd32(0x000b815cu + + 0x68u);
    }
L_000b8158:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b815c:;
    {
        cpu->r[14] = 0x000b8160u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b8160:;
    {
        goto L_000b80e4;
    }
L_000b8164:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8168:;
    {
        cpu->r[14] = 0x000b816cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b816c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8108;
        }
    }
L_000b8174:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8178:;
    {
        cpu->r[14] = 0x000b817cu; fn_0018aa20(cpu);
    }
L_000b817c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8180:;
    {
        cpu->r[14] = 0x000b8184u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8184:;
    {
        cpu->r[3] = rd32(0x000b818cu + + 0x34u);
    }
L_000b8188:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b818c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8190:;
    {
        cpu->r[3] = rd32(0x000b8198u + + 0x2cu);
    }
L_000b8194:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8198:;
    {
        cpu->r[14] = 0x000b819cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b819c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b81a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b81a4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b81a8:;
    {
        cpu->r[14] = 0x000b81acu; fn_0018b0ec(cpu);
    }
L_000b81ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b81b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b81b4u)) return;
    }
}

/* _ZN8CMiniMapD2Ev @ 000b81c8 (arm) */
void fn_000b81c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b81c8:;
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
L_000b81cc:;
    {
        cpu->r[4] = rd32(0x000b81d4u + + 0xecu);
    }
L_000b81d0:;
    {
        cpu->r[7] = rd32(0x000b81d8u + + 0xecu);
    }
L_000b81d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b81d8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b81e0u, cpu->r[4], 0, 0);
    }
L_000b81dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b81e0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b81e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b81e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b822c;
        }
    }
L_000b81ec:;
    {
        cpu->r[6] = rd32(0x000b81f4u + + 0xd4u);
    }
L_000b81f0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b81f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b81f8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_000b81fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8200:;
    {
        cpu->r[14] = 0x000b8204u; fn_0018aa58(cpu);
    }
L_000b8204:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b8208:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b820c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b8210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8270;
        }
    }
L_000b8214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b8218:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b821c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8220:;
    {
        cpu->r[14] = 0x000b8224u; fn_0018b0ec(cpu);
    }
L_000b8224:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8228:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b822cu)) return;
    }
L_000b822c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8230:;
    {
        cpu->r[14] = 0x000b8234u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b81ec;
        }
    }
L_000b823c:;
    {
        cpu->r[6] = rd32(0x000b8244u + + 0x84u);
    }
L_000b8240:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b8244:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b8248:;
    {
        cpu->r[14] = 0x000b824cu; fn_0018aa20(cpu);
    }
L_000b824c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8250:;
    {
        cpu->r[14] = 0x000b8254u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8254:;
    {
        cpu->r[3] = rd32(0x000b825cu + + 0x70u);
    }
L_000b8258:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000b825c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8260:;
    {
        cpu->r[3] = rd32(0x000b8268u + + 0x68u);
    }
L_000b8264:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b8268:;
    {
        cpu->r[14] = 0x000b826cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b826c:;
    {
        goto L_000b81f0;
    }
L_000b8270:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8274:;
    {
        cpu->r[14] = 0x000b8278u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b827c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8214;
        }
    }
L_000b8280:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8284:;
    {
        cpu->r[14] = 0x000b8288u; fn_0018aa20(cpu);
    }
L_000b8288:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b828c:;
    {
        cpu->r[14] = 0x000b8290u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8290:;
    {
        cpu->r[3] = rd32(0x000b8298u + + 0x34u);
    }
L_000b8294:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8298:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b829c:;
    {
        cpu->r[3] = rd32(0x000b82a4u + + 0x2cu);
    }
L_000b82a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b82a4:;
    {
        cpu->r[14] = 0x000b82a8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b82a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000b82ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b82b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b82b4:;
    {
        cpu->r[14] = 0x000b82b8u; fn_0018b0ec(cpu);
    }
L_000b82b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b82bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b82c0u)) return;
    }
}

/* _ZN8CMiniMap6RenderEPK4CCarPPS0_i @ 000b82d8 (arm) */
void fn_000b82d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b82d8:;
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
L_000b82dc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b82e0:;
    {
        cpu->r[10] = rd32(0x000b82e8u + + 0x6b8u);
    }
L_000b82e4:;
    {
        cpu->r[6] = rd32(0x000b82ecu + + 0x6b8u);
    }
L_000b82e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_000b82ec:;
    {
        cpu->r[10] = add_flags(cpu, 0x000b82f4u, cpu->r[10], 0, 0);
    }
L_000b82f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b82f4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000b82f8:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000b82fc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_000b8300:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000b8304:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b8308:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b830c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b831c;
        }
    }
L_000b8310:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000b8314:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b8318:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b831cu)) return;
    }
L_000b831c:;
    {
        cpu->r[7] = rd32(0x000b8324u + + 0x684u);
    }
L_000b8320:;
    {
        cpu->r[3] = rd32(0x000b8328u + + 0x684u);
    }
L_000b8324:;
    {
        cpu->r[8] = rd32(cpu->r[10] + cpu->r[7]);
    }
L_000b8328:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b832c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000b8330:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000b8334:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b8338:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000b833c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b865c;
        }
    }
L_000b8340:;
    {
        cpu->r[4] = rd32(0x000b8348u + + 0x668u);
    }
L_000b8344:;
    {
        cpu->r[8] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000b8348:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b834c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b8350:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8354:;
    {
        cpu->r[14] = 0x000b8358u; fn_0018aa44(cpu);
    }
L_000b8358:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_000b835c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b8360:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b8364:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000b8368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8704;
        }
    }
L_000b836c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000b8370:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8310;
        }
    }
L_000b8374:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b8378:;
    {
        cpu->r[1] = 0x44000000u;
    }
L_000b837c:;
    {
        cpu->r[3] = 0x0000000fu;
    }
L_000b8380:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_000b8384:;
    {
        cpu->r[3] = 0x00000091u;
    }
L_000b8388:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_000b838c:;
    {
        cpu->r[14] = 0x000b8390u; fn_0012dd58(cpu);
    }
L_000b8390:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_000b8394:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b8398:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b839c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b83a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000b83a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b83a8:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_000b83ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b83b0:;
    {
        cpu->r[14] = 0x000b83b4u; fn_00130908(cpu);
    }
L_000b83b4:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000b83b8:;
    {
        cpu->r[6] = rd32(0x000b83c0u + + 0x5f4u);
    }
L_000b83bc:;
    {
        cpu->r[14] = 0x000b83c0u; imp_glEnable(cpu); /* glEnable */
    }
L_000b83c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b83c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b83c8:;
    {
        cpu->r[12] = 0x00000062u;
    }
L_000b83cc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b83d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b83d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000b83d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b83dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b83e0:;
    {
        cpu->r[14] = 0x000b83e4u; fn_0012fa2c(cpu);
    }
L_000b83e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b83e8:;
    {
        cpu->r[11] = 0x00008c50u;
    }
L_000b83ec:;
    {
        cpu->r[14] = 0x000b83f0u; fn_0012f780(cpu);
    }
L_000b83f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b83f4:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000b83f8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000b83fc:;
    {
        cpu->r[14] = 0x000b8404u;
    }
L_000b8400:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8404u)) return;
    }
L_000b8404:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000b8408:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b840c:;
    {
        cpu->r[14] = 0x000b8410u; fn_001845ac(cpu);
    }
L_000b8410:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8414:;
    {
        cpu->r[1] = 0x000000a0u;
    }
L_000b8418:;
    {
        cpu->r[14] = 0x000b841cu; fn_0018444c(cpu);
    }
L_000b841c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_000b8420:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b8424:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b8428:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b842c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000b8430:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000b8434:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000b8438:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x3d8u);
    }
L_000b843c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_000b8440:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000b8444:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_000b8448:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_000b844c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000b8450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b8454:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b84a8;
        }
    }
L_000b8458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000b845c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_000b8460:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b8464:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000b8468:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b846c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000b8470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8474:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b8478:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000b847c:;
    {
        cpu->r[14] = 0x000b8480u; fn_000b794c(cpu);
    }
L_000b8480:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_000b8484:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b8488:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b848c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000b8490:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000b8494:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000b8498:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000b849c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000b84a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b8468;
        }
    }
L_000b84a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b84a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000b84ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_000b84b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b84b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b851c;
        }
    }
L_000b84b8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000b84bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000b84c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000b84c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_000b84c8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_000b84cc:;
    {
        cpu->r[6] = rd32(cpu->r[1] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_000b84d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000b84d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_000b84d8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000b84dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000b84e0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b850c;
        }
    }
L_000b84e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b84e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b84ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b84f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b84f4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000b84f8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000b84fc:;
    {
        cpu->r[14] = 0x000b8500u; fn_000b794c(cpu);
    }
L_000b8500:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_000b8504:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b84e4;
        }
    }
L_000b8508:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_000b850c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_000b8510:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000b8514:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_000b8518:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b84c0;
        }
    }
L_000b851c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b8520:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b8524:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b86a4;
        }
    }
L_000b8528:;
    {
        cpu->r[7] = 0x0000851fu;
    }
L_000b852c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b8530:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x51ebu << 16);
    }
L_000b8534:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_000b8538:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000b853c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000b8540:;
    {
        cpu->r[10] = cpu->r[12];
    }
L_000b8544:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b8548:;
    {
        goto L_000b855c;
    }
L_000b854c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b8550:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b8554:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_000b8558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b86a0;
        }
    }
L_000b855c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_000b8560:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b8564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b854c;
        }
    }
L_000b8568:;
    {
        cpu->r[14] = 0x000b856cu; fn_0015d920(cpu);
    }
L_000b856c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8570:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b854c;
        }
    }
L_000b8574:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_000b8578:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x3d4u);
    }
L_000b857c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x3d8u);
    }
L_000b8580:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000b8584:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000b8588:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000b858c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_000b8590:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_000b8594:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000b8598:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_000b859c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[2] = v;
    }
L_000b85a0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[2] = v;
    }
L_000b85a4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000b85a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_000b85ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_000b85b0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12]; cpu->r[12] = v;
    }
L_000b85b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_000b85b8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_000b85bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000b85c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000b85c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000b85c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000800u, 0, 0);
    }
L_000b85cc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_000b85d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_000b85d4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[12]; cpu->r[0] = v;
    }
L_000b85d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_000b85dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 12u, &shc), 0, 0);
    }
L_000b85e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 12u, &shc), 0, 0);
    }
L_000b85e4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_000b85e8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000b85ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b85f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000b85f4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[11], 1, 6u, &shc), cpu->r[1], 1, 1);
    }
L_000b85f8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_000b85fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8608;
        }
    }
L_000b8600:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b8604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b854c;
        }
    }
L_000b8608:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b860c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8610:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b8614:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000032u, 0, 0);
    }
L_000b8618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004bu, 0, 0);
    }
L_000b861c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_000b8620:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000b8624:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000b8628:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000b862c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000b8630:;
    {
        cpu->r[14] = 0x000b8634u; fn_000b7640(cpu);
    }
L_000b8634:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000b8638:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b863c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b854c;
        }
    }
L_000b8640:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000b8644:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b8648:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000b864c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000b8650:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b8654:;
    {
        cpu->r[14] = 0x000b8658u; fn_000ad8a0(cpu);
    }
L_000b8658:;
    {
        goto L_000b854c;
    }
L_000b865c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8660:;
    {
        cpu->r[14] = 0x000b8664u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8664:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8340;
        }
    }
L_000b866c:;
    {
        cpu->r[4] = rd32(0x000b8674u + + 0x33cu);
    }
L_000b8670:;
    {
        cpu->r[11] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000b8674:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b8678:;
    {
        cpu->r[14] = 0x000b867cu; fn_0018aa20(cpu);
    }
L_000b867c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8680:;
    {
        cpu->r[14] = 0x000b8684u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8684:;
    {
        cpu->r[3] = rd32(0x000b868cu + + 0x32cu);
    }
L_000b8688:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000b868c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b8690:;
    {
        cpu->r[3] = rd32(0x000b8698u + + 0x324u);
    }
L_000b8694:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b8698:;
    {
        cpu->r[14] = 0x000b869cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b869c:;
    {
        goto L_000b8344;
    }
L_000b86a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b86a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b86a8:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000b86ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b86b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b86b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b86b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000004bu, 0, 0);
    }
L_000b86bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000032u, 0, 0);
    }
L_000b86c0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000b86c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000b86c8:;
    {
        cpu->r[14] = 0x000b86ccu; fn_000ad8a0(cpu);
    }
L_000b86cc:;
    {
        cpu->r[12] = rd32(0x000b86d4u + + 0x2ecu);
    }
L_000b86d0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b86d4:;
    {
        cpu->r[3] = rd32(0x000b86dcu + + 0x2e8u);
    }
L_000b86d8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b86dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000b86e0:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_000b86e4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b86e8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b86ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b86f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b86f4:;
    {
        cpu->r[14] = 0x000b86f8u; fn_0012fa2c(cpu);
    }
L_000b86f8:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000b86fc:;
    {
        cpu->r[14] = 0x000b8700u; imp_glDisable(cpu); /* glDisable */
    }
L_000b8700:;
    {
        goto L_000b8310;
    }
L_000b8704:;
    {
        cpu->r[7] = rd32(cpu->r[10] + cpu->r[7]);
    }
L_000b8708:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000b870c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_000b8710:;
    {
        cpu->r[3] = 0x0000009bu;
    }
L_000b8714:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_000b8718:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000b871c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b8720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8958;
        }
    }
L_000b8724:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000b8728:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b872c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_000b8730:;
    {
        cpu->r[14] = 0x000b8734u; fn_0018aa44(cpu);
    }
L_000b8734:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b8738:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b873c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b8740:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000b8744:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000b8748:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b874c:;
    {
        cpu->r[14] = 0x000b8750u; fn_000ad8a0(cpu);
    }
L_000b8750:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b8754:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b8758:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b875c:;
    {
        cpu->r[14] = 0x000b8760u; fn_000a88e0(cpu);
    }
L_000b8760:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b8764:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b8768:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b876c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8770:;
    {
        cpu->r[14] = 0x000b8774u; fn_000a88e0(cpu);
    }
L_000b8774:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b8778:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b877c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000b8780:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8784:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_000b8788:;
    {
        cpu->r[14] = 0x000b878cu; fn_000a8910(cpu);
    }
L_000b878c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000b8790:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000b8794:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b8798:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b879c:;
    {
        cpu->r[14] = 0x000b87a0u; fn_000a8910(cpu);
    }
L_000b87a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000b87a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_000b87a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000b87ac:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[4]);
    }
L_000b87b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b88b0;
        }
    }
L_000b87b4:;
    {
        cpu->r[11] = 0x00004dd3u;
    }
L_000b87b8:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x000b87c0u + + 0x1d8u);
    }
L_000b87bc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[6]);
    }
L_000b87c0:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000b87c4:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x1062u << 16);
    }
L_000b87c8:;
    {
        cpu->r[8] = 0x00001788u;
    }
L_000b87cc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000b87d0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[10]);
    }
L_000b87d4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_000b87d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b87dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8898;
        }
    }
L_000b87e0:;
    {
        cpu->r[14] = 0x000b87e4u; fn_0015d95c(cpu);
    }
L_000b87e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b87e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8898;
        }
    }
L_000b87ec:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_000b87f0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000b87f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b87f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000b87fc:;
    {
        uint32_t v = cpu->r[3] & 0x00100000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000b8800:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8898;
        }
    }
L_000b8804:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x3dcu);
    }
L_000b8808:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000b880c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[12]; cpu->r[10] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b8810:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000b8814:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000b8818:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000b881c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000b8820:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[14]; cpu->r[2] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_000b8824:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b8828:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b882c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b8830:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000b8834:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_000b8838:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b883c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[14], 0, 0);
    }
L_000b8840:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[10];
    }
L_000b8844:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b8848:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_000b884c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000b8850:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[10], 1, 6u, &shc), cpu->r[12], 1, 0);
    }
L_000b8854:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b8858:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[10];
    }
L_000b885c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000b8860:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b8864:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_000b8868:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_000b886c:;
    {
        cpu->r[14] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[14], 1, 0);
    }
L_000b8870:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[14];
    }
L_000b8874:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_000b8878:;
    {
        *vfp_d(cpu,4) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_000b887c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 8);
    }
L_000b8880:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 4) * *vfp_d(cpu, 8);
    }
L_000b8884:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_d(cpu,6);
    }
L_000b8888:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000b888c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000b8890:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000b8894:;
    {
        cpu->r[14] = 0x000b8898u; fn_000ad8a0(cpu);
    }
L_000b8898:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000b889c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b88a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000b88a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b87d4;
        }
    }
L_000b88a8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_000b88ac:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_000b88b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b88b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000b88b8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_000b88bc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000b88c0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000b88c4:;
    {
        cpu->r[2] = 0x00004dd3u;
    }
L_000b88c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1062u << 16);
    }
L_000b88cc:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x000b88d4u + + 0xc4u);
    }
L_000b88d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[4] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000b88d4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000b88d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b88dc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000b88e0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_000b88e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000b88e8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_000b88ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_000b88f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000b88f4:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[1];
    }
L_000b88f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000b88fc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000b8900:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[12], 1, 0);
    }
L_000b8904:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[14];
    }
L_000b8908:;
    {
        *(uint32_t*)vfp_s(cpu,6) = cpu->r[12];
    }
L_000b890c:;
    {
        *vfp_d(cpu,4) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_000b8910:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b8914:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000b8918:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_000b891c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000b8920:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000b8924:;
    {
        *vfp_d(cpu,3) = (double)*(int32_t*)vfp_s(cpu,6);
    }
L_000b8928:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_000b892c:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_000b8930:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 4) * *vfp_d(cpu, 5);
    }
L_000b8934:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 3) * *vfp_d(cpu, 5);
    }
L_000b8938:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_d(cpu,6);
    }
L_000b893c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000b8940:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000b8944:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000b8948:;
    {
        cpu->r[14] = 0x000b894cu; fn_000ad8a0(cpu);
    }
L_000b894c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_000b8950:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b8954:;
    {
        goto L_000b836c;
    }
L_000b8958:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b895c:;
    {
        cpu->r[14] = 0x000b8960u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000b8960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8724;
        }
    }
L_000b8968:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b896c:;
    {
        cpu->r[14] = 0x000b8970u; fn_0018aa20(cpu);
    }
L_000b8970:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000b8974:;
    {
        cpu->r[14] = 0x000b8978u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000b8978:;
    {
        cpu->r[3] = rd32(0x000b8980u + + 0x38u);
    }
L_000b897c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8980:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b8984:;
    {
        cpu->r[3] = rd32(0x000b898cu + + 0x30u);
    }
L_000b8988:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000b898c:;
    {
        cpu->r[14] = 0x000b8990u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000b8990:;
    {
        goto L_000b8724;
    }
}

/* _ZN15gxBezierCurve3dC2Ev @ 000b89c8 (arm) */
void fn_000b89c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b89c8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b89cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000b89d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b89d8u + + 0x34u);
    }
L_000b89d4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000b89e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b89e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b89d4;
        }
    }
L_000b89ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000120u, 0, 0);
    }
L_000b89f0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89f4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89f8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b89fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000b8a00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b8a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b89f0;
        }
    }
L_000b8a08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15gxBezierCurve3dC1Ev @ 000b8a10 (arm) */
void fn_000b8a10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8a10:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b8a14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000b8a18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b8a20u + + 0x34u);
    }
L_000b8a1c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a20:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a24:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000b8a2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b8a30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8a1c;
        }
    }
L_000b8a34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000120u, 0, 0);
    }
L_000b8a38:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a3c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a40:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8a44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000b8a48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b8a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8a38;
        }
    }
L_000b8a50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15gxBezierCurve3d4evalEfR8Vector3d @ 000b8a58 (arm) */
void fn_000b8a58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8a58:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_000b8a5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), 0.0f);
    }
L_000b8a60:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000b8a64:;
    {
        vfp_sync_flags(cpu);
    }
L_000b8a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8b20;
        }
    }
L_000b8a6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b8a74u + + 0xc8u);
    }
L_000b8a70:;
    {
        vfp_vsub(cpu, 14, 14, 9);
    }
L_000b8a74:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_000b8a78:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000b8a7c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000b8a80:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b8a84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b8a88:;
    {
        *vfp_s(cpu, 5) = *(float*)G(0x000b8a90u + + 0xb0u);
    }
L_000b8a8c:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_000b8a90:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000b8a94:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b8a98:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_000b8a9c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b8aa0:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,9);
    }
L_000b8aa4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b8aa8:;
    {
        vfp_vmul(cpu, 10, 15, 5);
    }
L_000b8aac:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000b8ab0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_000b8ab4:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_000b8ab8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b8abc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000b8ac0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_000b8ac4:;
    {
        vfp_vmla(cpu, 11, 10, 6);
    }
L_000b8ac8:;
    {
        vfp_vmla(cpu, 12, 10, 7);
    }
L_000b8acc:;
    {
        vfp_vmla(cpu, 13, 10, 8);
    }
L_000b8ad0:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_000b8ad4:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000b8ad8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b8adc:;
    {
        vfp_vmul(cpu, 11, 14, 11);
    }
L_000b8ae0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b8ae4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b8ae8:;
    {
        vfp_vmul(cpu, 15, 15, 9);
    }
L_000b8aec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8aa8;
        }
    }
L_000b8af0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x2cu);
    }
L_000b8af4:;
    {
        vfp_vmla(cpu, 11, 15, 14);
    }
L_000b8af8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_000b8afc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_000b8b00:;
    {
        vfp_vmla(cpu, 12, 15, 10);
    }
L_000b8b04:;
    {
        vfp_vmla(cpu, 13, 15, 14);
    }
L_000b8b08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b8b10u + + 0x34u);
    }
L_000b8b0c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b8b10:;
    {
        vfp_vadd(cpu, 11, 11, 15);
    }
L_000b8b14:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b8b18:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b8b1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b8b20:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000b8b24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b8b2cu + + 0x18u);
    }
L_000b8b28:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000b8b2c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000b8b30:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000b8b34:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8b38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7NavLineC2Ev @ 000b8b48 (arm) */
void fn_000b8b48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8b48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b8b4c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b8b50:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000b8b54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7NavLineC1Ev @ 000b8b58 (arm) */
void fn_000b8b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8b58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b8b5c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b8b60:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000b8b64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7NavLine11PtInsideSegER8Vector3dih @ 000b8b68 (arm) */
void fn_000b8b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8b68:;
    {
        cpu->r[12] = rd32(0x000b8b70u + + 0x1c8u);
    }
L_000b8b6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000b8b70:;
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
L_000b8b74:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000b8b78:;
    {
        cpu->r[14] = rd32(0x000b8b80u + + 0x1bcu);
    }
L_000b8b7c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b8b84u, cpu->r[12], 0, 0);
    }
L_000b8b80:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000b8b84:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b8b88:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b8b8c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_000b8b90:;
    {
        cpu->r[7] = 0x00000124u;
    }
L_000b8b94:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000b8b98:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000b8b9c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000b8ba0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000b8ba4:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000b8ba8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b8bac:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_000b8bb0:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000b8bb4:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_000b8bb8:;
    {
        cpu->r[3] = 0x00000120u;
    }
L_000b8bbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000b8bc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000b8bc4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b8bc8:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000b8bcc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_000b8bd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b8bd4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000b8bd8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8bdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8be0:;
    {
        cpu->r[14] = 0x000b8be4u; fn_00180c78(cpu);
    }
L_000b8be4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8be8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000b8bec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000b8bf0:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[7] = v;
        }
    }
L_000b8bf4:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000b8bf8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b8bfc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_000b8c00:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000b8c04:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000120u, 0, 0);
    }
L_000b8c08:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7]);
    }
L_000b8c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b8c10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b8c14:;
    {
        cpu->r[14] = 0x000b8c18u; fn_00180c78(cpu);
    }
L_000b8c18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000b8c1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5cu);
    }
L_000b8c20:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_000b8c24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000b8c28:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000b8c2c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000b8c30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b8c34:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000b8c38:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b8c3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_000b8c40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000b8c44:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000b8c48:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8c4c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_000b8c50:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8c54:;
    {
        cpu->r[14] = 0x000b8c58u; fn_0017a764(cpu);
    }
L_000b8c58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8c5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8ca0;
        }
    }
L_000b8c60:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x54u);
    }
L_000b8c64:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_000b8c68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5cu);
    }
L_000b8c6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000b8c70:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000b8c74:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_000b8c78:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_000b8c7c:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000b8c80:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000b8c84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000b8c88:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8c8c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_000b8c90:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8c94:;
    {
        cpu->r[14] = 0x000b8c98u; fn_0017a764(cpu);
    }
L_000b8c98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000b8c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8cac;
        }
    }
L_000b8ca0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b8ca4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000b8ca8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8cacu)) return;
    }
L_000b8cac:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000b8cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8ca4;
        }
    }
L_000b8cb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_000b8cb8:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_000b8cbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_000b8cc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000b8cc4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000b8cc8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x54u);
    }
L_000b8ccc:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x5cu);
    }
L_000b8cd0:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000b8cd4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000b8cd8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000b8cdc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8ce0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_000b8ce4:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8ce8:;
    {
        cpu->r[14] = 0x000b8cecu; fn_0017a764(cpu);
    }
L_000b8cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000b8cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8ca0;
        }
    }
L_000b8cf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_000b8cf8:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_000b8cfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000b8d00:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000b8d04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000b8d08:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_000b8d0c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_000b8d10:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000b8d14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000b8d18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000b8d1c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8d20:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_000b8d24:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_000b8d28:;
    {
        cpu->r[14] = 0x000b8d2cu; fn_0017a764(cpu);
    }
L_000b8d2c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_000b8d30:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b8d34:;
    {
        goto L_000b8ca4;
    }
}

/* _ZN7NavLine21GetSegmentForPositionER8Vector3di @ 000b8d40 (arm) */
void fn_000b8d40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8d40:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000b8d44:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b8d48:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000b8d4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b8d50:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000b8d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8dc4;
        }
    }
L_000b8d58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b8d5c:;
    {
        cpu->r[14] = 0x000b8d60u; fn_000b8b68(cpu);
    }
L_000b8d60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8d64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8dbc;
        }
    }
L_000b8d68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8d6c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_000b8d70:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_000b8d74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b8d78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e08;
        }
    }
L_000b8d7c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000b8d80:;
    {
        goto L_000b8d9c;
    }
L_000b8d84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8d88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b8d8c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000b8d90:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000b8d94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000b8d98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e08;
        }
    }
L_000b8d9c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b8da0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8da4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b8da8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b8dac:;
    {
        cpu->r[14] = 0x000b8db0u; fn_000b8b68(cpu);
    }
L_000b8db0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000b8db4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8db8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8d84;
        }
    }
L_000b8dbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b8dc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8dc4u)) return;
    }
L_000b8dc4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b8dc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b8dcc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e08;
        }
    }
L_000b8dd0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b8dd4:;
    {
        goto L_000b8de8;
    }
L_000b8dd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000b8ddc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b8de0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000b8de4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e08;
        }
    }
L_000b8de8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000b8dec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8df0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b8df4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b8df8:;
    {
        cpu->r[14] = 0x000b8dfcu; fn_000b8b68(cpu);
    }
L_000b8dfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8e00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8dd8;
        }
    }
L_000b8e04:;
    {
        goto L_000b8dbc;
    }
L_000b8e08:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b8e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b8e10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8e14u)) return;
    }
}

/* _ZN7NavLine4LoadEP8LZMAFile @ 000b8e14 (arm) */
void fn_000b8e14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8e14:;
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
L_000b8e18:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000b8e1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000b8e20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000b8e24:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000b8e28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000b8e2c:;
    {
        cpu->r[14] = 0x000b8e30u; fn_000fc650(cpu);
    }
L_000b8e30:;
    {
        cpu->r[9] = rd32(0x000b8e38u + + 0x188u);
    }
L_000b8e34:;
    {
        cpu->r[9] = add_flags(cpu, 0x000b8e3cu, cpu->r[9], 0, 0);
    }
L_000b8e38:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000b8e3c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_000b8e40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8e44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8e58;
        }
    }
L_000b8e48:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b8e4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000b8e50:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000b8e54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8e58u)) return;
    }
L_000b8e58:;
    {
        cpu->r[3] = 0x00000124u;
    }
L_000b8e5c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 0);
    }
L_000b8e60:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_000b8e64:;
    {
        cpu->r[14] = 0x000b8e68u; imp__Znaj(cpu); /* _Znaj */
    }
L_000b8e68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b8e6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b8e70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b8e74:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000b8e78:;
    {
        cpu->r[14] = 0x000b8e7cu; fn_000b8a10(cpu);
    }
L_000b8e7c:;
    {
        add_flags(cpu, cpu->r[6], 0x00000002u, 0, 1);
    }
L_000b8e80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000124u, 0, 0);
    }
L_000b8e84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b8e70;
        }
    }
L_000b8e88:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000b8e8c:;
    {
        wr32(cpu->r[7], cpu->r[4]);
    }
L_000b8e90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b8e94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e48;
        }
    }
L_000b8e98:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000b8e9c:;
    {
        cpu->r[11] = 0x00008c50u;
    }
L_000b8ea0:;
    {
        cpu->r[2] = rd32(0x000b8ea8u + + 0x11cu);
    }
L_000b8ea4:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000b8ea8:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000b8eac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b8eb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000b8eb4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_000b8eb8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000b8ec0u + + 0xfcu);
    }
L_000b8ebc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000b8ec0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_000b8ec4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000b8ec8:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_000b8ecc:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000b8ed0:;
    {
        cpu->r[14] = 0x000b8ed4u; fn_000fc5f4(cpu);
    }
L_000b8ed4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000b8ed8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b8edc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000b8ee0:;
    {
        goto L_000b8efc;
    }
L_000b8ee4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000b8ee8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000b8eec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000120u, 0, 0);
    }
L_000b8ef0:;
    {
        wr16(cpu->r[3], cpu->r[10]);
    }
L_000b8ef4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b8ef8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b8efc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000b8f00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b8f04:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000b8f08:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000b8f0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_000b8f10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000b8f14:;
    {
        vfp_vdiv(cpu, 14, 15, 16);
    }
L_000b8f18:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b8f1c:;
    {
        cpu->r[14] = 0x000b8f20u; fn_000b8a58(cpu);
    }
L_000b8f20:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000b8f24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b8f28:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000b8f2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000b8f30:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000b8f34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_000b8f38:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + + 0x30u);
    }
L_000b8f3c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_000b8f40:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000b8f44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8] + + 0x34u);
    }
L_000b8f48:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[8] + + 0x38u);
    }
L_000b8f4c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000b8f50:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000b8f54:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b8f58:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000b8f5c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b8f60:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_000b8f64:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000b8f68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b8f6c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b8f70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b8f74:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b8f78:;
    {
        cpu->r[14] = 0x000b8f7cu; fn_001813dc(cpu);
    }
L_000b8f7c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b8f80:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000b8f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8ee4;
        }
    }
L_000b8f88:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000013u, 1, 1);
    }
L_000b8f8c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[7]);
        }
    }
L_000b8f90:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
        }
    }
L_000b8f94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8ef4;
        }
    }
L_000b8f98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000b8f9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000124u, 0, 0);
    }
L_000b8fa0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000b8fa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000b8fa8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000b8fac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b8fb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b8e48;
        }
    }
L_000b8fb4:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_000b8fb8:;
    {
        goto L_000b8ec0;
    }
}

/* _ZN7NavLineD1Ev @ 000b8fc8 (arm) */
void fn_000b8fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8fc8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b8fcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b8fd0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b8fd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b8fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b8fe8;
        }
    }
L_000b8fdc:;
    {
        cpu->r[14] = 0x000b8fe0u; fn_0018ba60(cpu);
    }
L_000b8fe0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b8fe4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000b8fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b8fec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b8ff0u)) return;
    }
}

/* _ZN7NavLineD2Ev @ 000b8ff0 (arm) */
void fn_000b8ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b8ff0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b8ff4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b8ff8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b8ffc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9010;
        }
    }
L_000b9004:;
    {
        cpu->r[14] = 0x000b9008u; fn_0018ba60(cpu);
    }
L_000b9008:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b900c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_000b9010:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9014:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9018u)) return;
    }
}

/* _ZN8CPowerup12GetAnmByTypeEv @ 000b9018 (arm) */
void fn_000b9018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9018:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1acu);
    }
L_000b901c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_000b9020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000b9024:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x000001f4u;
        }
    }
L_000b9028:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b902c:;
    {
        cpu->r[2] = rd32(0x000b9034u + + 0x8u);
    }
L_000b9030:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b9038u, cpu->r[2], 0, 0);
    }
L_000b9034:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b9038:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CPowerup7RespawnEb @ 000b9040 (arm) */
void fn_000b9040(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9040:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1acu);
    }
L_000b9044:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_000b9048:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
        }
    }
L_000b904c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b905c;
        }
    }
L_000b9050:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b9054:;
    {
        wr8(cpu->r[0] + + 0x1a9u, cpu->r[3]);
    }
L_000b9058:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b905c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b9060:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000b9064:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[0] + + 0x1a9u, cpu->r[3]);
        }
    }
L_000b9068:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CPowerup4PickEP4CCarP14CarSceneObject @ 000b906c (arm) */
void fn_000b906c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b906c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b9070:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b9074:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000b9078:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_000b907c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000b9080:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000b9084:;
    {
        cpu->r[14] = 0x000b9088u; fn_000a5c98(cpu);
    }
L_000b9088:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1acu);
    }
L_000b908c:;
    {
        cpu->r[4] = rd32(0x000b9094u + + 0x100u);
    }
L_000b9090:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 0);
    }
L_000b9094:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b909cu, cpu->r[4], 0, 0);
    }
L_000b9098:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000b909c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000b911c;
        case 1: goto L_000b9138;
        case 2: goto L_000b9150;
        case 3: goto L_000b9114;
        case 4: goto L_000b9158;
        case 5: goto L_000b9174;
        case 6: goto L_000b90c0;
        default: guest_unimplemented(cpu, 0x000b909cu); return; }
        }
    }
L_000b90a0:;
    {
        goto L_000b9114;
    }
L_000b90c0:;
    {
        cpu->r[0] = 0x0000003fu;
    }
L_000b90c4:;
    {
        cpu->r[14] = 0x000b90c8u; fn_00093f34(cpu);
    }
L_000b90c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b90d0u + + 0xbcu);
    }
L_000b90cc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000b90d0:;
    {
        vfp_vmul(cpu, 14, 13, 15);
    }
L_000b90d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b90dcu + + 0xb4u);
    }
L_000b90d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000b90dc:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b90e0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b90e4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b90e8:;
    {
        cpu->r[14] = 0x000b90ecu; fn_000afd88(cpu);
    }
L_000b90ec:;
    {
        cpu->r[1] = 0x00000076u;
    }
L_000b90f0:;
    {
        cpu->r[0] = rd32(0x000b90f8u + + 0xa0u);
    }
L_000b90f4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000b90f8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000b90fc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000b9100:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000b9104:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000b9108:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000b910c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000b9110:;
    {
        cpu->r[14] = 0x000b9114u; fn_000fd248(cpu);
    }
L_000b9114:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b9118:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b911cu)) return;
    }
L_000b911c:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_000b9120:;
    {
        cpu->r[14] = 0x000b9124u; fn_00093f34(cpu);
    }
L_000b9124:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b9128:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b912c:;
    {
        cpu->r[14] = 0x000b9130u; fn_0015ec14(cpu);
    }
L_000b9130:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_000b9134:;
    {
        goto L_000b90f0;
    }
L_000b9138:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_000b913c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b9140:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b9144:;
    {
        cpu->r[14] = 0x000b9148u; fn_00161bec(cpu);
    }
L_000b9148:;
    {
        cpu->r[1] = 0x00000074u;
    }
L_000b914c:;
    {
        goto L_000b90f0;
    }
L_000b9150:;
    {
        cpu->r[0] = 0x0000003eu;
    }
L_000b9154:;
    {
        goto L_000b90c4;
    }
L_000b9158:;
    {
        cpu->r[0] = 0x0000003du;
    }
L_000b915c:;
    {
        cpu->r[14] = 0x000b9160u; fn_00093f34(cpu);
    }
L_000b9160:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b9164:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b9168:;
    {
        cpu->r[14] = 0x000b916cu; fn_0015ec14(cpu);
    }
L_000b916c:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_000b9170:;
    {
        goto L_000b90f0;
    }
L_000b9174:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000b9178:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b917c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000b9180:;
    {
        cpu->r[14] = 0x000b9184u; fn_00161bec(cpu);
    }
L_000b9184:;
    {
        cpu->r[1] = 0x00000075u;
    }
L_000b9188:;
    {
        goto L_000b90f0;
    }
}

/* _ZN8CPowerup6RenderEj @ 000b919c (arm) */
void fn_000b919c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b919c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b91a0:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000b91a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000b91a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b91ac:;
    {
        cpu->r[14] = 0x000b91b0u; fn_000ea4dc(cpu);
    }
L_000b91b0:;
    {
        cpu->r[3] = rd32(0x000b91b8u + + 0xacu);
    }
L_000b91b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b91bcu, cpu->r[3], 0, 0);
    }
L_000b91b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b91bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b91cc;
        }
    }
L_000b91c0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1a9u);
    }
L_000b91c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b91c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b91d8;
        }
    }
L_000b91cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000b91d0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b91d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b91d8u)) return;
    }
L_000b91d8:;
    {
        cpu->r[2] = rd32(0x000b91e0u + + 0x88u);
    }
L_000b91dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b91e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b91e4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b91e8:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000b91ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b91f0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_000b91f4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_000b91f8:;
    {
        cpu->r[14] = 0x000b91fcu; fn_000b5a8c(cpu);
    }
L_000b91fc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000b9200:;
    {
        vfp_vsub(cpu, 18, 16, 18);
    }
L_000b9204:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0]);
    }
L_000b9208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b920c:;
    {
        cpu->r[14] = 0x000b9210u; fn_000b5a8c(cpu);
    }
L_000b9210:;
    {
        vfp_vsub(cpu, 16, 17, 16);
    }
L_000b9214:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b9218:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b921c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b9220:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000b9224:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_000b9228:;
    {
        vfp_vsub(cpu, 18, 14, 18);
    }
L_000b922c:;
    {
        cpu->r[14] = 0x000b9230u; fn_000b5a8c(cpu);
    }
L_000b9230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000b9234:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000b9238:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000b923c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000b9240:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9244:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b9248:;
    {
        cpu->r[14] = 0x000b924cu; fn_000b5c44(cpu);
    }
L_000b924c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9250:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b9254:;
    {
        cpu->r[14] = 0x000b9258u; fn_000e9f94(cpu);
    }
L_000b9258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b925c:;
    {
        cpu->r[14] = 0x000b9260u; fn_000ea4dc(cpu);
    }
L_000b9260:;
    {
        goto L_000b91cc;
    }
}

/* _ZN8CPowerup6UpdateEv @ 000b926c (arm) */
void fn_000b926c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b926c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b9270:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000b9274:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b9278:;
    {
        cpu->r[14] = 0x000b927cu; fn_000ea4dc(cpu);
    }
L_000b927c:;
    {
        cpu->r[5] = rd32(0x000b9284u + + 0x114u);
    }
L_000b9280:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b9288u, cpu->r[5], 0, 0);
    }
L_000b9284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9298;
        }
    }
L_000b928c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1a9u);
    }
L_000b9290:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b9294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b92a0;
        }
    }
L_000b9298:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b929c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b92a0u)) return;
    }
L_000b92a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b92a4:;
    {
        cpu->r[14] = 0x000b92a8u; fn_000ea19c(cpu);
    }
L_000b92a8:;
    {
        cpu->r[3] = rd32(0x000b92b0u + + 0xecu);
    }
L_000b92ac:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000b92b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b92b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b92b8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000b92bc:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000b92c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000b92c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b92c8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000b92cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000b92d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000b92d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b92d8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_000b92dc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x1dcu);
    }
L_000b92e0:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000b92e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9298;
        }
    }
L_000b92e8:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000b92ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b92f0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b92f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b92f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b9298;
        }
    }
L_000b92fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00004700u, 0, 0);
    }
L_000b9300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9304:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002au, 0, 0);
    }
L_000b9308:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000b930c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[6] + + 0x3d8u);
    }
L_000b9310:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[6] + + 0x3dcu);
    }
L_000b9314:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000b9318:;
    {
        cpu->r[14] = 0x000b931cu; fn_000b5a8c(cpu);
    }
L_000b931c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000b9320:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[7];
    }
L_000b9324:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000b9328:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000b932c:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000b9330:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000b9334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9338:;
    {
        vfp_vsub(cpu, 17, 17, 15);
    }
L_000b933c:;
    {
        cpu->r[14] = 0x000b9340u; fn_000b5a8c(cpu);
    }
L_000b9340:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000b9344:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9348:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_000b934c:;
    {
        cpu->r[14] = 0x000b9350u; fn_000b5a8c(cpu);
    }
L_000b9350:;
    {
        vfp_vmul(cpu, 15, 16, 16);
    }
L_000b9354:;
    {
        vfp_vmla(cpu, 15, 17, 17);
    }
L_000b9358:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000b935c:;
    {
        vfp_vsub(cpu, 18, 18, 14);
    }
L_000b9360:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b9368u + + 0x2cu);
    }
L_000b9364:;
    {
        vfp_vmla(cpu, 15, 18, 18);
    }
L_000b9368:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b936c:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9370:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000b9298;
        }
    }
L_000b9374:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b9378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b937c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b9380:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000b9384:;
    {
        wr8(cpu->r[4] + + 0x1a9u, cpu->r[3]);
    }
L_000b9388:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000b938c:;
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
L_000b9390:;
    {
        return fn_000b906c(cpu);
    }
}

/* _ZN8CPowerup5SpawnEiiP8Vector3d @ 000b93a0 (arm) */
void fn_000b93a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b93a0:;
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
L_000b93a4:;
    {
        cpu->r[5] = rd32(0x000b93acu + + 0x17cu);
    }
L_000b93a8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000b93ac:;
    {
        cpu->r[2] = rd32(0x000b93b4u + + 0x178u);
    }
L_000b93b0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000b93b8u, cpu->r[5], 0, 0);
    }
L_000b93b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b93b8:;
    {
        wr32(cpu->r[0] + + 0x1acu, cpu->r[1]);
    }
L_000b93bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000b93c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000b93c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b93c8:;
    {
        wr8(cpu->r[0] + + 0x1a9u, cpu->r[1]);
    }
L_000b93cc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000b93d0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 16u, &shc); cpu->r[6] = v;
    }
L_000b93d4:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_000b93d8:;
    {
        cpu->r[14] = 0x000b93dcu; fn_000b9018(cpu);
    }
L_000b93dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b93e0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xe8u);
    }
L_000b93e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0fffu << 16);
    }
L_000b93e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b93ec:;
    {
        uint32_t v = cpu->r[6] & cpu->r[3]; cpu->r[3] = v;
    }
L_000b93f0:;
    {
        uint32_t v = cpu->r[3] | cpu->r[10]; cpu->r[10] = v;
    }
L_000b93f4:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000b93f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b93fc:;
    {
        uint32_t v = cpu->r[10] | cpu->r[1]; cpu->r[10] = v;
    }
L_000b9400:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[10]);
    }
L_000b9404:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_000b9408:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b940c:;
    {
        cpu->r[14] = 0x000b9410u; fn_00132894(cpu);
    }
L_000b9410:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000b9414:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000b9418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b94f0;
        }
    }
L_000b941c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000b9420:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000b9424:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b9428:;
    {
        cpu->r[14] = 0x000b942cu; fn_00132b38(cpu);
    }
L_000b942c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9430:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b94e8;
        }
    }
L_000b9434:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b9438:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b943c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9440:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b9444:;
    {
        cpu->r[14] = 0x000b944cu;
    }
L_000b9448:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b944cu)) return;
    }
L_000b944c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9450:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000b94e8;
        }
    }
L_000b9454:;
    {
        cpu->r[3] = rd32(0x000b945cu + + 0xd4u);
    }
L_000b9458:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000b945c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b9460:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000b9464:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000b9468:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b946c:;
    {
        cpu->r[14] = 0x000b9470u; fn_00135de0(cpu);
    }
L_000b9470:;
    {
        cpu->r[1] = 0x000059d7u;
    }
L_000b9474:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b9478:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000b947c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000b9480:;
    {
        cpu->r[14] = 0x000b9484u; fn_00135de0(cpu);
    }
L_000b9484:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_000b9488:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b948c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000b9490:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000b9494:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000b9498:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b949c:;
    {
        cpu->r[14] = 0x000b94a0u; fn_00136660(cpu);
    }
L_000b94a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b94a4:;
    {
        cpu->r[14] = 0x000b94a8u; fn_00153600(cpu);
    }
L_000b94a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b94ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b94b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_000b94b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b94b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000b94bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b94c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_000b94c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000b94c8:;
    {
        cpu->r[14] = 0x000b94ccu; fn_000b5fc4(cpu);
    }
L_000b94cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b94d0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000b94d4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000b94d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b94dc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000b94e0:;
    {
        cpu->r[14] = 0x000b94e8u;
    }
L_000b94e4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b94e8u)) return;
    }
L_000b94e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b94ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b94f0u)) return;
    }
L_000b94f0:;
    {
        cpu->r[1] = rd32(0x000b94f8u + + 0x3cu);
    }
L_000b94f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000b94f8:;
    {
        cpu->r[12] = rd32(0x000b9500u + + 0x38u);
    }
L_000b94fc:;
    {
        cpu->r[14] = 0x00000049u;
    }
L_000b9500:;
    {
        cpu->r[2] = rd32(0x000b9508u + + 0x34u);
    }
L_000b9504:;
    {
        cpu->r[1] = add_flags(cpu, 0x000b950cu, cpu->r[1], 0, 0);
    }
L_000b9508:;
    {
        cpu->r[3] = rd32(0x000b9510u + + 0x30u);
    }
L_000b950c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b9514u, cpu->r[12], 0, 0);
    }
L_000b9510:;
    {
        cpu->r[2] = add_flags(cpu, 0x000b9518u, cpu->r[2], 0, 0);
    }
L_000b9514:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_000b9518:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b9520u, cpu->r[3], 0, 0);
    }
L_000b951c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000b9520:;
    {
        cpu->r[14] = 0x000b9524u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000b9524:;
    {
        goto L_000b941c;
    }
}

/* _ZN8CPowerupD1Ev @ 000b9544 (arm) */
void fn_000b9544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9544:;
    {
        cpu->r[3] = rd32(0x000b954cu + + 0x24u);
    }
L_000b9548:;
    {
        cpu->r[2] = rd32(0x000b9550u + + 0x24u);
    }
L_000b954c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b9554u, cpu->r[3], 0, 0);
    }
L_000b9550:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b9554:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b9558:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b955c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b9560:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b9564:;
    {
        cpu->r[14] = 0x000b9568u; fn_000ea6a8(cpu);
    }
L_000b9568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b956c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9570u)) return;
    }
}

/* _ZN8CPowerupD0Ev @ 000b9578 (arm) */
void fn_000b9578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9578:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b957c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b9580:;
    {
        cpu->r[14] = 0x000b9584u; fn_000b9544(cpu);
    }
L_000b9584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9588:;
    {
        cpu->r[14] = 0x000b958cu; fn_0018ba20(cpu);
    }
L_000b958c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b9590:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9594u)) return;
    }
}

/* _ZN8CPowerupD2Ev @ 000b9594 (arm) */
void fn_000b9594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9594:;
    {
        cpu->r[3] = rd32(0x000b959cu + + 0x24u);
    }
L_000b9598:;
    {
        cpu->r[2] = rd32(0x000b95a0u + + 0x24u);
    }
L_000b959c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b95a4u, cpu->r[3], 0, 0);
    }
L_000b95a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b95a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b95a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b95ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000b95b0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000b95b4:;
    {
        cpu->r[14] = 0x000b95b8u; fn_000ea6a8(cpu);
    }
L_000b95b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000b95bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b95c0u)) return;
    }
}

/* _ZN8CPowerupC1Ev @ 000b95c8 (arm) */
void fn_000b95c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b95c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b95cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b95d0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000b95d4:;
    {
        cpu->r[4] = rd32(0x000b95dcu + + 0x28u);
    }
L_000b95d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b95dc:;
    {
        cpu->r[14] = 0x000b95e0u; fn_000ea788(cpu);
    }
L_000b95e0:;
    {
        cpu->r[3] = rd32(0x000b95e8u + + 0x20u);
    }
L_000b95e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b95ecu, cpu->r[4], 0, 0);
    }
L_000b95e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b95ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b95f0:;
    {
        wr32(cpu->r[5] + + 0x1acu, cpu->r[2]);
    }
L_000b95f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b95f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b95fc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000b9600:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9604u)) return;
    }
}

/* _ZN8CPowerupC2Ev @ 000b960c (arm) */
void fn_000b960c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b960c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b9610:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b9614:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000b9618:;
    {
        cpu->r[4] = rd32(0x000b9620u + + 0x28u);
    }
L_000b961c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b9620:;
    {
        cpu->r[14] = 0x000b9624u; fn_000ea788(cpu);
    }
L_000b9624:;
    {
        cpu->r[3] = rd32(0x000b962cu + + 0x20u);
    }
L_000b9628:;
    {
        cpu->r[4] = add_flags(cpu, 0x000b9630u, cpu->r[4], 0, 0);
    }
L_000b962c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000b9630:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000b9634:;
    {
        wr32(cpu->r[5] + + 0x1acu, cpu->r[2]);
    }
L_000b9638:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000b963c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000b9640:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000b9644:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9648u)) return;
    }
}

/* _ZN5Scene11ReloadStepsEv @ 000b9650 (arm) */
void fn_000b9650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9650:;
    {
        cpu->r[3] = 0x000017f0u;
    }
L_000b9654:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9658:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b965c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene28GetParticlesEffectByMaterialEi @ 000b9660 (arm) */
void fn_000b9660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9660:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_000b9664:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000b9668:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b966c:;
    {
        cpu->r[3] = rd32(0x000b9674u + + 0x8u);
    }
L_000b9670:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b9678u, cpu->r[3], 0, 0);
    }
L_000b9674:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000b9678:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene18GetAssistedTurningEf @ 000b9680 (arm) */
void fn_000b9680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9680:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000b9684:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene8StartFOGEi @ 000b9688 (arm) */
void fn_000b9688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9688:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000b968c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000b9690:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9694:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000b969cu + + 0x54u);
    }
L_000b9698:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000b969c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b96a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000b96a4:;
    {
        cpu->r[1] = 0x000042b8u;
    }
L_000b96a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000b96ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000b96b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000b96b4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000b96bcu + + 0x38u);
        }
    }
L_000b96b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000b96bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000b96c0:;
    {
        cpu->r[3] = 0x000042bcu;
    }
L_000b96c4:;
    {
        cpu->r[2] = 0x000042c4u;
    }
L_000b96c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b96cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b96d0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b96d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000b96dcu + + 0x1cu);
    }
L_000b96d8:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_000b96dc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b96e0:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000b96e4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b96e8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000b96ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene7StopFOGEi @ 000b96fc (arm) */
void fn_000b96fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b96fc:;
    {
        cpu->r[12] = 0x000042bcu;
    }
L_000b9700:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b9704:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000b9708:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000b970c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9710:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b9718u + + 0x40u);
    }
L_000b9714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b9718:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b971c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000b9720:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_000b9724:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b9728:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vsub(cpu, 15, 14, 15);
        }
    }
L_000b972c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
        }
    }
L_000b9730:;
    {
        cpu->r[2] = 0x000042b8u;
    }
L_000b9734:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9738:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000b973c:;
    {
        cpu->r[3] = 0x000042c4u;
    }
L_000b9740:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9744:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_000b9748:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 15, 15, 13);
        }
    }
L_000b974c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b9750:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000b9754:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene16GetFOGPercentageEv @ 000b975c (arm) */
void fn_000b975c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b975c:;
    {
        cpu->r[3] = 0x000042c4u;
    }
L_000b9760:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b9768:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b976c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b9770:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9774:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b97cc;
        }
    }
L_000b9778:;
    {
        cpu->r[2] = 0x000042bcu;
    }
L_000b977c:;
    {
        cpu->r[3] = 0x000042b8u;
    }
L_000b9780:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9784:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9788:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_000b978c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b9790:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000b9794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b9798:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000b979c:;
    {
        vfp_sync_flags(cpu);
    }
L_000b97a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b97e0;
        }
    }
L_000b97a4:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000b97a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b97b0u + + 0x68u);
    }
L_000b97ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b97b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b97b4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000b97b8:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_000b97bc:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000b97c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b97c4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b97c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b97cc:;
    {
        cpu->r[3] = 0x000042b8u;
    }
L_000b97d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b97d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b97d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000b97dc:;
    {
        goto L_000b97a4;
    }
L_000b97e0:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000b97e4:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000b97e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b97ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000b97f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000b97f4:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000b97f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000b9800u + + 0x18u);
    }
L_000b97fc:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_000b9800:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_000b9804:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_000b9808:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_000b980c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000b9810:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000b9814:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene9UpdateFOGEv @ 000b981c (arm) */
void fn_000b981c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b981c:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000b9820:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000b9828u + + 0x9cu);
    }
L_000b9824:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9828:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000b982c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000b9830:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b9834:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9838:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b983c:;
    {
        cpu->r[1] = 0x000042bcu;
    }
L_000b9840:;
    {
        cpu->r[2] = 0x000042b8u;
    }
L_000b9844:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000b9848:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b984c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000b9850:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_000b9854:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000b9858:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_000b985c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000b9860:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b98a8;
        }
    }
L_000b9868:;
    {
        vfp_vsub(cpu, 11, 13, 15);
    }
L_000b986c:;
    {
        cpu->r[1] = 0x000042c4u;
    }
L_000b9870:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000b9874:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000b9878:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000b987c:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_000b9880:;
    {
        vfp_vabs(cpu, 12, 14);
    }
L_000b9884:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_000b9888:;
    {
        vfp_sync_flags(cpu);
    }
L_000b988c:;
    {
        if (cond_test(cpu, 11)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_000b9890:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000b9894:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[12]);
        }
    }
L_000b9898:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
        }
    }
L_000b989c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000b98a0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
        }
    }
L_000b98a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b98a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000b98ac:;
    {
        vfp_sync_flags(cpu);
    }
L_000b98b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000b98b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[12]);
        }
    }
L_000b98b8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
        }
    }
L_000b98bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[12]);
        }
    }
L_000b98c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z17GetLensFlareColorii @ 000b98c8 (arm) */
void fn_000b98c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b98c8:;
    {
        cpu->r[12] = rd32(0x000b98d0u + + 0x64u);
    }
L_000b98cc:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_000b98d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_000b98d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000b98d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b98e0u, cpu->r[12], 0, 0);
    }
L_000b98dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b98e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000b98e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000b98e8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[12] = v;
    }
L_000b98ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000b98f0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_000b98f4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b98f8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000b98fc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[12], 1, 0);
    }
L_000b9900:;
    {
        wr8(cpu->r[13] + + 0x7u, cpu->r[12]);
    }
L_000b9904:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b9908:;
    {
        cpu->r[0] = (cpu->r[2] >> 8) & 0xffu;
    }
L_000b990c:;
    {
        cpu->r[1] = (cpu->r[2] >> 16) & 0xffu;
    }
L_000b9910:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000b9914:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000b9918:;
    {
        cpu->r[3] = (cpu->r[3] & ~0xffu) | ((cpu->r[12] & 0xffu) << 0);
    }
L_000b991c:;
    {
        cpu->r[3] = (cpu->r[3] & ~0xff00u) | ((cpu->r[0] & 0xffu) << 8);
    }
L_000b9920:;
    {
        cpu->r[3] = (cpu->r[3] & ~0xff0000u) | ((cpu->r[1] & 0xffu) << 16);
    }
L_000b9924:;
    {
        cpu->r[3] = (cpu->r[3] & ~0xff000000u) | ((cpu->r[2] & 0xffu) << 24);
    }
L_000b9928:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b992c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000b9930:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene12EnableLightsEv @ 000b9938 (arm) */
void fn_000b9938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9938:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene13DisableLightsEv @ 000b993c (arm) */
void fn_000b993c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b993c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000b9940:;
    {
        cpu->r[7] = 0x00008448u;
    }
L_000b9944:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000b9948:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b994c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000b9950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b9954:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9958u)) return;
        }
    }
L_000b9958:;
    {
        cpu->r[6] = 0x00008444u;
    }
L_000b995c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000b9960:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000b9964:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000b9968:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b996c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000b9970:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000b9974:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b9978:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b997c:;
    {
        cpu->r[14] = 0x000b9984u;
    }
L_000b9980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9984u)) return;
    }
L_000b9984:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000b9988:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000b998c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b9964;
        }
    }
L_000b9990:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9994u)) return;
    }
}

/* _ZN10ObjectList21InsertObjectAtListEndEP17StaticSceneObject @ 000b9994 (arm) */
void fn_000b9994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9994:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b9998:;
    {
        wr32(cpu->r[1] + + 0x180u, cpu->r[3]);
    }
L_000b999c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000b99a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b99a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
        }
    }
L_000b99a8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[1]);
        }
    }
L_000b99ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_000b99b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x180u, cpu->r[1]);
        }
    }
L_000b99b4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
        }
    }
L_000b99b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10ObjectList23InsertObjectAtListStartEP17StaticSceneObject @ 000b99bc (arm) */
void fn_000b99bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b99bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000b99c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b99c4:;
    {
        wr32(cpu->r[1] + + 0x180u, cpu->r[3]);
    }
L_000b99c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
        }
    }
L_000b99cc:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000b99d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10ObjectList28InsertObjectInListOnPositionEP17StaticSceneObjecti @ 000b99d4 (arm) */
void fn_000b99d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b99d4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b99d8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_000b99dc:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_000b99e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000b99e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9a1c;
        }
    }
L_000b99e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000b99ec:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_000b99f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9a08;
        }
    }
L_000b99f4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b99f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b99fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x180u);
    }
L_000b9a00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000b9a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b99f8;
        }
    }
L_000b9a08:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x180u);
    }
L_000b9a0c:;
    {
        wr32(cpu->r[12] + + 0x180u, cpu->r[3]);
    }
L_000b9a10:;
    {
        wr32(cpu->r[1] + + 0x180u, cpu->r[12]);
    }
L_000b9a14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9a18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b9a1c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9a20:;
    {
        return fn_000b9994(cpu);
    }
}

/* _ZN10ObjectList20InsertObjectWithSortEP17StaticSceneObjectb @ 000b9a24 (arm) */
void fn_000b9a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9a24:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b9a28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x188u);
    }
L_000b9a2c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000b9a30:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000b9a34:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_000b9a38:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000b9a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9ad0;
        }
    }
L_000b9a40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b9a44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[4];
        }
    }
L_000b9a48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000b9a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9aac;
        }
    }
L_000b9a50:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000b9a54:;
    {
        goto L_000b9a6c;
    }
L_000b9a58:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x180u);
    }
L_000b9a5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b9a60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9a64:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b9a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9ac0;
        }
    }
L_000b9a6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x188u);
    }
L_000b9a70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b9a74:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9a78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9a58;
        }
    }
L_000b9a7c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000b9a80:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3], cpu->r[12]);
        }
    }
L_000b9a84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b9a88:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x180u, cpu->r[12]);
        }
    }
L_000b9a8c:;
    {
        wr32(cpu->r[12] + + 0x180u, cpu->r[1]);
    }
L_000b9a90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9a94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b9a98:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x180u);
    }
L_000b9a9c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000b9aa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9aa4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000b9aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9ac0;
        }
    }
L_000b9aac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x188u);
    }
L_000b9ab0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b9ab4:;
    {
        vfp_sync_flags(cpu);
    }
L_000b9ab8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000b9a98;
        }
    }
L_000b9abc:;
    {
        goto L_000b9a7c;
    }
L_000b9ac0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b9ac4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000b9ac8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9acc:;
    {
        return fn_000b9994(cpu);
    }
L_000b9ad0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9ad4:;
    {
        return fn_000b99bc(cpu);
    }
}

/* _ZN5Scene10GetNextCarEv @ 000b9ad8 (arm) */
void fn_000b9ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9ad8:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000b9adc:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000b9ae0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b9ae4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000b9ae8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9aec:;
    {
        cpu->r[0] = 0x00008d74u;
    }
L_000b9af0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000b9af4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000b9af8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b9afc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000b9b00:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000b9b04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000b9b08:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_000b9b0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000b9b10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b9b14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000b9b18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_000b9b1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_000b9b20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000b9b24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001eu, 0, 0);
    }
L_000b9b28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000b9b2c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000b9b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9b0c;
        }
    }
L_000b9b38:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000b9b3c:;
    {
        { uint32_t v = cpu->r[4] & 0x00100000u; set_nz(cpu, v); }
    }
L_000b9b40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9b0c;
        }
    }
L_000b9b44:;
    {
        cpu->r[1] = 0x00008d74u;
    }
L_000b9b48:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000b9b4c:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000b9b50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000b9b54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene28AllOpponentsHaveFinishedRaceEv @ 000b9b58 (arm) */
void fn_000b9b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9b58:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000b9b5c:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000b9b60:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b9b64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9b68:;
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
L_000b9b6c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b9b70:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9b74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000b9b78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000b9b7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9c1c;
        }
    }
L_000b9b80:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000b9b84:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000b9b88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9b8c:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000b9b90:;
    {
        cpu->r[8] = 0x00008cc0u;
    }
L_000b9b94:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000b9b98:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9b9c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000b9ba0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000b9ba4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b9ba8:;
    {
        cpu->r[7] = 0x00001820u;
    }
L_000b9bac:;
    {
        cpu->r[11] = 0x00001740u;
    }
L_000b9bb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000b9bb4:;
    {
        cpu->r[9] = 0x00001788u;
    }
L_000b9bb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000b9bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000b9bc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000b9bc4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_000b9bc8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000b9bcc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[8]);
        }
    }
L_000b9bd0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[10]);
        }
    }
L_000b9bd4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_000b9bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000b9bdc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000b9be0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b9be4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000b9be8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000b9bec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9c14;
        }
    }
L_000b9bf0:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[7]);
    }
L_000b9bf4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9c08;
        }
    }
L_000b9bfc:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000b9c00:;
    {
        { uint32_t v = cpu->r[12] & 0x00004000u; set_nz(cpu, v); }
    }
L_000b9c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9c14;
        }
    }
L_000b9c08:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_000b9c0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b9c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9c28;
        }
    }
L_000b9c14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000b9c18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9bc8;
        }
    }
L_000b9c1c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000b9c20:;
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
L_000b9c24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b9c28:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000b9c2c:;
    {
        goto L_000b9c20;
    }
}

/* _ZN5Scene19GetActiveCopsByTypeEi @ 000b9c30 (arm) */
void fn_000b9c30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9c30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b9c34:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000b9c38:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000b9c3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b9c40:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_000b9c44:;
    {
        cpu->r[6] = 0x000018c0u;
    }
L_000b9c48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000b9c4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000b9c50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00018c00u, 0, 0);
    }
L_000b9c54:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x9cu);
    }
L_000b9c58:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9c78;
        }
    }
L_000b9c60:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000b9c64:;
    {
        { uint32_t v = cpu->r[4] & 0x00100000u; set_nz(cpu, v); }
    }
L_000b9c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9c78;
        }
    }
L_000b9c6c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_000b9c70:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000b9c74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_000b9c78:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_000b9c7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9c48;
        }
    }
L_000b9c80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000b9c84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene16GetLightmapColorEii @ 000b9c88 (arm) */
void fn_000b9c88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9c88:;
    {
        cpu->r[3] = 0x00008828u;
    }
L_000b9c8c:;
    {
        cpu->r[12] = 0x00008824u;
    }
L_000b9c90:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9c94:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000b9c98:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b9c9c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9ca0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000b9ca4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000b9ca8:;
    {
        goto L_000b9cbc;
    }
L_000b9cac:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9cb0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000b9cb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_000b9cb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
        }
    }
L_000b9cbc:;
    {
        cpu->r[12] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000b9cc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000b9cc4:;
    {
        uint32_t v = cpu->r[12] & 0x0000007fu; cpu->r[0] = v;
    }
L_000b9cc8:;
    {
        uint32_t v = cpu->r[12] & 0x00000080u; cpu->r[12] = v;
    }
L_000b9ccc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000b9cd0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000b9cac;
        }
    }
L_000b9cd4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9cd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000b9cdc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
        }
    }
L_000b9ce0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[3] + + 0x1u);
        }
    }
L_000b9ce4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd8(cpu->r[1] + + 0x1u);
        }
    }
L_000b9ce8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9cec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene18StartThunderEffectEi @ 000b9cf0 (arm) */
void fn_000b9cf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9cf0:;
    {
        cpu->r[2] = 0x000042ccu;
    }
L_000b9cf4:;
    {
        cpu->r[3] = 0x000042c8u;
    }
L_000b9cf8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9cfc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9d00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b9d04:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000b9d08:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000b9d0c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000b9d10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_000b9d14:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000b9d18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene19IsRainActiveOnLevelEv @ 000b9d1c (arm) */
void fn_000b9d1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9d1c:;
    {
        cpu->r[3] = rd32(0x000b9d24u + + 0x48u);
    }
L_000b9d20:;
    {
        cpu->r[2] = 0x000042d0u;
    }
L_000b9d24:;
    {
        cpu->r[1] = rd32(0x000b9d2cu + + 0x44u);
    }
L_000b9d28:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9d2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b9d34u, cpu->r[3], 0, 0);
    }
L_000b9d30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b9d34:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000b9d38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b9d3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000b9d40:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xd8u);
    }
L_000b9d44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b9d48:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000b9d4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000b9d50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000b9d54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000b9d58:;
    {
        cpu->r[14] = 0x000b9d5cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000b9d5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_000b9d60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000b9d64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000b9d68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9d6cu)) return;
    }
}

/* _ZN5Scene19ShouldCarLightsBeOnEv @ 000b9d74 (arm) */
void fn_000b9d74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9d74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b9d78:;
    {
        cpu->r[4] = 0x00008c74u;
    }
L_000b9d7c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000b9d80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b9d84:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000b9d88:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_000b9d8c:;
    {
        cpu->r[14] = 0x000b9d90u; fn_000b9d1c(cpu);
    }
L_000b9d90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b9d94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00008000u;
        }
    }
L_000b9d98:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
        }
    }
L_000b9d9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b9da0u)) return;
    }
}

/* _ZN5Scene16InterpolateColorEjji @ 000b9da0 (arm) */
void fn_000b9da0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9da0:;
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
L_000b9da4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[5] = v;
    }
L_000b9da8:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[2], 3, 24u, &shc), cpu->r[5], 1, 0);
    }
L_000b9dac:;
    {
        uint32_t v = cpu->r[1] & 0x000000ffu; cpu->r[12] = v;
    }
L_000b9db0:;
    {
        cpu->r[4] = (cpu->r[1] >> 16) & 0xffu;
    }
L_000b9db4:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[7] = v;
    }
L_000b9db8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_000b9dbc:;
    {
        cpu->r[6] = (cpu->r[2] >> 16) & 0xffu;
    }
L_000b9dc0:;
    {
        cpu->r[1] = (cpu->r[1] >> 8) & 0xffu;
    }
L_000b9dc4:;
    {
        cpu->r[2] = (cpu->r[2] >> 8) & 0xffu;
    }
L_000b9dc8:;
    {
        cpu->r[0] = 0x0000851fu;
    }
L_000b9dcc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000b9dd0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x51ebu << 16);
    }
L_000b9dd4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_000b9dd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_000b9ddc:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 31u, &shc); cpu->r[9] = v;
    }
L_000b9de0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[7] = v;
    }
L_000b9de4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_000b9de8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_000b9dec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[8]; cpu->r[2] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000b9df0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[10] = v;
    }
L_000b9df4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[7]; cpu->r[11] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000b9df8:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000b9dfc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[6]; cpu->r[11] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_000b9e00:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 5u, &shc), cpu->r[9], 1, 0);
    }
L_000b9e04:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[3]; cpu->r[9] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_000b9e08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_000b9e0c:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[7], 1, 0);
    }
L_000b9e10:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000b9e14:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 1, 5u, &shc), cpu->r[10], 1, 0);
    }
L_000b9e18:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000ffu, 1, 1);
    }
L_000b9e1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x000000ffu;
        }
    }
L_000b9e20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000b9e24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_000b9e28:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000ffu, 1, 1);
    }
L_000b9e2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x000000ffu;
        }
    }
L_000b9e30:;
    {
        sub_flags(cpu, cpu->r[12], 0x000000ffu, 1, 1);
    }
L_000b9e34:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = 0x000000ffu;
        }
    }
L_000b9e38:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 5u, &shc), cpu->r[3], 1, 0);
    }
L_000b9e3c:;
    {
        uint32_t v = cpu->r[5] & ~ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000b9e40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000b9e44:;
    {
        uint32_t v = cpu->r[12] & ~ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000b9e48:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000b9e4c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000b9e50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x000000ffu;
        }
    }
L_000b9e54:;
    {
        uint32_t v = cpu->r[4] & ~ shifter(cpu->r[4], 1, 31u, &shc); cpu->r[4] = v;
    }
L_000b9e58:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[12] = v;
    }
L_000b9e5c:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000b9e60:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 16u, &shc); cpu->r[4] = v;
    }
L_000b9e64:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000b9e68:;
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
L_000b9e6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene21UpdateIdealTrajectoryEv @ 000b9e70 (arm) */
void fn_000b9e70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9e70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene31AddIdealTrajectoryPointsToTrailEiiiP6CTrailPj @ 000b9e74 (arm) */
void fn_000b9e74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9e74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene15RenderDebugMenuEv @ 000b9e78 (arm) */
void fn_000b9e78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9e78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene14RenderValueBarEiii @ 000b9e7c (arm) */
void fn_000b9e7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9e7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene15Message_DisableEv @ 000b9e80 (arm) */
void fn_000b9e80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9e80:;
    {
        cpu->r[2] = 0x00004290u;
    }
L_000b9e84:;
    {
        cpu->r[3] = 0x0000429cu;
    }
L_000b9e88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9e8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9e90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000b9e94:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000b9e98:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000b9e9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene14Message_UpdateEv @ 000b9ea0 (arm) */
void fn_000b9ea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9ea0:;
    {
        cpu->r[3] = 0x00004290u;
    }
L_000b9ea4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000b9ea8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000b9eac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b9eb0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b9eb4:;
    {
        cpu->r[2] = 0x0000429cu;
    }
L_000b9eb8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000b9ebc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b9ec0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b9ec4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b9ec8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000b9ecc:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000b9ed0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b9ed4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
        }
    }
L_000b9ed8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene15GetObjectByTypeEi @ 000b9edc (arm) */
void fn_000b9edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9edc:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000b9ee0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9ee4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b9ee8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9eec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9ef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9f34;
        }
    }
L_000b9ef4:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000b9ef8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9efc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9f00:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000b9f04:;
    {
        cpu->r[3] = rd16(cpu->r[0] + + 0xe8u);
    }
L_000b9f08:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000b9f0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b9f10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9f28;
        }
    }
L_000b9f14:;
    {
        goto L_000b9f38;
    }
L_000b9f18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b9f1c:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0xe8u);
    }
L_000b9f20:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000b9f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9f38;
        }
    }
L_000b9f28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b9f2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000b9f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9f18;
        }
    }
L_000b9f34:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b9f38:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9f3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene13GetObjectByIdEi @ 000b9f40 (arm) */
void fn_000b9f40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9f40:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000b9f44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9f48:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b9f4c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9f50:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000b9f54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b9fa0;
        }
    }
L_000b9f58:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000b9f5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9f60:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9f64:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000b9f68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xe8u);
    }
L_000b9f6c:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xfffu;
    }
L_000b9f70:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000b9f74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b9f78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9f94;
        }
    }
L_000b9f7c:;
    {
        goto L_000b9fa4;
    }
L_000b9f80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b9f84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xe8u);
    }
L_000b9f88:;
    {
        cpu->r[2] = (cpu->r[2] >> 16) & 0xfffu;
    }
L_000b9f8c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000b9f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b9fa4;
        }
    }
L_000b9f94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b9f98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000b9f9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b9f80;
        }
    }
L_000b9fa0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b9fa4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000b9fa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene20RenderRaceStatisticsEv @ 000b9fac (arm) */
void fn_000b9fac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9fac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene25MP_CreateUpdateCarMessageEiPh @ 000b9fb0 (arm) */
void fn_000b9fb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b9fb0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000b9fb4:;
    {
        cpu->r[12] = rd32(0x000b9fbcu + + 0x1a4u);
    }
L_000b9fb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b9fbc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000b9fc0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b9fc4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b9fccu, cpu->r[12], 0, 0);
    }
L_000b9fc8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000b9fcc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000b9fd0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00008cc0u;
        }
    }
L_000b9fd4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b9fd8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b9fdc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000b9fe0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_000b9fe4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
        }
    }
L_000b9fe8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000b9fec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000b9ff0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b9ff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000b9ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba158;
        }
    }
L_000b9ffc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ba000:;
    {
        wr8(cpu->r[2], cpu->r[0]);
    }
L_000ba004:;
    {
        cpu->r[0] = rd32(0x000ba00cu + + 0x158u);
    }
L_000ba008:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_000ba00c:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[1]);
    }
L_000ba010:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ba014:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000ba018:;
    {
        cpu->r[0] = 0x00005f58u;
    }
L_000ba01c:;
    {
        cpu->r[0] = rd8(cpu->r[12] + cpu->r[0]);
    }
L_000ba020:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ba024:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000173cu;
        }
    }
L_000ba028:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
        }
    }
L_000ba02c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 4u, &shc); cpu->r[1] = v;
        }
    }
L_000ba030:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0x1u, cpu->r[1]);
        }
    }
L_000ba034:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x88u);
    }
L_000ba038:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[1]);
    }
L_000ba03c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_000ba040:;
    {
        wr8(cpu->r[2] + + 0x3u, cpu->r[1]);
    }
L_000ba044:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000ba048:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000ba04c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000ba050:;
    {
        wr8(cpu->r[2] + + 0x7u, cpu->r[0]);
    }
L_000ba054:;
    {
        wr8(cpu->r[2] + + 0xau, cpu->r[1]);
    }
L_000ba058:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[12]);
    }
L_000ba05c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 16u, &shc); cpu->r[4] = v;
    }
L_000ba060:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 8u, &shc); cpu->r[12] = v;
    }
L_000ba064:;
    {
        wr8(cpu->r[2] + + 0x6u, cpu->r[4]);
    }
L_000ba068:;
    {
        wr8(cpu->r[2] + + 0x5u, cpu->r[12]);
    }
L_000ba06c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 16u, &shc); cpu->r[4] = v;
    }
L_000ba070:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 8u, &shc); cpu->r[12] = v;
    }
L_000ba074:;
    {
        wr8(cpu->r[2] + + 0x9u, cpu->r[4]);
    }
L_000ba078:;
    {
        wr8(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_000ba07c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 16u, &shc); cpu->r[4] = v;
    }
L_000ba080:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[12] = v;
    }
L_000ba084:;
    {
        wr8(cpu->r[2] + + 0xcu, cpu->r[4]);
    }
L_000ba088:;
    {
        wr8(cpu->r[2] + + 0xbu, cpu->r[12]);
    }
L_000ba08c:;
    {
        cpu->r[0] = 0x00001660u;
    }
L_000ba090:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x428u);
    }
L_000ba094:;
    {
        wr8(cpu->r[2] + + 0xeu, cpu->r[1]);
    }
L_000ba098:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x428u);
    }
L_000ba09c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_000ba0a0:;
    {
        wr8(cpu->r[2] + + 0xfu, cpu->r[1]);
    }
L_000ba0a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x42cu);
    }
L_000ba0a8:;
    {
        wr8(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_000ba0ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x42cu);
    }
L_000ba0b0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_000ba0b4:;
    {
        wr8(cpu->r[2] + + 0x11u, cpu->r[1]);
    }
L_000ba0b8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x430u);
    }
L_000ba0bc:;
    {
        wr8(cpu->r[2] + + 0x12u, cpu->r[1]);
    }
L_000ba0c0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x430u);
    }
L_000ba0c4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_000ba0c8:;
    {
        wr8(cpu->r[2] + + 0x13u, cpu->r[1]);
    }
L_000ba0cc:;
    {
        cpu->r[1] = 0x00001684u;
    }
L_000ba0d0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000ba0d4:;
    {
        wr8(cpu->r[2] + + 0xdu, cpu->r[1]);
    }
L_000ba0d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000ba0dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ba0e0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ba0e4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00000010u; cpu->r[1] = v;
        }
    }
L_000ba0e8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0xdu, cpu->r[1]);
        }
    }
L_000ba0ec:;
    {
        cpu->r[1] = 0x0000165cu;
    }
L_000ba0f0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ba0f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba0f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd8(cpu->r[2] + + 0xdu);
        }
    }
L_000ba0fc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00000020u; cpu->r[1] = v;
        }
    }
L_000ba100:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0xdu, cpu->r[1]);
        }
    }
L_000ba104:;
    {
        cpu->r[1] = 0x000018ecu;
    }
L_000ba108:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ba10c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba110:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd8(cpu->r[2] + + 0xdu);
        }
    }
L_000ba114:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[1] | 0x00000040u; cpu->r[1] = v;
        }
    }
L_000ba118:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[2] + + 0xdu, cpu->r[1]);
        }
    }
L_000ba11c:;
    {
        cpu->r[1] = 0x00001740u;
    }
L_000ba120:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000ba124:;
    {
        wr8(cpu->r[2] + + 0x15u, cpu->r[0]);
    }
L_000ba128:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba12c:;
    {
        wr8(cpu->r[2] + + 0x14u, cpu->r[0]);
    }
L_000ba130:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd8(cpu->r[2] + + 0xdu);
        }
    }
L_000ba134:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (~shifter(cpu->r[1], 2, 25u, &shc));
        }
    }
L_000ba138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (~shifter(cpu->r[1], 3, 25u, &shc));
        }
    }
L_000ba13c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0xdu, cpu->r[1]);
        }
    }
L_000ba140:;
    {
        cpu->r[1] = 0x0000167cu;
    }
L_000ba144:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ba148:;
    {
        wr8(cpu->r[2] + + 0x14u, cpu->r[0]);
    }
L_000ba14c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000ba150:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 8u, &shc); cpu->r[3] = v;
    }
L_000ba154:;
    {
        wr8(cpu->r[2] + + 0x15u, cpu->r[3]);
    }
L_000ba158:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000ba15c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene17MP_ClientSendDataEv @ 000ba168 (arm) */
void fn_000ba168(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba168:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ba16c:;
    {
        cpu->r[4] = rd32(0x000ba174u + + 0x98u);
    }
L_000ba170:;
    {
        cpu->r[5] = rd32(0x000ba178u + + 0x98u);
    }
L_000ba174:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000ba178:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ba180u, cpu->r[4], 0, 0);
    }
L_000ba17c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000ba180:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_000ba184:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ba188:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ba18c:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_000ba190:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000ba194:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000ba198:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000ba1b8;
        }
    }
L_000ba19c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ba1a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ba1a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ba1a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000ba1ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba208;
        }
    }
L_000ba1b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000ba1b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba1b8u)) return;
    }
L_000ba1b8:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000ba1bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ba1c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000ba1c4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ba1c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ba1cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ba1d0:;
    {
        cpu->r[14] = 0x000ba1d4u; fn_000b9fb0(cpu);
    }
L_000ba1d4:;
    {
        cpu->r[0] = rd32(0x000ba1dcu + + 0x38u);
    }
L_000ba1d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ba1dc:;
    {
        cpu->r[2] = 0x00000016u;
    }
L_000ba1e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba1e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000ba1e8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000ba1ec:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000ba1f0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ba1f4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ba1f8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba1fc:;
    {
        cpu->r[14] = 0x000ba204u;
    }
L_000ba200:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba204u)) return;
    }
L_000ba204:;
    {
        goto L_000ba19c;
    }
L_000ba208:;
    {
        cpu->r[14] = 0x000ba20cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000ba20c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[9] = v;
        set_nz(cpu, v);
        }
    }
L_000ba210:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000ba214:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
}

/* _ZN5Scene29MP_ResetQueueUpdateCarMessageEv @ 000ba218 (arm) */
void fn_000ba218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba218:;
    {
        cpu->r[3] = 0x0000a401u;
    }
L_000ba21c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ba220:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba224:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000ba228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000ba22c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ba230:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_000ba234:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_000ba238:;
    {
        wr8(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_000ba23c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ba240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba22c;
        }
    }
L_000ba244:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene19MP_UpdateSyncStatusEii @ 000ba248 (arm) */
void fn_000ba248(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba248:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ba24c:;
    {
        cpu->r[3] = 0x00008128u;
    }
L_000ba250:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000ba254:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ba258:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ba25c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000ba260:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ba264:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ba268:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ba29c;
        }
    }
L_000ba26c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ba270:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ba290;
        }
    }
L_000ba274:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ba278:;
    {
        cpu->r[3] = 0x0000812cu;
    }
L_000ba27c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ba280:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ba284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000ba288:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ba28c:;
    {
        goto L_000ba2d8;
    }
L_000ba290:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000ba294:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000ba298:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba274;
        }
    }
L_000ba29c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ba2a0:;
    {
        cpu->r[3] = 0x0000812cu;
    }
L_000ba2a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ba2a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000ba2ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba2b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ba2b4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ba2b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000007du, 1, 1);
    }
L_000ba2bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba2d8;
        }
    }
L_000ba2c0:;
    {
        cpu->r[2] = 0x00008130u;
    }
L_000ba2c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ba2c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ba2cc:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000ba2d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ba2d4:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_000ba2d8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000ba2dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene21MP_UpdateTimeLocationEP14MPTimeLocationiiiii @ 000ba2e0 (arm) */
void fn_000ba2e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba2e0:;
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
L_000ba2e4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba2e8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000ba2ec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ba2f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba360;
        }
    }
L_000ba2f4:;
    {
        cpu->r[8] = 0x00000640u;
    }
L_000ba2f8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[8] = v;
    }
L_000ba2fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_000ba300:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4b0u);
    }
L_000ba304:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000ba308:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ba360;
        }
    }
L_000ba30c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000ba310:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_000ba314:;
    {
        cpu->r[5] = 0x00000063u;
    }
L_000ba318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000490u, 0, 0);
    }
L_000ba31c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000004a0u, 0, 0);
    }
L_000ba320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000ba324:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x638u);
    }
L_000ba328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ba32c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000ba330:;
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
L_000ba334:;
    {
        wr32(cpu->r[12] + + 0x63cu, cpu->r[6]);
    }
L_000ba338:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_000ba33c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_000ba340:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000ba344:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba318;
        }
    }
L_000ba348:;
    {
        wr32(cpu->r[10] + cpu->r[8], cpu->r[9]);
    }
L_000ba34c:;
    {
        wr32(cpu->r[7] + + 0x4b0u, cpu->r[11]);
    }
L_000ba350:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ba354:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_000ba358:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ba35c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_000ba360:;
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
L_000ba364:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene28MP_CheckIfWeStillHaveClientsEv @ 000ba368 (arm) */
void fn_000ba368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba368:;
    {
        cpu->r[3] = rd32(0x000ba370u + + 0x6cu);
    }
L_000ba36c:;
    {
        cpu->r[2] = rd32(0x000ba374u + + 0x6cu);
    }
L_000ba370:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ba378u, cpu->r[3], 0, 0);
    }
L_000ba374:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ba378:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ba37c:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000ba380:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000ba384:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ba388:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ba38c:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000ba390:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ba394:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ba398:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ba39c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba3cc;
        }
    }
L_000ba3a0:;
    {
        cpu->r[1] = 0x000063e8u;
    }
L_000ba3a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba3a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ba3ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ba3b0:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0xc0u);
    }
L_000ba3b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ba3b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ba3bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba3c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_000ba3c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000ba3c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba3b0;
        }
    }
L_000ba3cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ba3d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ba3d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000ba3d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene20MP_ServerSendWeatherEiii @ 000ba3e4 (arm) */
void fn_000ba3e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba3e4:;
    {
        cpu->r[0] = rd32(0x000ba3ecu + + 0x6cu);
    }
L_000ba3e8:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000ba3ec:;
    {
        cpu->r[3] = rd32(0x000ba3f4u + + 0x68u);
    }
L_000ba3f0:;
    {
        cpu->r[0] = add_flags(cpu, 0x000ba3f8u, cpu->r[0], 0, 0);
    }
L_000ba3f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000ba3f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba3fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000ba400:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000ba404:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_000ba408:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000ba40c:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_000ba410:;
    {
        wr8(cpu->r[13] + + 0x1u, cpu->r[1]);
    }
L_000ba414:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 8u, &shc); cpu->r[1] = v;
    }
L_000ba418:;
    {
        wr8(cpu->r[13], cpu->r[3]);
    }
L_000ba41c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 8u, &shc); cpu->r[2] = v;
    }
L_000ba420:;
    {
        wr8(cpu->r[13] + + 0x3u, cpu->r[1]);
    }
L_000ba424:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000ba428:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[2]);
    }
L_000ba42c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_000ba430:;
    {
        wr8(cpu->r[13] + + 0x2u, cpu->r[14]);
    }
L_000ba434:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000ba438:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ba43c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000ba440:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ba444:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba448:;
    {
        cpu->r[14] = 0x000ba450u;
    }
L_000ba44c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba450u)) return;
    }
L_000ba450:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000ba454:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba458u)) return;
    }
}

/* _ZN5Scene19MP_ServerSendPausedEb @ 000ba460 (arm) */
void fn_000ba460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba460:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000ba464:;
    {
        cpu->r[12] = rd32(0x000ba46cu + + 0x8cu);
    }
L_000ba468:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba46c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000ba470:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba474:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ba47cu, cpu->r[12], 0, 0);
    }
L_000ba478:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ba47c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ba480:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba4d8;
        }
    }
L_000ba484:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba488:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[13] + + 0x5u, cpu->r[1]);
        }
    }
L_000ba48c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000011u;
        }
    }
L_000ba490:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
        }
    }
L_000ba494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba4d0;
        }
    }
L_000ba498:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba49c:;
    {
        cpu->r[0] = rd32(0x000ba4a4u + + 0x58u);
    }
L_000ba4a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ba4a4:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000ba4a8:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000ba4ac:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000ba4b0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ba4b4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000ba4b8:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000ba4bc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ba4c0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ba4c4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba4c8:;
    {
        cpu->r[14] = 0x000ba4d0u;
    }
L_000ba4cc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba4d0u)) return;
    }
L_000ba4d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ba4d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba4d8u)) return;
    }
L_000ba4d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ba4dc:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_000ba4e0:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000ba4e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba4e8:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000ba4ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ba4f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba49c;
        }
    }
L_000ba4f4:;
    {
        goto L_000ba498;
    }
}

/* _ZN5Scene17MP_ClientSendQuitEv @ 000ba500 (arm) */
void fn_000ba500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba500:;
    {
        cpu->r[0] = rd32(0x000ba508u + + 0x5cu);
    }
L_000ba504:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000ba508:;
    {
        cpu->r[3] = rd32(0x000ba510u + + 0x58u);
    }
L_000ba50c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000ba514u, cpu->r[0], 0, 0);
    }
L_000ba510:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000ba514:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba518:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ba51c:;
    {
        cpu->r[14] = 0x0000000bu;
    }
L_000ba520:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ba524:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba528:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000ba52c:;
    {
        cpu->r[12] = 0x000063ecu;
    }
L_000ba530:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000ba534:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ba538:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000ba53c:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[14]);
    }
L_000ba540:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[12]);
    }
L_000ba544:;
    {
        cpu->r[12] = 0x000063e8u;
    }
L_000ba548:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000ba54c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ba550:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba554:;
    {
        cpu->r[14] = 0x000ba55cu;
    }
L_000ba558:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba55cu)) return;
    }
L_000ba55c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ba560:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba564u)) return;
    }
}

/* _ZN5Scene17MP_ServerSendQuitEv @ 000ba56c (arm) */
void fn_000ba56c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba56c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000ba570:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ba574:;
    {
        cpu->r[0] = rd32(0x000ba57cu + + 0x50u);
    }
L_000ba578:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_000ba57c:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000ba580:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba584:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000ba588:;
    {
        cpu->r[0] = add_flags(cpu, 0x000ba590u, cpu->r[0], 0, 0);
    }
L_000ba58c:;
    {
        cpu->r[3] = rd32(0x000ba594u + + 0x3cu);
    }
L_000ba590:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000ba594:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000ba598:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba59c:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000ba5a0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000ba5a4:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000ba5a8:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000ba5ac:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba5b0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000ba5b4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ba5b8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ba5bc:;
    {
        cpu->r[14] = 0x000ba5c4u;
    }
L_000ba5c0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba5c4u)) return;
    }
L_000ba5c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ba5c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba5ccu)) return;
    }
}

/* _ZN5Scene22MP_QuitMultiplayerGameEv @ 000ba5d4 (arm) */
void fn_000ba5d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba5d4:;
    {
        cpu->r[3] = rd32(0x000ba5dcu + + 0x34u);
    }
L_000ba5d8:;
    {
        cpu->r[2] = rd32(0x000ba5e0u + + 0x34u);
    }
L_000ba5dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ba5e4u, cpu->r[3], 0, 0);
    }
L_000ba5e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ba5e4:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000ba5e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ba5ec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ba5f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ba5f4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ba5f8:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000ba5fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ba600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba60c;
        }
    }
L_000ba608:;
    {
        return fn_000ba500(cpu);
    }
L_000ba60c:;
    {
        return fn_000ba56c(cpu);
    }
}

/* _Z13InterpolateTofff @ 000ba618 (arm) */
void fn_000ba618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba618:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000ba61c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000ba620:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ba624:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000ba628:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba664;
        }
    }
L_000ba630:;
    {
        vfp_vsub(cpu, 12, 14, 15);
    }
L_000ba634:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_000ba638:;
    {
        vfp_vsub(cpu, 13, 14, 15);
    }
L_000ba63c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_000ba640:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba644:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ba66c;
        }
    }
L_000ba648:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000ba650u + + 0x34u);
    }
L_000ba64c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_000ba650:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba654:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ba658:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ba65c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba660:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_000ba664:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ba668:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ba66c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000ba674u + + 0x14u);
    }
L_000ba670:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_000ba674:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba678:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ba67c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ba680:;
    {
        goto L_000ba65c;
    }
}

/* _ZN5Scene16ChangeLogicalFPSEii @ 000ba68c (arm) */
void fn_000ba68c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba68c:;
    {
        cpu->r[3] = rd32(0x000ba694u + + 0x88u);
    }
L_000ba690:;
    {
        cpu->r[12] = rd32(0x000ba698u + + 0x88u);
    }
L_000ba694:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ba69cu, cpu->r[3], 0, 0);
    }
L_000ba698:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000ba69c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000ba6a0:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000ba6a4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ba6a8:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000ba6ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba6b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba714;
        }
    }
L_000ba6b4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000ba6b8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ba6bc:;
    {
        cpu->r[3] = 0x000042fcu;
    }
L_000ba6c0:;
    {
        cpu->r[12] = 0x000042f4u;
    }
L_000ba6c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba6c8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000ba6cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ba6d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ba6d4:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ba6d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ba6dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ba6e0:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[4]);
    }
L_000ba6e4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000ba6e8:;
    {
        cpu->r[1] = 0x000042f8u;
    }
L_000ba6ec:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_000ba6f0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ba6f4:;
    {
        cpu->r[3] = 0x00004300u;
    }
L_000ba6f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000ba6fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba700:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[12]);
    }
L_000ba704:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ba708:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000ba70c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ba710:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ba714:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000ba718:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene21UpdateCrashSlowMotionEv @ 000ba724 (arm) */
void fn_000ba724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba724:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_000ba728:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba72c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ba730:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba734:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ba738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba73c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba740u)) return;
        }
    }
L_000ba740:;
    {
        cpu->r[6] = 0x000042f8u;
    }
L_000ba744:;
    {
        cpu->r[3] = 0x000042fcu;
    }
L_000ba748:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000ba74c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba750:;
    {
        cpu->r[5] = 0x00004340u;
    }
L_000ba754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ba758:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000ba75c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ba760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000ba764:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ba768:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ba76c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000ba770:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ba774:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_000ba778:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba77c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba780u)) return;
        }
    }
L_000ba780:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_000ba784:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ba7f8;
        }
    }
L_000ba788:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ba78c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba794u)) return;
        }
    }
L_000ba794:;
    {
        cpu->r[3] = 0x00004340u;
    }
L_000ba798:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba79c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ba7a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000ba7a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba7a8u)) return;
        }
    }
L_000ba7a8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ba7ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ba7b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ba7b4:;
    {
        cpu->r[14] = 0x000ba7b8u; fn_000ba68c(cpu);
    }
L_000ba7b8:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_000ba7bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba7c0:;
    {
        cpu->r[1] = 0x00004340u;
    }
L_000ba7c4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000ba7c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ba7cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x490u);
    }
L_000ba7d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba7d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ba7d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x490u, cpu->r[2]);
        }
    }
L_000ba7dc:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_000ba7e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba7e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ba7e8:;
    {
        wr32(cpu->r[0] + + 0x490u, cpu->r[2]);
    }
L_000ba7ec:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000ba7f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ba7f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba7f8u)) return;
    }
L_000ba7f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ba7fc:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000ba800:;
    {
        cpu->r[14] = 0x000ba804u; fn_000ba68c(cpu);
    }
L_000ba804:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000ba808:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_000ba80c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ba810:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba814:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ba818:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba81c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba794;
        }
    }
L_000ba820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ba824u)) return;
    }
}

/* _ZN5Scene15ResetLogicalFPSEv @ 000ba824 (arm) */
void fn_000ba824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba824:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ba828:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ba82c:;
    {
        return fn_000ba68c(cpu);
    }
}

/* _ZN5Scene16UpdateLogicalFPSEv @ 000ba830 (arm) */
void fn_000ba830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba830:;
    {
        cpu->r[3] = 0x000042fcu;
    }
L_000ba834:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ba83cu + + 0xa0u);
    }
L_000ba838:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ba83c:;
    {
        cpu->r[2] = rd32(0x000ba844u + + 0x9cu);
    }
L_000ba840:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000ba844:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ba848:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ba84c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ba854u, cpu->r[2], 0, 0);
    }
L_000ba850:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba854:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ba858:;
    {
        cpu->r[12] = 0x000042f8u;
    }
L_000ba85c:;
    {
        cpu->r[1] = 0x000042f4u;
    }
L_000ba860:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000ba864:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000ba868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000ba86c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ba870:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000ba874:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_000ba878:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000ba87c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba880:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ba884:;
    {
        vfp_vsub(cpu, 11, 14, 15);
    }
L_000ba888:;
    {
        cpu->r[12] = 0x00004300u;
    }
L_000ba88c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000ba890:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000ba894:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_000ba898:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_000ba89c:;
    {
        vfp_vabs(cpu, 12, 13);
    }
L_000ba8a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_000ba8a4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ba8a8:;
    {
        if (cond_test(cpu, 11)) {
        vfp_vadd(cpu, 14, 15, 13);
        }
    }
L_000ba8ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000ba8b0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[12]);
        }
    }
L_000ba8b4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ba8b8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000ba8bc:;
    {
        cpu->r[3] = rd32(0x000ba8c4u + + 0x20u);
    }
L_000ba8c0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ba8c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ba8c8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ba8cc:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000ba8d0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ba8d4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_000ba8d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene14DbgRenderTestsEv @ 000ba8e8 (arm) */
void fn_000ba8e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba8e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene32GetCarSceneObjectBySpawnWaypointEP8WAYPOINT @ 000ba8ec (arm) */
void fn_000ba8ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba8ec:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000ba8f0:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000ba8f4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ba8f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ba8fc:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
    }
L_000ba900:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000ba904:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba908:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000ba90c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000ba910:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba988;
        }
    }
L_000ba914:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ba918:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_000ba91c:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_000ba920:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000ba924:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000ba928:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ba92c:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_000ba930:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ba934:;
    {
        goto L_000ba940;
    }
L_000ba938:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000ba93c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba988;
        }
    }
L_000ba940:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000ba944:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000ba948:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00011c00u, 0, 0);
    }
L_000ba94c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000ba950:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[8]);
        }
    }
L_000ba954:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ba958:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0xa8u);
    }
L_000ba95c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[7]);
        }
    }
L_000ba960:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
        }
    }
L_000ba964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ba968:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
        }
    }
L_000ba96c:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_000ba970:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x59cu);
    }
L_000ba974:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000ba978:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba938;
        }
    }
L_000ba97c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ba980:;
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
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[13] += 28u;
    }
L_000ba984:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ba988:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000ba98c:;
    {
        goto L_000ba97c;
    }
}

/* _ZN5Scene10IsRaceOverEv @ 000ba990 (arm) */
void fn_000ba990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ba990:;
    {
        cpu->r[3] = rd32(0x000ba998u + + 0x138u);
    }
L_000ba994:;
    {
        cpu->r[2] = rd32(0x000ba99cu + + 0x138u);
    }
L_000ba998:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ba9a0u, cpu->r[3], 0, 0);
    }
L_000ba99c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000ba9a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ba9a4:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000ba9a8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ba9ac:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000ba9b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba9c8;
        }
    }
L_000ba9b8:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000ba9bc:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000ba9c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ba9c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ba9f8;
        }
    }
L_000ba9c8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000ba9cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ba9d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ba9d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ba9d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ba9dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ba9e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ba9e4:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000ba9e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_000ba9ec:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000ba9f0:;
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
        cpu->r[8] = v4;
        cpu->r[13] += 20u;
    }
L_000ba9f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ba9f8:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000ba9fc:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000baa00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000baa04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000baa98;
        }
    }
L_000baa08:;
    {
        cpu->r[3] = 0x000063f0u;
    }
L_000baa0c:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000baa10:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000baa14:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000baa18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ba9f0;
        }
    }
L_000baa1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000baa20:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_000baa24:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000baa28:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000baa2c:;
    {
        cpu->r[6] = 0x00001cedu;
    }
L_000baa30:;
    {
        cpu->r[8] = 0x00001740u;
    }
L_000baa34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000baa38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000baa3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006700u, 0, 0);
    }
L_000baa40:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3cu);
    }
L_000baa44:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000baa48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000baa4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000baa50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000baa80;
        }
    }
L_000baa54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000baa58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000baa5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000baa60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000baa80;
        }
    }
L_000baa64:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[6]);
    }
L_000baa68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000baa6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000baa80;
        }
    }
L_000baa70:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[8]);
    }
L_000baa74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000baa78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000baa7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_000baa80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000baa84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000baa34;
        }
    }
L_000baa88:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000baa8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000baa90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000baa94:;
    {
        goto L_000ba9f0;
    }
L_000baa98:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000baa9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000baaa0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000baaa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000baaa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000baaac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000baab0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000baab4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000baab8:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000baabc:;
    {
        cpu->r[5] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000baac0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000baac4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_000baac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ba9f0;
        }
    }
L_000baacc:;
    {
        goto L_000baa08;
    }
}

/* _ZN5Scene16AddDelayedScriptEii @ 000baad8 (arm) */
void fn_000baad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000baad8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00011800u, 0, 0);
    }
L_000baadc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000baae0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000baae4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_000baae8:;
    {
        goto L_000baaf8;
    }
L_000baaec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000baaf0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000064u, 1, 1);
    }
L_000baaf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bab18;
        }
    }
L_000baaf8:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000baafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000bab00:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000bab04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000baaec;
        }
    }
L_000bab08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00002300u, 0, 0);
    }
L_000bab0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000bab10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_000bab14:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_000bab18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000bab1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene19ResetDelayedScriptsEv @ 000bab20 (arm) */
void fn_000bab20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bab20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00011800u, 0, 0);
    }
L_000bab24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bab28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_000bab2c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000bab30:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000bab34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000bab38:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000bab3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000064u, 1, 1);
    }
L_000bab40:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000bab44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000bab48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bab34;
        }
    }
L_000bab4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene10increaseNrEiii @ 000bab50 (arm) */
void fn_000bab50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bab50:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000bab54:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
        }
    }
L_000bab58:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000bab5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000babfc;
        }
    }
L_000bab60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bab64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_000bab68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000babf0;
        }
    }
L_000bab6c:;
    {
        cpu->r[12] = 0x0000a41cu;
    }
L_000bab70:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bab74:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bab78:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000bab7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bac2c;
        }
    }
L_000bab80:;
    {
        cpu->r[5] = 0x0000a424u;
    }
L_000bab84:;
    {
        cpu->r[4] = 0x0000a41cu;
    }
L_000bab88:;
    {
        cpu->r[12] = 0x0000a420u;
    }
L_000bab8c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bab90:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000bab94:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bab98:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000bab9c:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_000baba0:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[1]);
    }
L_000baba4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_000baba8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000babac:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[3];
    }
L_000babb0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
    }
L_000babb4:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_000babb8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000babbc:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_000babc0:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_000babc4:;
    {
        cpu->r[3] = 0x0000a424u;
    }
L_000babc8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000babcc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000babd0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[6]);
    }
L_000babd4:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_000babd8:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_000babdc:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_000babe0:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_000babe4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_000babe8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000babec:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000babf0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000babf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000babf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000babfc:;
    {
        cpu->r[12] = 0x0000a41cu;
    }
L_000bac00:;
    {
        cpu->r[3] = 0x0000a420u;
    }
L_000bac04:;
    {
        cpu->r[1] = 0x0000a424u;
    }
L_000bac08:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bac0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bac10:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000bac14:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000bac18:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_000bac1c:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_000bac20:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000bac24:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000bac28:;
    {
        goto L_000babf0;
    }
L_000bac2c:;
    {
        cpu->r[12] = 0x0000a420u;
    }
L_000bac30:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bac34:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bac38:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000bac3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bab80;
        }
    }
L_000bac40:;
    {
        cpu->r[4] = 0x0000a424u;
    }
L_000bac44:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000bac48:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000bac4c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bac50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000babf0;
        }
    }
L_000bac54:;
    {
        goto L_000baba8;
    }
}

/* _ZN5Scene16UpdateNearestSunEv @ 000bac58 (arm) */
void fn_000bac58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bac58:;
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
L_000bac5c:;
    {
        cpu->r[7] = 0x00008448u;
    }
L_000bac60:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bac64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bac68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bac6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bac70:;
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
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bac74u)) return;
        }
    }
L_000bac74:;
    {
        cpu->r[6] = 0x00008444u;
    }
L_000bac78:;
    {
        cpu->r[9] = 0x00004360u;
    }
L_000bac7c:;
    {
        cpu->r[10] = 0x0000435cu;
    }
L_000bac80:;
    {
        cpu->r[8] = 0x00004358u;
    }
L_000bac84:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000bac88:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000bac8c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000bac90:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000bac94:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bac98:;
    {
        goto L_000bacac;
    }
L_000bac9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000baca0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000baca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000baca8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bad18;
        }
    }
L_000bacac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bacb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000bacb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bacb8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bacbc:;
    {
        cpu->r[14] = 0x000bacc4u;
    }
L_000bacc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bacc4u)) return;
    }
L_000bacc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bacc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bac9c;
        }
    }
L_000baccc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bacd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000bacd4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bacd8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bacdc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bace0:;
    {
        cpu->r[14] = 0x000bace8u;
    }
L_000bace4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bace8u)) return;
    }
L_000bace8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000bacec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000bacf0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000bacf4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bacf8:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[3]);
    }
L_000bacfc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bad00:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[3]);
    }
L_000bad04:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bad08:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[3]);
    }
L_000bad0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bad10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bad14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bacac;
        }
    }
L_000bad18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bad1cu)) return;
    }
}

/* _ZN5Scene15EnableCarLightsEb @ 000bad1c (arm) */
void fn_000bad1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bad1c:;
    {
        cpu->r[3] = 0x0000438cu;
    }
L_000bad20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bad24:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000bad28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene14SetShadowColorEffff @ 000bad2c (arm) */
void fn_000bad2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bad2c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000bad30:;
    {
        cpu->r[12] = 0x00004384u;
    }
L_000bad34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_000bad38:;
    {
        cpu->r[6] = 0x0000437cu;
    }
L_000bad3c:;
    {
        cpu->r[4] = 0x00004380u;
    }
L_000bad40:;
    {
        cpu->r[5] = 0x00004388u;
    }
L_000bad44:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000bad48:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000bad4c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bad50:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bad54:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[1]);
    }
L_000bad58:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[2]);
    }
L_000bad5c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bad60:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_000bad64:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[1]);
    }
L_000bad68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000bad6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene7InitRTTEv @ 000bad70 (arm) */
void fn_000bad70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bad70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene15RenderToTextureEv @ 000bad74 (arm) */
void fn_000bad74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bad74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene7SetFadeEffi @ 000bad78 (arm) */
void fn_000bad78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bad78:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000bad7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000bad80:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000bad84:;
    {
        cpu->r[12] = 0x000081dcu;
    }
L_000bad88:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bad8c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000bad90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000bad94:;
    {
        vfp_sync_flags(cpu);
    }
L_000bad98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000081dcu;
        }
    }
L_000bad9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bada0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bada4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bada8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
        }
    }
L_000badac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000badb0:;
    {
        cpu->r[1] = 0x000081d8u;
    }
L_000badb4:;
    {
        cpu->r[2] = 0x000081e0u;
    }
L_000badb8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000badbc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000badc0:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_000badc4:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000badc8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000badcc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000badd0:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000badd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene24DbgAchievementsInterfaceEv @ 000badd8 (arm) */
void fn_000badd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000badd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_2 @ 000baddc (arm) */
void fn_000baddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000baddc:;
    {
        cpu->r[3] = rd32(0x000bade4u + + 0x20u);
    }
L_000bade0:;
    {
        cpu->r[1] = rd32(0x000bade8u + + 0x20u);
    }
L_000bade4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000badecu, cpu->r[3], 0, 0);
    }
L_000bade8:;
    {
        cpu->r[2] = rd32(0x000badf0u + + 0x1cu);
    }
L_000badec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000badf0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000badf8u, cpu->r[2], 0, 0);
    }
L_000badf4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000badf8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_000badfc:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000bae00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene18MP_GetEndRaceScoreEv @ 000bae10 (arm) */
void fn_000bae10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bae10:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bae14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bae18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bae1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bae20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bae24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bae28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bae2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bae30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000bae34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000bae38:;
    {
        return fn_0015d718(cpu);
    }
}

/* _ZN5Scene20MP_ClientSendEndRaceEv @ 000bae3c (arm) */
void fn_000bae3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bae3c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000bae40:;
    {
        cpu->r[3] = rd32(0x000bae48u + + 0xa8u);
    }
L_000bae44:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bae48:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bae50u, cpu->r[3], 0, 0);
    }
L_000bae4c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000bae50:;
    {
        cpu->r[2] = rd32(0x000bae58u + + 0x9cu);
    }
L_000bae54:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000bae58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bae5c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bae60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bae64:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_000bae68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bae6c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000bae70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bae74:;
    {
        cpu->r[2] = 0x000063ecu;
    }
L_000bae78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bae7c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000bae80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bae84:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x58cu);
    }
L_000bae88:;
    {
        cpu->r[3] = 0x00000017u;
    }
L_000bae8c:;
    {
        wr8(cpu->r[13] + + 0x1u, cpu->r[2]);
    }
L_000bae90:;
    {
        wr8(cpu->r[13], cpu->r[3]);
    }
L_000bae94:;
    {
        cpu->r[14] = 0x000bae98u; fn_000bae10(cpu);
    }
L_000bae98:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000bae9c:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[5]);
    }
L_000baea0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000baea4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000baea8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[1] = v;
    }
L_000baeac:;
    {
        wr8(cpu->r[13] + + 0x2u, cpu->r[0]);
    }
L_000baeb0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 8u, &shc); cpu->r[2] = v;
    }
L_000baeb4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 16u, &shc); cpu->r[3] = v;
    }
L_000baeb8:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000baebc:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[1]);
    }
L_000baec0:;
    {
        wr8(cpu->r[13] + + 0x3u, cpu->r[2]);
    }
L_000baec4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_000baec8:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000baecc:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000baed0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000baed4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000baed8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000baedc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000baee0:;
    {
        cpu->r[14] = 0x000baee8u;
    }
L_000baee4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000baee8u)) return;
    }
L_000baee8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000baeec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000baef0u)) return;
    }
}

/* _ZN5Scene9InitGhostEv @ 000baef8 (arm) */
void fn_000baef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000baef8:;
    {
        cpu->r[1] = 0x00003e78u;
    }
L_000baefc:;
    {
        cpu->r[3] = 0x00003e74u;
    }
L_000baf00:;
    {
        cpu->r[2] = 0x00003e7cu;
    }
L_000baf04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000baf08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000baf0c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000baf10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000baf14:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000baf18:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000baf1c:;
    {
        cpu->r[8] = 0x0000e100u;
    }
L_000baf20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00043000u, 0, 0);
    }
L_000baf24:;
    {
        cpu->r[12] = (~0x80000000u);
    }
L_000baf28:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000baf2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000174u, 0, 0);
    }
L_000baf30:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000baf34:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000baf38:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000baf3c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000baf40:;
    {
        cpu->r[14] = 0x000baf44u; imp_memset(cpu); /* memset */
    }
L_000baf44:;
    {
        cpu->r[7] = 0x00012c00u;
    }
L_000baf48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00051000u, 0, 0);
    }
L_000baf4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000baf50:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000baf54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000274u, 0, 0);
    }
L_000baf58:;
    {
        cpu->r[14] = 0x000baf5cu; imp_memset(cpu); /* memset */
    }
L_000baf5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00022400u, 0, 0);
    }
L_000baf60:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000baf64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000baf68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000074u, 0, 0);
    }
L_000baf6c:;
    {
        cpu->r[6] = 0x00004b00u;
    }
L_000baf70:;
    {
        cpu->r[14] = 0x000baf74u; imp_memset(cpu); /* memset */
    }
L_000baf74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00030400u, 0, 0);
    }
L_000baf78:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000baf7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000baf80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000174u, 0, 0);
    }
L_000baf84:;
    {
        cpu->r[14] = 0x000baf88u; imp_memset(cpu); /* memset */
    }
L_000baf88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001d800u, 0, 0);
    }
L_000baf8c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000baf90:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000baf94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000174u, 0, 0);
    }
L_000baf98:;
    {
        cpu->r[14] = 0x000baf9cu; imp_memset(cpu); /* memset */
    }
L_000baf9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000bafa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000274u, 0, 0);
    }
L_000bafa4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000bafa8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000bafac:;
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
L_000bafb0:;
    {
        imp_memset(cpu); /* tail memset */ return;
    }
}

/* _ZN5Scene23UpdatePlayerSkillPointsEv @ 000bafb4 (arm) */
void fn_000bafb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bafb4:;
    {
        cpu->r[2] = 0x00008d74u;
    }
L_000bafb8:;
    {
        cpu->r[3] = rd32(0x000bafc0u + + 0x38cu);
    }
L_000bafbc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bafc0:;
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
L_000bafc4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000bafc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bafd0u, cpu->r[3], 0, 0);
    }
L_000bafcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000204u, 1, 0);
    }
L_000bafd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000bafd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bafd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000bafdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000bafe0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000bafe4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bafe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb000;
        }
    }
L_000bafec:;
    {
        cpu->r[2] = 0x00001b4cu;
    }
L_000baff0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000baff4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000baff8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000baffc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb008;
        }
    }
L_000bb000:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000204u, 0, 0);
    }
L_000bb004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb008u)) return;
    }
L_000bb008:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000bb00c:;
    {
        cpu->r[6] = 0x00000400u;
    }
L_000bb010:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x8000u << 16);
    }
L_000bb014:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000bb018:;
    {
        uint32_t v = cpu->r[1] & cpu->r[6]; cpu->r[6] = v;
    }
L_000bb01c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bb020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb034;
        }
    }
L_000bb024:;
    {
        cpu->r[7] = 0x00001c44u;
    }
L_000bb028:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bb02c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bb030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb144;
        }
    }
L_000bb034:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_000bb038:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bb03c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb000;
        }
    }
L_000bb044:;
    {
        cpu->r[1] = 0x00001c78u;
    }
L_000bb048:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000bb04c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bb050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb084;
        }
    }
L_000bb054:;
    {
        cpu->r[3] = 0x00001b4cu;
    }
L_000bb058:;
    {
        cpu->r[0] = 0x00001c40u;
    }
L_000bb05c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb060:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000bb064:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000bb068:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000bb06c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000bb070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000bb074:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_000bb078:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb07c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[2]);
        }
    }
L_000bb080:;
    {
        goto L_000bb000;
    }
L_000bb084:;
    {
        cpu->r[8] = 0x00001c7cu;
    }
L_000bb088:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000bb08c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bb090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb21c;
        }
    }
L_000bb094:;
    {
        cpu->r[6] = 0x00001c48u;
    }
L_000bb098:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb09c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000bb0a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb1c0;
        }
    }
L_000bb0a4:;
    {
        cpu->r[6] = 0x00001c5cu;
    }
L_000bb0a8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb0ac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bb0b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb2cc;
        }
    }
L_000bb0b4:;
    {
        cpu->r[6] = 0x00001c50u;
    }
L_000bb0b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb0bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb0c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb000;
        }
    }
L_000bb0c4:;
    {
        cpu->r[1] = rd32(0x000bb0ccu + + 0x284u);
    }
L_000bb0c8:;
    {
        cpu->r[12] = 0x00001b4cu;
    }
L_000bb0cc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bb0d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00011800u, 0, 0);
    }
L_000bb0d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000350u, 0, 0);
    }
L_000bb0d8:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000bb0dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000bb0e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb0e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bb0e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bb0ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bb0f0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000bb0f4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000bb0f8:;
    {
        cpu->r[14] = 0x000bb0fcu; imp_memset(cpu); /* memset */
    }
L_000bb0fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bb100:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_000bb104:;
    {
        cpu->r[14] = 0x000bb108u; fn_000aeb28(cpu);
    }
L_000bb108:;
    {
        cpu->r[1] = rd32(0x000bb110u + + 0x244u);
    }
L_000bb10c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb110:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb118u, cpu->r[1], 0, 0);
    }
L_000bb114:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bb118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb11c:;
    {
        cpu->r[14] = 0x000bb120u; fn_000ae830(cpu);
    }
L_000bb120:;
    {
        cpu->r[3] = 0x00001c40u;
    }
L_000bb124:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb128:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bb12c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000bb130:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000bb134:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000bb138:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb13c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[7]);
        }
    }
L_000bb140:;
    {
        goto L_000bb000;
    }
L_000bb144:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00011800u, 0, 0);
    }
L_000bb148:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[6]);
    }
L_000bb14c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000350u, 0, 0);
    }
L_000bb150:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000bb154:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bb158:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb15c:;
    {
        cpu->r[14] = 0x000bb160u; imp_memset(cpu); /* memset */
    }
L_000bb160:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bb164:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_000bb168:;
    {
        cpu->r[14] = 0x000bb16cu; fn_000aeb28(cpu);
    }
L_000bb16c:;
    {
        cpu->r[1] = rd32(0x000bb174u + + 0x1e4u);
    }
L_000bb170:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bb174:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb17cu, cpu->r[1], 0, 0);
    }
L_000bb178:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bb17c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb180:;
    {
        cpu->r[14] = 0x000bb184u; fn_000ae830(cpu);
    }
L_000bb184:;
    {
        cpu->r[2] = 0x00001c40u;
    }
L_000bb188:;
    {
        cpu->r[3] = 0x00004220u;
    }
L_000bb18c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bb190:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bb194:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bb198:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000bb19c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_000bb1a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb1a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000bb1a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000bb1ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bb1b0:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[6]);
    }
L_000bb1b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb1b8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
        }
    }
L_000bb1bc:;
    {
        goto L_000bb000;
    }
L_000bb1c0:;
    {
        cpu->r[1] = rd32(0x000bb1c8u + + 0x188u);
    }
L_000bb1c4:;
    {
        cpu->r[12] = 0x00001b4cu;
    }
L_000bb1c8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bb1cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00011800u, 0, 0);
    }
L_000bb1d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000350u, 0, 0);
    }
L_000bb1d4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000bb1d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000bb1dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb1e0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bb1e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bb1e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bb1ec:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000bb1f0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000bb1f4:;
    {
        cpu->r[14] = 0x000bb1f8u; imp_memset(cpu); /* memset */
    }
L_000bb1f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bb1fc:;
    {
        cpu->r[0] = 0x00000027u;
    }
L_000bb200:;
    {
        cpu->r[14] = 0x000bb204u; fn_000aeb28(cpu);
    }
L_000bb204:;
    {
        cpu->r[1] = rd32(0x000bb20cu + + 0x150u);
    }
L_000bb208:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb20c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb214u, cpu->r[1], 0, 0);
    }
L_000bb210:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bb214:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bb218:;
    {
        goto L_000bb11c;
    }
L_000bb21c:;
    {
        cpu->r[2] = rd32(0x000bb224u + + 0x12cu);
    }
L_000bb220:;
    {
        cpu->r[12] = 0x00001b4cu;
    }
L_000bb224:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bb228:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00011800u, 0, 0);
    }
L_000bb22c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000350u, 0, 0);
    }
L_000bb230:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bb234:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bb238:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bb23c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000bb240:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_000bb244:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bb248:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bb24c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000bb250:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000bb254:;
    {
        cpu->r[14] = 0x000bb258u; imp_memset(cpu); /* memset */
    }
L_000bb258:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000bb25c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb260:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001640u, 0, 0);
    }
L_000bb264:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_000bb268:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb26c:;
    {
        cpu->r[14] = 0x000bb270u; fn_0015d718(cpu);
    }
L_000bb270:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000bb274:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000bb278:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000bb27c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bb280:;
    {
        cpu->r[14] = 0x000bb284u; fn_000f38e8(cpu);
    }
L_000bb284:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bb288:;
    {
        cpu->r[0] = 0x00000025u;
    }
L_000bb28c:;
    {
        cpu->r[14] = 0x000bb290u; fn_000aeb28(cpu);
    }
L_000bb290:;
    {
        cpu->r[1] = rd32(0x000bb298u + + 0xc8u);
    }
L_000bb294:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000bb298:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb2a0u, cpu->r[1], 0, 0);
    }
L_000bb29c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bb2a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bb2a4:;
    {
        cpu->r[14] = 0x000bb2a8u; fn_000ae830(cpu);
    }
L_000bb2a8:;
    {
        cpu->r[3] = 0x00001c40u;
    }
L_000bb2ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000bb2b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bb2b4:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[6]);
    }
L_000bb2b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000bb2bc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000bb2c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb2c4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
        }
    }
L_000bb2c8:;
    {
        goto L_000bb000;
    }
L_000bb2cc:;
    {
        cpu->r[1] = rd32(0x000bb2d4u + + 0x7cu);
    }
L_000bb2d0:;
    {
        cpu->r[12] = 0x00001b4cu;
    }
L_000bb2d4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bb2d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00011800u, 0, 0);
    }
L_000bb2dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000350u, 0, 0);
    }
L_000bb2e0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000bb2e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000bb2e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bb2ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bb2f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bb2f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bb2f8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000bb2fc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000bb300:;
    {
        cpu->r[14] = 0x000bb304u; imp_memset(cpu); /* memset */
    }
L_000bb304:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bb308:;
    {
        cpu->r[0] = 0x00000029u;
    }
L_000bb30c:;
    {
        cpu->r[14] = 0x000bb310u; fn_000aeb28(cpu);
    }
L_000bb310:;
    {
        cpu->r[1] = rd32(0x000bb318u + + 0x4cu);
    }
L_000bb314:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb318:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb320u, cpu->r[1], 0, 0);
    }
L_000bb31c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bb320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bb324:;
    {
        cpu->r[14] = 0x000bb328u; fn_000ae830(cpu);
    }
L_000bb328:;
    {
        cpu->r[3] = 0x00001c40u;
    }
L_000bb32c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bb330:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bb334:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[8]);
    }
L_000bb338:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000bb33c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000bb340:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb344:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
        }
    }
L_000bb348:;
    {
        goto L_000bb000;
    }
}

/* _ZN5Scene11StopCamAnimEv @ 000bb368 (arm) */
void fn_000bb368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb368:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bb36c:;
    {
        cpu->r[4] = 0x000081c0u;
    }
L_000bb370:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000bb374:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bb378:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000bb37c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bb380:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb384u)) return;
        }
    }
L_000bb384:;
    {
        cpu->r[14] = 0x000bb388u; fn_000b6954(cpu);
    }
L_000bb388:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bb38c:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_000bb390:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb394u)) return;
    }
}

/* _ZN5Scene11PlayCamAnimEib @ 000bb394 (arm) */
void fn_000bb394(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb394:;
    {
        cpu->r[3] = 0x000081bcu;
    }
L_000bb398:;
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
L_000bb39c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb3a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bb3a4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000bb3a8:;
    {
        cpu->r[0] = 0x000081c0u;
    }
L_000bb3ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bb3b0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb3b4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000bb3b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_000bb3bc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000bb3c0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_000bb3c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb410;
        }
    }
L_000bb3c8:;
    {
        cpu->r[3] = 0x00008194u;
    }
L_000bb3cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb3d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000bb3d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000bb3dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
        }
    }
L_000bb3e0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
        }
    }
L_000bb3e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb3fc;
        }
    }
L_000bb3e8:;
    {
        goto L_000bb418;
    }
L_000bb3ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x198u);
    }
L_000bb3f0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000bb3f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000bb3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb418;
        }
    }
L_000bb3fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000bb400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000bb404:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018000u, 0, 0);
    }
L_000bb408:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000bb40c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb3ec;
        }
    }
L_000bb410:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bb414:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb418u)) return;
    }
L_000bb418:;
    {
        cpu->r[5] = 0x000081c0u;
    }
L_000bb41c:;
    {
        cpu->r[11] = 0x00008c78u;
    }
L_000bb420:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000bb424:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000bb428:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bb42c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000bb430:;
    {
        cpu->r[14] = 0x000bb434u; fn_000b6954(cpu);
    }
L_000bb434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000bb438:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bb43c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb440:;
    {
        wr8(cpu->r[2] + + 0x50u, cpu->r[6]);
    }
L_000bb444:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb4e8;
        }
    }
L_000bb448:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000bb44c:;
    {
        cpu->r[8] = 0x00008cbcu;
    }
L_000bb450:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000bb454:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000bb458:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bb45c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bb460:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bb464:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000bb468:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000bb46c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000bb470:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000bb474:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000bb478:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000bb47c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bb480:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bb484:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bb488:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb48c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb4d4;
        }
    }
L_000bb490:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000bb494:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000bb498:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000bb49c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000bb4a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bb4a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bb4a8:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000bb4ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bb4b0:;
    {
        cpu->r[14] = 0x000bb4b4u; fn_0015d920(cpu);
    }
L_000bb4b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bb4b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb4d4;
        }
    }
L_000bb4bc:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_000bb4c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000bb4c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb4d4;
        }
    }
L_000bb4cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bb4d0:;
    {
        cpu->r[14] = 0x000bb4d4u; fn_00160dac(cpu);
    }
L_000bb4d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000bb4d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bb4dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000bb4e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000bb4e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bb468;
        }
    }
L_000bb4e8:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000bb4ec:;
    {
        cpu->r[6] = 0x00001bc0u;
    }
L_000bb4f0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000bb4f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bb4f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bb4fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bb500:;
    {
        cpu->r[14] = 0x000bb504u; fn_0018b5d8(cpu);
    }
L_000bb504:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000bb508:;
    {
        cpu->r[14] = 0x000bb50cu; fn_0018b950(cpu);
    }
L_000bb50c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bb510:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bb514:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bb518:;
    {
        cpu->r[14] = 0x000bb51cu; fn_0018b5d8(cpu);
    }
L_000bb51c:;
    {
        cpu->r[1] = 0x00004000u;
    }
L_000bb520:;
    {
        cpu->r[14] = 0x000bb524u; fn_0018b950(cpu);
    }
L_000bb524:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bb528:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bb52c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bb530:;
    {
        cpu->r[14] = 0x000bb534u; fn_0018b5d8(cpu);
    }
L_000bb534:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000bb538:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bb53c:;
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
L_000bb540:;
    {
        return fn_0018b950(cpu);
    }
}

/* _ZN5Scene28MP_GetQueuedUpdateCarMessageEi @ 000bb544 (arm) */
void fn_000bb544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb544:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000bb548:;
    {
        cpu->r[3] = 0x0000a408u;
    }
L_000bb54c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000bb550:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bb554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x0006a000u, 0, 0);
    }
L_000bb558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000bb55c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_000bb560:;
    {
        cpu->r[7] = rd32(0x000bb568u + + 0x170u);
    }
L_000bb564:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000bb568:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bb56c:;
    {
        cpu->r[6] = rd8(cpu->r[2] + + 0x1u);
    }
L_000bb570:;
    {
        cpu->r[7] = add_flags(cpu, 0x000bb578u, cpu->r[7], 0, 0);
    }
L_000bb574:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bb578:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000bb57c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000bb580:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000bb584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb6d0;
        }
    }
L_000bb588:;
    {
        cpu->r[1] = 0x00000b00u;
    }
L_000bb58c:;
    {
        cpu->r[12] = 0x00000016u;
    }
L_000bb590:;
    {
        cpu->r[3] = 0x00004c01u;
    }
L_000bb594:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000bb598:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4]; cpu->r[1] = v;
    }
L_000bb59c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bb5a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_000bb5a4:;
    {
        uint32_t v = cpu->r[0] & 0x0000007fu; cpu->r[0] = v;
    }
L_000bb5a8:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[0]);
    }
L_000bb5ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000bb5b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bb5b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000bb5b8:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_000bb5bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bb5c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb5f8;
        }
    }
L_000bb5c4:;
    {
        cpu->r[1] = rd32(0x000bb5ccu + + 0x110u);
    }
L_000bb5c8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bb5cc:;
    {
        cpu->r[12] = rd32(0x000bb5d4u + + 0x10cu);
    }
L_000bb5d0:;
    {
        cpu->r[14] = 0x0000399eu;
    }
L_000bb5d4:;
    {
        cpu->r[2] = rd32(0x000bb5dcu + + 0x108u);
    }
L_000bb5d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb5e0u, cpu->r[1], 0, 0);
    }
L_000bb5dc:;
    {
        cpu->r[3] = rd32(0x000bb5e4u + + 0x104u);
    }
L_000bb5e0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bb5e8u, cpu->r[12], 0, 0);
    }
L_000bb5e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bb5ecu, cpu->r[2], 0, 0);
    }
L_000bb5e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000048u, 0, 0);
    }
L_000bb5ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bb5f4u, cpu->r[3], 0, 0);
    }
L_000bb5f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bb5f4:;
    {
        cpu->r[14] = 0x000bb5f8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bb5f8:;
    {
        cpu->r[1] = 0x00000b00u;
    }
L_000bb5fc:;
    {
        cpu->r[0] = 0x00000016u;
    }
L_000bb600:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00006300u, 0, 0);
    }
L_000bb604:;
    {
        cpu->r[2] = 0x00004c15u;
    }
L_000bb608:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4]; cpu->r[1] = v;
    }
L_000bb60c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bb610:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_000bb614:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000bb618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bb61c:;
    {
        cpu->r[3] = 0x00004c14u;
    }
L_000bb620:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bb624:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000bb628:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000bb62c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000bb630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_000bb634:;
    {
        cpu->r[1] = 0x0000167cu;
    }
L_000bb638:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_000bb63c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000bb640:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000bb644:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000bb648:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000bb64c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb6b0;
        }
    }
L_000bb650:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000bb654:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000bb658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb65c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb6b0;
        }
    }
L_000bb660:;
    {
        cpu->r[3] = rd32(0x000bb668u + + 0x84u);
    }
L_000bb664:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bb668:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000bb66c:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000bb670:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000bb674:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb69c;
        }
    }
L_000bb67c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0006a000u, 0, 0);
    }
L_000bb680:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bb684:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000400u, 0, 0);
    }
L_000bb688:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x1u);
    }
L_000bb68c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000bb690:;
    {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
    }
L_000bb694:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[3]);
    }
L_000bb698:;
    {
        goto L_000bb6d0;
    }
L_000bb69c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000bb6a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bb6a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bb6a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bb6ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb67c;
        }
    }
L_000bb6b0:;
    {
        cpu->r[3] = 0x00000b00u;
    }
L_000bb6b4:;
    {
        cpu->r[0] = 0x00000016u;
    }
L_000bb6b8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[4] = v;
    }
L_000bb6bc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[4]; cpu->r[6] = v;
    }
L_000bb6c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00064000u, 0, 0);
    }
L_000bb6c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_000bb6c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000c00u, 0, 0);
    }
L_000bb6cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000bb6d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bb6d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb6d8u)) return;
    }
}

/* _ZN11StaticArrayIP8CPowerupEixEi @ 000bb6f0 (arm) */
void fn_000bb6f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb6f0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000bb6f4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bb6f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bb6fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bb700:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bb710;
        }
    }
L_000bb704:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000bb708:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000bb70c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bb744;
        }
    }
L_000bb710:;
    {
        cpu->r[1] = rd32(0x000bb718u + + 0x3cu);
    }
L_000bb714:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bb718:;
    {
        cpu->r[12] = rd32(0x000bb720u + + 0x38u);
    }
L_000bb71c:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000bb720:;
    {
        cpu->r[2] = rd32(0x000bb728u + + 0x34u);
    }
L_000bb724:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb72cu, cpu->r[1], 0, 0);
    }
L_000bb728:;
    {
        cpu->r[3] = rd32(0x000bb730u + + 0x30u);
    }
L_000bb72c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bb734u, cpu->r[12], 0, 0);
    }
L_000bb730:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bb738u, cpu->r[2], 0, 0);
    }
L_000bb734:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_000bb738:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bb740u, cpu->r[3], 0, 0);
    }
L_000bb73c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bb740:;
    {
        cpu->r[14] = 0x000bb744u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bb744:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000bb748:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000bb74c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bb750:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb754u)) return;
    }
}
