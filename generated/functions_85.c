#include "functions.h"

/* mpc_demux_init @ 001f6170 (arm) */
void fn_001f6170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6170:;
    {
        cpu->r[2] = rd32(0x001f6178u + + 0x79cu);
    }
L_001f6174:;
    {
        cpu->r[3] = 0x000001e6u;
    }
L_001f6178:;
    {
        cpu->r[1] = rd32(0x001f6180u + + 0x798u);
    }
L_001f617c:;
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
L_001f6180:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6188u, cpu->r[2], 0, 0);
    }
L_001f6184:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f6188:;
    {
        cpu->r[0] = 0x000001a0u;
    }
L_001f618c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_001f6190:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001f6194:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f619cu, cpu->r[1], 0, 0);
    }
L_001f6198:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_001f619c:;
    {
        cpu->r[14] = 0x001f61a0u; fn_00200aec(cpu);
    }
L_001f61a0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f61a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f63f8;
        }
    }
L_001f61a8:;
    {
        cpu->r[2] = 0x000001a0u;
    }
L_001f61ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f61b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f61b4:;
    {
        cpu->r[7] = 0x00000174u;
    }
L_001f61b8:;
    {
        cpu->r[14] = 0x001f61bcu; imp_memset(cpu); /* memset */
    }
L_001f61bc:;
    {
        cpu->r[8] = 0x00000170u;
    }
L_001f61c0:;
    {
        cpu->r[1] = 0x00000194u;
    }
L_001f61c4:;
    {
        cpu->r[12] = 0x00000178u;
    }
L_001f61c8:;
    {
        cpu->r[2] = 0x0000017cu;
    }
L_001f61cc:;
    {
        cpu->r[0] = 0x00000180u;
    }
L_001f61d0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f61d4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001f61d8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_001f61dc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001f61e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_001f61e4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_001f61e8:;
    {
        cpu->r[3] = rd32(0x001f61f0u + + 0x72cu);
    }
L_001f61ec:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001f61f0:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_001f61f4:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001f61f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f6200u, cpu->r[3], 0, 0);
    }
L_001f61fc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[14]);
    }
L_001f6200:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_001f6204:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001f6208:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f620c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[6]);
    }
L_001f6210:;
    {
        wr8(cpu->r[4] + + 0x154u, cpu->r[14]);
    }
L_001f6214:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000170u, 0, 0);
    }
L_001f6218:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[3]);
    }
L_001f621c:;
    {
        cpu->r[5] = 0x00000008u;
    }
L_001f6220:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_001f6224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6228:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_001f622c:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[6]);
    }
L_001f6230:;
    {
        cpu->r[14] = 0x001f6234u; fn_001f4dd0(cpu);
    }
L_001f6234:;
    {
        cpu->r[1] = rd32(0x001f623cu + + 0x6e4u);
    }
L_001f6238:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001f623c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001f6240:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6248u, cpu->r[1], 0, 0);
    }
L_001f6244:;
    {
        cpu->r[14] = 0x001f6248u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f624c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x160u, cpu->r[6]);
        }
    }
L_001f6250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f681c;
        }
    }
L_001f6254:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001f6258:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001f625c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f6260:;
    {
        cpu->r[14] = 0x001f6268u;
    }
L_001f6264:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f6268u)) return;
    }
L_001f6268:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001f626c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f6270:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[0]);
    }
L_001f6274:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[0]);
    }
L_001f6278:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f627c:;
    {
        cpu->r[14] = 0x001f6280u; fn_001f4dd0(cpu);
    }
L_001f6280:;
    {
        cpu->r[12] = 0x00000178u;
    }
L_001f6284:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f6288:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f628c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f6290:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001f6294:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f6298:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f629c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f62a0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001f62a4:;
    {
        cpu->r[1] = rd32(0x001f62acu + + 0x678u);
    }
L_001f62a8:;
    {
        uint32_t v = cpu->r[7] & 0x00000007u; cpu->r[14] = v;
    }
L_001f62ac:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_001f62b0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f62b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f62bcu, cpu->r[1], 0, 0);
    }
L_001f62b8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_001f62bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001f62c0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001f62c4:;
    {
        cpu->r[7] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001f62c8:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_001f62cc:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f62d0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001f62d4:;
    {
        wr8(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_001f62d8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f62dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f62e0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001f62e4:;
    {
        uint32_t v = cpu->r[7] & 0x00000007u; cpu->r[14] = v;
    }
L_001f62e8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_001f62ec:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f62f0:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_001f62f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001f62f8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001f62fc:;
    {
        cpu->r[7] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001f6300:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_001f6304:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f6308:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001f630c:;
    {
        wr8(cpu->r[13] + + 0x65u, cpu->r[14]);
    }
L_001f6310:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f6314:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f6318:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001f631c:;
    {
        uint32_t v = cpu->r[7] & 0x00000007u; cpu->r[14] = v;
    }
L_001f6320:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_001f6324:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f6328:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_001f632c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001f6330:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001f6334:;
    {
        cpu->r[7] = rd8(cpu->r[8] + cpu->r[7]);
    }
L_001f6338:;
    {
        cpu->r[6] = rd8(cpu->r[6] + - 0x1u);
    }
L_001f633c:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f6340:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001f6344:;
    {
        wr8(cpu->r[13] + + 0x66u, cpu->r[14]);
    }
L_001f6348:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001f634c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f6350:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 0);
    }
L_001f6354:;
    {
        uint32_t v = cpu->r[6] & 0x00000007u; cpu->r[14] = v;
    }
L_001f6358:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_001f635c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_001f6360:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_001f6364:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001f6368:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_001f636c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_001f6370:;
    {
        cpu->r[6] = rd8(cpu->r[12] + - 0x1u);
    }
L_001f6374:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f6378:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[6] = v;
    }
L_001f637c:;
    {
        cpu->r[6] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_001f6380:;
    {
        wr8(cpu->r[13] + + 0x67u, cpu->r[6]);
    }
L_001f6384:;
    {
        cpu->r[14] = 0x001f6388u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6388:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f638c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6404;
        }
    }
L_001f6390:;
    {
        uint32_t v = cpu->r[6] & 0x0000000fu; cpu->r[6] = v;
    }
L_001f6394:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001f6398:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x67u);
    }
L_001f639c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_001f63a0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 4u, &shc); cpu->r[3] = v;
    }
L_001f63a4:;
    {
        wr8(cpu->r[4] + + 0x154u, cpu->r[3]);
    }
L_001f63a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f64b0;
        }
    }
L_001f63ac:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001f63b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f63b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f63b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001f63bc:;
    {
        cpu->r[14] = 0x001f63c0u; fn_001f4dd0(cpu);
    }
L_001f63c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f63c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_001f63c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f63cc:;
    {
        cpu->r[14] = 0x001f63d0u; fn_001f6fa0(cpu);
    }
L_001f63d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f63d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f64b0;
        }
    }
L_001f63d8:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f63dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f63e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f63e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f63e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f669c;
        }
    }
L_001f63ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f63f0:;
    {
        cpu->r[14] = 0x001f63f4u; fn_00202ea8(cpu);
    }
L_001f63f4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001f63f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f63fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001f6400:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f6404u)) return;
    }
L_001f6404:;
    {
        cpu->r[1] = rd32(0x001f640cu + + 0x51cu);
    }
L_001f6408:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001f640c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f6410:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6418u, cpu->r[1], 0, 0);
    }
L_001f6414:;
    {
        cpu->r[14] = 0x001f6418u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6418:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f641c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f64b0;
        }
    }
L_001f6420:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f6424:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_001f6428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f642c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001f6430:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000174u, 0, 0);
    }
L_001f6434:;
    {
        cpu->r[14] = 0x001f6438u; fn_001f4dd0(cpu);
    }
L_001f6438:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f643c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f6440:;
    {
        cpu->r[14] = 0x001f6444u; fn_00202b70(cpu);
    }
L_001f6444:;
    {
        cpu->r[11] = rd32(0x001f644cu + + 0x4e0u);
    }
L_001f6448:;
    {
        cpu->r[3] = rd32(0x001f6450u + + 0x4e0u);
    }
L_001f644c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001f6450:;
    {
        cpu->r[10] = rd32(0x001f6458u + + 0x4dcu);
    }
L_001f6454:;
    {
        cpu->r[11] = add_flags(cpu, 0x001f645cu, cpu->r[11], 0, 0);
    }
L_001f6458:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f6460u, cpu->r[3], 0, 0);
    }
L_001f645c:;
    {
        cpu->r[9] = rd32(0x001f6464u + + 0x4d4u);
    }
L_001f6460:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001f6464:;
    {
        cpu->r[3] = rd32(0x001f646cu + + 0x4d0u);
    }
L_001f6468:;
    {
        cpu->r[9] = add_flags(cpu, 0x001f6470u, cpu->r[9], 0, 0);
    }
L_001f646c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001f6470:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f6478u, cpu->r[3], 0, 0);
    }
L_001f6474:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001f6478:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f647c:;
    {
        cpu->r[0] = rd32(0x001f6484u + + 0x4bcu);
    }
L_001f6480:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001f6484:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6488:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6490u, cpu->r[10], 0, 0);
    }
L_001f648c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6490:;
    {
        cpu->r[14] = 0x001f6494u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6494:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f67f8;
        }
    }
L_001f649c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x48u);
    }
L_001f64a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000041u, 1, 0);
    }
L_001f64a4:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001f64a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000019u, 1, 1);
    }
L_001f64ac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f64d8;
        }
    }
L_001f64b0:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f64b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f64b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f64bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f64c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f64c8;
        }
    }
L_001f64c4:;
    {
        cpu->r[14] = 0x001f64c8u; fn_00200ae8(cpu);
    }
L_001f64c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f64cc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f64d0:;
    {
        cpu->r[14] = 0x001f64d4u; fn_00200ae8(cpu);
    }
L_001f64d4:;
    {
        goto L_001f63f8;
    }
L_001f64d8:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x49u);
    }
L_001f64dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000040u, 1, 1);
    }
L_001f64e0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f64b0;
        }
    }
L_001f64e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005au, 1, 1);
    }
L_001f64e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f64b0;
        }
    }
L_001f64ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_001f64f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001f64f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f64f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f64b0;
        }
    }
L_001f64fc:;
    {
        cpu->r[3] = 0x0000eef5u;
    }
L_001f6500:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f6504:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f64b0;
        }
    }
L_001f6508:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000bu, 0, 0);
    }
L_001f650c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6510:;
    {
        cpu->r[14] = 0x001f6514u; fn_001f4dd0(cpu);
    }
L_001f6514:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6518:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f651c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6520:;
    {
        cpu->r[14] = 0x001f6524u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f65bc;
        }
    }
L_001f652c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6530:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f6534:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6538:;
    {
        cpu->r[14] = 0x001f653cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f653c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f65d8;
        }
    }
L_001f6544:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6548:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f654c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6550:;
    {
        cpu->r[14] = 0x001f6554u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6554:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f65e8;
        }
    }
L_001f655c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6560:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f6564:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6568:;
    {
        cpu->r[14] = 0x001f656cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f656c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6570:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f65f8;
        }
    }
L_001f6574:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f6578:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f657c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f6580:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6588u, cpu->r[14], 0, 0);
    }
L_001f6584:;
    {
        cpu->r[14] = 0x001f6588u; imp_memcmp(cpu); /* memcmp */
    }
L_001f6588:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f658c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6778;
        }
    }
L_001f6590:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f6594:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_001f6598:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f659c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f65a0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f65a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f65a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001f65ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f65b0:;
    {
        cpu->r[14] = 0x001f65b4u; fn_00202b70(cpu);
    }
L_001f65b4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f65b8:;
    {
        goto L_001f6484;
    }
L_001f65bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f65c0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f65c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_001f65c8:;
    {
        cpu->r[14] = 0x001f65ccu; fn_001f6d88(cpu);
    }
L_001f65cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f65d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6590;
        }
    }
L_001f65d4:;
    {
        goto L_001f64b0;
    }
L_001f65d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f65dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f65e0:;
    {
        cpu->r[14] = 0x001f65e4u; fn_001f75a8(cpu);
    }
L_001f65e4:;
    {
        goto L_001f6590;
    }
L_001f65e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f65ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f65f0:;
    {
        cpu->r[14] = 0x001f65f4u; fn_001f6c58(cpu);
    }
L_001f65f4:;
    {
        goto L_001f6590;
    }
L_001f65f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_001f65fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6600:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001f6604:;
    {
        cpu->r[14] = 0x001f6608u; fn_001f4c30(cpu);
    }
L_001f6608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001f660c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001f6610:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f6614:;
    {
        cpu->r[14] = 0x001f6618u; fn_00202ad0(cpu);
    }
L_001f6618:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x58u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f661c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f6620:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_001f6624:;
    {
        wr64(cpu->r[13] + + 0x20u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f6628:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
    }
L_001f662c:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_001f6630:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001f6634:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001f6638:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f663c:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_001f6640:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f6644:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6648:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f664c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001f6650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001f6654:;
    {
        cpu->r[14] = 0x001f6658u; fn_001f4f68(cpu);
    }
L_001f6658:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f665c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f6660:;
    {
        cpu->r[14] = 0x001f6664u; fn_00202b70(cpu);
    }
L_001f6664:;
    {
        cpu->r[1] = rd32(0x001f666cu + + 0x2d8u);
    }
L_001f6668:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f666c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6674u, cpu->r[1], 0, 0);
    }
L_001f6670:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001f6674:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f6678:;
    {
        cpu->r[14] = 0x001f667cu; imp_memcmp(cpu); /* memcmp */
    }
L_001f667c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f6680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6784;
        }
    }
L_001f6684:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f6688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f668c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f6690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000000bu, 0, 0);
    }
L_001f6694:;
    {
        cpu->r[14] = 0x001f6698u; fn_001f4f68(cpu);
    }
L_001f6698:;
    {
        goto L_001f6590;
    }
L_001f669c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f66a0:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f66a4:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f66a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f66ac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001f66b0:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x40u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001f66b4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f66b8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000480u;
        }
    }
L_001f66bc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_001f66c0:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
        }
    }
L_001f66c4:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001f66c8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00012000u;
        }
    }
L_001f66cc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f66d0:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_001f66d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f66d8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f66dc:;
    {
        cpu->r[14] = 0x001f66e0u; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f66e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001f66e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00010000u, 1, 1);
    }
L_001f66e8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6720;
        }
    }
L_001f66ec:;
    {
        cpu->r[7] = 0x00000480u;
    }
L_001f66f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001f66f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f66f8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f66fc:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001f6700:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001f6704:;
    {
        cpu->r[14] = 0x001f6708u; imp___aeabi_uldivmod(cpu); /* __aeabi_uldivmod */
    }
L_001f6708:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001f670c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00010000u, 1, 1);
    }
L_001f6710:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f66f0;
        }
    }
L_001f6714:;
    {
        cpu->r[3] = 0x00000188u;
    }
L_001f6718:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f671c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_001f6720:;
    {
        cpu->r[2] = rd32(0x001f6728u + + 0x220u);
    }
L_001f6724:;
    {
        cpu->r[3] = 0x000000f7u;
    }
L_001f6728:;
    {
        cpu->r[1] = rd32(0x001f6730u + + 0x21cu);
    }
L_001f672c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001f6730:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6738u, cpu->r[2], 0, 0);
    }
L_001f6734:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f673cu, cpu->r[1], 0, 0);
    }
L_001f6738:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_001f673c:;
    {
        cpu->r[14] = 0x001f6740u; fn_00200aec(cpu);
    }
L_001f6740:;
    {
        cpu->r[3] = 0x00000184u;
    }
L_001f6744:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f6748:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f674c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f6750:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001f6754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f64c8;
        }
    }
L_001f6758:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f675c:;
    {
        cpu->r[14] = 0x001f6760u; fn_001f4c30(cpu);
    }
L_001f6760:;
    {
        cpu->r[3] = 0x0000018cu;
    }
L_001f6764:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f6768:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f676c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001f6770:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001f6774:;
    {
        goto L_001f63ec;
    }
L_001f6778:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f677c:;
    {
        cpu->r[14] = 0x001f6780u; fn_001f5eb0(cpu);
    }
L_001f6780:;
    {
        goto L_001f6590;
    }
L_001f6784:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x40u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f6788:;
    {
        cpu->r[12] = 0x00000190u;
    }
L_001f678c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f6790:;
    {
        cpu->r[3] = 0x00000194u;
    }
L_001f6794:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_001f6798:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f679c:;
    {
        wr64(cpu->r[13] + + 0x8u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f67a0:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x8u);
        cpu->r[8] = (uint32_t)v;
        cpu->r[9] = (uint32_t)(v >> 32);
    }
L_001f67a4:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x58u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f67a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 1);
    }
L_001f67ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f67b0:;
    {
        uint64_t v = rd64(cpu->r[13] + + 0x20u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f67b4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001f67b8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f67bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 1);
    }
L_001f67c0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f67c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[14], 1, 31u, &shc), (cpu->cpsr >> 29) & 1, 1);
    }
L_001f67c8:;
    {
        wr64(cpu->r[13] + + 0x20u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f67cc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f67d0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f67d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f67d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_001f67dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001f67e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_001f67e4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_001f67e8:;
    {
        cpu->r[14] = 0x001f67ecu; fn_001f4dd0(cpu);
    }
L_001f67ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f67f0:;
    {
        cpu->r[14] = 0x001f67f4u; fn_001f5eb0(cpu);
    }
L_001f67f4:;
    {
        goto L_001f6684;
    }
L_001f67f8:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f67fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001f6800:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f6804:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f6808:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f680c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_001f6810:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_001f6814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f63d8;
        }
    }
L_001f6818:;
    {
        goto L_001f64b0;
    }
L_001f681c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00010000u, 0, 0);
    }
L_001f6820:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f6824:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000174u, 0, 0);
    }
L_001f6828:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_001f682c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f6830:;
    {
        cpu->r[14] = 0x001f6834u; fn_001f4dd0(cpu);
    }
L_001f6834:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001f6838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f683c:;
    {
        cpu->r[14] = 0x001f6840u; fn_001f4bb4(cpu);
    }
L_001f6840:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001f6844:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6848:;
    {
        cpu->r[14] = 0x001f684cu; fn_001f4bb4(cpu);
    }
L_001f684c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6850:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f6854:;
    {
        cpu->r[14] = 0x001f6858u; fn_001f4bb4(cpu);
    }
L_001f6858:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f685c:;
    {
        { uint32_t v = cpu->r[7] & 0x0000000fu; set_nz(cpu, v); }
    }
L_001f6860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6870;
        }
    }
L_001f6864:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f6868:;
    {
        wr32(cpu->r[4] + + 0x160u, cpu->r[3]);
    }
L_001f686c:;
    {
        goto L_001f64b0;
    }
L_001f6870:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f6874:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6878:;
    {
        cpu->r[14] = 0x001f687cu; fn_001f4bb4(cpu);
    }
L_001f687c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f6880:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f6884:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6888:;
    {
        cpu->r[14] = 0x001f688cu; fn_001f4bb4(cpu);
    }
L_001f688c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f6890:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f6894:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6898:;
    {
        cpu->r[14] = 0x001f689cu; fn_001f4bb4(cpu);
    }
L_001f689c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f68a0:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f68a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f68a8:;
    {
        cpu->r[14] = 0x001f68acu; fn_001f4bb4(cpu);
    }
L_001f68ac:;
    {
        uint32_t v = cpu->r[10] | cpu->r[8]; cpu->r[3] = v;
    }
L_001f68b0:;
    {
        uint32_t v = cpu->r[5] | cpu->r[3]; cpu->r[3] = v;
    }
L_001f68b4:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f68b8:;
    {
        uint32_t v = cpu->r[0] | cpu->r[3]; cpu->r[3] = v;
    }
L_001f68bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_001f68c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6864;
        }
    }
L_001f68c4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 14u, &shc); cpu->r[10] = v;
    }
L_001f68c8:;
    {
        { uint32_t v = cpu->r[7] & 0x00000010u; set_nz(cpu, v); }
    }
L_001f68cc:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[8], 2, 21u, &shc); cpu->r[8] = v;
    }
L_001f68d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f68d4:;
    {
        uint32_t v = cpu->r[8] | cpu->r[0]; cpu->r[0] = v;
    }
L_001f68d8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[5], 2, 7u, &shc); cpu->r[5] = v;
    }
L_001f68dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f68e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000au, 0, 0);
        }
    }
L_001f68e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f68e8:;
    {
        cpu->r[14] = 0x001f68ecu; fn_001f4dd0(cpu);
    }
L_001f68ec:;
    {
        cpu->r[3] = 0x00000174u;
    }
L_001f68f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001f68f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x0000000au, 0, 0);
    }
L_001f68f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f68fc:;
    {
        wr32(cpu->r[4] + + 0x160u, cpu->r[2]);
    }
L_001f6900:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001f6904:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001f6908:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001f690c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f64b0;
        }
    }
L_001f6910:;
    {
        goto L_001f6254;
    }
}

/* mpc_decoder_scale_output @ 001f6950 (arm) */
void fn_001f6950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6950:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f6958u + + 0x70u);
    }
L_001f6954:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[3]<<32)|cpu->r[2];
    }
L_001f6958:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000a100u, 0, 0);
    }
L_001f695c:;
    {
        cpu->r[2] = 0x0000a194u;
    }
L_001f6960:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f6964:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000098u, 0, 0);
    }
L_001f6968:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001f696c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f6974u + + 0x5cu);
    }
L_001f6970:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f6978u + + 0x60u);
    }
L_001f6974:;
    {
        *vfp_d(cpu,3) = *vfp_d(cpu,7);
    }
L_001f6978:;
    {
        *vfp_d(cpu,4) = *vfp_d(cpu,6);
    }
L_001f697c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) * *vfp_d(cpu, 7);
    }
L_001f6980:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f6984:;
    {
        *vfp_s(cpu,10) = (float)*vfp_d(cpu,5);
    }
L_001f6988:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,10);
    }
L_001f698c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_001f6990:;
    {
        *vfp_s(cpu,10) = (float)*vfp_d(cpu,7);
    }
L_001f6994:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f6998:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00002840u, 0, 0);
    }
L_001f699c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001f69a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_001f69a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001f69a8:;
    {
        *vfp_s(cpu,11) = (float)*vfp_d(cpu,6);
    }
L_001f69ac:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 10));
        cpu->r[1] = ea + 4u;
    }
L_001f69b0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,11);
    }
L_001f69b4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 3);
    }
L_001f69b8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
    }
L_001f69bc:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) * *vfp_d(cpu, 4);
    }
L_001f69c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6990;
        }
    }
L_001f69c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_decoder_init_quant @ 001f69e0 (arm) */
void fn_001f69e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f69e0:;
    {
        return fn_001f6950(cpu);
    }
}

/* sub_001f69e4 @ 001f69e4 (arm) */
void fn_001f69e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f69e4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f69e8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001f69ec:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001f69f0:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[3] = v;
    }
L_001f69f4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001f69f8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f69fc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000010u, cpu->r[3], 1, 0);
    }
L_001f6a00:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f6a04:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001f6a08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001f6a0c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001f6a10:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[12]);
    }
L_001f6a14:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f6a18:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001f6a1c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f6a20:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6a50;
        }
    }
L_001f6a24:;
    {
        cpu->r[12] = rd8(cpu->r[2] + - 0x2u);
    }
L_001f6a28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_001f6a2c:;
    {
        cpu->r[4] = rd8(cpu->r[2] + - 0x3u);
    }
L_001f6a30:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_001f6a34:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 24u, &shc); cpu->r[12] = v;
    }
L_001f6a38:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f6a3c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6a50;
        }
    }
L_001f6a40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f6a44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
        }
    }
L_001f6a48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[2] + - 0x4u);
        }
    }
L_001f6a4c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001f6a50:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f6a54:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f6a58:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f6a5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* mpc_streaminfo_get_length @ 001f6a60 (arm) */
void fn_001f6a60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6a60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f6a64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f6a68:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x38u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001f6a6c:;
    {
        uint64_t v = rd64(cpu->r[4] + + 0x40u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f6a70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f6a74:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f6a78:;
    {
        cpu->r[14] = 0x001f6a7cu; imp___aeabi_ul2d(cpu); /* __aeabi_ul2d */
    }
L_001f6a7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001f6a80:;
    {
        *vfp_d(cpu,7) = (double)*(uint32_t*)vfp_s(cpu,14);
    }
L_001f6a84:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f6a88:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_001f6a8c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f6a90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f6a94u)) return;
    }
}

/* mpc_streaminfo_get_length_samples @ 001f6a94 (arm) */
void fn_001f6a94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6a94:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x38u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f6a98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001f6a9c:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x40u);
        cpu->r[4] = (uint32_t)v;
        cpu->r[5] = (uint32_t)(v >> 32);
    }
L_001f6aa0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001f6aa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f6aa8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f6aac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f6ab0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001f6ab4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f6ab8 @ 001f6ab8 (arm) */
void fn_001f6ab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6ab8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f6abc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001f6ac0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001f6ac4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
        }
    }
L_001f6ac8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x00000064u;
        }
    }
L_001f6acc:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[1] = v;
        }
    }
L_001f6ad0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001f6ad4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f6ad8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001f6adc:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[2]; cpu->r[12] = v;
        }
    }
L_001f6ae0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000074u, 1, 1);
    }
L_001f6ae4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f6b44;
        }
    }
L_001f6ae8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f6aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6be4;
        }
    }
L_001f6af0:;
    {
        cpu->r[4] = 0x00006667u;
    }
L_001f6af4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001f6af8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x6666u << 16);
    }
L_001f6afc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001f6b00:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_001f6b04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001f6b08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 1u, &shc), 1, 0);
    }
L_001f6b0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_001f6b10:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6b90;
        }
    }
L_001f6b14:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001f6b18:;
    {
        cpu->r[1] = rd32(0x001f6b20u + + 0x118u);
    }
L_001f6b1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001f6b20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_001f6b24:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6b2cu, cpu->r[1], 0, 0);
    }
L_001f6b28:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[5] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001f6b2c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_001f6b30:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_001f6b34:;
    {
        uint32_t v = cpu->r[12] - cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_001f6b38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001f6b3c:;
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
L_001f6b40:;
    {
        imp_sprintf(cpu); /* tail sprintf */ return;
    }
L_001f6b44:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 16u, &shc); cpu->r[14] = v;
    }
L_001f6b48:;
    {
        cpu->r[12] = (cpu->r[3] >> 8) & 0xffu;
    }
L_001f6b4c:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f6b50:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[3] = v;
    }
L_001f6b54:;
    {
        uint32_t v = cpu->r[14] & 0x000000ffu; cpu->r[14] = v;
    }
L_001f6b58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6b84;
        }
    }
L_001f6b5c:;
    {
        cpu->r[2] = rd32(0x001f6b64u + + 0xd8u);
    }
L_001f6b60:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6b68u, cpu->r[2], 0, 0);
    }
L_001f6b64:;
    {
        cpu->r[1] = rd32(0x001f6b6cu + + 0xd4u);
    }
