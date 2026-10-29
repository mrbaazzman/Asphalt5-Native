#include "functions.h"

/* _ZN6Sprite20PaintStretchedModuleEiiiffjii @ 000ab104 (arm) */
void fn_000ab104(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab104:;
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
L_000ab108:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000ab10c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ab110:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000ab114:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ab118:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ab11c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x6cu);
    }
L_000ab120:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000ab124:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_000ab128:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000ab12c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_000ab130:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000ab134:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x64u);
    }
L_000ab138:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_000ab13c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_000ab140:;
    {
        cpu->r[14] = 0x000ab144u; fn_0013022c(cpu);
    }
L_000ab144:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_000ab148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab290;
        }
    }
L_000ab14c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ab150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ab154:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ab158:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab15c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab160:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab164:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab168:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab16c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab174:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab178:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ab17c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab180:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab184:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab188:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab18c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab190:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab194:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab198:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab19c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab1a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab1a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab1a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab1ac:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab1b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab1b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab1b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab1bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab1c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab1c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab1c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000ab1cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab1d0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab1d4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab1d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab1dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab1e0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab1e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab1e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ab1ec:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_000ab1f0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000ab1f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_000ab1f8:;
    {
        cpu->r[1] = rd16(cpu->r[3] + cpu->r[5]);
    }
L_000ab1fc:;
    {
        cpu->r[14] = 0x000ab200u; fn_000a8da8(cpu);
    }
L_000ab200:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ab204:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000ab208:;
    {
        cpu->r[1] = rd16(cpu->r[3] + cpu->r[5]);
    }
L_000ab20c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000ab210:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_000ab214:;
    {
        cpu->r[14] = 0x000ab218u; fn_000a8da8(cpu);
    }
L_000ab218:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ab21c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ab220:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ab224:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x70u);
    }
L_000ab228:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ab22c:;
    {
        cpu->r[12] = rd16(cpu->r[12] + cpu->r[5]);
    }
L_000ab230:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_000ab234:;
    {
        cpu->r[3] = rd16(cpu->r[3] + cpu->r[5]);
    }
L_000ab238:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_000ab23c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000ab240:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000ab244:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000ab248:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000ab24c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000ab250:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000ab254:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_000ab258:;
    {
        vfp_vmul(cpu, 14, 14, 16);
    }
L_000ab25c:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_000ab260:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ab264:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ab268:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ab26c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000ab270:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000ab274:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000ab278:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ab27c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_000ab280:;
    {
        cpu->r[14] = 0x000ab284u; fn_0012fe20(cpu);
    }
L_000ab284:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000ab288:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000ab28c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ab290u)) return;
    }
L_000ab290:;
    {
        uint32_t v = cpu->r[6] & 0x00000003u; cpu->r[3] = v;
    }
L_000ab294:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000ab298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab344;
        }
    }
L_000ab29c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ab2a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ab46c;
        }
    }
L_000ab2a4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000002u; set_nz(cpu, v); }
    }
L_000ab2a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ab3d8;
        }
    }
L_000ab2ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ab2b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ab2b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ab2b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab2c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab2c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab2cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab2d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab2d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab2e0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab2e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab2ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ab2f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab2f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab2f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab2fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab304:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab308:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab30c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab310:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab314:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab318:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab31c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab320:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab324:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab328:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ab32c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab330:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab334:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab338:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab33c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab340:;
    {
        goto L_000ab1e8;
    }
L_000ab344:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ab348:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ab34c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab350:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab354:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab358:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab35c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ab364:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ab368:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab36c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab370:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab374:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab378:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab37c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab380:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab384:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab38c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab390:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab394:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab398:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab39c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab3a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab3a4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab3a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab3b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab3b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab3c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab3c4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab3c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab3d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3d4:;
    {
        goto L_000ab1e8;
    }
L_000ab3d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ab3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ab3e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ab3e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab3e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab3ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab3f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab3f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab3f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab3fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab400:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab404:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ab408:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab40c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab410:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab414:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab418:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab41c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab420:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab428:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab42c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab430:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab434:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab438:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab43c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab440:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab444:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000ab448:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab44c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab450:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab454:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab458:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab45c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab460:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab464:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab468:;
    {
        goto L_000ab1e8;
    }
L_000ab46c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ab470:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ab474:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab478:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000ab47c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab480:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab484:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ab48c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ab490:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab494:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab498:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab49c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab4a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab4ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab4b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab4c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab4d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab4d8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab4dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000ab4e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000ab4ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab4f0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab4f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab4f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ab4fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab500:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab504:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab508:;
    {
        goto L_000ab1e8;
    }
}

/* _ZN6Sprite11PaintModuleEiiiiij @ 000ab50c (arm) */
void fn_000ab50c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab50c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ab510:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_000ab514:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ab518:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ab51c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x6cu);
    }
L_000ab520:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000ab524:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_000ab528:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000ab52c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_000ab530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000ab534:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x64u);
    }
L_000ab538:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_000ab53c:;
    {
        cpu->r[14] = 0x000ab540u; fn_0013022c(cpu);
    }
L_000ab540:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_000ab544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab624;
        }
    }
L_000ab548:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab54c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab550:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab554:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab558:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab55c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab560:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab564:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab568:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab56c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab570:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab574:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab578:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab57c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab580:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab584:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab588:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab58c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab590:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab594:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab598:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab59c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab5a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab5a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab5a8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab5ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab5b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab5b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab5b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ab5bc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000ab5c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab5c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab5c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab5cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000ab5d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab5d4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab5d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ab5dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab5e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab5e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab5e8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab5ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab5f0:;
    {
        cpu->r[14] = rd16(cpu->r[0] + cpu->r[4]);
    }
L_000ab5f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ab5f8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x48u);
    }
L_000ab5fc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ab600:;
    {
        cpu->r[3] = rd16(cpu->r[3] + cpu->r[4]);
    }
L_000ab604:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000ab608:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ab60c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000ab610:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000ab614:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ab618:;
    {
        cpu->r[14] = 0x000ab61cu; fn_0012fe20(cpu);
    }
L_000ab61c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000ab620:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ab624u)) return;
    }
L_000ab624:;
    {
        uint32_t v = cpu->r[6] & 0x00000003u; cpu->r[3] = v;
    }
L_000ab628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000ab62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab780;
        }
    }
L_000ab630:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ab634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ab6e0;
        }
    }
L_000ab638:;
    {
        { uint32_t v = cpu->r[6] & 0x00000002u; set_nz(cpu, v); }
    }
L_000ab63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ab814;
        }
    }
L_000ab640:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab644:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab648:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab64c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab650:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab654:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab658:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab65c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab660:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab664:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab668:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab66c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab670:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab678:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab67c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab680:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab684:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab688:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab68c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab690:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab694:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab698:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab69c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab6a0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab6a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab6a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab6ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000ab6b0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab6b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab6b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab6bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab6c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab6c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab6c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab6cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab6d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ab6d4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000ab6d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ab6dc:;
    {
        goto L_000ab5f0;
    }
L_000ab6e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab6e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab6e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab6ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000ab6f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab6f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab6f8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab6fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab700:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab704:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab708:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab70c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab710:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab714:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab718:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab71c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab720:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab724:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab728:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab72c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab730:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab734:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab738:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab73c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab740:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab744:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab748:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab74c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab750:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab758:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab75c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000ab760:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab764:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab768:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab76c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ab770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab774:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab778:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab77c:;
    {
        goto L_000ab6d0;
    }
L_000ab780:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab784:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab788:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab78c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab790:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab798:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab79c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab7a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab7a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab7b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab7bc:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab7c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab7d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab7d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab7dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab7e0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab7e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab7ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab7f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab7f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab7fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab800:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab804:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab808:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab80c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab810:;
    {
        goto L_000ab6d0;
    }
L_000ab814:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab818:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab81c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab820:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab824:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab828:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000ab82c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab830:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab834:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab838:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab83c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab840:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab844:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab848:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab84c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab850:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab854:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab858:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab85c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000ab860:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab864:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab86c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000ab870:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab874:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab87c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab880:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab884:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab888:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab88c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab890:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000ab894:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab898:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab89c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000ab8a0:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab8a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab8a8:;
    {
        goto L_000ab6d0;
    }
}

/* _ZN6Sprite17PaintModuleSkewedEiPsj @ 000ab8ac (arm) */
void fn_000ab8ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab8ac:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ab8b0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ab8b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ab8b8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x6cu);
    }
L_000ab8bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000ab8c0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000ab8c4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000ab8c8:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x64u);
    }
L_000ab8cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_000ab8d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000ab8d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_000ab8d8:;
    {
        cpu->r[14] = 0x000ab8dcu; fn_0013022c(cpu);
    }
L_000ab8dc:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x10u);
    }
L_000ab8e0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x14u);
    }
L_000ab8e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ab8e8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_000ab8ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab8f0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ab8f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ab8f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000ab8fc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab900:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000ab904:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab908:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000ab90c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab910:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab914:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_000ab918:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab91c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000ab920:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab924:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab928:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab92c:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000ab930:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab934:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000ab938:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab93c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab940:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_000ab944:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000ab948:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000ab94c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab950:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab954:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab958:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab95c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_000ab960:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ab964:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000ab968:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab96c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000ab970:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab974:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_000ab978:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab97c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000ab980:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_000ab984:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ab988:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ab98c:;
    {
        cpu->r[14] = 0x000ab990u; fn_0012fb2c(cpu);
    }
L_000ab990:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000ab994:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ab998u)) return;
    }
}

/* _ZN6Sprite25PaintRotatedModuleAtPivotEiiiiif @ 000ab998 (arm) */
void fn_000ab998(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ab998:;
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
L_000ab99c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000ab9a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ab9a4:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[2];
    }
L_000ab9a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000ab9ac:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ab9b0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ab9b4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000ab9b8:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_000ab9bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_000ab9c0:;
    {
        cpu->r[14] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_000ab9c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000ab9c8:;
    {
        cpu->r[12] = rd16(cpu->r[12] + cpu->r[1]);
    }
L_000ab9cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000ab9d0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xe8u);
    }
L_000ab9d4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_000ab9d8:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000ab9dc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ab9e0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000ab9e4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000ab9e8:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000ab9ec:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_000ab9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000ab9f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[14];
    }
L_000ab9f8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000ab9fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xecu);
    }
L_000aba00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000aba04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_000aba08:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xf0u);
    }
L_000aba0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000aba10:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000aba14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000aba18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_000aba1c:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_000aba20:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000aba24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000aba28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000aba2c:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000aba30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aba34:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000aba38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aba3c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000aba40:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000aba44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000aba48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000aba4c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000aba50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000aba54:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aba58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aba5c:;
    {
        cpu->r[14] = 0x000aba60u; fn_00155978(cpu);
    }
L_000aba60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000aba64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000aba68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000aba6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000aba70:;
    {
        cpu->r[14] = 0x000aba74u; fn_00155978(cpu);
    }
L_000aba74:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000aba78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000aba7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000aba80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000aba84:;
    {
        cpu->r[14] = 0x000aba88u; fn_00155978(cpu);
    }
L_000aba88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000aba8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000aba90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000aba94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000aba98:;
    {
        cpu->r[14] = 0x000aba9cu; fn_00155978(cpu);
    }
L_000aba9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000abaa0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000abaa4:;
    {
        cpu->r[14] = 0x000abaa8u; fn_001565b0(cpu);
    }
L_000abaa8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000abaac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000abab0:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[11];
    }
L_000abab4:;
    {
        cpu->r[14] = 0x000abab8u; fn_001565b0(cpu);
    }
L_000abab8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ababc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000abac0:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000abac4:;
    {
        cpu->r[14] = 0x000abac8u; fn_001565b0(cpu);
    }
L_000abac8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000abacc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000abad0:;
    {
        cpu->r[14] = 0x000abad4u; fn_001565b0(cpu);
    }
L_000abad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_000abad8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000abadc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000abae0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000abae4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000abae8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000abaec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abaf0:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_000abaf4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abaf8:;
    {
        cpu->r[14] = 0x000abafcu; fn_00155978(cpu);
    }
L_000abafc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000abb00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000abb04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abb08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abb0c:;
    {
        cpu->r[14] = 0x000abb10u; fn_00155978(cpu);
    }
L_000abb10:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000abb14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000abb18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abb1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abb20:;
    {
        cpu->r[14] = 0x000abb24u; fn_00155978(cpu);
    }
L_000abb24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000abb28:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000abb2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000abb30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abb34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abb38:;
    {
        cpu->r[14] = 0x000abb3cu; fn_00155978(cpu);
    }
L_000abb3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000abb40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000abb44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000abb48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000abb4c:;
    {
        cpu->r[14] = 0x000abb50u; fn_00155978(cpu);
    }
L_000abb50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000abb54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000abb58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000abb5c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000abb60:;
    {
        cpu->r[14] = 0x000abb64u; fn_00155978(cpu);
    }
L_000abb64:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000abb68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000abb6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000abb70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000abb74:;
    {
        cpu->r[14] = 0x000abb78u; fn_00155978(cpu);
    }
L_000abb78:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000abb7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000abb80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000abb84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000abb88:;
    {
        cpu->r[14] = 0x000abb8cu; fn_00155978(cpu);
    }
L_000abb8c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x6cu);
    }
L_000abb90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000abb94:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000abb98:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x64u);
    }
L_000abb9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000abba0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_000abba4:;
    {
        cpu->r[14] = 0x000abba8u; fn_0013022c(cpu);
    }
L_000abba8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_000abbac:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000abbb0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_000abbb4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_000abbb8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000abbbc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_000abbc0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abbc4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abbc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000abbcc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abbd0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_000abbd4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abbd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abbdc:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[6]);
        cpu->r[14] = wb_tmp;
    }
L_000abbe0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000abbe4:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000abbe8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abbec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abbf0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_000abbf4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000abbf8:;
    {
        wr32(cpu->r[14], cpu->r[6]);
    }
L_000abbfc:;
    {
        wr16(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_000abc00:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abc04:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abc08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000abc0c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000abc10:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_000abc14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000abc18:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000abc1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000abc24:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abc28:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abc2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_000abc30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_000abc38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_000abc3c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000abc40:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abc44:;
    {
        wr16(cpu->r[13] + + 0x22u, cpu->r[6]);
    }
L_000abc48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abc4c:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000abc50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc54:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000abc58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_000abc5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abc60:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abc64:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000abc68:;
    {
        wr16(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000abc6c:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abc70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_000abc74:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000abc78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000abc80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_000abc88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abc8c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000abc90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abc94:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[14]);
    }
L_000abc98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_000abc9c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abca0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000abca4:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abca8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_000abcac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abcb0:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_000abcb4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abcb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000abcbc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abcc0:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[12]);
    }
L_000abcc4:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abcc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_000abccc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abcd0:;
    {
        wr16(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000abcd4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abcd8:;
    {
        wr16(cpu->r[13] + + 0x2eu, cpu->r[12]);
    }
L_000abcdc:;
    {
        cpu->r[14] = 0x000abce0u; fn_0012fb2c(cpu);
    }
L_000abce0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_000abce4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000abce8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000abcecu)) return;
    }
}

/* _ZN6Sprite18PaintRotatedModuleEiiif @ 000abcec (arm) */
void fn_000abcec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000abcec:;
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
L_000abcf0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000abcf4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_000abcf8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_000abcfc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000abd00:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000abd04:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000abd08:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_000abd0c:;
    {
        cpu->r[2] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_000abd10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000070u, 1, 0);
    }
L_000abd14:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000abd18:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000abd1c:;
    {
        cpu->r[3] = rd16(cpu->r[1] + cpu->r[3]);
    }
L_000abd20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000abd24:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000abd28:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x98u);
    }
L_000abd2c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_000abd30:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
    }
L_000abd34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000abd38:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000abd3c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[14] = v;
    }
L_000abd40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000abd44:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_000abd48:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000abd4c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000abd50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000abd54:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000abd58:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000abd5c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000abd60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000abd64:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000abd68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000abd6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000abd70:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[14];
    }
L_000abd74:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000abd78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abd7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abd80:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000abd84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000abd88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000abd8c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000abd90:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abd94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abd98:;
    {
        cpu->r[14] = 0x000abd9cu; fn_001565b0(cpu);
    }
L_000abd9c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000abda0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000abda4:;
    {
        cpu->r[14] = 0x000abda8u; fn_001565b0(cpu);
    }
L_000abda8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000abdac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000abdb0:;
    {
        cpu->r[14] = 0x000abdb4u; fn_001565b0(cpu);
    }
L_000abdb4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000abdb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000abdbc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000abdc0:;
    {
        cpu->r[14] = 0x000abdc4u; fn_001565b0(cpu);
    }
L_000abdc4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000abdc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000abdcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abdd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abdd4:;
    {
        cpu->r[14] = 0x000abdd8u; fn_00155978(cpu);
    }
L_000abdd8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000abddc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000abde0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abde4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abde8:;
    {
        cpu->r[14] = 0x000abdecu; fn_00155978(cpu);
    }
L_000abdec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000abdf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000abdf4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abdf8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abdfc:;
    {
        cpu->r[14] = 0x000abe00u; fn_00155978(cpu);
    }
L_000abe00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000abe04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000abe08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000abe0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000abe10:;
    {
        cpu->r[14] = 0x000abe14u; fn_00155978(cpu);
    }
L_000abe14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x6cu);
    }
L_000abe18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000abe1c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x64u);
    }
L_000abe20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000abe24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_000abe28:;
    {
        cpu->r[14] = 0x000abe2cu; fn_0013022c(cpu);
    }
L_000abe2c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_000abe30:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000abe34:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_000abe38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_000abe3c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000abe40:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_000abe44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe48:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000abe50:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe54:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abe58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000abe5c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abe60:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[6]);
        cpu->r[14] = wb_tmp;
    }
L_000abe64:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000abe68:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000abe6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abe70:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_000abe78:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000abe7c:;
    {
        wr32(cpu->r[14], cpu->r[6]);
    }
L_000abe80:;
    {
        wr16(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_000abe84:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe88:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abe8c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_000abe90:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x1cu);
    }
L_000abe94:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_000abe98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000abe9c:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000abea0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abea4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_000abea8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abeac:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abeb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_000abeb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abeb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8]);
    }
L_000abebc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_000abec0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000abec4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abec8:;
    {
        wr16(cpu->r[13] + + 0x22u, cpu->r[6]);
    }
L_000abecc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000abed0:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000abed4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abed8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000abedc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_000abee0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abee4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abee8:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000abeec:;
    {
        wr16(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000abef0:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abef4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_000abef8:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000abefc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abf00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_000abf04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abf08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_000abf0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000abf10:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000abf14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000abf18:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[14]);
    }
L_000abf1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_000abf20:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abf24:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x70u);
    }
L_000abf28:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abf2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_000abf30:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abf34:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_000abf38:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abf3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000abf40:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abf44:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[12]);
    }
L_000abf48:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abf4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_000abf50:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000abf54:;
    {
        wr16(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_000abf58:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000abf5c:;
    {
        wr16(cpu->r[13] + + 0x2eu, cpu->r[12]);
    }
L_000abf60:;
    {
        cpu->r[14] = 0x000abf64u; fn_0012fb2c(cpu);
    }
L_000abf64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000abf68:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000abf6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000abf70u)) return;
    }
}

/* _ZN6Sprite12PaintFModuleEiiiijiii @ 000abf70 (arm) */
void fn_000abf70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000abf70:;
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
L_000abf74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000abf78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_000abf7c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000abf80:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000abf84:;
    {
        cpu->r[2] = rd32(0x000abf8cu + + 0x1d0u);
    }
L_000abf88:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000abf8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000abf90:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[1]);
    }
L_000abf94:;
    {
        cpu->r[2] = add_flags(cpu, 0x000abf9cu, cpu->r[2], 0, 0);
    }
L_000abf98:;
    {
        cpu->r[1] = rd32(0x000abfa0u + + 0x1c0u);
    }
L_000abf9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000abfa0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_000abfa4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000abfa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_000abfac:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000abfb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000abfb4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000abfb8:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000abfbc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[7] = v;
    }
L_000abfc0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000abfc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000abfc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000abfcc:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x5u);
    }
L_000abfd0:;
    {
        cpu->r[14] = 0x000abfd4u; fn_000962d0(cpu);
    }
L_000abfd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000abfd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac150;
        }
    }
L_000abfdc:;
    {
        uint32_t v = cpu->r[6] & 0x000000c0u; cpu->r[8] = v;
    }
L_000abfe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000abfe4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000abfe8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000009u, 1, 1);
    }
L_000abfec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ac110;
        }
    }
L_000abff0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000abff4:;
    {
        uint32_t v = cpu->r[4] & 0x00000004u; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_000abff8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000abffc:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x2u);
    }
L_000ac000:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x4u);
    }
L_000ac004:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x3u);
    }
L_000ac008:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x1u);
    }
L_000ac00c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000ac010:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000ac014:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000ac018:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000ac01c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac09c;
        }
    }
L_000ac020:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_000ac024:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
        }
    }
L_000ac028:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
        }
    }
L_000ac02c:;
    {
        uint32_t v = cpu->r[4] & 0x00000002u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_000ac030:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
        }
    }
L_000ac034:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
        }
    }
L_000ac038:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac03c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac0bc;
        }
    }
L_000ac040:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ac044:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac0e4;
        }
    }
L_000ac048:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000ac04c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000ac050:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
        }
    }
L_000ac054:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
        }
    }
L_000ac058:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_000ac05c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ac060:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000ac064:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
        }
    }
L_000ac068:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[1]);
        }
    }
L_000ac06c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_000ac070:;
    {
        uint32_t v = cpu->r[6] & 0x0000000fu; cpu->r[6] = v;
    }
L_000ac074:;
    {
        cpu->r[12] = 0x00007fffu;
    }
L_000ac078:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[4]; cpu->r[6] = v;
    }
L_000ac07c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac080:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ac084:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_000ac088:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_000ac08c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_000ac090:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ac094:;
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
L_000ac098:;
    {
        return fn_000ab50c(cpu);
    }
L_000ac09c:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_000ac0a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
        }
    }
L_000ac0a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
        }
    }
L_000ac0a8:;
    {
        uint32_t v = cpu->r[4] & 0x00000002u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_000ac0ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
        }
    }
L_000ac0b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
        }
    }
L_000ac0b4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac040;
        }
    }
