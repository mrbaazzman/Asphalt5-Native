#include "functions.h"

/* _ZN3vox13DecoderNative26CreateTransitionsContainerEi @ 001d7124 (arm) */
void fn_001d7124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d7124:;
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
L_001d7128:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001d712c:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x64u);
    }
L_001d7130:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d7134:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d7138:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001d713c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001d7140:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d7148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d714c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d7150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d7154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d7158:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001d715c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_001d7160:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
        }
    }
L_001d7164:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
        }
    }
L_001d7168:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d72fc;
        }
    }
L_001d716c:;
    {
        cpu->r[3] = 0x00005555u;
    }
L_001d7170:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1555u << 16);
    }
L_001d7174:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d7178:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d73e4;
        }
    }
L_001d717c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d7180:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d7184:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x68u);
    }
L_001d7188:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001d718c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7190:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d7194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001d7198:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d719c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001d71a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d71a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001d71a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001d71ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d73fc;
        }
    }
L_001d71b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001d71b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d71b8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_001d71bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_001d71c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d71c4:;
    {
        cpu->r[14] = 0x001d71c8u; fn_00097dd0(cpu);
    }
L_001d71c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d71cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d71d0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d71d4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001d71d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d7290;
        }
    }
L_001d71dc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d71e0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d71e4:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001d71e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_001d71ec:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_001d71f0:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001d71f4:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[6]);
    }
L_001d71f8:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x4u);
    }
L_001d71fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7200:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[4];
        wr32(cpu->r[5] + cpu->r[4], cpu->r[6]);
        cpu->r[5] = wb_tmp;
    }
L_001d7204:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001d7208:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_001d720c:;
    {
        uint32_t v = cpu->r[10] & ~ 0x00000007u; cpu->r[10] = v;
    }
L_001d7210:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d7214:;
    {
        cpu->r[14] = 0x001d7218u; fn_00097dd0(cpu);
    }
L_001d7218:;
    {
        wr32(cpu->r[11] + cpu->r[4], cpu->r[0]);
    }
L_001d721c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d7220:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001d7224:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d7228:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_001d722c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d7230:;
    {
        cpu->r[8] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_001d7234:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[10]);
    }
L_001d7238:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_001d723c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[10] = v;
    }
L_001d7240:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d7244:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d7274;
        }
    }
L_001d7248:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d724c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001d7250:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001d7254:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001d7258:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d725c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d7260:;
    {
        wr32(cpu->r[12] + cpu->r[3], cpu->r[0]);
    }
L_001d7264:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d7268:;
    {
        wr8(cpu->r[14] + + 0x4u, cpu->r[1]);
    }
L_001d726c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7250;
        }
    }
L_001d7270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001d7274:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7278:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001d727c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001d7280:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001d7284:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d7288:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
        }
    }
L_001d728c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d71e8;
        }
    }
L_001d7290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d7294:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x68u);
    }
L_001d7298:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x64u);
    }
L_001d729c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d72a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d72c8;
        }
    }
L_001d72a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d72a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d72ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d72b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d72b8;
        }
    }
L_001d72b4:;
    {
        cpu->r[14] = 0x001d72b8u; fn_00097dc8(cpu);
    }
L_001d72b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d72bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d72a4;
        }
    }
L_001d72c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d72c4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x64u);
    }
L_001d72c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d72cc:;
    {
        cpu->r[14] = 0x001d72d0u; fn_00097dc8(cpu);
    }
L_001d72d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d72d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d72d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d72dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d72e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001d72e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d72e8:;
    {
        wr32(cpu->r[1] + + 0x6cu, cpu->r[2]);
    }
L_001d72ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d72f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d72f4:;
    {
        wr32(cpu->r[1] + + 0x68u, cpu->r[3]);
    }
L_001d72f8:;
    {
        wr32(cpu->r[1] + + 0x64u, cpu->r[2]);
    }
L_001d72fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d7300:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d7304:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d7308:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d730c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000064u, 0, 0);
    }
L_001d7310:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_001d7314:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_001d7318:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001d731c:;
    {
        cpu->r[14] = 0x001d7320u; fn_00097dd0(cpu);
    }
L_001d7320:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d7324:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001d7328:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d732c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_001d7330:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001d7334:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_001d7338:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_001d733c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7340:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001d7344:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 4u, &shc), 0, 0);
    }
L_001d7348:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 8u, &shc), 0, 0);
    }
L_001d734c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 16u, &shc), 0, 0);
    }
L_001d7350:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001d7354:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d7358:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d738c;
        }
    }
L_001d735c:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_001d7360:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d7364:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d7368:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d736c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d7370:;
    {
        cpu->r[14] = 0x001d7374u; fn_00097dd0(cpu);
    }
L_001d7374:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d7378:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d737c:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001d7380:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d7384:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001d7388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d735c;
        }
    }
L_001d738c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d7390:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d7394:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_001d7398:;
    {
        cpu->r[14] = 0x001d739cu; fn_001d6d30(cpu);
    }
L_001d739c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d73a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d73a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001d73a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d73cc;
        }
    }
L_001d73ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001d73b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001d73b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d73b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d73c0;
        }
    }
L_001d73bc:;
    {
        cpu->r[14] = 0x001d73c0u; fn_00097dc8(cpu);
    }
L_001d73c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001d73c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d73ac;
        }
    }
L_001d73c8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d73cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d73d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d73dc;
        }
    }
L_001d73d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d73d8:;
    {
        cpu->r[14] = 0x001d73dcu; fn_00097dc8(cpu);
    }
L_001d73dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d73e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d73e4u)) return;
    }
L_001d73e4:;
    {
        cpu->r[0] = rd32(0x001d73ecu + + 0x30u);
    }
L_001d73e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d73f0u, cpu->r[0], 0, 0);
    }
L_001d73ec:;
    {
        cpu->r[14] = 0x001d73f0u; fn_00208298(cpu);
    }
L_001d73f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d73f4:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x64u);
    }
L_001d73f8:;
    {
        goto L_001d717c;
    }
L_001d73fc:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001d7400:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d7404:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_001d7408:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d740c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d7410:;
    {
        cpu->r[14] = 0x001d7414u; fn_00097dd0(cpu);
    }
L_001d7414:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001d7418:;
    {
        goto L_001d72d0;
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_13StringCompareESt4pairIKS7_iENS_10_Select1stISB_EENS_11_MapTraitsTISB_EENS4_ISB_LS5_0EEEE13insert_uniqueERKSB_ @ 001d7420 (arm) */
void fn_001d7420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d7420:;
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
L_001d7424:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d7428:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001d742c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d7430:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d7434:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001d7438:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d743c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_001d7440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7518;
        }
    }
L_001d7444:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x14u);
    }
L_001d7448:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d744c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001d7450:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d7454:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d7458:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d745c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d7460:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d7464:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001d7468:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001d746c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_001d7470:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d7474:;
    {
        cpu->r[14] = 0x001d7478u; imp_memcmp(cpu); /* memcmp */
    }
L_001d7478:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d747c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7494;
        }
    }
L_001d7484:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001d7488:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d748c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d7490:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d74b4;
        }
    }
L_001d7494:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7498:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d74b4;
        }
    }
L_001d749c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d74a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d74a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d74a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d74c0;
        }
    }
L_001d74ac:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001d74b0:;
    {
        goto L_001d7450;
    }
L_001d74b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d74b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d74bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d74ac;
        }
    }
L_001d74c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d74c4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
        }
    }
L_001d74c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7518;
        }
    }
L_001d74cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d74d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d74d4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d74d8:;
    {
        cpu->r[14] = 0x001d74dcu; imp_memcmp(cpu); /* memcmp */
    }
L_001d74dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d74e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d74f4;
        }
    }
L_001d74e4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001d74e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d7590;
        }
    }
L_001d74ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d74f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d74f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d74f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d7590;
        }
    }
L_001d74fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d7500:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_001d7504:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d7508:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_001d750c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001d7510:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d7514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d7518u)) return;
    }
L_001d7518:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d751c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001d7520:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d7524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7628;
        }
    }
L_001d7528:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_001d752c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7544;
        }
    }
L_001d7534:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d7538:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d753c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d7540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7614;
        }
    }
L_001d7544:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7548:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d754c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7558;
        }
    }
L_001d7550:;
    {
        goto L_001d75c4;
    }
L_001d7554:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d7558:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001d755c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7560:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7554;
        }
    }
L_001d7564:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_001d7568:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_001d756c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x24u);
    }
L_001d7570:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x20u);
    }
L_001d7574:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001d7578:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d757c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d7580:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001d7584:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_001d7588:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001d758c:;
    {
        goto L_001d74cc;
    }
L_001d7590:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001d7594:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d7598:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d759c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d75a0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d75a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d75a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d75ac:;
    {
        cpu->r[14] = 0x001d75b0u; fn_001d60e8(cpu);
    }
L_001d75b0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d75b4:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_001d75b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d75bc:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_001d75c0:;
    {
        goto L_001d750c;
    }
L_001d75c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d75c8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_001d75cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d75d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7564;
        }
    }
L_001d75d4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001d75d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d75dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001d75e0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d75e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d75d4;
        }
    }
L_001d75e8:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_001d75ec:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_001d75f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d75f4:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x24u);
    }
L_001d75f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_001d75fc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x20u);
    }
L_001d7600:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d7604:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001d7608:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_001d760c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001d7610:;
    {
        goto L_001d74cc;
    }
L_001d7614:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d7618:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x14u);
    }
L_001d761c:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x10u);
    }
L_001d7620:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d7624:;
    {
        goto L_001d75f4;
    }
L_001d7628:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001d762c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001d7630:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d7634:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d7638:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d763c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001d7640:;
    {
        cpu->r[14] = 0x001d7644u; fn_001d60e8(cpu);
    }
L_001d7644:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d7648:;
    {
        wr8(cpu->r[11] + + 0x4u, cpu->r[3]);
    }
L_001d764c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d7650:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_001d7654:;
    {
        goto L_001d750c;
    }
}

/* _ZN3vox19DecoderNativeCursor24SetInteractiveMusicStateEPKc @ 001d7658 (arm) */
void fn_001d7658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d7658:;
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
L_001d765c:;
    {
        cpu->r[11] = rd32(0x001d7664u + + 0x1c8u);
    }
L_001d7660:;
    {
        cpu->r[2] = rd32(0x001d7668u + + 0x1c8u);
    }
L_001d7664:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001d7668:;
    {
        cpu->r[11] = add_flags(cpu, 0x001d7670u, cpu->r[11], 0, 0);
    }
L_001d766c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_001d7670:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001d7674:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d7678:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001d767c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d7680:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001d7684:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d7688:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d768c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d7690:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001d7694:;
    {
        cpu->r[14] = 0x001d7698u; fn_001ebcfc(cpu);
    }
L_001d7698:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d769c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_001d76a0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_001d76a4:;
    {
        cpu->r[14] = 0x001d76a8u; imp_strlen(cpu); /* strlen */
    }
L_001d76a8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001d76ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d76b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001d76b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d76b8:;
    {
        cpu->r[14] = 0x001d76bcu; fn_001d55a8(cpu);
    }
L_001d76bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d76c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d76c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d76d8;
        }
    }
L_001d76c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d76cc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d76d0:;
    {
        cpu->r[14] = 0x001d76d4u; imp_memcpy(cpu); /* memcpy */
    }
L_001d76d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001d76d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d76dc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001d76e0:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_001d76e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d76e8:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x38u);
    }
L_001d76ec:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0x4u);
    }
L_001d76f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d76f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7820;
        }
    }
L_001d76f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d76fc:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001d7700:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d7704:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 0);
    }
L_001d7708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d770c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d7710:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d7714:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d7718:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001d771c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d7720:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001d7724:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001d7728:;
    {
        cpu->r[14] = 0x001d772cu; imp_memcmp(cpu); /* memcmp */
    }
L_001d772c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7730:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7754;
        }
    }
L_001d7734:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d7738:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d7758;
        }
    }
L_001d773c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7768;
        }
    }
L_001d7748:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001d774c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d7750:;
    {
        goto L_001d7708;
    }
L_001d7754:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d773c;
        }
    }
L_001d7758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d775c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001d7760:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7748;
        }
    }
L_001d7768:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001d776c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d77dc;
        }
    }
L_001d7770:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d7774:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d7778:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d777c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001d7780:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001d7784:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d7788:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001d778c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001d7790:;
    {
        cpu->r[14] = 0x001d7794u; imp_memcmp(cpu); /* memcmp */
    }
L_001d7794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d781c;
        }
    }
L_001d779c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d77a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d7820;
        }
    }
L_001d77a4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001d77a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d77dc;
        }
    }
L_001d77ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d77b0:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001d77b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d77b8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x40u);
    }
L_001d77bc:;
    {
        cpu->r[14] = 0x001d77c0u; fn_00097dd0(cpu);
    }
L_001d77c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d77c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d77c8:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_001d77cc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001d77d0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001d77d4:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d77d8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001d77dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d77e0:;
    {
        cpu->r[14] = 0x001d77e4u; fn_001ebcf8(cpu);
    }
L_001d77e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d77e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001d77ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d77fc;
        }
    }
L_001d77f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d77f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d77fc;
        }
    }
L_001d77f8:;
    {
        cpu->r[14] = 0x001d77fcu; fn_00097dc8(cpu);
    }
L_001d77fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d7800:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001d7804:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001d7808:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d780c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d7810:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7828;
        }
    }
L_001d7814:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001d7818:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d781cu)) return;
    }
L_001d781c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d77a4;
        }
    }
L_001d7820:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_001d7824:;
    {
        goto L_001d77a4;
    }
L_001d7828:;
    {
        cpu->r[14] = 0x001d782cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d782c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 27u, &shc); cpu->r[2] = v;
        }
    }
L_001d7830:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_13StringCompareESt4pairIKS7_iENS_10_Select1stISB_EENS_11_MapTraitsTISB_EENS4_ISB_LS5_0EEEE13insert_uniqueENS_17_Rb_tree_iteratorISB_SF_EERKSB_ @ 001d7834 (arm) */
void fn_001d7834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d7834:;
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
L_001d7838:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001d783c:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001d7840:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_001d7844:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_001d7848:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d784c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001d7850:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d7854:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001d7858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7a48;
        }
    }
L_001d785c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001d7860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7ba4;
        }
    }
L_001d7864:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001d7868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d786c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7948;
        }
    }
L_001d7870:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d7874:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d7878:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7884;
        }
    }
L_001d787c:;
    {
        goto L_001d7968;
    }
L_001d7880:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d7884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d7888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d788c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7880;
        }
    }
L_001d7890:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001d7894:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d7898:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d789c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001d78a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x20u);
    }
L_001d78a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d78a8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001d78ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d78b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001d78b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001d78b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001d78bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_001d78c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001d78c4:;
    {
        cpu->r[14] = 0x001d78c8u; imp_memcmp(cpu); /* memcmp */
    }
L_001d78c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d78cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d78d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d78ec;
        }
    }
L_001d78d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d78d8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001d78dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d78e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d78ec;
        }
    }
L_001d78e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d78e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d78ec:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_001d78f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7990;
        }
    }
L_001d78f4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_001d78f8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d78fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7908;
        }
    }
L_001d7900:;
    {
        goto L_001d7c38;
    }
L_001d7904:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001d7908:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d790c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d7910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7904;
        }
    }
L_001d7914:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d7918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7a24;
        }
    }
L_001d791c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d7920:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d7924:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d7928:;
    {
        cpu->r[14] = 0x001d792cu; imp_memcmp(cpu); /* memcmp */
    }
L_001d792c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7a00;
        }
    }
L_001d7934:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d7938:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001d793c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d7a04;
        }
    }
L_001d7940:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_001d7944:;
    {
        goto L_001d7a3c;
    }
L_001d7948:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d794c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d7950:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001d7954:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
        }
    }
L_001d7958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7890;
        }
    }
L_001d795c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d7960:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d7964:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7884;
        }
    }
L_001d7968:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d796c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7970:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001d7974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7890;
        }
    }
L_001d7978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d797c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d7980:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001d7984:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d7988:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7978;
        }
    }
L_001d798c:;
    {
        goto L_001d7890;
    }
L_001d7990:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d7994:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d7998:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d799c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d79a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001d79a4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001d79a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001d79ac:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_001d79b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_001d79b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001d79b8:;
    {
        cpu->r[14] = 0x001d79bcu; imp_memcmp(cpu); /* memcmp */
    }
L_001d79bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d79c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d79c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d79c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7b90;
        }
    }
L_001d79cc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_001d79d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d78f4;
        }
    }
L_001d79d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d79d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d79dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7b70;
        }
    }
L_001d79e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d79e4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d79e8:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d79ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d79f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d79f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001d79f8:;
    {
        cpu->r[14] = 0x001d79fcu; fn_001d60e8(cpu);
    }
L_001d79fc:;
    {
        goto L_001d7a3c;
    }
L_001d7a00:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d7940;
        }
    }
L_001d7a04:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001d7a08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7c84;
        }
    }
L_001d7a0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_001d7a10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d7a14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001d7a18:;
    {
        cpu->r[14] = 0x001d7a1cu; fn_001d55f4(cpu);
    }
L_001d7a1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7a20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7c7c;
        }
    }
L_001d7a24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7a28:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7a2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001d7a30:;
    {
        cpu->r[14] = 0x001d7a34u; fn_001d7420(cpu);
    }
L_001d7a34:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d7a38:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001d7a3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7a40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001d7a44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d7a48u)) return;
    }
L_001d7a48:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_001d7a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7a50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7cdc;
        }
    }
L_001d7a54:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d7a58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001d7a5c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d7a60:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d7a64:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x20u);
    }
L_001d7a68:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001d7a6c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_001d7a70:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001d7a74:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001d7a78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001d7a7c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001d7a80:;
    {
        cpu->r[14] = 0x001d7a84u; imp_memcmp(cpu); /* memcmp */
    }
L_001d7a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7a88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7a9c;
        }
    }
L_001d7a8c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001d7a90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d79e0;
        }
    }
L_001d7a94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d7a98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d7a9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7aa0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d79e0;
        }
    }
L_001d7aa4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_001d7aa8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_001d7aac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d7ab0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7ab4:;
    {
        cpu->r[14] = 0x001d7ab8u; fn_001d55f4(cpu);
    }
L_001d7ab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7ccc;
        }
    }
L_001d7ac0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d7ac4:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001d7ac8:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0xcu);
    }
L_001d7acc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d7ad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7b60;
        }
    }
L_001d7ad4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_001d7ad8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001d7adc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001d7ae0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[12];
        }
    }
L_001d7ae4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7afc;
        }
    }
L_001d7ae8:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d7aec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d7af0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001d7af4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001d7af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7ae8;
        }
    }
L_001d7afc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d7b00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d7b04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_001d7b08:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001d7b0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7d14;
        }
    }
L_001d7b10:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d7b14:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d7b18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001d7b1c:;
    {
        cpu->r[14] = 0x001d7b20u; fn_001d55f4(cpu);
    }
L_001d7b20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7cb0;
        }
    }
L_001d7b28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d7b2c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001d7b30:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0xcu);
    }
L_001d7b34:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001d7b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7cf4;
        }
    }
L_001d7b3c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7b40:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d7b44:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7b48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7b4c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d7b50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001d7b54:;
    {
        cpu->r[14] = 0x001d7b58u; fn_001d60e8(cpu);
    }
L_001d7b58:;
    {
        goto L_001d7a3c;
    }
L_001d7b5c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d7b60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7b64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d7b68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7b5c;
        }
    }
L_001d7b6c:;
    {
        goto L_001d7b08;
    }
L_001d7b70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7b74:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d7b78:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7b7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7b80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d7b84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001d7b88:;
    {
        cpu->r[14] = 0x001d7b8cu; fn_001d60e8(cpu);
    }
L_001d7b8c:;
    {
        goto L_001d7a3c;
    }
L_001d7b90:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d78f4;
        }
    }
L_001d7b94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d7b98:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d7b9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d79e0;
        }
    }
L_001d7ba0:;
    {
        goto L_001d7b70;
    }
L_001d7ba4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0xcu);
    }
L_001d7ba8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x14u);
    }
L_001d7bac:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x10u);
    }
L_001d7bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d7bb4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001d7bb8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d7bbc:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001d7bc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d7bc4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001d7bc8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001d7bcc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_001d7bd0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_001d7bd4:;
    {
        cpu->r[14] = 0x001d7bd8u; imp_memcmp(cpu); /* memcmp */
    }
L_001d7bd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7bdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7bf0;
        }
    }
L_001d7be0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_001d7be4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d7bf8;
        }
    }
L_001d7be8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d7bec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d7bf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d7bf4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d7c1c;
        }
    }
L_001d7bf8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7bfc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d7c00:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7c04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7c08:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d7c0c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001d7c10:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d7c14:;
    {
        cpu->r[14] = 0x001d7c18u; fn_001d60e8(cpu);
    }
L_001d7c18:;
    {
        goto L_001d7a3c;
    }
L_001d7c1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7c20:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7c24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001d7c28:;
    {
        cpu->r[14] = 0x001d7c2cu; fn_001d7420(cpu);
    }
L_001d7c2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d7c30:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001d7c34:;
    {
        goto L_001d7a3c;
    }
L_001d7c38:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d7c3c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001d7c40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001d7c44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[5];
        }
    }
L_001d7c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7c60;
        }
    }
L_001d7c4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d7c50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001d7c54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_001d7c58:;
    {
        goto L_001d7914;
    }
L_001d7c5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d7c60:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_001d7c64:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0xcu);
    }
L_001d7c68:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001d7c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7c5c;
        }
    }
L_001d7c70:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001d7c74:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d7c78:;
    {
        goto L_001d7c4c;
    }
L_001d7c7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d7c80:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001d7c84:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001d7c88:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d7c8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7b3c;
        }
    }
L_001d7c90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7c94:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d7c98:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7c9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7ca0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d7ca4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001d7ca8:;
    {
        cpu->r[14] = 0x001d7cacu; fn_001d60e8(cpu);
    }
L_001d7cac:;
    {
        goto L_001d7a3c;
    }
L_001d7cb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7cb4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7cb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001d7cbc:;
    {
        cpu->r[14] = 0x001d7cc0u; fn_001d7420(cpu);
    }
L_001d7cc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d7cc4:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001d7cc8:;
    {
        goto L_001d7a3c;
    }
L_001d7ccc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d7cd0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d7cd4:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001d7cd8:;
    {
        goto L_001d7a3c;
    }
L_001d7cdc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d7ce0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001d7ce4:;
    {
        cpu->r[14] = 0x001d7ce8u; fn_001d7420(cpu);
    }
L_001d7ce8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d7cec:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001d7cf0:;
    {
        goto L_001d7a3c;
    }
L_001d7cf4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7cf8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001d7cfc:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7d00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7d04:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001d7d08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d7d0c:;
    {
        cpu->r[14] = 0x001d7d10u; fn_001d60e8(cpu);
    }
L_001d7d10:;
    {
        goto L_001d7a3c;
    }
L_001d7d14:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001d7d18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d7d1c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001d7d20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d7d24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d7d28:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d7d2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d7d30:;
    {
        cpu->r[14] = 0x001d7d34u; fn_001d60e8(cpu);
    }
L_001d7d34:;
    {
        goto L_001d7a3c;
    }
}