L_001f6b68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_001f6b6c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001f6b70:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6b78u, cpu->r[1], 0, 0);
    }
L_001f6b74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001f6b78:;
    {
        cpu->r[14] = 0x001f6b7cu; imp_sprintf(cpu); /* sprintf */
    }
L_001f6b7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001f6b80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f6b84u)) return;
    }
L_001f6b84:;
    {
        cpu->r[2] = rd32(0x001f6b8cu + + 0xb8u);
    }
L_001f6b88:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6b90u, cpu->r[2], 0, 0);
    }
L_001f6b8c:;
    {
        goto L_001f6b64;
    }
L_001f6b90:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001f6b94:;
    {
        uint32_t v = shifter(cpu->r[5], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f6b98:;
    {
        { uint32_t v = cpu->r[1] & 0x00000154u; set_nz(cpu, v); }
    }
L_001f6b9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6c1c;
        }
    }
L_001f6ba0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f6ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6b14;
        }
    }
L_001f6ba8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[3]; cpu->r[5] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_001f6bac:;
    {
        cpu->r[1] = 0x0000851fu;
    }
L_001f6bb0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x51ebu << 16);
    }
L_001f6bb4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[6] = v;
    }
L_001f6bb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_001f6bbc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[12]; cpu->r[5] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_001f6bc0:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 1, 2u, &shc), cpu->r[6], 1, 0);
    }
L_001f6bc4:;
    {
        cpu->r[1] = rd32(0x001f6bccu + + 0x7cu);
    }
L_001f6bc8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001f6bcc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6bd4u, cpu->r[1], 0, 0);
    }
L_001f6bd0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 1, 0);
    }
L_001f6bd4:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_001f6bd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001f6bdc:;
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
L_001f6be0:;
    {
        imp_sprintf(cpu); /* tail sprintf */ return;
    }
L_001f6be4:;
    {
        cpu->r[4] = rd32(0x001f6becu + + 0x60u);
    }
L_001f6be8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_001f6bec:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_001f6bf0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f6bf8u, cpu->r[4], 0, 0);
    }
L_001f6bf4:;
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
L_001f6bf8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001f6bfc:;
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
L_001f6c00:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001f6c04:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001f6c08:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 16u, &shc); cpu->r[3] = v;
    }
L_001f6c0c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[0]);
        cpu->r[12] = wb_tmp;
    }
L_001f6c10:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000002u;
        wr16(cpu->r[12], cpu->r[1]);
        cpu->r[12] = wb_tmp;
    }
L_001f6c14:;
    {
        wr8(cpu->r[12], cpu->r[3]);
    }
L_001f6c18:;
    {
        goto L_001f6b7c;
    }
L_001f6c1c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001f6c20:;
    {
        cpu->r[1] = rd32(0x001f6c28u + + 0x28u);
    }
L_001f6c24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001f6c28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_001f6c2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f6c34u, cpu->r[1], 0, 0);
    }
L_001f6c30:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[4] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001f6c34:;
    {
        goto L_001f6b2c;
    }
}

/* streaminfo_encoder_info @ 001f6c58 (arm) */
void fn_001f6c58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6c58:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f6c5c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f6c60:;
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
L_001f6c64:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 0);
    }
L_001f6c68:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001f6c6c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[4] = v;
    }
L_001f6c70:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001f6c74:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f6c7cu + + 0xf4u);
    }
L_001f6c78:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001f6c7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001f6c80:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_001f6c84:;
    {
        cpu->r[0] = rd8(cpu->r[1] + - 0x1u);
    }
L_001f6c88:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001f6c8c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f6c90:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_001f6c94:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_001f6c98:;
    {
        *vfp_d(cpu,6) = (double)*(uint32_t*)vfp_s(cpu,12);
    }
L_001f6c9c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001f6ca0:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_001f6ca4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001f6cacu + + 0xccu);
    }
L_001f6ca8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001f6cac:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x150u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f6cb0:;
    {
        vfp_sync_flags(cpu);
    }
L_001f6cb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f6d64;
        }
    }
L_001f6cb8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f6cbc:;
    {
        cpu->r[2] = rd32(0x001f6cc4u + + 0xb8u);
    }
L_001f6cc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6cc8u, cpu->r[2], 0, 0);
    }
L_001f6cc4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f6cc8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001f6ccc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001f6cd0:;
    {
        wr32(cpu->r[3] + + 0x154u, cpu->r[2]);
    }
L_001f6cd4:;
    {
        uint32_t v = cpu->r[4] & 0x00000007u; cpu->r[8] = v;
    }
L_001f6cd8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f6cdc:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 31u, &shc); cpu->r[4] = v;
    }
L_001f6ce0:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001f6ce4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_001f6ce8:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001f6cec:;
    {
        cpu->r[9] = rd8(cpu->r[1] + cpu->r[4]);
    }
L_001f6cf0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001f6cf4:;
    {
        cpu->r[10] = rd8(cpu->r[12] + - 0x1u);
    }
L_001f6cf8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f6cfc:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_001f6d00:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[8] & 0xffu), &shc); cpu->r[8] = v;
    }
L_001f6d04:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[8] = v;
    }
L_001f6d08:;
    {
        wr8(cpu->r[3] + + 0x14cu, cpu->r[8]);
    }
L_001f6d0c:;
    {
        cpu->r[4] = rd8(cpu->r[1] + cpu->r[4]);
    }
L_001f6d10:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x1u);
    }
L_001f6d14:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f6d18:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[7] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f6d1c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 24u, &shc); cpu->r[1] = v;
    }
L_001f6d20:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[1]);
    }
L_001f6d24:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        cpu->r[7] = rd8(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_001f6d28:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x1u);
    }
L_001f6d2c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_001f6d30:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f6d34:;
    {
        uint32_t v = cpu->r[7] & 0x000000ffu; cpu->r[7] = v;
    }
L_001f6d38:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[7] = v;
    }
L_001f6d3c:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[7]);
    }
L_001f6d40:;
    {
        cpu->r[1] = rd8(cpu->r[2]);
    }
L_001f6d44:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_001f6d48:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001f6d4c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_001f6d50:;
    {
        uint32_t v = cpu->r[5] & 0x000000ffu; cpu->r[5] = v;
    }
L_001f6d54:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[7] = v;
    }
L_001f6d58:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[7]);
    }
L_001f6d5c:;
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
L_001f6d60:;
    {
        return fn_001f6ab8(cpu);
    }
L_001f6d64:;
    {
        cpu->r[2] = rd32(0x001f6d6cu + + 0x14u);
    }
L_001f6d68:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f6d70u, cpu->r[2], 0, 0);
    }
L_001f6d6c:;
    {
        goto L_001f6ccc;
    }
}

/* streaminfo_read_header_sv8 @ 001f6d88 (arm) */
void fn_001f6d88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6d88:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001f6d8c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f6d90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f6d94:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001f6d98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f6d9c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_001f6da0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 0);
    }
L_001f6da4:;
    {
        cpu->r[14] = cpu->r[0];
    }
L_001f6da8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001f6dac:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[1] = v;
    }
L_001f6db0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f6db4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f6db8:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f6dbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f6dc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001f6dc4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001f6dc8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001f6dcc:;
    {
        cpu->r[7] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f6dd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f6dd4:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_001f6dd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f6ddc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f6de0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f6de4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001f6de8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[6], 2, 24u, &shc); cpu->r[0] = v;
        }
    }
L_001f6dec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[7] | shifter(cpu->r[0], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001f6df0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f6df4:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001f6df8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f6dfc:;
    {
        cpu->r[6] = rd8(cpu->r[0] + - 0x1u);
    }
L_001f6e00:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 16u, &shc); cpu->r[7] = v;
    }
L_001f6e04:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001f6e08:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f6e0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[14] + cpu->r[12]);
        }
    }
L_001f6e10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd8(cpu->r[0] + - 0x3u);
        }
    }
L_001f6e14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f6e18:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[6] = v;
    }
L_001f6e1c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001f6e20:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 24u, &shc); cpu->r[3] = v;
        }
    }
L_001f6e24:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] | shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001f6e28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_001f6e2c:;
    {
        cpu->r[14] = 0x001f6e30u; fn_00202938(cpu);
    }
L_001f6e30:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_001f6e34:;
    {
        uint32_t v = cpu->r[6] | cpu->r[7]; cpu->r[7] = v;
    }
L_001f6e38:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001f6e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6e50;
        }
    }
L_001f6e40:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f6e44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f6e48:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f6e4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f6e50u)) return;
    }
L_001f6e50:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6e54:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f6e58:;
    {
        cpu->r[14] = 0x001f6e5cu; fn_001f69e4(cpu);
    }
L_001f6e5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001f6e60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f6e64:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_001f6e68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000005u);
        }
    }
L_001f6e6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6e44;
        }
    }
L_001f6e70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_001f6e74:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6e78:;
    {
        cpu->r[14] = 0x001f6e7cu; fn_00202ad0(cpu);
    }
L_001f6e7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001f6e80:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6e84:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001f6e88:;
    {
        cpu->r[14] = 0x001f6e8cu; fn_00202ad0(cpu);
    }
L_001f6e8c:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[7]);
    }
L_001f6e90:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001f6e94:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6e98:;
    {
        cpu->r[14] = 0x001f6e9cu; fn_001f69e4(cpu);
    }
L_001f6e9c:;
    {
        cpu->r[3] = rd32(0x001f6ea4u + + 0xf4u);
    }
L_001f6ea0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001f6ea4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f6eacu, cpu->r[3], 0, 0);
    }
L_001f6ea8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001f6eac:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6eb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001f6eb4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f6eb8:;
    {
        cpu->r[14] = 0x001f6ebcu; fn_001f69e4(cpu);
    }
L_001f6ebc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001f6ec0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001f6ec4:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001f6ec8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6ecc:;
    {
        cpu->r[14] = 0x001f6ed0u; fn_001f69e4(cpu);
    }
L_001f6ed0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f6ed4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001f6ed8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001f6edc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6ee0:;
    {
        cpu->r[14] = 0x001f6ee4u; fn_001f69e4(cpu);
    }
L_001f6ee4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001f6ee8:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[0]);
    }
L_001f6eec:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f6ef0:;
    {
        cpu->r[14] = 0x001f6ef4u; fn_001f69e4(cpu);
    }
L_001f6ef4:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x38u);
        cpu->r[6] = (uint32_t)v;
        cpu->r[7] = (uint32_t)(v >> 32);
    }
L_001f6ef8:;
    {
        uint64_t v = rd64(cpu->r[5] + + 0x40u);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
    }
L_001f6efc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f6f00:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[1]);
    }
L_001f6f04:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001f6f08:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001f6f0c:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[0]);
    }
L_001f6f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f6f80;
        }
    }
L_001f6f14:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x15cu);
    }
L_001f6f18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001f6f1c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x158u);
    }
L_001f6f20:;
    {
        *vfp_d(cpu,7) = (double)*(uint32_t*)vfp_s(cpu,14);
    }
L_001f6f24:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f6f2cu + + 0x64u);
    }
L_001f6f28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f6f2c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001f6f30:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[12];
    }
L_001f6f34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f6f38:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f6f3c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f6f40:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f6f44:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f6f48:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001f6f4c:;
    {
        cpu->r[14] = 0x001f6f50u; imp___aeabi_ul2d(cpu); /* __aeabi_ul2d */
    }
L_001f6f50:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f6f54:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) / *vfp_d(cpu, 6);
    }
L_001f6f58:;
    {
        *(uint64_t*)G(cpu->r[5] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001f6f5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_001f6f60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f6f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_001f6f68:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f6e40;
        }
    }
L_001f6f6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f6f70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001f6f74:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f6f78:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f6e44;
        }
    }
L_001f6f7c:;
    {
        goto L_001f6e40;
    }
L_001f6f80:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001f6f84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f6f14;
        }
    }
L_001f6f88:;
    {
        goto L_001f6f5c;
    }
}

/* streaminfo_read_header_sv7 @ 001f6fa0 (arm) */
void fn_001f6fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f6fa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f6fa4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001f6fa8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f6fac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001f6fb4u + + 0x3f4u);
    }
L_001f6fb0:;
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
L_001f6fb4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f6fb8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 0);
    }
L_001f6fbc:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_001f6fc0:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[2] = v;
    }
L_001f6fc4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f6fc8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f6fcc:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f6fd0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f6fd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_001f6fd8:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f6fdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f6fe0:;
    {
        cpu->r[0] = rd8(cpu->r[14] + cpu->r[12]);
    }
L_001f6fe4:;
    {
        cpu->r[6] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f6fe8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f6fec:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[6] = v;
    }
L_001f6ff0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f6ff4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f6ff8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
    }
L_001f6ffc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001f7000:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[0] = v;
        }
    }
L_001f7004:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] | shifter(cpu->r[0], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001f7008:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f700c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f7010:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001f7014:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd8(cpu->r[14] + cpu->r[12]);
        }
    }
L_001f7018:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 16u, &shc); cpu->r[6] = v;
    }
L_001f701c:;
    {
        cpu->r[5] = rd8(cpu->r[0] + - 0x1u);
    }
L_001f7020:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[0] + - 0x3u);
        }
    }
L_001f7024:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001f7028:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
        }
    }
L_001f702c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f7030:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[12] = v;
        }
    }
L_001f7034:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f7038:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001f703c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f7040:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[14] = v;
    }
L_001f7044:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_001f7048:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001f704c:;
    {
        uint32_t v = cpu->r[14] & 0x00000007u; cpu->r[12] = v;
    }
L_001f7050:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001f7054:;
    {
        uint32_t v = shifter(cpu->r[14], 3, 31u, &shc); cpu->r[14] = v;
    }
L_001f7058:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_001f705c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_001f7060:;
    {
        uint32_t v = cpu->r[3] | cpu->r[6]; cpu->r[6] = v;
    }
L_001f7064:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001f7068:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[14]);
    }
L_001f706c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + - 0x1u);
    }
L_001f7070:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f7074:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f7078:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_001f707c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001f7080:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f7084:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000006u, 1, 0);
    }
L_001f7088:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[2] = v;
    }
L_001f708c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f7090:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f7094:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f7098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001f709c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f70a0:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001f70a4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f70a8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001f70ac:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f70b0:;
    {
        uint32_t v = cpu->r[2] & 0x0000003fu; cpu->r[2] = v;
    }
L_001f70b4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001f70b8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f70bc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000004u, 1, 0);
    }
L_001f70c0:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[2] = v;
    }
L_001f70c4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f70c8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001f70cc:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001f70d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001f70d4:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001f70d8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[12]);
    }
L_001f70dc:;
    {
        cpu->r[12] = rd8(cpu->r[0] + - 0x1u);
    }
L_001f70e0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f70e4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f70e8:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_001f70ec:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_001f70f0:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_001f70f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001f70f8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x150u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f70fc:;
    {
        vfp_sync_flags(cpu);
    }
L_001f7100:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f74d4;
        }
    }
L_001f7104:;
    {
        cpu->r[12] = rd32(0x001f710cu + + 0x2a0u);
    }
L_001f7108:;
    {
        cpu->r[12] = add_flags(cpu, 0x001f7110u, cpu->r[12], 0, 0);
    }
L_001f710c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_001f7110:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[12]);
    }
L_001f7114:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[14] = v;
    }
L_001f7118:;
    {
        cpu->r[2] = rd32(0x001f7120u + + 0x290u);
    }
L_001f711c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000002u, 1, 0);
    }
L_001f7120:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_001f7124:;
    {
        uint32_t v = cpu->r[14] & 0x00000007u; cpu->r[12] = v;
    }
L_001f7128:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_001f712c:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_001f7130:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f7138u, cpu->r[2], 0, 0);
    }
L_001f7134:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_001f7138:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f713c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_001f7140:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f7144:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[14]);
    }
L_001f7148:;
    {
        cpu->r[14] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f714c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001f7150:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f7154:;
    {
        uint32_t v = cpu->r[12] & 0x00000003u; cpu->r[12] = v;
    }
L_001f7158:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001f715c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f7160:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001f7164:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f7168:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_001f716c:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[0] = v;
    }
L_001f7170:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001f7174:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001f7178:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f717c:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001f7180:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_001f7184:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001f7188:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001f718c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[14]);
        }
    }
L_001f7190:;
    {
        cpu->r[5] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f7194:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f7198:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x2u);
    }
L_001f719c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001f71a0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001f71a4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[12] = v;
    }
L_001f71a8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[3] = v;
        }
    }
L_001f71ac:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[12] = v;
    }
L_001f71b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] | shifter(cpu->r[3], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[12] = v;
        }
    }
L_001f71b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001f71b8:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f71bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f71c0:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_001f71c4:;
    {
        wr16(cpu->r[4] + + 0x28u, cpu->r[12]);
    }
L_001f71c8:;
    {
        cpu->r[14] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f71cc:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2u);
    }
L_001f71d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f71d4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[14] = v;
    }
L_001f71d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f71dc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001f71e0:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001f71e4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
        }
    }
L_001f71e8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[2] = v;
        }
    }
L_001f71ec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[14] | shifter(cpu->r[2], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001f71f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f71f4:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[14]);
    }
L_001f71f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f71fc:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001f7200:;
    {
        cpu->r[7] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f7204:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001f7208:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f720c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_001f7210:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[2] + - 0x2u);
        }
    }
L_001f7214:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001f7218:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001f721c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001f7220:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[3] = v;
        }
    }
L_001f7224:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[7] | shifter(cpu->r[3], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001f7228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001f722c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f7230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7234:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_001f7238:;
    {
        wr16(cpu->r[4] + + 0x2au, cpu->r[7]);
    }
L_001f723c:;
    {
        cpu->r[14] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f7240:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2u);
    }
L_001f7244:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f7248:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001f724c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f7250:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f7254:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[14], 2, 16u, &shc); cpu->r[14] = v;
        }
    }
L_001f7258:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[14] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[14] = v;
        }
    }
L_001f725c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001f7260:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001f7264:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_001f7268:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[2] = v;
    }
L_001f726c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_001f7270:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f7274:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001f7278:;
    {
        wr32(cpu->r[1], cpu->r[14]);
    }
L_001f727c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[0]);
    }
L_001f7280:;
    {
        cpu->r[0] = rd8(cpu->r[14] + - 0x1u);
    }
L_001f7284:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f7288:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f728c:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_001f7290:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001f7294:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f7298:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000000bu, 1, 0);
    }
L_001f729c:;
    {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[2] = v;
    }
L_001f72a0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001f72a4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001f72a8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000010u, cpu->r[2], 1, 0);
    }
L_001f72ac:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001f72b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001f72b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_001f72b8:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001f72bc:;
    {
        cpu->r[0] = rd8(cpu->r[14] + cpu->r[0]);
    }
L_001f72c0:;
    {
        cpu->r[5] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f72c4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[14] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f72c8:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_001f72cc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f72d0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
    }
L_001f72d4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001f72d8:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[14], 2, 24u, &shc); cpu->r[0] = v;
        }
    }
L_001f72dc:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[5] | shifter(cpu->r[0], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_001f72e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001f72e4:;
    {
        uint32_t v = cpu->r[2] & 0x00000007u; cpu->r[14] = v;
    }
L_001f72e8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[14]);
    }
L_001f72ec:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
    }
L_001f72f0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 21u, &shc); cpu->r[5] = v;
    }
L_001f72f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f72f8:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001f72fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001f7300:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f7304:;
    {
        cpu->r[2] = rd8(cpu->r[0] + - 0x1u);
    }
L_001f7308:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 21u, &shc); cpu->r[5] = v;
    }
L_001f730c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f7310:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_001f7314:;
    {
        uint32_t v = cpu->r[14] & 0x00000001u; cpu->r[14] = v;
    }
L_001f7318:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[14]);
    }
L_001f731c:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f7320:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000013u, 1, 0);
    }
L_001f7324:;
    {
        uint32_t v = cpu->r[14] & 0x00000007u; cpu->r[3] = v;
    }
L_001f7328:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001f732c:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[14] = v;
    }
L_001f7330:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_001f7334:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_001f7338:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f733c:;
    {
        wr32(cpu->r[1], cpu->r[10]);
    }
L_001f7340:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[14]);
    }
L_001f7344:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001f7348:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_001f734c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001f7350:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001f7354:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[8]);
    }
L_001f7358:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f735c:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
    }
L_001f7360:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001f7364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f73d0;
        }
    }
L_001f7368:;
    {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[12]);
    }
L_001f736c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[12];
    }
L_001f7370:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f7374:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f737cu + + 0x14u);
    }
L_001f7378:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f7380u + + 0x18u);
    }
L_001f737c:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) / *vfp_d(cpu, 6);
    }
L_001f7380:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f7388u + + 0x18u);
    }
L_001f7384:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) + *vfp_d(cpu, 6);
    }
L_001f7388:;
    {
        goto L_001f73b4;
    }
L_001f73b4:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f73bcu + + 0x1b4u);
    }
L_001f73b8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f73bc:;
    {
        *(int32_t*)vfp_s(cpu,8) = (int32_t)*vfp_d(cpu,7);
    }
L_001f73c0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,8);
    }
L_001f73c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00010000u, 1, 1);
    }
L_001f73c8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[3]);
        }
    }
L_001f73cc:;
    {
        wr16(cpu->r[4] + + 0x28u, cpu->r[8]);
    }
L_001f73d0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f73d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f7418;
        }
    }
L_001f73d8:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_001f73dc:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[7];
    }
L_001f73e0:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f73e4:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f73ecu + + 0x18cu);
    }
L_001f73e8:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f73f0u + + 0x190u);
    }
L_001f73ec:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) / *vfp_d(cpu, 6);
    }
L_001f73f0:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f73f8u + + 0x190u);
    }
L_001f73f4:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) + *vfp_d(cpu, 6);
    }
L_001f73f8:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f7400u + + 0x170u);
    }
L_001f73fc:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f7400:;
    {
        *(int32_t*)vfp_s(cpu,9) = (int32_t)*vfp_d(cpu,7);
    }
L_001f7404:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,9);
    }
L_001f7408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00010000u, 1, 1);
    }
L_001f740c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f7410:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
        }
    }
L_001f7414:;
    {
        wr16(cpu->r[4] + + 0x2au, cpu->r[3]);
    }
L_001f7418:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0x2eu);
    }
L_001f741c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7420:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7524;
        }
    }
L_001f7424:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0x2cu);
    }
L_001f7428:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f742c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f74ec;
        }
    }
L_001f7430:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f7434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f7438:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000480u;
        }
    }
L_001f743c:;
    {
        cpu->r[14] = 0x001f7440u; fn_001f6ab8(cpu);
    }
L_001f7440:;
    {
        cpu->r[2] = 0x00000480u;
    }
L_001f7444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001f7448:;
    {
        { uint64_t v = (uint64_t)cpu->r[6] * (uint64_t)cpu->r[2]; cpu->r[6] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_001f744c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f7450:;
    {
        wr64(cpu->r[4] + + 0x38u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_001f7454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f74bc;
        }
    }
L_001f7458:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001f745c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001f7460:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], 0x00000000u, (cpu->cpsr >> 29) & 1, 1);
    }
L_001f7464:;
    {
        wr64(cpu->r[4] + + 0x38u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f7468:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x15cu);
    }
L_001f746c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_001f7470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x158u);
    }
L_001f7474:;
    {
        *vfp_d(cpu,7) = (double)*(uint32_t*)vfp_s(cpu,14);
    }
L_001f7478:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f7480u + + 0x110u);
    }
L_001f747c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f7480:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[3];
    }
L_001f7484:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f7488:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f748c:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_001f7490:;
    {
        cpu->r[14] = 0x001f7494u; imp___aeabi_ul2d(cpu); /* __aeabi_ul2d */
    }
L_001f7494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f7498:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f749c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_001f74a0:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f74a4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) / *vfp_d(cpu, 6);
    }
L_001f74a8:;
    {
        *(uint64_t*)G(cpu->r[4] + + 0x10u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001f74ac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f755c;
        }
    }
L_001f74b0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f74b4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f74b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f74bcu)) return;
    }
L_001f74bc:;
    {
        cpu->r[0] = (~0x000001e0u);
    }
L_001f74c0:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001f74c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 1);
    }
L_001f74c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], (cpu->cpsr >> 29) & 1, 1);
    }
L_001f74cc:;
    {
        wr64(cpu->r[4] + + 0x38u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001f74d0:;
    {
        goto L_001f7468;
    }
L_001f74d4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f74d8:;
    {
        cpu->r[3] = rd32(0x001f74e0u + + 0xc0u);
    }
L_001f74dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f74e4u, cpu->r[3], 0, 0);
    }
L_001f74e0:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f74e4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_001f74e8:;
    {
        goto L_001f710c;
    }
L_001f74ec:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001f74f0:;
    {
        *vfp_d(cpu,6) = (double)*(uint32_t*)vfp_s(cpu,13);
    }
L_001f74f4:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f74f8:;
    {
        cpu->r[14] = 0x001f74fcu; imp_log10(cpu); /* log10 */
    }
L_001f74fc:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f7504u + + 0x94u);
    }
L_001f7500:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f7508u + + 0x78u);
    }
L_001f7504:;
    {
        *(uint64_t*)vfp_d(cpu,4) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f7508:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 4) * *vfp_d(cpu, 6);
    }
L_001f750c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f7514u + + 0x5cu);
    }
L_001f7510:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f7514:;
    {
        *(uint32_t*)vfp_s(cpu,9) = (uint32_t)*vfp_d(cpu,7);
    }
L_001f7518:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,9);
    }
L_001f751c:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001f7520:;
    {
        goto L_001f7430;
    }
L_001f7524:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001f7528:;
    {
        *vfp_d(cpu,6) = (double)*(uint32_t*)vfp_s(cpu,13);
    }
L_001f752c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f7530:;
    {
        cpu->r[14] = 0x001f7534u; imp_log10(cpu); /* log10 */
    }
L_001f7534:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f753cu + + 0x5cu);
    }
L_001f7538:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x001f7540u + + 0x40u);
    }
L_001f753c:;
    {
        *(uint64_t*)vfp_d(cpu,4) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f7540:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 4) * *vfp_d(cpu, 6);
    }
L_001f7544:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x001f754cu + + 0x24u);
    }
L_001f7548:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_001f754c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = (uint32_t)*vfp_d(cpu,7);
    }
L_001f7550:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,9);
    }
L_001f7554:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_001f7558:;
    {
        goto L_001f7424;
    }
L_001f755c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001f7560:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001f7564:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f7568:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f74b4;
        }
    }
L_001f756c:;
    {
        goto L_001f74b0;
    }
}

/* streaminfo_gain @ 001f75a8 (arm) */
void fn_001f75a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f75a8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001f75ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_001f75b0:;
    {
        uint32_t v = cpu->r[3] & 0x00000007u; cpu->r[12] = v;
    }
L_001f75b4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001f75b8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001f75bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f75c0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001f75c4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001f75c8:;
    {
        cpu->r[2] = rd8(cpu->r[1] + - 0x1u);
    }
L_001f75cc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001f75d0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f75d4:;
    {
        uint32_t v = cpu->r[2] & 0x000000ffu; cpu->r[2] = v;
    }