L_000ac0bc:;
    {
        uint32_t v = cpu->r[6] & 0x0000000fu; cpu->r[6] = v;
    }
L_000ac0c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000ac0c4:;
    {
        uint32_t v = cpu->r[6] ^ cpu->r[4]; cpu->r[6] = v;
    }
L_000ac0c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac0cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ac0d0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_000ac0d4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_000ac0d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ac0dc:;
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
L_000ac0e0:;
    {
        return fn_000ad8a0(cpu);
    }
L_000ac0e4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000ac0e8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000ac0ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
        }
    }
L_000ac0f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[1]);
        }
    }
L_000ac0f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_000ac0f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ac0fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
        }
    }
L_000ac100:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000ac104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[1]);
        }
    }
L_000ac108:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_000ac10c:;
    {
        goto L_000ac070;
    }
L_000ac110:;
    {
        cpu->r[14] = rd32(0x000ac118u + + 0x4cu);
    }
L_000ac114:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ac118:;
    {
        cpu->r[1] = rd32(0x000ac120u + + 0x48u);
    }
L_000ac11c:;
    {
        cpu->r[12] = 0x000013b4u;
    }
L_000ac120:;
    {
        cpu->r[2] = rd32(0x000ac128u + + 0x44u);
    }
L_000ac124:;
    {
        cpu->r[14] = add_flags(cpu, 0x000ac12cu, cpu->r[14], 0, 0);
    }
L_000ac128:;
    {
        cpu->r[3] = rd32(0x000ac130u + + 0x40u);
    }
L_000ac12c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000700u, 1, 0);
    }
L_000ac130:;
    {
        cpu->r[1] = add_flags(cpu, 0x000ac138u, cpu->r[1], 0, 0);
    }
L_000ac134:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ac13cu, cpu->r[2], 0, 0);
    }
L_000ac138:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ac140u, cpu->r[3], 0, 0);
    }
L_000ac13c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ac140:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], 0x00000008u, 1, 0);
    }
L_000ac144:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ac148:;
    {
        cpu->r[14] = 0x000ac14cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ac14c:;
    {
        goto L_000abff0;
    }
L_000ac150:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000400u, 1, 1);
    }
L_000ac154:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000abfdc;
        }
    }
L_000ac158:;
    {
        goto L_000abfe8;
    }
}

/* _ZN6Sprite13DrawSubStringEPKtiiiiij @ 000ac174 (arm) */
void fn_000ac174(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ac174:;
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
L_000ac178:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000ac17c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ac180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000ac184:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000ac188:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ac18c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x70u);
    }
L_000ac190:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000ac194:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x68u);
    }
L_000ac198:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ac19c:;
    {
        cpu->r[12] = rd32(0x000ac1a4u + + 0x30cu);
    }
L_000ac1a0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000ac1a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000ac1a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000ac1ac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000ac1b0:;
    {
        cpu->r[14] = 0x000ac1b4u; fn_000aa0c0(cpu);
    }
L_000ac1b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac1b8:;
    {
        { uint32_t v = cpu->r[4] & 0x00000033u; set_nz(cpu, v); }
    }
L_000ac1bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ac1c4u, cpu->r[2], 0, 0);
    }
L_000ac1c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000ac1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac1f4;
        }
    }
L_000ac1c8:;
    {
        { uint32_t v = cpu->r[4] & 0x00000002u; set_nz(cpu, v); }
    }
L_000ac1cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac42c;
        }
    }
L_000ac1d0:;
    {
        { uint32_t v = cpu->r[4] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ac1d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_000ac1d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000ac1dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac1e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
        }
    }
L_000ac1e4:;
    {
        { uint32_t v = cpu->r[4] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac1e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac444;
        }
    }
L_000ac1ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ac1f0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000ac1f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000ac1f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000ac1fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac2bc;
        }
    }
L_000ac200:;
    {
        cpu->r[12] = rd32(0x000ac208u + + 0x2acu);
    }
L_000ac204:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000ac208:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac20c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000ac210:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000ac214:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_000ac218:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ac21c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000ac220:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000ac224:;
    {
        cpu->r[3] = rd32(0x000ac22cu + + 0x28cu);
    }
L_000ac228:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000ac22c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ac234u, cpu->r[3], 0, 0);
    }
L_000ac230:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000ac234:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ac238:;
    {
        cpu->r[14] = 0x000ac23cu; fn_000962d0(cpu);
    }
L_000ac23c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000ac240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac2c8;
        }
    }
L_000ac244:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ac248:;
    {
        cpu->r[14] = 0x000ac24cu; fn_000962d0(cpu);
    }
L_000ac24c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000ac250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac2c8;
        }
    }
L_000ac254:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000ac258:;
    {
        cpu->r[14] = 0x000ac25cu; fn_000962d0(cpu);
    }
L_000ac25c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000ac260:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd8(cpu->r[6] + - 0x2u);
        }
    }
L_000ac264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac2c8;
        }
    }
L_000ac268:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005eu, 1, 1);
    }
L_000ac26c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000002du;
        }
    }
L_000ac270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac2e4;
        }
    }
L_000ac274:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ac278:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ac27c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ac280:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ac284:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000ac288:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ac2d0;
        }
    }
L_000ac28c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac290:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_000ac294:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x48u);
        }
    }
L_000ac298:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000ac29c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
        }
    }
L_000ac2a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[1] + - 0x6f8u);
        }
    }
L_000ac2a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[2]);
        }
    }
L_000ac2a8:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_000ac2ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ac2b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_000ac2b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_000ac2b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac234;
        }
    }
L_000ac2bc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ac2c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000ac2c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ac2c8u)) return;
    }
L_000ac2c8:;
    {
        cpu->r[1] = rd16(cpu->r[6] + - 0x2u);
    }
L_000ac2cc:;
    {
        goto L_000ac268;
    }
L_000ac2d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007eu, 1, 1);
    }
L_000ac2d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac3dc;
        }
    }
L_000ac2d8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x5cu);
    }
L_000ac2dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac2ac;
        }
    }
L_000ac2e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac2e8:;
    {
        cpu->r[14] = 0x000ac2ecu; fn_000a96d4(cpu);
    }
L_000ac2ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000ac2f0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ac2f4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ac2f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac454;
        }
    }
L_000ac2fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x30u);
    }
L_000ac300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_000ac304:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ac308:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac30c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000ac310:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000ac314:;
    {
        cpu->r[0] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000ac318:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000ac31c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5u);
    }
L_000ac320:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000ac324:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000ac328:;
    {
        cpu->r[14] = 0x000ac32cu; fn_000962d0(cpu);
    }
L_000ac32c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000ac330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac468;
        }
    }
L_000ac334:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ac338:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac33c:;
    {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[3] = v;
    }
L_000ac340:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000ac344:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_000ac348:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ac34c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ac350:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac354:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ac358:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_000ac35c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_000ac360:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
        }
    }
L_000ac364:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ac368:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000ac36c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_000ac370:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000ac374:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ac378:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
        }
    }
L_000ac37c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_000ac380:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ac384:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000ac388:;
    {
        cpu->r[14] = 0x000ac38cu; fn_000abf70(cpu);
    }
L_000ac38c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac390:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ac394:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ac398:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ac39c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac3a0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_000ac3a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000ac3a8:;
    {
        cpu->r[14] = 0x000ac3acu; fn_000a88e0(cpu);
    }
L_000ac3ac:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ac3b0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ac3b4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ac3b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac3bc:;
    {
        cpu->r[14] = 0x000ac3c0u; fn_000a88e0(cpu);
    }
L_000ac3c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x58u);
    }
L_000ac3c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ac3c8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_000ac3cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_000ac3d0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_000ac3d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000ac3d8:;
    {
        goto L_000ac2ac;
    }
L_000ac3dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000007cu, 1, 1);
    }
L_000ac3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac2d8;
        }
    }
L_000ac3e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005cu, 1, 1);
    }
L_000ac3e8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
        }
    }
L_000ac3ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ac3f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ac3f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ac2e4;
        }
    }
L_000ac3f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000ac3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac47c;
        }
    }
L_000ac400:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000ac404:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac2ac;
        }
    }
L_000ac408:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ac40c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_000ac410:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ac414:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000ac418:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ac41c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ac420:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ac424:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000ac428:;
    {
        goto L_000ac2ac;
    }
L_000ac42c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ac430:;
    {
        { uint32_t v = cpu->r[4] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac434:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ac438:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000ac43c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000ac440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac1ec;
        }
    }
L_000ac444:;
    {
        { uint32_t v = cpu->r[4] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac448:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
        }
    }
L_000ac44c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac450:;
    {
        goto L_000ac1f4;
    }
L_000ac454:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac458:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ac45c:;
    {
        cpu->r[14] = 0x000ac460u; fn_000a8750(cpu);
    }
L_000ac460:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ac464:;
    {
        goto L_000ac2fc;
    }
L_000ac468:;
    {
        cpu->r[2] = 0x000003ffu;
    }
L_000ac46c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000ac470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ac334;
        }
    }
L_000ac474:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ac478:;
    {
        goto L_000ac344;
    }
L_000ac47c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000ac480:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_000ac484:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac2ac;
        }
    }
L_000ac488:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ac48c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000ac490:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac494:;
    {
        cpu->r[9] = rd8(cpu->r[3]);
    }
L_000ac498:;
    {
        cpu->r[14] = 0x000ac49cu; fn_000a88e0(cpu);
    }
L_000ac49c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_000ac4a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000ac4a4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000ac4a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_000ac4ac:;
    {
        goto L_000ac2ac;
    }
}

/* _ZN6Sprite8DrawWrapEPtPsiiiiij @ 000ac4bc (arm) */
void fn_000ac4bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ac4bc:;
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
L_000ac4c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ac4c4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ac4c8:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000ac4cc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000ac4d0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000ac4d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ac4d8:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x48u);
    }
L_000ac4dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000ac4e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000ac4e4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_000ac4e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_000ac4ec:;
    {
        cpu->r[12] = rd16(cpu->r[3]);
    }
L_000ac4f0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_000ac4f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_000ac4f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ac638;
        }
    }
L_000ac4fc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ac500:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000ac504:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x54u);
    }
L_000ac508:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac50c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ac510:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000ac514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac640;
        }
    }
L_000ac518:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac51c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_000ac520:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[12] = v;
        }
    }
L_000ac524:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
        }
    }
L_000ac528:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac52c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000ac530:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000ac534:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000ac538:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_000ac53c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac62c;
        }
    }
L_000ac540:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ac544:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[12] = v;
    }
L_000ac548:;
    {
        uint32_t v = cpu->r[3] & 0x00000033u; cpu->r[1] = v;
    }
L_000ac54c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000ac550:;
    {
        uint32_t v = cpu->r[3] & 0x00000002u; cpu->r[3] = v;
    }
L_000ac554:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000ac558:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000ac55c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000ac560:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_000ac564:;
    {
        goto L_000ac5c8;
    }
L_000ac568:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac648;
        }
    }
L_000ac574:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000ac578:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000ac57c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac580:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000ac584:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000ac588:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000ac58c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ac590:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000ac594:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ac598:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ac59c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_000ac5a0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x68u);
    }
L_000ac5a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ac5a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ac5ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000ac5b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000ac5b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000ac5b8:;
    {
        cpu->r[14] = 0x000ac5bcu; fn_000ac174(cpu);
    }
L_000ac5bc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ac5c0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_000ac5c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ac624;
        }
    }
L_000ac5c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000ac5cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ac5d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac5d4:;
    {
        cpu->r[7] = rd16(cpu->r[5] + - 0x2u);
    }
L_000ac5d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000ac5dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd16(cpu->r[5] + - 0x6u);
        }
    }
L_000ac5e0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 20u, &shc); cpu->r[7] = v;
    }
L_000ac5e4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 2, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000ac5e8:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 20u, &shc); cpu->r[7] = v;
    }
L_000ac5ec:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 3, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000ac5f0:;
    {
        cpu->r[14] = 0x000ac5f4u; fn_000ae12c(cpu);
    }
L_000ac5f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000ac5f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac60c;
        }
    }
L_000ac5fc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ac600:;
    {
        cpu->r[3] = rd16(cpu->r[10] + cpu->r[3]);
    }
L_000ac604:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ac608:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000ac60c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ac610:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ac614:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac568;
        }
    }
L_000ac618:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000ac61c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac620:;
    {
        goto L_000ac584;
    }
L_000ac624:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x48u);
    }
L_000ac628:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_000ac62c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ac630:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[3]);
    }
L_000ac634:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[1]);
    }
L_000ac638:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000ac63c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ac640u)) return;
    }
L_000ac640:;
    {
        uint32_t v = cpu->r[8] - cpu->r[12] * cpu->r[0]; cpu->r[8] = v;
    }
L_000ac644:;
    {
        goto L_000ac52c;
    }
L_000ac648:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ac64c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ac650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac618;
        }
    }
L_000ac654:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000ac658:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000ac65c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac660:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
    }
L_000ac664:;
    {
        goto L_000ac584;
    }
}

/* _ZN6Sprite13DrawSubStringEPKciiiiij @ 000ac668 (arm) */
void fn_000ac668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ac668:;
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
L_000ac66c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ac670:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000ac674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000ac678:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000ac67c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ac680:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x60u);
    }
L_000ac684:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000ac688:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x58u);
    }
L_000ac68c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000ac690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000ac694:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000ac698:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000ac69c:;
    {
        cpu->r[14] = 0x000ac6a0u; fn_000aadd4(cpu);
    }
L_000ac6a0:;
    {
        { uint32_t v = cpu->r[4] & 0x00000033u; set_nz(cpu, v); }
    }
L_000ac6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac6d4;
        }
    }
L_000ac6a8:;
    {
        { uint32_t v = cpu->r[4] & 0x00000002u; set_nz(cpu, v); }
    }
L_000ac6ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac884;
        }
    }
L_000ac6b0:;
    {
        { uint32_t v = cpu->r[4] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ac6b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_000ac6b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_000ac6bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac6c0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
        }
    }
L_000ac6c4:;
    {
        { uint32_t v = cpu->r[4] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac89c;
        }
    }
L_000ac6cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ac6d0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_000ac6d4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_000ac6d8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac7a4;
        }
    }
L_000ac6dc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ac6e0:;
    {
        cpu->r[2] = 0x00006500u;
    }
L_000ac6e4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_000ac6e8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfffdu << 16);
    }
L_000ac6ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_000ac6f0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000ac6f4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac6f8:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000ac6fc:;
    {
        goto L_000ac740;
    }
L_000ac700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac878;
        }
    }
L_000ac708:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x6cu);
    }
L_000ac70c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000ac710:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ac714:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ac718:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 1);
    }
L_000ac71c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ac720:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac724:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
        }
    }
L_000ac728:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_000ac72c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
        }
    }
L_000ac730:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x48u, cpu->r[12]);
        }
    }
L_000ac734:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ac738:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000ac73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac7a4;
        }
    }
L_000ac740:;
    {
        cpu->r[1] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_000ac744:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ac748:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ac74c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ac750:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ac754:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000ac758:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ac700;
        }
    }
L_000ac75c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005cu, 1, 1);
    }
L_000ac760:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
        }
    }
L_000ac764:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ac768:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ac76c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ac7b0;
        }
    }
L_000ac770:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000ac774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ac8ac;
        }
    }
L_000ac778:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000ac77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac734;
        }
    }
L_000ac780:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000ac784:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ac788:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_000ac78c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000ac790:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac794:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000ac798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ac79c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000ac7a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac740;
        }
    }
L_000ac7a4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ac7a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000ac7ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ac7b0u)) return;
    }
L_000ac7b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac7b4:;
    {
        cpu->r[14] = 0x000ac7b8u; fn_000a8750(cpu);
    }
L_000ac7b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2cu);
    }
L_000ac7bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ac7c0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000ac7c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ac8d4;
        }
    }
L_000ac7c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_000ac7cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_000ac7d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_000ac7d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000ac7d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_000ac7dc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000ac7e0:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x5u);
    }
L_000ac7e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac7e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000ac7ec:;
    {
        uint32_t v = cpu->r[12] & 0x000000c0u; cpu->r[12] = v;
    }
L_000ac7f0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000ac7f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000ac7f8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000ac7fc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ac800:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000ac804:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ac808:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000ac80c:;
    {
        sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 1u, &shc), 1, 1);
    }
L_000ac810:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ac814:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_000ac818:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ac81c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[10];
        }
    }
L_000ac820:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000ac824:;
    {
        cpu->r[14] = 0x000ac828u; fn_000abf70(cpu);
    }
L_000ac828:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac82c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ac830:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ac834:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ac838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac83c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_000ac840:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ac844:;
    {
        cpu->r[14] = 0x000ac848u; fn_000a88e0(cpu);
    }
L_000ac848:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ac84c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ac850:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000ac854:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac858:;
    {
        cpu->r[14] = 0x000ac85cu; fn_000a88e0(cpu);
    }
L_000ac85c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x58u);
    }
L_000ac860:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac864:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_000ac868:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_000ac86c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_000ac870:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000ac874:;
    {
        goto L_000ac734;
    }
L_000ac878:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_000ac87c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_000ac880:;
    {
        goto L_000ac734;
    }
L_000ac884:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac888:;
    {
        { uint32_t v = cpu->r[4] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac88c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ac890:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000ac894:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000ac898:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac6cc;
        }
    }
L_000ac89c:;
    {
        { uint32_t v = cpu->r[4] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac8a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_000ac8a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac8a8:;
    {
        goto L_000ac6d4;
    }
L_000ac8ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_000ac8b0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000ac8b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac8b8:;
    {
        cpu->r[10] = rd8(cpu->r[3]);
    }
L_000ac8bc:;
    {
        cpu->r[14] = 0x000ac8c0u; fn_000a88e0(cpu);
    }
L_000ac8c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_000ac8c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000ac8c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000ac8cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_000ac8d0:;
    {
        goto L_000ac734;
    }
L_000ac8d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ac8d8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ac8dc:;
    {
        cpu->r[14] = 0x000ac8e0u; fn_000a8750(cpu);
    }
L_000ac8e0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000ac8e4:;
    {
        goto L_000ac7c8;
    }
}

/* _ZN6Sprite8DrawWrapEPcPsiiiiij @ 000ac8e8 (arm) */
void fn_000ac8e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ac8e8:;
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
L_000ac8ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000ac8f0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ac8f4:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000ac8f8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000ac8fc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000ac900:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ac904:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x48u);
    }
L_000ac908:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000ac90c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000ac910:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_000ac914:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_000ac918:;
    {
        cpu->r[12] = rd16(cpu->r[3]);
    }
L_000ac91c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_000ac920:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_000ac924:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aca68;
        }
    }
L_000ac928:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ac92c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000ac930:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x54u);
    }
L_000ac934:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ac938:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000ac93c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000ac940:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aca70;
        }
    }
L_000ac944:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ac948:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_000ac94c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[12] = v;
        }
    }
L_000ac950:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
        }
    }
L_000ac954:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 1u, &shc), 1, 0);
        }
    }
L_000ac958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_000ac95c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000ac960:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000ac964:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_000ac968:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000aca5c;
        }
    }
L_000ac96c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ac970:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[12] = v;
    }
L_000ac974:;
    {
        uint32_t v = cpu->r[3] & 0x00000033u; cpu->r[1] = v;
    }
L_000ac978:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000ac97c:;
    {
        uint32_t v = cpu->r[3] & 0x00000002u; cpu->r[3] = v;
    }
L_000ac980:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000ac984:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000ac988:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000ac98c:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_000ac990:;
    {
        goto L_000ac9f4;
    }
L_000ac994:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ac998:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ac99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aca78;
        }
    }
L_000ac9a0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000ac9a4:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000ac9a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ac9ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000ac9b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000ac9b4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000ac9b8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ac9bc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000ac9c0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ac9c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ac9c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_000ac9cc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x68u);
    }
L_000ac9d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ac9d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ac9d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000ac9dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000ac9e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000ac9e4:;
    {
        cpu->r[14] = 0x000ac9e8u; fn_000ac668(cpu);
    }
L_000ac9e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ac9ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_000ac9f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aca54;
        }
    }
L_000ac9f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000ac9f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000ac9fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aca00:;
    {
        cpu->r[7] = rd16(cpu->r[5] + - 0x2u);
    }
L_000aca04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_000aca08:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd16(cpu->r[5] + - 0x6u);
        }
    }
L_000aca0c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[9];
        }
    }
L_000aca10:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 20u, &shc); cpu->r[7] = v;
    }
L_000aca14:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 2, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000aca18:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 20u, &shc); cpu->r[7] = v;
    }
L_000aca1c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 3, 20u, &shc); cpu->r[4] = v;
        }
    }
L_000aca20:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = cpu->r[4];
        }
    }
L_000aca24:;
    {
        cpu->r[14] = 0x000aca28u; imp_strlen(cpu); /* strlen */
    }
L_000aca28:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_000aca2c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000aca3c;
        }
    }
L_000aca30:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[9]);
    }
L_000aca34:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000aca38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000aca3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000aca40:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000aca44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ac994;
        }
    }
L_000aca48:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000aca4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aca50:;
    {
        goto L_000ac9b0;
    }
L_000aca54:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x48u);
    }
L_000aca58:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_000aca5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000aca60:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[3]);
    }
L_000aca64:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[1]);
    }
L_000aca68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000aca6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aca70u)) return;
    }
L_000aca70:;
    {
        uint32_t v = cpu->r[8] - cpu->r[12] * cpu->r[0]; cpu->r[8] = v;
    }
L_000aca74:;
    {
        goto L_000ac958;
    }
L_000aca78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000aca7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000aca80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aca48;
        }
    }
L_000aca84:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000aca88:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_000aca8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000aca90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
    }
L_000aca94:;
    {
        goto L_000ac9b0;
    }
}

/* _ZN6Sprite15DrawWrappedPageEPciiii @ 000aca98 (arm) */
void fn_000aca98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aca98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000aca9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000068u, 1, 0);
    }
L_000acaa0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000acaa4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000acaa8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000acaac:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000acab0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_000acab4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000acab8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000acabc:;
    {
        cpu->r[14] = 0x000acac0u; fn_000aa81c(cpu);
    }
L_000acac0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_000acac4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000acac8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000acacc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000acad0:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000acad4:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000acad8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000acadc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000acae0:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000acae4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000acae8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000acaec:;
    {
        cpu->r[14] = 0x000acaf0u; fn_000ac8e8(cpu);
    }
L_000acaf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000acaf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000acaf8u)) return;
    }
}

/* _ZN6Sprite10DrawStringEPKtiiiiij @ 000acaf8 (arm) */
void fn_000acaf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000acaf8:;
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
L_000acafc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000acb00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000acb04:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000acb08:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000acb0c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000acb10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_000acb14:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000acb18:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_000acb1c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_000acb20:;
    {
        cpu->r[14] = 0x000acb24u; fn_000ae12c(cpu);
    }