/* _ZN3vox19DecoderNativeCursor22SetImplicitSegmentCuesEv @ 001d7d38 (arm) */
void fn_001d7d38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d7d38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001d7d3c:;
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
L_001d7d40:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d7d44:;
    {
        cpu->r[9] = rd32(cpu->r[3]);
    }
L_001d7d48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001d7d4c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d7d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d7e60;
        }
    }
L_001d7d54:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d7d58:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001d7d5c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001d7d60:;
    {
        goto L_001d7d78;
    }
L_001d7d64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d7d68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d7d6c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001d7d70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001d7d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7e60;
        }
    }
L_001d7d78:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x34u);
    }
L_001d7d7c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001d7d80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001d7d84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001d7d88:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d7d8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001d7d90:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7d94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d7d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7e68;
        }
    }
L_001d7d9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001d7da0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[8] + + 0x24u);
        }
    }
L_001d7da4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d7e8c;
        }
    }
L_001d7da8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d7dac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7db0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001d7db4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001d7db8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x8u);
    }
L_001d7dbc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_001d7dc0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[10]);
        cpu->r[11] = wb_tmp;
        }
    }
L_001d7dc4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
        }
    }
L_001d7dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7d64;
        }
    }
L_001d7dcc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d7dd0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001d7dd4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7dd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d7ddc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001d7de0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001d7de4:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001d7de8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d7dfc;
        }
    }
L_001d7dec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d7df0:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001d7df4:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001d7df8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d7e04;
        }
    }
L_001d7dfc:;
    {
        cpu->r[1] = (~0x00000003u);
    }
L_001d7e00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d7e04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d7e08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7e0c:;
    {
        cpu->r[14] = 0x001d7e10u; fn_00097dd0(cpu);
    }
L_001d7e10:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7e14:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001d7e18:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d7e1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001d7e20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7ec4;
        }
    }
L_001d7e24:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d7e28:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[10]);
        cpu->r[11] = wb_tmp;
    }
L_001d7e2c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001d7e30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d7e34:;
    {
        cpu->r[14] = 0x001d7e38u; fn_00097dc8(cpu);
    }
L_001d7e38:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001d7e3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7e40:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001d7e44:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
    }
L_001d7e48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d7e4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001d7e50:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001d7e54:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001d7e58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001d7e5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7d78;
        }
    }
L_001d7e60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d7e64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d7e68u)) return;
    }
L_001d7e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7e6c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001d7e70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d7e74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[0]);
        cpu->r[11] = wb_tmp;
        }
    }
L_001d7e78:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
        }
    }
L_001d7e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7fb4;
        }
    }
L_001d7e80:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_001d7e84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001d7e88:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d7e8c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x24u);
    }
L_001d7e90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d7e94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d7e98:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_001d7e9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001d7ea0:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_001d7ea4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_001d7ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7ee0;
        }
    }
L_001d7eac:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001d7eb0:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[10]);
        cpu->r[11] = wb_tmp;
    }
L_001d7eb4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
    }
L_001d7eb8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001d7ebc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d7ec0:;
    {
        goto L_001d7da8;
    }
L_001d7ec4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d7ec8:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001d7ecc:;
    {
        cpu->r[14] = 0x001d7ed0u; imp_memmove(cpu); /* memmove */
    }
L_001d7ed0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7ed4:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001d7ed8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001d7edc:;
    {
        goto L_001d7e24;
    }
L_001d7ee0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d7ee4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001d7ee8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d7eec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d7ef0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001d7ef4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001d7ef8:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001d7efc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d7f68;
        }
    }
L_001d7f00:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_001d7f04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d7f08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d7f0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7f10:;
    {
        cpu->r[14] = 0x001d7f14u; fn_00097dd0(cpu);
    }
L_001d7f14:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7f18:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001d7f1c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d7f20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001d7f24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7f98;
        }
    }
L_001d7f28:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d7f2c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[10]);
        cpu->r[11] = wb_tmp;
    }
L_001d7f30:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001d7f34:;
    {
        cpu->r[14] = 0x001d7f38u; fn_00097dc8(cpu);
    }
L_001d7f38:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x34u);
    }
L_001d7f3c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001d7f40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7f44:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001d7f48:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
    }
L_001d7f4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001d7f50:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001d7f54:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_001d7f58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001d7f5c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x24u);
    }
L_001d7f60:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d7f64:;
    {
        goto L_001d7da8;
    }
L_001d7f68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d7f6c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001d7f70:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001d7f74:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d7f00;
        }
    }
L_001d7f78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d7f7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d7f80:;
    {
        cpu->r[14] = 0x001d7f84u; fn_00097dd0(cpu);
    }
L_001d7f84:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7f88:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001d7f8c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d7f90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001d7f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d7f28;
        }
    }
L_001d7f98:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d7f9c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001d7fa0:;
    {
        cpu->r[14] = 0x001d7fa4u; imp_memmove(cpu); /* memmove */
    }
L_001d7fa4:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7fa8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001d7fac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001d7fb0:;
    {
        goto L_001d7f28;
    }
L_001d7fb4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d7fb8:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001d7fbc:;
    {
        cpu->r[14] = 0x001d7fc0u; fn_00097dd0(cpu);
    }
L_001d7fc0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d7fc4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001d7fc8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001d7fcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001d7fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d7ffc;
        }
    }
L_001d7fd4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d7fd8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d7fdc:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[1]);
        cpu->r[11] = wb_tmp;
    }
L_001d7fe0:;
    {
        cpu->r[14] = 0x001d7fe4u; fn_00097dc8(cpu);
    }
L_001d7fe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001d7fe8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[11]);
    }
L_001d7fec:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d7ff0:;
    {
        wr32(cpu->r[4], cpu->r[10]);
    }
L_001d7ff4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x34u);
    }
L_001d7ff8:;
    {
        goto L_001d7e80;
    }
L_001d7ffc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d8000:;
    {
        cpu->r[14] = 0x001d8004u; imp_memmove(cpu); /* memmove */
    }
L_001d8004:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d8008:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001d800c:;
    {
        goto L_001d7fd4;
    }
}

/* _ZN3vox19DecoderNativeCursor9ParseFileEv @ 001d8010 (arm) */
void fn_001d8010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d8010:;
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
L_001d8014:;
    {
        cpu->r[5] = rd32(0x001d801cu + + 0xe88u);
    }
L_001d8018:;
    {
        cpu->r[1] = rd32(0x001d8020u + + 0xe88u);
    }
L_001d801c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000fcu, 1, 0);
    }
L_001d8020:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d8028u, cpu->r[5], 0, 0);
    }
L_001d8024:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d8028:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d802c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001d8030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d8034:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001d8038:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001d803c:;
    {
        wr32(cpu->r[13] + + 0xf4u, cpu->r[2]);
    }
L_001d8040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8088;
        }
    }
L_001d8044:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d8048:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d804c:;
    {
        cpu->r[14] = 0x001d8054u;
    }
L_001d8050:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d8054u)) return;
    }
L_001d8054:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8058:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d83a4;
        }
    }
L_001d805c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d8060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_001d8064:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001d8068:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001d806c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d8070:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001d8074:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d8078:;
    {
        cpu->r[14] = 0x001d8080u;
    }
L_001d807c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d8080u)) return;
    }
L_001d8080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 1);
    }
L_001d8084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d80ac;
        }
    }
L_001d8088:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d808c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d8090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf4u);
    }
L_001d8094:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001d8098:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d809c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d80a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8ea0;
        }
    }
L_001d80a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_001d80a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d80acu)) return;
    }
L_001d80ac:;
    {
        cpu->r[3] = 0x00006f56u;
    }
L_001d80b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_001d80b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x4e78u << 16);
    }
L_001d80b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d80bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8088;
        }
    }
L_001d80c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_001d80c4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d80c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001d80cc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001d80d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d80d4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001d80d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d80dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d80e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d80e4:;
    {
        cpu->r[14] = 0x001d80ecu;
    }
L_001d80e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d80ecu)) return;
    }
L_001d80ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_001d80f0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_001d80f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d80f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_001d80fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001d8100:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001d8104:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d8108:;
    {
        cpu->r[14] = 0x001d810cu; fn_00097dd4(cpu);
    }
L_001d810c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8110:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001d8114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8088;
        }
    }
L_001d8118:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d811c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d8120:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001d8124:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d8128:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d812c:;
    {
        cpu->r[14] = 0x001d8134u;
    }
L_001d8130:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d8134u)) return;
    }
L_001d8134:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001d8138:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d813c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001d8140:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
        }
    }
L_001d8144:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
        }
    }
L_001d8148:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8e78;
        }
    }
L_001d814c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_001d8150:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001d8154:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001d8158:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d815c:;
    {
        cpu->r[3] = rd32(0x001d8164u + + 0xd48u);
    }
L_001d8160:;
    {
        cpu->r[2] = 0x00006641u;
    }
L_001d8164:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_001d8168:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x746du << 16);
    }
L_001d816c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d8174u, cpu->r[3], 0, 0);
    }
L_001d8170:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d8174:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_001d8178:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001d817c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_001d8180:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c0u, 0, 0);
    }
L_001d8184:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001d8188:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_001d818c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001d8190:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_001d8194:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[5]);
    }
L_001d8198:;
    {
        goto L_001d8210;
    }
L_001d819c:;
    {
        cpu->r[2] = 0x00007247u;
    }
L_001d81a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7370u << 16);
    }
L_001d81a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8688;
        }
    }
L_001d81ac:;
    {
        cpu->r[2] = 0x00007247u;
    }
L_001d81b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6570u << 16);
    }
L_001d81b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8724;
        }
    }
L_001d81bc:;
    {
        cpu->r[2] = 0x00007552u;
    }
L_001d81c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x656cu << 16);
    }
L_001d81c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d87b8;
        }
    }
L_001d81cc:;
    {
        cpu->r[2] = 0x00006c50u;
    }
L_001d81d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7473u << 16);
    }
L_001d81d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d85b4;
        }
    }
L_001d81dc:;
    {
        cpu->r[2] = 0x00007453u;
    }
L_001d81e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7461u << 16);
    }
L_001d81e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d884c;
        }
    }
L_001d81ec:;
    {
        cpu->r[2] = 0x00007254u;
    }
L_001d81f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6e73u << 16);
    }
L_001d81f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d81f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8cb0;
        }
    }
L_001d81fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8200:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001d8204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001d8208:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001d820c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8e74;
        }
    }
L_001d8210:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8214:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_001d8218:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d821c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001d8220:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001d8224:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001d8228:;
    {
        cpu->r[14] = 0x001d822cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d822c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x90u);
    }
L_001d8230:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001d8234:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001d8238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d83dc;
        }
    }
L_001d823c:;
    {
        cpu->r[2] = 0x00006553u;
    }
L_001d8240:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6d67u << 16);
    }
L_001d8244:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d8248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8430;
        }
    }
L_001d824c:;
    {
        cpu->r[2] = 0x00007543u;
    }
L_001d8250:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7365u << 16);
    }
L_001d8254:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d8258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d819c;
        }
    }
L_001d825c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d8260:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_001d8264:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001d8268:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d826c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8270:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d8274:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[5]);
    }
L_001d8278:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d827c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001d8280:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d8284:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d8288:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_001d828c:;
    {
        cpu->r[14] = 0x001d8290u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d8290:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8294:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_001d8298:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001d829c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d82a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d82a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_001d82a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001d82ac:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_001d82b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_001d82b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001d82b8:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_001d82bc:;
    {
        goto L_001d82e8;
    }
L_001d82c0:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_001d82c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d82c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001d82cc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d82d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d82d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001d82d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d82dc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001d82e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_001d82e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d83c4;
        }
    }
L_001d82e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d82ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d82f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d82f4:;
    {
        cpu->r[14] = 0x001d82f8u; imp_memcpy(cpu); /* memcpy */
    }
L_001d82f8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x34u);
    }
L_001d82fc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x80u);
    }
L_001d8300:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x84u);
    }
L_001d8304:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001d8308:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001d830c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001d8310:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d8314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d8318:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001d831c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d82c0;
        }
    }
L_001d8320:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d8324:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001d8328:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d832c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d8330:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001d8334:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001d8338:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001d833c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d8350;
        }
    }
L_001d8340:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d8344:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001d8348:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_001d834c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d8358;
        }
    }
L_001d8350:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_001d8354:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001d8358:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d835c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8360:;
    {
        cpu->r[14] = 0x001d8364u; fn_00097dd0(cpu);
    }
L_001d8364:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d8368:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001d836c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d8370:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001d8374:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8418;
        }
    }
L_001d8378:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[11]);
        cpu->r[10] = wb_tmp;
    }
L_001d837c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001d8380:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d8384:;
    {
        cpu->r[14] = 0x001d8388u; fn_00097dc8(cpu);
    }
L_001d8388:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d838c:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[3]);
    }
L_001d8390:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8394:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_001d8398:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001d839c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d83a0:;
    {
        goto L_001d82d0;
    }
L_001d83a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d83a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d83ac:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d83b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d83b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d83b8:;
    {
        cpu->r[14] = 0x001d83c0u;
    }
L_001d83bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d83c0u)) return;
    }
L_001d83c0:;
    {
        goto L_001d805c;
    }
L_001d83c4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d83c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001d83cc:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_001d83d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001d83d4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5] + cpu->r[7]; cpu->r[7] = v;
    }
L_001d83d8:;
    {
        goto L_001d8204;
    }
L_001d83dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d83e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_001d83e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_001d83e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d83ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_001d83f0:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[12]);
    }
L_001d83f4:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_001d83f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d83fc:;
    {
        cpu->r[14] = 0x001d8400u; imp_memcpy(cpu); /* memcpy */
    }
L_001d8400:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x20u);
    }
L_001d8404:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8408:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001d840c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001d8410:;
    {
        wr16(cpu->r[3] + + 0x2au, cpu->r[12]);
    }
L_001d8414:;
    {
        goto L_001d8204;
    }
L_001d8418:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d841c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001d8420:;
    {
        cpu->r[14] = 0x001d8424u; imp_memmove(cpu); /* memmove */
    }
L_001d8424:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d8428:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001d842c:;
    {
        goto L_001d8378;
    }
L_001d8430:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8434:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8438:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_001d843c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d8440:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d8444:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001d8448:;
    {
        cpu->r[14] = 0x001d844cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d844c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8450:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001d8454:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d8458:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d845c:;
    {
        cpu->r[14] = 0x001d8460u; fn_001d68ac(cpu);
    }
L_001d8460:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d8464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001d8468:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[2]);
    }
L_001d846c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x34u);
    }
L_001d8470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000058u, 0, 0);
    }
L_001d8474:;
    {
        wr32(cpu->r[6] + + 0x34u, cpu->r[3]);
    }
L_001d8478:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d847c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8668;
        }
    }
L_001d8480:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8484:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d8488:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d848c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d8490:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8494:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_001d8498:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d849c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001d84a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001d84a4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001d84a8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d84ac:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001d84b0:;
    {
        goto L_001d84e0;
    }
L_001d84b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d84b8:;
    {
        wr32(cpu->r[6], cpu->r[12]);
    }
L_001d84bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d84c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001d84c4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d84c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d84cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001d84d0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001d84d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001d84d8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001d84dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8598;
        }
    }
L_001d84e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d84e4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d84e8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001d84ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001d84f0:;
    {
        cpu->r[14] = 0x001d84f4u; imp_memcpy(cpu); /* memcpy */
    }
L_001d84f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x34u);
    }
L_001d84f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d84fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001d8500:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d8504:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d8508:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001d850c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d84b4;
        }
    }
L_001d8510:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_001d8514:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001d8518:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001d851c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d8520:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001d8524:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001d8528:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001d852c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d8540;
        }
    }
L_001d8530:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d8534:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001d8538:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_001d853c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d8548;
        }
    }
L_001d8540:;
    {
        cpu->r[1] = (~0x00000003u);
    }
L_001d8544:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001d8548:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d854c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8550:;
    {
        cpu->r[14] = 0x001d8554u; fn_00097dd0(cpu);
    }
L_001d8554:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d8558:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001d855c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d8560:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001d8564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8670;
        }
    }
L_001d8568:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d856c:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_001d8570:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001d8574:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001d8578:;
    {
        cpu->r[14] = 0x001d857cu; fn_00097dc8(cpu);
    }
L_001d857c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d8580:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8584:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_001d8588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001d858c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001d8590:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001d8594:;
    {
        goto L_001d84c8;
    }
L_001d8598:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d859c:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001d85a0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d85a4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_001d85a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001d85ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[7]; cpu->r[7] = v;
    }
L_001d85b0:;
    {
        goto L_001d8204;
    }
L_001d85b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d85b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d85bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d85c0:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001d85c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d85c8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d85cc:;
    {
        cpu->r[14] = 0x001d85d0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d85d0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d85d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d85d8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d85dc:;
    {
        cpu->r[14] = 0x001d85e0u; fn_001d5cec(cpu);
    }
L_001d85e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d85e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_001d85e8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_001d85ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d85f0:;
    {
        cpu->r[14] = 0x001d85f4u; fn_001ecb60(cpu);
    }
L_001d85f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d85f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8204;
        }
    }
L_001d85fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d8600:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d8604:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d8608:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[4]);
    }
L_001d860c:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_001d8610:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d8614:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_001d8618:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_001d861c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001d8620:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8624:;
    {
        goto L_001d8638;
    }
L_001d8628:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d862c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001d8630:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001d8634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d871c;
        }
    }
L_001d8638:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001d863c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d8640:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d8644:;
    {
        cpu->r[14] = 0x001d8648u; imp_memcpy(cpu); /* memcpy */
    }
L_001d8648:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d864c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d8650:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d8654:;
    {
        cpu->r[14] = 0x001d8658u; fn_001ecc08(cpu);
    }
L_001d8658:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d865c:;
    {
        cpu->r[14] = 0x001d8660u; fn_001ecb60(cpu);
    }
L_001d8660:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8628;
        }
    }
L_001d8668:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x58u);
    }
L_001d866c:;
    {
        goto L_001d8088;
    }
L_001d8670:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001d8674:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001d8678:;
    {
        cpu->r[14] = 0x001d867cu; imp_memmove(cpu); /* memmove */
    }
L_001d867c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d8680:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001d8684:;
    {
        goto L_001d8568;
    }
L_001d8688:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d868c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8690:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001d8694:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d8698:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d869c:;
    {
        cpu->r[14] = 0x001d86a0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d86a0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d86a4:;
    {
        cpu->r[14] = 0x001d86a8u; fn_00097dd4(cpu);
    }
L_001d86a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d86ac:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_001d86b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8668;
        }
    }
L_001d86b4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d86b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d86bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d86c0:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_001d86c4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d86c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d86cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d86d0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001d86d4:;
    {
        goto L_001d86e8;
    }
L_001d86d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d86dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001d86e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001d86e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d871c;
        }
    }
L_001d86e8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d86ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001d86f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d86f4:;
    {
        cpu->r[14] = 0x001d86f8u; imp_memcpy(cpu); /* memcpy */
    }
L_001d86f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d86fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d8700:;
    {
        cpu->r[14] = 0x001d8704u; fn_001ed654(cpu);
    }
L_001d8704:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d8708:;
    {
        cpu->r[14] = 0x001d870cu; fn_001ecb60(cpu);
    }
L_001d870c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8710:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d86d8;
        }
    }
L_001d8714:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x58u);
    }
L_001d8718:;
    {
        goto L_001d8088;
    }
L_001d871c:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_001d8720:;
    {
        goto L_001d8204;
    }
L_001d8724:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8728:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d872c:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_001d8730:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d8734:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d8738:;
    {
        cpu->r[14] = 0x001d873cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d873c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d8740:;
    {
        cpu->r[14] = 0x001d8744u; fn_00097dd4(cpu);
    }
L_001d8744:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8748:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_001d874c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8668;
        }
    }
L_001d8750:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d8754:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d8758:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d875c:;
    {
        cpu->r[11] = cpu->r[6];
    }
L_001d8760:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d8764:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8768:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d876c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001d8770:;
    {
        goto L_001d8784;
    }
L_001d8774:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d8778:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001d877c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001d8780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d871c;
        }
    }
L_001d8784:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d8788:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001d878c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d8790:;
    {
        cpu->r[14] = 0x001d8794u; imp_memcpy(cpu); /* memcpy */
    }
L_001d8794:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d8798:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d879c:;
    {
        cpu->r[14] = 0x001d87a0u; fn_001eed00(cpu);
    }
L_001d87a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d87a4:;
    {
        cpu->r[14] = 0x001d87a8u; fn_001ecb60(cpu);
    }
L_001d87a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d87ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8774;
        }
    }
L_001d87b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x58u);
    }
L_001d87b4:;
    {
        goto L_001d8088;
    }
L_001d87b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d87bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d87c0:;
    {
        cpu->r[9] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_001d87c4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d87c8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d87cc:;
    {
        cpu->r[14] = 0x001d87d0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d87d0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d87d4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d87d8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d87dc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d87e0:;
    {
        cpu->r[14] = 0x001d87e4u; fn_001d5964(cpu);
    }
L_001d87e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d87e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_001d87ec:;
    {
        wr32(cpu->r[6] + + 0x2cu, cpu->r[2]);
    }
L_001d87f0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x54u);
    }
L_001d87f4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d87f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8668;
        }
    }
L_001d87fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001d8800:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d8804:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d8808:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d880c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_001d8810:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d8814:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_001d8818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d881c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d8820:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001d8824:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d8828:;
    {
        cpu->r[14] = 0x001d882cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d882c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001d8830:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_001d8834:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_001d8838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8818;
        }
    }
L_001d883c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_001d8840:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001d8844:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5] + cpu->r[7]; cpu->r[7] = v;
    }
L_001d8848:;
    {
        goto L_001d8204;
    }
L_001d884c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8850:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8854:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_001d8858:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d885c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d8860:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_001d8864:;
    {
        cpu->r[14] = 0x001d8868u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d8868:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d886c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001d8870:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d8874:;
    {
        cpu->r[14] = 0x001d8878u; fn_001d5990(cpu);
    }
L_001d8878:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d887c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_001d8880:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[2]);
    }
L_001d8884:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4cu);
    }
L_001d8888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d888c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8668;
        }
    }
L_001d8890:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_001d8894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000070u, 0, 0);
    }
L_001d8898:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d889c:;
    {
        wr32(cpu->r[6] + + 0x38u, cpu->r[3]);
    }
L_001d88a0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001d88a4:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001d88a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d88ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d88b0:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[0]);
    }
L_001d88b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d88b8:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_001d88bc:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[0]);
    }
L_001d88c0:;
    {
        wr8(cpu->r[13] + + 0xa4u, cpu->r[4]);
    }
L_001d88c4:;
    {
        cpu->r[14] = 0x001d88c8u; fn_001d55a8(cpu);
    }
L_001d88c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d88cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001d88d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d88d4:;
    {
        wr8(cpu->r[3], cpu->r[4]);
    }
L_001d88d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0xf0u);
        }
    }
L_001d88dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8b94;
        }
    }
L_001d88e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d88e4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_001d88e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d88ec:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_001d88f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_001d88f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001d88f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001d88fc:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001d8900:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_001d8904:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_001d8908:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_001d890c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_001d8910:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000006u, 0, 0);
    }
L_001d8914:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_001d8918:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_001d891c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_001d8920:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_001d8924:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[7]);
    }
L_001d8928:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_001d892c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8930:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d8934:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d8938:;
    {
        cpu->r[14] = 0x001d893cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d893c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8940:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d8944:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x28u);
    }