L_001f75d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001f75dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f75e8;
        }
    }
L_001f75e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f75e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f75e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001f75ec:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x2u);
    }
L_001f75f0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f75f4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + - 0x1u);
    }
L_001f75f8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001f75fc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f7600:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[4] + - 0x3u);
        }
    }
L_001f7604:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f7608:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
        }
    }
L_001f760c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001f7610:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001f7614:;
    {
        wr16(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_001f7618:;
    {
        cpu->r[1] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f761c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f7620:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2u);
    }
L_001f7624:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f7628:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f762c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[2] + - 0x2u);
        }
    }
L_001f7630:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f7634:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001f7638:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[4], 2, 24u, &shc); cpu->r[3] = v;
        }
    }
L_001f763c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[3], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001f7640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001f7644:;
    {
        wr16(cpu->r[0] + + 0x2eu, cpu->r[1]);
    }
L_001f7648:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f764c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + - 0x1u);
    }
L_001f7650:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2u);
    }
L_001f7654:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd8(cpu->r[3] + - 0x3u);
        }
    }
L_001f7658:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001f765c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + - 0x2u);
        }
    }
L_001f7660:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f7664:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
        }
    }
L_001f7668:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | shifter(cpu->r[4], 2, 24u, &shc); cpu->r[2] = v;
        }
    }
L_001f766c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001f7670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f7674:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f7678:;
    {
        wr16(cpu->r[0] + + 0x2au, cpu->r[1]);
    }
L_001f767c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + - 0x1u);
    }
L_001f7680:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001f7684:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd8(cpu->r[2] + - 0x2u);
        }
    }
L_001f7688:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001f768c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd8(cpu->r[2] + - 0x3u);
        }
    }
L_001f7690:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, 16u, &shc); cpu->r[2] = v;
        }
    }
L_001f7694:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f7698:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 24u, &shc); cpu->r[2] = v;
        }
    }
L_001f769c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001f76a0:;
    {
        wr16(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_001f76a4:;
    {
        goto L_001f75e0;
    }
}

/* _Z26get_stb_vorbis_struct_sizev @ 001f76a8 (arm) */
void fn_001f76a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f76a8:;
    {
        cpu->r[0] = 0x000005a8u;
    }
L_001f76ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z28stb_vorbis_get_stream_offsetP10stb_vorbis @ 001f76b0 (arm) */
void fn_001f76b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f76b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f76b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f76b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f76dc;
        }
    }
L_001f76bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f76c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f76c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f76dc;
        }
    }
L_001f76c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001f76cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f76d0:;
    {
        cpu->r[14] = 0x001f76d8u;
    }
L_001f76d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f76d8u)) return;
    }
L_001f76d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f76dcu)) return;
    }
L_001f76dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f76e0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f76e4u)) return;
    }
}

/* _Z22stb_vorbis_get_channelP10stb_vorbis @ 001f76e4 (arm) */
void fn_001f76e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f76e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f76e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_001f76ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z30stb_vorbis_get_previous_windowP10stb_vorbisi @ 001f76f0 (arm) */
void fn_001f76f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f76f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f76f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7700;
        }
    }
L_001f76f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f76fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f7700:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f7704:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f7708:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000ecu, 0, 0);
        }
    }
L_001f770c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_001f7710:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f7714:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f7718:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21stb_vorbis_get_bufferP10stb_vorbisi @ 001f771c (arm) */
void fn_001f771c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f771c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f772c;
        }
    }
L_001f7724:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f7728:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f772c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001f7730:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f7734:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000ccu, 0, 0);
        }
    }
L_001f7738:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_001f773c:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f7740:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f7744:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21stb_vorbis_set_streamP10stb_vorbisPN3vox21StreamCursorInterfaceE @ 001f7748 (arm) */
void fn_001f7748(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7748:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f774c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_001f7750:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
        }
    }
L_001f7754:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z26stb_vorbis_get_blocksize_1P10stb_vorbis @ 001f7758 (arm) */
void fn_001f7758(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f775c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x84u);
        }
    }
L_001f7760:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z15stb_vorbis_copyP10stb_vorbisS0_ @ 001f7764 (arm) */
void fn_001f7764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7764:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f7768:;
    {
        cpu->r[2] = 0x000005a8u;
    }
L_001f776c:;
    {
        cpu->r[14] = 0x001f7770u; imp_memcpy(cpu); /* memcpy */
    }
L_001f7770:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f7774u)) return;
    }
}

/* sub_001f7774 @ 001f7774 (arm) */
void fn_001f7774(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7774:;
    {
        cpu->r[3] = 0x00005555u;
    }
L_001f7778:;
    {
        cpu->r[2] = 0x0000aaaau;
    }
L_001f777c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_001f7780:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xaaaau << 16);
    }
L_001f7784:;
    {
        uint32_t v = cpu->r[0] & cpu->r[3]; cpu->r[3] = v;
    }
L_001f7788:;
    {
        uint32_t v = cpu->r[0] & cpu->r[2]; cpu->r[2] = v;
    }
L_001f778c:;
    {
        cpu->r[0] = 0x00003333u;
    }
L_001f7790:;
    {
        cpu->r[1] = 0x0000ccccu;
    }
L_001f7794:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f7798:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x3333u << 16);
    }
L_001f779c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 1u, &shc); cpu->r[2] = v;
    }
L_001f77a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xccccu << 16);
    }
L_001f77a4:;
    {
        uint32_t v = cpu->r[2] & cpu->r[0]; cpu->r[0] = v;
    }
L_001f77a8:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[1] = v;
    }
L_001f77ac:;
    {
        cpu->r[2] = 0x00000f0fu;
    }
L_001f77b0:;
    {
        cpu->r[3] = 0x0000f0f0u;
    }
L_001f77b4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001f77b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0f0fu << 16);
    }
L_001f77bc:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
    }
L_001f77c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xf0f0u << 16);
    }
L_001f77c4:;
    {
        uint32_t v = cpu->r[1] & cpu->r[2]; cpu->r[2] = v;
    }
L_001f77c8:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_001f77cc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[2] = v;
    }
L_001f77d0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 3, 4u, &shc); cpu->r[3] = v;
    }
L_001f77d4:;
    {
        uint32_t v = cpu->r[3] & ~ 0xff000000u; cpu->r[0] = v;
    }
L_001f77d8:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00ff0000u; cpu->r[3] = v;
    }
L_001f77dc:;
    {
        uint32_t v = cpu->r[0] & ~ 0x0000ff00u; cpu->r[0] = v;
    }
L_001f77e0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001f77e4:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[3], 3, 8u, &shc); cpu->r[0] = v;
    }
L_001f77e8:;
    {
        uint32_t v = shifter(cpu->r[0], 4, 16u, &shc); cpu->r[0] = v;
    }
L_001f77ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f77f0 @ 001f77f0 (arm) */
void fn_001f77f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f77f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00004000u, 1, 1);
    }
L_001f77f4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f7820;
        }
    }
L_001f77f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000fu, 1, 1);
    }
L_001f77fc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f7874;
        }
    }
L_001f7800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000200u, 1, 1);
    }
L_001f7804:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f7884;
        }
    }
L_001f7808:;
    {
        cpu->r[3] = rd32(0x001f7810u + + 0xbcu);
    }
L_001f780c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[0] = v;
    }
L_001f7810:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f7818u, cpu->r[3], 0, 0);
    }
L_001f7814:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f7818:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000005u, 0, 0);
    }
L_001f781c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f7820:;
    {
        sub_flags(cpu, cpu->r[0], 0x01000000u, 1, 1);
    }
L_001f7824:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f7848;
        }
    }
L_001f7828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00080000u, 1, 1);
    }
L_001f782c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f789c;
        }
    }
L_001f7830:;
    {
        cpu->r[3] = rd32(0x001f7838u + + 0x98u);
    }
L_001f7834:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 15u, &shc); cpu->r[0] = v;
    }
L_001f7838:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f7840u, cpu->r[3], 0, 0);
    }
L_001f783c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f7840:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_001f7844:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f7848:;
    {
        add_flags(cpu, cpu->r[0], 0xe0000001u, 0, 1);
    }
L_001f784c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f78b4;
        }
    }
L_001f7850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7854:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f7858:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f785c:;
    {
        cpu->r[3] = rd32(0x001f7864u + + 0x70u);
    }
L_001f7860:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 30u, &shc); cpu->r[0] = v;
    }
L_001f7864:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f786cu, cpu->r[3], 0, 0);
    }
L_001f7868:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f786c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001eu, 0, 0);
    }
L_001f7870:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f7874:;
    {
        cpu->r[3] = rd32(0x001f787cu + + 0x5cu);
    }
L_001f7878:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f7880u, cpu->r[3], 0, 0);
    }
L_001f787c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f7880:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f7884:;
    {
        cpu->r[3] = rd32(0x001f788cu + + 0x50u);
    }
L_001f7888:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 10u, &shc); cpu->r[0] = v;
    }
L_001f788c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f7894u, cpu->r[3], 0, 0);
    }
L_001f7890:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f7894:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_001f7898:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f789c:;
    {
        cpu->r[3] = rd32(0x001f78a4u + + 0x3cu);
    }
L_001f78a0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 20u, &shc); cpu->r[0] = v;
    }
L_001f78a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f78acu, cpu->r[3], 0, 0);
    }
L_001f78a8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f78ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_001f78b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f78b4:;
    {
        cpu->r[3] = rd32(0x001f78bcu + + 0x28u);
    }
L_001f78b8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 25u, &shc); cpu->r[0] = v;
    }
L_001f78bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f78c4u, cpu->r[3], 0, 0);
    }
L_001f78c0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[3] + cpu->r[0]);
    }
L_001f78c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000019u, 0, 0);
    }
L_001f78c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f78e8 @ 001f78e8 (arm) */
void fn_001f78e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f78e8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001f78ec:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001f78f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f78f4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f78f8:;
    {
        if (cond_test(cpu, 4)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f78fc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f7900:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f7904:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13point_comparePKvS0_ @ 001f7908 (arm) */
void fn_001f7908(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7908:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_001f790c:;
    {
        cpu->r[2] = rd16(cpu->r[1]);
    }
L_001f7910:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f7914:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f7918:;
    {
        if (cond_test(cpu, 4)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f791c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f7920:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f7924:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f7928 @ 001f7928 (arm) */
void fn_001f7928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7928:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001f792c:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001f7930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7934:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f7938:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f793c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001f7940:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_001f7944:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_001f7948:;
    {
        vfp_vadd(cpu, 13, 10, 12);
    }
L_001f794c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001f7950:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x4u);
    }
L_001f7954:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001f7958:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001f795c:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_001f7960:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001f7964:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_001f7968:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f796c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_001f7970:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7974:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[12]);
    }
L_001f7978:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x8u);
    }
L_001f797c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001f7980:;
    {
        vfp_vsub(cpu, 12, 10, 12);
    }
L_001f7984:;
    {
        vfp_vnmls(cpu, 15, 12, 9);
    }
L_001f7988:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f798c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_001f7990:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001f7994:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_001f7998:;
    {
        vfp_vmla(cpu, 15, 14, 12);
    }
L_001f799c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f79a0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + - 0x8u);
    }
L_001f79a4:;
    {
        vfp_vadd(cpu, 14, 10, 11);
    }
L_001f79a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0xcu);
    }
L_001f79ac:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001f79b0:;
    {
        vfp_vsub(cpu, 13, 15, 13);
    }
L_001f79b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001f79b8:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001f79bc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f79c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x24u);
    }
L_001f79c4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001f79c8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[12] + + 0x20u);
    }
L_001f79cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x10u);
    }
L_001f79d0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001f79d4:;
    {
        vfp_vsub(cpu, 11, 10, 11);
    }
L_001f79d8:;
    {
        vfp_vnmls(cpu, 15, 11, 9);
    }
L_001f79dc:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f79e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x24u);
    }
L_001f79e4:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001f79e8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12] + + 0x20u);
    }
L_001f79ec:;
    {
        vfp_vmla(cpu, 15, 13, 11);
    }
L_001f79f0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f79f4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + - 0x10u);
    }
L_001f79f8:;
    {
        vfp_vadd(cpu, 11, 13, 14);
    }
L_001f79fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x14u);
    }
L_001f7a00:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001f7a04:;
    {
        vfp_vsub(cpu, 12, 15, 12);
    }
L_001f7a08:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001f7a0c:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_001f7a10:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x44u);
    }
L_001f7a18:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001f7a1c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12] + + 0x40u);
    }
L_001f7a20:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_001f7a24:;
    {
        vfp_vnmls(cpu, 15, 14, 11);
    }
L_001f7a28:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x44u);
    }
L_001f7a30:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7a34:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12] + + 0x40u);
    }
L_001f7a38:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x18u);
    }
L_001f7a3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001f7a40:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_001f7a44:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a48:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + - 0x18u);
    }
L_001f7a4c:;
    {
        vfp_vadd(cpu, 11, 12, 13);
    }
L_001f7a50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x1cu);
    }
L_001f7a54:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001f7a58:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_001f7a5c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001f7a60:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_001f7a64:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x64u);
    }
L_001f7a6c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7a70:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[12] + + 0x60u);
    }
L_001f7a74:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 0);
    }
L_001f7a78:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_001f7a7c:;
    {
        vfp_vnmls(cpu, 15, 13, 11);
    }
L_001f7a80:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x64u);
    }
L_001f7a88:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001f7a8c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0x60u);
    }
L_001f7a90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000080u, 0, 0);
    }
L_001f7a94:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_001f7a98:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7a9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_001f7aa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7940;
        }
    }
L_001f7aa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f7aa8 @ 001f7aa8 (arm) */
void fn_001f7aa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7aa8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001f7aac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7ab0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001f7ab4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f7ab8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f7abc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7c54;
        }
    }
L_001f7ac0:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[4] = v;
    }
L_001f7ac4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001f7ac8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001f7acc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f7ad0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_001f7ad4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001f7ad8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_001f7adc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001f7ae0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001f7ae4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_001f7ae8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_001f7aec:;
    {
        vfp_vadd(cpu, 13, 10, 12);
    }
L_001f7af0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001f7af4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x4u);
    }
L_001f7af8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001f7afc:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001f7b00:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_001f7b04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001f7b08:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_001f7b0c:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7b10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_001f7b14:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7b18:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[12]);
    }
L_001f7b1c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x8u);
    }
L_001f7b20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001f7b24:;
    {
        vfp_vsub(cpu, 12, 10, 12);
    }
L_001f7b28:;
    {
        vfp_vnmls(cpu, 15, 12, 9);
    }
L_001f7b2c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7b30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_001f7b34:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001f7b38:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_001f7b3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_001f7b40:;
    {
        vfp_vmla(cpu, 15, 14, 12);
    }
L_001f7b44:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7b48:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + - 0x8u);
    }
L_001f7b4c:;
    {
        vfp_vadd(cpu, 14, 10, 11);
    }
L_001f7b50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0xcu);
    }
L_001f7b54:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001f7b58:;
    {
        vfp_vsub(cpu, 13, 15, 13);
    }
L_001f7b5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001f7b60:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001f7b64:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7b68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001f7b6c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001f7b70:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[5]);
    }
L_001f7b74:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x10u);
    }
L_001f7b78:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001f7b7c:;
    {
        vfp_vsub(cpu, 11, 10, 11);
    }
L_001f7b80:;
    {
        vfp_vnmls(cpu, 15, 11, 9);
    }
L_001f7b84:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7b88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001f7b8c:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001f7b90:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[5]);
    }
L_001f7b94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001f7b98:;
    {
        vfp_vmla(cpu, 15, 13, 11);
    }
L_001f7b9c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7ba0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + - 0x10u);
    }
L_001f7ba4:;
    {
        vfp_vadd(cpu, 11, 13, 14);
    }
L_001f7ba8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x14u);
    }
L_001f7bac:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001f7bb0:;
    {
        vfp_vsub(cpu, 12, 15, 12);
    }
L_001f7bb4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001f7bb8:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_001f7bbc:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7bc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001f7bc4:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001f7bc8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4]);
    }
L_001f7bcc:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_001f7bd0:;
    {
        vfp_vnmls(cpu, 15, 14, 11);
    }
L_001f7bd4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7bd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001f7bdc:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7be0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4]);
    }
L_001f7be4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x18u);
    }
L_001f7be8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001f7bec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001f7bf0:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_001f7bf4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7bf8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + - 0x18u);
    }
L_001f7bfc:;
    {
        vfp_vadd(cpu, 11, 12, 13);
    }
L_001f7c00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + - 0x1cu);
    }
L_001f7c04:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001f7c08:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_001f7c0c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001f7c10:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_001f7c14:;
    {
        *(uint32_t*)G(cpu->r[1] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7c18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001f7c1c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f7c20:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_001f7c24:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000020u, 1, 0);
    }
L_001f7c28:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_001f7c2c:;
    {
        vfp_vnmls(cpu, 15, 13, 11);
    }
L_001f7c30:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7c34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001f7c38:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001f7c3c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_001f7c40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001f7c44:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_001f7c48:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f7c4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_001f7c50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7ae4;
        }
    }
L_001f7c54:;
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
L_001f7c58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f7c5c @ 001f7c5c (arm) */
void fn_001f7c5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7c5c:;
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
L_001f7c60:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x3f0u);
    }
L_001f7c64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001f7c68:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001f7c6c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001f7c70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001f7c74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_001f7c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f7d50;
        }
    }
L_001f7c7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7c80:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x80u);
    }
L_001f7c84:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f7c88:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001f7c8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_001f7c90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[0] + + 0x454u);
        }
    }
L_001f7c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f7cb0;
        }
    }
L_001f7c98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7c9c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x84u);
    }
L_001f7ca0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001f7ca4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001f7ca8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_001f7cac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[1] + + 0x458u);
        }
    }
L_001f7cb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7cb4:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f7cb8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f7cbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7d50;
        }
    }
L_001f7cc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f7cc4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001f7cc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001f7ccc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001f7cd0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001f7cd4:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001f7cd8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001f7cdc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001f7ce0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7d38;
        }
    }
L_001f7ce4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x330u);
    }
L_001f7ce8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f7cec:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x3b0u);
    }
L_001f7cf0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001f7cf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001f7cf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f7cfc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_001f7d00:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001f7d04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + - 0x4u);
    }
L_001f7d08:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001f7d0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001f7d10:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_001f7d14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f7d18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001f7d1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f7d20:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001f7d24:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001f7d28:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f7d2c:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_001f7d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f7d34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7cf8;
        }
    }
L_001f7d38:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001f7d3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001f7d40:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001f7d44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7cdc;
        }
    }
L_001f7d48:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001f7d4c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f7d50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7d54:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f7d58:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001f7d5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001f7d60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = cpu->r[1];
        }
    }
L_001f7d64:;
    {
        wr32(cpu->r[1] + + 0x3f0u, cpu->r[5]);
    }
L_001f7d68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7db4;
        }
    }
L_001f7d6c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001f7d70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7da4;
        }
    }
L_001f7d74:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3b0u);
    }
L_001f7d78:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f7d7c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x330u);
    }
L_001f7d80:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f7d84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f7d88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001f7d8c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f7d90:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001f7d94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f7d98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001f7d9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f7da0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7d84;
        }
    }
L_001f7da4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001f7da8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001f7dac:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_001f7db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7d6c;
        }
    }
L_001f7db4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001f7db8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_001f7dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f7de4;
        }
    }
L_001f7dc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7dc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7dc8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x598u);
    }
L_001f7dcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f7dd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001f7dd4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
        }
    }
L_001f7dd8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 0);
        }
    }
L_001f7ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f7de0:;
    {
        wr32(cpu->r[1] + + 0x598u, cpu->r[3]);
    }
L_001f7de4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001f7de8:;
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
L_001f7dec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z28stb_vorbis_get_sample_offsetP10stb_vorbis @ 001f7df0 (arm) */
void fn_001f7df0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7df0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x438u);
    }
L_001f7df4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f7df8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f7dfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x434u);
        }
    }
L_001f7e00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z19stb_vorbis_get_infoP10stb_vorbis @ 001f7e04 (arm) */
void fn_001f7e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7e04:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f7e08:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001f7e0c:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001f7e10:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001f7e14:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_001f7e18:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001f7e1c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_001f7e20:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001f7e24:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001f7e28:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001f7e2c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x84u);
    }
L_001f7e30:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001f7e34:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001f7e38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z20stb_vorbis_get_errorP10stb_vorbis @ 001f7e3c (arm) */
void fn_001f7e3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7e3c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f7e40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f7e44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x74u);
    }
L_001f7e48:;
    {
        wr32(cpu->r[3] + + 0x74u, cpu->r[2]);
    }
L_001f7e4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z24stb_vorbis_open_filenamePcPiP16stb_vorbis_alloc @ 001f7e50 (arm) */
void fn_001f7e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7e50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f7e54:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f7e58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000006u;
        }
    }
L_001f7e5c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001f7e60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f7e64 @ 001f7e64 (arm) */
void fn_001f7e64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f7e64:;
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
L_001f7e68:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f7e6c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001f7e70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f7e74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f7e78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001f7e7c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f7e80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_001f7e84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f7e88:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001f7e8c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001f7e90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001f7e94:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xd8u);
    }
L_001f7e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f7ea4;
        }
    }
L_001f7e9c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000006u, 1, 1);
    }
L_001f7ea0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7fb4;
        }
    }
L_001f7ea4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_001f7ea8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[11];
        }
    }
L_001f7eac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001f7eb0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f7eb4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001f7eb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7f68;
        }
    }
L_001f7ebc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f7ec0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f7ec4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f7ec8:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001f7ecc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001f7ed0:;
    {
        cpu->r[11] = cpu->r[8];
    }
L_001f7ed4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f7ed8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001f7edc:;
    {
        cpu->r[5] = 0x0000ffffu;
    }
L_001f7ee0:;
    {
        cpu->r[7] = 0x00007fffu;
    }
L_001f7ee4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f7ee8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001f7ef0u + + 0x29cu);
    }
L_001f7eec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001f7ef0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f7ef4:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_001f7ef8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f7efc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f7f00:;
    {
        cpu->r[4] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_001f7f04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001f7f08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7f50;
        }
    }
L_001f7f0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f7f10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f7f14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001f7f18:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001f7f1c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f7f20:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f7f24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001f7f28:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001f7f2c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001f7f30:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f7f40;
        }
    }
L_001f7f34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f7f38:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_001f7f3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008000u;
        }
    }
L_001f7f40:;
    {
        wr16(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_001f7f44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f7f48:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001f7f4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7f10;
        }
    }
L_001f7f50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f7f54:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001f7f58:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001f7f5c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_001f7f60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7ef0;
        }
    }
L_001f7f64:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f7f68:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_001f7f6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7fa8;
        }
    }
L_001f7f70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f7f74:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f7f78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f7f7c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001f7f80:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001f7f84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001f7f88:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_001f7f8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001f7f90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f7f94:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f7f98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001f7f9c:;
    {
        cpu->r[14] = 0x001f7fa0u; imp_memset(cpu); /* memset */
    }
L_001f7fa0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001f7fa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7f88;
        }
    }
L_001f7fa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_001f7fac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f7fb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f7fb4u)) return;
    }
L_001f7fb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f7fb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f7fa8;
        }
    }
L_001f7fbc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f7fc0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001f7fc4:;
    {
        cpu->r[2] = rd32(0x001f7fccu + + 0x1c4u);
    }
L_001f7fc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001f7fcc:;
    {
        cpu->r[1] = rd32(0x001f7fd4u + + 0x1c0u);
    }
L_001f7fd0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[10] = v;
    }
L_001f7fd4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f7fdcu, cpu->r[2], 0, 0);
    }
L_001f7fd8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001f7fdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000028u, 0, 0);
    }
L_001f7fe0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_001f7fe4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001f7fe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f7fec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f7ff0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_001f7ff4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001f7ff8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001f7ffc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f8000:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f8004:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f800cu, cpu->r[2], 0, 0);
    }
L_001f8008:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f800c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f8010:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f8014:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f8018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_001f801c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001f8020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001f8024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f8028:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f802c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f8030:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001f8034:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8170;
        }
    }
L_001f8038:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xdcu);
    }
L_001f803c:;
    {
        cpu->r[7] = 0x00000020u;
    }
L_001f8040:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001f8044:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_001f8048:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f804c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001f8054u + + 0x138u);
    }
L_001f8050:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001f8054:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001f8058:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001f805c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f8060:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001f8064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8068:;
    {
        cpu->r[14] = 0x001f806cu; imp_memset(cpu); /* memset */
    }
L_001f806c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f8070:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f8074:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_001f8078:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f807c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_001f8080:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f8084:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f80ec;
        }
    }
L_001f8088:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f808c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8090:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f8094:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001f8098:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[12] + cpu->r[0]);
    }
L_001f809c:;
    {
        { uint32_t v = cpu->r[3] & cpu->r[11]; set_nz(cpu, v); }
    }
L_001f80a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f80e0;
        }
    }
L_001f80a4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f80a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f80e0;
        }
    }
L_001f80ac:;
    {
        cpu->r[2] = rd32(cpu->r[9] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001f80b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f80b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_001f80b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f80bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10]);
    }
L_001f80c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f80c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_001f80c8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001f80cc:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f80d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[10]);
    }
L_001f80d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f80d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f80dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f80b8;
        }
    }
L_001f80e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f80e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001f80e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8098;
        }
    }
L_001f80ec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f80f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8144;
        }
    }
L_001f80f4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[8] = v;
    }
L_001f80f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f80fc:;
    {
        cpu->r[12] = 0x0000ffffu;
    }
L_001f8100:;
    {
        cpu->r[10] = 0x00007fffu;
    }
L_001f8104:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f8108:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001f810c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_001f8110:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f8114:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f8118:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001f811c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001f8120:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001f8124:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f8134;
        }
    }
L_001f8128:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f812c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_001f8130:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008000u;
        }
    }
L_001f8134:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001f8138:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f813c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001f8140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8104;
        }
    }
L_001f8144:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f8148:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001f814c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xe0u);
    }
L_001f8150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_001f8154:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f8158:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001f815c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001f8160:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000080u, 0, 0);
    }
L_001f8164:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001f8168:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f805c;
        }
    }
L_001f816c:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_001f8170:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f8174:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f8178:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001f817c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001f8180:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001f8184:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f7ffc;
        }
    }
L_001f8188:;
    {
        goto L_001f7fa8;
    }
}

/* sub_001f8198 @ 001f8198 (arm) */
void fn_001f8198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8198:;
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
L_001f819c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f81a0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001f81a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001f81a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f81ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001f81b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001f81b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_001f81b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f81bc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001f81c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001f81c4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001f81c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f83b8;
        }
    }
L_001f81cc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000006u, 1, 1);
    }
L_001f81d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f83b8;
        }
    }
L_001f81d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f81d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f83ac;
        }
    }
L_001f81dc:;
    {
        cpu->r[3] = rd32(0x001f81e4u + + 0x350u);
    }
L_001f81e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001f81e4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f81e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001f81ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f81f4u, cpu->r[3], 0, 0);
    }