L_000acb24:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x84u);
    }
L_000acb28:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x88u);
    }
L_000acb2c:;
    {
        uint32_t v = cpu->r[5] & ~ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000acb30:;
    {
        cpu->r[3] = rd32(0x000acb38u + + 0x4f0u);
    }
L_000acb34:;
    {
        uint32_t v = cpu->r[7] & ~ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000acb38:;
    {
        cpu->r[3] = add_flags(cpu, 0x000acb40u, cpu->r[3], 0, 0);
    }
L_000acb3c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000acb40:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000acb44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000acb48:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000acb4c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000acb50:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000acb54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[7];
        }
    }
L_000acb58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[5];
        }
    }
L_000acb5c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000acb60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000acf3c;
        }
    }
L_000acb64:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000acb68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000acb6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000acb70:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000acb74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acb78:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000acb7c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000acb80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000acb84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000acb88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000acb8c:;
    {
        cpu->r[14] = 0x000acb90u; fn_000aa0c0(cpu);
    }
L_000acb90:;
    {
        uint32_t v = cpu->r[8] & 0x00000033u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000acb94:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000acb98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acf10;
        }
    }
L_000acb9c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000acba0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_000acba4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000acba8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000acda4;
        }
    }
L_000acbac:;
    {
        cpu->r[3] = 0x00006500u;
    }
L_000acbb0:;
    {
        cpu->r[12] = rd32(0x000acbb8u + + 0x474u);
    }
L_000acbb4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xfffdu << 16);
    }
L_000acbb8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000acbbc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000acbc0:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[2] = v;
    }
L_000acbc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000acbc8:;
    {
        uint32_t v = cpu->r[8] & 0x00000002u; cpu->r[8] = v;
    }
L_000acbcc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000acbd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000acbd4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[8]);
    }
L_000acbd8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000acbdc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000acbe0:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000acbe4:;
    {
        goto L_000acc34;
    }
L_000acbe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000acbec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acde8;
        }
    }
L_000acbf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x6cu);
    }
L_000acbf4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_000acbf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000acbfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000acc00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 1);
    }
L_000acc04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000acc08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000acc0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acd90;
        }
    }
L_000acc10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000acc14:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000acc18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000acc1c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000acc20:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[12]);
    }
L_000acc24:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_000acc28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000acc2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000acc30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000acda4;
        }
    }
L_000acc34:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000acc38:;
    {
        cpu->r[7] = rd16(cpu->r[5]);
    }
L_000acc3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000acc40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acdbc;
        }
    }
L_000acc44:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000ffu, 1, 1);
    }
L_000acc48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000acc4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000acc50:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000ffu, 1, 1);
    }
L_000acc54:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
        }
    }
L_000acc58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000acbe8;
        }
    }
L_000acc5c:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000007eu, 1, 1);
    }
L_000acc60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acdd4;
        }
    }
L_000acc64:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000007cu, 1, 1);
    }
L_000acc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acdd4;
        }
    }
L_000acc6c:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000005cu, 1, 1);
    }
L_000acc70:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[7], 0x00000020u, 1, 1);
        }
    }
L_000acc74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000acc78:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000acc7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000acc98;
        }
    }
L_000acc80:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000020u, 1, 1);
    }
L_000acc84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acfcc;
        }
    }
L_000acc88:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000au, 1, 1);
    }
L_000acc8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acdf8;
        }
    }
L_000acc90:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000du, 1, 1);
    }
L_000acc94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acd90;
        }
    }
L_000acc98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000acc9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acca0:;
    {
        cpu->r[14] = 0x000acca4u; fn_000a96d4(cpu);
    }
L_000acca4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000acca8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000accac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000accb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000acee8;
        }
    }
L_000accb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000accb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000accbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000accc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000accc4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000accc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000acccc:;
    {
        cpu->r[11] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000accd0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5u);
    }
L_000accd4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000accd8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000accdc:;
    {
        cpu->r[14] = 0x000acce0u; fn_000962d0(cpu);
    }
L_000acce0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000acce4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acefc;
        }
    }
L_000acce8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000accec:;
    {
        uint32_t v = cpu->r[12] & 0x000000c0u; cpu->r[3] = v;
    }
L_000accf0:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000accf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000accf8:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000accfc:;
    {
        sub_flags(cpu, cpu->r[11], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_000acd00:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ace90;
        }
    }
L_000acd04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000acd08:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000acd0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acd10:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000acd14:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000acd18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_000acd1c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000acd20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000acd24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_000acd28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000acd2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000acd30:;
    {
        cpu->r[14] = 0x000acd34u; fn_000abf70(cpu);
    }
L_000acd34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000acd38:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000acd3c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000acd40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acd44:;
    {
        cpu->r[3] = rd16(cpu->r[3] + cpu->r[11]);
    }
L_000acd48:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000acd4c:;
    {
        cpu->r[14] = 0x000acd50u; fn_000a88e0(cpu);
    }
L_000acd50:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000acd54:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000acd58:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000acd5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acd60:;
    {
        cpu->r[14] = 0x000acd64u; fn_000a88e0(cpu);
    }
L_000acd64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_000acd68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000acd6c:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000009au, 1, 1);
    }
L_000acd70:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_000acd74:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_000acd78:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 0);
    }
L_000acd7c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000acd80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000acd90;
        }
    }
L_000acd84:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000acd88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000acd8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000003u, 0, 0);
        }
    }
L_000acd90:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000acd94:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_000acd98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000acd9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000acda0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000acc34;
        }
    }
L_000acda4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000acda8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_000acdac:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000acdb0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_000acdb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000acdb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000acdbcu)) return;
    }
L_000acdbc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000acdc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acdc4:;
    {
        cpu->r[14] = 0x000acdc8u; fn_000a8e20(cpu);
    }
L_000acdc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000acdcc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & 0x000000ffu; cpu->r[7] = v;
        }
    }
L_000acdd0:;
    {
        goto L_000acc44;
    }
L_000acdd4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5cu);
    }
L_000acdd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000acddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acc98;
        }
    }
L_000acde0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000acde4:;
    {
        goto L_000acd94;
    }
L_000acde8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_000acdec:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000acdf0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_000acdf4:;
    {
        goto L_000acc24;
    }
L_000acdf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000acdfc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000ace00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000ace04:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000ace08:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000ace0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ace10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ace14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ace18:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000ace1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ad020;
        }
    }
L_000ace20:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
    }
L_000ace24:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ace28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[6];
        }
    }
L_000ace2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad020;
        }
    }
L_000ace30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ace34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000ace38:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_000ace3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000ace40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acfb4;
        }
    }
L_000ace44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ace48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ace4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ace50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ace54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ace58:;
    {
        cpu->r[14] = 0x000ace5cu; fn_000aa0c0(cpu);
    }
L_000ace5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_000ace60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ace64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acfc4;
        }
    }
L_000ace68:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_000ace6c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ace70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acff8;
        }
    }
L_000ace74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ace78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ace7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acfc4;
        }
    }
L_000ace80:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x54u);
    }
L_000ace84:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ace88:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[9], 1, 1u, &shc), 1, 0);
    }
L_000ace8c:;
    {
        goto L_000acc24;
    }
L_000ace90:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ace94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ace98:;
    {
        cpu->r[14] = 0x000ace9cu; fn_000a8750(cpu);
    }
L_000ace9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000acea0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000acea4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000acea8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000aceac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000aceb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aceb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aceb8:;
    {
        cpu->r[11] = rd8(cpu->r[2] + shifter(cpu->r[0], 2, 1u, &shc));
    }
L_000acebc:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000acec0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5u);
    }
L_000acec4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000acec8:;
    {
        cpu->r[14] = 0x000aceccu; fn_000962d0(cpu);
    }
L_000acecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000aced0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad008;
        }
    }
L_000aced4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000aced8:;
    {
        uint32_t v = cpu->r[2] & 0x000000c0u; cpu->r[3] = v;
    }
L_000acedc:;
    {
        uint32_t v = cpu->r[11] | shifter(cpu->r[3], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000acee0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000acee4:;
    {
        goto L_000acd04;
    }
L_000acee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aceec:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000acef0:;
    {
        cpu->r[14] = 0x000acef4u; fn_000a8750(cpu);
    }
L_000acef4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000acef8:;
    {
        goto L_000accb4;
    }
L_000acefc:;
    {
        cpu->r[2] = 0x000003ffu;
    }
L_000acf00:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000acf04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000acce8;
        }
    }
L_000acf08:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_000acf0c:;
    {
        goto L_000accf4;
    }
L_000acf10:;
    {
        { uint32_t v = cpu->r[8] & 0x00000002u; set_nz(cpu, v); }
    }
L_000acf14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acf80;
        }
    }
L_000acf18:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_000acf1c:;
    {
        { uint32_t v = cpu->r[8] & 0x00000020u; set_nz(cpu, v); }
    }
L_000acf20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000acf24:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 0);
    }
L_000acf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acf9c;
        }
    }
L_000acf2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_000acf30:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000acf34:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000acf38:;
    {
        goto L_000acba4;
    }
L_000acf3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000acf40:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000acf44:;
    {
        cpu->r[3] = rd16(cpu->r[12] + cpu->r[3]);
    }
L_000acf48:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000acf4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acb64;
        }
    }
L_000acf50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000acf54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000acf58:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000acf5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000acf60:;
    {
        goto L_000acf70;
    }
L_000acf64:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000002u;
        cpu->r[2] = rd16(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_000acf68:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_000acf6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000acb68;
        }
    }
L_000acf70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000acf74:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_000acf78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acf64;
        }
    }
L_000acf7c:;
    {
        goto L_000acb68;
    }
L_000acf80:;
    {
        { uint32_t v = cpu->r[8] & 0x00000001u; set_nz(cpu, v); }
    }
L_000acf84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
        }
    }
L_000acf88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000acf8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000acf90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[9], 1, 1u, &shc), 1, 0);
        }
    }
L_000acf94:;
    {
        { uint32_t v = cpu->r[8] & 0x00000020u; set_nz(cpu, v); }
    }
L_000acf98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000acf2c;
        }
    }
L_000acf9c:;
    {
        { uint32_t v = cpu->r[8] & 0x00000010u; set_nz(cpu, v); }
    }
L_000acfa0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
        }
    }
L_000acfa4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
        }
    }
L_000acfa8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000acfac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
        }
    }
L_000acfb0:;
    {
        goto L_000acba4;
    }
L_000acfb4:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x4u);
    }
L_000acfb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000acfbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ace30;
        }
    }
L_000acfc0:;
    {
        goto L_000ace44;
    }
L_000acfc4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000acfc8:;
    {
        goto L_000acc24;
    }
L_000acfcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000acfd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000acfd4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000acfd8:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000acfdc:;
    {
        cpu->r[11] = rd8(cpu->r[3]);
    }
L_000acfe0:;
    {
        cpu->r[14] = 0x000acfe4u; fn_000a88e0(cpu);
    }
L_000acfe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000acfe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000acfec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000acff0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_000acff4:;
    {
        goto L_000acc24;
    }
L_000acff8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x54u);
    }
L_000acffc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad000:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_000ad004:;
    {
        goto L_000acc24;
    }
L_000ad008:;
    {
        cpu->r[2] = 0x000003ffu;
    }
L_000ad00c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000ad010:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aced4;
        }
    }
L_000ad014:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_000ad018:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000ad01c:;
    {
        goto L_000acd04;
    }
L_000ad020:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_000ad024:;
    {
        goto L_000ace44;
    }
}

/* _ZN6Sprite8DrawPageEPKtiiij @ 000ad030 (arm) */
void fn_000ad030(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad030:;
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
L_000ad034:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ad038:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad03c:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000ad040:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad044:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000ad048:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ad04c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ad050:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ad054:;
    {
        goto L_000ad060;
    }
L_000ad058:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad05c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000ad060:;
    {
        cpu->r[3] = rd16(cpu->r[6] + cpu->r[12]);
    }
L_000ad064:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000ad068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad06c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad058;
        }
    }
L_000ad070:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0xcu);
    }
L_000ad074:;
    {
        { uint32_t v = cpu->r[10] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ad078:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x54u);
    }
L_000ad07c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_000ad080:;
    {
        cpu->r[11] = rd16(cpu->r[1]);
    }
L_000ad084:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000ad088:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] * cpu->r[2] + cpu->r[7]; cpu->r[7] = v;
        }
    }
L_000ad08c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad09c;
        }
    }
L_000ad090:;
    {
        { uint32_t v = cpu->r[10] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ad094:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[2] = v;
        }
    }
L_000ad098:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
        }
    }
L_000ad09c:;
    {
        cpu->r[3] = rd16(cpu->r[6]);
    }
L_000ad0a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad0a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_000ad0a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = (~0x00000000u);
        }
    }
L_000ad0ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad128;
        }
    }
L_000ad0b0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000ad0b4:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000ad0b8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad0bc:;
    {
        goto L_000ad0d0;
    }
L_000ad0c0:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x2u;
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
        cpu->r[5] = wb_tmp;
    }
L_000ad0c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ad0c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad124;
        }
    }
L_000ad0d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad0d4:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_000ad0d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad0c0;
        }
    }
L_000ad0dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad0e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_000ad0e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ad0e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad0ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad0f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ad0f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ad0f8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ad0fc:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000ad100:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_000ad104:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ad108:;
    {
        cpu->r[14] = 0x000ad10cu; fn_000acaf8(cpu);
    }
L_000ad10c:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x2u;
        cpu->r[3] = rd16(cpu->r[5] + + 0x2u);
        cpu->r[5] = wb_tmp;
    }
L_000ad110:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_000ad114:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_000ad118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ad11c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad120:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad0d0;
        }
    }
L_000ad124:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_000ad128:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad12c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ad130:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad134:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ad138:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ad13c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad140:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000ad144:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000ad148:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ad14c:;
    {
        cpu->r[14] = 0x000ad150u; fn_000acaf8(cpu);
    }
L_000ad150:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ad154:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad158u)) return;
    }
}

/* _ZN6Sprite8DrawPageEiiiij @ 000ad158 (arm) */
void fn_000ad158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad158:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ad15c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ad160:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad164:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ad168:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ad16c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000ad170:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ad174:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ad178:;
    {
        cpu->r[14] = 0x000ad17cu; fn_000aeb58(cpu);
    }
L_000ad17c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ad180:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad184:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_000ad188:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_000ad18c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ad190:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ad194:;
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
L_000ad198:;
    {
        return fn_000ad030(cpu);
    }
}

/* _ZN6Sprite10DrawStringEPKtiiij @ 000ad19c (arm) */
void fn_000ad19c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad19c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ad1a0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ad1a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ad1a8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad1ac:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ad1b0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000ad1b4:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000ad1b8:;
    {
        cpu->r[14] = 0x000ad1bcu; fn_000ae12c(cpu);
    }
L_000ad1bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ad1c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad1f8;
        }
    }
L_000ad1c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ad1c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ad1cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ad1d0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ad1d4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ad1d8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000ad1dc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ad1e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ad1e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ad1e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad1ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad1f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000ad1f4:;
    {
        cpu->r[14] = 0x000ad1f8u; fn_000acaf8(cpu);
    }
L_000ad1f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ad1fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad200u)) return;
    }
}

/* _ZN6Sprite10DrawStringEiiiij @ 000ad200 (arm) */
void fn_000ad200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad200:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ad204:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ad208:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad20c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ad210:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ad214:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000ad218:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ad21c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ad220:;
    {
        cpu->r[14] = 0x000ad224u; fn_000aeb58(cpu);
    }
L_000ad224:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ad228:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad22c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_000ad230:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_000ad234:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ad238:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ad23c:;
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
L_000ad240:;
    {
        return fn_000ad19c(cpu);
    }
}

/* _ZN6Sprite10DrawStringEiiiiiij @ 000ad244 (arm) */
void fn_000ad244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad244:;
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
L_000ad248:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ad24c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad250:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ad254:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ad258:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000ad25c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ad260:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000ad264:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ad268:;
    {
        cpu->r[14] = 0x000ad26cu; fn_000aeb58(cpu);
    }
L_000ad26c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad270:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ad274:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000ad278:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_000ad27c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_000ad280:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_000ad284:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000ad288:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ad28c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ad290:;
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
L_000ad294:;
    {
        return fn_000acaf8(cpu);
    }
}

/* _ZN6Sprite10DrawStringEPKciiiiij @ 000ad298 (arm) */
void fn_000ad298(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad298:;
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
L_000ad29c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000ad2a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ad2a4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad2a8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_000ad2ac:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_000ad2b0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000ad2b4:;
    {
        cpu->r[14] = 0x000ad2b8u; imp_strlen(cpu); /* strlen */
    }
L_000ad2b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000ad2bc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x80u);
    }
L_000ad2c0:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000ad2c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_000ad2c8:;
    {
        uint32_t v = cpu->r[7] & ~ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000ad2cc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x78u);
    }
L_000ad2d0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000ad2d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_000ad2d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000ad2dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000ad2e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_000ad2e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000ad2e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_000ad2ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[6];
        }
    }
L_000ad2f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000ad2f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ad634;
        }
    }
L_000ad2f8:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_000ad2fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000ad300:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000ad304:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000ad308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad30c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000ad310:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ad314:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000ad318:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ad31c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ad320:;
    {
        cpu->r[14] = 0x000ad324u; fn_000aadd4(cpu);
    }
L_000ad324:;
    {
        uint32_t v = cpu->r[8] & 0x00000033u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000ad328:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000ad32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad5fc;
        }
    }
L_000ad330:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ad334:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_000ad338:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000ad33c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000ad340:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ad4e0;
        }
    }
L_000ad344:;
    {
        cpu->r[2] = 0x00006500u;
    }
L_000ad348:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[3] = v;
    }
L_000ad34c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ad350:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xfffdu << 16);
    }
L_000ad354:;
    {
        uint32_t v = cpu->r[8] & 0x00000002u; cpu->r[8] = v;
    }
L_000ad358:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000ad35c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000ad360:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_000ad364:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[8]);
    }
L_000ad368:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000ad36c:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000ad370:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_000ad374:;
    {
        goto L_000ad3c4;
    }
L_000ad378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad37c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad52c;
        }
    }
L_000ad380:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x6cu);
    }
L_000ad384:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000ad388:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ad38c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ad390:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 1);
    }
L_000ad394:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ad398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad4f8;
        }
    }
L_000ad3a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000ad3a4:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad3a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000ad3ac:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000ad3b0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[12]);
    }
L_000ad3b4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_000ad3b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ad3bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ad3c0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ad4e0;
        }
    }
L_000ad3c4:;
    {
        cpu->r[1] = rd8(cpu->r[6]);
    }
L_000ad3c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ad3cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ad3d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ad3d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000ad3d8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
        }
    }
L_000ad3dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ad378;
        }
    }
L_000ad3e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005cu, 1, 1);
    }
L_000ad3e4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
        }
    }
L_000ad3e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ad3ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ad3f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ad500;
        }
    }
L_000ad3f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 1);
    }
L_000ad3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad6c4;
        }
    }
L_000ad3fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000ad400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad53c;
        }
    }
L_000ad404:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_000ad408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad4f8;
        }
    }
L_000ad40c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad410:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ad414:;
    {
        cpu->r[14] = 0x000ad418u; fn_000a8750(cpu);
    }
L_000ad418:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000ad41c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad420:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000ad424:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ad518;
        }
    }
L_000ad428:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000ad42c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_000ad430:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000ad434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000ad438:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000ad43c:;
    {
        cpu->r[11] = rd8(cpu->r[0] + + 0x5u);
    }
L_000ad440:;
    {
        uint32_t v = cpu->r[11] & 0x000000c0u; cpu->r[11] = v;
    }
L_000ad444:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000ad448:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000ad44c:;
    {
        sub_flags(cpu, cpu->r[11], shifter(cpu->r[1], 2, 1u, &shc), 1, 1);
    }
L_000ad450:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ad5c8;
        }
    }
L_000ad454:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ad458:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ad45c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ad460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad464:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ad468:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_000ad46c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ad470:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad474:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_000ad478:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ad47c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_000ad480:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ad484:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000ad488:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad48c:;
    {
        cpu->r[14] = 0x000ad490u; fn_000abf70(cpu);
    }
L_000ad490:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ad494:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ad498:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ad49c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad4a0:;
    {
        cpu->r[11] = rd8(cpu->r[3] + cpu->r[11]);
    }
L_000ad4a4:;
    {
        cpu->r[14] = 0x000ad4a8u; fn_000a88e0(cpu);
    }
L_000ad4a8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000ad4ac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ad4b0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad4b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad4b8:;
    {
        cpu->r[14] = 0x000ad4bcu; fn_000a88e0(cpu);
    }
L_000ad4bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ad4c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000ad4c4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_000ad4c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ad4cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ad4d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_000ad4d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000ad4d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_000ad4dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ad3c4;
        }
    }
L_000ad4e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_000ad4e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ad4e8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_000ad4ec:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[12]);
    }
L_000ad4f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000ad4f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad4f8u)) return;
    }
L_000ad4f8:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad4fc:;
    {
        goto L_000ad3b4;
    }
L_000ad500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad504:;
    {
        cpu->r[14] = 0x000ad508u; fn_000a8750(cpu);
    }
L_000ad508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000ad50c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad510:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000ad514:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ad428;
        }
    }
L_000ad518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad51c:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ad520:;
    {
        cpu->r[14] = 0x000ad524u; fn_000a8750(cpu);
    }
L_000ad524:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad528:;
    {
        goto L_000ad428;
    }
L_000ad52c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_000ad530:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad534:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_000ad538:;
    {
        goto L_000ad3b4;
    }
L_000ad53c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ad540:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_000ad544:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000ad548:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad54c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000ad550:;
    {
        cpu->r[2] = rd16(cpu->r[2]);
    }
L_000ad554:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ad558:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000ad55c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000ad560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ad70c;
        }
    }
L_000ad564:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x1u);
    }
L_000ad568:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad70c;
        }
    }
L_000ad570:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ad574:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000ad578:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ad57c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_000ad580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad69c;
        }
    }
L_000ad584:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ad588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad58c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ad590:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ad594:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ad598:;
    {
        cpu->r[14] = 0x000ad59cu; fn_000aadd4(cpu);
    }
L_000ad59c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad5a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ad5a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad6b8;
        }
    }
L_000ad5a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ad5ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad5b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad6ac;
        }
    }
L_000ad5b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ad5b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ad5bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000ad5c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad5c4:;
    {
        goto L_000ad3b4;
    }
L_000ad5c8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000ad5cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad5d0:;
    {
        cpu->r[14] = 0x000ad5d4u; fn_000a8750(cpu);
    }
L_000ad5d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_000ad5d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000ad5dc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad5e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000ad5e4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[2], 2, 1u, &shc));
    }
L_000ad5e8:;
    {
        cpu->r[11] = rd8(cpu->r[1] + + 0x5u);
    }