L_001d8948:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa0u);
    }
L_001d894c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d8950:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[11], 2, 2u, &shc), cpu->r[2]);
    }
L_001d8954:;
    {
        cpu->r[14] = 0x001d8958u; imp_strlen(cpu); /* strlen */
    }
L_001d8958:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d895c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001d8960:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001d8964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8a68;
        }
    }
L_001d8968:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d896c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d8970:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d8974:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8978:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001d897c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
        }
    }
L_001d8980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0xdcu);
        }
    }
L_001d8984:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001d8988:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d898c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001d8c3c;
        }
    }
L_001d8990:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_001d8994:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001d8998:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001d899c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001d89a0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d89a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d8c94;
        }
    }
L_001d89a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d89ac:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001d89b0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
        }
    }
L_001d89b4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
        }
    }
L_001d89b8:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_001d89bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8adc;
        }
    }
L_001d89c0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_001d89c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d8adc;
        }
    }
L_001d89c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d89cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d89d0:;
    {
        cpu->r[14] = 0x001d89d4u; fn_00097dd0(cpu);
    }
L_001d89d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d89d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d89dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001d89e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d89e4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d89e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001d89ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8a0c;
        }
    }
L_001d89f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d89f4:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[6]);
    }
L_001d89f8:;
    {
        wr8(cpu->r[7] + cpu->r[6], cpu->r[3]);
    }
L_001d89fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001d8a00:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001d8a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d89f4;
        }
    }
L_001d8a08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001d8a0c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d8a10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8a34;
        }
    }
L_001d8a14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d8a18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_001d8a1c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x4u);
    }
L_001d8a20:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001d8a24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d8a28:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d8a2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8a18;
        }
    }
L_001d8a30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001d8a34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d8a38:;
    {
        wr8(cpu->r[6], cpu->r[1]);
    }
L_001d8a3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d8a40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d8a44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001d8a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8a58;
        }
    }
L_001d8a4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8a50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8a58;
        }
    }
L_001d8a54:;
    {
        cpu->r[14] = 0x001d8a58u; fn_00097dc8(cpu);
    }
L_001d8a58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001d8a5c:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[6]);
    }
L_001d8a60:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[7]);
    }
L_001d8a64:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[5]);
    }
L_001d8a68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8a6c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x38u);
    }
L_001d8a70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d8a74:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_001d8a78:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d8a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8ca0;
        }
    }
L_001d8a80:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8a84:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d8a88:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d8a8c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001d8a90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d8a94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d8a98:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d8a9c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d8aa0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001d8aa4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001d8aa8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001d8aac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001d8ab0:;
    {
        cpu->r[14] = 0x001d8ab4u; imp_memcmp(cpu); /* memcmp */
    }
L_001d8ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8ae4;
        }
    }
L_001d8abc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001d8ac0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d8ae8;
        }
    }
L_001d8ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d8ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d8acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8af8;
        }
    }
L_001d8ad0:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001d8ad4:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d8ad8:;
    {
        goto L_001d8a90;
    }
L_001d8adc:;
    {
        cpu->r[5] = (~0x00000001u);
    }
L_001d8ae0:;
    {
        goto L_001d89c8;
    }
L_001d8ae4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d8ac4;
        }
    }
L_001d8ae8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d8aec:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001d8af0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d8af4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8ad0;
        }
    }
L_001d8af8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8afc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001d8b00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8bb8;
        }
    }
L_001d8b04:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d8b08:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001d8b0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d8b10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d8b14:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d8b18:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001d8b1c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001d8b20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001d8b24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001d8b28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_001d8b2c:;
    {
        cpu->r[14] = 0x001d8b30u; imp_memcmp(cpu); /* memcmp */
    }
L_001d8b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8b34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8bb4;
        }
    }
L_001d8b38:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001d8b3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d8bb8;
        }
    }
L_001d8b40:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[11]);
    }
L_001d8b44:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001d8b48:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d8b4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8b50:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001d8b54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001d8b58:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[8], cpu->r[2]);
        }
    }
L_001d8b5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0xf0u);
        }
    }
L_001d8b60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d8b64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8b68:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0xecu, cpu->r[8]);
        }
    }
L_001d8b6c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001d8b70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d8b74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001d8b78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001d8b7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d892c;
        }
    }
L_001d8b80:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x64u);
    }
L_001d8b84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001d8b88:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8b8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001d8b90:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[7]; cpu->r[7] = v;
    }
L_001d8b94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d8b98:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_001d8b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8204;
        }
    }
L_001d8ba0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d8ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8204;
        }
    }
L_001d8ba8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d8bac:;
    {
        cpu->r[14] = 0x001d8bb0u; fn_00097dc8(cpu);
    }
L_001d8bb0:;
    {
        goto L_001d8204;
    }
L_001d8bb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d8b40;
        }
    }
L_001d8bb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001d8bbc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001d8bc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001d8bc4:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[0]);
    }
L_001d8bc8:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[0]);
    }
L_001d8bcc:;
    {
        cpu->r[14] = 0x001d8bd0u; fn_001d55a8(cpu);
    }
L_001d8bd0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001d8bd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001d8bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8bec;
        }
    }
L_001d8bdc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d8be0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d8be4:;
    {
        cpu->r[14] = 0x001d8be8u; imp_memcpy(cpu); /* memcpy */
    }
L_001d8be8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001d8bec:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[0]);
    }
L_001d8bf0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d8bf4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8bf8:;
    {
        wr8(cpu->r[0], cpu->r[12]);
    }
L_001d8bfc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d8c00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001d8c04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_001d8c08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001d8c0c:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[4]);
    }
L_001d8c10:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[12]);
    }
L_001d8c14:;
    {
        cpu->r[14] = 0x001d8c18u; fn_001d7834(cpu);
    }
L_001d8c18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001d8c1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_001d8c20:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x98u);
    }
L_001d8c24:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001d8c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8b40;
        }
    }
L_001d8c2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8c30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8b40;
        }
    }
L_001d8c34:;
    {
        cpu->r[14] = 0x001d8c38u; fn_00097dc8(cpu);
    }
L_001d8c38:;
    {
        goto L_001d8b40;
    }
L_001d8c3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_001d8c40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d8c44:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001d8c48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d8c4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8c70;
        }
    }
L_001d8c50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001d8c54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_001d8c58:;
    {
        cpu->r[2] = rd8(cpu->r[3] + - 0x1u);
    }
L_001d8c5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d8c60:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x1u;
        wr8(cpu->r[10] + + 0x1u, cpu->r[2]);
        cpu->r[10] = wb_tmp;
    }
L_001d8c64:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001d8c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8c58;
        }
    }
L_001d8c6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8c70:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d8c74:;
    {
        wr8(cpu->r[3] + cpu->r[4], cpu->r[12]);
    }
L_001d8c78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8c7c:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0xa4u);
    }
L_001d8c80:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001d8c84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8c88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001d8c8c:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[3]);
    }
L_001d8c90:;
    {
        goto L_001d8a68;
    }
L_001d8c94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_001d8c98:;
    {
        cpu->r[14] = 0x001d8c9cu; fn_00208298(cpu);
    }
L_001d8c9c:;
    {
        goto L_001d89a8;
    }
L_001d8ca0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xecu);
    }
L_001d8ca4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8ca8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xf0u);
    }
L_001d8cac:;
    {
        goto L_001d8af8;
    }
L_001d8cb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8cb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001d8cb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001d8cbc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001d8cc0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001d8cc4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d8cc8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001d8ccc:;
    {
        cpu->r[14] = 0x001d8cd0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d8cd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d8cd4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001d8cd8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d8cdc:;
    {
        cpu->r[14] = 0x001d8ce0u; fn_001d7124(cpu);
    }
L_001d8ce0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d8ce4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001d8ce8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d8cec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d8cf0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001d8cf4:;
    {
        wr8(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_001d8cf8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_001d8cfc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000064u, 0, 0);
    }
L_001d8d00:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001d8d04:;
    {
        wr32(cpu->r[6] + + 0x30u, cpu->r[2]);
    }
L_001d8d08:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_001d8d0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8204;
        }
    }
L_001d8d10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8d14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_001d8d18:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001d8d1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_001d8d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001d8d24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001d8d28:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001d8d2c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001d8d30:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[7]);
    }
L_001d8d34:;
    {
        goto L_001d8d6c;
    }
L_001d8d38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8d3c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d8d40:;
    {
        wr8(cpu->r[8] + + 0x4u, cpu->r[1]);
    }
L_001d8d44:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001d8d48:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001d8d4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d8d50:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001d8d54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001d8d58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d8d5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8d60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_001d8d64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001d8d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8e60;
        }
    }
L_001d8d6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d8d70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d8d74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d8d78:;
    {
        cpu->r[14] = 0x001d8d7cu; imp_memcpy(cpu); /* memcpy */
    }
L_001d8d7c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_001d8d80:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001d8d84:;
    {
        cpu->r[11] = rd32(cpu->r[3]);
    }
L_001d8d88:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_001d8d8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001d8d90:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x4u);
    }
L_001d8d94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001d8d98:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001d8d9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8d38;
        }
    }
L_001d8da0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001d8da4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001d8da8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001d8dac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d8db0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001d8db4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001d8db8:;
    {
        add_flags(cpu, cpu->r[2], 0xe0000001u, 0, 1);
    }
L_001d8dbc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d8dd0;
        }
    }
L_001d8dc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d8dc4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
        }
    }
L_001d8dc8:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
        }
    }
L_001d8dcc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001d8dd8;
        }
    }
L_001d8dd0:;
    {
        cpu->r[1] = (~0x00000007u);
    }
L_001d8dd4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001d8dd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d8ddc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d8de0:;
    {
        cpu->r[14] = 0x001d8de4u; fn_00097dd0(cpu);
    }
L_001d8de4:;
    {
        cpu->r[14] = rd32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001d8de8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_001d8dec:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 3u, &shc); cpu->r[8] = v;
    }
L_001d8df0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001d8df4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001d8df8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001d8dfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d8e2c;
        }
    }
L_001d8e00:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d8e04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d8e08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_001d8e0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001d8e10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001d8e14:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d8e18:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001d8e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d8e20:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[1]);
    }
L_001d8e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d8e08;
        }
    }
L_001d8e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001d8e2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d8e30:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d8e34:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001d8e38:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d8e3c:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_001d8e40:;
    {
        cpu->r[0] = rd32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001d8e44:;
    {
        cpu->r[14] = 0x001d8e48u; fn_00097dc8(cpu);
    }
L_001d8e48:;
    {
        wr32(cpu->r[11] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[10]);
    }
L_001d8e4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001d8e50:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_001d8e54:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001d8e58:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[10]);
    }
L_001d8e5c:;
    {
        goto L_001d8d54;
    }
L_001d8e60:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_001d8e64:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001d8e68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001d8e6c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4] + cpu->r[7]; cpu->r[7] = v;
    }
L_001d8e70:;
    {
        goto L_001d8204;
    }
L_001d8e74:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x58u);
    }
L_001d8e78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d8e7c:;
    {
        cpu->r[14] = 0x001d8e80u; fn_001d7d38(cpu);
    }
L_001d8e80:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001d8e84:;
    {
        cpu->r[14] = 0x001d8e88u; fn_00097dc8(cpu);
    }
L_001d8e88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001d8e8c:;
    {
        cpu->r[14] = 0x001d8e90u; fn_00097dc8(cpu);
    }
L_001d8e90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001d8e94:;
    {
        cpu->r[14] = 0x001d8e98u; fn_00097dc8(cpu);
    }
L_001d8e98:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d8e9c:;
    {
        goto L_001d808c;
    }
L_001d8ea0:;
    {
        cpu->r[14] = 0x001d8ea4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d8ea4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001d8ea8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d8eac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[5] = v;
        }
    }
}

/* _ZN3vox19DecoderNativeCursorC1EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d8eb0 (arm) */
void fn_001d8eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d8eb0:;
    {
        cpu->r[3] = rd32(0x001d8eb8u + + 0x348u);
    }
L_001d8eb4:;
    {
        cpu->r[12] = rd32(0x001d8ebcu + + 0x348u);
    }
L_001d8eb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d8ec0u, cpu->r[3], 0, 0);
    }
L_001d8ebc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d8ec0:;
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
L_001d8ec4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d8ec8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d8ecc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d8ed0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001d8ed4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d8ed8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d8edc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001d8ee0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001d8ee4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001d8ee8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d8eec:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_001d8ef0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_001d8ef4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001d8ef8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d8efc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001d8f00:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001d8f04:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001d8f08:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001d8f0c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d8f10:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001d8f14:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001d8f18:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001d8f1c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001d8f20:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_001d8f24:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001d8f28:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001d8f2c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001d8f30:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d8f34:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d8f38:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001d8f3c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001d8f40:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001d8f44:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001d8f48:;
    {
        cpu->r[14] = 0x001d8f4cu; fn_001ebe50(cpu);
    }
L_001d8f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001d8f50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001d8f54:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001d8f58:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x88u);
    }
L_001d8f5c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001d8f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d8f7c;
        }
    }
L_001d8f64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d8f68:;
    {
        cpu->r[14] = 0x001d8f6cu; fn_001d8010(cpu);
    }
L_001d8f6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9080;
        }
    }
L_001d8f74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001d8f78:;
    {
        wr8(cpu->r[3] + + 0x88u, cpu->r[5]);
    }
L_001d8f7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001d8f80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_001d8f84:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_001d8f88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000058u, 0, 0);
    }
L_001d8f8c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001d8f90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_001d8f94:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_001d8f98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000064u, 0, 0);
    }
L_001d8f9c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001d8fa0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000070u, 0, 0);
    }
L_001d8fa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_001d8fa8:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_001d8fac:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001d8fb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d8fb4:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001d8fb8:;
    {
        cpu->r[14] = 0x001d8fbcu; fn_00097dd0(cpu);
    }
L_001d8fbc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d8fc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d8fc4:;
    {
        cpu->r[14] = 0x001d8fc8u; fn_001edf74(cpu);
    }
L_001d8fc8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d8fcc:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001d8fd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d90b4;
        }
    }
L_001d8fd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d8fd8:;
    {
        cpu->r[14] = 0x001d8fdcu; fn_001ecb60(cpu);
    }
L_001d8fdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d8fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9080;
        }
    }
L_001d8fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d8fe8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_001d8fec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d8ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d90dc;
        }
    }
L_001d8ff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d8ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d916c;
        }
    }
L_001d8ffc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d9000:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d9004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d90c8;
        }
    }
L_001d9008:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001d900c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d9010:;
    {
        cpu->r[14] = 0x001d9014u; fn_001eef78(cpu);
    }
L_001d9014:;
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
L_001d9018:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001d901c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001d9020:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d9024:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001d9028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d909c;
        }
    }
L_001d902c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d9030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d9034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d909c;
        }
    }
L_001d9038:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d903c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d9040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d909c;
        }
    }
L_001d9044:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d9048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d904c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d909c;
        }
    }
L_001d9050:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9054:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001d905cu + + 0x1a0u);
    }
L_001d9058:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d905c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001d9060:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_001d9064:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001d9068:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001d906c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001d9070:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001d9074:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001d9078:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001d907c:;
    {
        goto L_001d9090;
    }
L_001d9080:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d9084:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d9088:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d908c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d9090:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9094:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d9098:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d909cu)) return;
    }
L_001d909c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d90a0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d90a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d90a8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d90ac:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d90b0:;
    {
        goto L_001d9090;
    }
L_001d90b4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001d90b8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d90bc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d90c0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001d90c4:;
    {
        goto L_001d9090;
    }
L_001d90c8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_001d90cc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001d90d0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_001d90d4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001d90d8:;
    {
        goto L_001d9090;
    }
L_001d90dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d90e0:;
    {
        cpu->r[0] = 0x00000170u;
    }
L_001d90e4:;
    {
        cpu->r[14] = 0x001d90e8u; fn_00097dd0(cpu);
    }
L_001d90e8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d90ec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x34u);
    }
L_001d90f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d90f4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001d90f8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d90fc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_001d9100:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d9104:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9108:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d910c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001d9110:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001d9114:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001d9118:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001d911c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001d9120:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001d9124:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d9128:;
    {
        cpu->r[14] = 0x001d912cu; fn_001f310c(cpu);
    }
L_001d912c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_001d9130:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9134:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001d9138:;
    {
        cpu->r[14] = 0x001d913cu; fn_00097dd0(cpu);
    }
L_001d913c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d9140:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d9144:;
    {
        cpu->r[14] = 0x001d9148u; fn_001f3268(cpu);
    }
L_001d9148:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d914c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9150:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001d9154:;
    {
        cpu->r[14] = 0x001d9158u; fn_00097dd0(cpu);
    }
L_001d9158:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d915c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d9160:;
    {
        cpu->r[14] = 0x001d9164u; fn_001f3268(cpu);
    }
L_001d9164:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d9168:;
    {
        goto L_001d8ffc;
    }
L_001d916c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9170:;
    {
        cpu->r[0] = 0x000001c0u;
    }
L_001d9174:;
    {
        cpu->r[14] = 0x001d9178u; fn_00097dd0(cpu);
    }
L_001d9178:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d917c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x34u);
    }
L_001d9180:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d9184:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001d9188:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d918c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_001d9190:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d9194:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9198:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d919c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001d91a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001d91a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001d91a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001d91ac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001d91b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001d91b4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d91b8:;
    {
        cpu->r[14] = 0x001d91bcu; fn_001f22c8(cpu);
    }
L_001d91bc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_001d91c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d91c4:;
    {
        cpu->r[0] = 0x00000150u;
    }
L_001d91c8:;
    {
        cpu->r[14] = 0x001d91ccu; fn_00097dd0(cpu);
    }
L_001d91cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d91d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d91d4:;
    {
        cpu->r[14] = 0x001d91d8u; fn_001f26c4(cpu);
    }
L_001d91d8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d91dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d91e0:;
    {
        cpu->r[0] = 0x00000150u;
    }
L_001d91e4:;
    {
        cpu->r[14] = 0x001d91e8u; fn_00097dd0(cpu);
    }
L_001d91e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d91ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d91f0:;
    {
        cpu->r[14] = 0x001d91f4u; fn_001f26c4(cpu);
    }
L_001d91f4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d91f8:;
    {
        goto L_001d8ffc;
    }
}

/* _ZN3vox13DecoderNative15CreateNewCursorEPNS_21StreamCursorInterfaceE @ 001d9208 (arm) */
void fn_001d9208(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9208:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d920c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d9210:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d9214:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9218:;
    {
        cpu->r[0] = 0x0000006cu;
    }
L_001d921c:;
    {
        cpu->r[14] = 0x001d9220u; fn_00097dd0(cpu);
    }
L_001d9220:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d9224:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d9228:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d922c:;
    {
        cpu->r[14] = 0x001d9230u; fn_001d8eb0(cpu);
    }
L_001d9230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9234:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9238u)) return;
    }
}

/* _ZN3vox19DecoderNativeCursorC2EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d9238 (arm) */
void fn_001d9238(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9238:;
    {
        cpu->r[3] = rd32(0x001d9240u + + 0x348u);
    }
L_001d923c:;
    {
        cpu->r[12] = rd32(0x001d9244u + + 0x348u);
    }
L_001d9240:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d9248u, cpu->r[3], 0, 0);
    }
L_001d9244:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d9248:;
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
L_001d924c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9250:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d9254:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d9258:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001d925c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d9260:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001d9264:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001d9268:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001d926c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001d9270:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d9274:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_001d9278:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_001d927c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001d9280:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d9284:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001d9288:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001d928c:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001d9290:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001d9294:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001d9298:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001d929c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001d92a0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001d92a4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001d92a8:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_001d92ac:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001d92b0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001d92b4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[5]);
    }
L_001d92b8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d92bc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d92c0:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001d92c4:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_001d92c8:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_001d92cc:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[5]);
    }
L_001d92d0:;
    {
        cpu->r[14] = 0x001d92d4u; fn_001ebe50(cpu);
    }
L_001d92d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001d92d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001d92dc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001d92e0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x88u);
    }
L_001d92e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001d92e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9304;
        }
    }
L_001d92ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d92f0:;
    {
        cpu->r[14] = 0x001d92f4u; fn_001d8010(cpu);
    }
L_001d92f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d92f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9408;
        }
    }
L_001d92fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001d9300:;
    {
        wr8(cpu->r[3] + + 0x88u, cpu->r[5]);
    }
L_001d9304:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001d9308:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_001d930c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_001d9310:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000058u, 0, 0);
    }
L_001d9314:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001d9318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_001d931c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_001d9320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000064u, 0, 0);
    }
L_001d9324:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001d9328:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000070u, 0, 0);
    }
L_001d932c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000048u, 0, 0);
    }
L_001d9330:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_001d9334:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001d9338:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d933c:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001d9340:;
    {
        cpu->r[14] = 0x001d9344u; fn_00097dd0(cpu);
    }
L_001d9344:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d9348:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d934c:;
    {
        cpu->r[14] = 0x001d9350u; fn_001edf74(cpu);
    }
L_001d9350:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d9354:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001d9358:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d943c;
        }
    }
L_001d935c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d9360:;
    {
        cpu->r[14] = 0x001d9364u; fn_001ecb60(cpu);
    }
L_001d9364:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9408;
        }
    }
L_001d936c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9370:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_001d9374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001d9378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9464;
        }
    }
L_001d937c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001d9380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d94f4;
        }
    }
L_001d9384:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001d9388:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d938c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9450;
        }
    }
L_001d9390:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001d9394:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d9398:;
    {
        cpu->r[14] = 0x001d939cu; fn_001eef78(cpu);
    }
L_001d939c:;
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
L_001d93a0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x50u);
    }
L_001d93a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001d93a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d93ac:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001d93b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9424;
        }
    }
L_001d93b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001d93b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d93bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9424;
        }
    }
L_001d93c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001d93c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d93c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9424;
        }
    }
L_001d93cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001d93d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d93d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9424;
        }
    }
L_001d93d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d93dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001d93e4u + + 0x1a0u);
    }
L_001d93e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d93e4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001d93e8:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_001d93ec:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001d93f0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001d93f4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001d93f8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001d93fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001d9400:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001d9404:;
    {
        goto L_001d9418;
    }
L_001d9408:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d940c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d9410:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d9414:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d9418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d941c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d9420:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9424u)) return;
    }
L_001d9424:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d9428:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001d942c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d9430:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001d9434:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001d9438:;
    {
        goto L_001d9418;
    }
L_001d943c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001d9440:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001d9444:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001d9448:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001d944c:;
    {
        goto L_001d9418;
    }
L_001d9450:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_001d9454:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001d9458:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_001d945c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001d9460:;
    {
        goto L_001d9418;
    }
L_001d9464:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9468:;
    {
        cpu->r[0] = 0x00000170u;
    }
L_001d946c:;
    {
        cpu->r[14] = 0x001d9470u; fn_00097dd0(cpu);
    }
L_001d9470:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d9474:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x34u);
    }
L_001d9478:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d947c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001d9480:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d9484:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_001d9488:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d948c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9490:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d9494:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001d9498:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001d949c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001d94a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001d94a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001d94a8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001d94ac:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d94b0:;
    {
        cpu->r[14] = 0x001d94b4u; fn_001f310c(cpu);
    }
L_001d94b4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_001d94b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d94bc:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001d94c0:;
    {
        cpu->r[14] = 0x001d94c4u; fn_00097dd0(cpu);
    }