L_001f81f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001f81f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_001f81f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f81fc:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001f8200:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001f8204:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8208:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8394;
        }
    }
L_001f820c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xd0u);
    }
L_001f8210:;
    {
        cpu->r[5] = 0x00000010u;
    }
L_001f8214:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001f8218:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f821c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001f8224u + + 0x30cu);
    }
L_001f8220:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001f8224:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001f8228:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001f822c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f8230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8234:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f8238:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001f823c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f8240:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001f8244:;
    {
        cpu->r[14] = 0x001f8248u; imp_memset(cpu); /* memset */
    }
L_001f8248:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f824c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001f8250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001f8254:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f8258:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
        }
    }
L_001f825c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f8260:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8308;
        }
    }
L_001f8264:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001f8268:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[12] = v;
    }
L_001f826c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f8270:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[8] = v;
    }
L_001f8274:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001f8278:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001f827c:;
    {
        goto L_001f82a0;
    }
L_001f8280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001f8284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f84a4;
        }
    }
L_001f8288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f828c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f84e4;
        }
    }
L_001f8290:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f8294:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001f8298:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_001f829c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8304;
        }
    }
L_001f82a0:;
    {
        cpu->r[3] = rd8(cpu->r[9] + cpu->r[0]);
    }
L_001f82a4:;
    {
        uint32_t v = cpu->r[3] & 0x00000006u; cpu->r[3] = v;
    }
L_001f82a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001f82ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8280;
        }
    }
L_001f82b0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f82b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8290;
        }
    }
L_001f82b8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_001f82bc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001f82c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f82c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001f82c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001f82cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001f82d0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001f82d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001f82d8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f82dc:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[2] = ea + 4u;
    }
L_001f82e0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001f82e4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f82e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f82ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f82f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f82c8;
        }
    }
L_001f82f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f82f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001f82fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_001f8300:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f82a0;
        }
    }
L_001f8304:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_001f8308:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f830c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8310:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8370;
        }
    }
L_001f8314:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f8318:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001f831c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f8320:;
    {
        cpu->r[12] = 0x0000ffffu;
    }
L_001f8324:;
    {
        cpu->r[10] = 0x00007fffu;
    }
L_001f8328:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f832c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f8330:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f8334:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001f8338:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_001f833c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f8340:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f8344:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001f8348:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001f834c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001f8350:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f8360;
        }
    }
L_001f8354:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f8358:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_001f835c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008000u;
        }
    }
L_001f8360:;
    {
        wr16(cpu->r[8] + cpu->r[3], cpu->r[1]);
    }
L_001f8364:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f8368:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001f836c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8330;
        }
    }
L_001f8370:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f8374:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001f8378:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001f837c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f8380:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f8384:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001f8388:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_001f838c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001f8390:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f822c;
        }
    }
L_001f8394:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f8398:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f839c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001f83a0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001f83a4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_001f83a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8200;
        }
    }
L_001f83ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_001f83b0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f83b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f83b8u)) return;
    }
L_001f83b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f83bc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001f83c0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001f83c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_001f83c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f83cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f83ac;
        }
    }
L_001f83d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd0u);
    }
L_001f83d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f83d8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f83dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_001f83e0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001f83e4:;
    {
        cpu->r[6] = 0x0000ffffu;
    }
L_001f83e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001f83ec:;
    {
        cpu->r[8] = 0x00007fffu;
    }
L_001f83f0:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001f83f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001f83fcu + + 0x134u);
    }
L_001f83f8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f83fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001f8400:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001f8404:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8454;
        }
    }
L_001f8408:;
    {
        cpu->r[2] = rd32(cpu->r[7] + shifter(cpu->r[3], 2, 1u, &shc));
    }
L_001f840c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001f8410:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001f8414:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001f8418:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f841c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f8420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001f8424:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001f8428:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001f842c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f843c;
        }
    }
L_001f8430:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f8434:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001f8438:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008000u;
        }
    }
L_001f843c:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_001f8440:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f8444:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001f8448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8408;
        }
    }
L_001f844c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001f8450:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f8454:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001f8458:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f848c;
        }
    }
L_001f845c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001f8460:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f8464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f8468:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f846c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001f8470:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001f8474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001f8478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8464;
        }
    }
L_001f847c:;
    {
        cpu->r[3] = (~cpu->r[1]);
    }
L_001f8480:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f8484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001f8488:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f848c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001f8490:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001f8494:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001f8498:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001f849c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f83f8;
        }
    }
L_001f84a0:;
    {
        goto L_001f83ac;
    }
L_001f84a4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f84a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8290;
        }
    }
L_001f84ac:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_001f84b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f84b4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f84b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001f84bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f84c0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[2] = ea + 4u;
    }
L_001f84c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001f84c8:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001f84cc:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f84d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001f84d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f84d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001f84dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f84bc;
        }
    }
L_001f84e0:;
    {
        goto L_001f8290;
    }
L_001f84e4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f84e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8290;
        }
    }
L_001f84ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f84f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f84f4:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_001f84f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f84fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f8500:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f8504:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001f8508:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001f850c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001f8510:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001f8514:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f8518:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001f851c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f8520:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f8524:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8504;
        }
    }
L_001f8528:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f852c:;
    {
        goto L_001f8290;
    }
}

/* sub_001f8538 @ 001f8538 (arm) */
void fn_001f8538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8538:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f853c:;
    {
        cpu->r[2] = 0x000005a8u;
    }
L_001f8540:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f8544:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f8548:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f854c:;
    {
        cpu->r[14] = 0x001f8550u; imp_memset(cpu); /* memset */
    }
L_001f8550:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f8554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8578;
        }
    }
L_001f8558:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001f855c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001f8560:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001f8564:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_001f8568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001f856c:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000003u; cpu->r[3] = v;
    }
L_001f8570:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001f8574:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001f8578:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f857c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001f8580:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001f8584:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001f8588:;
    {
        wr32(cpu->r[4] + + 0x59cu, cpu->r[2]);
    }
L_001f858c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f8590:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001f8594:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001f8598:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001f859c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f85a0u)) return;
    }
}

/* sub_001f85a0 @ 001f85a0 (arm) */
void fn_001f85a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f85a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x60u);
    }
L_001f85a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001f85a8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_001f85ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f85b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f85fc;
        }
    }
L_001f85b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001f85b8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x68u);
    }
L_001f85bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001f85c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001f85c4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[3]);
        }
    }
L_001f85c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
        }
    }
L_001f85cc:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f85d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f85d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_001f85d8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f85dc:;
    {
        cpu->r[2] = rd32(0x001f85e4u + + 0x38u);
    }
L_001f85e0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f85e4:;
    {
        cpu->r[1] = rd32(0x001f85ecu + + 0x34u);
    }
L_001f85e8:;
    {
        cpu->r[3] = 0x00000297u;
    }
L_001f85ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f85f4u, cpu->r[2], 0, 0);
    }
L_001f85f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f85f8u, cpu->r[1], 0, 0);
    }
L_001f85f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000054u, 0, 0);
    }
L_001f85f8:;
    {
        return fn_00097dd8(cpu);
    }
L_001f85fc:;
    {
        cpu->r[2] = rd32(0x001f8604u + + 0x20u);
    }
L_001f8600:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f8604:;
    {
        cpu->r[1] = rd32(0x001f860cu + + 0x1cu);
    }
L_001f8608:;
    {
        cpu->r[3] = 0x0000029bu;
    }
L_001f860c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f8614u, cpu->r[2], 0, 0);
    }
L_001f8610:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f8618u, cpu->r[1], 0, 0);
    }
L_001f8614:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000054u, 0, 0);
    }
L_001f8618:;
    {
        return fn_00097dd8(cpu);
    }
}

/* sub_001f862c @ 001f862c (arm) */
void fn_001f862c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f862c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001f8630:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001f8634:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f8638:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_001f863c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8640:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001f8644:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001f8648:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001f864c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f86a8;
        }
    }
L_001f8650:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x68u);
    }
L_001f8654:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001f8658:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001f865c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_001f8660:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f869c;
        }
    }
L_001f8664:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f8668:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8678;
        }
    }
L_001f866c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8670:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f8674:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f8678:;
    {
        cpu->r[2] = rd32(0x001f8680u + + 0x54u);
    }
L_001f867c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f8680:;
    {
        cpu->r[1] = rd32(0x001f8688u + + 0x50u);
    }
L_001f8684:;
    {
        cpu->r[3] = 0x00000281u;
    }
L_001f8688:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f8690u, cpu->r[2], 0, 0);
    }
L_001f868c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f8694u, cpu->r[1], 0, 0);
    }
L_001f8690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000068u, 0, 0);
    }
L_001f8694:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f8698:;
    {
        return fn_00097dd8(cpu);
    }
L_001f869c:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[12]);
    }
L_001f86a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f86a4:;
    {
        goto L_001f8670;
    }
L_001f86a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f86ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f866c;
        }
    }
L_001f86b0:;
    {
        cpu->r[2] = rd32(0x001f86b8u + + 0x24u);
    }
L_001f86b4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f86b8:;
    {
        cpu->r[1] = rd32(0x001f86c0u + + 0x20u);
    }
L_001f86bc:;
    {
        cpu->r[3] = 0x00000285u;
    }
L_001f86c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001f86c8u, cpu->r[2], 0, 0);
    }
L_001f86c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f86ccu, cpu->r[1], 0, 0);
    }
L_001f86c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000068u, 0, 0);
    }
L_001f86cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f86d0:;
    {
        return fn_00097dd8(cpu);
    }
}

/* sub_001f86e4 @ 001f86e4 (arm) */
void fn_001f86e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f86e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001f86e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f86ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8708;
        }
    }
L_001f86f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f86f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f8708;
        }
    }
L_001f86f8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x64u);
    }
L_001f86fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001f8700:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f8704:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f8710;
        }
    }
L_001f8708:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f870c:;
    {
        return fn_00097dc8(cpu);
    }
L_001f8710:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001f8714:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001f8718:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000003u; cpu->r[2] = v;
    }
L_001f871c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f8720:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_001f8724:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_001f8728 @ 001f8728 (arm) */
void fn_001f8728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8728:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001f872c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f874c;
        }
    }
L_001f8734:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f8738:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f874c;
        }
    }
L_001f873c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x64u);
    }
L_001f8740:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f8744:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f8748:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f874c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f8750:;
    {
        return fn_00097dc8(cpu);
    }
}

/* sub_001f8754 @ 001f8754 (arm) */
void fn_001f8754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8754:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f8758:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f875c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8760:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f8764:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f8768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f87a8;
        }
    }
L_001f876c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x28u);
    }
L_001f8770:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001f8774:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001f8778:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f877c:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[0] + + 0x70u, cpu->r[3]);
        }
    }
L_001f8780:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f8784:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8788u)) return;
        }
    }
L_001f8788:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f878c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f8790:;
    {
        cpu->r[14] = 0x001f8794u; imp_memcpy(cpu); /* memcpy */
    }
L_001f8794:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001f8798:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f879c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001f87a0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_001f87a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f87a8u)) return;
    }
L_001f87a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f87ac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f87b0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001f87b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001f87b8:;
    {
        cpu->r[14] = 0x001f87bcu; fn_001d9a58(cpu);
    }
L_001f87bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001f87c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f87c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001f87c8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
        }
    }
L_001f87cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f87d0u)) return;
    }
}

/* sub_001f87d0 @ 001f87d0 (arm) */
void fn_001f87d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f87d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f87d4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f87d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f87dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f87e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8804;
        }
    }
L_001f87e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_001f87e8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f87ec:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f87f0:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[0] + + 0x70u, cpu->r[3]);
        }
    }
L_001f87f4:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t wb_tmp = cpu->r[5] + 0x00000001u;
        cpu->r[0] = rd8(cpu->r[5]);
        cpu->r[5] = wb_tmp;
        }
    }
L_001f87f8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f87fc:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
        }
    }
L_001f8800:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8804u)) return;
    }
L_001f8804:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f8808:;
    {
        cpu->r[14] = 0x001f880cu; fn_001d9a24(cpu);
    }
L_001f880c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001f8810:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f8814:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001f8818:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
        }
    }
L_001f881c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001f8820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8824u)) return;
    }
}

/* sub_001f8824 @ 001f8824 (arm) */
void fn_001f8824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8824:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f8828:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f882c:;
    {
        cpu->r[14] = 0x001f8830u; fn_001f87d0(cpu);
    }
L_001f8830:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f8834:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8838:;
    {
        cpu->r[14] = 0x001f883cu; fn_001f87d0(cpu);
    }
L_001f883c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f8840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8844:;
    {
        cpu->r[14] = 0x001f8848u; fn_001f87d0(cpu);
    }
L_001f8848:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_001f884c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8850:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 8u, &shc), 0, 0);
    }
L_001f8854:;
    {
        cpu->r[14] = 0x001f8858u; fn_001f87d0(cpu);
    }
L_001f8858:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001f885c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_001f8860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8864u)) return;
    }
}

/* sub_001f8864 @ 001f8864 (arm) */
void fn_001f8864(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8864:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f8868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f886c:;
    {
        cpu->r[14] = 0x001f8870u; fn_001f87d0(cpu);
    }
L_001f8870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8874:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000001fu;
        }
    }
L_001f8878:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f887c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
        }
    }
L_001f8880:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8884u)) return;
        }
    }
L_001f8884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8888:;
    {
        cpu->r[14] = 0x001f888cu; fn_001f87d0(cpu);
    }
L_001f888c:;
    {
        wr8(cpu->r[4] + + 0x56fu, cpu->r[0]);
    }
L_001f8890:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8894:;
    {
        cpu->r[14] = 0x001f8898u; fn_001f8824(cpu);
    }
L_001f8898:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f889c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88a0:;
    {
        cpu->r[14] = 0x001f88a4u; fn_001f8824(cpu);
    }
L_001f88a4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f88a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88ac:;
    {
        cpu->r[14] = 0x001f88b0u; fn_001f8824(cpu);
    }
L_001f88b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88b4:;
    {
        cpu->r[14] = 0x001f88b8u; fn_001f8824(cpu);
    }
L_001f88b8:;
    {
        wr32(cpu->r[4] + + 0x468u, cpu->r[0]);
    }
L_001f88bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88c0:;
    {
        cpu->r[14] = 0x001f88c4u; fn_001f8824(cpu);
    }
L_001f88c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88c8:;
    {
        cpu->r[14] = 0x001f88ccu; fn_001f87d0(cpu);
    }
L_001f88cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000470u, 0, 0);
    }
L_001f88d0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f88d4:;
    {
        wr32(cpu->r[4] + + 0x46cu, cpu->r[0]);
    }
L_001f88d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f88dc:;
    {
        cpu->r[14] = 0x001f88e0u; fn_001f8754(cpu);
    }
L_001f88e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f88e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_001f88e8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
        }
    }
L_001f88ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f88f0u)) return;
        }
    }
L_001f88f0:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001f88f4:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
        }
    }
L_001f88f8:;
    {
        cpu->r[3] = (~0x00000001u);
    }
L_001f88fc:;
    {
        wr32(cpu->r[4] + + 0x58cu, cpu->r[3]);
    }
L_001f8900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8924;
        }
    }
L_001f8904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x46cu);
    }
L_001f8908:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f890c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f8910:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x470u);
    }
L_001f8914:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_001f8918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8908;
        }
    }
L_001f891c:;
    {
        wr32(cpu->r[4] + + 0x58cu, cpu->r[3]);
    }
L_001f8920:;
    {
        wr32(cpu->r[4] + + 0x590u, cpu->r[5]);
    }
L_001f8924:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x571u);
    }
L_001f8928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f892c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f898c;
        }
    }
L_001f8930:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x46cu);
    }
L_001f8934:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f8938:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001f893c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8964;
        }
    }
L_001f8940:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f8944:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f8948:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001f894c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f8950:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x470u);
    }
L_001f8954:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001f8958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f895c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001f8960:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f894c;
        }
    }
L_001f8964:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001f8968:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000001bu, 0, 0);
    }
L_001f896c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001f8970:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001f8974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f8978:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_001f897c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001f8980:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f8984:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001f8988:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001f898c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f8990:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f8994:;
    {
        wr32(cpu->r[4] + + 0x574u, cpu->r[3]);
    }
L_001f8998:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f899cu)) return;
    }
}

/* sub_001f899c @ 001f899c (arm) */
void fn_001f899c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f899c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f89a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f89a4:;
    {
        cpu->r[14] = 0x001f89a8u; fn_001f87d0(cpu);
    }
L_001f89a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000004fu, 1, 1);
    }
L_001f89ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f89c0;
        }
    }
L_001f89b0:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_001f89b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f89b8:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f89bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f89c0u)) return;
    }
L_001f89c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f89c4:;
    {
        cpu->r[14] = 0x001f89c8u; fn_001f87d0(cpu);
    }
L_001f89c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f89cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f89b0;
        }
    }
L_001f89d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f89d4:;
    {
        cpu->r[14] = 0x001f89d8u; fn_001f87d0(cpu);
    }
L_001f89d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f89dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f89b0;
        }
    }
L_001f89e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f89e4:;
    {
        cpu->r[14] = 0x001f89e8u; fn_001f87d0(cpu);
    }
L_001f89e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000053u, 1, 1);
    }
L_001f89ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f89b0;
        }
    }
L_001f89f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f89f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f89f8:;
    {
        return fn_001f8864(cpu);
    }
}

/* sub_001f89fc @ 001f89fc (arm) */
void fn_001f89fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f89fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x578u);
    }
L_001f8a00:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8a04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8a08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8a0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f8a10:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8a14u)) return;
        }
    }
L_001f8a14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x574u);
    }
L_001f8a18:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f8a1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8a5c;
        }
    }
L_001f8a20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f8a24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f8a28:;
    {
        wr32(cpu->r[4] + + 0x574u, cpu->r[1]);
    }
L_001f8a2c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x470u);
    }
L_001f8a30:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_001f8a34:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x57cu, cpu->r[3]);
        }
    }
L_001f8a38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f8a3c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x578u, cpu->r[3]);
        }
    }
L_001f8a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x46cu);
    }
L_001f8a44:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f8a48:;
    {
        wr8(cpu->r[4] + + 0x570u, cpu->r[2]);
    }
L_001f8a4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f8a50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001f8a54:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x574u, cpu->r[3]);
        }
    }
L_001f8a58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8a5cu)) return;
    }
L_001f8a5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x46cu);
    }
L_001f8a60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f8a64:;
    {
        wr32(cpu->r[4] + + 0x57cu, cpu->r[3]);
    }
L_001f8a68:;
    {
        cpu->r[14] = 0x001f8a6cu; fn_001f899c(cpu);
    }
L_001f8a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8a70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f8a74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x578u, cpu->r[3]);
        }
    }
L_001f8a78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8a7cu)) return;
        }
    }
L_001f8a7c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x56fu);
    }
L_001f8a80:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_001f8a84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000020u;
        }
    }
L_001f8a88:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
        }
    }
L_001f8a8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x574u);
        }
    }
L_001f8a90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8a94u)) return;
        }
    }
L_001f8a94:;
    {
        goto L_001f8a20;
    }
}

/* sub_001f8a98 @ 001f8a98 (arm) */
void fn_001f8a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8a98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8a9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8aa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x574u);
    }
L_001f8aa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8aa8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f8aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8ad8;
        }
    }
L_001f8ab0:;
    {
        cpu->r[14] = 0x001f8ab4u; fn_001f899c(cpu);
    }
L_001f8ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8ab8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8abcu)) return;
        }
    }
L_001f8abc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x56fu);
    }
L_001f8ac0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f8ac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8aa0;
        }
    }
L_001f8ac8:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_001f8acc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8ad0:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f8ad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8ad8u)) return;
    }
L_001f8ad8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f8adc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f8ae0:;
    {
        wr8(cpu->r[4] + + 0x570u, cpu->r[3]);
    }
L_001f8ae4:;
    {
        wr32(cpu->r[4] + + 0x578u, cpu->r[3]);
    }
L_001f8ae8:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001f8aec:;
    {
        wr32(cpu->r[4] + + 0x588u, cpu->r[3]);
    }
L_001f8af0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8af4u)) return;
    }
}

/* sub_001f8af4 @ 001f8af4 (arm) */
void fn_001f8af4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8af4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8af8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x570u);
    }
L_001f8afc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8b00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8b28;
        }
    }
L_001f8b08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x588u);
    }
L_001f8b0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f8b10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8b14:;
    {
        wr8(cpu->r[4] + + 0x570u, cpu->r[3]);
    }
L_001f8b18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f8b1c:;
    {
        wr32(cpu->r[4] + + 0x588u, cpu->r[3]);
    }
L_001f8b20:;
    {
        cpu->r[14] = 0x001f8b24u; fn_001f87d0(cpu);
    }
L_001f8b24:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8b28u)) return;
    }
L_001f8b28:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x578u);
    }
L_001f8b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8b3c;
        }
    }
L_001f8b34:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f8b38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8b3cu)) return;
    }
L_001f8b3c:;
    {
        cpu->r[14] = 0x001f8b40u; fn_001f89fc(cpu);
    }
L_001f8b40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8b44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
        }
    }
L_001f8b48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8b08;
        }
    }
L_001f8b4c:;
    {
        goto L_001f8b34;
    }
}

/* sub_001f8b50 @ 001f8b50 (arm) */
void fn_001f8b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8b50:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x584u);
    }
L_001f8b54:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f8b58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8b5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8b60:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f8b64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f8bf0;
        }
    }
L_001f8b68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f8b6c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f8b8c;
        }
    }
L_001f8b70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_001f8b74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f8bf8;
        }
    }
L_001f8b78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8b7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8bcc;
        }
    }
L_001f8b80:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f8b84:;
    {
        wr32(cpu->r[0] + + 0x580u, cpu->r[3]);
    }
L_001f8b88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f8bcc;
        }
    }
L_001f8b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x580u);
    }
L_001f8b90:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001f8b94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001f8b98:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001f8b9c:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[0], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f8ba0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, (cpu->r[5] & 0xffu), &shc); cpu->r[5] = v;
    }
L_001f8ba4:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[5]);
    }
L_001f8ba8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8bacu)) return;
    }
L_001f8bac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001f8bb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x580u);
    }
L_001f8bb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001f8bb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f8bbc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f8bc0:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[0]);
    }
L_001f8bc4:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001f8bc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8be8;
        }
    }
L_001f8bcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8bd0:;
    {
        cpu->r[14] = 0x001f8bd4u; fn_001f8af4(cpu);
    }
L_001f8bd4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001f8bd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8bac;
        }
    }
L_001f8bdc:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[0]);
    }
L_001f8be0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8be4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8be8u)) return;
    }
L_001f8be8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8bec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f8b8c;
        }
    }
L_001f8bf0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8bf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8bf8u)) return;
    }
L_001f8bf8:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001f8bfc:;
    {
        cpu->r[14] = 0x001f8c00u; fn_001f8b50(cpu);
    }
L_001f8c00:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000018u, 1, 0);
    }
L_001f8c04:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f8c08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8c0c:;
    {
        cpu->r[14] = 0x001f8c10u; fn_001f8b50(cpu);
    }
L_001f8c10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 24u, &shc), 0, 0);
    }
L_001f8c14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8c18u)) return;
    }
}

/* sub_001f8c18 @ 001f8c18 (arm) */
void fn_001f8c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8c18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x584u);
    }
L_001f8c1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8c20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_001f8c24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8c28:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8c2cu)) return;
        }
    }
L_001f8c2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8c30:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x580u, cpu->r[3]);
        }
    }
L_001f8c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001f8c38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8c3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8c50;
        }
    }
L_001f8c44:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001f8c48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8c4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8c50u)) return;
        }
    }
L_001f8c50:;
    {
        cpu->r[14] = 0x001f8c54u; fn_001f8af4(cpu);
    }
L_001f8c54:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001f8c58:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8c5cu)) return;
        }
    }
L_001f8c5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001f8c60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001f8c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001f8c68:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001f8c6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001f8c70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001f8c74:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[0]);
    }
L_001f8c78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f8c34;
        }
    }
L_001f8c7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8c80u)) return;
    }
}

/* sub_001f8c80 @ 001f8c80 (arm) */
void fn_001f8c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8c80:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x574u);
    }
L_001f8c84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f8c88:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f8c8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8ca0;
        }
    }
L_001f8c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8c98:;
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
L_001f8c9c:;
    {
        return fn_001f8a98(cpu);
    }
L_001f8ca0:;
    {
        cpu->r[14] = 0x001f8ca4u; fn_001f87d0(cpu);
    }
L_001f8ca4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f8ca8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f8cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8cc0;
        }
    }
L_001f8cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000004fu, 1, 1);
    }
L_001f8cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8cc8;
        }
    }
L_001f8cb8:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_001f8cbc:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f8cc0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8cc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8cc8u)) return;
    }
L_001f8cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8ccc:;
    {
        cpu->r[14] = 0x001f8cd0u; fn_001f87d0(cpu);
    }
L_001f8cd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f8cd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8cb8;
        }
    }
L_001f8cd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8cdc:;
    {
        cpu->r[14] = 0x001f8ce0u; fn_001f87d0(cpu);
    }
L_001f8ce0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f8ce4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8cb8;
        }
    }
L_001f8ce8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8cec:;
    {
        cpu->r[14] = 0x001f8cf0u; fn_001f87d0(cpu);
    }
L_001f8cf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000053u, 1, 1);
    }
L_001f8cf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8cb8;
        }
    }
L_001f8cf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8cfc:;
    {
        cpu->r[14] = 0x001f8d00u; fn_001f8864(cpu);
    }
L_001f8d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8cc0;
        }
    }
L_001f8d08:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x56fu);
    }
L_001f8d0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001f8d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8c94;
        }
    }
L_001f8d14:;
    {
        cpu->r[3] = 0x00000020u;
    }
L_001f8d18:;
    {
        wr8(cpu->r[4] + + 0x570u, cpu->r[5]);
    }
L_001f8d1c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f8d20:;
    {
        wr32(cpu->r[4] + + 0x578u, cpu->r[5]);
    }
L_001f8d24:;
    {
        goto L_001f8cc0;
    }
}

/* sub_001f8d28 @ 001f8d28 (arm) */
void fn_001f8d28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8d28:;
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
L_001f8d2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8d30:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001f8d34:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001f8d38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f8d3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f8d40:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f8d44:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f8d48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8d4c:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_001f8d50:;
    {
        wr32(cpu->r[0] + + 0x5a4u, cpu->r[12]);
    }
L_001f8d54:;
    {
        wr32(cpu->r[0] + + 0x5a0u, cpu->r[12]);
    }
L_001f8d58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8da0;
        }
    }
L_001f8d5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8d60:;
    {
        cpu->r[14] = 0x001f8d64u; fn_001f8c80(cpu);
    }
L_001f8d64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8da0;
        }
    }
L_001f8d6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8d70:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f8d74:;
    {
        cpu->r[14] = 0x001f8d78u; fn_001f8b50(cpu);
    }
L_001f8d78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8dac;
        }
    }
L_001f8d80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8d84:;
    {
        cpu->r[14] = 0x001f8d88u; fn_001f8af4(cpu);
    }
L_001f8d88:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[7]);
    }