L_000ad5ec:;
    {
        uint32_t v = cpu->r[11] & 0x000000c0u; cpu->r[11] = v;
    }
L_000ad5f0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
    }
L_000ad5f4:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_000ad5f8:;
    {
        goto L_000ad454;
    }
L_000ad5fc:;
    {
        { uint32_t v = cpu->r[8] & 0x00000002u; set_nz(cpu, v); }
    }
L_000ad600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad66c;
        }
    }
L_000ad604:;
    {
        { uint32_t v = cpu->r[8] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ad608:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
        }
    }
L_000ad60c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_000ad610:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_000ad614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ad618:;
    {
        { uint32_t v = cpu->r[8] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ad61c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad684;
        }
    }
L_000ad624:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ad628:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000ad62c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000ad630:;
    {
        goto L_000ad33c;
    }
L_000ad634:;
    {
        cpu->r[3] = rd8(cpu->r[11] + cpu->r[6]);
    }
L_000ad638:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad63c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[6];
        }
    }
L_000ad640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad2f8;
        }
    }
L_000ad644:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ad648:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_000ad64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad2fc;
        }
    }
L_000ad650:;
    {
        cpu->r[3] = rd8(cpu->r[11] + cpu->r[12]);
    }
L_000ad654:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad2fc;
        }
    }
L_000ad65c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ad660:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_000ad664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad650;
        }
    }
L_000ad668:;
    {
        goto L_000ad2fc;
    }
L_000ad66c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_000ad670:;
    {
        { uint32_t v = cpu->r[8] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ad674:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ad678:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000ad67c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad624;
        }
    }
L_000ad684:;
    {
        { uint32_t v = cpu->r[8] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ad688:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
        }
    }
L_000ad68c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
        }
    }
L_000ad690:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_000ad694:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
        }
    }
L_000ad698:;
    {
        goto L_000ad33c;
    }
L_000ad69c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[12]);
    }
L_000ad6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad6a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad578;
        }
    }
L_000ad6a8:;
    {
        goto L_000ad584;
    }
L_000ad6ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000ad6b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ad6b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad6f8;
        }
    }
L_000ad6b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ad6bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad6c0:;
    {
        goto L_000ad3b4;
    }
L_000ad6c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ad6c8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000ad6cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ad6d0:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000ad6d4:;
    {
        cpu->r[8] = rd8(cpu->r[3]);
    }
L_000ad6d8:;
    {
        cpu->r[14] = 0x000ad6dcu; fn_000a88e0(cpu);
    }
L_000ad6dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_000ad6e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ad6e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000ad6e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000ad6ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000ad6f0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad6f4:;
    {
        goto L_000ad3b4;
    }
L_000ad6f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ad6fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000ad700:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_000ad704:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000ad708:;
    {
        goto L_000ad3b4;
    }
L_000ad70c:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000ad710:;
    {
        goto L_000ad584;
    }
}

/* _ZN6Sprite8DrawPageEPKciiij @ 000ad714 (arm) */
void fn_000ad714(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad714:;
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
L_000ad718:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ad71c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad720:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000ad724:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ad728:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000ad72c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ad730:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_000ad734:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000ad738:;
    {
        goto L_000ad744;
    }
L_000ad73c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad740:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000ad744:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[12]);
    }
L_000ad748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ad74c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad750:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad73c;
        }
    }
L_000ad754:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0xcu);
    }
L_000ad758:;
    {
        { uint32_t v = cpu->r[10] & 0x00000020u; set_nz(cpu, v); }
    }
L_000ad75c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x54u);
    }
L_000ad760:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_000ad764:;
    {
        cpu->r[11] = rd16(cpu->r[1]);
    }
L_000ad768:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000ad76c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] * cpu->r[2] + cpu->r[7]; cpu->r[7] = v;
        }
    }
L_000ad770:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad780;
        }
    }
L_000ad774:;
    {
        { uint32_t v = cpu->r[10] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ad778:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[2] = v;
        }
    }
L_000ad77c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
        }
    }
L_000ad780:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_000ad784:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad788:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_000ad78c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = (~0x00000000u);
        }
    }
L_000ad790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad80c;
        }
    }
L_000ad794:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000ad798:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000ad79c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad7a0:;
    {
        goto L_000ad7b4;
    }
L_000ad7a4:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
        cpu->r[5] = wb_tmp;
    }
L_000ad7a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ad7ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad7b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad808;
        }
    }
L_000ad7b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000ad7b8:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_000ad7bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad7a4;
        }
    }
L_000ad7c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad7c4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_000ad7c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ad7cc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad7d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad7d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ad7d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ad7dc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ad7e0:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000ad7e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_000ad7e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ad7ec:;
    {
        cpu->r[14] = 0x000ad7f0u; fn_000ad298(cpu);
    }
L_000ad7f0:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
        cpu->r[5] = wb_tmp;
    }
L_000ad7f4:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_000ad7f8:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_000ad7fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ad800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ad804:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ad7b4;
        }
    }
L_000ad808:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_000ad80c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad810:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ad814:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000ad818:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ad81c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000ad820:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000ad824:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000ad828:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000ad82c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ad830:;
    {
        cpu->r[14] = 0x000ad834u; fn_000ad298(cpu);
    }
L_000ad834:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ad838:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad83cu)) return;
    }
}

/* _ZN6Sprite10DrawStringEPKciiij @ 000ad83c (arm) */
void fn_000ad83c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad83c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ad840:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ad844:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000ad848:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000ad84c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ad850:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000ad854:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000ad858:;
    {
        cpu->r[14] = 0x000ad85cu; imp_strlen(cpu); /* strlen */
    }
L_000ad85c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ad860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad898;
        }
    }
L_000ad864:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000ad868:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000ad86c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ad870:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ad874:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ad878:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000ad87c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000ad880:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000ad884:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ad888:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ad88c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000ad890:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000ad894:;
    {
        cpu->r[14] = 0x000ad898u; fn_000ad298(cpu);
    }
L_000ad898:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000ad89c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad8a0u)) return;
    }
}

/* _ZN6Sprite10PaintFrameEiiiji @ 000ad8a0 (arm) */
void fn_000ad8a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad8a0:;
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
L_000ad8a4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ad8a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000ad8ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ad8b0:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000ad8b4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000ad8b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ad910;
        }
    }
L_000ad8bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000ad8c0:;
    {
        cpu->r[8] = rd8(cpu->r[3] + cpu->r[7]);
    }
L_000ad8c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000ad8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad910;
        }
    }
L_000ad8cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_000ad8d0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ad8d4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000ad8d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000ad8dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000ad8e0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000ad8e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ad8e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ad8ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000ad8f0:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000ad8f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ad8f8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000ad8fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000ad900:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_000ad904:;
    {
        cpu->r[14] = 0x000ad908u; fn_000abf70(cpu);
    }
L_000ad908:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_000ad90c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ad8dc;
        }
    }
L_000ad910:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000ad914:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ad918u)) return;
    }
}

/* _ZN6Sprite18PaintScaledFModuleEiiiijfi @ 000ad918 (arm) */
void fn_000ad918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ad918:;
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
L_000ad91c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x28u);
    }
L_000ad920:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000ad924:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000ad928:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x30u);
    }
L_000ad92c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_000ad930:;
    {
        cpu->r[1] = rd16(cpu->r[5] + cpu->r[1]);
    }
L_000ad934:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000ad938:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000ad93c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000ad940:;
    {
        uint32_t v = cpu->r[12] & 0x00000004u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_000ad944:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x48u);
    }
L_000ad948:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000ad94c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000ad950:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000ad954:;
    {
        cpu->r[2] = rd8(cpu->r[4] + shifter(cpu->r[1], 2, 1u, &shc));
    }
L_000ad958:;
    {
        cpu->r[9] = rd8(cpu->r[7] + + 0x4u);
    }
L_000ad95c:;
    {
        cpu->r[4] = rd8(cpu->r[7] + + 0x2u);
    }
L_000ad960:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x1u);
    }
L_000ad964:;
    {
        cpu->r[8] = rd8(cpu->r[7] + + 0x3u);
    }
L_000ad968:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_000ad96c:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x5u);
    }
L_000ad970:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[9] = v;
    }
L_000ad974:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_000ad978:;
    {
        uint32_t v = cpu->r[7] & 0x000000c0u; cpu->r[1] = v;
    }
L_000ad97c:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000ad980:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[9];
    }
L_000ad984:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ad988:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[4];
    }
L_000ad98c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000ad990:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ad994:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000ad998:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_000ad99c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ad9a0:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000ad9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ada30;
        }
    }
L_000ad9a8:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_000ad9ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000ad9b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000ad9b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000ad9b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
        }
    }
L_000ad9bc:;
    {
        uint32_t v = cpu->r[12] & 0x00000002u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_000ad9c0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ad9c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
        }
    }
L_000ad9c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
        }
    }
L_000ad9cc:;
    {
        { uint32_t v = cpu->r[7] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ad9d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ada60;
        }
    }
L_000ad9d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ad9d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ada88;
        }
    }
L_000ad9dc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ad9e0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000ad9e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_000ad9e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[14] + cpu->r[3]);
        }
    }
L_000ad9ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000ad9f0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000ad9f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000ad9f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[0] + + 0xcu);
        }
    }
L_000ad9fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[14] + cpu->r[3]);
        }
    }
L_000ada00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000ada04:;
    {
        uint32_t v = cpu->r[7] & 0x0000000fu; cpu->r[14] = v;
    }
L_000ada08:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ada0c:;
    {
        uint32_t v = cpu->r[14] ^ cpu->r[12]; cpu->r[12] = v;
    }
L_000ada10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ada14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ada18:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000ada1c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000ada20:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000ada24:;
    {
        cpu->r[14] = 0x000ada28u; fn_000ab104(cpu);
    }
L_000ada28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000ada2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ada30u)) return;
    }
L_000ada30:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_000ada34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000ada38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000ada3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
        }
    }
L_000ada40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
        }
    }
L_000ada44:;
    {
        uint32_t v = cpu->r[12] & 0x00000002u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_000ada48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000ada4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000ada50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000ada54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
        }
    }
L_000ada58:;
    {
        { uint32_t v = cpu->r[7] & 0x00000010u; set_nz(cpu, v); }
    }
L_000ada5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ad9d4;
        }
    }
L_000ada60:;
    {
        uint32_t v = cpu->r[7] & 0x0000000fu; cpu->r[4] = v;
    }
L_000ada64:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000ada68:;
    {
        uint32_t v = cpu->r[4] ^ cpu->r[12]; cpu->r[12] = v;
    }
L_000ada6c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_000ada70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ada74:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ada78:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[11]);
    }
L_000ada7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000ada80:;
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
L_000ada84:;
    {
        return fn_000ad8a0(cpu);
    }
L_000ada88:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ada8c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000ada90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_000ada94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[14] + cpu->r[3]);
        }
    }
L_000ada98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000ada9c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000adaa0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[0] + + 0xcu);
        }
    }
L_000adaa4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_000adaa8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd16(cpu->r[14] + cpu->r[3]);
        }
    }
L_000adaac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_000adab0:;
    {
        goto L_000ada04;
    }
}

/* _ZN6Sprite16PaintScaledFrameEiiijfi @ 000adab4 (arm) */
void fn_000adab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adab4:;
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
L_000adab8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000adabc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000adac0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000adac4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000adac8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000adacc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000adad0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_000adad4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000adad8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000adb24;
        }
    }
L_000adadc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_000adae0:;
    {
        cpu->r[7] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000adae4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000adae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000adb24;
        }
    }
L_000adaec:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000adaf0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000adaf4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000adaf8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000adafc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adb00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000adb04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000adb08:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000adb0c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_000adb10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000adb14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_000adb18:;
    {
        cpu->r[14] = 0x000adb1cu; fn_000ad918(cpu);
    }
L_000adb1c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000adb20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000adaf8;
        }
    }
L_000adb24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000adb28:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000adb2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000adb30u)) return;
    }
}

/* _ZN6Sprite11PaintAFrameEiiiijii @ 000adb30 (arm) */
void fn_000adb30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adb30:;
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
L_000adb34:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x3cu);
    }
L_000adb38:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000adb3c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x44u);
    }
L_000adb40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000adb44:;
    {
        cpu->r[1] = rd16(cpu->r[4] + cpu->r[1]);
    }
L_000adb48:;
    {
        { uint32_t v = cpu->r[12] & 0x00000020u; set_nz(cpu, v); }
    }
L_000adb4c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_000adb50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000adb54:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_000adb58:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000adb5c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_000adb60:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[1];
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[1]);
        cpu->r[5] = wb_tmp;
    }
L_000adb64:;
    {
        cpu->r[4] = rd8(cpu->r[5] + + 0x6u);
    }
L_000adb68:;
    {
        cpu->r[11] = rd8(cpu->r[5] + + 0x5u);
    }
L_000adb6c:;
    {
        uint32_t v = cpu->r[4] & 0x000000c0u; cpu->r[1] = v;
    }
L_000adb70:;
    {
        cpu->r[10] = rd8(cpu->r[5] + + 0x2u);
    }
L_000adb74:;
    {
        cpu->r[9] = rd8(cpu->r[5] + + 0x3u);
    }
L_000adb78:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adb7c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x4u);
    }
L_000adb80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000adbac;
        }
    }
L_000adb84:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[10] = v;
    }
L_000adb88:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[11] = v;
    }
L_000adb8c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000001u; set_nz(cpu, v); }
    }
L_000adb90:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_000adb94:;
    {
        cpu->r[11] = (uint32_t)((int16_t)cpu->r[11]);
    }
L_000adb98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
        }
    }
L_000adb9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 0);
        }
    }
L_000adba0:;
    {
        { uint32_t v = cpu->r[12] & 0x00000002u; set_nz(cpu, v); }
    }
L_000adba4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
        }
    }
L_000adba8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 0);
        }
    }
L_000adbac:;
    {
        uint32_t v = cpu->r[4] & 0x0000000fu; cpu->r[4] = v;
    }
L_000adbb0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_000adbb4:;
    {
        uint32_t v = cpu->r[4] ^ cpu->r[12]; cpu->r[12] = v;
    }
L_000adbb8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_000adbbc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000adbc0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000adbc4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000adbc8:;
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
L_000adbcc:;
    {
        return fn_000ad8a0(cpu);
    }
}

/* _ZN6Sprite21PaintCurrentAnimationEiiii @ 000adbd0 (arm) */
void fn_000adbd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adbd0:;
    {
        cpu->r[12] = rd32(0x000adbd8u + + 0x6cu);
    }
L_000adbd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000adbd8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000adbdc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000adbe4u, cpu->r[12], 0, 0);
    }
L_000adbe0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000adbe4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000adbe8:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000adbec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000adbfc;
        }
    }
L_000adbf0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000adbf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000adbf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000adbfcu)) return;
    }
L_000adbfc:;
    {
        cpu->r[3] = rd32(0x000adc04u + + 0x44u);
    }
L_000adc00:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000adc04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000adc08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000adc0c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000adbf0;
        }
    }
L_000adc10:;
    {
        cpu->r[14] = rd32(0x000adc18u + + 0x34u);
    }
L_000adc14:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000adc18:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000adc1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000adc20:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_000adc24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000adc28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000adc2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000adc30:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000adc34:;
    {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000adc38:;
    {
        cpu->r[14] = 0x000adc3cu; fn_000adb30(cpu);
    }
L_000adc3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000adc40:;
    {
        goto L_000adbf4;
    }
}

/* _ZN6Sprite30PaintAndUpdateCurrentAnimationEiiii @ 000adc50 (arm) */
void fn_000adc50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adc50:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000adc54:;
    {
        cpu->r[12] = rd32(0x000adc5cu + + 0x54u);
    }
L_000adc58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000adc5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000027u, 1, 1);
    }
L_000adc60:;
    {
        cpu->r[12] = add_flags(cpu, 0x000adc68u, cpu->r[12], 0, 0);
    }
L_000adc64:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000adc68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000adc6c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_000adc70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000adc80;
        }
    }
L_000adc74:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000adc78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000adc7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000adc80u)) return;
    }
L_000adc80:;
    {
        cpu->r[6] = rd32(0x000adc88u + + 0x2cu);
    }
L_000adc84:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_000adc88:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000adc8c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000adc90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000adc74;
        }
    }
L_000adc94:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000adc98:;
    {
        cpu->r[14] = 0x000adc9cu; fn_000adbd0(cpu);
    }
L_000adc9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adca0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000adca4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000adca8:;
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
L_000adcac:;
    {
        return fn_000a91dc(cpu);
    }
}

/* _ZN6Sprite11AllocateMemEi @ 000adcb8 (arm) */
void fn_000adcb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adcb8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000adcbc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000adcc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000adcc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000adce0;
        }
    }
L_000adcc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_000adccc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000adcd0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_000adcd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000adcd8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000adcdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000adce0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000adce4:;
    {
        imp__Znaj(cpu); /* tail _Znaj */ return;
    }
}

/* _ZN6Sprite12loadSprite_2EP8LZMAFile @ 000adce8 (arm) */
void fn_000adce8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adce8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000adcec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000adcf0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000adcf4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000adcf8:;
    {
        cpu->r[14] = 0x000adcfcu; fn_000fc650(cpu);
    }
L_000adcfc:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000add00:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_000add04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000add08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000add2c;
        }
    }
L_000add0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000add10:;
    {
        cpu->r[14] = 0x000add14u; fn_000fc650(cpu);
    }
L_000add14:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000add18:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000add1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000add20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000add60;
        }
    }
L_000add24:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000add28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000add2cu)) return;
    }
L_000add2c:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[0], 2, 3u, &shc), cpu->r[0], 1, 0);
    }
L_000add30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000add34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000add38:;
    {
        cpu->r[14] = 0x000add3cu; fn_000adcb8(cpu);
    }
L_000add3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000add40:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000add44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000005u);
        }
    }
L_000add48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000add4cu)) return;
        }
    }
L_000add4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000add50:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000add54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000add58:;
    {
        cpu->r[14] = 0x000add5cu; fn_000fc5f4(cpu);
    }
L_000add5c:;
    {
        goto L_000add0c;
    }
L_000add60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000add64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000add68:;
    {
        cpu->r[14] = 0x000add6cu; fn_000adcb8(cpu);
    }
L_000add6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000add70:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_000add74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_000add78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000add7cu)) return;
        }
    }
L_000add7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_000add80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000add84:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000add88:;
    {
        cpu->r[14] = 0x000add8cu; fn_000adcb8(cpu);
    }
L_000add8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000add90:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_000add94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000007u);
        }
    }
L_000add98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000add9cu)) return;
        }
    }
L_000add9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_000adda0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000adda4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000add24;
        }
    }
L_000adda8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000addac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000addb0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x38u);
    }
L_000addb4:;
    {
        cpu->r[14] = 0x000addb8u; fn_000fc650(cpu);
    }
L_000addb8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[7] = v;
    }
L_000addbc:;
    {
        wr8(cpu->r[8] + cpu->r[6], cpu->r[0]);
    }
L_000addc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000addc4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3cu);
    }
L_000addc8:;
    {
        cpu->r[14] = 0x000addccu; fn_000fc650(cpu);
    }
L_000addcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_000addd0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000addd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000addd8:;
    {
        wr16(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_000adddc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000addac;
        }
    }
L_000adde0:;
    {
        goto L_000add24;
    }
}

/* _ZN6Sprite12loadSprite_1EP8LZMAFile @ 000adde4 (arm) */
void fn_000adde4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adde4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000adde8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000addec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000addf0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000addf4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000addf8:;
    {
        cpu->r[14] = 0x000addfcu; fn_000fc650(cpu);
    }
L_000addfc:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000ade00:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_000ade04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ade08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ade30;
        }
    }
L_000ade0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ade10:;
    {
        cpu->r[14] = 0x000ade14u; fn_000fc650(cpu);
    }
L_000ade14:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000ade18:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_000ade1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ade20:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ade68;
        }
    }
L_000ade24:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ade28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ade2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ade30u)) return;
    }
L_000ade30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000ade34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ade38:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_000ade3c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ade40:;
    {
        cpu->r[14] = 0x000ade44u; fn_000adcb8(cpu);
    }
L_000ade44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ade48:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_000ade4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_000ade50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ade28;
        }
    }
L_000ade54:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ade58:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ade5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ade60:;
    {
        cpu->r[14] = 0x000ade64u; fn_000fc5f4(cpu);
    }
L_000ade64:;
    {
        goto L_000ade0c;
    }
L_000ade68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000ade6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ade70:;
    {
        cpu->r[14] = 0x000ade74u; fn_000adcb8(cpu);
    }
L_000ade74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ade78:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_000ade7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_000ade80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ade28;
        }
    }
L_000ade84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_000ade88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ade8c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000ade90:;
    {
        cpu->r[14] = 0x000ade94u; fn_000adcb8(cpu);
    }
L_000ade94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ade98:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_000ade9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_000adea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ade28;
        }
    }
L_000adea4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_000adea8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000adeac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000adefc;
        }
    }
L_000adeb0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000adeb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000adeb8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000adebc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000adec0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adec4:;
    {
        cpu->r[14] = 0x000adec8u; fn_000fc5f4(cpu);
    }
L_000adec8:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x4u);
    }
L_000adecc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_000aded0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000aded4:;
    {
        wr8(cpu->r[2] + cpu->r[6], cpu->r[1]);
    }
L_000aded8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000adedc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_000adee0:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x7u);
    }
L_000adee4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_000adee8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000adeec:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x6u);
    }
L_000adef0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_000adef4:;
    {
        wr16(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_000adef8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000adeb8;
        }
    }
L_000adefc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adf00:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adf04:;
    {
        cpu->r[14] = 0x000adf08u; fn_000fc5ec(cpu);
    }
L_000adf08:;
    {
        goto L_000ade24;
    }
}

/* _ZN6Sprite12loadSprite_0EP8LZMAFile @ 000adf0c (arm) */
void fn_000adf0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000adf0c:;
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
L_000adf10:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000adf14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000adf18:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000adf1c:;
    {
        cpu->r[14] = 0x000adf20u; fn_000fc650(cpu);
    }
L_000adf20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adf24:;
    {
        cpu->r[14] = 0x000adf28u; fn_000fc628(cpu);
    }
L_000adf28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adf2c:;
    {
        cpu->r[14] = 0x000adf30u; fn_000fc650(cpu);
    }
L_000adf30:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000adf34:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000adf38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000adf3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000adf40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000adf44u)) return;
        }
    }
L_000adf44:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000adf48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adf4c:;
    {
        cpu->r[14] = 0x000adf50u; fn_000adcb8(cpu);
    }
L_000adf50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adf54:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000adf58:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000adf5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adf60:;
    {
        cpu->r[14] = 0x000adf64u; fn_000adcb8(cpu);
    }
L_000adf64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adf68:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adf6c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000adf70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adf74:;
    {
        cpu->r[14] = 0x000adf78u; fn_000adcb8(cpu);
    }
L_000adf78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adf7c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adf80:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000adf84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adf88:;
    {
        cpu->r[14] = 0x000adf8cu; fn_000adcb8(cpu);
    }