L_001d94c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d94c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d94cc:;
    {
        cpu->r[14] = 0x001d94d0u; fn_001f3268(cpu);
    }
L_001d94d0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d94d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d94d8:;
    {
        cpu->r[0] = 0x00000144u;
    }
L_001d94dc:;
    {
        cpu->r[14] = 0x001d94e0u; fn_00097dd0(cpu);
    }
L_001d94e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d94e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d94e8:;
    {
        cpu->r[14] = 0x001d94ecu; fn_001f3268(cpu);
    }
L_001d94ec:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d94f0:;
    {
        goto L_001d9384;
    }
L_001d94f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d94f8:;
    {
        cpu->r[0] = 0x000001c0u;
    }
L_001d94fc:;
    {
        cpu->r[14] = 0x001d9500u; fn_00097dd0(cpu);
    }
L_001d9500:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d9504:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x34u);
    }
L_001d9508:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d950c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001d9510:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001d9514:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x38u);
    }
L_001d9518:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d951c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9520:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001d9524:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001d9528:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001d952c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001d9530:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001d9534:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_001d9538:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001d953c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001d9540:;
    {
        cpu->r[14] = 0x001d9544u; fn_001f22c8(cpu);
    }
L_001d9544:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_001d9548:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d954c:;
    {
        cpu->r[0] = 0x00000150u;
    }
L_001d9550:;
    {
        cpu->r[14] = 0x001d9554u; fn_00097dd0(cpu);
    }
L_001d9554:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d9558:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d955c:;
    {
        cpu->r[14] = 0x001d9560u; fn_001f26c4(cpu);
    }
L_001d9560:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[5]);
    }
L_001d9564:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9568:;
    {
        cpu->r[0] = 0x00000150u;
    }
L_001d956c:;
    {
        cpu->r[14] = 0x001d9570u; fn_00097dd0(cpu);
    }
L_001d9570:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001d9574:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d9578:;
    {
        cpu->r[14] = 0x001d957cu; fn_001f26c4(cpu);
    }
L_001d957c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001d9580:;
    {
        goto L_001d9384;
    }
}

/* _ZN3vox10DecoderRaw7GetTypeEv @ 001d9590 (arm) */
void fn_001d9590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9590:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d9594:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10DecoderRaw8GetParamEv @ 001d9598 (arm) */
void fn_001d9598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9598:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001d959c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderRawCursorD1Ev @ 001d95a0 (arm) */
void fn_001d95a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d95a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderRawCursor20AllowBufferReferenceEv @ 001d95a4 (arm) */
void fn_001d95a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d95a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d95a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d95ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d95b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d95b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d95b8u)) return;
        }
    }
L_001d95b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d95bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d95c0:;
    {
        cpu->r[14] = 0x001d95c8u;
    }
L_001d95c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d95c8u)) return;
    }
L_001d95c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d95ccu)) return;
    }
}

/* _ZN3vox10DecoderRawC2EPNS_11TrackParamsE @ 001d95cc (arm) */
void fn_001d95cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d95cc:;
    {
        cpu->r[3] = rd32(0x001d95d4u + + 0x48u);
    }
L_001d95d0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d95d4:;
    {
        cpu->r[2] = rd32(0x001d95dcu + + 0x44u);
    }
L_001d95d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d95dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d95e4u, cpu->r[3], 0, 0);
    }
L_001d95e0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d95e4:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[0]);
    }
L_001d95e8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d95ec:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001d95f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d95f4:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[0]);
    }
L_001d95f8:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[0]);
    }
L_001d95fc:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_001d9600:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[1];
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
    }
L_001d9604:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d9608:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
        }
    }
L_001d960c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d9610:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d9614:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d9618:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10DecoderRawC1EPNS_11TrackParamsE @ 001d9624 (arm) */
void fn_001d9624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9624:;
    {
        cpu->r[3] = rd32(0x001d962cu + + 0x48u);
    }
L_001d9628:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d962c:;
    {
        cpu->r[2] = rd32(0x001d9634u + + 0x44u);
    }
L_001d9630:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d9634:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d963cu, cpu->r[3], 0, 0);
    }
L_001d9638:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d963c:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[0]);
    }
L_001d9640:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d9644:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001d9648:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d964c:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[0]);
    }
L_001d9650:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[0]);
    }
L_001d9654:;
    {
        wr32(cpu->r[12], cpu->r[2]);
    }
L_001d9658:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[1];
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
    }
L_001d965c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d9660:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
        }
    }
L_001d9664:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        }
    }
L_001d9668:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d966c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d9670:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderRawCursorC2EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d967c (arm) */
void fn_001d967c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d967c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001d9680:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d9684:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001d9688:;
    {
        cpu->r[5] = rd32(0x001d9690u + + 0x4cu);
    }
L_001d968c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d9690:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d9694:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d9698:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_001d969c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_001d96a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d96a8u, cpu->r[5], 0, 0);
    }
L_001d96a4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_001d96a8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_001d96ac:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001d96b0:;
    {
        cpu->r[6] = rd32(0x001d96b8u + + 0x28u);
    }
L_001d96b4:;
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
L_001d96b8:;
    {
        wr8(cpu->r[12] + + 0x1cu, cpu->r[4]);
    }
L_001d96bc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d96c0:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[8]);
    }
L_001d96c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001d96c8:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[6]);
        cpu->r[7] = wb_tmp;
    }
L_001d96cc:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001d96d0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d96d4:;
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
L_001d96d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderRawCursorC1EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d96e4 (arm) */
void fn_001d96e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d96e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001d96e8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d96ec:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001d96f0:;
    {
        cpu->r[5] = rd32(0x001d96f8u + + 0x4cu);
    }
L_001d96f4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d96f8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d96fc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d9700:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_001d9704:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_001d9708:;
    {
        cpu->r[5] = add_flags(cpu, 0x001d9710u, cpu->r[5], 0, 0);
    }
L_001d970c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_001d9710:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_001d9714:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001d9718:;
    {
        cpu->r[6] = rd32(0x001d9720u + + 0x28u);
    }
L_001d971c:;
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
L_001d9720:;
    {
        wr8(cpu->r[12] + + 0x1cu, cpu->r[4]);
    }
L_001d9724:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001d9728:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[8]);
    }
L_001d972c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001d9730:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[6]);
        cpu->r[7] = wb_tmp;
    }
L_001d9734:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001d9738:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001d973c:;
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
L_001d9740:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderRawCursor9DecodeRefERPvi @ 001d974c (arm) */
void fn_001d974c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d974c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d9750:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d9754:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9758:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d975c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9760:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d9764:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001d9768:;
    {
        cpu->r[14] = 0x001d9770u;
    }
L_001d976c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9770u)) return;
    }
L_001d9770:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d97ac;
        }
    }
L_001d9778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d977c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d9780:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d9784:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d9788:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d978c:;
    {
        cpu->r[14] = 0x001d9794u;
    }
L_001d9790:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9794u)) return;
    }
L_001d9794:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001d9798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d979c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d97a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d97d0;
        }
    }
L_001d97a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d97a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d97acu)) return;
    }
L_001d97ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d97b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d97b4:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001d97b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d97bc:;
    {
        cpu->r[14] = 0x001d97c4u;
    }
L_001d97c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d97c4u)) return;
    }
L_001d97c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d97c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d97cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d97d0u)) return;
    }
L_001d97d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d97d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d97d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d97dc:;
    {
        cpu->r[14] = 0x001d97e4u;
    }
L_001d97e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d97e4u)) return;
    }
L_001d97e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d97e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d97a4;
        }
    }
L_001d97ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d97f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d97f4:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d97f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d97fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9800:;
    {
        cpu->r[14] = 0x001d9808u;
    }
L_001d9804:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9808u)) return;
    }
L_001d9808:;
    {
        goto L_001d97a4;
    }
}

/* _ZN3vox16DecoderRawCursor6DecodeEPvi @ 001d980c (arm) */
void fn_001d980c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d980c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d9810:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d9814:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d9818:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d981c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001d9820:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d98b0;
        }
    }
L_001d9824:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001d9828:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d982c:;
    {
        goto L_001d9838;
    }
L_001d9830:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001d9834:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d98b0;
        }
    }
L_001d9838:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d983c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d9840:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001d9844:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d9848:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d984c:;
    {
        cpu->r[14] = 0x001d9854u;
    }
L_001d9850:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9854u)) return;
    }
L_001d9854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9858:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_001d985c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d98b0;
        }
    }
L_001d9860:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x1cu);
    }
L_001d9864:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001d9868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d986c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9830;
        }
    }
L_001d9870:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d9874:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d9878:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d987c:;
    {
        cpu->r[14] = 0x001d9884u;
    }
L_001d9880:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9884u)) return;
    }
L_001d9884:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9830;
        }
    }
L_001d988c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001d9890:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9894:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d9898:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d989c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d98a0:;
    {
        cpu->r[14] = 0x001d98a8u;
    }
L_001d98a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d98a8u)) return;
    }
L_001d98a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d98ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9830;
        }
    }
L_001d98b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d98b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d98b8u)) return;
    }
}

/* _ZN3vox16DecoderRawCursor4SeekEj @ 001d98b8 (arm) */
void fn_001d98b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d98b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001d98bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d98c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001d98c4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d98c8:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d98ccu)) return;
        }
    }
L_001d98cc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_001d98d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d98d4:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d98d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d98dc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[12] = v;
    }
L_001d98e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d98e4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[12] = v;
    }
L_001d98e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d98ec:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12]; cpu->r[1] = v;
    }
L_001d98f0:;
    {
        cpu->r[14] = 0x001d98f8u;
    }
L_001d98f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d98f8u)) return;
    }
L_001d98f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d98fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9900u)) return;
    }
}

/* _ZN3vox16DecoderRawCursor7HasDataEv @ 001d9900 (arm) */
void fn_001d9900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9900:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001d9904:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9908:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d990c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d9934;
        }
    }
L_001d9914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001d9918:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d991c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9920:;
    {
        cpu->r[14] = 0x001d9928u;
    }
L_001d9924:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9928u)) return;
    }
L_001d9928:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_001d992c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001d9930:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9934u)) return;
    }
L_001d9934:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d9938:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d993c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9940:;
    {
        cpu->r[14] = 0x001d9948u;
    }
L_001d9944:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9948u)) return;
    }
L_001d9948:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d994c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9914;
        }
    }
L_001d9950:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d9954:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9958:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d995c:;
    {
        cpu->r[14] = 0x001d9964u;
    }
L_001d9960:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9964u)) return;
    }
L_001d9964:;
    {
        goto L_001d9914;
    }
}

/* _ZN3vox10DecoderRawD1Ev @ 001d9968 (arm) */
void fn_001d9968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9968:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox10DecoderRawD0Ev @ 001d996c (arm) */
void fn_001d996c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d996c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9970:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9974:;
    {
        cpu->r[14] = 0x001d9978u; fn_0018ba20(cpu);
    }
L_001d9978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d997c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9980u)) return;
    }
}

/* _ZN3vox16DecoderRawCursorD0Ev @ 001d9980 (arm) */
void fn_001d9980(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9980:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9988:;
    {
        cpu->r[14] = 0x001d998cu; fn_0018ba20(cpu);
    }
L_001d998c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9990:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9994u)) return;
    }
}

/* _ZN3vox10DecoderRaw13DestroyCursorEPNS_22DecoderCursorInterfaceE @ 001d9994 (arm) */
void fn_001d9994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9994:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9998:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d999c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d99a0u)) return;
        }
    }
L_001d99a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d99a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d99a8:;
    {
        cpu->r[14] = 0x001d99b0u;
    }
L_001d99ac:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d99b0u)) return;
    }
L_001d99b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d99b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d99b8:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox10DecoderRaw15CreateNewCursorEPNS_21StreamCursorInterfaceE @ 001d99bc (arm) */
void fn_001d99bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d99bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d99c0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d99c4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d99c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d99cc:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001d99d0:;
    {
        cpu->r[14] = 0x001d99d4u; fn_00097dd0(cpu);
    }
L_001d99d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d99d8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d99dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d99e0:;
    {
        cpu->r[14] = 0x001d99e4u; fn_001d96e4(cpu);
    }
L_001d99e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d99e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d99ecu)) return;
    }
}

/* _ZN3vox17DecoderRawFactoryEPv @ 001d99ec (arm) */
void fn_001d99ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d99ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d99f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d99f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d99f8:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001d99fc:;
    {
        cpu->r[14] = 0x001d9a00u; fn_00097dd0(cpu);
    }
L_001d9a00:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d9a04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9a08:;
    {
        cpu->r[14] = 0x001d9a0cu; fn_001d9624(cpu);
    }
L_001d9a0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9a10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a14u)) return;
    }
}

/* _ZN3vox16DecoderStbVorbis7GetTypeEv @ 001d9a14 (arm) */
void fn_001d9a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9a14:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001d9a18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox16DecoderStbVorbis8GetParamEv @ 001d9a1c (arm) */
void fn_001d9a1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9a1c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d9a20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z5fgetcPN3vox21StreamCursorInterfaceE @ 001d9a24 (arm) */
void fn_001d9a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9a24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9a28:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001d9a2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d9a30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001d9a34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9a50;
        }
    }
L_001d9a38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9a3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000007u, 0, 0);
    }
L_001d9a40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001d9a44:;
    {
        cpu->r[14] = 0x001d9a4cu;
    }
L_001d9a48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a4cu)) return;
    }
L_001d9a4c:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x7u);
    }
L_001d9a50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d9a54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a58u)) return;
    }
}

/* _Z5freadPvjjPN3vox21StreamCursorInterfaceE @ 001d9a58 (arm) */
void fn_001d9a58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9a58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d9a5c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d9a60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9a64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d9a68:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d9a6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a70u)) return;
        }
    }
L_001d9a70:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_001d9a74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001d9a78:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d9a7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9a80:;
    {
        cpu->r[14] = 0x001d9a88u;
    }
L_001d9a84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a88u)) return;
    }
L_001d9a88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d9a8c:;
    {
        cpu->r[14] = 0x001d9a90u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001d9a90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9a94u)) return;
    }
}

/* _Z5ftellPN3vox21StreamCursorInterfaceE @ 001d9a94 (arm) */
void fn_001d9a94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9a94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9a98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9a9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d9aa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9aa4u)) return;
        }
    }
L_001d9aa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9aa8:;
    {
        cpu->r[14] = 0x001d9ab0u;
    }
L_001d9aac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9ab0u)) return;
    }
L_001d9ab0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9ab4u)) return;
    }
}

/* _Z5fseekPN3vox21StreamCursorInterfaceEii @ 001d9ab4 (arm) */
void fn_001d9ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9ab4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9ab8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9abc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001d9ac0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9ac4u)) return;
        }
    }
L_001d9ac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d9ac8:;
    {
        cpu->r[14] = 0x001d9ad0u;
    }
L_001d9acc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9ad0u)) return;
    }
L_001d9ad0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d9ad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9ad8u)) return;
    }
}

/* _Z6fclosePN3vox21StreamCursorInterfaceE @ 001d9ad8 (arm) */
void fn_001d9ad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9ad8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d9adc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22DecoderStbVorbisCursor7HasDataEv @ 001d9ae0 (arm) */
void fn_001d9ae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9ae0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001d9ae4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9ae8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d9aec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9af0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001d9af4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9af8u)) return;
        }
    }
L_001d9af8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d9afc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d9b00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d9b04:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001d9b14;
        }
    }
L_001d9b08:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001d9b0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d9b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d9b24;
        }
    }
L_001d9b14:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d9b18:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d9b1c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d9b20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9b24u)) return;
    }
L_001d9b24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d9b28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9b2c:;
    {
        cpu->r[14] = 0x001d9b34u;
    }
L_001d9b30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9b34u)) return;
    }
L_001d9b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d9b38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d9b3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d9b40:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d9b44:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d9b48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9b4cu)) return;
    }
}

/* _ZN3vox22DecoderStbVorbisCursor4SeekEj @ 001d9b4c (arm) */
void fn_001d9b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9b4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001d9b50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9b54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001d9b58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001d9b5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9b60:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001d9b70;
        }
    }
L_001d9b64:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d9b68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d9b6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9b70u)) return;
    }
L_001d9b70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d9b74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d9b64;
        }
    }
L_001d9b78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001d9b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9b64;
        }
    }
L_001d9b84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d9b88:;
    {
        cpu->r[14] = 0x001d9b8cu; fn_001fe650(cpu);
    }
L_001d9b8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d9b90:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d9b94:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[1]);
    }
L_001d9b98:;
    {
        goto L_001d9b68;
    }
}

/* _ZN3vox22DecoderStbVorbisCursor6DecodeEPvi @ 001d9b9c (arm) */
void fn_001d9b9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9b9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d9ba0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9ba4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001d9ba8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001d9bac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9bb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9bb4u)) return;
        }
    }
L_001d9bb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d9bb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_001d9bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9c5c;
        }
    }
L_001d9bc0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d9bc4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_001d9bc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9bcc:;
    {
        cpu->r[14] = 0x001d9bd0u; fn_001fed24(cpu);
    }
L_001d9bd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d9bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001d9bd8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d9bdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d9be0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001d9be4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d9c0c;
        }
    }
L_001d9be8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_001d9bec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d9bf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d9c30;
        }
    }
L_001d9bf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d9bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9bfc:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001d9c00:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c04:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9c0cu)) return;
    }
L_001d9c0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001d9c10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d9c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9be8;
        }
    }
L_001d9c18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d9c1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9c20:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001d9c24:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c28:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9c30u)) return;
    }
L_001d9c30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d9c34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9c38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9c3c:;
    {
        cpu->r[14] = 0x001d9c44u;
    }
L_001d9c40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9c44u)) return;
    }
L_001d9c44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001d9c48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9c4c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001d9c50:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c54:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_001d9c58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9c5cu)) return;
    }
L_001d9c5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d9c60:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_001d9c64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001d9c68:;
    {
        cpu->r[14] = 0x001d9c6cu; fn_001feaec(cpu);
    }
L_001d9c6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d9c70:;
    {
        goto L_001d9bd4;
    }
}

/* _ZN3vox22DecoderStbVorbisCursorD1Ev @ 001d9c74 (arm) */
void fn_001d9c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9c74:;
    {
        cpu->r[3] = rd32(0x001d9c7cu + + 0x30u);
    }
L_001d9c78:;
    {
        cpu->r[2] = rd32(0x001d9c80u + + 0x30u);
    }
L_001d9c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d9c84u, cpu->r[3], 0, 0);
    }
L_001d9c80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9c84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9c88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001d9c8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d9c90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9c94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d9c98:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d9c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9ca4;
        }
    }
L_001d9ca0:;
    {
        cpu->r[14] = 0x001d9ca4u; fn_001fb8a4(cpu);
    }
L_001d9ca4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9ca8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9cacu)) return;
    }
}

/* _ZN3vox22DecoderStbVorbisCursorD0Ev @ 001d9cb4 (arm) */
void fn_001d9cb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9cb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9cb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9cbc:;
    {
        cpu->r[14] = 0x001d9cc0u; fn_001d9c74(cpu);
    }
L_001d9cc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9cc4:;
    {
        cpu->r[14] = 0x001d9cc8u; fn_0018ba20(cpu);
    }
L_001d9cc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9ccc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9cd0u)) return;
    }
}

/* _ZN3vox22DecoderStbVorbisCursorD2Ev @ 001d9cd0 (arm) */
void fn_001d9cd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9cd0:;
    {
        cpu->r[3] = rd32(0x001d9cd8u + + 0x30u);
    }
L_001d9cd4:;
    {
        cpu->r[2] = rd32(0x001d9cdcu + + 0x30u);
    }
L_001d9cd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d9ce0u, cpu->r[3], 0, 0);
    }
L_001d9cdc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9ce0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9ce4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001d9ce8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d9cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9cf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d9cf4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d9cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9d00;
        }
    }
L_001d9cfc:;
    {
        cpu->r[14] = 0x001d9d00u; fn_001fb8a4(cpu);
    }
L_001d9d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9d04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9d08u)) return;
    }
}

/* _ZN3vox16DecoderStbVorbisD1Ev @ 001d9d10 (arm) */
void fn_001d9d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9d10:;
    {
        cpu->r[3] = rd32(0x001d9d18u + + 0x30u);
    }
L_001d9d14:;
    {
        cpu->r[2] = rd32(0x001d9d1cu + + 0x30u);
    }
L_001d9d18:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d9d20u, cpu->r[3], 0, 0);
    }
L_001d9d1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9d20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9d24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d9d28:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d9d2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9d30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d9d34:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d9d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9d40;
        }
    }
L_001d9d3c:;
    {
        cpu->r[14] = 0x001d9d40u; fn_001fb8a4(cpu);
    }
L_001d9d40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9d44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9d48u)) return;
    }
}

/* _ZN3vox16DecoderStbVorbisD0Ev @ 001d9d50 (arm) */
void fn_001d9d50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9d50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9d54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9d58:;
    {
        cpu->r[14] = 0x001d9d5cu; fn_001d9d10(cpu);
    }
L_001d9d5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9d60:;
    {
        cpu->r[14] = 0x001d9d64u; fn_0018ba20(cpu);
    }
L_001d9d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9d68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9d6cu)) return;
    }
}

/* _ZN3vox16DecoderStbVorbisD2Ev @ 001d9d6c (arm) */
void fn_001d9d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9d6c:;
    {
        cpu->r[3] = rd32(0x001d9d74u + + 0x30u);
    }
L_001d9d70:;
    {
        cpu->r[2] = rd32(0x001d9d78u + + 0x30u);
    }
L_001d9d74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d9d7cu, cpu->r[3], 0, 0);
    }
L_001d9d78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9d7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9d80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001d9d84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d9d88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9d8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001d9d90:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001d9d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9d9c;
        }
    }
L_001d9d98:;
    {
        cpu->r[14] = 0x001d9d9cu; fn_001fb8a4(cpu);
    }
L_001d9d9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9da0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9da4u)) return;
    }
}

/* _ZN3vox22DecoderStbVorbisCursorC1EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d9dac (arm) */
void fn_001d9dac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9dac:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001d9db0:;
    {
        cpu->r[14] = rd32(0x001d9db8u + + 0xacu);
    }
L_001d9db4:;
    {
        cpu->r[3] = rd32(0x001d9dbcu + + 0xacu);
    }
L_001d9db8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9dbc:;
    {
        cpu->r[14] = add_flags(cpu, 0x001d9dc4u, cpu->r[14], 0, 0);
    }
L_001d9dc0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d9dc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d9dc8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d9dcc:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001d9dd0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001d9dd4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d9dd8:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d9ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d9de0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001d9de4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d9de8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[12]);
    }
L_001d9dec:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001d9df0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001d9df4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001d9df8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_001d9dfc:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001d9e00:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001d9e04:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_001d9e08:;
    {
        cpu->r[14] = 0x001d9e0cu; fn_001fe85c(cpu);
    }
L_001d9e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9e10:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001d9e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9e50;
        }
    }
L_001d9e18:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d9e1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d9e20:;
    {
        cpu->r[14] = 0x001d9e24u; fn_001f7e04(cpu);
    }
L_001d9e24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d9e28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d9e2c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001d9e30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9e34:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001d9e38:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001d9e3c:;
    {
        cpu->r[14] = 0x001d9e40u; fn_001f9314(cpu);
    }