L_001f8d8c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001f8d90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8d80;
        }
    }
L_001f8d94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f8d98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8d9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8d5c;
        }
    }
L_001f8da0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8da4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f8da8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8dacu)) return;
    }
L_001f8dac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1a8u);
    }
L_001f8db0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001f8db4:;
    {
        cpu->r[14] = 0x001f8db8u; fn_001f77f0(cpu);
    }
L_001f8db8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f8dbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8dc0:;
    {
        cpu->r[14] = 0x001f8dc4u; fn_001f8b50(cpu);
    }
L_001f8dc4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001f8dc8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f8dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8da0;
        }
    }
L_001f8dd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1a8u);
    }
L_001f8dd4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001f8dd8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f8da0;
        }
    }
L_001f8ddc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001f8de0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f8de4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_001f8de8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001f8dec:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001f8df0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000001a8u, 0, 0);
    }
L_001f8df4:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x4u);
    }
L_001f8df8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8dfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8e7c;
        }
    }
L_001f8e00:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x80u);
    }
L_001f8e04:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f8e08:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001f8e0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f8e10:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f8e14:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_001f8e18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_001f8e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f8e20:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1acu);
    }
L_001f8e24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8e28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f8e2c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
        }
    }
L_001f8e30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f8e34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f8e4c;
        }
    }
L_001f8e38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f8e3c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f8e40:;
    {
        wr32(cpu->r[8], cpu->r[2]);
    }
L_001f8e44:;
    {
        wr32(cpu->r[3], cpu->r[10]);
    }
L_001f8e48:;
    {
        goto L_001f8da4;
    }
L_001f8e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001f8e50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_001f8e54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f8e58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f8e5c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001f8e60:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001f8e64:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001f8e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001f8e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001f8e70:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001f8e74:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001f8e78:;
    {
        goto L_001f8da4;
    }
L_001f8e7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f8e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8e84:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x84u);
    }
L_001f8e88:;
    {
        cpu->r[14] = 0x001f8e8cu; fn_001f8b50(cpu);
    }
L_001f8e8c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f8e90:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f8e94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f8e98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001f8e9c:;
    {
        cpu->r[14] = 0x001f8ea0u; fn_001f8b50(cpu);
    }
L_001f8ea0:;
    {
        cpu->r[1] = rd8(cpu->r[11] + + 0x4u);
    }
L_001f8ea4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001f8ea8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f8eac:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001f8eb0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001f8eb4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f8eb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001f8ebc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001f8ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8ef0;
        }
    }
L_001f8ec4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001f8ec8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001f8ecc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f8ed0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001f8ed4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001f8ed8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001f8edc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x80u);
    }
L_001f8ee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001f8ee4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001f8ee8:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001f8eec:;
    {
        goto L_001f8e18;
    }
L_001f8ef0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001f8ef4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f8ef8:;
    {
        goto L_001f8e0c;
    }
}

/* _Z26stb_vorbis_get_file_offsetP10stb_vorbis @ 001f8efc (arm) */
void fn_001f8efc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8efc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f8f00:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8f04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f8f08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8f0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8f1c;
        }
    }
L_001f8f10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001f8f14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001f8f18:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8f1cu)) return;
    }
L_001f8f1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f8f20:;
    {
        cpu->r[14] = 0x001f8f24u; fn_001d9a94(cpu);
    }
L_001f8f24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f8f28:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001f8f2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8f30u)) return;
    }
}

/* sub_001f8f30 @ 001f8f30 (arm) */
void fn_001f8f30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8f30:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001f8f34:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f8f38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f8f3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8f40:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f8f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8f68;
        }
    }
L_001f8f48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_001f8f4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001f8f50:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001f8f54:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f8f58:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f8f5c:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[0] + + 0x70u, cpu->r[3]);
        }
    }
L_001f8f60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f8f64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8f68u)) return;
    }
L_001f8f68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001f8f6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001f8f70:;
    {
        cpu->r[14] = 0x001f8f74u; fn_001d9a94(cpu);
    }
L_001f8f74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f8f78:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f8f7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001f8f80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f8f84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f8f88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_001f8f8c:;
    {
        return fn_001d9ab4(cpu);
    }
}

/* sub_001f8f90 @ 001f8f90 (arm) */
void fn_001f8f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f8f90:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f8f94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f8f98:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f8f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001f8fa0:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_001f8fa4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001f8fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f8fe0;
        }
    }
L_001f8fac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001f8fb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001f8fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001f8fb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f8fbc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001f8fc0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001f8fc4:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_001f8fc8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
        }
    }
L_001f8fcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f8fd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
        }
    }
L_001f8fd4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
        }
    }
L_001f8fd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f8fdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f8fe0u)) return;
    }
L_001f8fe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f8fe4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f8fe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 1);
    }
L_001f8fec:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001f8ff0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f8ff4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001f8ff8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f8ffc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f9000:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001f9004:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (~0x80000000u);
        }
    }
L_001f9008:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
        }
    }
L_001f900c:;
    {
        cpu->r[14] = 0x001f9010u; fn_001d9ab4(cpu);
    }
L_001f9010:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9014:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f9018:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f901cu)) return;
        }
    }
L_001f901c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f9020:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001f9024:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001f9028:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f902c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001f9030:;
    {
        cpu->r[14] = 0x001f9034u; fn_001d9ab4(cpu);
    }
L_001f9034:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f9038:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f903cu)) return;
    }
}

/* sub_001f903c @ 001f903c (arm) */
void fn_001f903c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f903c:;
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
L_001f9040:;
    {
        cpu->r[5] = rd32(0x001f9048u + + 0x2b8u);
    }
L_001f9044:;
    {
        cpu->r[3] = rd32(0x001f904cu + + 0x2b8u);
    }
L_001f9048:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001f904c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001f9054u, cpu->r[5], 0, 0);
    }
L_001f9050:;
    {
        cpu->r[6] = rd32(0x001f9058u + + 0x2b0u);
    }
L_001f9054:;
    {
        cpu->r[7] = rd32(0x001f905cu + + 0x2b0u);
    }
L_001f9058:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f905c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001f9060:;
    {
        cpu->r[6] = add_flags(cpu, 0x001f9068u, cpu->r[6], 0, 0);
    }
L_001f9064:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001f9068:;
    {
        cpu->r[7] = add_flags(cpu, 0x001f9070u, cpu->r[7], 0, 0);
    }
L_001f906c:;
    {
        cpu->r[8] = rd32(0x001f9074u + + 0x29cu);
    }
L_001f9070:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001f9074:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f9078:;
    {
        cpu->r[8] = add_flags(cpu, 0x001f9080u, cpu->r[8], 0, 0);
    }
L_001f907c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001f9080:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001f9084:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f9088:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f908c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9280;
        }
    }
L_001f9090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9094:;
    {
        cpu->r[14] = 0x001f9098u; fn_001f87d0(cpu);
    }
L_001f9098:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000004fu, 1, 1);
    }
L_001f909c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9084;
        }
    }
L_001f90a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f90a4:;
    {
        cpu->r[14] = 0x001f90a8u; fn_001f8efc(cpu);
    }
L_001f90a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f90ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000019u, 1, 0);
    }
L_001f90b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001f90b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f90b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f9280;
        }
    }
L_001f90bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f90c0:;
    {
        cpu->r[14] = 0x001f90c4u; fn_001f87d0(cpu);
    }
L_001f90c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f90c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_001f90cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f90f8;
        }
    }
L_001f90d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f90d4:;
    {
        cpu->r[14] = 0x001f90d8u; fn_001f87d0(cpu);
    }
L_001f90d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000067u, 1, 1);
    }
L_001f90dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000002u;
        }
    }
L_001f90e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f90f8;
        }
    }
L_001f90e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f90e8:;
    {
        cpu->r[14] = 0x001f90ecu; fn_001f87d0(cpu);
    }
L_001f90ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000053u, 1, 1);
    }
L_001f90f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000003u;
        }
    }
L_001f90f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000004u;
        }
    }
L_001f90f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f90fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9280;
        }
    }
L_001f9104:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_001f9108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9268;
        }
    }
L_001f910c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001f9110:;
    {
        cpu->r[3] = 0x00000067u;
    }
L_001f9114:;
    {
        wr8(cpu->r[13] + + 0x2au, cpu->r[3]);
    }
L_001f9118:;
    {
        wr8(cpu->r[13] + + 0x29u, cpu->r[3]);
    }
L_001f911c:;
    {
        cpu->r[3] = 0x0000004fu;
    }
L_001f9120:;
    {
        wr8(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001f9124:;
    {
        cpu->r[3] = 0x00000053u;
    }
L_001f9128:;
    {
        wr8(cpu->r[13] + + 0x2bu, cpu->r[3]);
    }
L_001f912c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9130:;
    {
        cpu->r[14] = 0x001f9134u; fn_001f87d0(cpu);
    }
L_001f9134:;
    {
        wr8(cpu->r[9] + cpu->r[10], cpu->r[0]);
    }
L_001f9138:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001f913c:;
    {
        sub_flags(cpu, cpu->r[10], 0x0000001bu, 1, 1);
    }
L_001f9140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f912c;
        }
    }
L_001f9144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f9148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f914c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9280;
        }
    }
L_001f9150:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x2cu);
    }
L_001f9154:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f9158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9268;
        }
    }
L_001f915c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x3eu);
    }
L_001f9160:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001f9164:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001f9168:;
    {
        wr8(cpu->r[13] + + 0x3eu, cpu->r[2]);
    }
L_001f916c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001f9170:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x3fu);
    }
L_001f9174:;
    {
        wr8(cpu->r[13] + + 0x3fu, cpu->r[2]);
    }
L_001f9178:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001f917c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x40u);
    }
L_001f9180:;
    {
        wr8(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_001f9184:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001f9188:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x41u);
    }
L_001f918c:;
    {
        wr8(cpu->r[13] + + 0x41u, cpu->r[2]);
    }
L_001f9190:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001f9194:;
    {
        cpu->r[2] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_001f9198:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f919c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_001f91a0:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[10], 3, 24u, &shc); cpu->r[2] = v;
    }
L_001f91a4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f91a8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_001f91ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9194;
        }
    }
L_001f91b0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x42u);
    }
L_001f91b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f91b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9240;
        }
    }
L_001f91bc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001f91c0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001f91c4:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001f91c8:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001f91cc:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001f91d0:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001f91d4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001f91d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f91dc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001f91e0:;
    {
        cpu->r[14] = 0x001f91e4u; fn_001f87d0(cpu);
    }
L_001f91e4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[4], 1, 1);
    }
L_001f91e8:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[10], 3, 24u, &shc); cpu->r[3] = v;
    }
L_001f91ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[0], 0, 0);
    }
L_001f91f0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f91f4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_001f91f8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001f91d8;
        }
    }
L_001f91fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f9200:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001f9204:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001f9208:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_001f920c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f9210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9240;
        }
    }
L_001f9214:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f9218:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001f921c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9280;
        }
    }
L_001f9220:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9224:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001f9228:;
    {
        cpu->r[14] = 0x001f922cu; fn_001f87d0(cpu);
    }
L_001f922c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_001f9230:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[10], 3, 24u, &shc); cpu->r[0] = v;
    }
L_001f9234:;
    {
        cpu->r[3] = rd32(cpu->r[8] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001f9238:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[10], 2, 8u, &shc); cpu->r[10] = v;
    }
L_001f923c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9220;
        }
    }
L_001f9240:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001f9244:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f9248:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[3] = v;
    }
L_001f924c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001f9250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 8u, &shc), 0, 0);
    }
L_001f9254:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f9258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f925c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 24u, &shc), 0, 0);
    }
L_001f9260:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001f9264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f92a4;
        }
    }
L_001f9268:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f926c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9270:;
    {
        cpu->r[14] = 0x001f9274u; fn_001f8f90(cpu);
    }
L_001f9274:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001f9278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f927c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9090;
        }
    }
L_001f9280:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f9284:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f9288:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001f928c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001f9290:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f9294:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f9298:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f92fc;
        }
    }
L_001f929c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001f92a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f92a4u)) return;
    }
L_001f92a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f92a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f92ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f92c0;
        }
    }
L_001f92b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f92b4:;
    {
        cpu->r[14] = 0x001f92b8u; fn_001f8efc(cpu);
    }
L_001f92b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f92bc:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001f92c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001f92c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f92c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f92e4;
        }
    }
L_001f92cc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x2du);
    }
L_001f92d0:;
    {
        uint32_t v = cpu->r[3] & 0x00000004u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001f92d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f92d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_001f92dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_001f92e0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2], cpu->r[3]);
        }
    }
L_001f92e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f92e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f92ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001f92f0:;
    {
        cpu->r[14] = 0x001f92f4u; fn_001f8f90(cpu);
    }
L_001f92f4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f92f8:;
    {
        goto L_001f9284;
    }
L_001f92fc:;
    {
        cpu->r[14] = 0x001f9300u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001f9300:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 1, 7u, &shc); cpu->r[1] = v;
        }
    }
L_001f9304:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001f9308:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 4, (cpu->r[14] & 0xffu), &shc), 0, 1);
        }
    }
L_001f930c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 4, (cpu->r[14] & 0xffu), &shc), 0, 1);
        }
    }
L_001f9310:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 4, 28u, &shc), 0, 1);
        }
    }
}

/* _Z35stb_vorbis_stream_length_in_samplesP10stb_vorbis @ 001f9314 (arm) */
void fn_001f9314(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f9314:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x32cu);
    }
L_001f9318:;
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
L_001f931c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9320:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001f9324:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f9328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9340;
        }
    }
L_001f932c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f9330:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001f9334:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001f9338:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001f933c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f9340u)) return;
    }
L_001f9340:;
    {
        cpu->r[14] = 0x001f9344u; fn_001f8efc(cpu);
    }
L_001f9344:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f9348:;
    {
        sub_flags(cpu, cpu->r[6], 0x00010000u, 1, 1);
    }
L_001f934c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
        }
    }
L_001f9350:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f9354:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f93ac;
        }
    }
L_001f9358:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001f935c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f9360:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9364:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001f9368:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f936c:;
    {
        cpu->r[14] = 0x001f9370u; fn_001f8f90(cpu);
    }
L_001f9370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9374:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f9378:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f937c:;
    {
        cpu->r[14] = 0x001f9380u; fn_001f903c(cpu);
    }
L_001f9380:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9384:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f93c0;
        }
    }
L_001f9388:;
    {
        cpu->r[3] = 0x00000024u;
    }
L_001f938c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001f9390:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f9394:;
    {
        wr32(cpu->r[4] + + 0x32cu, cpu->r[3]);
    }
L_001f9398:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f939c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f93a0:;
    {
        cpu->r[14] = 0x001f93a4u; fn_001f8f90(cpu);
    }
L_001f93a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x32cu);
    }
L_001f93a8:;
    {
        goto L_001f932c;
    }
L_001f93ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001f93b0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00010000u, 1, 0);
    }
L_001f93b4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001f93b8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001f935c;
        }
    }
L_001f93bc:;
    {
        goto L_001f9358;
    }
L_001f93c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f93c4:;
    {
        goto L_001f93f4;
    }
L_001f93c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f93cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f93d0:;
    {
        cpu->r[14] = 0x001f93d4u; fn_001f8f90(cpu);
    }
L_001f93d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f93d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f93dc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f93e0:;
    {
        cpu->r[14] = 0x001f93e4u; fn_001f903c(cpu);
    }
L_001f93e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f93e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f93ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9408;
        }
    }
L_001f93f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001f93f4:;
    {
        cpu->r[14] = 0x001f93f8u; fn_001f8efc(cpu);
    }
L_001f93f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001f93fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9400:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f9404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f93c8;
        }
    }
L_001f9408:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f940c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9410:;
    {
        cpu->r[14] = 0x001f9414u; fn_001f8f90(cpu);
    }
L_001f9414:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001f9418:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f941c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9420:;
    {
        cpu->r[14] = 0x001f9424u; fn_001f8754(cpu);
    }
L_001f9424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9428:;
    {
        cpu->r[14] = 0x001f942cu; fn_001f8824(cpu);
    }
L_001f942c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f9430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9434:;
    {
        cpu->r[14] = 0x001f9438u; fn_001f8824(cpu);
    }
L_001f9438:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_001f943c:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
        }
    }
L_001f9440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9388;
        }
    }
L_001f9444:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9448:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001f944c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = (~0x00000001u);
        }
    }
L_001f9450:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[7]);
    }
L_001f9454:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001f9458:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[6]);
    }
L_001f945c:;
    {
        wr32(cpu->r[4] + + 0x32cu, cpu->r[7]);
    }
L_001f9460:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001f9464:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f9468:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001f946c:;
    {
        goto L_001f9398;
    }
}

/* _Z35stb_vorbis_stream_length_in_secondsP10stb_vorbis @ 001f9470 (arm) */
void fn_001f9470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f9470:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f9474:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f9478:;
    {
        cpu->r[14] = 0x001f947cu; fn_001f9314(cpu);
    }
L_001f947c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_001f9480:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_001f9484:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001f9488:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_001f948c:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_001f9490:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001f9494:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f9498u)) return;
    }
}

/* _Z11dct_iv_slowPfi @ 001f9498 (arm) */
void fn_001f9498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f9498:;
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
L_001f949c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001f94a0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001f94a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00012000u, 1, 0);
    }
L_001f94a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f94ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001f94b0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001f94b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00010000u, 0, 0);
    }
L_001f94b8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[6] = v;
    }
L_001f94bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f94c0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001f94c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f94c8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001f94cc:;
    {
        cpu->r[14] = 0x001f94d0u; imp_memcpy(cpu); /* memcpy */
    }
L_001f94d0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f94d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9520;
        }
    }
L_001f94d8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[8];
    }
L_001f94dc:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_001f94e0:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x001f94e8u + + 0xc0u);
    }
L_001f94e4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001f94e8:;
    {
        cpu->r[11] = cpu->r[13];
    }
L_001f94ec:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[9];
    }
L_001f94f0:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_001f94f4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_001f94f8:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 7) / *vfp_d(cpu, 8);
    }
L_001f94fc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f9500:;
    {
        cpu->r[14] = 0x001f9504u; imp_cos(cpu); /* cos */
    }
L_001f9504:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f9508:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001f950c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f9510:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[3]);
    }
L_001f9514:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001f9518:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_001f951c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f94ec;
        }
    }
L_001f9520:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f9524:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9590;
        }
    }
L_001f9528:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001f952c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001f9530:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_001f9534:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001f9538:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001f953c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001f9540:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f9544:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001f954cu + + 0x64u);
    }
L_001f9548:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f954c:;
    {
        uint32_t v = cpu->r[10] & cpu->r[2]; cpu->r[1] = v;
    }
L_001f9550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f9554:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[8]);
    }
L_001f9558:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001f955c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00012000u, 0, 0);
    }
L_001f9560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f9564:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001f9568:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00012000u, 1, 0);
    }
L_001f956c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001f9570:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001f9574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9548;
        }
    }
L_001f9578:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001f957c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f9580:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_001f9584:;
    {
        wr32(cpu->r[7] + cpu->r[14], cpu->r[3]);
    }
L_001f9588:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001f958c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9538;
        }
    }
L_001f9590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9594:;
    {
        cpu->r[14] = 0x001f9598u; fn_00097dc8(cpu);
    }
L_001f9598:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001f959c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00012000u, 0, 0);
    }
L_001f95a0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001f95a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f95a8u)) return;
    }
}

/* _Z17inverse_mdct_slowPfiP10stb_vorbisi @ 001f95b8 (arm) */
void fn_001f95b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f95b8:;
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
L_001f95bc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f95c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00004000u, 1, 0);
    }
L_001f95c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f95c8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[10] = v;
    }
L_001f95cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001f95d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f95d4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f95d8:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001f95dc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001f95e0:;
    {
        cpu->r[14] = 0x001f95e4u; imp_memcpy(cpu); /* memcpy */
    }
L_001f95e4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001f95e8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f95ec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_001f95f0:;
    {
        cpu->r[14] = 0x001f95f4u; fn_001f9498(cpu);
    }
L_001f95f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f95f8:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_001f95fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001f9600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f962c;
        }
    }
L_001f9604:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001f9608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f960c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], cpu->r[2], 0, 0);
    }
L_001f9610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001f9614:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001f9618:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f961c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001f9620:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f9624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f9628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9610;
        }
    }
L_001f962c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001f9630:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9664;
        }
    }
L_001f9634:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001f9638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001f963c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001f9640:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base - 4u;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[3] = ea;
    }
L_001f9644:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_001f9648:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001f964c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[2] = ea + 4u;
    }
L_001f9650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9640;
        }
    }
L_001f9654:;
    {
        cpu->r[3] = (~cpu->r[7]);
    }
L_001f9658:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001f965c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001f9660:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001f9664:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001f9668:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f96a4;
        }
    }
L_001f966c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_001f9670:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_001f9674:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001f9678:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f967c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001f9680:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001f9684:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001f9688:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001f968c:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_001f9690:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f9694:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001f9698:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001f969c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f96a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9684;
        }
    }
L_001f96a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001f96a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00004000u, 0, 0);
    }
L_001f96ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f96b0u)) return;
    }
}

/* sub_001f96b0 @ 001f96b0 (arm) */
void fn_001f96b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f96b0:;
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
L_001f96b4:;
    {
        cpu->r[13] -= 48u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
    }
L_001f96b8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[8] = v;
    }
L_001f96bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f96c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000110u, 0, 0);
    }
L_001f96c4:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[11] = v;
    }
L_001f96c8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001f96cc:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001f96d0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f96d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001f96d8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001f96dc:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001f96e0:;
    {
        cpu->r[14] = 0x001f96e4u; fn_001f862c(cpu);
    }
L_001f96e4:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001f96e8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f96ec:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001f96f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x0000010cu, 0, 0);
    }
L_001f96f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001f96f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001f96fc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001f9700:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f9704:;
    {
        cpu->r[14] = 0x001f9708u; fn_001f862c(cpu);
    }
L_001f9708:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001f970c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001f9710:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f9714:;
    {
        cpu->r[14] = 0x001f9718u; fn_001f862c(cpu);
    }
L_001f9718:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f971c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9720:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001f9724:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_001f9728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f99a4;
        }
    }
L_001f972c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_001f9730:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f9734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f99a4;
        }
    }
L_001f9738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f973c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f99a4;
        }
    }
L_001f9740:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f9744:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f980c;
        }
    }
L_001f9748:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[9];
    }
L_001f974c:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f9750:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x001f9758u + + 0x260u);
    }
L_001f9754:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001f9758:;
    {
        *vfp_d(cpu, 12) = *(double*)G(0x001f9760u + + 0x260u);
    }
L_001f975c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001f9760:;
    {
        *vfp_d(cpu, 13) = *(double*)G(0x001f9768u + + 0x260u);
    }
L_001f9764:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f9768:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x001f9770u + + 0x268u);
    }
L_001f976c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001f9770:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001f9774:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,16);
    }
L_001f9778:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 11);
    }
L_001f977c:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f9780:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f9784:;
    {
        cpu->r[14] = 0x001f9788u; imp_cos(cpu); /* cos */
    }
L_001f9788:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 12);
    }
L_001f978c:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f9790:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,5);
    }
L_001f9794:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f9798:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001f979c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f97a0:;
    {
        cpu->r[14] = 0x001f97a4u; imp_sin(cpu); /* sin */
    }
L_001f97a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001f97a8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001f97ac:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_001f97b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001f97b4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 11);
    }
L_001f97b8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f97bc:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f97c0:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) * *vfp_d(cpu, 13);
    }
L_001f97c4:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,5);
    }
L_001f97c8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f97cc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f97d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001f97d4:;
    {
        cpu->r[14] = 0x001f97d8u; imp_cos(cpu); /* cos */
    }
L_001f97d8:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f97dc:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001f97e0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f97e4:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_001f97e8:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f97ec:;
    {
        cpu->r[14] = 0x001f97f0u; imp_sin(cpu); /* sin */
    }
L_001f97f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001f97f4:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f97f8:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,5);
    }
L_001f97fc:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_001f9800:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f9804:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001f9808:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f976c;
        }
    }
L_001f980c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[6] = v;
    }
L_001f9810:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f9814:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9888;
        }
    }
L_001f9818:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[9];
    }
L_001f981c:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_001f9820:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001f9824:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_001f9828:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x001f9830u + + 0x188u);
    }
L_001f982c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001f9830:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x001f9838u + + 0x188u);
    }
L_001f9834:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_001f9838:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[4];
    }
L_001f983c:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_001f9840:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001f9844:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 10);
    }
L_001f9848:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f984c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f9850:;
    {
        cpu->r[14] = 0x001f9854u; imp_cos(cpu); /* cos */
    }
L_001f9854:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 11);
    }
L_001f9858:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f985c:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,5);
    }
L_001f9860:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f9864:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001f9868:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f986c:;
    {
        cpu->r[14] = 0x001f9870u; imp_sin(cpu); /* sin */
    }
L_001f9870:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001f9874:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f9878:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001f987c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001f9880:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001f9884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9838;
        }
    }
L_001f9888:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001f988c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001f9890:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f9894:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], 0x00000114u, 0, 0);
    }
L_001f9898:;
    {
        cpu->r[14] = 0x001f989cu; fn_001f862c(cpu);
    }
L_001f989c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001f98a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f98a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f98a8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_001f98ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9994;
        }
    }
L_001f98b0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f98b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9928;
        }
    }
L_001f98b8:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[8];
    }
L_001f98bc:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_001f98c0:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x001f98c8u + + 0x100u);
    }
L_001f98c4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f98c8:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x001f98d0u + + 0xe8u);
    }
L_001f98cc:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x001f98d4u + + 0xfcu);
    }
L_001f98d0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[4];
    }
L_001f98d4:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_001f98d8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 8);
    }
L_001f98dc:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 9);
    }
L_001f98e0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_001f98e4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 7) * *vfp_d(cpu, 10);
    }
L_001f98e8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f98ec:;
    {
        cpu->r[14] = 0x001f98f0u; imp_sin(cpu); /* sin */
    }
L_001f98f0:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f98f4:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,5);
    }
L_001f98f8:;
    {
        vfp_vmul(cpu, 14, 15, 15);
    }
L_001f98fc:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_001f9900:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 7) * *vfp_d(cpu, 11);
    }
L_001f9904:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001f9908:;
    {
        cpu->r[14] = 0x001f990cu; imp_sin(cpu); /* sin */
    }
L_001f990c:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001f9910:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_001f9914:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f9918:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_001f991c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001f9920:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001f9924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f98d0;
        }
    }
L_001f9928:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f992c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001f9930:;
    {
        cpu->r[14] = 0x001f9934u; fn_001f862c(cpu);
    }
L_001f9934:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001f9938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f993c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f9940:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[0]);
    }
L_001f9944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9994;
        }
    }
L_001f9948:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001f994c:;
    {
        cpu->r[14] = 0x001f9950u; fn_001f77f0(cpu);
    }
L_001f9950:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f9954:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9984;
        }
    }
L_001f9958:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000024u, cpu->r[0], 1, 0);
    }