L_000adf8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adf90:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adf94:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_000adf98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adf9c:;
    {
        cpu->r[14] = 0x000adfa0u; fn_000adcb8(cpu);
    }
L_000adfa0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adfa4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000adfa8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_000adfac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000adfb0:;
    {
        cpu->r[14] = 0x000adfb4u; fn_000adcb8(cpu);
    }
L_000adfb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000adfb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000adfbc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000adfc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ae0a4;
        }
    }
L_000adfc4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000adfc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adfcc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[7] = v;
    }
L_000adfd0:;
    {
        cpu->r[14] = 0x000adfd4u; fn_000fc650(cpu);
    }
L_000adfd4:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000adfd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adfdc:;
    {
        cpu->r[14] = 0x000adfe0u; fn_000fc650(cpu);
    }
L_000adfe0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x8u);
    }
L_000adfe4:;
    {
        cpu->r[9] = (uint32_t)((int16_t)cpu->r[9]);
    }
L_000adfe8:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000adfec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000adff0:;
    {
        cpu->r[14] = 0x000adff4u; fn_000fc650(cpu);
    }
L_000adff4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_000adff8:;
    {
        wr16(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_000adffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ae000:;
    {
        cpu->r[14] = 0x000ae004u; fn_000fc650(cpu);
    }
L_000ae004:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[9];
    }
L_000ae008:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x74u);
    }
L_000ae00c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ae010:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ae014:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[11]);
    }
L_000ae018:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ae01c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_000ae020:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_000ae024:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_000ae028:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000ae02c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000ae030:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_000ae034:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ae038:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_000ae03c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_000ae040:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000ae044:;
    {
        vfp_vdiv(cpu, 10, 13, 14);
    }
L_000ae048:;
    {
        wr16(cpu->r[10] + cpu->r[7], cpu->r[0]);
    }
L_000ae04c:;
    {
        cpu->r[8] = rd16(cpu->r[8] + cpu->r[7]);
    }
L_000ae050:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_000ae054:;
    {
        cpu->r[12] = rd16(cpu->r[12] + cpu->r[7]);
    }
L_000ae058:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000ae05c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ae060:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_000ae064:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_000ae068:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_000ae06c:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_000ae070:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_000ae074:;
    {
        vfp_vdiv(cpu, 14, 11, 14);
    }
L_000ae078:;
    {
        vfp_vdiv(cpu, 15, 12, 15);
    }
L_000ae07c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ae080:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ae084:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[1]);
    }
L_000ae088:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_000ae08c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ae090:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_000ae094:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[1]);
    }
L_000ae098:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ae09c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000ae0a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000adfc8;
        }
    }
L_000ae0a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ae0a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae0acu)) return;
    }
}

/* _ZN6Sprite10loadSpriteEP8LZMAFileiiii @ 000ae0ac (arm) */
void fn_000ae0ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae0ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae0b0:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_000ae0b4:;
    {
        wr32(cpu->r[0] + + 0x74u, cpu->r[3]);
    }
L_000ae0b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae0bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ae0c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ae0c4:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[3]);
    }
L_000ae0c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ae0cc:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_000ae0d0:;
    {
        cpu->r[14] = 0x000ae0d4u; fn_000adf0c(cpu);
    }
L_000ae0d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae0d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae0dcu)) return;
        }
    }
L_000ae0dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ae0e0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ae0e4:;
    {
        cpu->r[14] = 0x000ae0e8u; fn_000adde4(cpu);
    }
L_000ae0e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae0ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae0f0u)) return;
        }
    }
L_000ae0f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ae0f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ae0f8:;
    {
        cpu->r[14] = 0x000ae0fcu; fn_000adce8(cpu);
    }
L_000ae0fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae100:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae104u)) return;
        }
    }
L_000ae104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ae108:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae10c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae118;
        }
    }
L_000ae110:;
    {
        cpu->r[0] = (~0x0000000cu);
    }
L_000ae114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae118u)) return;
    }
L_000ae118:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000ae11c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae120:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ae124:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae128u)) return;
        }
    }
L_000ae128:;
    {
        goto L_000ae110;
    }
}

/* _Z6strlenPKt @ 000ae12c (arm) */
void fn_000ae12c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae12c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae130:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000ae134:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ae138:;
    {
        cpu->r[0] = rd16(cpu->r[2]);
    }
L_000ae13c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae140:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ae144:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ae148:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000ae14c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae150:;
    {
        cpu->r[3] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_000ae154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae148;
        }
    }
L_000ae15c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6strcpyPtPKt @ 000ae160 (arm) */
void fn_000ae160(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae160:;
    {
        cpu->r[2] = rd16(cpu->r[1]);
    }
L_000ae164:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae168:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_000ae16c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_000ae170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae194;
        }
    }
L_000ae174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae178:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000ae17c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ae180:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ae184:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae188:;
    {
        cpu->r[2] = rd16(cpu->r[1] + cpu->r[3]);
    }
L_000ae18c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae190:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae17c;
        }
    }
L_000ae194:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ae198:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000ae19c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ae1a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6strcpyPtPKc @ 000ae1a4 (arm) */
void fn_000ae1a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae1a4:;
    {
        cpu->r[2] = rd8(cpu->r[1]);
    }
L_000ae1a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae1ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000ae1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae1d8;
        }
    }
L_000ae1b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae1b8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ae1bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ae1c0:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_000ae1c4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_000ae1c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae1cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae1b8;
        }
    }
L_000ae1d0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ae1d4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae1d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ae1dc:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000ae1e0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ae1e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6strcpyPcPKt @ 000ae1e8 (arm) */
void fn_000ae1e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae1e8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000ae1ec:;
    {
        cpu->r[0] = rd16(cpu->r[1]);
    }
L_000ae1f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae1f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_000ae1f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae21c;
        }
    }
L_000ae1fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae200:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_000ae204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000ae208:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000ae20c:;
    {
        cpu->r[0] = rd16(cpu->r[1] + cpu->r[0]);
    }
L_000ae210:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae214:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae200;
        }
    }
L_000ae218:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ae21c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ae220:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000ae224:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z6strcatPtPKt @ 000ae228 (arm) */
void fn_000ae228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae228:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae22c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ae230:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae234:;
    {
        cpu->r[14] = 0x000ae238u; fn_000ae12c(cpu);
    }
L_000ae238:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ae23c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000ae240:;
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
L_000ae244:;
    {
        return fn_000ae160(cpu);
    }
}

/* _Z6strcatPtPKc @ 000ae248 (arm) */
void fn_000ae248(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae248:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae24c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ae250:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae254:;
    {
        cpu->r[14] = 0x000ae258u; fn_000ae12c(cpu);
    }
L_000ae258:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ae25c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000ae260:;
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
L_000ae264:;
    {
        return fn_000ae1a4(cpu);
    }
}

/* _Z6strcmpPtS_ @ 000ae268 (arm) */
void fn_000ae268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae268:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000ae26c:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_000ae270:;
    {
        cpu->r[4] = rd16(cpu->r[1]);
    }
L_000ae274:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ae278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae288;
        }
    }
L_000ae27c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_000ae280:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000ae284:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ae288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae28c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ae290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae2b4;
        }
    }
L_000ae294:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae298:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ae29c:;
    {
        cpu->r[4] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_000ae2a0:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[12]);
    }
L_000ae2a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ae2a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae27c;
        }
    }
L_000ae2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae2b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae294;
        }
    }
L_000ae2b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ae2b8:;
    {
        goto L_000ae280;
    }
}

/* _Z4itoaiPt @ 000ae2bc (arm) */
void fn_000ae2bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae2bc:;
    {
        cpu->r[3] = rd32(0x000ae2c4u + + 0xd4u);
    }
L_000ae2c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae2c4:;
    {
        cpu->r[2] = rd32(0x000ae2ccu + + 0xd0u);
    }
L_000ae2c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_000ae2cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000ae2d4u, cpu->r[3], 0, 0);
    }
L_000ae2d0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ae2d4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ae2d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000ae2dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_000ae2e0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000ae2e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ae2e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ae2f4;
        }
    }
L_000ae2ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae380;
        }
    }
L_000ae2f0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000ae2f4:;
    {
        cpu->r[7] = 0x00006667u;
    }
L_000ae2f8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ae2fc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x6666u << 16);
    }
L_000ae300:;
    {
        cpu->r[6] = cpu->r[13];
    }
L_000ae304:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[0]; cpu->r[12] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_000ae308:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000ae30c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[5], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_000ae310:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000ae314:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 1u, &shc), 1, 0);
    }
L_000ae318:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ae31c:;
    {
        wr8(cpu->r[6] + cpu->r[4], cpu->r[5]);
    }
L_000ae320:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ae324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae304;
        }
    }
L_000ae328:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000ae32c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ae330:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x0000002du;
        }
    }
L_000ae334:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[1] + 0x00000002u;
        wr16(cpu->r[1], cpu->r[12]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000ae338:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000ae33c:;
    {
        uint32_t wb_tmp = cpu->r[12] + - 0x1u;
        cpu->r[5] = rd8(cpu->r[12] + - 0x1u);
        cpu->r[12] = wb_tmp;
    }
L_000ae340:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_000ae344:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_000ae348:;
    {
        wr16(cpu->r[1] + cpu->r[0], cpu->r[5]);
    }
L_000ae34c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000ae350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae33c;
        }
    }
L_000ae354:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ae358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_000ae35c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ae360:;
    {
        wr16(cpu->r[1] + cpu->r[12], cpu->r[4]);
    }
L_000ae364:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000ae368:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ae36c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ae370:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000ae374:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae394;
        }
    }
L_000ae378:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000ae37c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae380u)) return;
    }
L_000ae380:;
    {
        wr16(cpu->r[1] + + 0x2u, cpu->r[0]);
    }
L_000ae384:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_000ae388:;
    {
        wr16(cpu->r[1], cpu->r[0]);
    }
L_000ae38c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000ae390:;
    {
        goto L_000ae364;
    }
L_000ae394:;
    {
        cpu->r[14] = 0x000ae398u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000ae398:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 1, 2u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
        }
    }
L_000ae39c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _Z7strrchrPtc @ 000ae3a0 (arm) */
void fn_000ae3a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae3a0:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_000ae3a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae3a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000ae3ac:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000ae3b0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000ae3b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ae3b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_000ae3bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000ae3c0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x2u;
        cpu->r[3] = rd16(cpu->r[2] + + 0x2u);
        cpu->r[2] = wb_tmp;
    }
L_000ae3c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae3c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae3b8;
        }
    }
L_000ae3cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z20ConvertUTF8ToUnicodePtPKc @ 000ae3d0 (arm) */
void fn_000ae3d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae3d0:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_000ae3d4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_000ae3d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae3dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_000ae3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae484;
        }
    }
L_000ae3e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ae3e8:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_000ae3ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000ae3f0:;
    {
        goto L_000ae414;
    }
L_000ae3f4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae3f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae3fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ae400:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000ae404:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_000ae408:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000ae40c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae480;
        }
    }
L_000ae414:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_000ae418:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_000ae41c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae3f4;
        }
    }
L_000ae420:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[4] = v;
    }
L_000ae424:;
    {
        uint32_t v = cpu->r[3] & 0x000000e0u; cpu->r[6] = v;
    }
L_000ae428:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000c0u, 1, 1);
    }
L_000ae42c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ae430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae494;
        }
    }
L_000ae434:;
    {
        sub_flags(cpu, cpu->r[6], 0x000000e0u, 1, 1);
    }
L_000ae438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae3f4;
        }
    }
L_000ae43c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000ae440:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000ae444:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae448:;
    {
        cpu->r[4] = rd8(cpu->r[5] + + 0x1u);
    }
L_000ae44c:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x2u);
    }
L_000ae450:;
    {
        uint32_t v = cpu->r[4] & 0x0000003fu; cpu->r[4] = v;
    }
L_000ae454:;
    {
        uint32_t v = cpu->r[5] & 0x0000003fu; cpu->r[5] = v;
    }
L_000ae458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 12u, &shc), 0, 0);
    }
L_000ae45c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000ae460:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000ae464:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae468:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ae46c:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_000ae470:;
    {
        wr16(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_000ae474:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000ae478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae47c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae414;
        }
    }
L_000ae480:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_000ae484:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae488:;
    {
        wr16(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_000ae48c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_000ae490:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ae494:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000ae498:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[3] = v;
    }
L_000ae49c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae4a0:;
    {
        cpu->r[4] = rd8(cpu->r[5] + + 0x1u);
    }
L_000ae4a4:;
    {
        uint32_t v = cpu->r[4] & 0x0000003fu; cpu->r[4] = v;
    }
L_000ae4a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 6u, &shc), 0, 0);
    }
L_000ae4ac:;
    {
        goto L_000ae3f4;
    }
}

/* _Z21ConvertUnicodeToUTF8_PcPKt @ 000ae4b0 (arm) */
void fn_000ae4b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae4b0:;
    {
        cpu->r[3] = rd16(cpu->r[1]);
    }
L_000ae4b4:;
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
L_000ae4b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae4bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000ae4c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae550;
        }
    }
L_000ae4c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ae4c8:;
    {
        cpu->r[11] = 0x000007ffu;
    }
L_000ae4cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_000ae4d0:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_000ae4d4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000ae4d8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000ae544;
        }
    }
L_000ae4dc:;
    {
        cpu->r[5] = (cpu->r[3] >> 6) & 0x1fu;
    }
L_000ae4e0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 12u, &shc); cpu->r[12] = v;
    }
L_000ae4e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae4e8:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[4] = v;
    }
L_000ae4ec:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 2, 26u, &shc));
    }
L_000ae4f0:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[7] = v;
    }
L_000ae4f4:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 2, 27u, &shc));
    }
L_000ae4f8:;
    {
        cpu->r[8] = (cpu->r[3] >> 6) & 0x3fu;
    }
L_000ae4fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000ae500:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_000ae504:;
    {
        cpu->r[8] = (~shifter(cpu->r[8], 2, 25u, &shc));
    }
L_000ae508:;
    {
        cpu->r[7] = (~shifter(cpu->r[7], 2, 25u, &shc));
    }
L_000ae50c:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 2, 25u, &shc));
    }
L_000ae510:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 3, 26u, &shc));
    }
L_000ae514:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 3, 27u, &shc));
    }
L_000ae518:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[5]);
        }
    }
L_000ae51c:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[12]);
        }
    }
L_000ae520:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_000ae524:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_000ae528:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_000ae52c:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 3, 25u, &shc));
    }
L_000ae530:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[8] = (~shifter(cpu->r[8], 3, 25u, &shc));
        }
    }
L_000ae534:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = (~shifter(cpu->r[7], 3, 25u, &shc));
        }
    }
L_000ae538:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[0] + cpu->r[9], cpu->r[8]);
        }
    }
L_000ae53c:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[0] + cpu->r[9], cpu->r[4]);
        }
    }
L_000ae540:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[0] + cpu->r[10], cpu->r[7]);
        }
    }
L_000ae544:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x2u;
        cpu->r[3] = rd16(cpu->r[1] + + 0x2u);
        cpu->r[1] = wb_tmp;
    }
L_000ae548:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae54c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae4cc;
        }
    }
L_000ae550:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ae554:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000ae558:;
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
L_000ae55c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16FindCharRightIdxPKttb @ 000ae560 (arm) */
void fn_000ae560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae560:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae564:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae568:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000ae56c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ae570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae5a4;
        }
    }
L_000ae574:;
    {
        cpu->r[14] = 0x000ae578u; fn_000ae12c(cpu);
    }
L_000ae578:;
    {
        cpu->r[2] = 0x0000ff01u;
    }
L_000ae57c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000ae580:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000ae584:;
    {
        goto L_000ae598;
    }
L_000ae588:;
    {
        uint32_t wb_tmp = cpu->r[5] + (-0x00000002u);
        cpu->r[3] = rd16(cpu->r[5]);
        cpu->r[5] = wb_tmp;
    }
L_000ae58c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000ae590:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ae594:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae598u)) return;
        }
    }
L_000ae598:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae59c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae588;
        }
    }
L_000ae5a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae5a4u)) return;
    }
L_000ae5a4:;
    {
        cpu->r[14] = 0x000ae5a8u; fn_000ae12c(cpu);
    }
L_000ae5a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000ae5ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000ae5b0:;
    {
        goto L_000ae5c4;
    }
L_000ae5b4:;
    {
        uint32_t wb_tmp = cpu->r[5] + (-0x00000002u);
        cpu->r[3] = rd16(cpu->r[5]);
        cpu->r[5] = wb_tmp;
    }
L_000ae5b8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000ae5bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000ae5c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae5c4u)) return;
        }
    }
L_000ae5c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae5c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae5b4;
        }
    }
L_000ae5cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae5d0u)) return;
    }
}

/* _Z13CharToUnicodePtPKc @ 000ae5d0 (arm) */
void fn_000ae5d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae5d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae5d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae5d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000ae5dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ae5e0:;
    {
        goto L_000ae5f0;
    }
L_000ae5e4:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_000ae5e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ae5ec:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ae5f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ae5f4:;
    {
        cpu->r[14] = 0x000ae5f8u; imp_strlen(cpu); /* strlen */
    }
L_000ae5f8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae5fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000ae600:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000ae5e4;
        }
    }
L_000ae604:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000ae608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae60c:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000ae610:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae614u)) return;
    }
}

/* _Z9toUnicodePc @ 000ae614 (arm) */
void fn_000ae614(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae614:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000ae618:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae61c:;
    {
        cpu->r[14] = 0x000ae620u; imp_strlen(cpu); /* strlen */
    }
L_000ae620:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000ae624:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
        }
    }
L_000ae628:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ae650;
        }
    }
L_000ae62c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000ae630:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ae634:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000ae638:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000ae63c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000ae640:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000ae644:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_000ae648:;
    {
        wr16(cpu->r[1] + - 0x2u, cpu->r[12]);
    }
L_000ae64c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000ae638;
        }
    }
L_000ae650:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ae654:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000ae658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ae65c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae660u)) return;
    }
}

/* _Z4trimPc @ 000ae660 (arm) */
void fn_000ae660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae660:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000ae664:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ae668:;
    {
        cpu->r[14] = 0x000ae66cu; imp_strlen(cpu); /* strlen */
    }
L_000ae66c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae674u)) return;
        }
    }
L_000ae674:;
    {
        cpu->r[14] = 0x000ae678u; imp__Znaj(cpu); /* _Znaj */
    }
L_000ae678:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000ae67c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ae680:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ae684:;
    {
        cpu->r[14] = 0x000ae688u; imp_strncpy(cpu); /* strncpy */
    }
L_000ae688:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000ae68c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ae690:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = cpu->r[4];
        }
    }
L_000ae694:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000ae698:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ae708;
        }
    }
L_000ae69c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_000ae6a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ae6a4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000ae6a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000ae6ac:;
    {
        cpu->r[14] = 0x000ae6b0u; imp_strncpy(cpu); /* strncpy */
    }
L_000ae6b0:;
    {
        wr8(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000ae6b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ae6b8:;
    {
        cpu->r[14] = 0x000ae6bcu; imp_strlen(cpu); /* strlen */
    }
L_000ae6bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000ae6c0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ae6e0;
        }
    }
L_000ae6c4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_000ae6c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000ae6cc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
        }
    }
L_000ae6d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae6f4;
        }
    }
L_000ae6d4:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[7]);
    }
L_000ae6d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000ae6dc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000ae6c4;
        }
    }
L_000ae6e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000ae6e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae6e8u)) return;
        }
    }
L_000ae6e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ae6ec:;
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
L_000ae6f0:;
    {
        return fn_0018ba20(cpu);
    }
L_000ae6f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_000ae6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae6d4;
        }
    }
L_000ae6fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000ae700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae6e8;
        }
    }
L_000ae704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ae708u)) return;
    }
L_000ae708:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ae70c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000ae710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000ae714:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
        }
    }
L_000ae718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae730;
        }
    }
L_000ae71c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae720:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000ae724:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ae70c;
        }
    }
L_000ae728:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000ae72c:;
    {
        goto L_000ae69c;
    }
L_000ae730:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_000ae734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae71c;
        }
    }
L_000ae738:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000ae73c:;
    {
        goto L_000ae69c;
    }
}

/* _Z7sprintfPtPKtz @ 000ae740 (arm) */
void fn_000ae740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae740:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[1]);
        wr32(cpu->r[13] + 4u, cpu->r[2]);
        wr32(cpu->r[13] + 8u, cpu->r[3]);
    }
L_000ae744:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000ae748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000ae74c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ae750:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ae754:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ae758:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000ae75c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000ae760:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000ae764:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae768:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000ae76c:;
    {
        cpu->r[3] = rd16(cpu->r[5] + cpu->r[3]);
    }
L_000ae770:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae7d0;
        }
    }
L_000ae778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000025u, 1, 1);
    }
L_000ae77c:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000ae780:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000ae784:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_000ae788:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae764;
        }
    }
L_000ae78c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ae790:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae794:;
    {
        cpu->r[3] = rd16(cpu->r[5] + cpu->r[3]);
    }
L_000ae798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000ae79c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae80c;
        }
    }
L_000ae7a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000073u, 1, 1);
    }
L_000ae7a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae7e8;
        }
    }
L_000ae7a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000025u, 1, 1);
    }
L_000ae7ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ae7b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_000ae7b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000ae7b8:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000ae7bc:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae7c0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000ae7c4:;
    {
        cpu->r[3] = rd16(cpu->r[5] + cpu->r[3]);
    }
L_000ae7c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ae7cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae778;
        }
    }
L_000ae7d0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000ae7d4:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_000ae7d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000ae7dc:;
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
L_000ae7e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ae7e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ae7e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000ae7ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000ae7f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ae7f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ae7f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000ae7fc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ae800:;
    {
        cpu->r[14] = 0x000ae804u; fn_000ae160(cpu);
    }
L_000ae804:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000ae808:;
    {
        goto L_000ae7bc;
    }
L_000ae80c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000ae810:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000ae814:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ae818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ae81c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000ae820:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ae824:;
    {
        cpu->r[14] = 0x000ae828u; fn_000ae2bc(cpu);
    }
L_000ae828:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000ae82c:;
    {
        goto L_000ae7bc;
    }
}

/* _Z7sprintfPtPKcz @ 000ae830 (arm) */
void fn_000ae830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae830:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[1]);
        wr32(cpu->r[13] + 4u, cpu->r[2]);
        wr32(cpu->r[13] + 8u, cpu->r[3]);
    }
L_000ae834:;
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
L_000ae838:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000ae83c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ae840:;
    {
        cpu->r[9] = rd32(0x000ae848u + + 0x180u);
    }
L_000ae844:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_000ae848:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000ae84c:;
    {
        cpu->r[8] = rd32(0x000ae854u + + 0x178u);
    }