L_001d9e40:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d9e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9e48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d9e4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9e50u)) return;
    }
L_001d9e50:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d9e54:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d9e58:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d9e5c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d9e60:;
    {
        goto L_001d9e44;
    }
}

/* _ZN3vox22DecoderStbVorbisCursorC2EPNS_16DecoderInterfaceEPNS_21StreamCursorInterfaceE @ 001d9e6c (arm) */
void fn_001d9e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9e6c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001d9e70:;
    {
        cpu->r[14] = rd32(0x001d9e78u + + 0xacu);
    }
L_001d9e74:;
    {
        cpu->r[3] = rd32(0x001d9e7cu + + 0xacu);
    }
L_001d9e78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9e7c:;
    {
        cpu->r[14] = add_flags(cpu, 0x001d9e84u, cpu->r[14], 0, 0);
    }
L_001d9e80:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d9e84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d9e88:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001d9e8c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001d9e90:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001d9e94:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001d9e98:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d9e9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d9ea0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001d9ea4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001d9ea8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[12]);
    }
L_001d9eac:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001d9eb0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001d9eb4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001d9eb8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_001d9ebc:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001d9ec0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001d9ec4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_001d9ec8:;
    {
        cpu->r[14] = 0x001d9eccu; fn_001fe85c(cpu);
    }
L_001d9ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d9ed0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001d9ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d9f10;
        }
    }
L_001d9ed8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d9edc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d9ee0:;
    {
        cpu->r[14] = 0x001d9ee4u; fn_001f7e04(cpu);
    }
L_001d9ee4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d9ee8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d9eec:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001d9ef0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001d9ef4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001d9ef8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001d9efc:;
    {
        cpu->r[14] = 0x001d9f00u; fn_001f9314(cpu);
    }
L_001d9f00:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d9f04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9f08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d9f0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9f10u)) return;
    }
L_001d9f10:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001d9f14:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001d9f18:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d9f1c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001d9f20:;
    {
        goto L_001d9f04;
    }
}

/* _ZN3vox16DecoderStbVorbis13DestroyCursorEPNS_22DecoderCursorInterfaceE @ 001d9f2c (arm) */
void fn_001d9f2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9f2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9f30:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d9f34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9f38u)) return;
        }
    }
L_001d9f38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d9f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9f40:;
    {
        cpu->r[14] = 0x001d9f48u;
    }
L_001d9f44:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9f48u)) return;
    }
L_001d9f48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9f4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d9f50:;
    {
        return fn_00097dc8(cpu);
    }
}

/* _ZN3vox16DecoderStbVorbis15CreateNewCursorEPNS_21StreamCursorInterfaceE @ 001d9f54 (arm) */
void fn_001d9f54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9f54:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d9f58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d9f5c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d9f60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9f64:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_001d9f68:;
    {
        cpu->r[14] = 0x001d9f6cu; fn_00097dd0(cpu);
    }
L_001d9f6c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d9f70:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d9f74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d9f78:;
    {
        cpu->r[14] = 0x001d9f7cu; fn_001d9dac(cpu);
    }
L_001d9f7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d9f80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9f84u)) return;
    }
}

/* _ZN3vox23DecoderStbVorbisFactoryEPv @ 001d9f84 (arm) */
void fn_001d9f84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9f84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d9f88:;
    {
        cpu->r[4] = rd32(0x001d9f90u + + 0x28u);
    }
L_001d9f8c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d9f94u, cpu->r[4], 0, 0);
    }
L_001d9f90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9f94:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001d9f98:;
    {
        cpu->r[14] = 0x001d9f9cu; fn_00097dd0(cpu);
    }
L_001d9f9c:;
    {
        cpu->r[3] = rd32(0x001d9fa4u + + 0x18u);
    }
L_001d9fa0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d9fa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d9fa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001d9fac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001d9fb0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001d9fb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d9fb8u)) return;
    }
}

/* _ZN3vox21DriverSourceInterface15SetDSPParameterEiPv @ 001d9fc0 (arm) */
void fn_001d9fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface7RampOutEv @ 001d9fc4 (arm) */
void fn_001d9fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface6RampInEv @ 001d9fc8 (arm) */
void fn_001d9fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface15SetDSPParameterEiPv @ 001d9fcc (arm) */
void fn_001d9fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fcc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface19SetStaticBusRoutingEPc @ 001d9fd0 (arm) */
void fn_001d9fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fd0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface20SetDynamicBusRoutingEPc @ 001d9fd4 (arm) */
void fn_001d9fd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface18SetSFXPresetActiveEibf @ 001d9fd8 (arm) */
void fn_001d9fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface13SetOutputModeENS_13VoxOutputModeE @ 001d9fdc (arm) */
void fn_001d9fdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fdc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d9fe0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface13GetOutputModeEv @ 001d9fe4 (arm) */
void fn_001d9fe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fe4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d9fe8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface20AllowBufferReferenceEv @ 001d9fec (arm) */
void fn_001d9fec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9fec:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d9ff0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface14GetBufferCountEv @ 001d9ff4 (arm) */
void fn_001d9ff4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9ff4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_001d9ff8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7_JNIEnv11GetMethodIDEP7_jclassPKcS3_ @ 001d9ffc (arm) */
void fn_001d9ffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d9ffc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001da000:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001da004:;
    {
        cpu->r[14] = 0x001da00cu;
    }
L_001da008:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da00cu)) return;
    }
L_001da00c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001da010u)) return;
    }
}

/* _Z12VoxSetJavaVMP7_JavaVM @ 001da010 (arm) */
void fn_001da010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da010:;
    {
        cpu->r[3] = rd32(0x001da018u + + 0x10u);
    }
L_001da014:;
    {
        cpu->r[2] = rd32(0x001da01cu + + 0x10u);
    }
L_001da018:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da020u, cpu->r[3], 0, 0);
    }
L_001da01c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001da020:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001da024:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21VoxSetAndroidAPILeveli @ 001da030 (arm) */
void fn_001da030(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da030:;
    {
        cpu->r[3] = rd32(0x001da038u + + 0x10u);
    }
L_001da034:;
    {
        cpu->r[2] = rd32(0x001da03cu + + 0x10u);
    }
L_001da038:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da040u, cpu->r[3], 0, 0);
    }
L_001da03c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001da040:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001da044:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19DriverAndroidSource10PrintDebugEv @ 001da050 (arm) */
void fn_001da050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da050:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid8_InitOSLEPv @ 001da054 (arm) */
void fn_001da054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da054:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid12_ShutdownOSLEv @ 001da058 (arm) */
void fn_001da058(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da058:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid11_SuspendOSLEv @ 001da05c (arm) */
void fn_001da05c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da05c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid10_ResumeOSLEv @ 001da060 (arm) */
void fn_001da060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da060:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid10PrintDebugEv @ 001da064 (arm) */
void fn_001da064(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da064:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid9_UpdateATEf @ 001da068 (arm) */
void fn_001da068(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da068:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid10_UpdateOSLEf @ 001da06c (arm) */
void fn_001da06c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da06c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid6UpdateEf @ 001da070 (arm) */
void fn_001da070(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da070:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001da074:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001da078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da088;
        }
    }
L_001da07c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001da080:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001da084:;
    {
        return fn_001da06c(cpu);
    }
L_001da088:;
    {
        return fn_001da068(cpu);
    }
}

/* _ZN7_JNIEnv9NewObjectEP7_jclassP10_jmethodIDz @ 001da08c (arm) */
void fn_001da08c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da08c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[2]);
        wr32(cpu->r[13] + 4u, cpu->r[3]);
    }
L_001da090:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001da094:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001da098:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001da09c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001da0a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001da0a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001da0a8:;
    {
        cpu->r[14] = 0x001da0b0u;
    }
L_001da0ac:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da0b0u)) return;
    }
L_001da0b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001da0b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        cpu->r[14] = v0;
        cpu->r[13] += 4u;
    }
L_001da0b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001da0bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7_JNIEnv24CallNonvirtualVoidMethodEP8_jobjectP7_jclassP10_jmethodIDz @ 001da0c0 (arm) */
void fn_001da0c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da0c0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[3]);
        cpu->r[13] = wb_tmp;
    }
L_001da0c4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001da0c8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001da0cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001da0d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001da0d4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001da0d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001da0dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001da0e0:;
    {
        cpu->r[14] = 0x001da0e8u;
    }
L_001da0e4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x170u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da0e8u)) return;
    }
L_001da0e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001da0ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        cpu->r[14] = v0;
        cpu->r[13] += 4u;
    }
L_001da0f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001da0f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7_JNIEnv23CallNonvirtualIntMethodEP8_jobjectP7_jclassP10_jmethodIDz @ 001da0f8 (arm) */
void fn_001da0f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da0f8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[3]);
        cpu->r[13] = wb_tmp;
    }
L_001da0fc:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001da100:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001da104:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001da108:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001da10c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001da110:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001da114:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001da118:;
    {
        cpu->r[14] = 0x001da120u;
    }
L_001da11c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x140u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da120u)) return;
    }
L_001da120:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001da124:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        cpu->r[14] = v0;
        cpu->r[13] += 4u;
    }
L_001da128:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001da12c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7_JNIEnv19CallStaticIntMethodEP7_jclassP10_jmethodIDz @ 001da130 (arm) */
void fn_001da130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da130:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[2]);
        wr32(cpu->r[13] + 4u, cpu->r[3]);
    }
L_001da134:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001da138:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001da13c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001da140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001da144:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001da148:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001da14c:;
    {
        cpu->r[14] = 0x001da154u;
    }
L_001da150:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x208u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da154u)) return;
    }
L_001da154:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001da158:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        cpu->r[14] = v0;
        cpu->r[13] += 4u;
    }
L_001da15c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001da160:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13DriverAndroid9_ResumeATEv @ 001da164 (arm) */
void fn_001da164(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da164:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001da168:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001da16c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001da170:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001da174:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da178:;
    {
        cpu->r[7] = rd32(0x001da180u + + 0x7cu);
    }
L_001da17c:;
    {
        cpu->r[14] = 0x001da180u; fn_001ebcfc(cpu);
    }
L_001da180:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_001da184:;
    {
        cpu->r[7] = add_flags(cpu, 0x001da18cu, cpu->r[7], 0, 0);
    }
L_001da188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001da18c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001da1a0;
        }
    }
L_001da190:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da194:;
    {
        cpu->r[14] = 0x001da198u; fn_001ebcf8(cpu);
    }
L_001da198:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001da19c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001da1a0u)) return;
    }
L_001da1a0:;
    {
        cpu->r[3] = rd32(0x001da1a8u + + 0x58u);
    }
L_001da1a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001da1a8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001da1ac:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001da1b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001da1b4:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[6]);
        cpu->r[1] = wb_tmp;
    }
L_001da1b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001da1bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da1c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da1c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da1c8:;
    {
        cpu->r[14] = 0x001da1d0u;
    }
L_001da1cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da1d0u)) return;
    }
L_001da1d0:;
    {
        cpu->r[3] = rd32(0x001da1d8u + + 0x2cu);
    }
L_001da1d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001da1d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001da1dc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001da1e0:;
    {
        cpu->r[3] = rd32(0x001da1e8u + + 0x20u);
    }
L_001da1e4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001da1e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001da1ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da1f0:;
    {
        cpu->r[14] = 0x001da1f4u; fn_001da0c0(cpu);
    }
L_001da1f4:;
    {
        wr8(cpu->r[4] + + 0x60u, cpu->r[6]);
    }
L_001da1f8:;
    {
        goto L_001da190;
    }
}

/* _ZN3vox13DriverAndroid6ResumeEv @ 001da20c (arm) */
void fn_001da20c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da20c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001da210:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001da214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da224;
        }
    }
L_001da218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001da21c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001da220:;
    {
        return fn_001da060(cpu);
    }
L_001da224:;
    {
        return fn_001da164(cpu);
    }
}

/* _ZN3vox13DriverAndroid10_SuspendATEv @ 001da228 (arm) */
void fn_001da228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da228:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001da22c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001da230:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001da234:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001da238:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da23c:;
    {
        cpu->r[6] = rd32(0x001da244u + + 0x80u);
    }
L_001da240:;
    {
        cpu->r[14] = 0x001da244u; fn_001ebcfc(cpu);
    }
L_001da244:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_001da248:;
    {
        cpu->r[6] = add_flags(cpu, 0x001da250u, cpu->r[6], 0, 0);
    }
L_001da24c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001da250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001da264;
        }
    }
L_001da254:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da258:;
    {
        cpu->r[14] = 0x001da25cu; fn_001ebcf8(cpu);
    }
L_001da25c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001da260:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001da264u)) return;
    }
L_001da264:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001da268:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001da26c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001da270:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_001da274:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001da278:;
    {
        cpu->r[3] = rd32(0x001da280u + + 0x48u);
    }
L_001da27c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001da280:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da284:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da288:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da28c:;
    {
        cpu->r[14] = 0x001da294u;
    }
L_001da290:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da294u)) return;
    }
L_001da294:;
    {
        cpu->r[3] = rd32(0x001da29cu + + 0x30u);
    }
L_001da298:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001da29c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001da2a0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001da2a4:;
    {
        cpu->r[3] = rd32(0x001da2acu + + 0x24u);
    }
L_001da2a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001da2ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001da2b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da2b4:;
    {
        cpu->r[14] = 0x001da2b8u; fn_001da0c0(cpu);
    }
L_001da2b8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001da2bc:;
    {
        wr8(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001da2c0:;
    {
        goto L_001da254;
    }
}

/* _ZN3vox13DriverAndroid7SuspendEv @ 001da2d4 (arm) */
void fn_001da2d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da2d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001da2d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001da2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da2ec;
        }
    }
L_001da2e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001da2e4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001da2e8:;
    {
        return fn_001da05c(cpu);
    }
L_001da2ec:;
    {
        return fn_001da228(cpu);
    }
}

/* _ZN3vox13DriverAndroid12DoCallbackATERP7_jarray @ 001da2f0 (arm) */
void fn_001da2f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da2f0:;
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
L_001da2f4:;
    {
        cpu->r[4] = rd32(0x001da2fcu + + 0xe8u);
    }
L_001da2f8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001da2fc:;
    {
        cpu->r[1] = rd32(0x001da304u + + 0xe4u);
    }
L_001da300:;
    {
        cpu->r[4] = add_flags(cpu, 0x001da308u, cpu->r[4], 0, 0);
    }
L_001da304:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001da308:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001da30c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001da310:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001da314:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001da318:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_001da31c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001da320:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001da324:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001da328:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001da32c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da330:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da334:;
    {
        cpu->r[14] = 0x001da33cu;
    }
L_001da338:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da33cu)) return;
    }
L_001da33c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001da340:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da344:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001da348:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da34c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da350:;
    {
        cpu->r[14] = 0x001da358u;
    }
L_001da354:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x378u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da358u)) return;
    }
L_001da358:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da3dc;
        }
    }
L_001da360:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x5cu);
    }
L_001da364:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001da368:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001da36c:;
    {
        cpu->r[14] = 0x001da370u; fn_001ebcfc(cpu);
    }
L_001da370:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001da374:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001da378:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001da37c:;
    {
        cpu->r[14] = 0x001da380u; fn_001dda70(cpu);
    }
L_001da380:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001da384:;
    {
        cpu->r[14] = 0x001da388u; fn_001ebcf8(cpu);
    }
L_001da388:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001da38c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001da390:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da394:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001da398:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001da39c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001da3a0:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_001da3a4:;
    {
        cpu->r[14] = 0x001da3acu;
    }
L_001da3a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x37cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da3acu)) return;
    }
L_001da3ac:;
    {
        cpu->r[3] = rd32(0x001da3b4u + + 0x38u);
    }
L_001da3b0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001da3b4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x64u);
    }
L_001da3b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da3bc:;
    {
        cpu->r[3] = rd32(0x001da3c4u + + 0x2cu);
    }
L_001da3c0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001da3c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da3c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da3cc:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001da3d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001da3d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_001da3d8:;
    {
        cpu->r[14] = 0x001da3dcu; fn_001da0f8(cpu);
    }
L_001da3dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001da3e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001da3e4u)) return;
    }
}

/* _ZN3vox13DriverAndroid16UpdateThreadedATEPv @ 001da3f4 (arm) */
void fn_001da3f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da3f4:;
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
L_001da3f8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001da3fc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da400:;
    {
        cpu->r[5] = rd32(0x001da408u + + 0x230u);
    }
L_001da404:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001da408:;
    {
        cpu->r[5] = add_flags(cpu, 0x001da410u, cpu->r[5], 0, 0);
    }
L_001da40c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da600;
        }
    }
L_001da410:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001da414:;
    {
        cpu->r[9] = rd32(0x001da41cu + + 0x220u);
    }
L_001da418:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001da41c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001da420:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da424:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0x8u;
        wr32(cpu->r[10] + - 0x8u, cpu->r[7]);
        cpu->r[10] = wb_tmp;
    }
L_001da428:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001da42c:;
    {
        cpu->r[14] = 0x001da430u; fn_001ebcfc(cpu);
    }
L_001da430:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001da434:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001da438:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001da43c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001da440:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da444:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da448:;
    {
        cpu->r[14] = 0x001da450u;
    }
L_001da44c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da450u)) return;
    }
L_001da450:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da454:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001da458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da5f8;
        }
    }
L_001da45c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da460:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001da464:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da468:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001da46c:;
    {
        cpu->r[14] = 0x001da474u;
    }
L_001da470:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da474u)) return;
    }
L_001da474:;
    {
        cpu->r[11] = rd32(0x001da47cu + + 0x1c4u);
    }
L_001da478:;
    {
        cpu->r[3] = 0x0000ac44u;
    }
L_001da47c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001da480:;
    {
        cpu->r[3] = rd32(0x001da488u + + 0x1bcu);
    }
L_001da484:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001da488:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001da48c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001da490:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001da494:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001da498:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001da49c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001da4a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x58u);
    }
L_001da4a4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001da4a8:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001da4ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da4b0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001da4b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_001da4b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001da4bc:;
    {
        cpu->r[14] = 0x001da4c0u; fn_001da08c(cpu);
    }
L_001da4c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da4c4:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_001da4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da618;
        }
    }
L_001da4cc:;
    {
        cpu->r[3] = rd32(0x001da4d4u + + 0x174u);
    }
L_001da4d0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001da4d4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001da4d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da4dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001da4e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da4e4:;
    {
        cpu->r[14] = 0x001da4e8u; fn_001da0c0(cpu);
    }
L_001da4e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da4ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001da4f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da4f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da4f8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001da4fc:;
    {
        cpu->r[14] = 0x001da504u;
    }
L_001da500:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2c0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da504u)) return;
    }
L_001da504:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da508:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001da50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da618;
        }
    }
L_001da510:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[10]);
    }
L_001da514:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da518:;
    {
        cpu->r[14] = 0x001da51cu; fn_001ebcf8(cpu);
    }
L_001da51c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x5cu);
    }
L_001da520:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001da524:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001da52cu + + 0x104u);
    }
L_001da528:;
    {
        cpu->r[3] = rd32(0x001da530u + + 0x11cu);
    }
L_001da52c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001da530:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001da538u + + 0xfcu);
    }
L_001da534:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001da538:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_001da53c:;
    {
        cpu->r[7] = rd8(cpu->r[8]);
    }
L_001da540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001da544:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001da548:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001da54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da580;
        }
    }
L_001da550:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x60u);
    }
L_001da554:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001da558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da610;
        }
    }
L_001da55c:;
    {
        vfp_vmul(cpu, 15, 16, 17);
    }
L_001da560:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001da564:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001da568:;
    {
        cpu->r[14] = 0x001da56cu; imp_usleep(cpu); /* usleep */
    }
L_001da56c:;
    {
        cpu->r[7] = rd8(cpu->r[8]);
    }
L_001da570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001da574:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001da578:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001da57c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001da550;
        }
    }
L_001da580:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da584:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_001da588:;
    {
        cpu->r[14] = 0x001da58cu; fn_001ebcfc(cpu);
    }
L_001da58c:;
    {
        cpu->r[3] = rd32(0x001da594u + + 0xbcu);
    }
L_001da590:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001da594:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da598:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001da59c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001da5a0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001da5a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da5a8:;
    {
        cpu->r[14] = 0x001da5acu; fn_001da0c0(cpu);
    }
L_001da5ac:;
    {
        cpu->r[3] = rd32(0x001da5b4u + + 0xa0u);
    }
L_001da5b0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001da5b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001da5b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001da5bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da5c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da5c4:;
    {
        cpu->r[14] = 0x001da5c8u; fn_001da0c0(cpu);
    }
L_001da5c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001da5cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001da5d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da5d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da5d8:;
    {
        cpu->r[14] = 0x001da5e0u;
    }
L_001da5dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da5e0u)) return;
    }
L_001da5e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001da5e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da5e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da5ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da5f0:;
    {
        cpu->r[14] = 0x001da5f8u;
    }
L_001da5f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da5f8u)) return;
    }
L_001da5f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da5fc:;
    {
        cpu->r[14] = 0x001da600u; fn_001ebcf8(cpu);
    }
L_001da600:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001da604:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001da608:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001da60c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001da610u)) return;
    }
L_001da610:;
    {
        cpu->r[14] = 0x001da614u; fn_001da2f0(cpu);
    }
L_001da614:;
    {
        goto L_001da53c;
    }
L_001da618:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001da61c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da620:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da624:;
    {
        cpu->r[14] = 0x001da62cu;
    }
L_001da628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da62cu)) return;
    }
L_001da62c:;
    {
        goto L_001da5f8;
    }
}

/* _ZN3vox13DriverAndroid19DestroyDriverSourceEPNS_21DriverSourceInterfaceE @ 001da658 (arm) */
void fn_001da658(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da658:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001da65c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001da660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001da664:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001da668:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da66c:;
    {
        cpu->r[14] = 0x001da670u; fn_001ebcfc(cpu);
    }
L_001da670:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001da674:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[4] + + 0x10u;
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
        cpu->r[4] = wb_tmp;
        }
    }
L_001da678:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001da690;
        }
    }
L_001da67c:;
    {
        goto L_001da6b0;
    }
L_001da680:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001da684:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001da688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da6bc;
        }
    }
L_001da68c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da690:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001da694:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001da680;
        }
    }
L_001da698:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001da69c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da6a0:;
    {
        cpu->r[14] = 0x001da6a8u;
    }
L_001da6a4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da6a8u)) return;
    }
L_001da6a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da6ac:;
    {
        cpu->r[14] = 0x001da6b0u; fn_00097dc8(cpu);
    }
L_001da6b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001da6b4:;
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
L_001da6b8:;
    {
        return fn_001ebcf8(cpu);
    }
L_001da6bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001da6c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da6c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001da6c8:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001da6cc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001da6d0:;
    {
        cpu->r[14] = 0x001da6d4u; fn_00097dc8(cpu);
    }
L_001da6d4:;
    {
        goto L_001da698;
    }
}

/* _ZN3vox13DriverAndroid11_ShutdownATEv @ 001da6d8 (arm) */
void fn_001da6d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da6d8:;
    {
        cpu->r[3] = rd32(0x001da6e0u + + 0x1cu);
    }
L_001da6dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001da6e0:;
    {
        cpu->r[12] = rd32(0x001da6e8u + + 0x18u);
    }
L_001da6e4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001da6e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da6f0u, cpu->r[3], 0, 0);
    }