L_001f995c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001f9960:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f9964:;
    {
        cpu->r[14] = 0x001f9968u; fn_001f7774(cpu);
    }
L_001f9968:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f996c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001f9970:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001f9974:;
    {
        uint32_t v = shifter(cpu->r[0], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f9978:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001f997c:;
    {
        wr16(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001f9980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9960;
        }
    }
L_001f9984:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001f9988:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001f998c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        cpu->r[13] += 48u;
    }
L_001f9990:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f9994u)) return;
    }
L_001f9994:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001f9998:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f999c:;
    {
        wr32(cpu->r[7] + + 0x74u, cpu->r[3]);
    }
L_001f99a0:;
    {
        goto L_001f9988;
    }
L_001f99a4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001f99a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f99ac:;
    {
        wr32(cpu->r[7] + + 0x74u, cpu->r[3]);
    }
L_001f99b0:;
    {
        goto L_001f9988;
    }
}

/* sub_001f99e0 @ 001f99e0 (arm) */
void fn_001f99e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f99e0:;
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
L_001f99e4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001f99e8:;
    {
        cpu->r[4] = rd32(0x001f99f0u + + 0x710u);
    }
L_001f99ec:;
    {
        cpu->r[5] = rd32(0x001f99f4u + + 0x710u);
    }
L_001f99f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000004f0u, 1, 0);
    }
L_001f99f4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001f99fcu, cpu->r[4], 0, 0);
    }
L_001f99f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001f99fc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f9a00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f9a04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f9a08:;
    {
        wr32(cpu->r[13] + + 0x4f4u, cpu->r[3]);
    }
L_001f9a0c:;
    {
        cpu->r[14] = 0x001f9a10u; fn_001f899c(cpu);
    }
L_001f9a10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001f9a18:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x56fu);
    }
L_001f9a1c:;
    {
        uint32_t v = cpu->r[2] & 0x00000002u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_001f9a20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a54;
        }
    }
L_001f9a24:;
    {
        cpu->r[3] = 0x00000022u;
    }
L_001f9a28:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9a2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001f9a30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001f9a34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4f4u);
    }
L_001f9a38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f9a3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f9a40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9b60;
        }
    }
L_001f9a44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001f9a48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001f9a4c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001f9a50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f9a54u)) return;
    }
L_001f9a54:;
    {
        uint32_t v = cpu->r[2] & 0x00000004u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_001f9a58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a80;
        }
    }
L_001f9a5c:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_001f9a60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a24;
        }
    }
L_001f9a64:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x46cu);
    }
L_001f9a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f9a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a90;
        }
    }
L_001f9a70:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_001f9a74:;
    {
        goto L_001f9a24;
    }
L_001f9a78:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f9a7c:;
    {
        goto L_001f9a2c;
    }
L_001f9a80:;
    {
        cpu->r[3] = 0x00000022u;
    }
L_001f9a84:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f9a88:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9a8c:;
    {
        goto L_001f9a2c;
    }
L_001f9a90:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x470u);
    }
L_001f9a94:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_001f9a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9aac;
        }
    }
L_001f9a9c:;
    {
        cpu->r[3] = 0x00000022u;
    }
L_001f9aa0:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_001f9aa4:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9aa8:;
    {
        goto L_001f9a2c;
    }
L_001f9aac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ab0:;
    {
        cpu->r[14] = 0x001f9ab4u; fn_001f87d0(cpu);
    }
L_001f9ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001f9ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a9c;
        }
    }
L_001f9abc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000004a0u, 0, 0);
    }
L_001f9ac0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ac4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001f9ac8:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f9acc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f9ad0:;
    {
        cpu->r[14] = 0x001f9ad4u; fn_001f8754(cpu);
    }
L_001f9ad4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9ad8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_001f9adc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001f9ae0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
        }
    }
L_001f9ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a2c;
        }
    }
L_001f9ae8:;
    {
        cpu->r[1] = rd32(0x001f9af0u + + 0x618u);
    }
L_001f9aec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f9af0:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001f9af4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f9afcu, cpu->r[1], 0, 0);
    }
L_001f9af8:;
    {
        cpu->r[14] = 0x001f9afcu; imp_memcmp(cpu); /* memcmp */
    }
L_001f9afc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9b00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a9c;
        }
    }
L_001f9b04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b08:;
    {
        cpu->r[14] = 0x001f9b0cu; fn_001f8824(cpu);
    }
L_001f9b0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9a80;
        }
    }
L_001f9b14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b18:;
    {
        cpu->r[14] = 0x001f9b1cu; fn_001f87d0(cpu);
    }
L_001f9b1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9b20:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001f9b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9b50;
        }
    }
L_001f9b28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 1);
    }
L_001f9b2c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000005u;
        }
    }
L_001f9b30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_001f9b34:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
        }
    }
L_001f9b38:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f9a2c;
        }
    }
L_001f9b3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b40:;
    {
        cpu->r[14] = 0x001f9b44u; fn_001f8824(cpu);
    }
L_001f9b44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9b48:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001f9b4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9b64;
        }
    }
L_001f9b50:;
    {
        cpu->r[3] = 0x00000022u;
    }
L_001f9b54:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f9b58:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9b5c:;
    {
        goto L_001f9a2c;
    }
L_001f9b60:;
    {
        cpu->r[14] = 0x001f9b64u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001f9b64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b68:;
    {
        cpu->r[14] = 0x001f9b6cu; fn_001f8824(cpu);
    }
L_001f9b6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b70:;
    {
        cpu->r[14] = 0x001f9b74u; fn_001f8824(cpu);
    }
L_001f9b74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b78:;
    {
        cpu->r[14] = 0x001f9b7cu; fn_001f8824(cpu);
    }
L_001f9b7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9b80:;
    {
        cpu->r[14] = 0x001f9b84u; fn_001f87d0(cpu);
    }
L_001f9b84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f9b88:;
    {
        uint32_t v = cpu->r[0] & 0x0000000fu; cpu->r[2] = v;
    }
L_001f9b8c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[3] = v;
    }
L_001f9b90:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 0);
    }
L_001f9b94:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001f9b98:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000007u, 1, 1);
    }
L_001f9b9c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001f9ba0:;
    {
        wr32(cpu->r[6] + + 0x84u, cpu->r[0]);
    }
L_001f9ba4:;
    {
        wr32(cpu->r[6] + + 0x80u, cpu->r[1]);
    }
L_001f9ba8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f9bc0;
        }
    }
L_001f9bac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 0);
    }
L_001f9bb0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_001f9bb4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001f9bc0;
        }
    }
L_001f9bb8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f9bbc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9bd0;
        }
    }
L_001f9bc0:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001f9bc4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f9bc8:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9bcc:;
    {
        goto L_001f9a2c;
    }
L_001f9bd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9bd4:;
    {
        cpu->r[14] = 0x001f9bd8u; fn_001f87d0(cpu);
    }
L_001f9bd8:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_001f9bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9b50;
        }
    }
L_001f9be0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9be4:;
    {
        cpu->r[14] = 0x001f9be8u; fn_001f899c(cpu);
    }
L_001f9be8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9bec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001f9bf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9bf4:;
    {
        cpu->r[14] = 0x001f9bf8u; fn_001f8a98(cpu);
    }
L_001f9bf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001f9c00:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f9c04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9c08:;
    {
        cpu->r[14] = 0x001f9c0cu; fn_001f89fc(cpu);
    }
L_001f9c0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f9c10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9c14:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f9c18:;
    {
        cpu->r[14] = 0x001f9c1cu; fn_001f8f30(cpu);
    }
L_001f9c1c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f9c20:;
    {
        wr8(cpu->r[6] + + 0x570u, cpu->r[10]);
    }
L_001f9c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9c04;
        }
    }
L_001f9c28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9c2c:;
    {
        cpu->r[14] = 0x001f9c30u; fn_001f8a98(cpu);
    }
L_001f9c30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001f9c38:;
    {
        cpu->r[0] = rd32(0x001f9c40u + + 0x4ccu);
    }
L_001f9c3c:;
    {
        cpu->r[2] = 0x00001db7u;
    }
L_001f9c40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x04c1u << 16);
    }
L_001f9c44:;
    {
        cpu->r[0] = add_flags(cpu, 0x001f9c4cu, cpu->r[0], 0, 0);
    }
L_001f9c48:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 24u, &shc); cpu->r[3] = v;
    }
L_001f9c4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f9c50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9c54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001f9c58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_001f9c5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001f9c60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_001f9c64:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001f9c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9c50;
        }
    }
L_001f9c6c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[3]);
    }
L_001f9c70:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001f9c74:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000100u, 1, 1);
    }
L_001f9c78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9c48;
        }
    }
L_001f9c7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9c80:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001f9c84:;
    {
        cpu->r[14] = 0x001f9c88u; fn_001f8af4(cpu);
    }
L_001f9c88:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[8]);
    }
L_001f9c8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_001f9c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9ca0;
        }
    }
L_001f9c94:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001f9c98:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9c9c:;
    {
        goto L_001f9a2c;
    }
L_001f9ca0:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_001f9ca4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ca8:;
    {
        cpu->r[14] = 0x001f9cacu; fn_001f8af4(cpu);
    }
L_001f9cac:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[8]);
    }
L_001f9cb0:;
    {
        wr8(cpu->r[7] + cpu->r[10], cpu->r[0]);
    }
L_001f9cb4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001f9cb8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000006u, 1, 1);
    }
L_001f9cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9ca4;
        }
    }
L_001f9cc0:;
    {
        cpu->r[1] = rd32(0x001f9cc8u + + 0x448u);
    }
L_001f9cc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001f9cc8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001f9ccc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001f9cd4u, cpu->r[1], 0, 0);
    }
L_001f9cd0:;
    {
        cpu->r[14] = 0x001f9cd4u; imp_memcmp(cpu); /* memcmp */
    }
L_001f9cd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9cd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9c94;
        }
    }
L_001f9cdc:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9ce0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ce4:;
    {
        cpu->r[14] = 0x001f9ce8u; fn_001f8b50(cpu);
    }
L_001f9ce8:;
    {
        cpu->r[7] = 0x00000830u;
    }
L_001f9cec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f9cf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9cf4:;
    {
        wr32(cpu->r[6] + + 0x88u, cpu->r[1]);
    }
L_001f9cf8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[1] = v;
    }
L_001f9cfc:;
    {
        cpu->r[14] = 0x001f9d00u; fn_001f862c(cpu);
    }
L_001f9d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9d04:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f9d08:;
    {
        wr32(cpu->r[6] + + 0x8cu, cpu->r[0]);
    }
L_001f9d0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9e94;
        }
    }
L_001f9d10:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x88u);
    }
L_001f9d14:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f9d18:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_001f9d1c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001f9d24u + + 0x3d8u);
    }
L_001f9d20:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_001f9d24:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2]; cpu->r[2] = v;
    }
L_001f9d28:;
    {
        cpu->r[14] = 0x001f9d2cu; imp_memset(cpu); /* memset */
    }
L_001f9d2c:;
    {
        cpu->r[3] = rd32(0x001f9d34u + + 0x3e0u);
    }
L_001f9d30:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_001f9d34:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f9d3cu, cpu->r[3], 0, 0);
    }
L_001f9d38:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001f9d3c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001f9d40:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x88u);
    }
L_001f9d44:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f9d48:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001f9d4c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa174;
        }
    }
L_001f9d50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9d54:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9d58:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001f9d5c:;
    {
        cpu->r[14] = 0x001f9d60u; fn_001f8b50(cpu);
    }
L_001f9d60:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f9d64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000042u, 1, 1);
    }
L_001f9d68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa15c;
        }
    }
L_001f9d6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9d70:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9d74:;
    {
        cpu->r[14] = 0x001f9d78u; fn_001f8b50(cpu);
    }
L_001f9d78:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f9d7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000043u, 1, 1);
    }
L_001f9d80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa15c;
        }
    }
L_001f9d84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9d88:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9d8c:;
    {
        cpu->r[14] = 0x001f9d90u; fn_001f8b50(cpu);
    }
L_001f9d90:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001f9d94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000056u, 1, 1);
    }
L_001f9d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa15c;
        }
    }
L_001f9d9c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9da0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9da4:;
    {
        cpu->r[14] = 0x001f9da8u; fn_001f8b50(cpu);
    }
L_001f9da8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9dac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f9db0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9db4:;
    {
        cpu->r[14] = 0x001f9db8u; fn_001f8b50(cpu);
    }
L_001f9db8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f9dbc:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9dc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001f9dc4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001f9dc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9dcc:;
    {
        cpu->r[3] = cpu->r[3] + (uint32_t)((uint8_t)cpu->r[5]);
    }
L_001f9dd0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001f9dd4:;
    {
        cpu->r[14] = 0x001f9dd8u; fn_001f8b50(cpu);
    }
L_001f9dd8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9ddc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f9de0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9de4:;
    {
        cpu->r[14] = 0x001f9de8u; fn_001f8b50(cpu);
    }
L_001f9de8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001f9dec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f9df0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9df4:;
    {
        cpu->r[14] = 0x001f9df8u; fn_001f8b50(cpu);
    }
L_001f9df8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f9dfc:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_001f9e00:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_001f9e04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9e08:;
    {
        cpu->r[3] = cpu->r[3] + (uint32_t)((uint8_t)cpu->r[4]);
    }
L_001f9e0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 8u, &shc), 0, 0);
    }
L_001f9e10:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001f9e14:;
    {
        cpu->r[14] = 0x001f9e18u; fn_001f8b50(cpu);
    }
L_001f9e18:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9e1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001f9e20:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[7] + + 0x17u, cpu->r[4]);
        }
    }
L_001f9e24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa12c;
        }
    }
L_001f9e28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9e2c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9e30:;
    {
        cpu->r[14] = 0x001f9e34u; fn_001f862c(cpu);
    }
L_001f9e34:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f9e38:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001f9e3c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f9e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa118;
        }
    }
L_001f9e44:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f9e48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = (~0x00000000u);
        }
    }
L_001f9e4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[5];
        }
    }
L_001f9e50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9f4c;
        }
    }
L_001f9e54:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9e58:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001f9e5c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9ec0;
        }
    }
L_001f9e60:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x17u);
    }
L_001f9e64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f9e68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9ea0;
        }
    }
L_001f9e6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9e70:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001f9e74:;
    {
        cpu->r[14] = 0x001f9e78u; fn_001f8b50(cpu);
    }
L_001f9e78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001f9e7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f9e80:;
    {
        wr8(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_001f9e84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001f9e88:;
    {
        goto L_001f9e54;
    }
L_001f9e8c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001f9e90:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001f9e94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001f9e98:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001f9e9c:;
    {
        goto L_001f9a2c;
    }
L_001f9ea0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ea4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001f9ea8:;
    {
        cpu->r[14] = 0x001f9eacu; fn_001f8b50(cpu);
    }
L_001f9eac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f9eb0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[8] + cpu->r[10], cpu->r[9]);
        }
    }
L_001f9eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9e84;
        }
    }
L_001f9eb8:;
    {
        goto L_001f9e6c;
    }
L_001f9ebc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f9ec0:;
    {
        cpu->r[9] = rd8(cpu->r[7] + + 0x17u);
    }
L_001f9ec4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f9ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9f20;
        }
    }
L_001f9ecc:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[4], 1, 2u, &shc), 1, 1);
    }
L_001f9ed0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[5];
        }
    }
L_001f9ed4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f9fac;
        }
    }
L_001f9ed8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001f9edc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9ee0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001f9ee4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001f9ee8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x10u, cpu->r[4]);
        }
    }
L_001f9eec:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9ef0:;
    {
        cpu->r[14] = 0x001f9ef4u; fn_001f862c(cpu);
    }
L_001f9ef4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f9ef8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9efc:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001f9f00:;
    {
        cpu->r[14] = 0x001f9f04u; imp_memcpy(cpu); /* memcpy */
    }
L_001f9f04:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f9f08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9f0c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9f10:;
    {
        cpu->r[14] = 0x001f9f14u; fn_001f86e4(cpu);
    }
L_001f9f14:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[8] = v1;
    }
L_001f9f18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f9f1c:;
    {
        wr8(cpu->r[7] + + 0x17u, cpu->r[3]);
    }
L_001f9f20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f9f24:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001f9f28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001f9f2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9fac;
        }
    }
L_001f9f30:;
    {
        cpu->r[2] = rd8(cpu->r[8] + cpu->r[3]);
    }
L_001f9f34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f9f38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000bu, 1, 0);
    }
L_001f9f3c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_001f9f40:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000f3u, 1, 1);
    }
L_001f9f44:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001f9f48:;
    {
        goto L_001f9f28;
    }
L_001f9f4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9f50:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001f9f54:;
    {
        cpu->r[14] = 0x001f9f58u; fn_001f8b50(cpu);
    }
L_001f9f58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f9f5c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f9f60:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9f64:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001f9f68:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9ebc;
        }
    }
L_001f9f6c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 0);
    }
L_001f9f70:;
    {
        cpu->r[14] = 0x001f9f74u; fn_001f77f0(cpu);
    }
L_001f9f74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001f9f78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f9f7c:;
    {
        cpu->r[14] = 0x001f9f80u; fn_001f8b50(cpu);
    }
L_001f9f80:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001f9f84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001f9f88:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001f9f8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f9f90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fa15c;
        }
    }
L_001f9f94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001f9f98:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f9f9c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001f9fa0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001f9fa4:;
    {
        cpu->r[14] = 0x001f9fa8u; imp_memset(cpu); /* memset */
    }
L_001f9fa8:;
    {
        goto L_001f9f60;
    }
L_001f9fac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f9fb0:;
    {
        wr32(cpu->r[7] + + 0x82cu, cpu->r[1]);
    }
L_001f9fb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa0c0;
        }
    }
L_001f9fb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f9fbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_001f9fc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa070;
        }
    }
L_001f9fc4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001f9fc8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001f9fcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001f9fd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f9fd4:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
        }
    }
L_001f9fd8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_001f9fdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000420u, 0, 0);
    }
L_001f9fe0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f9fe4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001f9fe8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001f9fec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f9ff0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001f9ff4:;
    {
        cpu->r[14] = 0x001f9ff8u; imp_memset(cpu); /* memset */
    }
L_001f9ff8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001f9ffc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fa010;
        }
    }
L_001fa000:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_001fa004:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001fa008:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
        }
    }
L_001fa00c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9ff8;
        }
    }
L_001fa010:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001fa014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa2e0;
        }
    }
L_001fa018:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa01c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001fa020:;
    {
        cpu->r[2] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_001fa024:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fa028:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001fa02c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
        }
    }
L_001fa030:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[7] + + 0x20u);
        }
    }
L_001fa034:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
        }
    }
L_001fa038:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_001fa03c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[12]);
        }
    }
L_001fa040:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3], cpu->r[2]);
        }
    }
L_001fa044:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fa048:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001fa04c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[11], cpu->r[10]);
        }
    }
L_001fa050:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001fa054:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001fa058:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fa1b8;
        }
    }
L_001fa05c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
    }
L_001fa060:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001fa064:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_001fa068:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fa06c:;
    {
        goto L_001fa050;
    }
L_001fa070:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa074:;
    {
        cpu->r[14] = 0x001fa078u; fn_001f862c(cpu);
    }
L_001fa078:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa07c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001fa080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa2c8;
        }
    }
L_001fa084:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa088:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa08c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa090:;
    {
        cpu->r[14] = 0x001fa094u; fn_001f85a0(cpu);
    }
L_001fa094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa098:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_001fa09c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa2c8;
        }
    }
L_001fa0a0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa0a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa0a8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa0ac:;
    {
        cpu->r[14] = 0x001fa0b0u; fn_001f85a0(cpu);
    }
L_001fa0b0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa0e4;
        }
    }
L_001fa0b8:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa0bc:;
    {
        goto L_001f9fc4;
    }
L_001fa0c0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa0c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa0c8:;
    {
        cpu->r[14] = 0x001fa0ccu; fn_001f862c(cpu);
    }
L_001fa0cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa0d0:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_001fa0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5f8;
        }
    }
L_001fa0d8:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001fa0dc:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa0e0:;
    {
        goto L_001f9fdc;
    }
L_001fa0e4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001fa0e8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa0ec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa0f0:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_001fa0f4:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa0f8:;
    {
        goto L_001f9a2c;
    }
L_001fa118:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001fa11c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa120:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa124:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa128:;
    {
        goto L_001f9a2c;
    }
L_001fa12c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa130:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fa134:;
    {
        cpu->r[14] = 0x001fa138u; fn_001f8b50(cpu);
    }
L_001fa138:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa13c:;
    {
        wr8(cpu->r[7] + + 0x17u, cpu->r[0]);
    }
L_001fa140:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9e28;
        }
    }
L_001fa148:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa14c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa150:;
    {
        cpu->r[14] = 0x001fa154u; fn_001f85a0(cpu);
    }
L_001fa154:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001fa158:;
    {
        goto L_001f9e3c;
    }
L_001fa15c:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001fa160:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa164:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa168:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fa16c:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa170:;
    {
        goto L_001f9a2c;
    }
L_001fa174:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa178:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fa17c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa180:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fa184:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa188:;
    {
        cpu->r[14] = 0x001fa18cu; fn_001f8b50(cpu);
    }
L_001fa18c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fa190:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa194:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001fa198:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa610;
        }
    }
L_001fa19c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa1a0:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fa1a4:;
    {
        cpu->r[14] = 0x001fa1a8u; fn_001f8b50(cpu);
    }
L_001fa1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa1ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9bc0;
        }
    }
L_001fa1b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fa1b4:;
    {
        goto L_001fa194;
    }
L_001fa1b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fa1bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fa1c0:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa1c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001fa1c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001fa1cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fa2e0;
        }
    }
L_001fa1d0:;
    {
        cpu->r[9] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_001fa1d4:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000ffu, 1, 1);
    }
L_001fa1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5b4;
        }
    }
L_001fa1dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001fa1e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fa1e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001fa1e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5c8;
        }
    }
L_001fa1ec:;
    {
        uint32_t wb_tmp = cpu->r[1] + (-0x00000004u);
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_001fa1f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fa1f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa1f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa1e4;
        }
    }
L_001fa1fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001fa200:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001fa204:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5d0;
        }
    }
L_001fa20c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000004f0u, 0, 0);
    }
L_001fa210:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001fa214:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001fa218:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001fa21c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fa220:;
    {
        cpu->r[1] = rd32(cpu->r[2] + - 0xccu);
    }
L_001fa224:;
    {
        wr32(cpu->r[2] + - 0xccu, cpu->r[12]);
    }
L_001fa228:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001fa22c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001fa230:;
    {
        cpu->r[14] = 0x001fa234u; fn_001f7774(cpu);
    }
L_001fa234:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa238:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fa23c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fa240:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fa244:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001fa248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x20u);
        }
    }
L_001fa24c:;
    {
        cpu->r[1] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_001fa250:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[7] + + 0x20u);
        }
    }
L_001fa254:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_001fa258:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
        }
    }
L_001fa25c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
        }
    }
L_001fa260:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
        }
    }
L_001fa264:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_001fa268:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[11] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[10]);
        }
    }
L_001fa26c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[10]);
    }
L_001fa270:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fa274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5b0;
        }
    }
L_001fa278:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fa27c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000020u, cpu->r[3], 1, 0);
    }
L_001fa280:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001fa284:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001fa288:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001fa28c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_001fa290:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001fa294:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_001fa298:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_001fa29c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 1);
    }
L_001fa2a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa5ac;
        }
    }
L_001fa2a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fa2a8:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001fa2ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fa2b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, (cpu->r[0] & 0xffu), &shc), 0, 0);
    }
L_001fa2b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fa2b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001fa2bc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_001fa2c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_001fa2c4:;
    {
        goto L_001fa294;
    }
L_001fa2c8:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001fa2cc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa2d0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa2d4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001fa2d8:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa2dc:;
    {
        goto L_001f9a2c;
    }
L_001fa2e0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa2e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fa2e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = rd8(cpu->r[7] + + 0x17u);
        }
    }
L_001fa2ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa3d8;
        }
    }
L_001fa2f0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa2f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa33c;
        }
    }
L_001fa2f8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa2fc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001fa300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa304:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fa308:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fa30c:;
    {
        cpu->r[14] = 0x001fa310u; fn_001f86e4(cpu);
    }
L_001fa310:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa314:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa318:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x20u);
    }
L_001fa31c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fa320:;
    {
        cpu->r[14] = 0x001fa324u; fn_001f86e4(cpu);
    }
L_001fa324:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa328:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fa32c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa330:;
    {
        cpu->r[14] = 0x001fa334u; fn_001f86e4(cpu);
    }
L_001fa334:;
    {
        cpu->r[9] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa338:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[4]);
    }
L_001fa33c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001fa340:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fa344:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fa348:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_001fa34c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_001fa350:;
    {
        wr16(cpu->r[2] + + 0x24u, cpu->r[11]);
    }
L_001fa354:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001fa358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa344;
        }
    }
L_001fa35c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa360:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fa364:;
    {
        cpu->r[11] = 0x00007fffu;
    }
L_001fa368:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001fa36c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x82cu);
        }
    }
L_001fa370:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001fa374:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_001fa378:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001fa37c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_001fa380:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = cpu->r[11];
        }
    }
L_001fa384:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_001fa388:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa6e8;
        }
    }
L_001fa38c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x8u);
    }
L_001fa390:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001fa394:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001fa398:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fa6dc;
        }
    }
L_001fa39c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa3a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x20u);
        }
    }
L_001fa3a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
        }
    }
L_001fa3a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa3b8;
        }
    }
L_001fa3ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa3b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001fa3b4:;
    {
        cpu->r[14] = 0x001fa3b8u; fn_001f7774(cpu);
    }
L_001fa3b8:;
    {
        cpu->r[12] = 0x000003ffu;
    }
L_001fa3bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001fa3c0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fa6dc;
        }
    }
L_001fa3c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001fa3c8:;
    {
        wr16(cpu->r[3] + + 0x24u, cpu->r[4]);
    }
L_001fa3cc:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001fa3d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fa3d4:;
    {
        goto L_001fa3b8;
    }
L_001fa3d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fa3dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa3e0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa3e4:;
    {
        cpu->r[14] = 0x001fa3e8u; fn_001f862c(cpu);
    }
L_001fa3e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa3ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fa3f0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fa3f4:;
    {
        wr32(cpu->r[7] + + 0x824u, cpu->r[0]);
    }
L_001fa3f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa3fc:;
    {
        cpu->r[14] = 0x001fa400u; fn_001f862c(cpu);
    }
L_001fa400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa404:;
    {
        wr32(cpu->r[7] + + 0x828u, cpu->r[0]);
    }
L_001fa408:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
        }
    }
L_001fa40c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + + 0x828u, cpu->r[3]);
        }
    }
L_001fa410:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001fa414:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_001fa418:;
    {
        cpu->r[10] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa41c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fa420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001fa424:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[10];
        }
    }
L_001fa428:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_001fa42c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa47c;
        }
    }
L_001fa430:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001fa434:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa4a4;
        }
    }
L_001fa438:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa43c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_001fa440:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fa444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa458;
        }
    }