L_000ae850:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_000ae854:;
    {
        cpu->r[6] = rd32(0x000ae85cu + + 0x174u);
    }
L_000ae858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000ae85c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000ae860:;
    {
        cpu->r[6] = add_flags(cpu, 0x000ae868u, cpu->r[6], 0, 0);
    }
L_000ae864:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[10]);
    }
L_000ae868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000ae86c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae8bc;
        }
    }
L_000ae874:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000025u, 1, 1);
    }
L_000ae878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae8d4;
        }
    }
L_000ae87c:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000ae880:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_000ae884:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ae888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae904;
        }
    }
L_000ae88c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000ae890:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ae894:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000ae898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae930;
        }
    }
L_000ae89c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000ae8a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae8a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ae8a8:;
    {
        wr16(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_000ae8ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000ae8b0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[10]);
    }
L_000ae8b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ae8b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae874;
        }
    }
L_000ae8bc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_000ae8c0:;
    {
        wr16(cpu->r[7] + cpu->r[4], cpu->r[2]);
    }
L_000ae8c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000ae8c8:;
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
L_000ae8cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ae8d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000ae8d4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae8d8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[10]);
    }
L_000ae8dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000ae8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae9a4;
        }
    }
L_000ae8e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000073u, 1, 1);
    }
L_000ae8e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ae980;
        }
    }
L_000ae8ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000025u, 1, 1);
    }
L_000ae8f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae8f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_000ae8f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000ae8fc:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
        }
    }
L_000ae900:;
    {
        goto L_000ae864;
    }
L_000ae904:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000ae908:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000ae90c:;
    {
        cpu->r[14] = 0x000ae910u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ae910:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000ae914:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ae918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae960;
        }
    }
L_000ae91c:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000ae920:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000ae924:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000ae928:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000ae92c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae89c;
        }
    }
L_000ae930:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000003au, 1, 1);
    }
L_000ae934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ae89c;
        }
    }
L_000ae938:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000ae93c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ae940:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_000ae944:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000ae948:;
    {
        wr16(cpu->r[7] + cpu->r[1], cpu->r[0]);
    }
L_000ae94c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000ae950:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_000ae954:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae958:;
    {
        wr16(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_000ae95c:;
    {
        goto L_000ae864;
    }
L_000ae960:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000ae964:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000ae968:;
    {
        cpu->r[14] = 0x000ae96cu; fn_00094228(cpu);
    }
L_000ae96c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000ae970:;
    {
        cpu->r[14] = 0x000ae974u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ae974:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000ae978:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000ae97c:;
    {
        goto L_000ae920;
    }
L_000ae980:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ae984:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000ae988:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae98c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ae990:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ae994:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ae998:;
    {
        cpu->r[14] = 0x000ae99cu; fn_000ae160(cpu);
    }
L_000ae99c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000ae9a0:;
    {
        goto L_000ae864;
    }
L_000ae9a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ae9a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000ae9ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000ae9b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ae9b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ae9b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000ae9bc:;
    {
        cpu->r[14] = 0x000ae9c0u; fn_000ae2bc(cpu);
    }
L_000ae9c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000ae9c4:;
    {
        goto L_000ae864;
    }
}

/* _Z11LockStringsv @ 000ae9d4 (arm) */
void fn_000ae9d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae9d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13UnlockStringsv @ 000ae9d8 (arm) */
void fn_000ae9d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae9d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10StringPackC2Ev @ 000ae9dc (arm) */
void fn_000ae9dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ae9dc:;
    {
        cpu->r[2] = rd32(0x000ae9e4u + + 0x24u);
    }
L_000ae9e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ae9e4:;
    {
        cpu->r[1] = rd32(0x000ae9ecu + + 0x20u);
    }
L_000ae9e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ae9f0u, cpu->r[2], 0, 0);
    }
L_000ae9ec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_000ae9f0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000ae9f4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ae9f8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_000ae9fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000aea00:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000aea04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10StringPackC1Ev @ 000aea10 (arm) */
void fn_000aea10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aea10:;
    {
        cpu->r[2] = rd32(0x000aea18u + + 0x24u);
    }
L_000aea14:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000aea18:;
    {
        cpu->r[1] = rd32(0x000aea20u + + 0x20u);
    }
L_000aea1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000aea24u, cpu->r[2], 0, 0);
    }
L_000aea20:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_000aea24:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000aea28:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000aea2c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_000aea30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000aea34:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_000aea38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10StringPack9GetStringEi @ 000aea44 (arm) */
void fn_000aea44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aea44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000aea48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aea4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aea68;
        }
    }
L_000aea50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000aea54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_000aea58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_000aea5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[1] + - 0x2u);
        }
    }
L_000aea60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000aea64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000aea68:;
    {
        cpu->r[0] = rd32(0x000aea70u + + 0x4u);
    }
L_000aea6c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000aea74u, cpu->r[0], 0, 0);
    }
L_000aea70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13StringManager11FreeAllPackEv @ 000aea78 (arm) */
void fn_000aea78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aea78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aea7c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000aea80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aea84:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_000aea88:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000aea8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000aea90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aea80;
        }
    }
L_000aea94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13StringManager14GetDebugStringEi @ 000aea98 (arm) */
void fn_000aea98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aea98:;
    {
        cpu->r[0] = rd32(0x000aeaa0u + + 0x4u);
    }
L_000aea9c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000aeaa4u, cpu->r[0], 0, 0);
    }
L_000aeaa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13StringManager9GetStringEii @ 000aeaa8 (arm) */
void fn_000aeaa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeaa8:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000aeaac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000aeab0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000aeab4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 10u, &shc); cpu->r[3] = v;
    }
L_000aeab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000aeabc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000aeacc;
        }
    }
L_000aeac0:;
    {
        cpu->r[0] = rd32(0x000aeac8u + + 0x18u);
    }
L_000aeac4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000aeaccu, cpu->r[0], 0, 0);
    }
L_000aeac8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000aeacc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000aead0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 10u, &shc), 1, 0);
    }
L_000aead4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000aead8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000aeadc:;
    {
        return fn_000aea44(cpu);
    }
}

/* _ZN13StringManager10TestStringEi @ 000aeae4 (arm) */
void fn_000aeae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeae4:;
    {
        cpu->r[3] = 0x0000ffffu;
    }
L_000aeae8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000aeaec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aeb20;
        }
    }
L_000aeaf0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 10u, &shc); cpu->r[3] = v;
    }
L_000aeaf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000aeaf8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000aeb20;
        }
    }
L_000aeafc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_000aeb00:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 10u, &shc), 1, 0);
    }
L_000aeb04:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000aeb08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000aeb0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000aeb10:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000aeb14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000aeb18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000aeb1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000aeb20:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000aeb24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z9GetStringii @ 000aeb28 (arm) */
void fn_000aeb28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeb28:;
    {
        cpu->r[3] = rd32(0x000aeb30u + + 0x20u);
    }
L_000aeb2c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aeb30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000aeb34:;
    {
        cpu->r[0] = rd32(0x000aeb3cu + + 0x18u);
    }
L_000aeb38:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aeb40u, cpu->r[3], 0, 0);
    }
L_000aeb3c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000aeb40:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000aeb44:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000aeb48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000aeb4c:;
    {
        return fn_000aeaa8(cpu);
    }
}

/* _Z14GetStringShortii @ 000aeb58 (arm) */
void fn_000aeb58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeb58:;
    {
        cpu->r[3] = rd32(0x000aeb60u + + 0x20u);
    }
L_000aeb5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000aeb60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000aeb64:;
    {
        cpu->r[0] = rd32(0x000aeb6cu + + 0x18u);
    }
L_000aeb68:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aeb70u, cpu->r[3], 0, 0);
    }
L_000aeb6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000aeb70:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000aeb74:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000aeb78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000aeb7c:;
    {
        return fn_000aeaa8(cpu);
    }
}

/* _Z10TestStringi @ 000aeb88 (arm) */
void fn_000aeb88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeb88:;
    {
        cpu->r[3] = rd32(0x000aeb90u + + 0x1cu);
    }
L_000aeb8c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000aeb90:;
    {
        cpu->r[2] = rd32(0x000aeb98u + + 0x18u);
    }
L_000aeb94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aeb9cu, cpu->r[3], 0, 0);
    }
L_000aeb98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aeb9c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000aeba0:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_000aeba4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000aeba8:;
    {
        return fn_000aeae4(cpu);
    }
}

/* _ZN13StringManager11FreeAllDataEv @ 000aebb4 (arm) */
void fn_000aebb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aebb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13StringManager18Package_UnRegisterEi @ 000aebb8 (arm) */
void fn_000aebb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aebb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13StringManager16Package_RegisterEi @ 000aebbc (arm) */
void fn_000aebbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aebbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10StringPack6UnloadEv @ 000aebc0 (arm) */
void fn_000aebc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aebc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aebc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aebc8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_000aebcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aebd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aebe0;
        }
    }
L_000aebd4:;
    {
        cpu->r[14] = 0x000aebd8u; fn_0018ba60(cpu);
    }
L_000aebd8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aebdc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000aebe0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aebe4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aebe8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aebecu)) return;
        }
    }
L_000aebec:;
    {
        cpu->r[14] = 0x000aebf0u; fn_0018ba60(cpu);
    }
L_000aebf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aebf4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_000aebf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aebfcu)) return;
    }
}

/* _ZN10StringPackD1Ev @ 000aebfc (arm) */
void fn_000aebfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aebfc:;
    {
        cpu->r[3] = rd32(0x000aec04u + + 0x2cu);
    }
L_000aec00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aec04:;
    {
        cpu->r[2] = rd32(0x000aec0cu + + 0x28u);
    }
L_000aec08:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aec10u, cpu->r[3], 0, 0);
    }
L_000aec0c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_000aec10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aec14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aec18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aec1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aec20:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000aec24:;
    {
        cpu->r[14] = 0x000aec28u; fn_000aebc0(cpu);
    }
L_000aec28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aec2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aec30u)) return;
    }
}

/* _ZN10StringPackD2Ev @ 000aec38 (arm) */
void fn_000aec38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aec38:;
    {
        cpu->r[3] = rd32(0x000aec40u + + 0x2cu);
    }
L_000aec3c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000aec40:;
    {
        cpu->r[2] = rd32(0x000aec48u + + 0x28u);
    }
L_000aec44:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aec4cu, cpu->r[3], 0, 0);
    }
L_000aec48:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_000aec4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aec50:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aec54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aec58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aec5c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000aec60:;
    {
        cpu->r[14] = 0x000aec64u; fn_000aebc0(cpu);
    }
L_000aec64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aec68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aec6cu)) return;
    }
}

/* _ZN10StringPackD0Ev @ 000aec74 (arm) */
void fn_000aec74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aec74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aec78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aec7c:;
    {
        cpu->r[14] = 0x000aec80u; fn_000aebfc(cpu);
    }
L_000aec80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aec84:;
    {
        cpu->r[14] = 0x000aec88u; fn_0018ba20(cpu);
    }
L_000aec88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aec8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aec90u)) return;
    }
}

/* _ZN13StringManagerD1Ev @ 000aec90 (arm) */
void fn_000aec90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aec90:;
    {
        cpu->r[3] = rd32(0x000aec98u + + 0xdcu);
    }
L_000aec94:;
    {
        cpu->r[2] = rd32(0x000aec9cu + + 0xdcu);
    }
L_000aec98:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aeca0u, cpu->r[3], 0, 0);
    }
L_000aec9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000aeca0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aeca4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000aeca8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000aecac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aecb0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000aecb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aecb8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000aecbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000aecc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aecc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aed18;
        }
    }
L_000aecc8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_000aeccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000aecd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000aecd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aece0;
        }
    }
L_000aecd8:;
    {
        goto L_000aed04;
    }
L_000aecdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aece0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 0);
    }
L_000aece4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x10u);
    }
L_000aece8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aecec:;
    {
        cpu->r[14] = 0x000aecf4u;
    }
L_000aecf0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000aecf4u)) return;
    }
L_000aecf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000aecf8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000aecfc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000aed00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aecdc;
        }
    }
L_000aed04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000aed08:;
    {
        cpu->r[14] = 0x000aed0cu; fn_0018ba60(cpu);
    }
L_000aed0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000aed10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000aed14:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[7]);
    }
L_000aed18:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000aed1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000003cu, 1, 1);
    }
L_000aed20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aecbc;
        }
    }
L_000aed24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aed28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aed38;
        }
    }
L_000aed2c:;
    {
        cpu->r[14] = 0x000aed30u; fn_0018ba60(cpu);
    }
L_000aed30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aed34:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_000aed38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000aed3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_000aed40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aed44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aed60;
        }
    }
L_000aed48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000aed4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000aed50:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_000aed54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000aed58:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000aed68;
        }
    }
L_000aed5c:;
    {
        cpu->r[14] = 0x000aed60u; fn_002082a8(cpu);
    }
L_000aed60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aed64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aed68u)) return;
    }
L_000aed68:;
    {
        cpu->r[14] = 0x000aed6cu; fn_0018ba20(cpu);
    }
L_000aed6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aed70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aed74u)) return;
    }
}

/* _ZN13StringManagerD0Ev @ 000aed7c (arm) */
void fn_000aed7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aed7c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000aed80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aed84:;
    {
        cpu->r[14] = 0x000aed88u; fn_000aec90(cpu);
    }
L_000aed88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aed8c:;
    {
        cpu->r[14] = 0x000aed90u; fn_0018ba20(cpu);
    }
L_000aed90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000aed94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000aed98u)) return;
    }
}

/* _ZN13StringManagerC1Ev @ 000aed98 (arm) */
void fn_000aed98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aed98:;
    {
        cpu->r[3] = rd32(0x000aeda0u + + 0x94u);
    }
L_000aed9c:;
    {
        cpu->r[1] = rd32(0x000aeda4u + + 0x94u);
    }
L_000aeda0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aeda8u, cpu->r[3], 0, 0);
    }
L_000aeda4:;
    {
        cpu->r[2] = rd32(0x000aedacu + + 0x90u);
    }
L_000aeda8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000aedac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000aedb0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aedb4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000aedb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000aedbc:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[4]);
    }
L_000aedc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aedc4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_000aedc8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000aedcc:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[4]);
    }
L_000aedd0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000aedd4:;
    {
        cpu->r[14] = 0x000aedd8u; fn_00096b9c(cpu);
    }
L_000aedd8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000aeddc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000aede0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000aede4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000aede8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_000aedec:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_000aedf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aedf4:;
    {
        wr8(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_000aedf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000aedfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000aee00:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000aee04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aedf0;
        }
    }
L_000aee08:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[4]);
    }
L_000aee0c:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_000aee10:;
    {
        cpu->r[14] = 0x000aee14u; imp__Znaj(cpu); /* _Znaj */
    }
L_000aee14:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000aee18:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_000aee1c:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_000aee20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000aee24:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_000aee28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aee1c;
        }
    }
L_000aee2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aee30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aee34u)) return;
    }
}

/* _ZN13StringManagerC2Ev @ 000aee40 (arm) */
void fn_000aee40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aee40:;
    {
        cpu->r[3] = rd32(0x000aee48u + + 0x94u);
    }
L_000aee44:;
    {
        cpu->r[1] = rd32(0x000aee4cu + + 0x94u);
    }
L_000aee48:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aee50u, cpu->r[3], 0, 0);
    }
L_000aee4c:;
    {
        cpu->r[2] = rd32(0x000aee54u + + 0x90u);
    }
L_000aee50:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000aee54:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000aee58:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aee5c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000aee60:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000aee64:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[4]);
    }
L_000aee68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aee6c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_000aee70:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000aee74:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[4]);
    }
L_000aee78:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000aee7c:;
    {
        cpu->r[14] = 0x000aee80u; fn_00096b9c(cpu);
    }
L_000aee80:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000aee84:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000aee88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000aee8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000aee90:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_000aee94:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_000aee98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000aee9c:;
    {
        wr8(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_000aeea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000aeea4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000aeea8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000aeeac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aee98;
        }
    }
L_000aeeb0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[4]);
    }
L_000aeeb4:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_000aeeb8:;
    {
        cpu->r[14] = 0x000aeebcu; imp__Znaj(cpu); /* _Znaj */
    }
L_000aeebc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000aeec0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[0]);
    }
L_000aeec4:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_000aeec8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000aeecc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_000aeed0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aeec4;
        }
    }
L_000aeed4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aeed8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aeedcu)) return;
    }
}

/* _ZN10StringPack4LoadEP8LZMAFileii @ 000aeee8 (arm) */
void fn_000aeee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aeee8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000aeeec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aeef0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000aeef4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000aeef8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000aeefc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000aef00:;
    {
        cpu->r[14] = 0x000aef04u; fn_000fc650(cpu);
    }
L_000aef04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_000aef08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aef0c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000aef10:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000aef14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aef34;
        }
    }
L_000aef18:;
    {
        { uint32_t v = cpu->r[7] & 0x00000001u; set_nz(cpu, v); }
    }
L_000aef1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aef34;
        }
    }
L_000aef20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000aef24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aef28:;
    {
        cpu->r[14] = 0x000aef2cu; fn_000fc5ec(cpu);
    }
L_000aef2c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000aef30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aef34u)) return;
    }
L_000aef34:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000aef38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aef20;
        }
    }
L_000aef3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aef40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aef4c;
        }
    }
L_000aef44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000aef48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aef4cu)) return;
    }
L_000aef4c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_000aef50:;
    {
        cpu->r[14] = 0x000aef54u; imp__Znaj(cpu); /* _Znaj */
    }
L_000aef54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aef58:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000aef5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000aef60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aef64u)) return;
        }
    }
L_000aef64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_000aef68:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000aef6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aef70:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000aef74:;
    {
        cpu->r[14] = 0x000aef78u; fn_000fc5f4(cpu);
    }
L_000aef78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000aef7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000aef44;
        }
    }
L_000aef80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000aef84:;
    {
        cpu->r[14] = 0x000aef88u; imp__Znaj(cpu); /* _Znaj */
    }
L_000aef88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000aef8c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000aef90:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000aef94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_000aef98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aef9cu)) return;
        }
    }
L_000aef9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000aefa0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000aefa4:;
    {
        cpu->r[14] = 0x000aefa8u; fn_000fc5f4(cpu);
    }
L_000aefa8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000aefac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000aefb0u)) return;
    }
}

/* _ZN13StringManagerD2Ev @ 000aefb0 (arm) */
void fn_000aefb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000aefb0:;
    {
        cpu->r[3] = rd32(0x000aefb8u + + 0xdcu);
    }
L_000aefb4:;
    {
        cpu->r[2] = rd32(0x000aefbcu + + 0xdcu);
    }
L_000aefb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000aefc0u, cpu->r[3], 0, 0);
    }
L_000aefbc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000aefc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000aefc4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000aefc8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_000aefcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000aefd0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000aefd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000aefd8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000aefdc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000aefe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000aefe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af038;
        }
    }
L_000aefe8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_000aefec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000aeff0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000aeff4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af000;
        }
    }
L_000aeff8:;
    {
        goto L_000af024;
    }
L_000aeffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000af000:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 0);
    }
L_000af004:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x10u);
    }
L_000af008:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000af00c:;
    {
        cpu->r[14] = 0x000af014u;
    }
L_000af010:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af014u)) return;
    }
L_000af014:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000af018:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000af01c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000af020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aeffc;
        }
    }
L_000af024:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000af028:;
    {
        cpu->r[14] = 0x000af02cu; fn_0018ba60(cpu);
    }
L_000af02c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_000af030:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af034:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[7]);
    }
L_000af038:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000af03c:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000003cu, 1, 1);
    }
L_000af040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000aefdc;
        }
    }
L_000af044:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af058;
        }
    }
L_000af04c:;
    {
        cpu->r[14] = 0x000af050u; fn_0018ba60(cpu);
    }
L_000af050:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000af054:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_000af058:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_000af05c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_000af060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af080;
        }
    }
L_000af068:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000af06c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000af070:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_000af074:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000af078:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000af088;
        }
    }
L_000af07c:;
    {
        cpu->r[14] = 0x000af080u; fn_002082a8(cpu);
    }
L_000af080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af084:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af088u)) return;
    }
L_000af088:;
    {
        cpu->r[14] = 0x000af08cu; fn_0018ba20(cpu);
    }
L_000af08c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af090:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af094u)) return;
    }
}

/* _ZN13StringManager12RefreshPacksEi @ 000af09c (arm) */
void fn_000af09c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af09c:;
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
L_000af0a0:;
    {
        cpu->r[2] = rd32(0x000af0a8u + + 0x3b4u);
    }
L_000af0a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000af0a8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000af0ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x000af0b4u, cpu->r[2], 0, 0);
    }
L_000af0b0:;
    {
        cpu->r[5] = rd32(0x000af0b8u + + 0x3a8u);
    }
L_000af0b4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000af0b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000af0bc:;
    {
        cpu->r[14] = 0x000af0c0u; fn_000ae9d4(cpu);
    }
L_000af0c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af0c4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000af0c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000af0cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000af0d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af3c4;
        }
    }
L_000af0d4:;
    {
        cpu->r[12] = rd32(0x000af0dcu + + 0x388u);
    }
L_000af0d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000af0dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af0e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000af0e4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000af0e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000af0ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000af0f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000af0f4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000af0f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af0fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000af230;
        }
    }
L_000af100:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af104:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000af108:;
    {
        cpu->r[12] = rd32(0x000af110u + + 0x358u);
    }
L_000af10c:;
    {
        uint32_t v = cpu->r[4] & 0x00000001u; cpu->r[4] = v;
    }
L_000af110:;
    {
        cpu->r[1] = rd32(0x000af118u + + 0x354u);
    }
L_000af114:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000af118:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_000af11c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000af120:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_000af124:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000af128:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000af12c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000af130:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000af134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af270;
        }
    }
L_000af138:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000af13c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000af140:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af144:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000af148:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000af14c:;
    {
        cpu->r[14] = 0x000af150u; fn_00189f5c(cpu);
    }
L_000af150:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af154:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_000af158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af15c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_000af160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af368;
        }
    }
L_000af164:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000af168:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_000af16c:;
    {
        cpu->r[14] = 0x000af170u; fn_00189998(cpu);
    }
L_000af170:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af3f8;
        }
    }
L_000af178:;
    {
        cpu->r[14] = 0x000af17cu; fn_000fc650(cpu);
    }
L_000af17c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_000af180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_000af184:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af3e0;
        }
    }
L_000af188:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_000af18c:;
    {
        cpu->r[14] = 0x000af190u; imp__Znaj(cpu); /* _Znaj */
    }
L_000af190:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af194:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000af198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af404;
        }
    }
L_000af19c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000af1a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000af1a4:;
    {
        cpu->r[2] = 0x00000024u;
    }
L_000af1a8:;
    {
        cpu->r[14] = 0x000af1acu; fn_000fc5f4(cpu);
    }
L_000af1ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000af1b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000af1b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af2bc;
        }
    }
L_000af1b8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_000af1bc:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000af1c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000af1c4:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x8u);
    }