L_001da6ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001da6f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001da6f4:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001da6f8:;
    {
        imp_pthread_join(cpu); /* tail pthread_join */ return;
    }
}

/* _ZN3vox13DriverAndroid8ShutdownEv @ 001da704 (arm) */
void fn_001da704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da704:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001da708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001da70c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da71c;
        }
    }
L_001da710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001da714:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001da718:;
    {
        return fn_001da058(cpu);
    }
L_001da71c:;
    {
        return fn_001da6d8(cpu);
    }
}

/* _ZN3vox13DriverAndroid7_InitATEPv @ 001da720 (arm) */
void fn_001da720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da720:;
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
L_001da724:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001da728:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001da72c:;
    {
        cpu->r[4] = rd32(0x001da734u + + 0x250u);
    }
L_001da730:;
    {
        cpu->r[0] = 0x0000ac44u;
    }
L_001da734:;
    {
        cpu->r[14] = 0x001da738u; fn_001db290(cpu);
    }
L_001da738:;
    {
        cpu->r[3] = rd32(0x001da740u + + 0x248u);
    }
L_001da73c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001da744u, cpu->r[4], 0, 0);
    }
L_001da740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da744:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001da74c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da810;
        }
    }
L_001da750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001da754:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001da758:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da75c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001da760:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da764:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001da768:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[12]);
        cpu->r[1] = wb_tmp;
    }
L_001da76c:;
    {
        cpu->r[14] = 0x001da774u;
    }
L_001da770:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da774u)) return;
    }
L_001da774:;
    {
        cpu->r[3] = rd32(0x001da77cu + + 0x210u);
    }
L_001da778:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da77c:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da780:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001da784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da818;
        }
    }
L_001da788:;
    {
        cpu->r[7] = rd32(0x001da790u + + 0x200u);
    }
L_001da78c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001da790:;
    {
        cpu->r[3] = 0x0000ac44u;
    }
L_001da794:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001da798:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_001da79c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da7a0:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001da7a4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001da7a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001da7ac:;
    {
        cpu->r[14] = 0x001da7b0u; fn_001da130(cpu);
    }
L_001da7b0:;
    {
        cpu->r[2] = rd32(0x001da7b8u + + 0x1dcu);
    }
L_001da7b4:;
    {
        cpu->r[1] = 0x00000800u;
    }
L_001da7b8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001da7bc:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_001da7c0:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[14]);
    }
L_001da7c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001da7c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001da7cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da7d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001da7d4:;
    {
        cpu->r[3] = rd32(0x001da7dcu + + 0x1bcu);
    }
L_001da7d8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001da7dc:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[0]);
    }
L_001da7e0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da7e4:;
    {
        cpu->r[3] = 0x000007ffu;
    }
L_001da7e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001da7ec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001da7f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_001da7f4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001da7f8:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[3]);
    }
L_001da7fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_001da800:;
    {
        wr8(cpu->r[6], cpu->r[14]);
    }
L_001da804:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001da808:;
    {
        wr8(cpu->r[5] + + 0x60u, cpu->r[12]);
    }
L_001da80c:;
    {
        cpu->r[14] = 0x001da810u; imp_pthread_create(cpu); /* pthread_create */
    }
L_001da810:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001da814:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001da818u)) return;
    }
L_001da818:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da81c:;
    {
        cpu->r[1] = rd32(0x001da824u + + 0x178u);
    }
L_001da820:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da824:;
    {
        cpu->r[1] = add_flags(cpu, 0x001da82cu, cpu->r[1], 0, 0);
    }
L_001da828:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da82c:;
    {
        cpu->r[14] = 0x001da834u;
    }
L_001da830:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da834u)) return;
    }
L_001da834:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001da838:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001da83c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001da810;
        }
    }
L_001da840:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da844:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001da848:;
    {
        cpu->r[7] = rd32(0x001da850u + + 0x140u);
    }
L_001da84c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001da850:;
    {
        cpu->r[8] = rd32(0x001da858u + + 0x148u);
    }
L_001da854:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001da858:;
    {
        cpu->r[14] = 0x001da860u;
    }
L_001da85c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da860u)) return;
    }
L_001da860:;
    {
        cpu->r[2] = rd32(0x001da868u + + 0x13cu);
    }
L_001da864:;
    {
        cpu->r[3] = rd32(0x001da86cu + + 0x13cu);
    }
L_001da868:;
    {
        cpu->r[8] = add_flags(cpu, 0x001da870u, cpu->r[8], 0, 0);
    }
L_001da86c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da874u, cpu->r[2], 0, 0);
    }
L_001da870:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da878u, cpu->r[3], 0, 0);
    }
L_001da874:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001da878:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001da87c:;
    {
        wr32(cpu->r[6], cpu->r[12]);
    }
L_001da880:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da884:;
    {
        cpu->r[14] = 0x001da888u; fn_001d9ffc(cpu);
    }
L_001da888:;
    {
        cpu->r[3] = rd32(0x001da890u + + 0x11cu);
    }
L_001da88c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da890:;
    {
        cpu->r[2] = rd32(0x001da898u + + 0x118u);
    }
L_001da894:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da898:;
    {
        cpu->r[3] = rd32(0x001da8a0u + + 0x114u);
    }
L_001da89c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da8a4u, cpu->r[2], 0, 0);
    }
L_001da8a0:;
    {
        cpu->r[12] = rd32(cpu->r[14]);
    }
L_001da8a4:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da8a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da8b0u, cpu->r[3], 0, 0);
    }
L_001da8ac:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_001da8b0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001da8b4:;
    {
        cpu->r[14] = 0x001da8bcu;
    }
L_001da8b8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1c4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001da8bcu)) return;
    }
L_001da8bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001da8c0:;
    {
        cpu->r[2] = rd32(0x001da8c8u + + 0xf0u);
    }
L_001da8c4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001da8c8:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da8cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da8d4u, cpu->r[2], 0, 0);
    }
L_001da8d0:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001da8d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da8d8:;
    {
        cpu->r[14] = 0x001da8dcu; fn_001d9ffc(cpu);
    }
L_001da8dc:;
    {
        cpu->r[2] = rd32(0x001da8e4u + + 0xd8u);
    }
L_001da8e0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001da8e4:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da8e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001da8ec:;
    {
        cpu->r[2] = rd32(0x001da8f4u + + 0xccu);
    }
L_001da8f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da8f8u, cpu->r[2], 0, 0);
    }
L_001da8f4:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001da8f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da8fc:;
    {
        cpu->r[14] = 0x001da900u; fn_001d9ffc(cpu);
    }
L_001da900:;
    {
        cpu->r[2] = rd32(0x001da908u + + 0xbcu);
    }
L_001da904:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001da908:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da90c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001da910:;
    {
        cpu->r[2] = rd32(0x001da918u + + 0xb0u);
    }
L_001da914:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da91cu, cpu->r[2], 0, 0);
    }
L_001da918:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001da91c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da920:;
    {
        cpu->r[14] = 0x001da924u; fn_001d9ffc(cpu);
    }
L_001da924:;
    {
        cpu->r[2] = rd32(0x001da92cu + + 0xa0u);
    }
L_001da928:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001da92c:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da930:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001da934:;
    {
        cpu->r[2] = rd32(0x001da93cu + + 0x94u);
    }
L_001da938:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da940u, cpu->r[2], 0, 0);
    }
L_001da93c:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001da940:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da944:;
    {
        cpu->r[14] = 0x001da948u; fn_001d9ffc(cpu);
    }
L_001da948:;
    {
        cpu->r[3] = rd32(0x001da950u + + 0x84u);
    }
L_001da94c:;
    {
        cpu->r[2] = rd32(0x001da954u + + 0x84u);
    }
L_001da950:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da954:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da958:;
    {
        cpu->r[2] = add_flags(cpu, 0x001da960u, cpu->r[2], 0, 0);
    }
L_001da95c:;
    {
        cpu->r[3] = rd32(0x001da964u + + 0x78u);
    }
L_001da960:;
    {
        cpu->r[3] = add_flags(cpu, 0x001da968u, cpu->r[3], 0, 0);
    }
L_001da964:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_001da968:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001da96c:;
    {
        cpu->r[14] = 0x001da970u; fn_001d9ffc(cpu);
    }
L_001da970:;
    {
        cpu->r[3] = rd32(0x001da978u + + 0x68u);
    }
L_001da974:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001da978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001da97c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001da980:;
    {
        goto L_001da78c;
    }
}

/* _ZN3vox13DriverAndroid4InitEPv @ 001da9e4 (arm) */
void fn_001da9e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001da9e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001da9e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001da9ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001da9f0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001da9f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001da9f8:;
    {
        cpu->r[14] = 0x001da9fcu; fn_001ebcfc(cpu);
    }
L_001da9fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001daa00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa04:;
    {
        cpu->r[14] = 0x001daa08u; fn_001db2b0(cpu);
    }
L_001daa08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa0c:;
    {
        cpu->r[14] = 0x001daa10u; fn_001db3a4(cpu);
    }
L_001daa10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001daa18:;
    {
        cpu->r[14] = 0x001daa1cu; fn_001da720(cpu);
    }
L_001daa1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001daa20:;
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
L_001daa24:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox13DriverAndroidD1Ev @ 001daa28 (arm) */
void fn_001daa28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001daa28:;
    {
        cpu->r[3] = rd32(0x001daa30u + + 0x2cu);
    }
L_001daa2c:;
    {
        cpu->r[2] = rd32(0x001daa34u + + 0x2cu);
    }
L_001daa30:;
    {
        cpu->r[3] = add_flags(cpu, 0x001daa38u, cpu->r[3], 0, 0);
    }
L_001daa34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001daa38:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001daa3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001daa40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001daa44:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001daa48:;
    {
        cpu->r[14] = 0x001daa4cu; fn_001da704(cpu);
    }
L_001daa4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa50:;
    {
        cpu->r[14] = 0x001daa54u; fn_001dbf70(cpu);
    }
L_001daa54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001daa5cu)) return;
    }
}

/* _ZN3vox13DriverAndroidD0Ev @ 001daa64 (arm) */
void fn_001daa64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001daa64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001daa68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001daa6c:;
    {
        cpu->r[14] = 0x001daa70u; fn_001daa28(cpu);
    }
L_001daa70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa74:;
    {
        cpu->r[14] = 0x001daa78u; fn_0018ba20(cpu);
    }
L_001daa78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daa7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001daa80u)) return;
    }
}

/* _ZN3vox13DriverAndroidD2Ev @ 001daa80 (arm) */
void fn_001daa80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001daa80:;
    {
        cpu->r[3] = rd32(0x001daa88u + + 0x2cu);
    }
L_001daa84:;
    {
        cpu->r[2] = rd32(0x001daa8cu + + 0x2cu);
    }
L_001daa88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001daa90u, cpu->r[3], 0, 0);
    }
L_001daa8c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001daa90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001daa94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001daa98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001daa9c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001daaa0:;
    {
        cpu->r[14] = 0x001daaa4u; fn_001da704(cpu);
    }
L_001daaa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daaa8:;
    {
        cpu->r[14] = 0x001daaacu; fn_001dbf70(cpu);
    }
L_001daaac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daab0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001daab4u)) return;
    }
}

/* _ZN3vox13DriverAndroidC1Ev @ 001daabc (arm) */
void fn_001daabc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001daabc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001daac0:;
    {
        cpu->r[5] = rd32(0x001daac8u + + 0x34u);
    }
L_001daac4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001daac8:;
    {
        cpu->r[14] = 0x001daaccu; fn_001dc188(cpu);
    }
L_001daacc:;
    {
        cpu->r[3] = rd32(0x001daad4u + + 0x2cu);
    }
L_001daad0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001daad8u, cpu->r[5], 0, 0);
    }
L_001daad4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001daad8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daadc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001daae0:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001daae4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001daae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001daaec:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001daaf0:;
    {
        cpu->r[14] = 0x001daaf4u; fn_001da9e4(cpu);
    }
L_001daaf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001daaf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001daafcu)) return;
    }
}

/* _ZN3vox12CreateDriverEv @ 001dab04 (arm) */
void fn_001dab04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dab04:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dab08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dab0c:;
    {
        cpu->r[0] = 0x0000006cu;
    }
L_001dab10:;
    {
        cpu->r[14] = 0x001dab14u; fn_00097dd0(cpu);
    }
L_001dab14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dab18:;
    {
        cpu->r[14] = 0x001dab1cu; fn_001daabc(cpu);
    }
L_001dab1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dab20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dab24u)) return;
    }
}

/* _ZN3vox13DriverAndroidC2Ev @ 001dab24 (arm) */
void fn_001dab24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dab24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dab28:;
    {
        cpu->r[5] = rd32(0x001dab30u + + 0x34u);
    }
L_001dab2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dab30:;
    {
        cpu->r[14] = 0x001dab34u; fn_001dc188(cpu);
    }
L_001dab34:;
    {
        cpu->r[3] = rd32(0x001dab3cu + + 0x2cu);
    }
L_001dab38:;
    {
        cpu->r[5] = add_flags(cpu, 0x001dab40u, cpu->r[5], 0, 0);
    }
L_001dab3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dab40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dab44:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001dab48:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001dab4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001dab50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dab54:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001dab58:;
    {
        cpu->r[14] = 0x001dab5cu; fn_001da9e4(cpu);
    }
L_001dab5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dab60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dab64u)) return;
    }
}

/* _ZN3vox19DriverAndroidSourceD1Ev @ 001dab6c (arm) */
void fn_001dab6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dab6c:;
    {
        cpu->r[3] = rd32(0x001dab74u + + 0x24u);
    }
L_001dab70:;
    {
        cpu->r[2] = rd32(0x001dab78u + + 0x24u);
    }
L_001dab74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dab7cu, cpu->r[3], 0, 0);
    }
L_001dab78:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dab7c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dab80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dab84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dab88:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001dab8c:;
    {
        cpu->r[14] = 0x001dab90u; fn_001dc0b4(cpu);
    }
L_001dab90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dab94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dab98u)) return;
    }
}

/* _ZN3vox19DriverAndroidSourceD0Ev @ 001daba0 (arm) */
void fn_001daba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001daba0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001daba4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001daba8:;
    {
        cpu->r[14] = 0x001dabacu; fn_001dab6c(cpu);
    }
L_001dabac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dabb0:;
    {
        cpu->r[14] = 0x001dabb4u; fn_0018ba20(cpu);
    }
L_001dabb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dabb8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dabbcu)) return;
    }
}

/* _ZN3vox19DriverAndroidSourceD2Ev @ 001dabbc (arm) */
void fn_001dabbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dabbc:;
    {
        cpu->r[3] = rd32(0x001dabc4u + + 0x24u);
    }
L_001dabc0:;
    {
        cpu->r[2] = rd32(0x001dabc8u + + 0x24u);
    }
L_001dabc4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dabccu, cpu->r[3], 0, 0);
    }
L_001dabc8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dabcc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dabd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dabd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dabd8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001dabdc:;
    {
        cpu->r[14] = 0x001dabe0u; fn_001dc0b4(cpu);
    }
L_001dabe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dabe4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dabe8u)) return;
    }
}

/* _ZN3vox19DriverAndroidSourceC1EPvS1_j @ 001dabf0 (arm) */
void fn_001dabf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dabf0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dabf4:;
    {
        cpu->r[4] = rd32(0x001dabfcu + + 0x28u);
    }
L_001dabf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dabfc:;
    {
        cpu->r[14] = 0x001dac00u; fn_001dc318(cpu);
    }
L_001dac00:;
    {
        cpu->r[3] = rd32(0x001dac08u + + 0x20u);
    }
L_001dac04:;
    {
        cpu->r[4] = add_flags(cpu, 0x001dac0cu, cpu->r[4], 0, 0);
    }
L_001dac08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dac0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001dac10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dac14:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001dac18:;
    {
        cpu->r[14] = 0x001dac1cu; fn_001ddbf4(cpu);
    }
L_001dac1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dac20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dac24u)) return;
    }
}

/* _ZN3vox13DriverAndroid18CreateDriverSourceEPvS1_i @ 001dac2c (arm) */
void fn_001dac2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dac2c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dac30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dac34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001dac38:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dac3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dac40:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001dac44:;
    {
        cpu->r[14] = 0x001dac48u; fn_001ebcfc(cpu);
    }
L_001dac48:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_001dac4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dac50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dac68;
        }
    }
L_001dac54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dac58:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001dac5c:;
    {
        cpu->r[14] = 0x001dac60u; fn_001ebcf8(cpu);
    }
L_001dac60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dac64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dac68u)) return;
    }
L_001dac68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dac6c:;
    {
        cpu->r[0] = 0x000000b4u;
    }
L_001dac70:;
    {
        cpu->r[14] = 0x001dac74u; fn_00097dd0(cpu);
    }
L_001dac74:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001dac78:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001dac7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001dac80:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001dac84:;
    {
        cpu->r[14] = 0x001dac88u; fn_001dabf0(cpu);
    }
L_001dac88:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001dac8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dac54;
        }
    }
L_001dac90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001dac94:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001dac98:;
    {
        cpu->r[14] = 0x001dac9cu; fn_00097dd0(cpu);
    }
L_001dac9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001daca0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001daca4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_001daca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001dacac:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001dacb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001dacb4:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001dacb8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001dacbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001dacc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dacc4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001dacc8:;
    {
        cpu->r[14] = 0x001dacccu; fn_001ebcf8(cpu);
    }
L_001daccc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dacd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dacd4u)) return;
    }
}

/* _ZN3vox19DriverAndroidSourceC2EPvS1_j @ 001dacd4 (arm) */
void fn_001dacd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dacd4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dacd8:;
    {
        cpu->r[4] = rd32(0x001dace0u + + 0x28u);
    }
L_001dacdc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dace0:;
    {
        cpu->r[14] = 0x001dace4u; fn_001dc318(cpu);
    }
L_001dace4:;
    {
        cpu->r[3] = rd32(0x001dacecu + + 0x20u);
    }
L_001dace8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001dacf0u, cpu->r[4], 0, 0);
    }
L_001dacec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dacf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001dacf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dacf8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001dacfc:;
    {
        cpu->r[14] = 0x001dad00u; fn_001ddbf4(cpu);
    }
L_001dad00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dad04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dad08u)) return;
    }
}

/* _ZN3vox21DriverSourceInterfaceD1Ev @ 001dad10 (arm) */
void fn_001dad10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21DriverSourceInterface6UpdateEf @ 001dad14 (arm) */
void fn_001dad14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21DriverSourceInterface20AllowBufferReferenceEv @ 001dad18 (arm) */
void fn_001dad18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad18:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001dad1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox21DriverSourceInterface18FreeDisposableDataEiRiS1_ @ 001dad20 (arm) */
void fn_001dad20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterfaceD1Ev @ 001dad24 (arm) */
void fn_001dad24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15DriverInterface6UpdateEf @ 001dad28 (arm) */
void fn_001dad28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface6UpdateEf @ 001dad2c (arm) */
void fn_001dad2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad2c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_001dad30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dad38u + + 0x1cu);
    }
L_001dad34:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dad38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001dad3c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dad40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001dad44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001dad48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 3u, &shc), 0, 0);
    }
L_001dad4c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001dad50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface21GetNbAvailableSamplesEi @ 001dad58 (arm) */
void fn_001dad58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dad58:;
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
L_001dad5c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x44u);
    }
L_001dad60:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001dad64:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dad68:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001dad6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dae00;
        }
    }
L_001dad70:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dad74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001dad78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001dad7c:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0x14u);
    }
L_001dad80:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001dad84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001dad88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dae04;
        }
    }
L_001dad8c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001dad90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001dad94:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001dad98:;
    {
        cpu->r[14] = 0x001dad9cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dad9c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x10u);
    }
L_001dada0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_001dada4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001dada8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dadec;
        }
    }
L_001dadac:;
    {
        goto L_001dae0c;
    }
L_001dadb0:;
    {
        cpu->r[14] = 0x001dadb4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dadb4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001dadb8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001dadbc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001dadc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_001dadc4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x14u);
    }
L_001dadc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dadcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dae04;
        }
    }
L_001dadd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001dadd4:;
    {
        cpu->r[14] = 0x001dadd8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dadd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001daddc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001dade0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001dade4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001dade8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001dae0c;
        }
    }
L_001dadec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001dadf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001dadf4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001dadf8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001dadfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dadb0;
        }
    }
L_001dae00:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001dae04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dae08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dae0cu)) return;
    }
L_001dae0c:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001dae10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dae14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dae18u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface25FillBufferStereo16NoInterEPii @ 001dae18 (arm) */
void fn_001dae18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dae18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001dae1c:;
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
L_001dae20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dae24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001dae28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dae2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001dae30:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001dae34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dae40;
        }
    }
L_001dae38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001dae3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dae40u)) return;
    }
L_001dae40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dae44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dae48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dae4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dae50:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dae54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dae58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dae38;
        }
    }
L_001dae5c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dae60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001dae64:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_001dae68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
        }
    }
L_001dae6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001dae70:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001dae74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_001dae78:;
    {
        cpu->r[14] = 0x001dae7cu; fn_001dad58(cpu);
    }
L_001dae7c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_001dae80:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001dae84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001db148;
        }
    }
L_001dae88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001dae8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001dae90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dae94:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dae98:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001dae9c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
        }
    }
L_001daea0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001daeb4;
        }
    }
L_001daea4:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001daea8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001daeac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001daeb0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001daeb4:;
    {
        cpu->r[11] = rd8(cpu->r[4] + + 0x24u);
    }
L_001daeb8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001daebc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001daec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db138;
        }
    }
L_001daec4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001daec8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001daecc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001daed0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001daee8;
        }
    }
L_001daed4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_001daed8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001daedc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_001daee0:;
    {
        cpu->r[14] = 0x001daee4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001daee4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001daee8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001daeec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001daef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db004;
        }
    }
L_001daef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001daef8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001daefc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001daf00:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001daf04:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001daf08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001daf0c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001daf10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001daf14:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001daf18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001daf1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001daf20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001daf24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001daf28:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_001daf2c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001daf30:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_001daf34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001daf38:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_001daf3c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001daf40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_001daf44:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_001daf48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001daf4c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001daf50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = cpu->r[1];
        }
    }
L_001daf54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001daf58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001daf5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db00c;
        }
    }
L_001daf60:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001daf64:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[2];
        }
    }
L_001daf68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dafc0;
        }
    }
L_001daf6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001daf70:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001daf74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001daf78:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_001daf7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001daf80:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_001daf84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001daf88:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8]; cpu->r[6] = v;
    }
L_001daf8c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001daf90:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_001daf94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 14u, &shc), 0, 0);
    }
L_001daf98:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001daf9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 14u, &shc), 0, 0);
    }
L_001dafa0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_001dafa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dafa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001daf70;
        }
    }
L_001dafac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dafb0:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001dafb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dafb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001dafbc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001dafc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dafc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001dafc8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_001dafcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001dafd0:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001dafd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db0ec;
        }
    }
L_001dafd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dafdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dafe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001dafe4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001dafe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001dafec:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001daff0:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001daff4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 0);
    }
L_001daff8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001daffc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001db000:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001daf18;
        }
    }
L_001db004:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001db008:;
    {
        goto L_001dae38;
    }
L_001db00c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001db010:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db0d0;
        }
    }