L_001fa448:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001fa44c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa474;
        }
    }
L_001fa450:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001fa454:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001fa474;
        }
    }
L_001fa458:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x20u);
    }
L_001fa45c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001fa460:;
    {
        cpu->r[14] = 0x001fa464u; fn_001f7774(cpu);
    }
L_001fa464:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa468:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[0]);
    }
L_001fa46c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fa470:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa474:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fa478:;
    {
        goto L_001fa430;
    }
L_001fa47c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa480:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001fa484:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa4a4;
        }
    }
L_001fa488:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x20u);
    }
L_001fa48c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001fa490:;
    {
        cpu->r[14] = 0x001fa494u; fn_001f7774(cpu);
    }
L_001fa494:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa498:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001fa49c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fa4a0:;
    {
        goto L_001fa47c;
    }
L_001fa4a4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001fa4a8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa4ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fa4b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fa4b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa4b8:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001fa4bc:;
    {
        cpu->r[14] = 0x001fa4c0u; imp_qsort(cpu); /* qsort */
    }
L_001fa4c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa4c4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa4c8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001fa4cc:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001fa4d0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001fa4d4:;
    {
        cpu->r[9] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa4d8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa4dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x82cu);
        }
    }
L_001fa4e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_001fa4e4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001fa4e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001fa4ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001fa4f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa570;
        }
    }
L_001fa4f4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa4f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[4]);
        }
    }
L_001fa4fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = rd8(cpu->r[8] + cpu->r[2]);
        }
    }
L_001fa500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa518;
        }
    }
L_001fa504:;
    {
        cpu->r[10] = rd8(cpu->r[8] + cpu->r[5]);
    }
L_001fa508:;
    {
        sub_flags(cpu, cpu->r[10], 0x000000ffu, 1, 1);
    }
L_001fa50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa5a0;
        }
    }
L_001fa510:;
    {
        sub_flags(cpu, cpu->r[10], 0x0000000au, 1, 1);
    }
L_001fa514:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001fa5a0;
        }
    }
L_001fa518:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
    }
L_001fa51c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001fa520:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_001fa524:;
    {
        cpu->r[14] = 0x001fa528u; fn_001f7774(cpu);
    }
L_001fa528:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fa52c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001fa530:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fa534:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001fa538:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001fa53c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001fa540:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fa578;
        }
    }
L_001fa544:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001fa548:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x824u);
    }
L_001fa54c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001fa550:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fa554:;
    {
        cpu->r[14] = rd32(cpu->r[14] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001fa558:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001fa55c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_001fa560:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
        }
    }
L_001fa564:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001fa568:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001fa56c:;
    {
        goto L_001fa53c;
    }
L_001fa570:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001fa574:;
    {
        goto L_001fa2f0;
    }
L_001fa578:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fa57c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fa580:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[7] + + 0x828u);
        }
    }
L_001fa584:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[11] + cpu->r[4]);
        }
    }
L_001fa588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[7] + + 0x8u);
        }
    }
L_001fa58c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[7] + + 0x828u);
        }
    }
L_001fa590:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[12]);
        }
    }
L_001fa594:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[10]);
        }
    }
L_001fa598:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[5]);
        }
    }
L_001fa59c:;
    {
        cpu->r[9] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa5a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fa5a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001fa5a8:;
    {
        goto L_001fa4ec;
    }
L_001fa5ac:;
    {
        cpu->r[4] = rd32(cpu->r[13]);
    }
L_001fa5b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fa5b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fa5b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fa5bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001fa5c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001fa5c4:;
    {
        goto L_001fa1c8;
    }
L_001fa5c8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001fa5cc:;
    {
        goto L_001fa204;
    }
L_001fa5d0:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa5d4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa5d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fa5dc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9bc0;
        }
    }
L_001fa5e4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001fa5e8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001fa5ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa5f0:;
    {
        cpu->r[14] = 0x001fa5f4u; fn_001f86e4(cpu);
    }
L_001fa5f4:;
    {
        goto L_001f9bc0;
    }
L_001fa5f8:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001fa5fc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa600:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa604:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_001fa608:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa60c:;
    {
        goto L_001f9a2c;
    }
L_001fa610:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fa614:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa618:;
    {
        cpu->r[14] = 0x001fa61cu; fn_001f8b50(cpu);
    }
L_001fa61c:;
    {
        cpu->r[1] = 0x0000063cu;
    }
L_001fa620:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fa624:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00000094u, 0, 0);
    }
L_001fa628:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_001fa62c:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_001fa630:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_001fa634:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001fa638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fa63c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa640:;
    {
        wr32(cpu->r[6] + + 0x90u, cpu->r[3]);
    }
L_001fa644:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001fa648:;
    {
        cpu->r[14] = 0x001fa64cu; fn_001f862c(cpu);
    }
L_001fa64c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001fa650:;
    {
        wr32(cpu->r[6] + + 0x114u, cpu->r[0]);
    }
L_001fa654:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x90u);
    }
L_001fa658:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fa65c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fac80;
        }
    }
L_001fa660:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa664:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fa668:;
    {
        cpu->r[14] = 0x001fa66cu; fn_001f8b50(cpu);
    }
L_001fa66c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fa670:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001fa674:;
    {
        wr16(cpu->r[12], cpu->r[7]);
    }
L_001fa678:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001fa67c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fa7e4;
        }
    }
L_001fa680:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fa684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa7fc;
        }
    }
L_001fa688:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa68c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001fa690:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x114u);
    }
L_001fa694:;
    {
        cpu->r[14] = 0x001fa698u; fn_001f8b50(cpu);
    }
L_001fa698:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_001fa69c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fa6a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001fa6a4:;
    {
        wr8(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_001fa6a8:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_001fa6ac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001fa6b0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa728;
        }
    }
L_001fa6b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa6b8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001fa6bc:;
    {
        cpu->r[14] = 0x001fa6c0u; fn_001f8b50(cpu);
    }
L_001fa6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001fa6c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fa6c8:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa6cc:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[0]);
    }
L_001fa6d0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_001fa6d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001fa6d8:;
    {
        goto L_001fa6a8;
    }
L_001fa6dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fa6e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001fa6e4:;
    {
        goto L_001fa384;
    }
L_001fa6e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa6ec:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001fa6f0:;
    {
        cpu->r[14] = 0x001fa6f4u; fn_001f8b50(cpu);
    }
L_001fa6f4:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa6f8:;
    {
        wr8(cpu->r[7] + + 0x15u, cpu->r[0]);
    }
L_001fa6fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001fa700:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fa15c;
        }
    }
L_001fa704:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa8a4;
        }
    }
L_001fa70c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fa710:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fa714:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fa718:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001fa71c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000830u, 0, 0);
    }
L_001fa720:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001fa724:;
    {
        goto L_001f9d40;
    }
L_001fa728:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001fa72c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fa730:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[4]);
    }
L_001fa734:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001fa738:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001fa73c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fa740:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001fa744:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb348;
        }
    }
L_001fa748:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001fa74c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa750:;
    {
        cpu->r[14] = 0x001fa754u; fn_001f8b50(cpu);
    }
L_001fa754:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001fa758:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fa75c:;
    {
        wr8(cpu->r[5] + + 0x21u, cpu->r[0]);
    }
L_001fa760:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa764:;
    {
        cpu->r[14] = 0x001fa768u; fn_001f8b50(cpu);
    }
L_001fa768:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa76c:;
    {
        wr8(cpu->r[5] + + 0x31u, cpu->r[0]);
    }
L_001fa770:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa7c4;
        }
    }
L_001fa778:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fa77c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x31u);
    }
L_001fa780:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001fa784:;
    {
        sub_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc), 1, 1);
    }
L_001fa788:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb308;
        }
    }
L_001fa78c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa790:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fa794:;
    {
        cpu->r[14] = 0x001fa798u; fn_001f8b50(cpu);
    }
L_001fa798:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa79c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001fa7a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001fa7a4:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001fa7a8:;
    {
        wr16(cpu->r[3] + + 0x52u, cpu->r[2]);
    }
L_001fa7ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x88u);
    }
L_001fa7b0:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_001fa7b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fa7b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa7e4;
        }
    }
L_001fa7bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fa7c0:;
    {
        goto L_001fa77c;
    }
L_001fa7c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa7c8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fa7cc:;
    {
        cpu->r[14] = 0x001fa7d0u; fn_001f8b50(cpu);
    }
L_001fa7d0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fa7d4:;
    {
        wr8(cpu->r[5] + + 0x41u, cpu->r[0]);
    }
L_001fa7d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x88u);
    }
L_001fa7dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001fa7e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fa778;
        }
    }
L_001fa7e4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001fa7e8:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_001fa7ec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa7f0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fa7f4:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa7f8:;
    {
        goto L_001f9a2c;
    }
L_001fa7fc:;
    {
        cpu->r[3] = 0x0000063cu;
    }
L_001fa800:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fa804:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa808:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x114u);
    }
L_001fa80c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[9] = v;
    }
L_001fa810:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa814:;
    {
        cpu->r[14] = 0x001fa818u; fn_001f8b50(cpu);
    }
L_001fa818:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fa81c:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_001fa820:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_001fa824:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_001fa828:;
    {
        wr8(cpu->r[11] + cpu->r[9], cpu->r[0]);
    }
L_001fa82c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa830:;
    {
        cpu->r[14] = 0x001fa834u; fn_001f8b50(cpu);
    }
L_001fa834:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fa838:;
    {
        wr16(cpu->r[8] + + 0x2u, cpu->r[0]);
    }
L_001fa83c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa840:;
    {
        cpu->r[14] = 0x001fa844u; fn_001f8b50(cpu);
    }
L_001fa844:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fa848:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_001fa84c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa850:;
    {
        cpu->r[14] = 0x001fa854u; fn_001f8b50(cpu);
    }
L_001fa854:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fa858:;
    {
        wr8(cpu->r[8] + + 0x6u, cpu->r[0]);
    }
L_001fa85c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa860:;
    {
        cpu->r[14] = 0x001fa864u; fn_001f8b50(cpu);
    }
L_001fa864:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001fa868:;
    {
        wr8(cpu->r[8] + + 0x7u, cpu->r[0]);
    }
L_001fa86c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa870:;
    {
        cpu->r[14] = 0x001fa874u; fn_001f8b50(cpu);
    }
L_001fa874:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fa878:;
    {
        wr8(cpu->r[8] + + 0x8u, cpu->r[0]);
    }
L_001fa87c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x8u);
    }
L_001fa880:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fa884:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001fa888:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa9a8;
        }
    }
L_001fa88c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa890:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fa894:;
    {
        cpu->r[14] = 0x001fa898u; fn_001f8b50(cpu);
    }
L_001fa898:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fa89c:;
    {
        wr8(cpu->r[10] + + 0x8u, cpu->r[0]);
    }
L_001fa8a0:;
    {
        goto L_001fa87c;
    }
L_001fa8a4:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_001fa8a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa8ac:;
    {
        cpu->r[14] = 0x001fa8b0u; fn_001f8b50(cpu);
    }
L_001fa8b0:;
    {
        uint32_t v = cpu->r[0] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_001fa8b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa8b8:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00e00000u; cpu->r[3] = v;
    }
L_001fa8bc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_001fa8c0:;
    {
        *vfp_d(cpu,7) = (double)*(uint32_t*)vfp_s(cpu,14);
    }
L_001fa8c4:;
    {
        cpu->r[1] = (cpu->r[0] >> 21) & 0x3ffu;
    }
L_001fa8c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000314u, 1, 0);
    }
L_001fa8cc:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_d(cpu,7) = -*vfp_d(cpu,7);
        }
    }
L_001fa8d0:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,7);
    }
L_001fa8d4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001fa8d8:;
    {
        cpu->r[14] = 0x001fa8dcu; imp_ldexpf(cpu); /* ldexpf */
    }
L_001fa8dc:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_001fa8e0:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001fa8e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa8e8:;
    {
        cpu->r[14] = 0x001fa8ecu; fn_001f8b50(cpu);
    }
L_001fa8ec:;
    {
        uint32_t v = cpu->r[0] & ~ 0xff000000u; cpu->r[3] = v;
    }
L_001fa8f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa8f4:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00e00000u; cpu->r[3] = v;
    }
L_001fa8f8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_001fa8fc:;
    {
        *vfp_d(cpu,7) = (double)*(uint32_t*)vfp_s(cpu,14);
    }
L_001fa900:;
    {
        cpu->r[1] = (cpu->r[0] >> 21) & 0x3ffu;
    }
L_001fa904:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000314u, 1, 0);
    }
L_001fa908:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_d(cpu,7) = -*vfp_d(cpu,7);
        }
    }
L_001fa90c:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,7);
    }
L_001fa910:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001fa914:;
    {
        cpu->r[14] = 0x001fa918u; imp_ldexpf(cpu); /* ldexpf */
    }
L_001fa918:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001fa91c:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[0]);
    }
L_001fa920:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa924:;
    {
        cpu->r[14] = 0x001fa928u; fn_001f8b50(cpu);
    }
L_001fa928:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fa92c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001fa930:;
    {
        wr8(cpu->r[7] + + 0x14u, cpu->r[0]);
    }
L_001fa934:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa938:;
    {
        cpu->r[14] = 0x001fa93cu; fn_001f8b50(cpu);
    }
L_001fa93c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x15u);
    }
L_001fa940:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001fa944:;
    {
        wr8(cpu->r[7] + + 0x16u, cpu->r[0]);
    }
L_001fa948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001faaf8;
        }
    }
L_001fa94c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001fa950:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fa954:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fa958:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[3]);
    }
L_001fa95c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001fa960:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa964:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001fa968:;
    {
        cpu->r[14] = 0x001fa96cu; fn_001f85a0(cpu);
    }
L_001fa96c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fa970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa118;
        }
    }
L_001fa974:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fa978:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001fa97c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001fa980:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fa9e4;
        }
    }
L_001fa984:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa988:;
    {
        cpu->r[1] = rd8(cpu->r[7] + + 0x14u);
    }
L_001fa98c:;
    {
        cpu->r[14] = 0x001fa990u; fn_001f8b50(cpu);
    }
L_001fa990:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fa994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa9b8;
        }
    }
L_001fa998:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001fa99c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fa9a0:;
    {
        wr16(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_001fa9a4:;
    {
        goto L_001fa978;
    }
L_001fa9a8:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001fa9ac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fa9b0:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa9b4:;
    {
        goto L_001f9a2c;
    }
L_001fa9b8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001fa9bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fa9c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fa9c4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fa9c8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fa9cc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fa9d0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001fa9d4:;
    {
        cpu->r[14] = 0x001fa9d8u; fn_001f86e4(cpu);
    }
L_001fa9d8:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001fa9dc:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fa9e0:;
    {
        goto L_001f9a2c;
    }
L_001fa9e4:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x15u);
    }
L_001fa9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001fa9ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fac34;
        }
    }
L_001fa9f0:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fa9f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fa9f8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001fa9fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fac14;
        }
    }
L_001faa00:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x82cu);
    }
L_001faa04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001faa08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa70c;
        }
    }
L_001faa0c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001faa10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faa14:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001faa18:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001faa1c:;
    {
        cpu->r[14] = 0x001faa20u; fn_001f862c(cpu);
    }
L_001faa20:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[0]);
    }
L_001faa24:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x1cu);
    }
L_001faa28:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001faa2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fabd4;
        }
    }
L_001faa30:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001faa34:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001faa38:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001faa3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001faa40:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_001faa44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[7] + + 0x82cu);
        }
    }
L_001faa48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_001faa4c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001faa50:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_001faa54:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 1);
    }
L_001faa58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fab74;
        }
    }
L_001faa5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001faa60:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001faa64:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001faa68:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001faa6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001faa70:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001faa74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001faa78:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4]; cpu->r[5] = v;
    }
L_001faa7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[7] + + 0x828u);
        }
    }
L_001faa80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_001faa84:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001faa88:;
    {
        cpu->r[12] = cpu->r[9];
    }
L_001faa8c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001faa90:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001faa94:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001faa98:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fab68;
        }
    }
L_001faa9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001faaa0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001faaa4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001faaa8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001faaac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001faab0:;
    {
        cpu->r[14] = 0x001faab4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001faab4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001faab8:;
    {
        cpu->r[14] = 0x001faabcu; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_001faabc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x10u);
    }
L_001faac0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_001faac4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001faac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001faacc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001faad0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[10] = v;
    }
L_001faad4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001faad8:;
    {
        cpu->r[1] = rd16(cpu->r[8] + cpu->r[1]);
    }
L_001faadc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001faae0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001faae4:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001faae8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001faaec:;
    {
        wr32(cpu->r[11] + cpu->r[5], cpu->r[1]);
    }
L_001faaf0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001faaf4:;
    {
        goto L_001faa94;
    }
L_001faaf8:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x4u);
    }
L_001faafc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_001fab00:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001fab04:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[7]);
    }
L_001fab08:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001fab0c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001fab10:;
    {
        cpu->r[14] = 0x001fab14u; imp_logf(cpu); /* logf */
    }
L_001fab14:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001fab18:;
    {
        vfp_vdiv(cpu, 15, 13, 16);
    }
L_001fab1c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fab20:;
    {
        cpu->r[14] = 0x001fab24u; imp_expf(cpu); /* expf */
    }
L_001fab24:;
    {
        cpu->r[14] = 0x001fab28u; imp_floorf(cpu); /* floorf */
    }
L_001fab28:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001fab2c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001fab30:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001fab34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001fab38:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001fab3c:;
    {
        vfp_vadd(cpu, 15, 15, 17);
    }
L_001fab40:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fab44:;
    {
        cpu->r[14] = 0x001fab48u; imp_powf(cpu); /* powf */
    }
L_001fab48:;
    {
        cpu->r[14] = 0x001fab4cu; imp_floorf(cpu); /* floorf */
    }
L_001fab4c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001fab50:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_001fab54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fab58:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001fab5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001fab60:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[4]);
    }
L_001fab64:;
    {
        goto L_001fa95c;
    }
L_001fab68:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_001fab6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fab70:;
    {
        goto L_001faa54;
    }
L_001fab74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fab78:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fab7c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fab80:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001fab84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fab88:;
    {
        cpu->r[14] = 0x001fab8cu; fn_001f86e4(cpu);
    }
L_001fab8c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001fab90:;
    {
        wr8(cpu->r[7] + + 0x15u, cpu->r[3]);
    }
L_001fab94:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x16u);
    }
L_001fab98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fab9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001faba0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001faba4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[7] + + 0x18u);
        }
    }
L_001faba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fa70c;
        }
    }
L_001fabac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001fabb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fac08;
        }
    }
L_001fabb4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x1cu);
    }
L_001fabb8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001fabbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001fabc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11]);
    }
L_001fabc4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fabc8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
    }
L_001fabcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fabd0:;
    {
        goto L_001fabac;
    }
L_001fabd4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001fabd8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fabdc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fabe0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fabe4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fabe8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001fabec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001fabf0:;
    {
        cpu->r[14] = 0x001fabf4u; fn_001f86e4(cpu);
    }
L_001fabf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001fabf8:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001fabfc:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fac00:;
    {
        cpu->r[8] = cpu->r[12];
    }
L_001fac04:;
    {
        goto L_001f9a2c;
    }
L_001fac08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fac0c:;
    {
        wr8(cpu->r[7] + + 0x16u, cpu->r[1]);
    }
L_001fac10:;
    {
        goto L_001fa70c;
    }
L_001fac14:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fac18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fac1c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001fac20:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fac24:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fac28:;
    {
        cpu->r[14] = 0x001fac2cu; fn_001f862c(cpu);
    }
L_001fac2c:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[0]);
    }
L_001fac30:;
    {
        goto L_001faa24;
    }
L_001fac34:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fac38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fac3c:;
    {
        cpu->r[14] = 0x001fac40u; fn_001f862c(cpu);
    }
L_001fac40:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001fac44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fac48:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[0]);
    }
L_001fac4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001fac50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb328;
        }
    }
L_001fac54:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001fac58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x10u);
    }
L_001fac5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_001fac60:;
    {
        cpu->r[1] = rd16(cpu->r[8] + cpu->r[1]);
    }
L_001fac64:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001fac68:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001fac6c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001fac70:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fac74:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[4]);
    }
L_001fac78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fac7c:;
    {
        goto L_001fac4c;
    }
L_001fac80:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fac84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fac88:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fac8c:;
    {
        cpu->r[14] = 0x001fac90u; fn_001f8b50(cpu);
    }
L_001fac90:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001fac94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000004b0u, 0, 0);
    }
L_001fac98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001fac9c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001faca0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x0000011cu, 0, 0);
    }
L_001faca4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_001faca8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_001facac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001facb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001facb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001facb8:;
    {
        wr32(cpu->r[6] + + 0x118u, cpu->r[3]);
    }
L_001facbc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001facc0:;
    {
        cpu->r[14] = 0x001facc4u; fn_001f862c(cpu);
    }
L_001facc4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_001facc8:;
    {
        wr32(cpu->r[6] + + 0x19cu, cpu->r[0]);
    }
L_001faccc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x118u);
    }
L_001facd0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001facd4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001facd8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fae6c;
        }
    }
L_001facdc:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001face0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001face4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x19cu);
    }
L_001face8:;
    {
        cpu->r[14] = 0x001facecu; fn_001f8b50(cpu);
    }
L_001facec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001facf0:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001facf4:;
    {
        wr16(cpu->r[1], cpu->r[0]);
    }
L_001facf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001facfc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fae58;
        }
    }
L_001fad00:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001fad04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad08:;
    {
        cpu->r[14] = 0x001fad0cu; fn_001f8b50(cpu);
    }
L_001fad0c:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001fad10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_001fad14:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fad18:;
    {
        wr32(cpu->r[10] + cpu->r[8], cpu->r[0]);
    }
L_001fad1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad20:;
    {
        cpu->r[14] = 0x001fad24u; fn_001f8b50(cpu);
    }
L_001fad24:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001fad28:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001fad2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad30:;
    {
        cpu->r[14] = 0x001fad34u; fn_001f8b50(cpu);
    }
L_001fad34:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fad38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fad3c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001fad40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad44:;
    {
        cpu->r[14] = 0x001fad48u; fn_001f8b50(cpu);
    }
L_001fad48:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fad4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fad50:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001fad54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad58:;
    {
        cpu->r[14] = 0x001fad5cu; fn_001f8b50(cpu);
    }
L_001fad5c:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[0]);
    }
L_001fad60:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xcu);
    }
L_001fad64:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001fad68:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fadb4;
        }
    }
L_001fad6c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001fad70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad74:;
    {
        cpu->r[14] = 0x001fad78u; fn_001f8b50(cpu);
    }
L_001fad78:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fad7c:;
    {
        cpu->r[10] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fad80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad84:;
    {
        cpu->r[14] = 0x001fad88u; fn_001f8b50(cpu);
    }
L_001fad88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fad8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fada0;
        }
    }
L_001fad90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fad94:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001fad98:;
    {
        cpu->r[14] = 0x001fad9cu; fn_001f8b50(cpu);
    }
L_001fad9c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fada0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fada4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001fada8:;
    {
        wr8(cpu->r[2] + cpu->r[7], cpu->r[0]);
    }
L_001fadac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fadb0:;
    {
        goto L_001fad60;
    }
L_001fadb4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 4u, &shc); cpu->r[1] = v;
    }
L_001fadb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fadbc:;
    {
        cpu->r[14] = 0x001fadc0u; fn_001f862c(cpu);
    }
L_001fadc0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fadc4:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001fadc8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001fadcc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xcu);
    }
L_001fadd0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fadd4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb038;
        }
    }
L_001fadd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001faddc:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001fade0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001fade4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001fade8:;
    {
        cpu->r[12] = rd8(cpu->r[2] + cpu->r[9]);
    }
L_001fadec:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_001fadf0:;
    {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fadf4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_001fadf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fae20;
        }
    }
L_001fadfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_001fae00:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001fae04:;
    {
        wr16(cpu->r[2] + cpu->r[7], cpu->r[1]);
    }
L_001fae08:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fae0c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 1);
    }
L_001fae10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fadf0;
        }
    }
L_001fae14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001fae18:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_001fae1c:;
    {
        goto L_001fadcc;
    }
L_001fae20:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fae24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fae28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001fae2c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001fae30:;
    {
        cpu->r[14] = 0x001fae34u; fn_001f8b50(cpu);
    }
L_001fae34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001fae38:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001fae3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001fae40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001fae44:;
    {
        wr16(cpu->r[12] + cpu->r[1], cpu->r[0]);
    }
L_001fae48:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x88u);
    }
L_001fae4c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + cpu->r[7]);
    }
L_001fae50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001fae54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fae08;
        }
    }
L_001fae58:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001fae5c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fae60:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fae64:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fae68:;
    {
        goto L_001f9a2c;
    }
L_001fae6c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fae70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fae74:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fae78:;
    {
        cpu->r[14] = 0x001fae7cu; fn_001f8b50(cpu);
    }
L_001fae7c:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_001fae80:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fae84:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[8]);
    }
L_001fae88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fae8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fae90:;
    {
        wr32(cpu->r[6] + + 0x1a0u, cpu->r[3]);
    }
L_001fae94:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001fae98:;
    {
        cpu->r[14] = 0x001fae9cu; fn_001f862c(cpu);
    }
L_001fae9c:;
    {
        wr32(cpu->r[6] + + 0x1a4u, cpu->r[0]);
    }
L_001faea0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1a0u);
    }
L_001faea4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001faea8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001faeac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001faf9c;
        }
    }
L_001faeb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faeb4:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001faeb8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x1a4u);
    }
L_001faebc:;
    {
        cpu->r[14] = 0x001faec0u; fn_001f8b50(cpu);
    }
L_001faec0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001faec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9bc0;
        }
    }
L_001faec8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_001faecc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001faed0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faed4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001faed8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_001faedc:;
    {
        cpu->r[14] = 0x001faee0u; fn_001f862c(cpu);
    }
L_001faee0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001faee4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_001faee8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faeec:;
    {
        cpu->r[14] = 0x001faef0u; fn_001f8b50(cpu);
    }
L_001faef0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001faef4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001faef8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[7] + + 0x8u, cpu->r[11]);
        }
    }
L_001faefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001faf10;
        }
    }
L_001faf00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faf04:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001faf08:;
    {
        cpu->r[14] = 0x001faf0cu; fn_001f8b50(cpu);
    }
L_001faf0c:;
    {
        wr8(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_001faf10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faf14:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001faf18:;
    {
        cpu->r[14] = 0x001faf1cu; fn_001f8b50(cpu);
    }
L_001faf1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001faf20:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[7], cpu->r[0]);
        }
    }
L_001faf24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fb258;
        }
    }
L_001faf28:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faf2c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001faf30:;
    {
        cpu->r[14] = 0x001faf34u; fn_001f8b50(cpu);
    }
L_001faf34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001faf38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9bc0;
        }
    }
L_001faf3c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x8u);
    }
L_001faf40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001faf44:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001faf48:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001faf4c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[9] = cpu->r[10];
        }
    }
L_001faf50:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001fb230;
        }
    }