L_000af1c8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000af1cc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x8u);
    }
L_000af1d0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af1d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000af1d8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_000af1dc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_000af1e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af240;
        }
    }
L_000af1e4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af1e8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000af1ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000af1f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000af1f4:;
    {
        cpu->r[14] = 0x000af1f8u; fn_000aeee8(cpu);
    }
L_000af1f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000af1fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_000af200:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000040u, 1, 1);
    }
L_000af204:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000af208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af1c4;
        }
    }
L_000af20c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000af210:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000af214:;
    {
        cpu->r[14] = 0x000af218u; fn_0018ba60(cpu);
    }
L_000af218:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000af21c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_000af220:;
    {
        cpu->r[14] = 0x000af224u; fn_00189868(cpu);
    }
L_000af224:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000af228:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_000af22c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af128;
        }
    }
L_000af230:;
    {
        cpu->r[14] = 0x000af234u; fn_000ae9d8(cpu);
    }
L_000af234:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000af238:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000af23c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af240u)) return;
    }
L_000af240:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af244:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000af248:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000af24c:;
    {
        cpu->r[14] = 0x000af250u; fn_000aebc0(cpu);
    }
L_000af250:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af254:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000af258:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000af25c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000af260:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000af264:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000af268:;
    {
        cpu->r[14] = 0x000af26cu; fn_000aeee8(cpu);
    }
L_000af26c:;
    {
        goto L_000af1f8;
    }
L_000af270:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000af274:;
    {
        cpu->r[14] = 0x000af278u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000af278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af27c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af138;
        }
    }
L_000af280:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af284:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000af288:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000af28c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af290:;
    {
        cpu->r[14] = 0x000af294u; fn_00189f48(cpu);
    }
L_000af294:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000af298:;
    {
        cpu->r[14] = 0x000af29cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000af29c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af2a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000af2a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af2a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000af2ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000af2b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000af2b4:;
    {
        cpu->r[14] = 0x000af2b8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000af2b8:;
    {
        goto L_000af138;
    }
L_000af2bc:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000af2c0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_000af2c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000af2c8:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x8u);
    }
L_000af2cc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_000af2d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af2d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000af2d8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_000af2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af338;
        }
    }
L_000af2e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af2e4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000af2e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000af2ec:;
    {
        cpu->r[14] = 0x000af2f0u; fn_000aebc0(cpu);
    }
L_000af2f0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af2f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000af2f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000af2fc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af300:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000af304:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000af308:;
    {
        cpu->r[14] = 0x000af30cu; fn_000aeee8(cpu);
    }
L_000af30c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000af310:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000af314:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000040u, 1, 1);
    }
L_000af318:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000af31c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af20c;
        }
    }
L_000af320:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x8u);
    }
L_000af324:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_000af328:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af32c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000af330:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_000af334:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af2e0;
        }
    }
L_000af338:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af33c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000af340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000af344:;
    {
        cpu->r[14] = 0x000af348u; fn_000aebc0(cpu);
    }
L_000af348:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af34c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000af350:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000af354:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000af358:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000af35c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000af360:;
    {
        cpu->r[14] = 0x000af364u; fn_000aeee8(cpu);
    }
L_000af364:;
    {
        goto L_000af30c;
    }
L_000af368:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_000af36c:;
    {
        cpu->r[14] = 0x000af370u; imp__Znaj(cpu); /* _Znaj */
    }
L_000af370:;
    {
        cpu->r[3] = 0x00000010u;
    }
L_000af374:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_000af378:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000af37c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000af380:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000af384:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000af388:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[12]);
    }
L_000af38c:;
    {
        cpu->r[14] = 0x000af390u; fn_000aea10(cpu);
    }
L_000af390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_000af394:;
    {
        cpu->r[14] = 0x000af398u; fn_000aea10(cpu);
    }
L_000af398:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_000af39c:;
    {
        cpu->r[14] = 0x000af3a0u; fn_000aea10(cpu);
    }
L_000af3a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_000af3a4:;
    {
        cpu->r[14] = 0x000af3a8u; fn_000aea10(cpu);
    }
L_000af3a8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000af3ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000af3b0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[11], 2, 2u, &shc), cpu->r[5]);
    }
L_000af3b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af164;
        }
    }
L_000af3b8:;
    {
        cpu->r[14] = 0x000af3bcu; fn_000ae9d8(cpu);
    }
L_000af3bc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000af3c0:;
    {
        goto L_000af238;
    }
L_000af3c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000af3c8:;
    {
        cpu->r[14] = 0x000af3ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000af3cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000af3d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af41c;
        }
    }
L_000af3d4:;
    {
        cpu->r[1] = rd32(0x000af3dcu + + 0x88u);
    }
L_000af3d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000af3dc:;
    {
        goto L_000af0dc;
    }
L_000af3e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000af3e4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_000af3e8:;
    {
        cpu->r[14] = 0x000af3ecu; fn_00189868(cpu);
    }
L_000af3ec:;
    {
        cpu->r[14] = 0x000af3f0u; fn_000ae9d8(cpu);
    }
L_000af3f0:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_000af3f4:;
    {
        goto L_000af238;
    }
L_000af3f8:;
    {
        cpu->r[14] = 0x000af3fcu; fn_000ae9d8(cpu);
    }
L_000af3fc:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000af400:;
    {
        goto L_000af238;
    }
L_000af404:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000af408:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_000af40c:;
    {
        cpu->r[14] = 0x000af410u; fn_00189868(cpu);
    }
L_000af410:;
    {
        cpu->r[14] = 0x000af414u; fn_000ae9d8(cpu);
    }
L_000af414:;
    {
        cpu->r[0] = (~0x00000003u);
    }
L_000af418:;
    {
        goto L_000af238;
    }
L_000af41c:;
    {
        cpu->r[2] = rd32(0x000af424u + + 0x40u);
    }
L_000af420:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af424:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000af428:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000af42c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000af430:;
    {
        cpu->r[14] = 0x000af434u; fn_00189f48(cpu);
    }
L_000af434:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000af438:;
    {
        cpu->r[14] = 0x000af43cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000af43c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000af440:;
    {
        cpu->r[3] = rd32(0x000af448u + + 0x20u);
    }
L_000af444:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000af448:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000af44c:;
    {
        cpu->r[3] = rd32(0x000af454u + + 0x18u);
    }
L_000af450:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000af454:;
    {
        cpu->r[14] = 0x000af458u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000af458:;
    {
        goto L_000af0dc;
    }
}

/* _ZN14CarSceneObject15SetShadowMatrixER7CMatrixffff8Vector3d @ 000af470 (arm) */
void fn_000af470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af470:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject15RenderCarShadowE8Vector3di @ 000af474 (arm) */
void fn_000af474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af474:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x178u);
    }
L_000af478:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000af47c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af480:;
    {
        cpu->r[6] = rd32(0x000af488u + + 0x11cu);
    }
L_000af484:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000af488:;
    {
        cpu->r[6] = add_flags(cpu, 0x000af490u, cpu->r[6], 0, 0);
    }
L_000af48c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af490u)) return;
        }
    }
L_000af490:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000af494:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000af498:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af49cu)) return;
        }
    }
L_000af49c:;
    {
        cpu->r[3] = rd32(0x000af4a4u + + 0x104u);
    }
L_000af4a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000c60u, 0, 0);
    }
L_000af4a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af4a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000af4ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af4b0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000af4b4:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af4b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af4bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af4c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af4c4:;
    {
        cpu->r[14] = 0x000af4ccu;
    }
L_000af4c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af4ccu)) return;
    }
L_000af4cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af4d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af4d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af4d8:;
    {
        cpu->r[14] = 0x000af4e0u;
    }
L_000af4dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af4e0u)) return;
    }
L_000af4e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af4e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af4e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af4ec:;
    {
        cpu->r[14] = 0x000af4f4u;
    }
L_000af4f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af4f4u)) return;
    }
L_000af4f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af4f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af4fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af500:;
    {
        cpu->r[14] = 0x000af508u;
    }
L_000af504:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af508u)) return;
    }
L_000af508:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af50c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000af510:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af514:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000af518:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000af51c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000af520:;
    {
        cpu->r[14] = 0x000af528u;
    }
L_000af524:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af528u)) return;
    }
L_000af528:;
    {
        cpu->r[3] = rd32(0x000af530u + + 0x7cu);
    }
L_000af52c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af530:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af534:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af538:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af56c;
        }
    }
L_000af53c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af540:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af544:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af548:;
    {
        cpu->r[14] = 0x000af550u;
    }
L_000af54c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af550u)) return;
    }
L_000af550:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af554:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af558:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af55c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af560:;
    {
        cpu->r[14] = 0x000af568u;
    }
L_000af564:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af568u)) return;
    }
L_000af568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af56cu)) return;
    }
L_000af56c:;
    {
        cpu->r[6] = 0x0000128cu;
    }
L_000af570:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af574:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_000af578:;
    {
        cpu->r[1] = 0x00000022u;
    }
L_000af57c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000af580:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af584:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[2]);
    }
L_000af588:;
    {
        cpu->r[2] = 0x00000023u;
    }
L_000af58c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000af590:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000af594:;
    {
        cpu->r[14] = 0x000af59cu;
    }
L_000af598:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af59cu)) return;
    }
L_000af59c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000af5a0:;
    {
        goto L_000af53c;
    }
}

/* _ZN14CarSceneObject15RenderCopShadowE8Vector3di @ 000af5b0 (arm) */
void fn_000af5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af5b0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x178u);
    }
L_000af5b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000af5b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af5bc:;
    {
        cpu->r[6] = rd32(0x000af5c4u + + 0x11cu);
    }
L_000af5c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000af5c4:;
    {
        cpu->r[6] = add_flags(cpu, 0x000af5ccu, cpu->r[6], 0, 0);
    }
L_000af5c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af5ccu)) return;
        }
    }
L_000af5cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000af5d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000af5d4:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af5d8u)) return;
        }
    }
L_000af5d8:;
    {
        cpu->r[3] = rd32(0x000af5e0u + + 0x104u);
    }
L_000af5dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000c60u, 0, 0);
    }
L_000af5e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af5e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000af5e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af5ec:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000af5f0:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af5f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af5f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af5fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af600:;
    {
        cpu->r[14] = 0x000af608u;
    }
L_000af604:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af608u)) return;
    }
L_000af608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af60c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af610:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af614:;
    {
        cpu->r[14] = 0x000af61cu;
    }
L_000af618:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af61cu)) return;
    }
L_000af61c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af620:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af624:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af628:;
    {
        cpu->r[14] = 0x000af630u;
    }
L_000af62c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af630u)) return;
    }
L_000af630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af634:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af638:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af63c:;
    {
        cpu->r[14] = 0x000af644u;
    }
L_000af640:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af644u)) return;
    }
L_000af644:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af648:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000af64c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af650:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000af654:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000af658:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000af65c:;
    {
        cpu->r[14] = 0x000af664u;
    }
L_000af660:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af664u)) return;
    }
L_000af664:;
    {
        cpu->r[3] = rd32(0x000af66cu + + 0x7cu);
    }
L_000af668:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af66c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af670:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af674:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af6a8;
        }
    }
L_000af678:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af67c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af680:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af684:;
    {
        cpu->r[14] = 0x000af68cu;
    }
L_000af688:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af68cu)) return;
    }
L_000af68c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af690:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af694:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af698:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af69c:;
    {
        cpu->r[14] = 0x000af6a4u;
    }
L_000af6a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af6a4u)) return;
    }
L_000af6a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af6a8u)) return;
    }
L_000af6a8:;
    {
        cpu->r[6] = 0x0000128cu;
    }
L_000af6ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af6b0:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_000af6b4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000af6b8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000af6bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af6c0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[2]);
    }
L_000af6c4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000af6c8:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000af6cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000af6d0:;
    {
        cpu->r[14] = 0x000af6d8u;
    }
L_000af6d4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af6d8u)) return;
    }
L_000af6d8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000af6dc:;
    {
        goto L_000af678;
    }
}

/* _ZN14CarSceneObject19RenderTrafficShadowE8Vector3di @ 000af6ec (arm) */
void fn_000af6ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af6ec:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x178u);
    }
L_000af6f0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000af6f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af6f8:;
    {
        cpu->r[6] = rd32(0x000af700u + + 0x11cu);
    }
L_000af6fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000af700:;
    {
        cpu->r[6] = add_flags(cpu, 0x000af708u, cpu->r[6], 0, 0);
    }
L_000af704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af708u)) return;
        }
    }
L_000af708:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000af70c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000af710:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af714u)) return;
        }
    }
L_000af714:;
    {
        cpu->r[3] = rd32(0x000af71cu + + 0x104u);
    }
L_000af718:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000c60u, 0, 0);
    }
L_000af71c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af720:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000af724:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af728:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000af72c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af730:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af734:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af738:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af73c:;
    {
        cpu->r[14] = 0x000af744u;
    }
L_000af740:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af744u)) return;
    }
L_000af744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af748:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af74c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af750:;
    {
        cpu->r[14] = 0x000af758u;
    }
L_000af754:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af758u)) return;
    }
L_000af758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af75c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af760:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af764:;
    {
        cpu->r[14] = 0x000af76cu;
    }
L_000af768:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af76cu)) return;
    }
L_000af76c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af770:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af774:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af778:;
    {
        cpu->r[14] = 0x000af780u;
    }
L_000af77c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af780u)) return;
    }
L_000af780:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af784:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000af788:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af78c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000af790:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000af794:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000af798:;
    {
        cpu->r[14] = 0x000af7a0u;
    }
L_000af79c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af7a0u)) return;
    }
L_000af7a0:;
    {
        cpu->r[3] = rd32(0x000af7a8u + + 0x7cu);
    }
L_000af7a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000af7a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af7ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af7b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000af7e4;
        }
    }
L_000af7b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af7b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af7bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af7c0:;
    {
        cpu->r[14] = 0x000af7c8u;
    }
L_000af7c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af7c8u)) return;
    }
L_000af7c8:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000af7cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000af7d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af7d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000af7d8:;
    {
        cpu->r[14] = 0x000af7e0u;
    }
L_000af7dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af7e0u)) return;
    }
L_000af7e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af7e4u)) return;
    }
L_000af7e4:;
    {
        cpu->r[6] = 0x0000128cu;
    }
L_000af7e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000af7ec:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_000af7f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000af7f4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000af7f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af7fc:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[2]);
    }
L_000af800:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000af804:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000af808:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000af80c:;
    {
        cpu->r[14] = 0x000af814u;
    }
L_000af810:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af814u)) return;
    }
L_000af814:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000af818:;
    {
        goto L_000af7b4;
    }
}

/* _ZN14CarSceneObject16ForceDriverStateE12EBikerStates @ 000af828 (arm) */
void fn_000af828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af828:;
    {
        wr32(cpu->r[0] + + 0xc00u, cpu->r[1]);
    }
L_000af82c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject19RenderDamageElementEiii @ 000af830 (arm) */
void fn_000af830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af830:;
    {
        cpu->r[12] = rd32(0x000af838u + + 0x90u);
    }
L_000af834:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000af838:;
    {
        cpu->r[12] = add_flags(cpu, 0x000af840u, cpu->r[12], 0, 0);
    }
L_000af83c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000af840:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000af844:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000af848:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000af84c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000af850:;
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
L_000af854:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000af858:;
    {
        cpu->r[4] = rd32(0x000af860u + + 0x6cu);
    }
L_000af85c:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_000af860:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_000af864:;
    {
        cpu->r[4] = add_flags(cpu, 0x000af86cu, cpu->r[4], 0, 0);
    }
L_000af868:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000af86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af8b8;
        }
    }
L_000af870:;
    {
        cpu->r[2] = rd32(0x000af878u + + 0x58u);
    }
L_000af874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000af878:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000af87c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x17cu);
    }
L_000af880:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000af884:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000af888:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000af88c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + - 0x10u);
    }
L_000af890:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000af894:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000af898:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000af89c:;
    {
        cpu->r[4] = rd32(cpu->r[14]);
    }
L_000af8a0:;
    {
        cpu->r[14] = 0x0000128cu;
    }
L_000af8a4:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000af8a8:;
    {
        cpu->r[14] = 0x000af8b0u;
    }
L_000af8ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000af8b0u)) return;
    }
L_000af8b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000af8b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000af8b8u)) return;
    }
L_000af8b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000af8bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000af8b0;
        }
    }
L_000af8c0:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000af8c4:;
    {
        goto L_000af870;
    }
}

/* _ZN14CarSceneObject12RenderDamageEv @ 000af8d4 (arm) */
void fn_000af8d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000af8d4:;
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
L_000af8d8:;
    {
        cpu->r[5] = rd32(0x000af8e0u + + 0x1a8u);
    }
L_000af8dc:;
    {
        cpu->r[8] = rd32(0x000af8e4u + + 0x1a8u);
    }
L_000af8e0:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000af8e4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000af8ecu, cpu->r[5], 0, 0);
    }
L_000af8e8:;
    {
        cpu->r[12] = 0x00000035u;
    }
L_000af8ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000af8f0:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_000af8f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000af8f8:;
    {
        cpu->r[7] = 0x0000012bu;
    }
L_000af8fc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000af900:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000af904:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[12]);
    }
L_000af908:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x1d9u);
    }
L_000af90c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd0cu);
    }
L_000af910:;
    {
        cpu->r[6] = (uint32_t)((int8_t)cpu->r[6]);
    }
L_000af914:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000af918:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af91c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af920:;
    {
        cpu->r[6] = (~cpu->r[6]);
    }
L_000af924:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 31u, &shc); cpu->r[6] = v;
    }
L_000af928:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000af92c:;
    {
        cpu->r[14] = 0x000af930u; fn_000af830(cpu);
    }
L_000af930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0cu);
    }
L_000af934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af938:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000af93c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000af940:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af944:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af948:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af94c:;
    {
        cpu->r[14] = 0x000af950u; fn_000af830(cpu);
    }
L_000af950:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd10u);
    }
L_000af954:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af958:;
    {
        cpu->r[1] = 0x00000019u;
    }
L_000af95c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000af960:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af964:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af968:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000af96c:;
    {
        cpu->r[14] = 0x000af970u; fn_000af830(cpu);
    }
L_000af970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd10u);
    }
L_000af974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af978:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_000af97c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000af980:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af984:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af988:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af98c:;
    {
        cpu->r[14] = 0x000af990u; fn_000af830(cpu);
    }
L_000af990:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd14u);
    }
L_000af994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af998:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_000af99c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000af9a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af9a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af9a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af9ac:;
    {
        cpu->r[14] = 0x000af9b0u; fn_000af830(cpu);
    }
L_000af9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd14u);
    }
L_000af9b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af9b8:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000af9bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c7u, 1, 1);
    }
L_000af9c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af9c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af9c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000af9cc:;
    {
        cpu->r[14] = 0x000af9d0u; fn_000af830(cpu);
    }
L_000af9d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd14u);
    }
L_000af9d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af9d8:;
    {
        cpu->r[1] = 0x00000021u;
    }
L_000af9dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000af9e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000af9e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000af9e8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000af9ec:;
    {
        cpu->r[14] = 0x000af9f0u; fn_000af830(cpu);
    }
L_000af9f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd18u);
    }
L_000af9f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000af9f8:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_000af9fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000afa00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000afa04:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000afa08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000afa0c:;
    {
        cpu->r[14] = 0x000afa10u; fn_000af830(cpu);
    }
L_000afa10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd18u);
    }
L_000afa14:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c7u, 1, 1);
    }
L_000afa18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000afa1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000afa30;
        }
    }
L_000afa20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd0cu);
    }
L_000afa24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000afa28:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000afa2c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000afa74;
        }
    }
L_000afa30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000afa34:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_000afa38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000afa3c:;
    {
        cpu->r[14] = 0x000afa40u; fn_000af830(cpu);
    }
L_000afa40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd18u);
    }
L_000afa44:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000afa48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000afa4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000012cu, 1, 1);
    }
L_000afa50:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000afa54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000afa58:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000afa5c:;
    {
        cpu->r[14] = 0x000afa60u; fn_000af830(cpu);
    }
L_000afa60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000afa64:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000afa68:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000afa6c:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[10]);
    }
L_000afa70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000afa74u)) return;
    }
L_000afa74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd10u);
    }
L_000afa78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_000afa7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000afa80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000afa84:;
    {
        goto L_000afa30;
    }
}

/* _ZN14CarSceneObject27RenderCarTransparentObjectsE8Vector3djfffi @ 000afa90 (arm) */
void fn_000afa90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afa90:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x178u);
    }
L_000afa94:;
    {
        cpu->r[3] = rd32(0x000afa9cu + + 0x198u);
    }
L_000afa98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000afa9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000afaa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000afaa8u, cpu->r[3], 0, 0);
    }
L_000afaa4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000afaa8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_000afaac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000afab0u)) return;
        }
    }
L_000afab0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000afab4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000afab8:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000afabcu)) return;
        }
    }
L_000afabc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000134u, 0, 0);
    }
L_000afac0:;
    {
        cpu->r[0] = rd32(0x000afac8u + + 0x170u);
    }
L_000afac4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000afac8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000afacc:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000afad0:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000afad4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afad8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afadc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afae0:;
    {
        cpu->r[14] = 0x000afae8u;
    }
L_000afae4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afae8u)) return;
    }
L_000afae8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afaec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afaf0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afaf4:;
    {
        cpu->r[14] = 0x000afafcu;
    }
L_000afaf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afafcu)) return;
    }
L_000afafc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afb00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afb04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afb08:;
    {
        cpu->r[14] = 0x000afb10u;
    }
L_000afb0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb10u)) return;
    }
L_000afb10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afb14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000afb18:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000afb1c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afb20:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000afb24:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afb28:;
    {
        cpu->r[14] = 0x000afb30u;
    }
L_000afb2c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb30u)) return;
    }
L_000afb30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afb34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afb38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afb3c:;
    {
        cpu->r[14] = 0x000afb44u;
    }
L_000afb40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb44u)) return;
    }
L_000afb44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb60u);
    }
L_000afb48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000afb4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_000afb50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000afb84;
        }
    }
L_000afb54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afb58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afb5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afb60:;
    {
        cpu->r[14] = 0x000afb68u;
    }
L_000afb64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb68u)) return;
    }
L_000afb68:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000afb6c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afb70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afb74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afb78:;
    {
        cpu->r[14] = 0x000afb80u;
    }
L_000afb7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb80u)) return;
    }
L_000afb80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000afb84u)) return;
    }
L_000afb84:;
    {
        { uint32_t v = cpu->r[5] & 0x08000001u; set_nz(cpu, v); }
    }
L_000afb88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000afc18;
        }
    }
L_000afb8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000eu, 1, 1);
    }
L_000afb90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000afc18;
        }
    }
L_000afb94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afb98:;
    {
        cpu->r[2] = 0x00000013u;
    }
L_000afb9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000afba0:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_000afba4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afba8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afbac:;
    {
        cpu->r[14] = 0x000afbb4u;
    }
L_000afbb0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afbb4u)) return;
    }