L_001db014:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001db018:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_001db01c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_001db020:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_001db024:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001db028:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_001db02c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_001db030:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001db034:;
    {
        goto L_001db08c;
    }
L_001db038:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_001db03c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001db040:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001db044:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001db048:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001db04c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_001db050:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_001db054:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001db058:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001db05c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
        }
    }
L_001db060:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_001db064:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001db068:;
    {
        uint32_t v = cpu->r[12] * cpu->r[8]; cpu->r[12] = v;
    }
L_001db06c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001db070:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_001db074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 14u, &shc), 0, 0);
    }
L_001db078:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_001db07c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 14u, &shc), 0, 0);
    }
L_001db080:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001db084:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001db088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db0ac;
        }
    }
L_001db08c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001db090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db038;
        }
    }
L_001db094:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001db098:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001db09c:;
    {
        cpu->r[14] = 0x001db0a0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001db0a0:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[11] = v;
    }
L_001db0a4:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[0], 1, 31u, &shc), cpu->r[11], 1, 0);
    }
L_001db0a8:;
    {
        goto L_001db038;
    }
L_001db0ac:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_001db0b0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001db0b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001db0b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001db0bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001db0c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_001db0c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001db0c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001db0cc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001db0d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001db0d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001db0d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_001db0dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x28u);
    }
L_001db0e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001db0e4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001db0e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dafd8;
        }
    }
L_001db0ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001db0f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001db0f4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_001db0f8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001db0fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001db100:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001db104:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001db108:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001db10c:;
    {
        wr8(cpu->r[3] + + 0x14u, cpu->r[12]);
    }
L_001db110:;
    {
        cpu->r[14] = 0x001db114u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001db114:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001db118:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[1]);
    }
L_001db11c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001db120:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001db124:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x14u);
    }
L_001db128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001db12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001daff0;
        }
    }
L_001db130:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001db134:;
    {
        goto L_001dae38;
    }
L_001db138:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001db13c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x28u);
    }
L_001db140:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001db144:;
    {
        goto L_001daee8;
    }
L_001db148:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001db14c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001db150:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001db154:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001db158:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
        }
    }
L_001db15c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_001db160:;
    {
        goto L_001dae98;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface13FreeAllBufferEv @ 001db164 (arm) */
void fn_001db164(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db164:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x44u);
    }
L_001db168:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001db16c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001db170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db1a8;
        }
    }
L_001db174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001db178:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x60u);
    }
L_001db17c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001db180:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001db184:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001db188:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001db18c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001db190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001db194:;
    {
        wr8(cpu->r[1] + + 0x14u, cpu->r[4]);
    }
L_001db198:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001db184;
        }
    }
L_001db19c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001db1a0:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[3]);
    }
L_001db1a4:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[3]);
    }
L_001db1a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001db1ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface15Set3DParametersENS_18ListenerParametersENS_22Vox3DGeneralParametersE @ 001db1b0 (arm) */
void fn_001db1b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db1b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001db1b4:;
    {
        cpu->r[12] = rd32(0x001db1bcu + + 0x8cu);
    }
L_001db1b8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001db1bc:;
    {
        cpu->r[5] = rd32(0x001db1c4u + + 0x88u);
    }
L_001db1c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_001db1c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001db1c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001db1cc:;
    {
        cpu->r[5] = add_flags(cpu, 0x001db1d4u, cpu->r[5], 0, 0);
    }
L_001db1d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_001db1d4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001db1d8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001db1dc:;
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
L_001db1e0:;
    {
        vfp_sync_flags(cpu);
    }
L_001db1e4:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_001db1e8:;
    {
        cpu->r[6] = rd32(0x001db1f0u + + 0x60u);
    }
L_001db1ec:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001db1f0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001db1f4:;
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
L_001db1f8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001db1fc:;
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
L_001db200:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001db204:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001db208:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001db20c:;
    {
        cpu->r[3] = rd32(0x001db214u + + 0x40u);
    }
L_001db210:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001db214:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db218:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001db234;
        }
    }
L_001db21c:;
    {
        cpu->r[3] = rd32(0x001db224u + + 0x34u);
    }
L_001db220:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001db224:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001db228:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001db22c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001db230:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db234:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001db238:;
    {
        cpu->r[3] = rd32(0x001db240u + + 0x18u);
    }
L_001db23c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001db240:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db244:;
    {
        goto L_001db228;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface23SetDriverCallbackPeriodEf @ 001db25c (arm) */
void fn_001db25c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db25c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001db264u + + 0x20u);
    }
L_001db260:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001db264:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001db268:;
    {
        cpu->r[3] = rd32(0x001db270u + + 0x18u);
    }
L_001db26c:;
    {
        cpu->r[2] = rd32(0x001db274u + + 0x18u);
    }
L_001db270:;
    {
        cpu->r[3] = add_flags(cpu, 0x001db278u, cpu->r[3], 0, 0);
    }
L_001db274:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001db278:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001db27c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db280:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface19SetDriverSampleRateEi @ 001db290 (arm) */
void fn_001db290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db290:;
    {
        cpu->r[3] = rd32(0x001db298u + + 0x10u);
    }
L_001db294:;
    {
        cpu->r[2] = rd32(0x001db29cu + + 0x10u);
    }
L_001db298:;
    {
        cpu->r[3] = add_flags(cpu, 0x001db2a0u, cpu->r[3], 0, 0);
    }
L_001db29c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001db2a0:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001db2a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox23DriverCallbackInterface4InitEPv @ 001db2b0 (arm) */
void fn_001db2b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db2b0:;
    {
        cpu->r[3] = rd32(0x001db2b8u + + 0x28u);
    }
L_001db2b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001db2b8:;
    {
        cpu->r[1] = rd32(0x001db2c0u + + 0x24u);
    }
L_001db2bc:;
    {
        cpu->r[0] = rd32(0x001db2c4u + + 0x24u);
    }
L_001db2c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001db2c8u, cpu->r[3], 0, 0);
    }
L_001db2c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001db2c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001db2cc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001db2d0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001db2d4:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001db2d8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001db2dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox23DriverCallbackInterface15_Set3DParameterEiPv @ 001db2ec (arm) */
void fn_001db2ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db2ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_001db2f0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_001db348;
        case 1: goto L_001db354;
        case 2: goto L_001db360;
        case 3: goto L_001db36c;
        case 4: goto L_001db388;
        case 5: goto L_001db310;
        default: guest_unimplemented(cpu, 0x001db2f0u); return; }
        }
    }
L_001db2f4:;
    {
        goto L_001db344;
    }
L_001db310:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001db314:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db318:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001db31c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db320:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001db324:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db328:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001db32c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001db330:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db334:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001db338:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db33c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001db340:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db344:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db348:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001db34c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db350:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db354:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001db358:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db35c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db360:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001db364:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001db368:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db36c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001db370:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db374:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001db378:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db37c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001db380:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db384:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001db388:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001db38c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db390:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001db394:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db398:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001db39c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db3a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox23DriverCallbackInterface19SetDefaultParameterEv @ 001db3a4 (arm) */
void fn_001db3a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db3a4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001db3a8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001db3ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001db3b0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001db3b8u + + 0xb4u);
    }
L_001db3b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001db3b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001db3bc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base - 4u;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 17));
        cpu->r[5] = ea;
    }
L_001db3c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001db3c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001db3c8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001db3d0u + + 0xa0u);
    }
L_001db3cc:;
    {
        cpu->r[14] = 0x001db3d0u; fn_001db2ec(cpu);
    }
L_001db3d0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001db3d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db3d8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001db3dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001db3e4u + + 0x90u);
    }
L_001db3e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db3e4:;
    {
        cpu->r[14] = 0x001db3e8u; fn_001db2ec(cpu);
    }
L_001db3e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_001db3ec:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001db3f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db3f4:;
    {
        uint32_t wb_tmp = cpu->r[2] + - 0x8u;
        wr32(cpu->r[2] + - 0x8u, cpu->r[1]);
        cpu->r[2] = wb_tmp;
    }
L_001db3f8:;
    {
        cpu->r[14] = 0x001db3fcu; fn_001db2ec(cpu);
    }
L_001db3fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db400:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001db404:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001db408:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db40c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db410:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db414:;
    {
        cpu->r[14] = 0x001db418u; fn_001db2ec(cpu);
    }
L_001db418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db41c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001db420:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001db424:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db428:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db42c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db430:;
    {
        cpu->r[14] = 0x001db434u; fn_001db2ec(cpu);
    }
L_001db434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db438:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001db43c:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001db440:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001db448u + + 0x30u);
    }
L_001db444:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db448:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001db44c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db450:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db454:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db458:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001db45c:;
    {
        cpu->r[14] = 0x001db460u; fn_001db2ec(cpu);
    }
L_001db460:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001db464:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001db468:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001db46cu)) return;
    }
}

/* init_array_83 @ 001db47c (arm) */
void fn_001db47c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db47c:;
    {
        cpu->r[3] = rd32(0x001db484u + + 0x68u);
    }
L_001db480:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001db488u + + 0x60u);
    }
L_001db484:;
    {
        cpu->r[1] = rd32(0x001db48cu + + 0x64u);
    }
L_001db488:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001db48c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001db494u, cpu->r[3], 0, 0);
    }
L_001db490:;
    {
        cpu->r[12] = rd32(0x001db498u + + 0x5cu);
    }
L_001db494:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001db498:;
    {
        cpu->r[1] = rd32(0x001db4a0u + + 0x58u);
    }
L_001db49c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001db4a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001db4a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001db4a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001db4ac:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4b0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4b4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001db4b8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4bc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4c0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4c4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4c8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4cc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4d0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db4e0:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001db4e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox23DriverCallbackInterface13GetWorkBufferEi @ 001db4fc (arm) */
void fn_001db4fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db4fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001db500:;
    {
        cpu->r[4] = rd32(0x001db508u + + 0x4cu);
    }
L_001db504:;
    {
        cpu->r[5] = rd32(0x001db50cu + + 0x4cu);
    }
L_001db508:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001db50c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001db514u, cpu->r[4], 0, 0);
    }
L_001db510:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001db514:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001db518:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001db51c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001db54c;
        }
    }
L_001db520:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001db524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001db528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db530;
        }
    }
L_001db52c:;
    {
        cpu->r[14] = 0x001db530u; fn_00097dc8(cpu);
    }
L_001db530:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001db534:;
    {
        cpu->r[14] = 0x001db538u; fn_00097dd4(cpu);
    }
L_001db538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001db53c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001db540:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_001db544:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001db548:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_001db54c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001db550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001db554u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterface14Set3DParameterEiPv @ 001db55c (arm) */
void fn_001db55c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db55c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001db560:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001db564:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001db568:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001db56c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001db570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db574:;
    {
        cpu->r[14] = 0x001db578u; fn_001ebcfc(cpu);
    }
L_001db578:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db57c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001db580:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001db584:;
    {
        cpu->r[14] = 0x001db588u; fn_001db2ec(cpu);
    }
L_001db588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db58c:;
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
L_001db590:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface18FreeDisposableDataEiRiS1_ @ 001db594 (arm) */
void fn_001db594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db594:;
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
L_001db598:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001db59c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001db5a0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001db5a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001db5a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db5ac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001db5b0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001db5b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001db5b8:;
    {
        cpu->r[14] = 0x001db5bcu; fn_001ebcfc(cpu);
    }
L_001db5bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001db5c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001db5c4:;
    {
        cpu->r[3] = rd32(0x001db5ccu + + 0x284u);
    }
L_001db5c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001db5cc:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_001db5d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001db5d8u, cpu->r[3], 0, 0);
    }
L_001db5d4:;
    {
        wr32(cpu->r[8], cpu->r[6]);
    }
L_001db5d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db76c;
        }
    }
L_001db5dc:;
    {
        cpu->r[0] = rd32(0x001db5e4u + + 0x270u);
    }
L_001db5e0:;
    {
        cpu->r[1] = rd32(0x001db5e8u + + 0x270u);
    }
L_001db5e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_001db5e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001db5ec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001db5f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001db5f4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_001db5f8:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_001db5fc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001db600:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001db604:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001db608:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001db60c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[1]; cpu->r[1] = v;
    }
L_001db610:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001db614:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 14u, &shc); cpu->r[1] = v;
    }
L_001db618:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_001db61c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 14u, &shc); cpu->r[2] = v;
    }
L_001db620:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[3]; cpu->r[3] = v;
    }
L_001db624:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001db628:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db6b0;
        }
    }
L_001db62c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001db630:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_001db634:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_001db638:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_001db63c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001db640:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001db644:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_001db648:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_001db64c:;
    {
        cpu->r[8] = cpu->r[12];
    }
L_001db650:;
    {
        goto L_001db660;
    }
L_001db654:;
    {
        cpu->r[14] = 0x001db658u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001db658:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001db65c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001db660:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001db664:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001db668:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001db66c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001db670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001db674:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x14u);
    }
L_001db678:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001db67c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db69c;
        }
    }
L_001db680:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_001db684:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_001db688:;
    {
        uint32_t v = cpu->r[12] * cpu->r[8]; cpu->r[12] = v;
    }
L_001db68c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_001db690:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_001db694:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_001db698:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001db784;
        }
    }
L_001db69c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001db6a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db654;
        }
    }
L_001db6a4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001db6a8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_001db6ac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001db6b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001db6b4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001db6b8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001db6bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001db6c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001db6c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001db6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db77c;
        }
    }
L_001db6cc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_001db6d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_001db6d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001db6d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db76c;
        }
    }
L_001db6dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001db6e0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001db6e4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001db6e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001db6ec:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[6] = v;
    }
L_001db6f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001db6f4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x14u);
    }
L_001db6f8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001db6fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db754;
        }
    }
L_001db700:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001db704:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x10u);
    }
L_001db708:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_001db70c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12]; cpu->r[9] = v;
    }
L_001db710:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001db714:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_001db718:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 0);
    }
L_001db71c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001db720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db7ac;
        }
    }
L_001db724:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_001db728:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001db72c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db7f0;
        }
    }
L_001db730:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_001db734:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001db738:;
    {
        wr8(cpu->r[3] + + 0x14u, cpu->r[5]);
    }
L_001db73c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001db740:;
    {
        wr32(cpu->r[11], cpu->r[12]);
    }
L_001db744:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001db748:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001db74c:;
    {
        wr32(cpu->r[8], cpu->r[7]);
    }
L_001db750:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_001db754:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001db758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001db75c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001db760:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
        }
    }
L_001db764:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001db768:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001db6e8;
        }
    }
L_001db76c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001db770:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001db774:;
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
L_001db778:;
    {
        return fn_001ebcf8(cpu);
    }
L_001db77c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001db780:;
    {
        goto L_001db6d4;
    }
L_001db784:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001db788:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001db78c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001db790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001db794:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_001db798:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001db79c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001db7a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001db7a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001db7a8:;
    {
        goto L_001db6c0;
    }
L_001db7ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001db7b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_001db7b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001db7b8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_001db7bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001db7c0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
        }
    }
L_001db7c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001db824;
        }
    }
L_001db7c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001db7cc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001db7d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001db824;
        }
    }
L_001db7d4:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_001db7d8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001db7dc:;
    {
        wr8(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_001db7e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001db7e4:;
    {
        wr32(cpu->r[11], cpu->r[3]);
    }
L_001db7e8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001db7ec:;
    {
        goto L_001db834;
    }
L_001db7f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001db7f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001db7f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001db7fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_001db800:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001db804:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001db808:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001db80c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001db810:;
    {
        wr32(cpu->r[8], cpu->r[2]);
    }
L_001db814:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001db818:;
    {
        cpu->r[14] = 0x001db81cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001db81c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001db820:;
    {
        goto L_001db76c;
    }
L_001db824:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001db828:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001db82c:;
    {
        cpu->r[14] = 0x001db830u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001db830:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001db834:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001db838:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001db83c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001db840:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001db844:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001db848:;
    {
        wr32(cpu->r[8], cpu->r[7]);
    }
L_001db84c:;
    {
        goto L_001db76c;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface14Set3DParameterEiPv @ 001db85c (arm) */
void fn_001db85c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db85c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001db860:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001db864:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db868:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001db86c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db870:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001db874:;
    {
        cpu->r[14] = 0x001db878u; fn_001ebcfc(cpu);
    }
L_001db878:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001db87c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001db880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001db8c4;
        }
    }
L_001db884:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000000au, 1, 1);
    }
L_001db888:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[6]) {
        case 0: goto L_001db8bc;
        case 1: goto L_001db8ec;
        case 2: goto L_001db8f8;
        case 3: goto L_001db904;
        case 4: goto L_001db910;
        case 5: goto L_001db91c;
        case 6: goto L_001db928;
        case 7: goto L_001db8c4;
        case 8: goto L_001db934;
        case 9: goto L_001db950;
        case 10: goto L_001db8d0;
        default: guest_unimplemented(cpu, 0x001db888u); return; }
        }
    }
L_001db88c:;
    {
        goto L_001db8c4;
    }
L_001db8bc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001db8c0:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001db8c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db8c8:;
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
L_001db8cc:;
    {
        return fn_001ebcf8(cpu);
    }
L_001db8d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_001db8d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db8d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db8dc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db8e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_001db8e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db8e8:;
    {
        goto L_001db8c4;
    }
L_001db8ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db8f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db8f4:;
    {
        goto L_001db8c4;
    }
L_001db8f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db8fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db900:;
    {
        goto L_001db8c4;
    }
L_001db904:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db908:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db90c:;
    {
        goto L_001db8c4;
    }
L_001db910:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db914:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db918:;
    {
        goto L_001db8c4;
    }
L_001db91c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db920:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db924:;
    {
        goto L_001db8c4;
    }
L_001db928:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db92c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db930:;
    {
        goto L_001db8c4;
    }
L_001db934:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_001db938:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db93c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db940:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db944:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_001db948:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db94c:;
    {
        goto L_001db8c4;
    }
L_001db950:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_001db954:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db958:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_001db95c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db960:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_001db964:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001db968:;
    {
        goto L_001db8c4;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface7CleanupEv @ 001db96c (arm) */
void fn_001db96c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db96c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001db970:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db974:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001db978:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db97c:;
    {
        cpu->r[14] = 0x001db980u; fn_001ebcfc(cpu);
    }
L_001db980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001db988:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x64u);
    }
L_001db98c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001db990:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
        }
    }
L_001db994:;
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
L_001db998:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface13SetByteOffsetEi @ 001db99c (arm) */
void fn_001db99c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db99c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001db9a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db9a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001db9a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db9ac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001db9b0:;
    {
        cpu->r[14] = 0x001db9b4u; fn_001ebcfc(cpu);
    }
L_001db9b4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[6]);
    }
L_001db9b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db9bc:;
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
L_001db9c0:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface13GetByteOffsetEv @ 001db9c4 (arm) */
void fn_001db9c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db9c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001db9c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db9cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001db9d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db9d4:;
    {
        cpu->r[14] = 0x001db9d8u; fn_001ebcfc(cpu);
    }
L_001db9d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001db9dc:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x58u);
    }
L_001db9e0:;
    {
        cpu->r[14] = 0x001db9e4u; fn_001ebcf8(cpu);
    }
L_001db9e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001db9e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001db9ecu)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface8GetPitchEv @ 001db9ec (arm) */
void fn_001db9ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001db9ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001db9f0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001db9f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001db9f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001db9fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dba00:;
    {
        cpu->r[14] = 0x001dba04u; fn_001ebcfc(cpu);
    }
L_001dba04:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x34u);
    }
L_001dba08:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001dba0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dba14u + + 0x14u);
    }
L_001dba10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dba14:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_001dba18:;
    {
        cpu->r[14] = 0x001dba1cu; fn_001ebcf8(cpu);
    }
L_001dba1c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001dba20:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dba24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dba28u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface7GetGainEv @ 001dba2c (arm) */
void fn_001dba2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dba2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dba30:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dba34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dba38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dba3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dba40:;
    {
        cpu->r[14] = 0x001dba44u; fn_001ebcfc(cpu);
    }
L_001dba44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x28u);
    }
L_001dba48:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001dba4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dba54u + + 0x14u);
    }
L_001dba50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dba54:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_001dba58:;
    {
        cpu->r[14] = 0x001dba5cu; fn_001ebcf8(cpu);
    }
L_001dba5c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001dba60:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dba64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dba68u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface8SetPitchEf @ 001dba6c (arm) */
void fn_001dba6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dba6c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dba70:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dba74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dba78:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001dba7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dba80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dba84:;
    {
        cpu->r[14] = 0x001dba88u; fn_001ebcfc(cpu);
    }
L_001dba88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dba90u + + 0x94u);
    }
L_001dba8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001dba90:;
    {
        cpu->r[7] = rd32(0x001dba98u + + 0x94u);
    }
L_001dba94:;
    {
        cpu->r[7] = add_flags(cpu, 0x001dba9cu, cpu->r[7], 0, 0);
    }
L_001dba98:;
    {
        vfp_sync_flags(cpu);
    }
L_001dba9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00008000u;
        }
    }
L_001dbaa0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
        }
    }
L_001dbaa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dbac8;
        }
    }
L_001dbaa8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001dbaac:;
    {
        vfp_sync_flags(cpu);
    }
L_001dbab0:;
    {
        if (cond_test(cpu, 9)) {
        *vfp_s(cpu, 15) = *(float*)G(0x001dbab8u + + 0x70u);
        }
    }
L_001dbab4:;
    {
        if (cond_test(cpu, 9)) {
        vfp_vmul(cpu, 15, 16, 15);
        }
    }
L_001dbab8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_001dbabc:;
    {
        if (cond_test(cpu, 9)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_001dbac0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_001dbac4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001dbac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbacc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dbad0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
        }
    }
L_001dbad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbae8;
        }
    }
L_001dbad8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbadc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dbae0:;
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
L_001dbae4:;
    {
        return fn_001ebcf8(cpu);
    }
L_001dbae8:;
    {
        cpu->r[3] = rd32(0x001dbaf0u + + 0x40u);
    }
L_001dbaec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001dbaf0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001dbaf4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001dbaf8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001dbafc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00004000u;
        }
    }
L_001dbb00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dbb0c;
        }
    }
L_001dbb04:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 14u, &shc); cpu->r[0] = v;
    }
L_001dbb08:;
    {
        cpu->r[14] = 0x001dbb0cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dbb0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001dbb10:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001dbb14:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[6] = v;
    }
L_001dbb18:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 14u, &shc); cpu->r[6] = v;
    }
L_001dbb1c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_001dbb20:;
    {
        goto L_001dbad8;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface7SetGainEf @ 001dbb34 (arm) */
void fn_001dbb34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbb34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbb38:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001dbb3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbb40:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_001dbb44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbb48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbb4c:;
    {
        cpu->r[14] = 0x001dbb50u; fn_001ebcfc(cpu);
    }
L_001dbb50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dbb58u + + 0x40u);
    }
L_001dbb54:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001dbb58:;
    {
        vfp_sync_flags(cpu);
    }
L_001dbb5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00004000u;
        }
    }
L_001dbb60:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_001dbb64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dbb88;
        }
    }
L_001dbb68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001dbb6c:;
    {
        vfp_sync_flags(cpu);
    }
L_001dbb70:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(0x001dbb78u + + 0x24u);
        }
    }
L_001dbb74:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vmul(cpu, 15, 16, 15);
        }
    }