L_001faf54:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001faf58:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_001faf5c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb1c4;
        }
    }
L_001faf60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faf64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001faf68:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x4u);
    }
L_001faf6c:;
    {
        cpu->r[14] = 0x001faf70u; fn_001f8b50(cpu);
    }
L_001faf70:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001faf74:;
    {
        wr8(cpu->r[11] + + 0x2u, cpu->r[0]);
    }
L_001faf78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001faf7c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x8u);
    }
L_001faf80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001faf84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_001faf88:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2u);
    }
L_001faf8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001faf90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001f9bc0;
        }
    }
L_001faf94:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001faf98:;
    {
        goto L_001faf54;
    }
L_001faf9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fafa0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fafa4:;
    {
        cpu->r[14] = 0x001fafa8u; fn_001f8b50(cpu);
    }
L_001fafa8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x000001b0u, 0, 0);
    }
L_001fafac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fafb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fafb4:;
    {
        wr32(cpu->r[6] + + 0x1a8u, cpu->r[0]);
    }
L_001fafb8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1a8u);
    }
L_001fafbc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001fafc0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb148;
        }
    }
L_001fafc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fafc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fafcc:;
    {
        cpu->r[14] = 0x001fafd0u; fn_001f8b50(cpu);
    }
L_001fafd0:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fafd4:;
    {
        wr8(cpu->r[7] + - 0x4u, cpu->r[0]);
    }
L_001fafd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fafdc:;
    {
        cpu->r[14] = 0x001fafe0u; fn_001f8b50(cpu);
    }
L_001fafe0:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001fafe4:;
    {
        wr16(cpu->r[7] + - 0x2u, cpu->r[0]);
    }
L_001fafe8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fafec:;
    {
        cpu->r[14] = 0x001faff0u; fn_001f8b50(cpu);
    }
L_001faff0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001faff4:;
    {
        wr16(cpu->r[7], cpu->r[0]);
    }
L_001faff8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001faffc:;
    {
        cpu->r[14] = 0x001fb000u; fn_001f8b50(cpu);
    }
L_001fb000:;
    {
        cpu->r[3] = rd16(cpu->r[7] + - 0x2u);
    }
L_001fb004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb008:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fb00c:;
    {
        wr8(cpu->r[7] + - 0x3u, cpu->r[0]);
    }
L_001fb010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f9bc0;
        }
    }
L_001fb014:;
    {
        cpu->r[2] = rd16(cpu->r[7]);
    }
L_001fb018:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fb01c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fb140;
        }
    }
L_001fb020:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1a0u);
    }
L_001fb024:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000006u, 0, 0);
    }
L_001fb028:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001fb02c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb108;
        }
    }
L_001fb030:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fb034:;
    {
        goto L_001fafb8;
    }
L_001fb038:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xdu);
    }
L_001fb03c:;
    {
        cpu->r[11] = 0x00000830u;
    }
L_001fb040:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001fb044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb048:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fb04c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001fb050:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fb054:;
    {
        cpu->r[14] = 0x001fb058u; fn_001f862c(cpu);
    }
L_001fb058:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb05c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001fb060:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001fb064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9e8c;
        }
    }
L_001fb068:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xdu);
    }
L_001fb06c:;
    {
        cpu->r[12] = 0x00000830u;
    }
L_001fb070:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001fb074:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fb078:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001fb07c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fb080:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_001fb084:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fb088:;
    {
        cpu->r[14] = 0x001fb08cu; imp_memset(cpu); /* memset */
    }
L_001fb08c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xdu);
    }
L_001fb090:;
    {
        cpu->r[11] = 0x00000830u;
    }
L_001fb094:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001fb098:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fb09c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fb0a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001fb0a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001fb0a8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb120;
        }
    }
L_001fb0ac:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001fb0b0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fb0b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb0b8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_001fb0bc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001fb0c0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_001fb0c4:;
    {
        cpu->r[14] = 0x001fb0c8u; fn_001f862c(cpu);
    }
L_001fb0c8:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001fb0cc:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[0]);
    }
L_001fb0d0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_001fb0d4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001fb118;
        }
    }
L_001fb0d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001fb0dc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fb0e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fb0e4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xcu);
    }
L_001fb0e8:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001fb0ec:;
    {
        cpu->r[14] = 0x001fb0f0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001fb0f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fb0f4:;
    {
        wr8(cpu->r[11] + cpu->r[10], cpu->r[1]);
    }
L_001fb0f8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xcu);
    }
L_001fb0fc:;
    {
        cpu->r[14] = 0x001fb100u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fb100:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001fb104:;
    {
        goto L_001fb0d0;
    }
L_001fb108:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_001fb10c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001fb110:;
    {
        wr32(cpu->r[6] + + 0x74u, cpu->r[3]);
    }
L_001fb114:;
    {
        goto L_001f9a2c;
    }
L_001fb118:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fb11c:;
    {
        goto L_001fb08c;
    }
L_001fb120:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fb124:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001fb128:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fb12c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001fb130:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001fb134:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001fb138:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001fb13c:;
    {
        goto L_001faccc;
    }
L_001fb140:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001fb144:;
    {
        goto L_001f9c94;
    }
L_001fb148:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb14c:;
    {
        cpu->r[14] = 0x001fb150u; fn_001f8af4(cpu);
    }
L_001fb150:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fb154:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fb148;
        }
    }
L_001fb158:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fb15c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001fb160:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fb164:;
    {
        wr32(cpu->r[6] + + 0x3f0u, cpu->r[8]);
    }
L_001fb168:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001fb16c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb170:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001fb174:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001fb178:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb454;
        }
    }
L_001fb17c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x84u);
    }
L_001fb180:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb184:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fb188:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fb18c:;
    {
        cpu->r[14] = 0x001fb190u; fn_001f862c(cpu);
    }
L_001fb190:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x84u);
    }
L_001fb194:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fb198:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 1u, &shc); cpu->r[1] = v;
    }
L_001fb19c:;
    {
        wr32(cpu->r[7] + + 0x32cu, cpu->r[0]);
    }
L_001fb1a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb1a4:;
    {
        cpu->r[14] = 0x001fb1a8u; fn_001f862c(cpu);
    }
L_001fb1a8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001fb1ac:;
    {
        wr32(cpu->r[7] + + 0x3acu, cpu->r[0]);
    }
L_001fb1b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb1b4:;
    {
        cpu->r[14] = 0x001fb1b8u; fn_001f862c(cpu);
    }
L_001fb1b8:;
    {
        wr32(cpu->r[7] + + 0x3f0u, cpu->r[0]);
    }
L_001fb1bc:;
    {
        goto L_001fb16c;
    }
L_001fb1c0:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x8u);
    }
L_001fb1c4:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_001fb1c8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001fb1cc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fb1d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb2f4;
        }
    }
L_001fb1d4:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fb1d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb1dc:;
    {
        cpu->r[14] = 0x001fb1e0u; fn_001f8b50(cpu);
    }
L_001fb1e0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fb1e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb1e8:;
    {
        cpu->r[14] = 0x001fb1ecu; fn_001f8b50(cpu);
    }
L_001fb1ec:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fb1f0:;
    {
        wr8(cpu->r[10] + + 0x9u, cpu->r[0]);
    }
L_001fb1f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb1f8:;
    {
        cpu->r[14] = 0x001fb1fcu; fn_001f8b50(cpu);
    }
L_001fb1fc:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x9u);
    }
L_001fb200:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fb204:;
    {
        wr8(cpu->r[10] + + 0x18u, cpu->r[0]);
    }
L_001fb208:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x90u);
    }
L_001fb20c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001fb210:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9bc0;
        }
    }
L_001fb214:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x118u);
    }
L_001fb218:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fb21c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001fb220:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9bc0;
        }
    }
L_001fb224:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x8u);
    }
L_001fb228:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fb22c:;
    {
        goto L_001fb1cc;
    }
L_001fb230:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb234:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001fb238:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb1c0;
        }
    }
L_001fb23c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fb240:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fb244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fb248:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001fb24c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001fb250:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[12]);
    }
L_001fb254:;
    {
        goto L_001fb230;
    }
L_001fb258:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb25c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001fb260:;
    {
        cpu->r[14] = 0x001fb264u; fn_001f8b50(cpu);
    }
L_001fb264:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001fb268:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001fb26c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fb270:;
    {
        wr16(cpu->r[7], cpu->r[0]);
    }
L_001fb274:;
    {
        cpu->r[3] = rd16(cpu->r[7]);
    }
L_001fb278:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fb27c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001faf28;
        }
    }
L_001fb280:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb284:;
    {
        cpu->r[14] = 0x001fb288u; fn_001f77f0(cpu);
    }
L_001fb288:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fb28c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001fb290:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb294:;
    {
        cpu->r[14] = 0x001fb298u; fn_001f8b50(cpu);
    }
L_001fb298:;
    {
        wr8(cpu->r[11] + cpu->r[10], cpu->r[0]);
    }
L_001fb29c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb2a0:;
    {
        cpu->r[14] = 0x001fb2a4u; fn_001f77f0(cpu);
    }
L_001fb2a4:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fb2a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001fb2ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001fb2b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb2b4:;
    {
        cpu->r[14] = 0x001fb2b8u; fn_001f8b50(cpu);
    }
L_001fb2b8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[0]);
    }
L_001fb2bc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fb2c0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb2c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001fb2c8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[10]);
    }
L_001fb2cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001fb2d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f9bc0;
        }
    }
L_001fb2d4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_001fb2d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001fb2dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f9bc0;
        }
    }
L_001fb2e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fb2e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_001fb2e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9bc0;
        }
    }
L_001fb2ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fb2f0:;
    {
        goto L_001fb274;
    }
L_001fb2f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fb2f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000028u, 0, 0);
    }
L_001fb2fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fb300:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001fb304:;
    {
        goto L_001faea0;
    }
L_001fb308:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fb30c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001fb310:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fb314:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001fb318:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001fb31c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_001fb320:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001fb324:;
    {
        goto L_001fa73c;
    }
L_001fb328:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fb32c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001fb330:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb334:;
    {
        cpu->r[14] = 0x001fb338u; fn_001f86e4(cpu);
    }
L_001fb338:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x15u);
    }
L_001fb33c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001fb340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fa70c;
        }
    }
L_001fb344:;
    {
        goto L_001fab94;
    }
L_001fb348:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001fb34c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb350:;
    {
        cpu->r[14] = 0x001fb354u; fn_001f8b50(cpu);
    }
L_001fb354:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001fb358:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001fb35c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fb360:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fb364:;
    {
        wr8(cpu->r[4] + + 0x634u, cpu->r[0]);
    }
L_001fb368:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb36c:;
    {
        cpu->r[14] = 0x001fb370u; fn_001f8b50(cpu);
    }
L_001fb370:;
    {
        cpu->r[3] = 0x00000152u;
    }
L_001fb374:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001fb378:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[11]);
    }
L_001fb37c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000150u, 1, 0);
    }
L_001fb380:;
    {
        wr32(cpu->r[4] + + 0x638u, cpu->r[3]);
    }
L_001fb384:;
    {
        cpu->r[3] = 0x00000154u;
    }
L_001fb388:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001fb38c:;
    {
        wr8(cpu->r[4] + + 0x635u, cpu->r[0]);
    }
L_001fb390:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001fb394:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001fb398:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_001fb39c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001fb3a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb408;
        }
    }
L_001fb3a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001fb3a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fb3ac:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_001fb3b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001fb3b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_001fb3b8:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001fb3bc:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x1u);
    }
L_001fb3c0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001fb3c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb400;
        }
    }
L_001fb3c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x638u);
    }
L_001fb3cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb3d0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x635u);
    }
L_001fb3d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fb3d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001fb3dc:;
    {
        cpu->r[14] = 0x001fb3e0u; fn_001f8b50(cpu);
    }
L_001fb3e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fb3e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x638u);
    }
L_001fb3e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000a8u, 0, 0);
    }
L_001fb3ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fb3f0:;
    {
        wr32(cpu->r[4] + + 0x638u, cpu->r[2]);
    }
L_001fb3f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fb3f8:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_001fb3fc:;
    {
        goto L_001fb3bc;
    }
L_001fb400:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fb404:;
    {
        goto L_001fb398;
    }
L_001fb408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000150u, 0, 0);
    }
L_001fb40c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fb410:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001fb414:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001fb418:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001fb41c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001fb420:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001fb424:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001fb428:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x638u);
    }
L_001fb42c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001fb430:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001fb434:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb4e0;
        }
    }
L_001fb438:;
    {
        cpu->r[11] = rd16(cpu->r[0] + - 0x2u);
    }
L_001fb43c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fb440:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[2];
        wr16(cpu->r[1] + cpu->r[2], cpu->r[11]);
        cpu->r[1] = wb_tmp;
    }
L_001fb444:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001fb448:;
    {
        wr16(cpu->r[1] + + 0x2u, cpu->r[3]);
    }
L_001fb44c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fb450:;
    {
        goto L_001fb428;
    }
L_001fb454:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb458:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fb45c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x80u);
    }
L_001fb460:;
    {
        cpu->r[14] = 0x001fb464u; fn_001f96b0(cpu);
    }
L_001fb464:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001fb46c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb470:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fb474:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x84u);
    }
L_001fb478:;
    {
        cpu->r[14] = 0x001fb47cu; fn_001f96b0(cpu);
    }
L_001fb47c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f9a78;
        }
    }
L_001fb484:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x84u);
    }
L_001fb488:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fb48c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x80u);
    }
L_001fb490:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001fb494:;
    {
        cpu->r[11] = rd32(cpu->r[6] + + 0x118u);
    }
L_001fb498:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_001fb49c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001fb4a0:;
    {
        wr32(cpu->r[6] + + 0x7cu, cpu->r[3]);
    }
L_001fb4a4:;
    {
        wr32(cpu->r[6] + + 0x78u, cpu->r[2]);
    }
L_001fb4a8:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 1u, &shc); cpu->r[9] = v;
    }
L_001fb4ac:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 1);
    }
L_001fb4b0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb520;
        }
    }
L_001fb4b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x19cu);
    }
L_001fb4b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fb4bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001fb4c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001fb4c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001fb4c8:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001fb4cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001fb4d0:;
    {
        cpu->r[14] = 0x001fb4d4u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001fb4d4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001fb4d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001fb4dc:;
    {
        goto L_001fb4ac;
    }
L_001fb4e0:;
    {
        cpu->r[3] = rd32(0x001fb4e8u + + 0x138u);
    }
L_001fb4e4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001fb4e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fb4ec:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_001fb4f0:;
    {
        cpu->r[14] = 0x001fb4f4u; imp_qsort(cpu); /* qsort */
    }
L_001fb4f4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x638u);
    }
L_001fb4f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fb4fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fb500:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001fb504:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fb508:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb558;
        }
    }
L_001fb50c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001fb510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fb514:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x2u);
    }
L_001fb518:;
    {
        wr8(cpu->r[2] + + 0x345u, cpu->r[1]);
    }
L_001fb51c:;
    {
        goto L_001fb500;
    }
L_001fb520:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fb524:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fb528:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001fb52c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb530:;
    {
        wr8(cpu->r[6] + + 0x571u, cpu->r[7]);
    }
L_001fb534:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_001fb538:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fb53c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001fb540:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001fb544:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[6] + + 0xcu, cpu->r[9]);
        }
    }
L_001fb548:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
        }
    }
L_001fb54c:;
    {
        cpu->r[14] = 0x001fb550u; fn_001f8efc(cpu);
    }
L_001fb550:;
    {
        wr32(cpu->r[6] + + 0x34u, cpu->r[0]);
    }
L_001fb554:;
    {
        goto L_001f9a2c;
    }
L_001fb558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000154u, 0, 0);
    }
L_001fb55c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001fb560:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001fb564:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_001fb568:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb5d8;
        }
    }
L_001fb56c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fb570:;
    {
        cpu->r[4] = 0x00010000u;
    }
L_001fb574:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_001fb578:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fb57c:;
    {
        cpu->r[2] = rd16(cpu->r[5]);
    }
L_001fb580:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_001fb584:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001fb588:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fb5a4;
        }
    }
L_001fb58c:;
    {
        cpu->r[11] = rd16(cpu->r[3]);
    }
L_001fb590:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001fb594:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fb598:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[14] = cpu->r[2];
        }
    }
L_001fb59c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = cpu->r[1];
        }
    }
L_001fb5a0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_001fb5a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001fb5a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb5bc;
        }
    }
L_001fb5ac:;
    {
        cpu->r[11] = rd16(cpu->r[3]);
    }
L_001fb5b0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001fb5b4:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
        }
    }
L_001fb5b8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001fb5c0;
        }
    }
L_001fb5bc:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001fb5c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fb5c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fb5c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001fb5cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb604;
        }
    }
L_001fb5d0:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001fb5d4:;
    {
        goto L_001fb57c;
    }
L_001fb5d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fb5dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000630u, 0, 0);
    }
L_001fb5e0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fb5e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fb5e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001fb5ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_001fb5f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_001fb5f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001fb5f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001fb5fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_001fb600:;
    {
        goto L_001fa654;
    }
L_001fb604:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fb608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fb60c:;
    {
        wr8(cpu->r[3] + + 0x2eeu, cpu->r[1]);
    }
L_001fb610:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fb614:;
    {
        wr8(cpu->r[3] + + 0x2efu, cpu->r[2]);
    }
L_001fb618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001fb61c:;
    {
        goto L_001fb564;
    }
}

/* sub_001fb624 @ 001fb624 (arm) */
void fn_001fb624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fb624:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x118u);
    }
L_001fb628:;
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
L_001fb62c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb630:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fb634:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb6d0;
        }
    }
L_001fb638:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fb63c:;
    {
        cpu->r[7] = 0x00000830u;
    }
L_001fb640:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_001fb644:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x19cu);
    }
L_001fb648:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001fb64c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_001fb650:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fb654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb6b0;
        }
    }
L_001fb658:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0xdu);
    }
L_001fb65c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fb660:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fb664:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001fb668:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb66c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb6a8;
        }
    }
L_001fb670:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fb674:;
    {
        goto L_001fb67c;
    }
L_001fb678:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_001fb67c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001fb680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb684:;
    {
        cpu->r[14] = 0x001fb688u; fn_001f8728(cpu);
    }
L_001fb688:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0xdu);
    }
L_001fb68c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fb690:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fb694:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fb698:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001fb69c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001fb6a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb678;
        }
    }
L_001fb6a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_001fb6a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb6ac:;
    {
        cpu->r[14] = 0x001fb6b0u; fn_001f8728(cpu);
    }
L_001fb6b0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001fb6b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb6b8:;
    {
        cpu->r[14] = 0x001fb6bcu; fn_001f8728(cpu);
    }
L_001fb6bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_001fb6c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fb6c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001fb6c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001fb6cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb644;
        }
    }
L_001fb6d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fb6d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fb6d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fb6dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb768;
        }
    }
L_001fb6e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001fb6e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb6e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb760;
        }
    }
L_001fb6ec:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001fb6f0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001fb6f4:;
    {
        goto L_001fb6fc;
    }
L_001fb6f8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fb6fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001fb700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb704:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fb708:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000830u, 0, 0);
    }
L_001fb70c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fb710:;
    {
        cpu->r[14] = 0x001fb714u; fn_001f8728(cpu);
    }
L_001fb714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb718:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fb71c:;
    {
        cpu->r[14] = 0x001fb720u; fn_001f8728(cpu);
    }
L_001fb720:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb724:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x20u);
    }
L_001fb728:;
    {
        cpu->r[14] = 0x001fb72cu; fn_001f8728(cpu);
    }
L_001fb72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb730:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x824u);
    }
L_001fb734:;
    {
        cpu->r[14] = 0x001fb738u; fn_001f8728(cpu);
    }
L_001fb738:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x828u);
    }
L_001fb73c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb744:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001fb748:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001fb74c:;
    {
        cpu->r[14] = 0x001fb750u; fn_001f8728(cpu);
    }
L_001fb750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001fb754:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001fb758:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb6f8;
        }
    }
L_001fb75c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fb760:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb764:;
    {
        cpu->r[14] = 0x001fb768u; fn_001f8728(cpu);
    }
L_001fb768:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x114u);
    }
L_001fb76c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb770:;
    {
        cpu->r[14] = 0x001fb774u; fn_001f8728(cpu);
    }
L_001fb774:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb778:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x19cu);
    }
L_001fb77c:;
    {
        cpu->r[14] = 0x001fb780u; fn_001f8728(cpu);
    }
L_001fb780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1a0u);
    }
L_001fb784:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb788:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb7bc;
        }
    }
L_001fb78c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fb790:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001fb794:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1a4u);
    }
L_001fb798:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb79c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fb7a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001fb7a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000028u, 0, 0);
    }
L_001fb7a8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001fb7ac:;
    {
        cpu->r[14] = 0x001fb7b0u; fn_001f8728(cpu);
    }
L_001fb7b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1a0u);
    }
L_001fb7b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001fb7b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb794;
        }
    }
L_001fb7bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb7c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1a4u);
    }
L_001fb7c4:;
    {
        cpu->r[14] = 0x001fb7c8u; fn_001f8728(cpu);
    }
L_001fb7c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fb7cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb7d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb814;
        }
    }
L_001fb7d4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001fb7d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001fb7dc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x330u);
    }
L_001fb7e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb7e4:;
    {
        cpu->r[14] = 0x001fb7e8u; fn_001f8728(cpu);
    }
L_001fb7e8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3b0u);
    }
L_001fb7ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb7f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fb7f4:;
    {
        cpu->r[14] = 0x001fb7f8u; fn_001f8728(cpu);
    }
L_001fb7f8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3f4u);
    }
L_001fb7fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb800:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001fb804:;
    {
        cpu->r[14] = 0x001fb808u; fn_001f8728(cpu);
    }
L_001fb808:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fb80c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001fb810:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb7dc;
        }
    }
L_001fb814:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x43cu);
    }
L_001fb818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb81c:;
    {
        cpu->r[14] = 0x001fb820u; fn_001f8728(cpu);
    }
L_001fb820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb824:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x444u);
    }
L_001fb828:;
    {
        cpu->r[14] = 0x001fb82cu; fn_001f8728(cpu);
    }
L_001fb82c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb830:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44cu);
    }
L_001fb834:;
    {
        cpu->r[14] = 0x001fb838u; fn_001f8728(cpu);
    }
L_001fb838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb83c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x454u);
    }
L_001fb840:;
    {
        cpu->r[14] = 0x001fb844u; fn_001f8728(cpu);
    }
L_001fb844:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb848:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x45cu);
    }
L_001fb84c:;
    {
        cpu->r[14] = 0x001fb850u; fn_001f8728(cpu);
    }
L_001fb850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb854:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x440u);
    }
L_001fb858:;
    {
        cpu->r[14] = 0x001fb85cu; fn_001f8728(cpu);
    }
L_001fb85c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb860:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x448u);
    }
L_001fb864:;
    {
        cpu->r[14] = 0x001fb868u; fn_001f8728(cpu);
    }
L_001fb868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb86c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x450u);
    }
L_001fb870:;
    {
        cpu->r[14] = 0x001fb874u; fn_001f8728(cpu);
    }
L_001fb874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb878:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x458u);
    }
L_001fb87c:;
    {
        cpu->r[14] = 0x001fb880u; fn_001f8728(cpu);
    }
L_001fb880:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb884:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x460u);
    }
L_001fb888:;
    {
        cpu->r[14] = 0x001fb88cu; fn_001f8728(cpu);
    }
L_001fb88c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001fb890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb894:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fb898u)) return;
        }
    }
L_001fb898:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001fb89c:;
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
L_001fb8a0:;
    {
        return fn_001d9ad8(cpu);
    }
}

/* _Z16stb_vorbis_closeP10stb_vorbis @ 001fb8a4 (arm) */
void fn_001fb8a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fb8a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001fb8a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb8ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001fb8b0u)) return;
        }
    }
L_001fb8b0:;
    {
        cpu->r[14] = 0x001fb8b4u; fn_001fb624(cpu);
    }
L_001fb8b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb8b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001fb8bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001fb8c0:;
    {
        return fn_001f8728(cpu);
    }
}

/* sub_001fb8c4 @ 001fb8c4 (arm) */
void fn_001fb8c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fb8c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x584u);
    }
L_001fb8c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001fb8cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000018u, 1, 1);
    }
L_001fb8d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fb8d4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001fb8d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb92c;
        }
    }
L_001fb8dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb8e0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x580u, cpu->r[3]);
        }
    }
L_001fb8e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fb8e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fb8ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb8f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb900;
        }
    }
L_001fb8f4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fb8f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fb8fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb92c;
        }
    }
L_001fb900:;
    {
        cpu->r[14] = 0x001fb904u; fn_001f8af4(cpu);
    }
L_001fb904:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fb908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb92c;
        }
    }
L_001fb90c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fb910:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fb914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fb918:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fb91c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fb920:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fb924:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[0]);
    }
L_001fb928:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb8e4;
        }
    }
L_001fb92c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_001fb930:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_001fb934:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb9ac;
        }
    }
L_001fb938:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x824u);
    }
L_001fb93c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb940:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001fb944:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb948:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fb9c0;
        }
    }
L_001fb94c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fb950:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fb994;
        }
    }
L_001fb954:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fb958:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_001fb95c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[0]);
    }
L_001fb960:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001fb964:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fb968:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001fb96c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb988;
        }
    }
L_001fb970:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x20u);
    }
L_001fb974:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fb978:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001fb97c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[2] = v;
    }
L_001fb980:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001fb984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fba50;
        }
    }
L_001fb988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fb98c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001fb990:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fb95c;
        }
    }
L_001fb994:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_001fb998:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001fb99c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001fb9a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fb9a4:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fb9a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fb9acu)) return;
    }
L_001fb9ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_001fb9b0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001fb9b4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001fb9b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fb9bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fb94c;
        }
    }
L_001fb9c0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fb9c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fb9c8:;
    {
        cpu->r[14] = 0x001fb9ccu; fn_001f7774(cpu);
    }
L_001fb9cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x82cu);
    }
L_001fb9d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001fb9d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001fb9d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fb9dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001fb9e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fba14;
        }
    }
L_001fb9e4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x824u);
    }
L_001fb9e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001fb9ec:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001fb9f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001fb9f4:;
    {
        cpu->r[12] = rd32(cpu->r[8] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001fb9f8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_001fb9fc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001fba00:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_001fba04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001fba08:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001fba0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fb9ec;
        }
    }
L_001fba10:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001fba14:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x17u);
    }
L_001fba18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fba1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fba20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x828u);
        }
    }
L_001fba24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_001fba28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fba2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001fba30:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001fba34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001fba38:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fba74;
        }
    }
L_001fba3c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001fba40:;
    {
        uint32_t v = shifter(cpu->r[6], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fba44:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fba48:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fba4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fba50u)) return;
    }
L_001fba50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fba54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fba58:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fba74;
        }
    }
L_001fba5c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fba60:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fba64:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[0]);
    }
L_001fba68:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001fba6c:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fba70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fba74u)) return;
    }
L_001fba74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fba78:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001fba7c:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fba80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fba84u)) return;
    }
}