L_000afbb4:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000afbb8:;
    {
        cpu->r[2] = 0x00000027u;
    }
L_000afbbc:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afbc0:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000afbc4:;
    {
        { uint32_t v = cpu->r[5] & 0x00008000u; set_nz(cpu, v); }
    }
L_000afbc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000afc0c;
        }
    }
L_000afbcc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afbd0:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000afbd4:;
    {
        cpu->r[2] = 0x0000000du;
    }
L_000afbd8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000afbdc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afbe0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afbe4:;
    {
        cpu->r[14] = 0x000afbecu;
    }
L_000afbe8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afbecu)) return;
    }
L_000afbec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000afbf0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000afbf4:;
    {
        cpu->r[2] = 0x0000000eu;
    }
L_000afbf8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afbfc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000afc00:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afc04:;
    {
        cpu->r[14] = 0x000afc0cu;
    }
L_000afc08:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afc0cu)) return;
    }
L_000afc0c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000afc10:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[7]);
    }
L_000afc14:;
    {
        goto L_000afb54;
    }
L_000afc18:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000afc1c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000afc20:;
    {
        cpu->r[2] = 0x00000027u;
    }
L_000afc24:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afc28:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000afc2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000afc0c;
        }
    }
L_000afc30:;
    {
        goto L_000afbc4;
    }
}

/* _ZN14CarSceneObject11GetUPVectorEv @ 000afc3c (arm) */
void fn_000afc3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afc3c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x17cu);
    }
L_000afc40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000afc48u + + 0x2cu);
    }
L_000afc44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc48:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc50:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000afc54:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x2cu);
    }
L_000afc58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_000afc5c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x18u);
    }
L_000afc64:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x1cu);
    }
L_000afc6c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afc70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject19UpdateCarStopTrailsEiff @ 000afc78 (arm) */
void fn_000afc78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afc78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject12UpdateDamageEP4CCar @ 000afc7c (arm) */
void fn_000afc7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afc7c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x484u);
    }
L_000afc80:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xd0cu);
    }
L_000afc84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xd10u);
    }
L_000afc88:;
    {
        { uint32_t v = cpu->r[12] & 0x00000004u; set_nz(cpu, v); }
    }
L_000afc8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000afc90:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xd14u);
    }
L_000afc94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000005u, 0, 0);
        }
    }
L_000afc98:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd0cu, cpu->r[2]);
        }
    }
L_000afc9c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000008u; set_nz(cpu, v); }
    }
L_000afca0:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_000afca4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000005u, 0, 0);
        }
    }
L_000afca8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd10u, cpu->r[3]);
        }
    }
L_000afcac:;
    {
        { uint32_t v = cpu->r[12] & 0x00000001u; set_nz(cpu, v); }
    }
L_000afcb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000005u, 0, 0);
        }
    }
L_000afcb4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd14u, cpu->r[4]);
        }
    }
L_000afcb8:;
    {
        { uint32_t v = cpu->r[12] & 0x00000002u; set_nz(cpu, v); }
    }
L_000afcbc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xd18u);
    }
L_000afcc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000005u, 0, 0);
        }
    }
L_000afcc4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd18u, cpu->r[12]);
        }
    }
L_000afcc8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_000afccc:;
    {
        { uint32_t v = cpu->r[1] & 0x00800000u; set_nz(cpu, v); }
    }
L_000afcd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000afcd4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd0cu, cpu->r[2]);
        }
    }
L_000afcd8:;
    {
        { uint32_t v = cpu->r[1] & 0x01000000u; set_nz(cpu, v); }
    }
L_000afcdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000afce0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd10u, cpu->r[3]);
        }
    }
L_000afce4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000012cu, 1, 1);
    }
L_000afce8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x0000012cu;
        }
    }
L_000afcec:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xd0cu, cpu->r[2]);
        }
    }
L_000afcf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000012cu, 1, 1);
    }
L_000afcf4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000012cu;
        }
    }
L_000afcf8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xd10u, cpu->r[3]);
        }
    }
L_000afcfc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000012cu, 1, 1);
    }
L_000afd00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000012cu;
        }
    }
L_000afd04:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xd14u, cpu->r[3]);
        }
    }
L_000afd08:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000012cu, 1, 1);
    }
L_000afd0c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000012cu;
        }
    }
L_000afd10:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xd18u, cpu->r[3]);
        }
    }
L_000afd14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000afd18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject15AddCrashEffectsEv @ 000afd1c (arm) */
void fn_000afd1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afd1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject28SetTargetFakeWheelSuspensionEii @ 000afd20 (arm) */
void fn_000afd20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afd20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000310u, 0, 0);
    }
L_000afd24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000afd28:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000afd2c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject27UpdateFakeWheelsSuspensionsEv @ 000afd30 (arm) */
void fn_000afd30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afd30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c40u, 0, 0);
    }
L_000afd34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000afd38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000afd3c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + - 0x10u);
    }
L_000afd40:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_000afd44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000afd48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000afd5c;
        }
    }
L_000afd4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000afd50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000afd54:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + - 0x10u, cpu->r[1]);
        }
    }
L_000afd58:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + - 0x10u, cpu->r[2]);
        }
    }
L_000afd5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000afd60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000afd64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000afd68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000afd3c;
        }
    }
L_000afd6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject11ClearDamageEv @ 000afd70 (arm) */
void fn_000afd70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afd70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000afd74:;
    {
        wr32(cpu->r[0] + + 0xd18u, cpu->r[3]);
    }
L_000afd78:;
    {
        wr32(cpu->r[0] + + 0xd0cu, cpu->r[3]);
    }
L_000afd7c:;
    {
        wr32(cpu->r[0] + + 0xd10u, cpu->r[3]);
    }
L_000afd80:;
    {
        wr32(cpu->r[0] + + 0xd14u, cpu->r[3]);
    }
L_000afd84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject12ReduceDamageEi @ 000afd88 (arm) */
void fn_000afd88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afd88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000d00u, 0, 0);
    }
L_000afd8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000afd90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000afd94:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000afd98:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000afd9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000afda0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000afda4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000afda8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000afdac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000afdb0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_000afdb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000afdb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000afd98;
        }
    }
L_000afdbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject10ClearSmokeEv @ 000afdc0 (arm) */
void fn_000afdc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afdc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000afdc4:;
    {
        wr32(cpu->r[0] + + 0xc30u, cpu->r[3]);
    }
L_000afdc8:;
    {
        wr32(cpu->r[0] + + 0xc24u, cpu->r[3]);
    }
L_000afdcc:;
    {
        wr32(cpu->r[0] + + 0xc28u, cpu->r[3]);
    }
L_000afdd0:;
    {
        wr32(cpu->r[0] + + 0xc2cu, cpu->r[3]);
    }
L_000afdd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject9RenderCarEif @ 000afdd8 (arm) */
void fn_000afdd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000afdd8:;
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
L_000afddc:;
    {
        cpu->r[6] = rd32(0x000afde4u + + 0x2d4u);
    }
L_000afde0:;
    {
        cpu->r[3] = rd32(0x000afde8u + + 0x2d4u);
    }
L_000afde4:;
    {
        cpu->r[8] = 0x000011e8u;
    }
L_000afde8:;
    {
        cpu->r[6] = add_flags(cpu, 0x000afdf0u, cpu->r[6], 0, 0);
    }
L_000afdec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000afdf0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000afdf4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000afdf8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afdfc:;
    {
        cpu->r[7] = 0x0000128cu;
    }
L_000afe00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000afe04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000afe08:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000afe0c:;
    {
        cpu->r[9] = 0x00001288u;
    }
L_000afe10:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000afe14:;
    {
        cpu->r[11] = 0x0000002eu;
    }
L_000afe18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000afe1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afe20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afe24:;
    {
        cpu->r[14] = 0x000afe2cu;
    }
L_000afe28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afe2cu)) return;
    }
L_000afe2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000afe30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000134u, 0, 0);
    }
L_000afe34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000afe38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afe3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afe40:;
    {
        cpu->r[14] = 0x000afe48u;
    }
L_000afe44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afe48u)) return;
    }
L_000afe48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000afe4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afe50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afe54:;
    {
        cpu->r[14] = 0x000afe5cu;
    }
L_000afe58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afe5cu)) return;
    }
L_000afe5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000afe60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afe64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afe68:;
    {
        cpu->r[14] = 0x000afe70u;
    }
L_000afe6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afe70u)) return;
    }
L_000afe70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000afe74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000afe78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000afe7c:;
    {
        cpu->r[14] = 0x000afe84u;
    }
L_000afe80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afe84u)) return;
    }
L_000afe84:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000afe88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000afe8c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000afe90:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000afe94:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afe98:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afe9c:;
    {
        cpu->r[14] = 0x000afea4u;
    }
L_000afea0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afea4u)) return;
    }
L_000afea4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000afea8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000afeac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000afeb0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_000afeb4:;
    {
        cpu->r[14] = 0x000afeb8u; fn_0014814c(cpu);
    }
L_000afeb8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000afebc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000afec0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000afec4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000afec8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000afecc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000afed0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000afed4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[11]);
    }
L_000afed8:;
    {
        cpu->r[14] = 0x000afee0u;
    }
L_000afedc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afee0u)) return;
    }
L_000afee0:;
    {
        cpu->r[3] = rd32(0x000afee8u + + 0x1d8u);
    }
L_000afee4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000afeecu + + 0x1c8u);
    }
L_000afee8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000afeec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000afef0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000afef4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000afef8:;
    {
        cpu->r[3] = rd32(0x000aff00u + + 0x1c4u);
    }
L_000afefc:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[10]);
    }
L_000aff00:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000aff04:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aff08:;
    {
        cpu->r[3] = rd32(0x000aff10u + + 0x1b8u);
    }
L_000aff0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000aff10:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aff14:;
    {
        cpu->r[3] = rd32(0x000aff1cu + + 0x1b0u);
    }
L_000aff18:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000aff1c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000aff20:;
    {
        cpu->r[14] = 0x000aff24u; fn_0014814c(cpu);
    }
L_000aff24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000aff28:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_000aff2c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[11]);
    }
L_000aff30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000aff34:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000aff38:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000aff3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aff40:;
    {
        cpu->r[14] = 0x000aff48u;
    }
L_000aff44:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000aff48u)) return;
    }
L_000aff48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000aff4c:;
    {
        uint32_t v = cpu->r[2] & 0x08000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000aff50:;
    {
        cpu->r[2] = 0x0000002fu;
    }
L_000aff54:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000aff58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0048;
        }
    }
L_000aff5c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000aff60:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000aff64:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000aff68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aff6c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000aff70:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000aff74:;
    {
        cpu->r[14] = 0x000aff7cu;
    }
L_000aff78:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000aff7cu)) return;
    }
L_000aff7c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000aff80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000aff84:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000aff88:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000aff8c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000aff90:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000aff94:;
    {
        cpu->r[14] = 0x000aff9cu;
    }
L_000aff98:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000aff9cu)) return;
    }
L_000aff9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000affa0:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_000affa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0070;
        }
    }
L_000affa8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000affac:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000affb0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000affb4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000affb8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000affbc:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000affc0:;
    {
        cpu->r[14] = 0x000affc8u;
    }
L_000affc4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000affc8u)) return;
    }
L_000affc8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000affcc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000affd0:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000affd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000affd8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000affdc:;
    {
        cpu->r[6] = 0x0000128cu;
    }
L_000affe0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000affe4:;
    {
        cpu->r[7] = 0x000011e8u;
    }
L_000affe8:;
    {
        cpu->r[14] = 0x000afff0u;
    }
L_000affec:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000afff0u)) return;
    }
L_000afff0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000afff4:;
    {
        cpu->r[2] = 0x0000175cu;
    }
L_000afff8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000afffc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0000:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[8]);
    }
L_000b0004:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000b0008:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b000c:;
    {
        cpu->r[14] = 0x000b0014u;
    }
L_000b0010:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0014u)) return;
    }
L_000b0014:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b0018:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b001c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0020:;
    {
        cpu->r[14] = 0x000b0028u;
    }
L_000b0024:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0028u)) return;
    }
L_000b0028:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000b002c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000b0030:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b0034:;
    {
        cpu->r[14] = 0x000b003cu;
    }
L_000b0038:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b003cu)) return;
    }
L_000b003c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[8]);
    }
L_000b0040:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b0044:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0048u)) return;
    }
L_000b0048:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000b004c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000b0050:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000b0054:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0058:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b005c:;
    {
        cpu->r[14] = 0x000b0064u;
    }
L_000b0060:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0064u)) return;
    }
L_000b0064:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000b0068:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_000b006c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000affa8;
        }
    }
L_000b0070:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000b0074:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000b0078:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000b007c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b0080:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b0084:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b0088:;
    {
        cpu->r[14] = 0x000b0090u;
    }
L_000b008c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0090u)) return;
    }
L_000b0090:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x17cu);
    }
L_000b0094:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000b0098:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000b009c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000b00a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000b00a4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b00a8:;
    {
        cpu->r[14] = 0x000b00b0u;
    }
L_000b00ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000b00b0u)) return;
    }
L_000b00b0:;
    {
        goto L_000affc8;
    }
}

/* _ZN14CarSceneObject11ClearTrailsEv @ 000b00d0 (arm) */
void fn_000b00d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b00d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000b00d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000b40u, 0, 0);
    }
L_000b00d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b00dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000b00e0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000b00e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000b00e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000b00ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b00f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000b00f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0108;
        }
    }
L_000b00f8:;
    {
        cpu->r[14] = 0x000b00fcu; fn_00097924(cpu);
    }
L_000b00fc:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000b0100:;
    {
        cpu->r[14] = 0x000b0104u; fn_00157398(cpu);
    }
L_000b0104:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000b0108:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_000b010c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b0110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b00e4;
        }
    }
L_000b0114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b0118u)) return;
    }
}

/* _ZN14CarSceneObject9UpdateLODEv @ 000b0118 (arm) */
void fn_000b0118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0118:;
    {
        cpu->r[3] = rd32(0x000b0120u + + 0xe8u);
    }
L_000b011c:;
    {
        cpu->r[1] = rd32(0x000b0124u + + 0xe8u);
    }
L_000b0120:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0128u, cpu->r[3], 0, 0);
    }
L_000b0124:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xb5cu);
    }
L_000b0128:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b012c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000b0130:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000b0134:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000b0138:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000b013c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b0140:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xb60u, cpu->r[3]);
        }
    }
L_000b0144:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000b0148:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_000b014c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_000b0150:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000b0154:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_000b0158:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000b015c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0xc0u);
    }
L_000b0160:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x30u);
    }
L_000b0164:;
    {
        cpu->r[12] = rd32(0x000b016cu + + 0xa4u);
    }
L_000b0168:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000b016c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000b0174u, cpu->r[12], 0, 0);
    }
L_000b0170:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_000b0174:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000b0178:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_000b017c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000b0180:;
    {
        vfp_vsub(cpu, 14, 12, 14);
    }
L_000b0184:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000b0188:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b018c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000b0190:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000096u, 0, 0);
    }
L_000b0194:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000b0198:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000b019c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000096u, 1, 0);
    }
L_000b01a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b01a4:;
    {
        vfp_sync_flags(cpu);
    }
L_000b01a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000b01ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000b01b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b01b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
        }
    }
L_000b01b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b01bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b01fc;
        }
    }
L_000b01c0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000b01c4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000b01c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000b01cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000b01d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b01e0;
        }
    }
L_000b01d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000b01d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000b01dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b01ec;
        }
    }
L_000b01e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000b01e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b018c;
        }
    }
L_000b01e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xb60u);
    }
L_000b01ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000b01f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000b01f4:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[0] + + 0x178u, cpu->r[3]);
        }
    }
L_000b01f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b01fc:;
    {
        wr32(cpu->r[0] + + 0xb60u, cpu->r[3]);
    }
L_000b0200:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000b0204:;
    {
        goto L_000b01ec;
    }
}

/* _ZN14CarSceneObject20UpdateRotationAnglesEfff @ 000b0214 (arm) */
void fn_000b0214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0214:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_000b0218:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1e0u);
    }
L_000b021c:;
    {
        vfp_vsub(cpu, 15, 15, 12);
    }
L_000b0220:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x1dcu);
    }
L_000b0224:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000b0228:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1dcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000b022c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1e0u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000b0230:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000b0238u + + 0xccu);
    }
L_000b0234:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x1e4u);
    }
L_000b0238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x30u);
    }
L_000b023c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1e4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000b0240:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000b0244:;
    {
        vfp_vsub(cpu, 13, 10, 13);
    }
L_000b0248:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_000b024c:;
    {
        vfp_vmul(cpu, 12, 10, 12);
    }
L_000b0250:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[3];
    }
L_000b0254:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000b0258:;
    {
        vfp_vdiv(cpu, 13, 12, 10);
    }
L_000b025c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[1];
    }
L_000b0260:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_000b0264:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000b0268:;
    {
        wr32(cpu->r[0] + + 0xc58u, cpu->r[3]);
    }
L_000b026c:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000b0270:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,10), 0.0f);
    }
L_000b0274:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b0278:;
    {
        vfp_sync_flags(cpu);
    }
L_000b027c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000b02c4;
        }
    }
L_000b0280:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000b0284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c50u, 0, 0);
    }
L_000b0288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000b028c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b0290:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000b0298u + + 0x70u);
    }
L_000b0294:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000b029cu + + 0x70u);
    }
L_000b0298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000b029c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000b02a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b02a4:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
        }
    }
L_000b02a8:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
        }
    }
L_000b02ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000b02b0:;
    {
        vfp_vdiv(cpu, 14, 15, 14);
    }
L_000b02b4:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_000b02b8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[0] = ea + 4u;
    }
L_000b02bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b0298;
        }
    }
L_000b02c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000b02c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c50u, 0, 0);
    }
L_000b02c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b02cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000b02d0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000b02d8u + + 0x30u);
    }
L_000b02d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000b02dcu + + 0x30u);
    }
L_000b02d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000b02dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000b02e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000b02e4:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,12);
        }
    }
L_000b02e8:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,11);
        }
    }
L_000b02ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000b02f0:;
    {
        vfp_vdiv(cpu, 14, 15, 14);
    }
L_000b02f4:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_000b02f8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[0] = ea + 4u;
    }
L_000b02fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b02d8;
        }
    }
L_000b0300:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CarSceneObject22UpdateNitroSpeedEffectEv @ 000b0310 (arm) */
void fn_000b0310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0310:;
    {
        cpu->r[3] = rd32(0x000b0318u + + 0x15cu);
    }
L_000b0314:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000b0318:;
    {
        cpu->r[1] = rd32(0x000b0320u + + 0x158u);
    }
L_000b031c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000b0320:;
    {
        cpu->r[3] = add_flags(cpu, 0x000b0328u, cpu->r[3], 0, 0);
    }
L_000b0324:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000b0328:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000b032c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b0330:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000b0334:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xd00u);
    }
L_000b0338:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_000b033c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000b0340:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000b0344:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000b0348:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000b034c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000b0350:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x00008cc0u;
        }
    }
L_000b0354:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b0358:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000b035c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
        }
    }
L_000b0360:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000b0364:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[5]);
        }
    }
L_000b0368:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000b036c:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_000b0370:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000b0374:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000b0378:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b037c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000b0380:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000b040c;
        }
    }
L_000b0384:;
    {
        cpu->r[2] = rd32(0x000b038cu + + 0xf0u);
    }
L_000b0388:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x000b0390u + + 0xe0u);
    }
L_000b038c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc34u);
    }
L_000b0390:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000b0394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000b0398:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000b039c:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_000b03a0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000b03a4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x84u);
    }
L_000b03a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x110u);
    }
L_000b03ac:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_000b03b0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x48u);
    }
L_000b03b4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x10cu);
    }
L_000b03b8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0xc0u);
    }
L_000b03bc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x114u);
    }
L_000b03c0:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_000b03c4:;
    {
        vfp_vsub(cpu, 13, 13, 10);
    }
L_000b03c8:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000b03cc:;
    {
        vfp_vsub(cpu, 12, 12, 9);
    }
L_000b03d0:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_000b03d4:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000b03d8:;
    {
        vfp_vdiv(cpu, 15, 8, 15);
    }
L_000b03dc:;
    {
        vfp_vmla(cpu, 9, 15, 12);
    }
L_000b03e0:;
    {
        vfp_vmla(cpu, 10, 15, 13);
    }
L_000b03e4:;
    {
        vfp_vmla(cpu, 11, 15, 14);
    }
L_000b03e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0434;
        }
    }
L_000b03ec:;
    {
        cpu->r[1] = 0x00007857u;
    }
L_000b03f0:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000b03f4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000b03f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b03fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_000b0400:;
    {
        cpu->r[14] = 0x000b0404u; fn_00158128(cpu);
    }
L_000b0404:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000b0408:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000b040cu)) return;
    }
L_000b040c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc34u);
    }
L_000b0410:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b0414:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b0404;
        }
    }
L_000b0418:;
    {
        cpu->r[3] = 0x00008c4cu;
    }
L_000b041c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b0420:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b0424:;
    {
        cpu->r[14] = 0x000b0428u; fn_00158fe8(cpu);
    }
L_000b0428:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000b042c:;
    {
        wr32(cpu->r[4] + + 0xc34u, cpu->r[3]);
    }
L_000b0430:;
    {
        goto L_000b0404;
    }
L_000b0434:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000b0438:;
    {
        cpu->r[3] = 0x00008c4cu;
    }
L_000b043c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000b0440:;
    {
        cpu->r[1] = 0x00007857u;
    }
L_000b0444:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000b0448:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000b044c:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000b0450:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000b0454:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000b0458:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_000b045c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000b0460:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000b0464:;
    {
        cpu->r[14] = 0x000b0468u; fn_001597b4(cpu);
    }
L_000b0468:;
    {
        wr32(cpu->r[4] + + 0xc34u, cpu->r[0]);
    }
L_000b046c:;
    {
        goto L_000b0404;
    }
}

/* _ZN14CarSceneObject20RemoveSparksEmittersEv @ 000b0480 (arm) */
void fn_000b0480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000b0480:;
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
L_000b0484:;
    {
        cpu->r[6] = rd32(0x000b048cu + + 0x58u);
    }
L_000b0488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000c00u, 0, 0);
    }
L_000b048c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000b0490:;
    {
        cpu->r[7] = 0x00008c4cu;
    }
L_000b0494:;
    {
        cpu->r[9] = rd32(0x000b049cu + + 0x4cu);
    }
L_000b0498:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b049c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000b04a0:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_000b04a4:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000b04a8:;
    {
        cpu->r[6] = add_flags(cpu, 0x000b04b0u, cpu->r[6], 0, 0);
    }
L_000b04ac:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_000b04b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000b04b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000b04b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000b04d4;
        }
    }
L_000b04bc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000b04c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000b04c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000b04c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000b04cc:;
    {
        cpu->r[14] = 0x000b04d0u; fn_00158fe8(cpu);
    }
L_000b04d0:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_000b04d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_000b04d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000b04dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000b04ac;
        }
    }
L_000b04e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000b04e4u)) return;
    }
}