L_001dbb78:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dbb7c:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_001dbb80:;
    {
        if (cond_test(cpu, 6)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_001dbb84:;
    {
        if (cond_test(cpu, 6)) {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001dbb88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbb8c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001dbb90:;
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
L_001dbb94:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface10UploadDataEPvi @ 001dbba0 (arm) */
void fn_001dbba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbba0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dbba4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbba8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbbac:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001dbbb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbbb4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dbbb8:;
    {
        cpu->r[14] = 0x001dbbbcu; fn_001ebcfc(cpu);
    }
L_001dbbbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbbc0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001dbbc4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_001dbbc8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001dbbcc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001dbbd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dbc50;
        }
    }
L_001dbbd4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbbd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dbbdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001dbbe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001dbbe4:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x14u);
    }
L_001dbbe8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001dbbec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbc50;
        }
    }
L_001dbbf0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_001dbbf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbbf8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc), cpu->r[7]);
    }
L_001dbbfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dbc00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001dbc04:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_001dbc08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbc0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001dbc10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_001dbc14:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001dbc18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbc1c:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001dbc20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001dbc24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001dbc28:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001dbc2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbc30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001dbc34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001dbc38:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001dbc3c:;
    {
        cpu->r[14] = 0x001dbc40u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dbc40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbc44:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001dbc48:;
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
L_001dbc4c:;
    {
        return fn_001ebcf8(cpu);
    }
L_001dbc50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbc54:;
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
L_001dbc58:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface8NeedDataEv @ 001dbc5c (arm) */
void fn_001dbc5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbc5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbc60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbc64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbc68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbc6c:;
    {
        cpu->r[14] = 0x001dbc70u; fn_001ebcfc(cpu);
    }
L_001dbc70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbc74:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001dbc78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbca8;
        }
    }
L_001dbc7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dbc80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_001dbc84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001dbc88:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001dbc8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001dbc90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001dbc94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001dbc98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001dbc9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dbca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dbca4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dbcbc;
        }
    }
L_001dbca8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbcac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001dbcb0:;
    {
        cpu->r[14] = 0x001dbcb4u; fn_001ebcf8(cpu);
    }
L_001dbcb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbcb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbcbcu)) return;
    }
L_001dbcbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001dbcc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbcc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dbcc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dbccc:;
    {
        cpu->r[4] = rd8(cpu->r[1] + + 0x14u);
    }
L_001dbcd0:;
    {
        cpu->r[14] = 0x001dbcd4u; fn_001ebcf8(cpu);
    }
L_001dbcd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbcd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbcdcu)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface8GetStateEv @ 001dbcdc (arm) */
void fn_001dbcdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbcdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbce0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001dbce4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbce8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbcec:;
    {
        cpu->r[14] = 0x001dbcf0u; fn_001ebcfc(cpu);
    }
L_001dbcf0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x50u);
    }
L_001dbcf4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001dbcf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbd0c;
        }
    }
L_001dbcfc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbd00:;
    {
        cpu->r[14] = 0x001dbd04u; fn_001ebcf8(cpu);
    }
L_001dbd04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbd08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbd0cu)) return;
    }
L_001dbd0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001dbd10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbd14:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x60u);
    }
L_001dbd18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dbd1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dbd20:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dbd24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dbd28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000003u;
        }
    }
L_001dbd2c:;
    {
        cpu->r[14] = 0x001dbd30u; fn_001ebcf8(cpu);
    }
L_001dbd30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbd34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbd38u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface5ResetEv @ 001dbd38 (arm) */
void fn_001dbd38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbd38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbd3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbd40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbd44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbd48:;
    {
        cpu->r[14] = 0x001dbd4cu; fn_001ebcfc(cpu);
    }
L_001dbd4c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x64u);
    }
L_001dbd50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dbd54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001dbd58:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001dbd5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001dbd60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001dbd64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001dbd68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001dbd6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dbd70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dbd74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbd8c;
        }
    }
L_001dbd78:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001dbd7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbd80:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[6]);
    }
L_001dbd84:;
    {
        cpu->r[14] = 0x001dbd88u; fn_001db164(cpu);
    }
L_001dbd88:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[6]);
    }
L_001dbd8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbd90:;
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
L_001dbd94:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface5PauseEv @ 001dbd98 (arm) */
void fn_001dbd98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbd98:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbd9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbda0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbda4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbda8:;
    {
        cpu->r[14] = 0x001dbdacu; fn_001ebcfc(cpu);
    }
L_001dbdac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbdb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbdb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001dbdb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001dbdbc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_001dbdc0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
        }
    }
L_001dbdc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001dbdc8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
        }
    }
L_001dbdcc:;
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
L_001dbdd0:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface4StopEv @ 001dbdd4 (arm) */
void fn_001dbdd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbdd4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbdd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbddc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbde0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbde4:;
    {
        cpu->r[14] = 0x001dbde8u; fn_001ebcfc(cpu);
    }
L_001dbde8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbdec:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001dbdf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbe14;
        }
    }
L_001dbdf4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001dbdf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbdfc:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001dbe00:;
    {
        cpu->r[14] = 0x001dbe04u; fn_001db164(cpu);
    }
L_001dbe04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001dbe08:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001dbe0c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001dbe10:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001dbe14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbe18:;
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
L_001dbe1c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox29DriverCallbackSourceInterface4PlayEv @ 001dbe20 (arm) */
void fn_001dbe20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbe20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001dbe24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001dbe28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbe2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbe30:;
    {
        cpu->r[14] = 0x001dbe34u; fn_001ebcfc(cpu);
    }
L_001dbe34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001dbe38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_001dbe3c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001dbe40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001dbe44:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
        }
    }
L_001dbe48:;
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
L_001dbe4c:;
    {
        return fn_001ebcf8(cpu);
    }
}

/* _ZN3vox15DriverInterfaceD0Ev @ 001dbe50 (arm) */
void fn_001dbe50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbe50:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dbe54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbe58:;
    {
        cpu->r[14] = 0x001dbe5cu; fn_0018ba20(cpu);
    }
L_001dbe5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbe60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbe64u)) return;
    }
}

/* _ZN3vox21DriverSourceInterfaceD0Ev @ 001dbe64 (arm) */
void fn_001dbe64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbe64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dbe68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbe6c:;
    {
        cpu->r[14] = 0x001dbe70u; fn_0018ba20(cpu);
    }
L_001dbe70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbe74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbe78u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterfaceD1Ev @ 001dbe78 (arm) */
void fn_001dbe78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbe78:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dbe7c:;
    {
        cpu->r[4] = rd32(0x001dbe84u + + 0xc0u);
    }
L_001dbe80:;
    {
        cpu->r[3] = rd32(0x001dbe88u + + 0xc0u);
    }
L_001dbe84:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001dbe88:;
    {
        cpu->r[4] = add_flags(cpu, 0x001dbe90u, cpu->r[4], 0, 0);
    }
L_001dbe8c:;
    {
        cpu->r[8] = rd32(0x001dbe94u + + 0xb8u);
    }
L_001dbe90:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001dbe94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001dbe98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dbe9c:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
    }
L_001dbea0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dbea4:;
    {
        cpu->r[14] = 0x001dbea8u; fn_001ebcfc(cpu);
    }
L_001dbea8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001dbeac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbeb0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dbeb4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001dbeb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001dbebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbec4;
        }
    }
L_001dbec0:;
    {
        cpu->r[14] = 0x001dbec4u; fn_00097dc8(cpu);
    }
L_001dbec4:;
    {
        cpu->r[5] = rd32(0x001dbeccu + + 0x84u);
    }
L_001dbec8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbecc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001dbed0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001dbed4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001dbed8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dbedc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001dbee0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001dbee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbeec;
        }
    }
L_001dbee8:;
    {
        cpu->r[14] = 0x001dbeecu; fn_00097dc8(cpu);
    }
L_001dbeec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001dbef0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbef4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dbef8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_001dbefc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001dbf00:;
    {
        cpu->r[14] = 0x001dbf04u; fn_001ebcf8(cpu);
    }
L_001dbf04:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001dbf08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001dbf0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbf2c;
        }
    }
L_001dbf10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dbf14:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001dbf18:;
    {
        cpu->r[14] = 0x001dbf1cu; fn_00097dc8(cpu);
    }
L_001dbf1c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001dbf20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbf24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dbf14;
        }
    }
L_001dbf28:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001dbf2c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001dbf30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dbf34:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_001dbf38:;
    {
        cpu->r[14] = 0x001dbf3cu; fn_001ebe28(cpu);
    }
L_001dbf3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dbf40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbf44u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterfaceD0Ev @ 001dbf54 (arm) */
void fn_001dbf54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbf54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dbf58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dbf5c:;
    {
        cpu->r[14] = 0x001dbf60u; fn_001dbe78(cpu);
    }
L_001dbf60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbf64:;
    {
        cpu->r[14] = 0x001dbf68u; fn_0018ba20(cpu);
    }
L_001dbf68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dbf6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dbf70u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterfaceD2Ev @ 001dbf70 (arm) */
void fn_001dbf70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dbf70:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dbf74:;
    {
        cpu->r[4] = rd32(0x001dbf7cu + + 0xc0u);
    }
L_001dbf78:;
    {
        cpu->r[3] = rd32(0x001dbf80u + + 0xc0u);
    }
L_001dbf7c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001dbf80:;
    {
        cpu->r[4] = add_flags(cpu, 0x001dbf88u, cpu->r[4], 0, 0);
    }
L_001dbf84:;
    {
        cpu->r[8] = rd32(0x001dbf8cu + + 0xb8u);
    }
L_001dbf88:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001dbf8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001dbf90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001dbf94:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
    }
L_001dbf98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dbf9c:;
    {
        cpu->r[14] = 0x001dbfa0u; fn_001ebcfc(cpu);
    }
L_001dbfa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001dbfa4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbfa8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dbfac:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001dbfb0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001dbfb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbfbc;
        }
    }
L_001dbfb8:;
    {
        cpu->r[14] = 0x001dbfbcu; fn_00097dc8(cpu);
    }
L_001dbfbc:;
    {
        cpu->r[5] = rd32(0x001dbfc4u + + 0x84u);
    }
L_001dbfc0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbfc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001dbfc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001dbfcc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001dbfd0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dbfd4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001dbfd8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001dbfdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dbfe4;
        }
    }
L_001dbfe0:;
    {
        cpu->r[14] = 0x001dbfe4u; fn_00097dc8(cpu);
    }
L_001dbfe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001dbfe8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dbfec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dbff0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_001dbff4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001dbff8:;
    {
        cpu->r[14] = 0x001dbffcu; fn_001ebcf8(cpu);
    }
L_001dbffc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001dc000:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001dc004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc024;
        }
    }
L_001dc008:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001dc00c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001dc010:;
    {
        cpu->r[14] = 0x001dc014u; fn_00097dc8(cpu);
    }
L_001dc014:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001dc018:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc01c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc00c;
        }
    }
L_001dc020:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001dc024:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001dc028:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001dc02c:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_001dc030:;
    {
        cpu->r[14] = 0x001dc034u; fn_001ebe28(cpu);
    }
L_001dc034:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001dc038:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc03cu)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterfaceD1Ev @ 001dc04c (arm) */
void fn_001dc04c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc04c:;
    {
        cpu->r[3] = rd32(0x001dc054u + + 0x3cu);
    }
L_001dc050:;
    {
        cpu->r[2] = rd32(0x001dc058u + + 0x3cu);
    }
L_001dc054:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dc05cu, cpu->r[3], 0, 0);
    }
L_001dc058:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dc05c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dc060:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc064:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dc068:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001dc06c:;
    {
        cpu->r[14] = 0x001dc070u; fn_001db96c(cpu);
    }
L_001dc070:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dc074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dc078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc080;
        }
    }
L_001dc07c:;
    {
        cpu->r[14] = 0x001dc080u; fn_00097dc8(cpu);
    }
L_001dc080:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dc084:;
    {
        cpu->r[14] = 0x001dc088u; fn_001ebe28(cpu);
    }
L_001dc088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc08c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc090u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterfaceD0Ev @ 001dc098 (arm) */
void fn_001dc098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc098:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dc09c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc0a0:;
    {
        cpu->r[14] = 0x001dc0a4u; fn_001dc04c(cpu);
    }
L_001dc0a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc0a8:;
    {
        cpu->r[14] = 0x001dc0acu; fn_0018ba20(cpu);
    }
L_001dc0ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc0b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc0b4u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterfaceD2Ev @ 001dc0b4 (arm) */
void fn_001dc0b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc0b4:;
    {
        cpu->r[3] = rd32(0x001dc0bcu + + 0x3cu);
    }
L_001dc0b8:;
    {
        cpu->r[2] = rd32(0x001dc0c0u + + 0x3cu);
    }
L_001dc0bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dc0c4u, cpu->r[3], 0, 0);
    }
L_001dc0c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dc0c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dc0c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc0cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dc0d0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001dc0d4:;
    {
        cpu->r[14] = 0x001dc0d8u; fn_001db96c(cpu);
    }
L_001dc0d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dc0dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001dc0e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc0e8;
        }
    }
L_001dc0e4:;
    {
        cpu->r[14] = 0x001dc0e8u; fn_00097dc8(cpu);
    }
L_001dc0e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001dc0ec:;
    {
        cpu->r[14] = 0x001dc0f0u; fn_001ebe28(cpu);
    }
L_001dc0f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc0f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc0f8u)) return;
    }
}

/* _ZN3vox23DriverCallbackInterfaceC1Ev @ 001dc100 (arm) */
void fn_001dc100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc100:;
    {
        cpu->r[3] = rd32(0x001dc108u + + 0x78u);
    }
L_001dc104:;
    {
        cpu->r[2] = rd32(0x001dc10cu + + 0x78u);
    }
L_001dc108:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dc110u, cpu->r[3], 0, 0);
    }
L_001dc10c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dc110:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dc114:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc118:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dc11c:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001dc120:;
    {
        cpu->r[14] = 0x001dc124u; fn_001ebe50(cpu);
    }
L_001dc124:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc12cu + + 0x50u);
    }
L_001dc128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001dc12c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dc130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc134:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001dc138:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc13c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dc140:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc144:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc148:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc14c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc150:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc154:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc158:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc15c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc160:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc164:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc168:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc16c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001dc170:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001dc174:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001dc178:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc17cu)) return;
    }
}

/* _ZN3vox23DriverCallbackInterfaceC2Ev @ 001dc188 (arm) */
void fn_001dc188(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc188:;
    {
        cpu->r[3] = rd32(0x001dc190u + + 0x78u);
    }
L_001dc18c:;
    {
        cpu->r[2] = rd32(0x001dc194u + + 0x78u);
    }
L_001dc190:;
    {
        cpu->r[3] = add_flags(cpu, 0x001dc198u, cpu->r[3], 0, 0);
    }
L_001dc194:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001dc198:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001dc19c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc1a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001dc1a4:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001dc1a8:;
    {
        cpu->r[14] = 0x001dc1acu; fn_001ebe50(cpu);
    }
L_001dc1ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc1b4u + + 0x50u);
    }
L_001dc1b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001dc1b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001dc1b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc1bc:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_001dc1c0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001dc1c8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1d0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1d8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1dc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1e0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc1f4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001dc1f8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001dc1fc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001dc200:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc204u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterfaceC1EPvS1_j @ 001dc210 (arm) */
void fn_001dc210(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc210:;
    {
        cpu->r[12] = rd32(0x001dc218u + + 0xf8u);
    }
L_001dc214:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dc218:;
    {
        cpu->r[14] = rd32(0x001dc220u + + 0xf4u);
    }
L_001dc21c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001dc224u, cpu->r[12], 0, 0);
    }
L_001dc220:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc224:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dc228:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001dc22c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001dc230:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001dc234:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001dc238:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000008u;
        wr32(cpu->r[0], cpu->r[14]);
        cpu->r[0] = wb_tmp;
    }
L_001dc23c:;
    {
        cpu->r[14] = 0x001dc240u; fn_001ebe50(cpu);
    }
L_001dc240:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001dc244:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001dc248:;
    {
        cpu->r[3] = 0x00004000u;
    }
L_001dc24c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001dc250:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001dc254:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001dc258:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc260u + + 0xa8u);
    }
L_001dc25c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_001dc260:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc264:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001dc268:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc26c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001dc270:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc274:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001dc278:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc27c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001dc280:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc284:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001dc288:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc28c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001dc290:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc294:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[12]);
    }
L_001dc298:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc29c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[12]);
    }
L_001dc2a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc2a4:;
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
L_001dc2a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc2b0u + + 0x5cu);
    }
L_001dc2ac:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_001dc2b0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[12]);
    }
L_001dc2b4:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_001dc2b8:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[12]);
    }
L_001dc2bc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001dc2c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001dc2c4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001dc2c8:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[12]);
    }
L_001dc2cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001dc2d0:;
    {
        cpu->r[1] = 0x0000021cu;
    }
L_001dc2d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc2d8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dc2dc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dc2e0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc2e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_001dc2e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001dc2ec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001dc2f0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001dc2f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dc2f8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001dc2fc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001dc300:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001dc304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc308u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterfaceC2EPvS1_j @ 001dc318 (arm) */
void fn_001dc318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc318:;
    {
        cpu->r[12] = rd32(0x001dc320u + + 0xf8u);
    }
L_001dc31c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001dc320:;
    {
        cpu->r[14] = rd32(0x001dc328u + + 0xf4u);
    }
L_001dc324:;
    {
        cpu->r[12] = add_flags(cpu, 0x001dc32cu, cpu->r[12], 0, 0);
    }
L_001dc328:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc32c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001dc330:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001dc334:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001dc338:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001dc33c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001dc340:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000008u;
        wr32(cpu->r[0], cpu->r[14]);
        cpu->r[0] = wb_tmp;
    }
L_001dc344:;
    {
        cpu->r[14] = 0x001dc348u; fn_001ebe50(cpu);
    }
L_001dc348:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001dc34c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001dc350:;
    {
        cpu->r[3] = 0x00004000u;
    }
L_001dc354:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[12]);
    }
L_001dc358:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_001dc35c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001dc360:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc368u + + 0xa8u);
    }
L_001dc364:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[12]);
    }
L_001dc368:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc36c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_001dc370:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc374:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001dc378:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc37c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[12]);
    }
L_001dc380:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc384:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001dc388:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc38c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001dc390:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc394:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001dc398:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc39c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[12]);
    }
L_001dc3a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc3a4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[12]);
    }
L_001dc3a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc3ac:;
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
L_001dc3b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001dc3b8u + + 0x5cu);
    }
L_001dc3b4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_001dc3b8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[12]);
    }
L_001dc3bc:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[12]);
    }
L_001dc3c0:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[12]);
    }
L_001dc3c4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_001dc3c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001dc3cc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001dc3d0:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[12]);
    }
L_001dc3d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001dc3d8:;
    {
        cpu->r[1] = 0x0000021cu;
    }
L_001dc3dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001dc3e0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001dc3e4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001dc3e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001dc3ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_001dc3f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001dc3f4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001dc3f8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001dc3fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001dc400:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001dc404:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001dc408:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001dc40c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc410u)) return;
    }
}

/* _ZN3vox29DriverCallbackSourceInterface11GetWorkDataEPhii @ 001dc420 (arm) */
void fn_001dc420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001dc420:;
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
L_001dc424:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001dc428:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x60u);
    }
L_001dc42c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001dc430:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001dc434:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001dc438:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001dc43c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dc440:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_001dc444:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001dc448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dc44c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dc450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001dc458:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
        }
    }
L_001dc45c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc51c;
        }
    }
L_001dc460:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc464:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001dc468:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc628;
        }
    }
L_001dc46c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001dc470:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc474:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc478:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001dc47c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dc480:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001dc484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001dc488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_001dc48c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_001dc490:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_001dc494:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[9] = v;
    }
L_001dc498:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 0);
    }
L_001dc49c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001dc4a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001dc4a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc528;
        }
    }
L_001dc4a8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001dc4ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001dc4b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001dc4b4:;
    {
        cpu->r[14] = 0x001dc4b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001dc4b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc4bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dc4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dc4c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dc4c8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dc4cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_001dc4d0:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[8]);
    }
L_001dc4d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc4d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dc4dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dc4e0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dc4e4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_001dc4e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 14u, &shc), 0, 0);
    }
L_001dc4ec:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_001dc4f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc4f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dc4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dc4fc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dc500:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dc504:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dc508:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_001dc50c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001dc510:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc514:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001dc518:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001dc51c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc520:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001dc524:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001dc528u)) return;
    }
L_001dc528:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[12], 2, 3u, &shc));
    }
L_001dc52c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_001dc530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001dc534:;
    {
        cpu->r[14] = 0x001dc538u; imp_memcpy(cpu); /* memcpy */
    }
L_001dc538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc53c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001dc540:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dc544:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dc548:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dc54c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_001dc550:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[8]);
    }
L_001dc554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001dc55c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dc560:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_001dc564:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_001dc568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 14u, &shc), 0, 0);
    }
L_001dc56c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001dc570:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc574:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001dc578:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dc57c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_001dc580:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 18u, &shc); cpu->r[3] = v;
    }
L_001dc584:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 18u, &shc); cpu->r[3] = v;
    }
L_001dc588:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_001dc58c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001dc590:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001dc594:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001dc598:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001dc59c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], shifter(cpu->r[8], 2, 3u, &shc), 0, 0);
    }
L_001dc5a0:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x10u);
    }
L_001dc5a4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_001dc5a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001dc5ac:;
    {
        cpu->r[14] = 0x001dc5b0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001dc5b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001dc5b4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0xcu);
    }
L_001dc5b8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001dc5bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dc5c0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001dc5c4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001dc5c8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001dc630;
        }
    }
L_001dc5cc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001dc5d0:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[1]);
    }
L_001dc5d4:;
    {
        wr8(cpu->r[8] + + 0x14u, cpu->r[12]);
    }
L_001dc5d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001dc5dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001dc5e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001dc5e4:;
    {
        cpu->r[14] = 0x001dc5e8u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dc5e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001dc5ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001dc5f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001dc5f4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001dc5f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], shifter(cpu->r[8], 2, 14u, &shc), 0, 0);
    }
L_001dc5fc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[12] = v;
    }
L_001dc600:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[1]);
    }
L_001dc604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001dc608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001dc60c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dc610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc614:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001dc66c;
        }
    }
L_001dc618:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001dc61c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001dc474;
        }
    }
L_001dc620:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc624:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001dc628:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001dc62c:;
    {
        goto L_001dc50c;
    }
L_001dc630:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001dc634:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001dc638:;
    {
        cpu->r[14] = 0x001dc63cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001dc63c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001dc640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001dc644:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001dc648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001dc64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001dc67c;
        }
    }
L_001dc650:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc654:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001dc658:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[1]);
    }
L_001dc65c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001dc660:;
    {
        wr8(cpu->r[8] + + 0x14u, cpu->r[3]);
    }
L_001dc664:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dc668:;
    {
        goto L_001dc50c;
    }
L_001dc66c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc670:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001dc674:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001dc678:;
    {
        goto L_001dc50c;
    }
L_001dc67c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001dc680:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001dc620;
        }
    }
L_001dc684:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001dc688:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001dc68c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_001dc690:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001dc694:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001dc698:;
    {
        cpu->r[14] = 0x001dc69cu; imp_memcpy(cpu); /* memcpy */
    }
L_001dc69c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001dc6a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001dc6a4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001dc6a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_001dc6ac:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001dc6b0:;
    {
        goto L_001dc50c;
    }
}
