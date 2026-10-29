#include "functions.h"

/* _ZN5Scene15UpdateBlockagesEv @ 000df074 (arm) */
void fn_000df074(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df074:;
    {
        cpu->r[1] = rd32(0x000df07cu + + 0x550u);
    }
L_000df078:;
    {
        cpu->r[2] = rd32(0x000df080u + + 0x550u);
    }
L_000df07c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df084u, cpu->r[1], 0, 0);
    }
L_000df080:;
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
L_000df084:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000df088:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000df08c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000df090:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000df094:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000df098:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000df09c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000df0a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000df0a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000df0a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df0b4;
        }
    }
L_000df0ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000df0b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000df0b4u)) return;
    }
L_000df0b4:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000df0b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df0bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000df0c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df0c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_000df0c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00018000u, 0, 0);
        }
    }
L_000df0cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df244;
        }
    }
L_000df0d0:;
    {
        cpu->r[10] = rd32(0x000df0d8u + + 0x4fcu);
    }
L_000df0d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000df0d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000df0dc:;
    {
        cpu->r[2] = rd32(0x000df0e4u + + 0x4f4u);
    }
L_000df0e0:;
    {
        cpu->r[10] = add_flags(cpu, 0x000df0e8u, cpu->r[10], 0, 0);
    }
L_000df0e4:;
    {
        cpu->r[3] = rd32(0x000df0ecu + + 0x4f0u);
    }
L_000df0e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00018000u, 0, 0);
    }
L_000df0ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000038u, 0, 0);
    }
L_000df0f0:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_000df0f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df0fcu, cpu->r[2], 0, 0);
    }
L_000df0f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df100u, cpu->r[3], 0, 0);
    }
L_000df0fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_000df100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000df104:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000df108:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000df10c:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000df110:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df114:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000df118:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 6u, &shc), 0, 0);
    }
L_000df11c:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x12u);
    }
L_000df120:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 0);
    }
L_000df124:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000df128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000df12c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000df1f4;
        }
    }
L_000df130:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000274u, 0, 0);
    }
L_000df134:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000df138:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000df13c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000df140:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000df144:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000df148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df15c;
        }
    }
L_000df14c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000df150:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000df154:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df13c;
        }
    }
L_000df158:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000df15c:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000df160:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_000df164:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000df168:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_000df16c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000df170:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000df174:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000df178:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000df17c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000df180:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000df184:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x3dcu);
    }
L_000df188:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000df18c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_000df190:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000df194:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000df198:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_000df19c:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_000df1a0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000df1a4:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000df1a8:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000df1ac:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000df1b0:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000df1b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df1b8:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000df1bc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000df1c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000df1c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df1e0;
        }
    }
L_000df1c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000df1cc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000df1d0:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000df1d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000df1d8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000df1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df344;
        }
    }
L_000df1e0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000df1e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df1f4;
        }
    }
L_000df1e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000df1ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000df1f0:;
    {
        cpu->r[14] = 0x000df1f4u; fn_000ded68(cpu);
    }
L_000df1f4:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000df1f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000df1fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df200:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000df204:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000df208:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000df244;
        }
    }
L_000df20c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000df210:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000df10c;
        }
    }
L_000df214:;
    {
        cpu->r[3] = 0x00000084u;
    }
L_000df218:;
    {
        cpu->r[1] = rd32(0x000df220u + + 0x3c0u);
    }
L_000df21c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000df220:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000df224:;
    {
        cpu->r[2] = rd32(0x000df22cu + + 0x3b8u);
    }
L_000df228:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df230u, cpu->r[1], 0, 0);
    }
L_000df22c:;
    {
        cpu->r[3] = rd32(0x000df234u + + 0x3b4u);
    }
L_000df230:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df238u, cpu->r[2], 0, 0);
    }
L_000df234:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000df238:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df240u, cpu->r[3], 0, 0);
    }
L_000df23c:;
    {
        cpu->r[14] = 0x000df240u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000df240:;
    {
        goto L_000df10c;
    }
L_000df244:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000df248:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[9], 0x000001e4u, 0, 0);
    }
L_000df24c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000df250:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000df254:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000df258:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000df25c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df260:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df328;
        }
    }
L_000df264:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000df268:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000df26c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000df270:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000df274:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000df278:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000df27c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000df280:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000df284:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000df288:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000df28c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000df290:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00018000u, 0, 0);
    }
L_000df294:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000df298:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000df29c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x1f0u);
    }
L_000df2a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000df2a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000df2a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000df2ac:;
    {
        cpu->r[14] = 0x000df2b0u; fn_00177118(cpu);
    }
L_000df2b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000df2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000df2b8:;
    {
        cpu->r[14] = 0x000df2c0u;
    }
L_000df2bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000df2c0u)) return;
    }
L_000df2c0:;
    {
        cpu->r[14] = 0x000df2c4u; fn_0015da48(cpu);
    }
L_000df2c4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000df2c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000df2cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_000df2d0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000df2d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003c8u, 0, 0);
    }
L_000df2d8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x428u);
    }
L_000df2dc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x42cu);
    }
L_000df2e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x430u);
    }
L_000df2e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_000df2e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000df2ec:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[9]);
    }
L_000df2f0:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[12]);
    }
L_000df2f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000df2f8:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[1]);
    }
L_000df2fc:;
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
L_000df300:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000df304:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000df308:;
    {
        cpu->r[14] = 0x000df30cu; fn_00179204(cpu);
    }
L_000df30c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000df310:;
    {
        cpu->r[14] = 0x000df314u; fn_00174970(cpu);
    }
L_000df314:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000df318:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[0]);
    }
L_000df31c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000df320:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000df324:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df280;
        }
    }
L_000df328:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000df32c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000df330:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000028u, 0, 0);
    }
L_000df334:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000df338:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000078u, 1, 1);
    }
L_000df33c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df258;
        }
    }
L_000df340:;
    {
        goto L_000df0ac;
    }
L_000df344:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000df348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df1f4;
        }
    }
L_000df34c:;
    {
        cpu->r[11] = 0x00008270u;
    }
L_000df350:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000df354:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000df358:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000df35c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df450;
        }
    }
L_000df360:;
    {
        cpu->r[12] = 0x0000d8f1u;
    }
L_000df364:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000df368:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xffffu << 16);
    }
L_000df36c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000df370:;
    {
        goto L_000df38c;
    }
L_000df374:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000df378:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_000df37c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000df380:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_000df384:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000df388:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_000df38c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x3dcu);
    }
L_000df390:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000df394:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000df398:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000df39c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_000df3a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000df3a4:;
    {
        cpu->r[7] = 0x00008270u;
    }
L_000df3a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000df3ac:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000df3b0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000df3b4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000df3b8:;
    {
        vfp_vsub(cpu, 15, 12, 15);
    }
L_000df3bc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000df3c0:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000df3c4:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000df3c8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000df3cc:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000df3d0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df3d4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000df3d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000df3dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = cpu->r[1];
        }
    }
L_000df3e0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000df3e4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_000df3e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000df3ec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000df3f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df374;
        }
    }
L_000df3f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000df3f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df450;
        }
    }
L_000df3fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000df400:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000df404:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000df408:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000df55c;
        }
    }
L_000df40c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000df410:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df444;
        }
    }
L_000df414:;
    {
        cpu->r[3] = 0x00000153u;
    }
L_000df418:;
    {
        cpu->r[1] = rd32(0x000df420u + + 0x1ccu);
    }
L_000df41c:;
    {
        cpu->r[2] = rd32(0x000df424u + + 0x1ccu);
    }
L_000df420:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000df424:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000df428:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df430u, cpu->r[1], 0, 0);
    }
L_000df42c:;
    {
        cpu->r[3] = rd32(0x000df434u + + 0x1c0u);
    }
L_000df430:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df438u, cpu->r[2], 0, 0);
    }
L_000df434:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000df438:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df440u, cpu->r[3], 0, 0);
    }
L_000df43c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000df440:;
    {
        cpu->r[14] = 0x000df444u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000df444:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000df448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df1f4;
        }
    }
L_000df44c:;
    {
        goto L_000df470;
    }
L_000df450:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000df454:;
    {
        cpu->r[3] = 0x00008270u;
    }
L_000df458:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000009cu, 0, 0);
    }
L_000df45c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df460:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000df464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000df468:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_000df46c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[4]);
    }
L_000df470:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_000df474:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000012u, 1, 0);
    }
L_000df478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00006000u, 0, 0);
    }
L_000df47c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_000df480:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000df484:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000df488:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000df48c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000df490:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000df494:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000au, 1, 1);
    }
L_000df498:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000df49c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df58c;
        }
    }
L_000df4a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_000df4a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000df4acu + + 0x114u);
    }
L_000df4a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000df4ac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_000df4b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000df4b4:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_000df4b8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x2u);
    }
L_000df4bc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000df4c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_000df4c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00006000u, 0, 0);
    }
L_000df4c8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000df4cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000007cu, 0, 0);
    }
L_000df4d0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000df4d4:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000df4d8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000df4dc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000df4e0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000df4e4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000df4e8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000df4ec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000df4f0:;
    {
        wr32(cpu->r[12] + + 0x3d8u, cpu->r[7]);
    }
L_000df4f4:;
    {
        cpu->r[14] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000df4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x000003d4u, 0, 0);
    }
L_000df4fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x000001b0u, 0, 0);
    }
L_000df500:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000df504:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000df50cu + + 0xb8u);
    }
L_000df508:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[1]);
    }
L_000df50c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000df510:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000df514:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000df51cu + + 0xacu);
    }
L_000df518:;
    {
        vfp_vdiv(cpu, 15, 12, 15);
    }
L_000df51c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000df520:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000df524:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x3d4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000df528:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df52c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000df530:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000df534:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000df538:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000df53c:;
    {
        cpu->r[14] = 0x000df540u; fn_0017c2c4(cpu);
    }
L_000df540:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000df544:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000003d4u, 0, 0);
    }
L_000df548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x000003c8u, 0, 0);
    }
L_000df54c:;
    {
        wr8(cpu->r[1] + + 0x250u, cpu->r[7]);
    }
L_000df550:;
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
L_000df554:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000df558:;
    {
        goto L_000df1f4;
    }
L_000df55c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000df560:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000df564:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000df568:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000df56c:;
    {
        cpu->r[14] = 0x000df570u; fn_000ded68(cpu);
    }
L_000df570:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000df574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000df578:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000df57c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000009cu, 0, 0);
    }
L_000df580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000df584:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_000df588:;
    {
        goto L_000df40c;
    }
L_000df58c:;
    {
        cpu->r[3] = 0x0000015au;
    }
L_000df590:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000df594:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000df598:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000df59c:;
    {
        cpu->r[1] = rd32(0x000df5a4u + + 0x54u);
    }
L_000df5a0:;
    {
        cpu->r[2] = rd32(0x000df5a8u + + 0x54u);
    }
L_000df5a4:;
    {
        cpu->r[3] = rd32(0x000df5acu + + 0x54u);
    }
L_000df5a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df5b0u, cpu->r[1], 0, 0);
    }
L_000df5ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df5b4u, cpu->r[2], 0, 0);
    }
L_000df5b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000df5b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df5bcu, cpu->r[3], 0, 0);
    }
L_000df5b8:;
    {
        cpu->r[14] = 0x000df5bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000df5bc:;
    {
        goto L_000df4a0;
    }
}

/* _ZN5Scene19DestroyBlockingCarsEv @ 000df604 (arm) */
void fn_000df604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df604:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000df608:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000df60c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000df610:;
    {
        cpu->r[7] = 0x00008268u;
    }
L_000df614:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000df618:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000001f0u, 0, 0);
    }
L_000df61c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000df620:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_000df624:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000df628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df62c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000df630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df644;
        }
    }
L_000df634:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000df638:;
    {
        cpu->r[14] = 0x000df640u;
    }
L_000df63c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000df640u)) return;
    }
L_000df640:;
    {
        wr32(cpu->r[5], cpu->r[8]);
    }
L_000df644:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000df648:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000df64c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df674;
        }
    }
L_000df654:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_000df658:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df65c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df674;
        }
    }
L_000df660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000df664:;
    {
        cpu->r[14] = 0x000df66cu;
    }
L_000df668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000df66cu)) return;
    }
L_000df66c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000df670:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[8]);
    }
L_000df674:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000df678:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000078u, 1, 1);
    }
L_000df67c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df624;
        }
    }
L_000df680:;
    {
        cpu->r[4] = 0x00008268u;
    }
L_000df684:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000df688:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000df68c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000df690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df6a0;
        }
    }
L_000df694:;
    {
        cpu->r[14] = 0x000df698u; fn_0018ba60(cpu);
    }
L_000df698:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000df69c:;
    {
        wr32(cpu->r[6] + cpu->r[4], cpu->r[3]);
    }
L_000df6a0:;
    {
        cpu->r[7] = 0x0000826cu;
    }
L_000df6a4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000df6a8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000df6ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000df6b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000df6b4u)) return;
        }
    }
L_000df6b4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + - 0x4u);
    }
L_000df6b8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000df6bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000df6c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000df6c4:;
    {
        goto L_000df6ec;
    }
L_000df6c8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_000df6cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000df6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df6e4;
        }
    }
L_000df6d4:;
    {
        cpu->r[14] = 0x000df6d8u; fn_000b2bc8(cpu);
    }
L_000df6d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000df6dc:;
    {
        cpu->r[14] = 0x000df6e0u; fn_0018ba20(cpu);
    }
L_000df6e0:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[8]);
    }
L_000df6e4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000df6e8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_000df6ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000df6f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df6c8;
        }
    }
L_000df6f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000df6f8:;
    {
        cpu->r[14] = 0x000df6fcu; fn_0018ba60(cpu);
    }
L_000df6fc:;
    {
        cpu->r[3] = 0x0000826cu;
    }
L_000df700:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df704:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000df708:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000df70c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000df710u)) return;
    }
}

/* _ZN5Scene20IsInsideWaypointAreaEiiP8WAYPOINT @ 000df710 (arm) */
void fn_000df710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df710:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1au);
    }
L_000df714:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000df718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df780;
        }
    }
L_000df71c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000df720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df72c;
        }
    }
L_000df724:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000df728:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000df72c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000df730:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df734:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000df738:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_000df73c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000df740:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000df744:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000df748:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000df74c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000df750:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000df754:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000df758:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000df75c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000df760:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000df764:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000df768:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_000df76c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000df770:;
    {
        vfp_sync_flags(cpu);
    }
L_000df774:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000df778:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000df77c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000df780:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000df784:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df788:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_000df78c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000df790:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000df794:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000df798:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000df79c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000df7a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000df7a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000df7a8:;
    {
        vfp_sync_flags(cpu);
    }
L_000df7ac:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_000df7b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000df7b4:;
    {
        vfp_sync_flags(cpu);
    }
L_000df7b8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000df724;
        }
    }
L_000df7bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000df7c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000df7c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x20u);
    }
L_000df7c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000df7cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000df7d0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000df7d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000df7d8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000df7dc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000df7e0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000df7e4:;
    {
        vfp_sync_flags(cpu);
    }
L_000df7e8:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_000df7ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000df7f0:;
    {
        vfp_sync_flags(cpu);
    }
L_000df7f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000df7f8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000df7fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameResource5GetWpEi @ 000df800 (arm) */
void fn_000df800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df800:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000df804:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000df808:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000df80c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000df810:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000df820;
        }
    }
L_000df814:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_000df818:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000df81c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000df854;
        }
    }
L_000df820:;
    {
        cpu->r[1] = rd32(0x000df828u + + 0x3cu);
    }
L_000df824:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000df828:;
    {
        cpu->r[2] = rd32(0x000df830u + + 0x38u);
    }
L_000df82c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000df830:;
    {
        cpu->r[3] = rd32(0x000df838u + + 0x34u);
    }
L_000df834:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df83cu, cpu->r[1], 0, 0);
    }
L_000df838:;
    {
        cpu->r[12] = rd32(0x000df840u + + 0x30u);
    }
L_000df83c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df844u, cpu->r[2], 0, 0);
    }
L_000df840:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df848u, cpu->r[3], 0, 0);
    }
L_000df844:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000df848:;
    {
        cpu->r[12] = add_flags(cpu, 0x000df850u, cpu->r[12], 0, 0);
    }
L_000df84c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000df850:;
    {
        cpu->r[14] = 0x000df854u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000df854:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_000df858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000df85c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000df860:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000df864u)) return;
    }
}

/* _ZN5Scene17UpdateCheckPointsEv @ 000df874 (arm) */
void fn_000df874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df874:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000df878:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000df87c:;
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
L_000df880:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000df884:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000df888:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000df88c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000df890:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000df894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000df898:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000df89c:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x4u);
    }
L_000df8a0:;
    {
        cpu->r[2] = 0x00001688u;
    }
L_000df8a4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000df8a8:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x1b0u);
    }
L_000df8ac:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000df8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df9c4;
        }
    }
L_000df8b4:;
    {
        cpu->r[10] = 0x00008388u;
    }
L_000df8b8:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000df8bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000df8c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000df8c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df9c4;
        }
    }
L_000df8c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000df8cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00001640u, 0, 0);
    }
L_000df8d0:;
    {
        cpu->r[8] = 0x00008390u;
    }
L_000df8d4:;
    {
        cpu->r[11] = 0x00008320u;
    }
L_000df8d8:;
    {
        cpu->r[0] = 0x0000838cu;
    }
L_000df8dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000034u, 0, 0);
    }
L_000df8e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000df8e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000344u, 0, 0);
    }
L_000df8e8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000df8ec:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000df8f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000df8f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000df8f8:;
    {
        goto L_000df918;
    }
L_000df8fc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000df900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000df970;
        }
    }
L_000df904:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000df908:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000df90c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000df910:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000df914:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df9c4;
        }
    }
L_000df918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x20u);
    }
L_000df91c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000df920:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00008c50u;
        }
    }
L_000df924:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000df928:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[0]);
        }
    }
L_000df92c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1cu);
        }
    }
L_000df930:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_000df934:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000eu, 1, 1);
    }
L_000df938:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df8fc;
        }
    }
L_000df93c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000df940:;
    {
        cpu->r[14] = 0x000df944u; fn_0015d718(cpu);
    }
L_000df944:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000df948:;
    {
        wr32(cpu->r[6] + cpu->r[11], cpu->r[5]);
    }
L_000df94c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000078u;
        }
    }
L_000df954:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
        }
    }
L_000df958:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_000df95c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[0], cpu->r[3]);
        }
    }
L_000df960:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0x20u);
    }
L_000df964:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[2]);
        }
    }
L_000df968:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000df96c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df904;
        }
    }
L_000df970:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000df974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000069u, 1, 1);
    }
L_000df978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df904;
        }
    }
L_000df97c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000df980:;
    {
        cpu->r[14] = 0x000df984u; fn_0015d718(cpu);
    }
L_000df984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_000df988:;
    {
        cpu->r[2] = 0x00000069u;
    }
L_000df98c:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[2]);
    }
L_000df990:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000df994:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000df998:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000df9cc;
        }
    }
L_000df99c:;
    {
        cpu->r[2] = 0x00000bb8u;
    }
L_000df9a0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000df9a4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
        }
    }
L_000df9a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_000df9ac:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000df9b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000df9b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000df9b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000df9bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000df9c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000df918;
        }
    }
L_000df9c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000df9c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000df9ccu)) return;
    }
L_000df9cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000df9d0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000df904;
        }
    }
L_000df9d4:;
    {
        cpu->r[2] = 0x00000bb8u;
    }
L_000df9d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000df9dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
        }
    }
L_000df9e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_000df9e4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000df9e8:;
    {
        goto L_000df9b0;
    }
}

/* _ZN5Scene27InitSkyboxAndRoadReflectionEv @ 000df9ec (arm) */
void fn_000df9ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000df9ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000df9f0:;
    {
        cpu->r[5] = 0x00001c98u;
    }
L_000df9f4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000df9f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000df9fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000dfa00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dfa04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfa20;
        }
    }
L_000dfa08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dfa0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dfa10:;
    {
        cpu->r[14] = 0x000dfa18u;
    }
L_000dfa14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfa18u)) return;
    }
L_000dfa18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dfa1c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000dfa20:;
    {
        cpu->r[5] = 0x00001c9cu;
    }
L_000dfa24:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000dfa28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000dfa2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dfa30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfa4c;
        }
    }
L_000dfa34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dfa38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dfa3c:;
    {
        cpu->r[14] = 0x000dfa44u;
    }
L_000dfa40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfa44u)) return;
    }
L_000dfa44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dfa48:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000dfa4c:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000dfa50:;
    {
        cpu->r[5] = 0x00001c94u;
    }
L_000dfa54:;
    {
        cpu->r[14] = 0x000dfa58u; fn_0018ba6c(cpu);
    }
L_000dfa58:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000dfa5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000dfa60:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dfa64:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000dfa68:;
    {
        cpu->r[14] = 0x000dfa6cu; fn_000ea704(cpu);
    }
L_000dfa6c:;
    {
        cpu->r[3] = 0x00001c98u;
    }
L_000dfa70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dfa74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfa78:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000dfa7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dfa80:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000dfa84:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000dfa88:;
    {
        cpu->r[14] = 0x000dfa90u;
    }
L_000dfa8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfa90u)) return;
    }
L_000dfa90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dfa94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d3u);
        }
    }
L_000dfa98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfa9cu)) return;
        }
    }
L_000dfa9c:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000dfaa0:;
    {
        cpu->r[14] = 0x000dfaa4u; fn_0018ba6c(cpu);
    }
L_000dfaa4:;
    {
        cpu->r[1] = 0x00000384u;
    }
L_000dfaa8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dfaac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000dfab0:;
    {
        cpu->r[14] = 0x000dfab4u; fn_000ea704(cpu);
    }
L_000dfab4:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_000dfab8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dfabc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dfac0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dfac4:;
    {
        cpu->r[1] = 0x00000384u;
    }
L_000dfac8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000dfacc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dfad0:;
    {
        cpu->r[14] = 0x000dfad8u;
    }
L_000dfad4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfad8u)) return;
    }
L_000dfad8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dfadc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x000000d3u);
        }
    }
L_000dfae0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000dfae4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfae8u)) return;
    }
}

/* _ZN5Scene24InitZoneMessageWaypointsEv @ 000dfae8 (arm) */
void fn_000dfae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dfae8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000dfaec:;
    {
        cpu->r[2] = 0x000083f1u;
    }
L_000dfaf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfaf4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dfaf8:;
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
L_000dfafc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000dfb00:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000dfb04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000dfb08:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000dfb0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000dfb10:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_000dfb14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dfd68;
        }
    }
L_000dfb18:;
    {
        cpu->r[11] = rd32(0x000dfb20u + + 0x310u);
    }
L_000dfb1c:;
    {
        cpu->r[8] = rd32(0x000dfb24u + + 0x310u);
    }
L_000dfb20:;
    {
        cpu->r[10] = rd32(0x000dfb28u + + 0x310u);
    }
L_000dfb24:;
    {
        cpu->r[11] = add_flags(cpu, 0x000dfb2cu, cpu->r[11], 0, 0);
    }
L_000dfb28:;
    {
        cpu->r[9] = rd32(0x000dfb30u + + 0x30cu);
    }
L_000dfb2c:;
    {
        cpu->r[8] = add_flags(cpu, 0x000dfb34u, cpu->r[8], 0, 0);
    }
L_000dfb30:;
    {
        cpu->r[10] = add_flags(cpu, 0x000dfb38u, cpu->r[10], 0, 0);
    }
L_000dfb34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_000dfb38:;
    {
        cpu->r[9] = add_flags(cpu, 0x000dfb40u, cpu->r[9], 0, 0);
    }
L_000dfb3c:;
    {
        goto L_000dfb48;
    }
L_000dfb40:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000dfb44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfbdc;
        }
    }
L_000dfb48:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000dfb4c:;
    {
        cpu->r[5] = rd32(0x000dfb54u + + 0x2ecu);
    }
L_000dfb50:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000dfb54:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dfb58:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000dfb5c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000dfb60:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000dfb64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfb68:;
    {
        cpu->r[5] = add_flags(cpu, 0x000dfb70u, cpu->r[5], 0, 0);
    }
L_000dfb6c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_000dfb70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dfb80;
        }
    }
L_000dfb74:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000dfb78:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000dfb7c:;
    {
        cpu->r[14] = 0x000dfb80u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfb80:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000dfb84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfb88:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dfb8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000dfb90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dfb94:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x12u);
    }
L_000dfb98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000dfb9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dfb40;
        }
    }
L_000dfba0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_000dfba4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000dfba8:;
    {
        vfp_sync_flags(cpu);
    }
L_000dfbac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dfdc4;
        }
    }
L_000dfbb0:;
    {
        cpu->r[3] = 0x000083f1u;
    }
L_000dfbb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000dfbb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfbbc:;
    {
        cpu->r[1] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000dfbc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000dfbc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000dfbc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000fcu, 0, 0);
    }
L_000dfbcc:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_000dfbd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dfbd4:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_000dfbd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dfb48;
        }
    }
L_000dfbdc:;
    {
        cpu->r[4] = 0x000083f1u;
    }
L_000dfbe0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000dfbe4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_000dfbe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000dfbec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000dfdf4;
        }
    }
L_000dfbf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dfbf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfd68;
        }
    }
L_000dfbf8:;
    {
        cpu->r[11] = rd32(0x000dfc00u + + 0x244u);
    }
L_000dfbfc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000dfc00:;
    {
        cpu->r[10] = rd32(0x000dfc08u + + 0x240u);
    }
L_000dfc04:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000dfc08:;
    {
        cpu->r[3] = rd32(0x000dfc10u + + 0x23cu);
    }
L_000dfc0c:;
    {
        cpu->r[11] = add_flags(cpu, 0x000dfc14u, cpu->r[11], 0, 0);
    }
L_000dfc10:;
    {
        cpu->r[9] = rd32(0x000dfc18u + + 0x238u);
    }
L_000dfc14:;
    {
        cpu->r[10] = add_flags(cpu, 0x000dfc1cu, cpu->r[10], 0, 0);
    }
L_000dfc18:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfc20u, cpu->r[3], 0, 0);
    }
L_000dfc1c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_000dfc20:;
    {
        cpu->r[9] = add_flags(cpu, 0x000dfc28u, cpu->r[9], 0, 0);
    }
L_000dfc24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000dfc28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_000dfc2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000dfc30:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000008u, 0, 0);
    }
L_000dfc34:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000dfc38:;
    {
        goto L_000dfce0;
    }
L_000dfc3c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000dfc40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000dfc44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfc74;
        }
    }
L_000dfc48:;
    {
        cpu->r[3] = 0x00000511u;
    }
L_000dfc4c:;
    {
        cpu->r[1] = rd32(0x000dfc54u + + 0x200u);
    }
L_000dfc50:;
    {
        cpu->r[2] = rd32(0x000dfc58u + + 0x200u);
    }
L_000dfc54:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfc58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dfc5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfc64u, cpu->r[1], 0, 0);
    }
L_000dfc60:;
    {
        cpu->r[3] = rd32(0x000dfc68u + + 0x1f4u);
    }
L_000dfc64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfc6cu, cpu->r[2], 0, 0);
    }
L_000dfc68:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000dfc6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfc74u, cpu->r[3], 0, 0);
    }
L_000dfc70:;
    {
        cpu->r[14] = 0x000dfc74u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfc74:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000dfc78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000dfc7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfd70;
        }
    }
L_000dfc80:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000dfc84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000168u, 1, 1);
    }
L_000dfc88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dfcb8;
        }
    }
L_000dfc8c:;
    {
        cpu->r[3] = 0x00000514u;
    }
L_000dfc90:;
    {
        cpu->r[1] = rd32(0x000dfc98u + + 0x1c8u);
    }
L_000dfc94:;
    {
        cpu->r[2] = rd32(0x000dfc9cu + + 0x1c8u);
    }
L_000dfc98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfc9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dfca0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfca8u, cpu->r[1], 0, 0);
    }
L_000dfca4:;
    {
        cpu->r[3] = rd32(0x000dfcacu + + 0x1bcu);
    }
L_000dfca8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfcb0u, cpu->r[2], 0, 0);
    }
L_000dfcac:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000dfcb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfcb8u, cpu->r[3], 0, 0);
    }
L_000dfcb4:;
    {
        cpu->r[14] = 0x000dfcb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfcb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000dfcbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dfcc0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000dfcc4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000dfcc8:;
    {
        cpu->r[3] = 0x000083f1u;
    }
L_000dfccc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfcd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_000dfcd4:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000dfcd8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000dfcdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dfda4;
        }
    }
L_000dfce0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00006000u, 0, 0);
    }
L_000dfce4:;
    {
        cpu->r[3] = 0x000087f0u;
    }
L_000dfce8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000fcu, 0, 0);
    }
L_000dfcec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfcf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dfcf4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dfcf8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000dfcfc:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_000dfd00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 1);
    }
L_000dfd04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dfc3c;
        }
    }
L_000dfd08:;
    {
        cpu->r[3] = 0x00000510u;
    }
L_000dfd0c:;
    {
        cpu->r[1] = rd32(0x000dfd14u + + 0x158u);
    }
L_000dfd10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dfd14:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfd18:;
    {
        cpu->r[2] = rd32(0x000dfd20u + + 0x150u);
    }
L_000dfd1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfd24u, cpu->r[1], 0, 0);
    }
L_000dfd20:;
    {
        cpu->r[3] = rd32(0x000dfd28u + + 0x14cu);
    }
L_000dfd24:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfd2cu, cpu->r[2], 0, 0);
    }
L_000dfd28:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000dfd2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfd34u, cpu->r[3], 0, 0);
    }
L_000dfd30:;
    {
        cpu->r[14] = 0x000dfd34u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfd34:;
    {
        goto L_000dfc3c;
    }
L_000dfd38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dfd3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dfd68;
        }
    }
L_000dfd40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00018000u, 0, 0);
    }
L_000dfd44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dfd48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000003f4u, 0, 0);
    }
L_000dfd4c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000dfd50:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_000dfd54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000dfd58:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_000dfd5c:;
    {
        cpu->r[0] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000dfd60:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000dfd64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dfd50;
        }
    }
L_000dfd68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000dfd6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dfd70u)) return;
    }
L_000dfd70:;
    {
        cpu->r[3] = 0x00000513u;
    }
L_000dfd74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000dfd78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dfd7c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfd80:;
    {
        cpu->r[1] = rd32(0x000dfd88u + + 0xf0u);
    }
L_000dfd84:;
    {
        cpu->r[2] = rd32(0x000dfd8cu + + 0xf0u);
    }
L_000dfd88:;
    {
        cpu->r[3] = rd32(0x000dfd90u + + 0xf0u);
    }
L_000dfd8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfd94u, cpu->r[1], 0, 0);
    }
L_000dfd90:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfd98u, cpu->r[2], 0, 0);
    }
L_000dfd94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dfd98:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfda0u, cpu->r[3], 0, 0);
    }
L_000dfd9c:;
    {
        cpu->r[14] = 0x000dfda0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfda0:;
    {
        goto L_000dfc80;
    }
L_000dfda4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_000dfda8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dfd38;
        }
    }
L_000dfdac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000dfdb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000dfdb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dfd68;
        }
    }
L_000dfdb8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000dfdbc:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_000dfdc0:;
    {
        goto L_000dfce0;
    }
L_000dfdc4:;
    {
        cpu->r[3] = 0x00000502u;
    }
L_000dfdc8:;
    {
        cpu->r[1] = rd32(0x000dfdd0u + + 0xb4u);
    }
L_000dfdcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dfdd0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfdd4:;
    {
        cpu->r[2] = rd32(0x000dfddcu + + 0xacu);
    }
L_000dfdd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfde0u, cpu->r[1], 0, 0);
    }
L_000dfddc:;
    {
        cpu->r[3] = rd32(0x000dfde4u + + 0xa8u);
    }
L_000dfde0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfde8u, cpu->r[2], 0, 0);
    }
L_000dfde4:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000dfde8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfdf0u, cpu->r[3], 0, 0);
    }
L_000dfdec:;
    {
        cpu->r[14] = 0x000dfdf0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfdf0:;
    {
        goto L_000dfbb0;
    }
L_000dfdf4:;
    {
        cpu->r[1] = rd32(0x000dfdfcu + + 0x94u);
    }
L_000dfdf8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dfdfc:;
    {
        cpu->r[12] = rd32(0x000dfe04u + + 0x90u);
    }
L_000dfe00:;
    {
        cpu->r[14] = 0x00000506u;
    }
L_000dfe04:;
    {
        cpu->r[2] = rd32(0x000dfe0cu + + 0x8cu);
    }
L_000dfe08:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dfe10u, cpu->r[1], 0, 0);
    }
L_000dfe0c:;
    {
        cpu->r[3] = rd32(0x000dfe14u + + 0x88u);
    }
L_000dfe10:;
    {
        cpu->r[12] = add_flags(cpu, 0x000dfe18u, cpu->r[12], 0, 0);
    }
L_000dfe14:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dfe1cu, cpu->r[2], 0, 0);
    }
L_000dfe18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000dfe1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dfe24u, cpu->r[3], 0, 0);
    }
L_000dfe20:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000dfe24:;
    {
        cpu->r[14] = 0x000dfe28u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dfe28:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_000dfe2c:;
    {
        goto L_000dfbf0;
    }
}

/* _ZN5Scene19InitTunnelWaypointsEv @ 000dfea0 (arm) */
void fn_000dfea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dfea0:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000dfea4:;
    {
        cpu->r[2] = 0x0000839cu;
    }
L_000dfea8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfeac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dfeb0:;
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
L_000dfeb4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000dfeb8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000dfebc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000dfec0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000dfec4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000dfec8:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_000dfecc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dff90;
        }
    }
L_000dfed0:;
    {
        cpu->r[11] = rd32(0x000dfed8u + + 0xf0u);
    }
L_000dfed4:;
    {
        cpu->r[8] = rd32(0x000dfedcu + + 0xf0u);
    }
L_000dfed8:;
    {
        cpu->r[10] = rd32(0x000dfee0u + + 0xf0u);
    }
L_000dfedc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000dfee4u, cpu->r[11], 0, 0);
    }
L_000dfee0:;
    {
        cpu->r[9] = rd32(0x000dfee8u + + 0xecu);
    }
L_000dfee4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000dfeecu, cpu->r[8], 0, 0);
    }
L_000dfee8:;
    {
        cpu->r[10] = add_flags(cpu, 0x000dfef0u, cpu->r[10], 0, 0);
    }
L_000dfeec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000024u, 0, 0);
    }
L_000dfef0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000dfef8u, cpu->r[9], 0, 0);
    }
L_000dfef4:;
    {
        goto L_000dff00;
    }
L_000dfef8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000dfefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dff90;
        }
    }
L_000dff00:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000dff04:;
    {
        cpu->r[5] = rd32(0x000dff0cu + + 0xccu);
    }
L_000dff08:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000dff0c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dff10:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000dff14:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000dff18:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000dff1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dff20:;
    {
        cpu->r[5] = add_flags(cpu, 0x000dff28u, cpu->r[5], 0, 0);
    }
L_000dff24:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_000dff28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dff38;
        }
    }
L_000dff2c:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000dff30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000dff34:;
    {
        cpu->r[14] = 0x000dff38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dff38:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000dff3c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dff40:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dff44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000dff48:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dff4c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x12u);
    }
L_000dff50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000dff54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dfef8;
        }
    }
L_000dff58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_000dff5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000dff60:;
    {
        vfp_sync_flags(cpu);
    }
L_000dff64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dff98;
        }
    }
L_000dff68:;
    {
        cpu->r[3] = 0x0000839cu;
    }
L_000dff6c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000dff70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dff74:;
    {
        cpu->r[1] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000dff78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000dff7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000dff80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000e8u, 0, 0);
    }
L_000dff84:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[1]);
    }
L_000dff88:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[5]);
    }
L_000dff8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dff00;
        }
    }
L_000dff90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000dff94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dff98u)) return;
    }
L_000dff98:;
    {
        cpu->r[3] = 0x000004efu;
    }
L_000dff9c:;
    {
        cpu->r[1] = rd32(0x000dffa4u + + 0x38u);
    }
L_000dffa0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dffa4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dffa8:;
    {
        cpu->r[2] = rd32(0x000dffb0u + + 0x30u);
    }
L_000dffac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dffb4u, cpu->r[1], 0, 0);
    }
L_000dffb0:;
    {
        cpu->r[3] = rd32(0x000dffb8u + + 0x2cu);
    }
L_000dffb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dffbcu, cpu->r[2], 0, 0);
    }
L_000dffb8:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000dffbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dffc4u, cpu->r[3], 0, 0);
    }
L_000dffc0:;
    {
        cpu->r[14] = 0x000dffc4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dffc4:;
    {
        goto L_000dff68;
    }
}

/* _ZN5Scene18InitSpawnPositionsEv @ 000dffe8 (arm) */
void fn_000dffe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dffe8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000dffec:;
    {
        cpu->r[2] = 0x00008304u;
    }
L_000dfff0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dfff4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dfff8:;
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
L_000dfffc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e0000:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000e0004:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000e0008:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000e000c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e0010:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[4]);
    }
L_000e0014:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e011c;
        }
    }
L_000e0018:;
    {
        cpu->r[11] = rd32(0x000e0020u + + 0x138u);
    }
L_000e001c:;
    {
        cpu->r[8] = rd32(0x000e0024u + + 0x138u);
    }
L_000e0020:;
    {
        cpu->r[10] = rd32(0x000e0028u + + 0x138u);
    }
L_000e0024:;
    {
        cpu->r[11] = add_flags(cpu, 0x000e002cu, cpu->r[11], 0, 0);
    }
L_000e0028:;
    {
        cpu->r[9] = rd32(0x000e0030u + + 0x134u);
    }
L_000e002c:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e0034u, cpu->r[8], 0, 0);
    }
L_000e0030:;
    {
        cpu->r[10] = add_flags(cpu, 0x000e0038u, cpu->r[10], 0, 0);
    }
L_000e0034:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000038u, 0, 0);
    }
L_000e0038:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e0040u, cpu->r[9], 0, 0);
    }
L_000e003c:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000e0040:;
    {
        cpu->r[6] = rd32(0x000e0048u + + 0x120u);
    }
L_000e0044:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e0048:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000e004c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000e0050:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000e0054:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e0058:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e005c:;
    {
        cpu->r[6] = add_flags(cpu, 0x000e0064u, cpu->r[6], 0, 0);
    }
L_000e0060:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_000e0064:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e0074;
        }
    }
L_000e0068:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000e006c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000e0070:;
    {
        cpu->r[14] = 0x000e0074u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0074:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e0078:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e007c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e0080:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000e0084:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e0088:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x12u);
    }
L_000e008c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e0090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e0100;
        }
    }
L_000e0094:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x18u);
    }
L_000e0098:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e009c:;
    {
        cpu->r[1] = rd32(0x000e00a4u + + 0xc8u);
    }
L_000e00a0:;
    {
        cpu->r[2] = rd32(0x000e00a8u + + 0xc8u);
    }
L_000e00a4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000e00a8:;
    {
        cpu->r[3] = rd32(0x000e00b0u + + 0xc4u);
    }
L_000e00ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e00b4u, cpu->r[1], 0, 0);
    }
L_000e00b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e00b8u, cpu->r[2], 0, 0);
    }
L_000e00b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e00bcu, cpu->r[3], 0, 0);
    }
L_000e00b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e00cc;
        }
    }
L_000e00bc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x2cu);
    }
L_000e00c0:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_000e00c4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 1);
    }
L_000e00c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e00e0;
        }
    }
L_000e00cc:;
    {
        cpu->r[12] = 0x000004dau;
    }
L_000e00d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000e00d4:;
    {
        cpu->r[14] = 0x000e00d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e00d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x2cu);
    }
L_000e00dc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000e00e0:;
    {
        cpu->r[3] = 0x00008304u;
    }
L_000e00e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006000u, 0, 0);
    }
L_000e00e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e00ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000c2u, 0, 0);
    }
L_000e00f0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000e00f4:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[6]);
    }
L_000e00f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000e00fc:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000e0100:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000e0104:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e003c;
        }
    }
L_000e0108:;
    {
        cpu->r[3] = 0x00008304u;
    }
L_000e010c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0110:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000e0114:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000e0118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e0150;
        }
    }
L_000e011c:;
    {
        cpu->r[1] = rd32(0x000e0124u + + 0x54u);
    }
L_000e0120:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e0124:;
    {
        cpu->r[12] = rd32(0x000e012cu + + 0x50u);
    }
L_000e0128:;
    {
        cpu->r[14] = 0x000004deu;
    }
L_000e012c:;
    {
        cpu->r[2] = rd32(0x000e0134u + + 0x4cu);
    }
L_000e0130:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0138u, cpu->r[1], 0, 0);
    }
L_000e0134:;
    {
        cpu->r[3] = rd32(0x000e013cu + + 0x48u);
    }
L_000e0138:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e0140u, cpu->r[12], 0, 0);
    }
L_000e013c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0144u, cpu->r[2], 0, 0);
    }
L_000e0140:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000038u, 0, 0);
    }
L_000e0144:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e014cu, cpu->r[3], 0, 0);
    }
L_000e0148:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e014c:;
    {
        cpu->r[14] = 0x000e0150u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0150:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e0154:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e0158u)) return;
    }
}

/* _ZN5Scene15InitCheckPointsEv @ 000e0188 (arm) */
void fn_000e0188(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e0188:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e018c:;
    {
        cpu->r[1] = 0x00008388u;
    }
L_000e0190:;
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
L_000e0194:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0198:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e019c:;
    {
        cpu->r[2] = 0x00008364u;
    }
L_000e01a0:;
    {
        cpu->r[0] = 0x00008344u;
    }
L_000e01a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000e01a8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e01ac:;
    {
        cpu->r[3] = 0x00008324u;
    }
L_000e01b0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e01b4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e01b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e01bc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000e01c0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000e01c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000e01c8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[4]);
    }
L_000e01cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000e01d0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_000e01d4:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_000e01d8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_000e01dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e033c;
        }
    }
L_000e01e0:;
    {
        cpu->r[9] = rd32(0x000e01e8u + + 0x170u);
    }
L_000e01e4:;
    {
        cpu->r[7] = 0x000087c0u;
    }
L_000e01e8:;
    {
        cpu->r[11] = rd32(0x000e01f0u + + 0x16cu);
    }
L_000e01ec:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e01f0:;
    {
        cpu->r[3] = rd32(0x000e01f8u + + 0x168u);
    }
L_000e01f4:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e01fcu, cpu->r[9], 0, 0);
    }
L_000e01f8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000e0200u, cpu->r[11], 0, 0);
    }
L_000e01fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e0204u, cpu->r[3], 0, 0);
    }
L_000e0200:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000e0204:;
    {
        cpu->r[3] = rd32(0x000e020cu + + 0x158u);
    }
L_000e0208:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e0210u, cpu->r[3], 0, 0);
    }
L_000e020c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000e0210:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e0214:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000e0218:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e021c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_000e0220:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000e0224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e0280;
        }
    }
L_000e0228:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_000e022c:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000e0230:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e0234:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e0238:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e023c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e0240:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e0244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e033c;
        }
    }
L_000e0248:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e024c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_000e0250:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0210;
        }
    }
L_000e0254:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000e0258:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000e025c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e0260:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e0264:;
    {
        cpu->r[14] = 0x000e0268u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0268:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000e026c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000e0270:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e0274:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_000e0278:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000e027c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e0228;
        }
    }
L_000e0280:;
    {
        cpu->r[6] = 0x00008388u;
    }
L_000e0284:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000e0288:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e028c:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_000e0290:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000e0294:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000e0298:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e029c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000e02a0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e02a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000e02a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00006000u, 0, 0);
    }
L_000e02ac:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000e02b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x000000d0u, 0, 0);
    }
L_000e02b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000e02b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_000e02bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000e02c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000e02c4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000e02c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e02cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e02d0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000e02d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000e02d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e02dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e02e0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e02e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000e02e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000e02ec:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[14]);
    }
L_000e02f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e02f4:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[14]);
    }
L_000e02f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000e02fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e0300:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e0304:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e0308:;
    {
        cpu->r[14] = 0x000e030cu; fn_001813dc(cpu);
    }
L_000e030c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e0310:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_000e0314:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000e0318:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000e031c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000e0320:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e0324:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000e0328:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e032c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e0330:;
    {
        wr32(cpu->r[8] + + 0x324u, cpu->r[0]);
    }
L_000e0334:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e0338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e0248;
        }
    }
L_000e033c:;
    {
        cpu->r[3] = 0x00008390u;
    }
L_000e0340:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e0344:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0348:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000e034c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000e0350:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000e0354:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e0358u)) return;
    }
}

/* _ZN5Scene17FindStartUpScriptEv @ 000e0368 (arm) */
void fn_000e0368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e0368:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e036c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0370:;
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
L_000e0374:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e0378:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000e037c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e0380:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000e0384:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e041c;
        }
    }
L_000e0388:;
    {
        cpu->r[10] = rd32(0x000e0390u + + 0x94u);
    }
L_000e038c:;
    {
        cpu->r[4] = 0x000087c0u;
    }
L_000e0390:;
    {
        cpu->r[9] = rd32(0x000e0398u + + 0x90u);
    }
L_000e0394:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000e0398:;
    {
        cpu->r[11] = rd32(0x000e03a0u + + 0x8cu);
    }
L_000e039c:;
    {
        cpu->r[10] = add_flags(cpu, 0x000e03a4u, cpu->r[10], 0, 0);
    }
L_000e03a0:;
    {
        cpu->r[8] = rd32(0x000e03a8u + + 0x88u);
    }
L_000e03a4:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e03acu, cpu->r[9], 0, 0);
    }
L_000e03a8:;
    {
        cpu->r[11] = add_flags(cpu, 0x000e03b0u, cpu->r[11], 0, 0);
    }
L_000e03ac:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000e03b0:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e03b8u, cpu->r[8], 0, 0);
    }
L_000e03b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000e03b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 0);
    }
L_000e03bc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_000e03c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000e03c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e03dc;
        }
    }
L_000e03c8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x10u);
    }
L_000e03cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e03d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e03dc;
        }
    }
L_000e03d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e03d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e03dcu)) return;
    }
L_000e03dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000e03e0:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000e03e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_000e03e8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e03ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000e03f0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000e03f4:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e03f8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e03fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e041c;
        }
    }
L_000e0400:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e0404:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 1);
    }
L_000e0408:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e03b4;
        }
    }
L_000e040c:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000e0410:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000e0414:;
    {
        cpu->r[14] = 0x000e0418u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0418:;
    {
        goto L_000e03b4;
    }
L_000e041c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000e0420:;
    {
        goto L_000e03d4;
    }
}

/* _ZN5Scene12CheckTriggerEi @ 000e0434 (arm) */
void fn_000e0434(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e0434:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000e0438:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e043c:;
    {
        cpu->r[5] = rd32(0x000e0444u + + 0x20cu);
    }
L_000e0440:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000e0444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e0448:;
    {
        cpu->r[5] = add_flags(cpu, 0x000e0450u, cpu->r[5], 0, 0);
    }
L_000e044c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0464;
        }
    }
L_000e0450:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e0454:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0458:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e045c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e0460:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0498;
        }
    }
L_000e0464:;
    {
        cpu->r[1] = rd32(0x000e046cu + + 0x1e8u);
    }
L_000e0468:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e046c:;
    {
        cpu->r[2] = rd32(0x000e0474u + + 0x1e4u);
    }
L_000e0470:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e0474:;
    {
        cpu->r[3] = rd32(0x000e047cu + + 0x1e0u);
    }
L_000e0478:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0480u, cpu->r[1], 0, 0);
    }
L_000e047c:;
    {
        cpu->r[12] = rd32(0x000e0484u + + 0x1dcu);
    }
L_000e0480:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0488u, cpu->r[2], 0, 0);
    }
L_000e0484:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e048cu, cpu->r[3], 0, 0);
    }
L_000e0488:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e048c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e0494u, cpu->r[12], 0, 0);
    }
L_000e0490:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e0494:;
    {
        cpu->r[14] = 0x000e0498u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0498:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e049c:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e04a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e04a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e04a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e04ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e04b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e04b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e04b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e04bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e04c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e04c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1dcu);
    }
L_000e04c8:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000e04cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e04dc;
        }
    }
L_000e04d0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e04d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000e04d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e04dcu)) return;
    }
L_000e04dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x498u);
    }
L_000e04e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e04e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e04d0;
        }
    }
L_000e04e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 6u, &shc), 0, 0);
    }
L_000e04ec:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x12u);
    }
L_000e04f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_000e04f4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
        }
    }
L_000e04f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e04d0;
        }
    }
L_000e04fc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x28u);
    }
L_000e0500:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e0504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e04d0;
        }
    }
L_000e0508:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000e050c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e05b4;
        }
    }
L_000e0510:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x18u);
    }
L_000e0514:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000e0518:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e05b4;
        }
    }
L_000e051c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x2cu);
    }
L_000e0520:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0x4u);
    }
L_000e0524:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e0528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e0618;
        }
    }
L_000e052c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_000e0530:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e0534:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e0618;
        }
    }
L_000e0538:;
    {
        cpu->r[1] = rd32(0x000e0540u + + 0x124u);
    }
L_000e053c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_000e0540:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000e0544:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000e0548:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_000e054c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000e0550:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000e0554:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e0558:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x6u);
    }
L_000e055c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000e0560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e0568u + + 0xe4u);
    }
L_000e0564:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e0568:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000e056c:;
    {
        vfp_sync_flags(cpu);
    }
L_000e0570:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_000e0574:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000e0578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e0590;
        }
    }
L_000e057c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000e0580:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e0584:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000e0588:;
    {
        vfp_sync_flags(cpu);
    }
L_000e058c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e04d0;
        }
    }
L_000e0590:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0xau);
    }
L_000e0594:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e0598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e05b4;
        }
    }
L_000e059c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000e05a0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000e05a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e05a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000e05ac:;
    {
        vfp_sync_flags(cpu);
    }
L_000e05b0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000e04d0;
        }
    }
L_000e05b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000e05b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e05bc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000e05c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000e05c4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000e05c8:;
    {
        cpu->r[14] = 0x000e05ccu; fn_000df710(cpu);
    }
L_000e05cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x28u);
    }
L_000e05d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000e05d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e05f4;
        }
    }
L_000e05d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e05dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e05f4;
        }
    }
L_000e05e0:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x3cu);
    }
L_000e05e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e05e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000e05ec:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[0]);
        }
    }
L_000e05f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e04d4;
        }
    }
L_000e05f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000e05f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e0608;
        }
    }
L_000e05fc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x3cu);
    }
L_000e0600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e0604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e0638;
        }
    }
L_000e0608:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e060c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[0]);
        }
    }
L_000e0610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e04d4;
        }
    }
L_000e0614:;
    {
        goto L_000e04d0;
    }
L_000e0618:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000e061c:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000e0620:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000e0624:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e04d0;
        }
    }
L_000e0628:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_000e062c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000e0630:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e04d0;
        }
    }
L_000e0634:;
    {
        goto L_000e0538;
    }
L_000e0638:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_000e063c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e0640:;
    {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[3]);
    }
L_000e0644:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000e0648:;
    {
        goto L_000e04d4;
    }
}

/* _ZN5Scene16LoadSceneScriptsEi @ 000e0668 (arm) */
void fn_000e0668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e0668:;
    {
        cpu->r[3] = rd32(0x000e0670u + + 0x134u);
    }
L_000e066c:;
    {
        cpu->r[2] = rd32(0x000e0674u + + 0x134u);
    }
L_000e0670:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e0678u, cpu->r[3], 0, 0);
    }
L_000e0674:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000e0678:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e067c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e0680:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000e0684:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00018400u, 0, 0);
    }
L_000e0688:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000e068c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e0690:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e0694:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000003bcu, 0, 0);
    }
L_000e0698:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e069c:;
    {
        cpu->r[14] = 0x000e06a0u; fn_000bab20(cpu);
    }
L_000e06a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e06a4:;
    {
        cpu->r[14] = 0x000e06a8u; fn_00129640(cpu);
    }
L_000e06a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e06ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e06b0:;
    {
        cpu->r[14] = 0x000e06b4u; fn_00129b24(cpu);
    }
L_000e06b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e06b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000e06bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0760;
        }
    }
L_000e06c0:;
    {
        cpu->r[3] = 0x00001b34u;
    }
L_000e06c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000e06c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e06cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e06d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000e06d4:;
    {
        cpu->r[14] = 0x000e06d8u; fn_000e0368(cpu);
    }
L_000e06d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e06dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0768;
        }
    }
L_000e06e0:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e06e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e06e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e06ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e06f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e0728;
        }
    }
L_000e06f4:;
    {
        cpu->r[1] = rd32(0x000e06fcu + + 0xb0u);
    }
L_000e06f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e06fc:;
    {
        cpu->r[2] = rd32(0x000e0704u + + 0xacu);
    }
L_000e0700:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e0704:;
    {
        cpu->r[3] = rd32(0x000e070cu + + 0xa8u);
    }
L_000e0708:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0710u, cpu->r[1], 0, 0);
    }
L_000e070c:;
    {
        cpu->r[12] = rd32(0x000e0714u + + 0xa4u);
    }
L_000e0710:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0718u, cpu->r[2], 0, 0);
    }
L_000e0714:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e071cu, cpu->r[3], 0, 0);
    }
L_000e0718:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e071c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e0724u, cpu->r[12], 0, 0);
    }
L_000e0720:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e0724:;
    {
        cpu->r[14] = 0x000e0728u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0728:;
    {
        cpu->r[2] = 0x000087c0u;
    }
L_000e072c:;
    {
        cpu->r[3] = 0x00001b34u;
    }
L_000e0730:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e0734:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0738:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e073c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e0740:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 6u, &shc), 0, 0);
    }
L_000e0744:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000e0748:;
    {
        cpu->r[14] = 0x000e074cu; fn_000dffe8(cpu);
    }
L_000e074c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e0750:;
    {
        cpu->r[14] = 0x000e0754u; fn_000dfea0(cpu);
    }
L_000e0754:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e0758:;
    {
        cpu->r[14] = 0x000e075cu; fn_000dfae8(cpu);
    }
L_000e075c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e0760:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000e0764:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e0768u)) return;
    }
L_000e0768:;
    {
        cpu->r[1] = rd32(0x000e0770u + + 0x4cu);
    }
L_000e076c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e0770:;
    {
        cpu->r[12] = rd32(0x000e0778u + + 0x48u);
    }
L_000e0774:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_000e0778:;
    {
        cpu->r[2] = rd32(0x000e0780u + + 0x44u);
    }
L_000e077c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0784u, cpu->r[1], 0, 0);
    }
L_000e0780:;
    {
        cpu->r[3] = rd32(0x000e0788u + + 0x40u);
    }
L_000e0784:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e078cu, cpu->r[12], 0, 0);
    }
L_000e0788:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0790u, cpu->r[2], 0, 0);
    }
L_000e078c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000004cu, 0, 0);
    }
L_000e0790:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e0798u, cpu->r[3], 0, 0);
    }
L_000e0794:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e0798:;
    {
        cpu->r[14] = 0x000e079cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e079c:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000e07a0:;
    {
        goto L_000e0760;
    }
}

/* _ZN5Scene19CheckMissionTriggerEi @ 000e07cc (arm) */
void fn_000e07cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e07cc:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e07d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e07d4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000e07d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e07dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e07e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000e07e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000e07e8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000e07ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e07f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e07fc;
        }
    }
L_000e07f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e07f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000e07fcu)) return;
    }
L_000e07fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e0800:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e0838;
        }
    }
L_000e0804:;
    {
        cpu->r[1] = rd32(0x000e080cu + + 0x74u);
    }
L_000e0808:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e080c:;
    {
        cpu->r[2] = rd32(0x000e0814u + + 0x70u);
    }
L_000e0810:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e0814:;
    {
        cpu->r[3] = rd32(0x000e081cu + + 0x6cu);
    }
L_000e0818:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0820u, cpu->r[1], 0, 0);
    }
L_000e081c:;
    {
        cpu->r[12] = rd32(0x000e0824u + + 0x68u);
    }
L_000e0820:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0828u, cpu->r[2], 0, 0);
    }
L_000e0824:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e082cu, cpu->r[3], 0, 0);
    }
L_000e0828:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e082c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e0834u, cpu->r[12], 0, 0);
    }
L_000e0830:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e0834:;
    {
        cpu->r[14] = 0x000e0838u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e0838:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e083c:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e0840:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e0844:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e0848:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e084c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000e0850:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000e0854:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e0858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 0);
    }
L_000e085c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e0860:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e0864:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e0868:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_000e086c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000e0870:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x3dcu);
    }
L_000e0874:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000e0878:;
    {
        cpu->r[14] = 0x000e087cu; fn_000df710(cpu);
    }
L_000e087c:;
    {
        goto L_000e07f4;
    }
}

/* _ZN5Scene9RunScriptEi @ 000e0890 (arm) */
void fn_000e0890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e0890:;
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
L_000e0894:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_000e0898:;
    {
        cpu->r[9] = rd32(0x000e08a0u + + 0xf7cu);
    }
L_000e089c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e08a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000e08a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e08a8:;
    {
        cpu->r[0] = rd32(0x000e08b0u + + 0xf70u);
    }
L_000e08ac:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e08b4u, cpu->r[9], 0, 0);
    }
L_000e08b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000012cu, 1, 0);
    }
L_000e08b4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e08b8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000e08bc:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e08c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000e08c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x15cu);
    }
L_000e08c8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e08cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000e08d0:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000e08d4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e08d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1154;
        }
    }
L_000e08dc:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000e08e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3a28;
        }
    }
L_000e08e4:;
    {
        cpu->r[1] = rd32(0x000e08ecu + + 0xf38u);
    }
L_000e08e8:;
    {
        cpu->r[3] = 0x000087f0u;
    }
L_000e08ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e08f0:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e08f4:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e08f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000e08fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000e0900:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000e0904:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e0908:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0xcu);
    }
L_000e090c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3a60;
        }
    }
L_000e0910:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e0914:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e0918:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e1148;
        }
    }
L_000e091c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00018400u, 0, 0);
    }
L_000e0920:;
    {
        cpu->r[0] = rd32(0x000e0928u + + 0xf00u);
    }
L_000e0924:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000003bcu, 0, 0);
    }
L_000e0928:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000e092c:;
    {
        cpu->r[2] = rd32(0x000e0934u + + 0xef8u);
    }
L_000e0930:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000e0934:;
    {
        cpu->r[1] = rd32(0x000e093cu + + 0xef4u);
    }
L_000e0938:;
    {
        cpu->r[0] = add_flags(cpu, 0x000e0940u, cpu->r[0], 0, 0);
    }
L_000e093c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0944u, cpu->r[2], 0, 0);
    }
L_000e0940:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000060u, 0, 0);
    }
L_000e0944:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000060u, 0, 0);
    }
L_000e0948:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000e094c:;
    {
        cpu->r[2] = rd32(0x000e0954u + + 0xee0u);
    }
L_000e0950:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e0958u, cpu->r[1], 0, 0);
    }
L_000e0954:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000060u, 0, 0);
    }
L_000e0958:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000e095c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e0964u, cpu->r[2], 0, 0);
    }
L_000e0960:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000e0964:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000060u, 0, 0);
    }
L_000e0968:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000e096c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[1] = v;
    }
L_000e0970:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0xcu);
    }
L_000e0974:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[10] + cpu->r[1]);
    }
L_000e0978:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_000e097c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000064u, 1, 0);
    }
L_000e0980:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x4u);
    }
L_000e0984:;
    {
        sub_flags(cpu, cpu->r[2], 0x000001a4u, 1, 1);
    }
L_000e0988:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_000e11b4;
        case 1: goto L_000e11dc;
        case 2: goto L_000e1170;
        case 3: goto L_000e1170;
        case 4: goto L_000e1170;
        case 5: goto L_000e1170;
        case 6: goto L_000e1170;
        case 7: goto L_000e1170;
        case 8: goto L_000e1170;
        case 9: goto L_000e1170;
        case 10: goto L_000e1170;
        case 11: goto L_000e1170;
        case 12: goto L_000e1170;
        case 13: goto L_000e1170;
        case 14: goto L_000e1170;
        case 15: goto L_000e1170;
        case 16: goto L_000e1170;
        case 17: goto L_000e1170;
        case 18: goto L_000e1170;
        case 19: goto L_000e1170;
        case 20: goto L_000e1170;
        case 21: goto L_000e1170;
        case 22: goto L_000e1170;
        case 23: goto L_000e1170;
        case 24: goto L_000e1170;
        case 25: goto L_000e1170;
        case 26: goto L_000e1170;
        case 27: goto L_000e1170;
        case 28: goto L_000e1170;
        case 29: goto L_000e1170;
        case 30: goto L_000e1170;
        case 31: goto L_000e1170;
        case 32: goto L_000e1170;
        case 33: goto L_000e1170;
        case 34: goto L_000e1170;
        case 35: goto L_000e1170;
        case 36: goto L_000e1170;
        case 37: goto L_000e1170;
        case 38: goto L_000e1170;
        case 39: goto L_000e1170;
        case 40: goto L_000e1170;
        case 41: goto L_000e1170;
        case 42: goto L_000e1170;
        case 43: goto L_000e1170;
        case 44: goto L_000e1170;
        case 45: goto L_000e1170;
        case 46: goto L_000e1170;
        case 47: goto L_000e1170;
        case 48: goto L_000e1170;
        case 49: goto L_000e1170;
        case 50: goto L_000e1170;
        case 51: goto L_000e1170;
        case 52: goto L_000e1170;
        case 53: goto L_000e1170;
        case 54: goto L_000e1170;
        case 55: goto L_000e1170;
        case 56: goto L_000e1170;
        case 57: goto L_000e1170;
        case 58: goto L_000e1170;
        case 59: goto L_000e1170;
        case 60: goto L_000e1170;
        case 61: goto L_000e1170;
        case 62: goto L_000e1170;
        case 63: goto L_000e1170;
        case 64: goto L_000e1170;
        case 65: goto L_000e1170;
        case 66: goto L_000e1170;
        case 67: goto L_000e1170;
        case 68: goto L_000e1170;
        case 69: goto L_000e1170;
        case 70: goto L_000e1170;
        case 71: goto L_000e1170;
        case 72: goto L_000e1170;
        case 73: goto L_000e1170;
        case 74: goto L_000e1170;
        case 75: goto L_000e1170;
        case 76: goto L_000e1170;
        case 77: goto L_000e1170;
        case 78: goto L_000e1170;
        case 79: goto L_000e1170;
        case 80: goto L_000e1170;
        case 81: goto L_000e1170;
        case 82: goto L_000e1170;
        case 83: goto L_000e1170;
        case 84: goto L_000e1170;
        case 85: goto L_000e1170;
        case 86: goto L_000e1170;
        case 87: goto L_000e1170;
        case 88: goto L_000e1170;
        case 89: goto L_000e1170;
        case 90: goto L_000e1170;
        case 91: goto L_000e1170;
        case 92: goto L_000e1170;
        case 93: goto L_000e1170;
        case 94: goto L_000e1170;
        case 95: goto L_000e1170;
        case 96: goto L_000e1170;
        case 97: goto L_000e1170;
        case 98: goto L_000e1170;
        case 99: goto L_000e1170;
        case 100: goto L_000e11f8;
        case 101: goto L_000e1390;
        case 102: goto L_000e13b8;
        case 103: goto L_000e13fc;
        case 104: goto L_000e1440;
        case 105: goto L_000e146c;
        case 106: goto L_000e1170;
        case 107: goto L_000e1170;
        case 108: goto L_000e1170;
        case 109: goto L_000e1170;
        case 110: goto L_000e148c;
        case 111: goto L_000e1170;
        case 112: goto L_000e1170;
        case 113: goto L_000e1170;
        case 114: goto L_000e1170;
        case 115: goto L_000e1170;
        case 116: goto L_000e1170;
        case 117: goto L_000e1170;
        case 118: goto L_000e1170;
        case 119: goto L_000e1170;
        case 120: goto L_000e14ac;
        case 121: goto L_000e1170;
        case 122: goto L_000e1170;
        case 123: goto L_000e1170;
        case 124: goto L_000e1170;
        case 125: goto L_000e1170;
        case 126: goto L_000e1170;
        case 127: goto L_000e1170;
        case 128: goto L_000e1170;
        case 129: goto L_000e1170;
        case 130: goto L_000e1170;
        case 131: goto L_000e1170;
        case 132: goto L_000e1170;
        case 133: goto L_000e1170;
        case 134: goto L_000e1170;
        case 135: goto L_000e1170;
        case 136: goto L_000e1170;
        case 137: goto L_000e1170;
        case 138: goto L_000e1170;
        case 139: goto L_000e1170;
        case 140: goto L_000e1170;
        case 141: goto L_000e1170;
        case 142: goto L_000e1170;
        case 143: goto L_000e1170;
        case 144: goto L_000e1170;
        case 145: goto L_000e1170;
        case 146: goto L_000e1170;
        case 147: goto L_000e1170;
        case 148: goto L_000e1170;
        case 149: goto L_000e1170;
        case 150: goto L_000e1170;
        case 151: goto L_000e1170;
        case 152: goto L_000e1170;
        case 153: goto L_000e1170;
        case 154: goto L_000e1170;
        case 155: goto L_000e1170;
        case 156: goto L_000e1170;
        case 157: goto L_000e1170;
        case 158: goto L_000e1170;
        case 159: goto L_000e1170;
        case 160: goto L_000e1170;
        case 161: goto L_000e1170;
        case 162: goto L_000e1170;
        case 163: goto L_000e1170;
        case 164: goto L_000e1170;
        case 165: goto L_000e1170;
        case 166: goto L_000e1170;
        case 167: goto L_000e1170;
        case 168: goto L_000e1170;
        case 169: goto L_000e1170;
        case 170: goto L_000e1170;
        case 171: goto L_000e1170;
        case 172: goto L_000e1170;
        case 173: goto L_000e1170;
        case 174: goto L_000e1170;
        case 175: goto L_000e1170;
        case 176: goto L_000e1170;
        case 177: goto L_000e1170;
        case 178: goto L_000e1170;
        case 179: goto L_000e1170;
        case 180: goto L_000e1170;
        case 181: goto L_000e1170;
        case 182: goto L_000e1170;
        case 183: goto L_000e1170;
        case 184: goto L_000e1170;
        case 185: goto L_000e1170;
        case 186: goto L_000e1170;
        case 187: goto L_000e1170;
        case 188: goto L_000e1170;
        case 189: goto L_000e1170;
        case 190: goto L_000e1170;
        case 191: goto L_000e1170;
        case 192: goto L_000e1170;
        case 193: goto L_000e1170;
        case 194: goto L_000e1170;
        case 195: goto L_000e1170;
        case 196: goto L_000e1170;
        case 197: goto L_000e1170;
        case 198: goto L_000e1170;
        case 199: goto L_000e1170;
        case 200: goto L_000e14cc;
        case 201: goto L_000e1170;
        case 202: goto L_000e1170;
        case 203: goto L_000e1170;
        case 204: goto L_000e1170;
        case 205: goto L_000e1170;
        case 206: goto L_000e1170;
        case 207: goto L_000e1170;
        case 208: goto L_000e1170;
        case 209: goto L_000e1170;
        case 210: goto L_000e1564;
        case 211: goto L_000e1170;
        case 212: goto L_000e1170;
        case 213: goto L_000e1170;
        case 214: goto L_000e1170;
        case 215: goto L_000e15bc;
        case 216: goto L_000e1170;
        case 217: goto L_000e1170;
        case 218: goto L_000e1170;
        case 219: goto L_000e1170;
        case 220: goto L_000e166c;
        case 221: goto L_000e1170;
        case 222: goto L_000e1170;
        case 223: goto L_000e1170;
        case 224: goto L_000e1170;
        case 225: goto L_000e1170;
        case 226: goto L_000e1170;
        case 227: goto L_000e1170;
        case 228: goto L_000e1170;
        case 229: goto L_000e1170;
        case 230: goto L_000e16a8;
        case 231: goto L_000e1170;
        case 232: goto L_000e1170;
        case 233: goto L_000e1170;
        case 234: goto L_000e1170;
        case 235: goto L_000e1170;
        case 236: goto L_000e1170;
        case 237: goto L_000e1170;
        case 238: goto L_000e1170;
        case 239: goto L_000e1170;
        case 240: goto L_000e1754;
        case 241: goto L_000e1170;
        case 242: goto L_000e1170;
        case 243: goto L_000e1170;
        case 244: goto L_000e1170;
        case 245: goto L_000e1170;
        case 246: goto L_000e1170;
        case 247: goto L_000e1170;
        case 248: goto L_000e1170;
        case 249: goto L_000e1170;
        case 250: goto L_000e17ec;
        case 251: goto L_000e1170;
        case 252: goto L_000e1170;
        case 253: goto L_000e1170;
        case 254: goto L_000e1170;
        case 255: goto L_000e18bc;
        case 256: goto L_000e1170;
        case 257: goto L_000e1170;
        case 258: goto L_000e1170;
        case 259: goto L_000e1170;
        case 260: goto L_000e1940;
        case 261: goto L_000e1aac;
        case 262: goto L_000e1b04;
        case 263: goto L_000e1b44;
        case 264: goto L_000e1b84;
        case 265: goto L_000e1bb8;
        case 266: goto L_000e1be4;
        case 267: goto L_000e1c18;
        case 268: goto L_000e1d1c;
        case 269: goto L_000e1d6c;
        case 270: goto L_000e1da8;
        case 271: goto L_000e1170;
        case 272: goto L_000e1de8;
        case 273: goto L_000e1170;
        case 274: goto L_000e1170;
        case 275: goto L_000e1e10;
        case 276: goto L_000e1024;
        case 277: goto L_000e1f74;
        case 278: goto L_000e1ed0;
        case 279: goto L_000e2430;
        case 280: goto L_000e2300;
        case 281: goto L_000e2558;
        case 282: goto L_000e2158;
        case 283: goto L_000e21f0;
        case 284: goto L_000e1170;
        case 285: goto L_000e1170;
        case 286: goto L_000e1170;
        case 287: goto L_000e1170;
        case 288: goto L_000e1170;
        case 289: goto L_000e1170;
        case 290: goto L_000e1170;
        case 291: goto L_000e1170;
        case 292: goto L_000e1170;
        case 293: goto L_000e1170;
        case 294: goto L_000e1170;
        case 295: goto L_000e1170;
        case 296: goto L_000e1170;
        case 297: goto L_000e1170;
        case 298: goto L_000e1170;
        case 299: goto L_000e1170;
        case 300: goto L_000e1170;
        case 301: goto L_000e1170;
        case 302: goto L_000e1170;
        case 303: goto L_000e1170;
        case 304: goto L_000e1170;
        case 305: goto L_000e1170;
        case 306: goto L_000e1170;
        case 307: goto L_000e1170;
        case 308: goto L_000e1170;
        case 309: goto L_000e1170;
        case 310: goto L_000e1170;
        case 311: goto L_000e1170;
        case 312: goto L_000e1170;
        case 313: goto L_000e1170;
        case 314: goto L_000e1170;
        case 315: goto L_000e1170;
        case 316: goto L_000e1170;
        case 317: goto L_000e1170;
        case 318: goto L_000e1170;
        case 319: goto L_000e1170;
        case 320: goto L_000e1170;
        case 321: goto L_000e2288;
        case 322: goto L_000e22bc;
        case 323: goto L_000e2608;
        case 324: goto L_000e1170;
        case 325: goto L_000e1170;
        case 326: goto L_000e1170;
        case 327: goto L_000e1170;
        case 328: goto L_000e1170;
        case 329: goto L_000e1170;
        case 330: goto L_000e1170;
        case 331: goto L_000e2654;
        case 332: goto L_000e26c4;
        case 333: goto L_000e2748;
        case 334: goto L_000e279c;
        case 335: goto L_000e280c;
        case 336: goto L_000e2884;
        case 337: goto L_000e28d8;
        case 338: goto L_000e299c;
        case 339: goto L_000e311c;
        case 340: goto L_000e1170;
        case 341: goto L_000e1170;
        case 342: goto L_000e1170;
        case 343: goto L_000e1170;
        case 344: goto L_000e1170;
        case 345: goto L_000e1170;
        case 346: goto L_000e1170;
        case 347: goto L_000e1170;
        case 348: goto L_000e1170;
        case 349: goto L_000e1170;
        case 350: goto L_000e2c94;
        case 351: goto L_000e1170;
        case 352: goto L_000e1170;
        case 353: goto L_000e1170;
        case 354: goto L_000e1170;
        case 355: goto L_000e2cc8;
        case 356: goto L_000e1170;
        case 357: goto L_000e1170;
        case 358: goto L_000e1170;
        case 359: goto L_000e1170;
        case 360: goto L_000e2ba4;
        case 361: goto L_000e1170;
        case 362: goto L_000e1170;
        case 363: goto L_000e1170;
        case 364: goto L_000e1170;
        case 365: goto L_000e2f88;
        case 366: goto L_000e2db0;
        case 367: goto L_000e2ee0;
        case 368: goto L_000e316c;
        case 369: goto L_000e3288;
        case 370: goto L_000e33ac;
        case 371: goto L_000e345c;
        case 372: goto L_000e1170;
        case 373: goto L_000e1170;
        case 374: goto L_000e1170;
        case 375: goto L_000e1170;
        case 376: goto L_000e1170;
        case 377: goto L_000e1170;
        case 378: goto L_000e1170;
        case 379: goto L_000e1170;
        case 380: goto L_000e113c;
        case 381: goto L_000e1170;
        case 382: goto L_000e1170;
        case 383: goto L_000e1170;
        case 384: goto L_000e1170;
        case 385: goto L_000e1170;
        case 386: goto L_000e1170;
        case 387: goto L_000e1170;
        case 388: goto L_000e1170;
        case 389: goto L_000e1170;
        case 390: goto L_000e3500;
        case 391: goto L_000e3538;
        case 392: goto L_000e35a8;
        case 393: goto L_000e361c;
        case 394: goto L_000e1170;
        case 395: goto L_000e1170;
        case 396: goto L_000e1170;
        case 397: goto L_000e1170;
        case 398: goto L_000e1170;
        case 399: goto L_000e1170;
        case 400: goto L_000e1170;
        case 401: goto L_000e3688;
        case 402: goto L_000e36b8;
        case 403: goto L_000e370c;
        case 404: goto L_000e1170;
        case 405: goto L_000e1170;
        case 406: goto L_000e1170;
        case 407: goto L_000e1170;
        case 408: goto L_000e1170;
        case 409: goto L_000e1170;
        case 410: goto L_000e3738;
        case 411: goto L_000e1170;
        case 412: goto L_000e1170;
        case 413: goto L_000e1170;
        case 414: goto L_000e1170;
        case 415: goto L_000e3784;
        case 416: goto L_000e1170;
        case 417: goto L_000e1170;
        case 418: goto L_000e1170;
        case 419: goto L_000e1170;
        case 420: goto L_000e382c;
        default: guest_unimplemented(cpu, 0x000e0988u); return; }
        }
    }
L_000e098c:;
    {
        goto L_000e1170;
    }
L_000e1024:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1028:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e102c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1044;
        }
    }
L_000e1030:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e1034:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1038:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e103c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e1040:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1078;
        }
    }
L_000e1044:;
    {
        cpu->r[1] = rd32(0x000e104cu + + 0x7f8u);
    }
L_000e1048:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e104c:;
    {
        cpu->r[2] = rd32(0x000e1054u + + 0x7f4u);
    }
L_000e1050:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e1054:;
    {
        cpu->r[3] = rd32(0x000e105cu + + 0x7f0u);
    }
L_000e1058:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1060u, cpu->r[1], 0, 0);
    }
L_000e105c:;
    {
        cpu->r[12] = rd32(0x000e1064u + + 0x7ecu);
    }
L_000e1060:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1068u, cpu->r[2], 0, 0);
    }
L_000e1064:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e106cu, cpu->r[3], 0, 0);
    }
L_000e1068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e106c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e1074u, cpu->r[12], 0, 0);
    }
L_000e1070:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e1074:;
    {
        cpu->r[14] = 0x000e1078u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1078:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e107c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1080:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1084:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e1088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4a74;
        }
    }
L_000e108c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e1090:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1094:;
    {
        cpu->r[14] = 0x000e1098u; fn_000c4e0c(cpu);
    }
L_000e1098:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e109c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4a3c;
        }
    }
L_000e10a0:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e10a4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e10a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e10c0;
        }
    }
L_000e10ac:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e10b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e10b4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e10b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e10bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e10f4;
        }
    }
L_000e10c0:;
    {
        cpu->r[1] = rd32(0x000e10c8u + + 0x78cu);
    }
L_000e10c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e10c8:;
    {
        cpu->r[2] = rd32(0x000e10d0u + + 0x788u);
    }
L_000e10cc:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e10d0:;
    {
        cpu->r[3] = rd32(0x000e10d8u + + 0x784u);
    }
L_000e10d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e10dcu, cpu->r[1], 0, 0);
    }
L_000e10d8:;
    {
        cpu->r[12] = rd32(0x000e10e0u + + 0x780u);
    }
L_000e10dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e10e4u, cpu->r[2], 0, 0);
    }
L_000e10e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e10e8u, cpu->r[3], 0, 0);
    }
L_000e10e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e10e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e10f0u, cpu->r[12], 0, 0);
    }
L_000e10ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e10f0:;
    {
        cpu->r[14] = 0x000e10f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e10f4:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e10f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e10fc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1100:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e1104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4a04;
        }
    }
L_000e1108:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e110c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e1114:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e1118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_000e111c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e1120:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1124:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e1128:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e112c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e1130:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1134:;
    {
        cpu->r[14] = 0x000e1138u; fn_000b5fc4(cpu);
    }
L_000e1138:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e113c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1140:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1144:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1148:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000012cu, 0, 0);
    }
L_000e114c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_000e1150:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e1154u)) return;
    }
L_000e1154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000e1158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3a1c;
        }
    }
L_000e115c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000e1160:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e08dc;
        }
    }
L_000e1164:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_000e1168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e08dc;
        }
    }
L_000e116c:;
    {
        goto L_000e1148;
    }
L_000e1170:;
    {
        cpu->r[3] = 0x000004c5u;
    }
L_000e1174:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e1178:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e117c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e1180:;
    {
        cpu->r[1] = rd32(0x000e1188u + + 0x6dcu);
    }
L_000e1184:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1188:;
    {
        cpu->r[2] = rd32(0x000e1190u + + 0x6d8u);
    }
L_000e118c:;
    {
        cpu->r[3] = rd32(0x000e1194u + + 0x6d8u);
    }
L_000e1190:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1198u, cpu->r[1], 0, 0);
    }
L_000e1194:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e119cu, cpu->r[2], 0, 0);
    }
L_000e1198:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000e119c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e11a4u, cpu->r[3], 0, 0);
    }
L_000e11a0:;
    {
        cpu->r[14] = 0x000e11a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e11a4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e11a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e11ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e11b0:;
    {
        goto L_000e1148;
    }
L_000e11b4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e11b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e11bc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e11c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e11c4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e11c8:;
    {
        cpu->r[14] = 0x000e11ccu; fn_000d6fc4(cpu);
    }
L_000e11cc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e11d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e11d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e11d8:;
    {
        goto L_000e1148;
    }
L_000e11dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e11e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e11e4:;
    {
        cpu->r[14] = 0x000e11e8u; fn_000b9e80(cpu);
    }
L_000e11e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e11ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e11f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e11f4:;
    {
        goto L_000e1148;
    }
L_000e11f8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e11fc:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e1200:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_000e1204:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e1208:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e120c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e1210:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e3a80;
        }
    }
L_000e1214:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000e1218:;
    {
        cpu->r[1] = 0x00000063u;
    }
L_000e121c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e1220:;
    {
        cpu->r[14] = 0x000e1224u; fn_000965cc(cpu);
    }
L_000e1224:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_000e1228:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e122c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e113c;
        }
    }
L_000e1230:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1234:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e1238:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000e123c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_000e1240:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1244:;
    {
        cpu->r[0] = rd16(cpu->r[5] + + 0xau);
    }
L_000e1248:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e124c:;
    {
        cpu->r[5] = rd16(cpu->r[5]);
    }
L_000e1250:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000e1254:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000e1258:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_000e125c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_000e1260:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_000e1264:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[11] = v;
    }
L_000e1268:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_000e126c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000e1270:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000e1274:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e1278:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e127c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e1280:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_000e1284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e4170;
        }
    }
L_000e1288:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e128c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e1290:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e4170;
        }
    }
L_000e1294:;
    {
        cpu->r[5] = 0x000042d0u;
    }
L_000e1298:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000e129c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_000e12a0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8u);
    }
L_000e12a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e12a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e12ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e12b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e12b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e12b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e12bc:;
    {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[12]);
    }
L_000e12c0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000e12c4:;
    {
        cpu->r[14] = 0x000e12c8u; fn_000965cc(cpu);
    }
L_000e12c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e12cc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000e12d0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_000e12d4:;
    {
        cpu->r[14] = 0x000e12d8u; fn_00186cf0(cpu);
    }
L_000e12d8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_000e12dc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000e12e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e12e4:;
    {
        cpu->r[14] = 0x000e12e8u; fn_00186cc4(cpu);
    }
L_000e12e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e12ec:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e12f0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000e12f4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000e12f8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000e12fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e1300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1344;
        }
    }
L_000e1304:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x418u);
    }
L_000e1308:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e130c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000e1310:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000e1314:;
    {
        cpu->r[14] = 0x000e1318u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000e1318:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e131c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000e1320:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000e1324:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e1328:;
    {
        cpu->r[14] = 0x000e132cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000e132c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e1330:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e1334:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000e1338:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000e133c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000e1340:;
    {
        cpu->r[14] = 0x000e1344u; fn_000ba3e4(cpu);
    }
L_000e1344:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000e1348:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000e134c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e1350:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1354:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e113c;
        }
    }
L_000e1358:;
    {
        cpu->r[2] = 0x000087d0u;
    }
L_000e135c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e1360:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e1364:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000e1368:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e4f54;
        }
    }
L_000e136c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000e1370:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e1374:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000e1378:;
    {
        cpu->r[14] = 0x000e137cu; fn_000df800(cpu);
    }
L_000e137c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1380:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_000e1384:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_000e1388:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_000e138c:;
    {
        goto L_000e113c;
    }
L_000e1390:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000e1394:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1398:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e139c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e13a0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e13a4:;
    {
        cpu->r[14] = 0x000e13a8u; fn_00186b68(cpu);
    }
L_000e13a8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e13ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e13b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e13b4:;
    {
        goto L_000e1148;
    }
L_000e13b8:;
    {
        cpu->r[0] = rd16(cpu->r[5]);
    }
L_000e13bc:;
    {
        cpu->r[1] = 0x000042d7u;
    }
L_000e13c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000e13c4:;
    {
        cpu->r[2] = 0x000042d8u;
    }
L_000e13c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e13cc:;
    {
        cpu->r[3] = 0x000042d9u;
    }
L_000e13d0:;
    {
        wr8(cpu->r[8] + cpu->r[1], cpu->r[0]);
    }
L_000e13d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e13d8:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x2u);
    }
L_000e13dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e13e0:;
    {
        wr8(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e13e4:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x4u);
    }
L_000e13e8:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_000e13ec:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e13f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e13f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e13f8:;
    {
        goto L_000e1148;
    }
L_000e13fc:;
    {
        cpu->r[0] = rd16(cpu->r[5]);
    }
L_000e1400:;
    {
        cpu->r[1] = 0x000042d4u;
    }
L_000e1404:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000e1408:;
    {
        cpu->r[2] = 0x000042d5u;
    }
L_000e140c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e1410:;
    {
        cpu->r[3] = 0x000042d6u;
    }
L_000e1414:;
    {
        wr8(cpu->r[8] + cpu->r[1], cpu->r[0]);
    }
L_000e1418:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e141c:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x2u);
    }
L_000e1420:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1424:;
    {
        wr8(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e1428:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x4u);
    }
L_000e142c:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_000e1430:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1434:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1438:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e143c:;
    {
        goto L_000e1148;
    }
L_000e1440:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1444:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000e1448:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e144c:;
    {
        cpu->r[2] = 0x000042b4u;
    }
L_000e1450:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1454:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e1458:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e145c:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1460:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[11]);
    }
L_000e1464:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1468:;
    {
        goto L_000e1148;
    }
L_000e146c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1470:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_000e1474:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1478:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e147c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1480:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e1484:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1488:;
    {
        goto L_000e1148;
    }
L_000e148c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1490:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1494:;
    {
        cpu->r[14] = 0x000e1498u; fn_000b9688(cpu);
    }
L_000e1498:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e149c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e14a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e14a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e14a8:;
    {
        goto L_000e1148;
    }
L_000e14ac:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e14b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e14b4:;
    {
        cpu->r[14] = 0x000e14b8u; fn_000b96fc(cpu);
    }
L_000e14b8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e14bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e14c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e14c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e14c8:;
    {
        goto L_000e1148;
    }
L_000e14cc:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e14d0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e14d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e14ec;
        }
    }
L_000e14d8:;
    {
        cpu->r[2] = 0x000087d0u;
    }
L_000e14dc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e14e0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e14e4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000e14e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1524;
        }
    }
L_000e14ec:;
    {
        cpu->r[1] = rd32(0x000e14f4u + + 0x37cu);
    }
L_000e14f0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e14f4:;
    {
        cpu->r[2] = rd32(0x000e14fcu + + 0x378u);
    }
L_000e14f8:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e14fc:;
    {
        cpu->r[3] = rd32(0x000e1504u + + 0x374u);
    }
L_000e1500:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1508u, cpu->r[1], 0, 0);
    }
L_000e1504:;
    {
        cpu->r[12] = rd32(0x000e150cu + + 0x370u);
    }
L_000e1508:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1510u, cpu->r[2], 0, 0);
    }
L_000e150c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1514u, cpu->r[3], 0, 0);
    }
L_000e1510:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e1514:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e151cu, cpu->r[12], 0, 0);
    }
L_000e1518:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e151c:;
    {
        cpu->r[14] = 0x000e1520u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1520:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1524:;
    {
        cpu->r[2] = 0x000087c0u;
    }
L_000e1528:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e152c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e1530:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1534:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e1538:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e153c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e1540:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 6u, &shc), 0, 0);
    }
L_000e1544:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x28u);
    }
L_000e1548:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6] + + 0x3cu, cpu->r[1]);
        }
    }
L_000e154c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_000e1550:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000001u; cpu->r[2] = v;
        }
    }
L_000e1554:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1558:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[2]);
    }
L_000e155c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1560:;
    {
        goto L_000e1148;
    }
L_000e1564:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1568:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e156c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e1570:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e1574:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e1578:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e157c:;
    {
        cpu->r[14] = 0x000e1580u; fn_000b9f40(cpu);
    }
L_000e1580:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4b20;
        }
    }
L_000e1588:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e158c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1590:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000e1594:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e1598:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000e159c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e15a0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e15a4:;
    {
        cpu->r[14] = 0x000e15acu;
    }
L_000e15a8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e15acu)) return;
    }
L_000e15ac:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e15b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e15b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e15b8:;
    {
        goto L_000e1148;
    }
L_000e15bc:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e15c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e15c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e15dc;
        }
    }
L_000e15c8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e15cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e15d0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e15d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e15d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1610;
        }
    }
L_000e15dc:;
    {
        cpu->r[1] = rd32(0x000e15e4u + + 0x29cu);
    }
L_000e15e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e15e4:;
    {
        cpu->r[2] = rd32(0x000e15ecu + + 0x298u);
    }
L_000e15e8:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e15ec:;
    {
        cpu->r[3] = rd32(0x000e15f4u + + 0x294u);
    }
L_000e15f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e15f8u, cpu->r[1], 0, 0);
    }
L_000e15f4:;
    {
        cpu->r[12] = rd32(0x000e15fcu + + 0x290u);
    }
L_000e15f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1600u, cpu->r[2], 0, 0);
    }
L_000e15fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1604u, cpu->r[3], 0, 0);
    }
L_000e1600:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e1604:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e160cu, cpu->r[12], 0, 0);
    }
L_000e1608:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e160c:;
    {
        cpu->r[14] = 0x000e1610u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1610:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e1614:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1618:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e161c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e1620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4484;
        }
    }
L_000e1624:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e1628:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e162c:;
    {
        cpu->r[14] = 0x000e1630u; fn_000c4e0c(cpu);
    }
L_000e1630:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4448;
        }
    }
L_000e1638:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e163c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1640:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000e1644:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e1648:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000e164c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e1650:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1654:;
    {
        cpu->r[14] = 0x000e165cu;
    }
L_000e1658:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000e165cu)) return;
    }
L_000e165c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1664:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1668:;
    {
        goto L_000e1148;
    }
L_000e166c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1670:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e1674:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e1678:;
    {
        cpu->r[14] = 0x000e167cu; fn_00096b88(cpu);
    }
L_000e167c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1680:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e1688:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e168c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e1690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3b64;
        }
    }
L_000e1694:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1698:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e169c:;
    {
        cpu->r[14] = 0x000e16a0u; fn_000ba68c(cpu);
    }
L_000e16a0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e16a4:;
    {
        goto L_000e113c;
    }
L_000e16a8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e16ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e16b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e40b8;
        }
    }
L_000e16b4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e16b8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000e16bc:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e16c0:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000e16c4:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000e16c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000e16d0u + + 0x168u);
    }
L_000e16cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000e16d4u + + 0x168u);
    }
L_000e16d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e16d8u + + 0x168u);
    }
L_000e16d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e16d8:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000e16dc:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e16e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e16e4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000e16e8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e16ec:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000e16f0:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_000e16f4:;
    {
        vfp_vmul(cpu, 13, 11, 13);
    }
L_000e16f8:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000e16fc:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000e1700:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_000e1704:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000e1708:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e170c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e1710:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e1714:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1718:;
    {
        cpu->r[14] = 0x000e171cu; fn_0014960c(cpu);
    }
L_000e171c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000e1720:;
    {
        cpu->r[14] = 0x000e1724u; fn_0014be44(cpu);
    }
L_000e1724:;
    {
        cpu->r[3] = 0x00003e81u;
    }
L_000e1728:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e172c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000e1730:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000e1734:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e1738:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_000e173c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1740:;
    {
        wr32(cpu->r[2] + + 0x200u, cpu->r[1]);
    }
L_000e1744:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1748:;
    {
        wr32(cpu->r[2] + + 0x1fcu, cpu->r[1]);
    }
L_000e174c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1750:;
    {
        goto L_000e1148;
    }
L_000e1754:;
    {
        cpu->r[3] = 0x00003e81u;
    }
L_000e1758:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000e175c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e1760:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e1764:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000e1768:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000e176c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000e1770:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[11]);
    }
L_000e1774:;
    {
        cpu->r[14] = 0x000e1778u; fn_00149b48(cpu);
    }
L_000e1778:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e177c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000e1780:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000e1784:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_000e1788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1794;
        }
    }
L_000e178c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e1790:;
    {
        cpu->r[14] = 0x000e1794u; fn_000df800(cpu);
    }
L_000e1794:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1798:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e179c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e17a0:;
    {
        wr32(cpu->r[6] + + 0x1fcu, cpu->r[0]);
    }
L_000e17a4:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000e17a8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e17ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000e17b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e17bc;
        }
    }
L_000e17b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e17b8:;
    {
        cpu->r[14] = 0x000e17bcu; fn_000df800(cpu);
    }
L_000e17bc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e17c0:;
    {
        cpu->r[2] = 0x0000881cu;
    }
L_000e17c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e17c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e17cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e17d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e17d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e17d8:;
    {
        wr32(cpu->r[6] + + 0x200u, cpu->r[0]);
    }
L_000e17dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e17e0:;
    {
        wr8(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e17e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e17e8:;
    {
        goto L_000e1148;
    }
L_000e17ec:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e17f0:;
    {
        cpu->r[1] = 0x00003e84u;
    }
L_000e17f4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e17f8:;
    {
        cpu->r[2] = 0x00003e88u;
    }
L_000e17fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1800:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000e1804:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e1808:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e180c:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[12]);
    }
L_000e1810:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[0]);
    }
L_000e1814:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1818:;
    {
        goto L_000e1148;
    }
L_000e18bc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e18c0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000e18c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e18c8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e18cc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e18d0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e18d4:;
    {
        cpu->r[2] = 0x00009fa8u;
    }
L_000e18d8:;
    {
        cpu->r[1] = 0x00009fb0u;
    }
L_000e18dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e18e0:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[0]);
    }
L_000e18e4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e18e8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e18ec:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e18f0:;
    {
        cpu->r[1] = 0x00009facu;
    }
L_000e18f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000e18f8:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e18fc:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[6]);
    }
L_000e1900:;
    {
        vfp_sync_flags(cpu);
    }
L_000e1904:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000e190cu + - 0x5cu);
        }
    }
L_000e1908:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000e190c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[11]);
        }
    }
L_000e1910:;
    {
        cpu->r[2] = 0x00009f98u;
    }
L_000e1914:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1918:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_000e191c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000e1920:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_000e1924:;
    {
        cpu->r[2] = 0x00009fa4u;
    }
L_000e1928:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_000e192c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e1930:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1934:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[12]);
    }
L_000e1938:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e193c:;
    {
        goto L_000e1148;
    }
L_000e1940:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e1944:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1948:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e194c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000e1950:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e1954:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e1958:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e195c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e1960:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e1964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e472c;
        }
    }
L_000e1968:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000e196c:;
    {
        cpu->r[12] = rd16(cpu->r[5] + + 0x2u);
    }
L_000e1970:;
    {
        cpu->r[2] = rd16(cpu->r[5]);
    }
L_000e1974:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000e1978:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_000e197c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = (uint32_t)((int16_t)cpu->r[12]);
        }
    }
L_000e1980:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1a60;
        }
    }
L_000e1984:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000e1988:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e198c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = 0x000083f1u;
        }
    }
L_000e1990:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e1994:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = rd8(cpu->r[8] + cpu->r[2]);
        }
    }
L_000e1998:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_000e199c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006000u, 0, 0);
    }
L_000e19a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000fcu, 0, 0);
    }
L_000e19a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e19a8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e19ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e19b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4c7c;
        }
    }
L_000e19b4:;
    {
        cpu->r[3] = 0x000087f0u;
    }
L_000e19b8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x10u);
    }
L_000e19bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e19c0:;
    {
        cpu->r[5] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e19c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 4u, &shc), 0, 1);
    }
L_000e19c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4cb4;
        }
    }
L_000e19cc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e19d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000e19d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1a0c;
        }
    }
L_000e19d8:;
    {
        cpu->r[1] = rd32(0x000e19e0u + - 0x150u);
    }
L_000e19dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e19e0:;
    {
        cpu->r[12] = rd32(0x000e19e8u + - 0x154u);
    }
L_000e19e4:;
    {
        cpu->r[14] = 0x00000101u;
    }
L_000e19e8:;
    {
        cpu->r[2] = rd32(0x000e19f0u + - 0x158u);
    }
L_000e19ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e19f4u, cpu->r[1], 0, 0);
    }
L_000e19f0:;
    {
        cpu->r[3] = rd32(0x000e19f8u + - 0x15cu);
    }
L_000e19f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e19fcu, cpu->r[12], 0, 0);
    }
L_000e19f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1a00u, cpu->r[2], 0, 0);
    }
L_000e19fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e1a00:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1a08u, cpu->r[3], 0, 0);
    }
L_000e1a04:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e1a08:;
    {
        cpu->r[14] = 0x000e1a0cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1a0c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_000e1a10:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e1a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4cec;
        }
    }
L_000e1a18:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1a1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000168u, 1, 1);
    }
L_000e1a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e1a58;
        }
    }
L_000e1a24:;
    {
        cpu->r[1] = rd32(0x000e1a2cu + - 0x18cu);
    }
L_000e1a28:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e1a2c:;
    {
        cpu->r[12] = rd32(0x000e1a34u + - 0x190u);
    }
L_000e1a30:;
    {
        cpu->r[14] = 0x00000104u;
    }
L_000e1a34:;
    {
        cpu->r[2] = rd32(0x000e1a3cu + - 0x194u);
    }
L_000e1a38:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1a40u, cpu->r[1], 0, 0);
    }
L_000e1a3c:;
    {
        cpu->r[3] = rd32(0x000e1a44u + - 0x198u);
    }
L_000e1a40:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e1a48u, cpu->r[12], 0, 0);
    }
L_000e1a44:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1a4cu, cpu->r[2], 0, 0);
    }
L_000e1a48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e1a4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1a54u, cpu->r[3], 0, 0);
    }
L_000e1a50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e1a54:;
    {
        cpu->r[14] = 0x000e1a58u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1a58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000e1a5c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x2u);
    }
L_000e1a60:;
    {
        cpu->r[0] = 0x0000420cu;
    }
L_000e1a64:;
    {
        cpu->r[3] = 0x00004210u;
    }
L_000e1a68:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000e1a6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e1a70:;
    {
        cpu->r[2] = 0x00004214u;
    }
L_000e1a74:;
    {
        cpu->r[1] = 0x00004218u;
    }
L_000e1a78:;
    {
        wr32(cpu->r[8] + cpu->r[0], cpu->r[12]);
    }
L_000e1a7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e1a80:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_000e1a84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1a88:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1a8c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000e1a90:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e1a94:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1a98:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[0]);
    }
L_000e1a9c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000e1aa0:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e1aa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1aa8:;
    {
        goto L_000e1148;
    }
L_000e1aac:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e1ab0:;
    {
        cpu->r[6] = rd16(cpu->r[5]);
    }
L_000e1ab4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e1ab8:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e1abc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e1ac0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e1ac4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e1ac8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e1acc:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e1ad0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e1ad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4b98;
        }
    }
L_000e1ad8:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000e1adc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000e1ae0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_000e1ae4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e1ae8:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_000e1aec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[6];
    }
L_000e1af0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e1af4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e1afcu + - 0x248u);
    }
L_000e1af8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000e1afc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1b00:;
    {
        goto L_000e113c;
    }
L_000e1b04:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e1b08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e1b0c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e1b10:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e1b14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e1b18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e1b1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e1b20:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e1b24:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e1b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4b5c;
        }
    }
L_000e1b2c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000e1b30:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000e1b34:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_000e1b38:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000e1b40u + - 0x288u);
        }
    }
L_000e1b3c:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[5] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000e1b40:;
    {
        goto L_000e113c;
    }
L_000e1b44:;
    {
        cpu->r[0] = 0x0000001bu;
    }
L_000e1b48:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1b4c:;
    {
        cpu->r[14] = 0x000e1b50u; fn_00093f34(cpu);
    }
L_000e1b50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1b54:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000e1b58:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_000e1b5c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1b60:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000e1b64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x0000829cu;
        }
    }
L_000e1b68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e1b6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1b70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1b74:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[5]);
        }
    }
L_000e1b78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1b7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1b80:;
    {
        goto L_000e1148;
    }
L_000e1b84:;
    {
        cpu->r[0] = 0x0000001bu;
    }
L_000e1b88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1b8c:;
    {
        cpu->r[14] = 0x000e1b90u; fn_00093f34(cpu);
    }
L_000e1b90:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1b94:;
    {
        cpu->r[2] = 0x0000829cu;
    }
L_000e1b98:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e1b9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1ba0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000e1ba4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_000e1ba8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1bac:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[0]);
    }
L_000e1bb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1bb4:;
    {
        goto L_000e1148;
    }
L_000e1bb8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1bbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1bc0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1bc4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e1bc8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e1bcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e1bd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1bd4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e1bd8:;
    {
        wr8(cpu->r[2] + + 0x424u, cpu->r[1]);
    }
L_000e1bdc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1be0:;
    {
        goto L_000e1148;
    }
L_000e1be4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1be8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1bec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e1bf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00004258u;
        }
    }
L_000e1bf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00004258u;
        }
    }
L_000e1bf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
        }
    }
L_000e1bfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000e1c00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_000e1c04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000e1c08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1c0c:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e1c10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1c14:;
    {
        goto L_000e1148;
    }
L_000e1c18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1c1c:;
    {
        cpu->r[6] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e1c20:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000e1c24:;
    {
        cpu->r[14] = 0x000e1c28u; fn_00096b88(cpu);
    }
L_000e1c28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1c2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e1c30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e1c34:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000e1c38:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e1c3c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e1c40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e1c44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1c48:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1c4c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000e1c50:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e1c54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000e1c58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e1c5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e1c60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e1c64:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e1c68:;
    {
        cpu->r[14] = 0x000e1c6cu; fn_000df800(cpu);
    }
L_000e1c6c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4e04;
        }
    }
L_000e1c74:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1c78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e1c7c:;
    {
        cpu->r[14] = 0x000e1c80u; fn_000df800(cpu);
    }
L_000e1c80:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4dcc;
        }
    }
L_000e1c88:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_000e1c8c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e1c90:;
    {
        vfp_vneg(cpu, 10, 10);
    }
L_000e1c94:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_000e1c98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e1c9c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[6] + + 0xcu);
    }
L_000e1ca0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e1ca4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e1ca8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_000e1cac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000e1cb0:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_000e1cb4:;
    {
        *(int32_t*)vfp_s(cpu,10) = (int32_t)*vfp_s(cpu,10);
    }
L_000e1cb8:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_000e1cbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000e1cc0:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_000e1cc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000e1cc8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000e1ccc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000e1cd0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e1cd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000e1cd8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e1cdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e1ce0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1ce4:;
    {
        cpu->r[14] = 0x000e1ce8u; fn_001777f8(cpu);
    }
L_000e1ce8:;
    {
        cpu->r[1] = 0x00004260u;
    }
L_000e1cec:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_000e1cf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e1cf4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000e1cf8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e1cfc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e1d00:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[0]);
    }
L_000e1d04:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[2]);
    }
L_000e1d08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000e1d0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1d10:;
    {
        cpu->r[14] = 0x000e1d14u; fn_000ba68c(cpu);
    }
L_000e1d14:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1d18:;
    {
        goto L_000e113c;
    }
L_000e1d1c:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_000e1d20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000e1d24:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000e407c;
        }
    }
L_000e1d28:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1d2c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_000e1d30:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e1d34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e1d3cu + + 0x368u);
    }
L_000e1d38:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000e1d3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1d40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000e1d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000e1d48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e1d4c:;
    {
        vfp_vdiv(cpu, 12, 14, 15);
    }
L_000e1d50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000e1d54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e1d58:;
    {
        cpu->r[14] = 0x000e1d5cu; fn_0015e184(cpu);
    }
L_000e1d5c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1d60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1d64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1d68:;
    {
        goto L_000e1148;
    }
L_000e1d6c:;
    {
        cpu->r[2] = rd16(cpu->r[5]);
    }
L_000e1d70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000e1d74:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000e3bd8;
        }
    }
L_000e1d78:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_000e1d7c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1d80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e1d84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1d88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e1d8c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1d90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e1d94:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e1d98:;
    {
        cpu->r[2] = 0x00001780u;
    }
L_000e1d9c:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_000e1da0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1da4:;
    {
        goto L_000e1148;
    }
L_000e1da8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e1dac:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000e1db0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1db4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1db8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000e1dbc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e1dc0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e1dc4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1dc8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000e1dcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00009f00u, 0, 0);
    }
L_000e1dd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000e1dd4:;
    {
        cpu->r[14] = 0x000e1dd8u; fn_00146ecc(cpu);
    }
L_000e1dd8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1ddc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1de0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1de4:;
    {
        goto L_000e1148;
    }
L_000e1de8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1dec:;
    {
        cpu->r[2] = 0x0000426cu;
    }
L_000e1df0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1df4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e1df8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e1dfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e1e00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1e04:;
    {
        wr8(cpu->r[8] + cpu->r[2], cpu->r[1]);
    }
L_000e1e08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1e0c:;
    {
        goto L_000e1148;
    }
L_000e1e10:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1e14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e1e18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1e30;
        }
    }
L_000e1e1c:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e1e20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1e24:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1e28:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e1e2c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1e64;
        }
    }
L_000e1e30:;
    {
        cpu->r[1] = rd32(0x000e1e38u + + 0x270u);
    }
L_000e1e34:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e1e38:;
    {
        cpu->r[2] = rd32(0x000e1e40u + + 0x26cu);
    }
L_000e1e3c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e1e40:;
    {
        cpu->r[3] = rd32(0x000e1e48u + + 0x268u);
    }
L_000e1e44:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1e4cu, cpu->r[1], 0, 0);
    }
L_000e1e48:;
    {
        cpu->r[12] = rd32(0x000e1e50u + + 0x264u);
    }
L_000e1e4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1e54u, cpu->r[2], 0, 0);
    }
L_000e1e50:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1e58u, cpu->r[3], 0, 0);
    }
L_000e1e54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e1e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e1e60u, cpu->r[12], 0, 0);
    }
L_000e1e5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e1e60:;
    {
        cpu->r[14] = 0x000e1e64u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1e64:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e1e68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1e6c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1e70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e1e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4c44;
        }
    }
L_000e1e78:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1e7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1e80:;
    {
        cpu->r[14] = 0x000e1e84u; fn_000bc420(cpu);
    }
L_000e1e84:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1e88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4c0c;
        }
    }
L_000e1e8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e1e90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_000e1e94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_000e1e98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1e9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_000e1ea0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1ea4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0xcu);
    }
L_000e1ea8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e1eac:;
    {
        cpu->r[14] = 0x000e1eb0u; fn_000b5fc4(cpu);
    }
L_000e1eb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e1eb4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e1eb8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1ebc:;
    {
        cpu->r[14] = 0x000e1ec0u; fn_000b5a64(cpu);
    }
L_000e1ec0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1ec4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1ec8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1ecc:;
    {
        goto L_000e1148;
    }
L_000e1ed0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1ed4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e1ed8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1ef0;
        }
    }
L_000e1edc:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e1ee0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1ee4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1ee8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e1eec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1f24;
        }
    }
L_000e1ef0:;
    {
        cpu->r[1] = rd32(0x000e1ef8u + + 0x1c0u);
    }
L_000e1ef4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e1ef8:;
    {
        cpu->r[2] = rd32(0x000e1f00u + + 0x1bcu);
    }
L_000e1efc:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e1f00:;
    {
        cpu->r[3] = rd32(0x000e1f08u + + 0x1b8u);
    }
L_000e1f04:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1f0cu, cpu->r[1], 0, 0);
    }
L_000e1f08:;
    {
        cpu->r[12] = rd32(0x000e1f10u + + 0x1b4u);
    }
L_000e1f0c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1f14u, cpu->r[2], 0, 0);
    }
L_000e1f10:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1f18u, cpu->r[3], 0, 0);
    }
L_000e1f14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e1f18:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e1f20u, cpu->r[12], 0, 0);
    }
L_000e1f1c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e1f20:;
    {
        cpu->r[14] = 0x000e1f24u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1f24:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e1f28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1f2c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1f30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e1f34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4bd4;
        }
    }
L_000e1f38:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e1f3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1f40:;
    {
        cpu->r[14] = 0x000e1f44u; fn_000c4e0c(cpu);
    }
L_000e1f44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4aac;
        }
    }
L_000e1f4c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1f50:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000e1f54:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e1f58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e1f5c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e1f60:;
    {
        cpu->r[14] = 0x000e1f64u; fn_000b5b10(cpu);
    }
L_000e1f64:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e1f68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e1f6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e1f70:;
    {
        goto L_000e1148;
    }
L_000e1f74:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e1f78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e1f7c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1f94;
        }
    }
L_000e1f80:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e1f84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1f88:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1f8c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e1f90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e1fc8;
        }
    }
L_000e1f94:;
    {
        cpu->r[1] = rd32(0x000e1f9cu + + 0x12cu);
    }
L_000e1f98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e1f9c:;
    {
        cpu->r[2] = rd32(0x000e1fa4u + + 0x128u);
    }
L_000e1fa0:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e1fa4:;
    {
        cpu->r[3] = rd32(0x000e1facu + + 0x124u);
    }
L_000e1fa8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e1fb0u, cpu->r[1], 0, 0);
    }
L_000e1fac:;
    {
        cpu->r[12] = rd32(0x000e1fb4u + + 0x120u);
    }
L_000e1fb0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e1fb8u, cpu->r[2], 0, 0);
    }
L_000e1fb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e1fbcu, cpu->r[3], 0, 0);
    }
L_000e1fb8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e1fbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e1fc4u, cpu->r[12], 0, 0);
    }
L_000e1fc0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e1fc4:;
    {
        cpu->r[14] = 0x000e1fc8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e1fc8:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e1fcc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e1fd0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e1fd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e1fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e49cc;
        }
    }
L_000e1fdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e1fe0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e1fe4:;
    {
        cpu->r[14] = 0x000e1fe8u; fn_000c4e0c(cpu);
    }
L_000e1fe8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e1fec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4994;
        }
    }
L_000e1ff0:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e1ff4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e1ff8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2010;
        }
    }
L_000e1ffc:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2000:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2004:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2008:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e200c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2044;
        }
    }
L_000e2010:;
    {
        cpu->r[1] = rd32(0x000e2018u + + 0xc0u);
    }
L_000e2014:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2018:;
    {
        cpu->r[2] = rd32(0x000e2020u + + 0xbcu);
    }
L_000e201c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2020:;
    {
        cpu->r[3] = rd32(0x000e2028u + + 0xb8u);
    }
L_000e2024:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e202cu, cpu->r[1], 0, 0);
    }
L_000e2028:;
    {
        cpu->r[12] = rd32(0x000e2030u + + 0xb4u);
    }
L_000e202c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2034u, cpu->r[2], 0, 0);
    }
L_000e2030:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2038u, cpu->r[3], 0, 0);
    }
L_000e2034:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2038:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2040u, cpu->r[12], 0, 0);
    }
L_000e203c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2040:;
    {
        cpu->r[14] = 0x000e2044u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2044:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2048:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e204c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2050:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e2054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e495c;
        }
    }
L_000e2058:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e205c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e2060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e2064:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2068:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e206c:;
    {
        cpu->r[14] = 0x000e2070u; fn_000b5a74(cpu);
    }
L_000e2070:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_000e2074:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2078:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e207c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2080:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2084:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2088:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e208c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2090:;
    {
        cpu->r[14] = 0x000e2094u; fn_000b5abc(cpu);
    }
L_000e2094:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2098:;
    {
        cpu->r[14] = 0x000e209cu; fn_000b5ba0(cpu);
    }
L_000e209c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e20a0:;
    {
        goto L_000e113c;
    }
L_000e2158:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e215c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e2160:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2178;
        }
    }
L_000e2164:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2168:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e216c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2170:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e2174:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e21ac;
        }
    }
L_000e2178:;
    {
        cpu->r[1] = rd32(0x000e2180u + - 0x98u);
    }
L_000e217c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2180:;
    {
        cpu->r[2] = rd32(0x000e2188u + - 0x9cu);
    }
L_000e2184:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2188:;
    {
        cpu->r[3] = rd32(0x000e2190u + - 0xa0u);
    }
L_000e218c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2194u, cpu->r[1], 0, 0);
    }
L_000e2190:;
    {
        cpu->r[12] = rd32(0x000e2198u + - 0xa4u);
    }
L_000e2194:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e219cu, cpu->r[2], 0, 0);
    }
L_000e2198:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e21a0u, cpu->r[3], 0, 0);
    }
L_000e219c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e21a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e21a8u, cpu->r[12], 0, 0);
    }
L_000e21a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e21a8:;
    {
        cpu->r[14] = 0x000e21acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e21ac:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e21b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e21b4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e21b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e21bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4924;
        }
    }
L_000e21c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e21c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e21c8:;
    {
        cpu->r[14] = 0x000e21ccu; fn_000c4e0c(cpu);
    }
L_000e21cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e21d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e46b8;
        }
    }
L_000e21d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e21d8:;
    {
        wr8(cpu->r[0] + + 0x48u, cpu->r[3]);
    }
L_000e21dc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e21e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e21e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e21e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e21ec:;
    {
        goto L_000e1148;
    }
L_000e21f0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e21f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e21f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2210;
        }
    }
L_000e21fc:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2200:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2204:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2208:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e220c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2244;
        }
    }
L_000e2210:;
    {
        cpu->r[1] = rd32(0x000e2218u + - 0x120u);
    }
L_000e2214:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2218:;
    {
        cpu->r[2] = rd32(0x000e2220u + - 0x124u);
    }
L_000e221c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2220:;
    {
        cpu->r[3] = rd32(0x000e2228u + - 0x128u);
    }
L_000e2224:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e222cu, cpu->r[1], 0, 0);
    }
L_000e2228:;
    {
        cpu->r[12] = rd32(0x000e2230u + - 0x12cu);
    }
L_000e222c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2234u, cpu->r[2], 0, 0);
    }
L_000e2230:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2238u, cpu->r[3], 0, 0);
    }
L_000e2234:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2238:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2240u, cpu->r[12], 0, 0);
    }
L_000e223c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2240:;
    {
        cpu->r[14] = 0x000e2244u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2244:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2248:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e224c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2250:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4680;
        }
    }
L_000e2258:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e225c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2260:;
    {
        cpu->r[14] = 0x000e2264u; fn_000c4e0c(cpu);
    }
L_000e2264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4644;
        }
    }
L_000e226c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2270:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2274:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2278:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e227c:;
    {
        wr32(cpu->r[0] + + 0x190u, cpu->r[2]);
    }
L_000e2280:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2284:;
    {
        goto L_000e1148;
    }
L_000e2288:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e228c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2290:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2294:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e2298:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000e229c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e22a0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e22a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e22a8:;
    {
        cpu->r[14] = 0x000e22acu; fn_000baad8(cpu);
    }
L_000e22ac:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e22b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e22b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e22b8:;
    {
        goto L_000e1148;
    }
L_000e22bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e22c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e22c4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e22c8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e22cc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000e22d0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e22d4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e22d8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e22dc:;
    {
        cpu->r[14] = 0x000e22e0u; fn_000964c8(cpu);
    }
L_000e22e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000e22e4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000e22e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e22ec:;
    {
        cpu->r[14] = 0x000e22f0u; fn_000baad8(cpu);
    }
L_000e22f0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e22f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e22f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e22fc:;
    {
        goto L_000e1148;
    }
L_000e2300:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2304:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2308:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2320;
        }
    }
L_000e230c:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2310:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2314:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2318:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e231c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2354;
        }
    }
L_000e2320:;
    {
        cpu->r[1] = rd32(0x000e2328u + - 0x220u);
    }
L_000e2324:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2328:;
    {
        cpu->r[2] = rd32(0x000e2330u + - 0x224u);
    }
L_000e232c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2330:;
    {
        cpu->r[3] = rd32(0x000e2338u + - 0x228u);
    }
L_000e2334:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e233cu, cpu->r[1], 0, 0);
    }
L_000e2338:;
    {
        cpu->r[12] = rd32(0x000e2340u + - 0x22cu);
    }
L_000e233c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2344u, cpu->r[2], 0, 0);
    }
L_000e2340:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2348u, cpu->r[3], 0, 0);
    }
L_000e2344:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2348:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2350u, cpu->r[12], 0, 0);
    }
L_000e234c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2350:;
    {
        cpu->r[14] = 0x000e2354u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2354:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2358:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e235c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2360:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e460c;
        }
    }
L_000e2368:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e236c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2370:;
    {
        cpu->r[14] = 0x000e2374u; fn_000c4e0c(cpu);
    }
L_000e2374:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e45d4;
        }
    }
L_000e237c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2380:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e2384:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e239c;
        }
    }
L_000e2388:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e238c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2390:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2394:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e2398:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e23d0;
        }
    }
L_000e239c:;
    {
        cpu->r[1] = rd32(0x000e23a4u + - 0x28cu);
    }
L_000e23a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e23a4:;
    {
        cpu->r[2] = rd32(0x000e23acu + - 0x290u);
    }
L_000e23a8:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e23ac:;
    {
        cpu->r[3] = rd32(0x000e23b4u + - 0x294u);
    }
L_000e23b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e23b8u, cpu->r[1], 0, 0);
    }
L_000e23b4:;
    {
        cpu->r[12] = rd32(0x000e23bcu + - 0x298u);
    }
L_000e23b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e23c0u, cpu->r[2], 0, 0);
    }
L_000e23bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e23c4u, cpu->r[3], 0, 0);
    }
L_000e23c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e23c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e23ccu, cpu->r[12], 0, 0);
    }
L_000e23c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e23cc:;
    {
        cpu->r[14] = 0x000e23d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e23d0:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e23d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e23d8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e23dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e23e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e459c;
        }
    }
L_000e23e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e23e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e23ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e23f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_000e23f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e23f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e23fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2400:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2408:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e240c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2410:;
    {
        cpu->r[14] = 0x000e2414u; fn_000b5ad4(cpu);
    }
L_000e2414:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2418:;
    {
        cpu->r[14] = 0x000e241cu; fn_000b5ebc(cpu);
    }
L_000e241c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2420:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2424:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2428:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e242c:;
    {
        goto L_000e1148;
    }
L_000e2430:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2434:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2438:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2450;
        }
    }
L_000e243c:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2440:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2444:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2448:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e244c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2484;
        }
    }
L_000e2450:;
    {
        cpu->r[1] = rd32(0x000e2458u + - 0x330u);
    }
L_000e2454:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2458:;
    {
        cpu->r[2] = rd32(0x000e2460u + - 0x334u);
    }
L_000e245c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2460:;
    {
        cpu->r[3] = rd32(0x000e2468u + - 0x338u);
    }
L_000e2464:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e246cu, cpu->r[1], 0, 0);
    }
L_000e2468:;
    {
        cpu->r[12] = rd32(0x000e2470u + - 0x33cu);
    }
L_000e246c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2474u, cpu->r[2], 0, 0);
    }
L_000e2470:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2478u, cpu->r[3], 0, 0);
    }
L_000e2474:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2478:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2480u, cpu->r[12], 0, 0);
    }
L_000e247c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2480:;
    {
        cpu->r[14] = 0x000e2484u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2484:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2488:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e248c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2490:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4564;
        }
    }
L_000e2498:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e249c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e24a0:;
    {
        cpu->r[14] = 0x000e24a4u; fn_000c4e0c(cpu);
    }
L_000e24a4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e24a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e452c;
        }
    }
L_000e24ac:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e24b0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e24b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e24cc;
        }
    }
L_000e24b8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e24bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e24c0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e24c4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e24c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2500;
        }
    }
L_000e24cc:;
    {
        cpu->r[1] = rd32(0x000e24d4u + - 0x39cu);
    }
L_000e24d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e24d4:;
    {
        cpu->r[2] = rd32(0x000e24dcu + - 0x3a0u);
    }
L_000e24d8:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e24dc:;
    {
        cpu->r[3] = rd32(0x000e24e4u + - 0x3a4u);
    }
L_000e24e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e24e8u, cpu->r[1], 0, 0);
    }
L_000e24e4:;
    {
        cpu->r[12] = rd32(0x000e24ecu + - 0x3a8u);
    }
L_000e24e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e24f0u, cpu->r[2], 0, 0);
    }
L_000e24ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e24f4u, cpu->r[3], 0, 0);
    }
L_000e24f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e24f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e24fcu, cpu->r[12], 0, 0);
    }
L_000e24f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e24fc:;
    {
        cpu->r[14] = 0x000e2500u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2500:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2504:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2508:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e250c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e2510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e44f4;
        }
    }
L_000e2514:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2518:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e251c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e2520:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2524:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_000e2528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e252c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2530:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2534:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2538:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e253c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2540:;
    {
        cpu->r[14] = 0x000e2544u; fn_000b5c44(cpu);
    }
L_000e2544:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2548:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e254c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2550:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2554:;
    {
        goto L_000e1148;
    }
L_000e2558:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e255c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2560:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2578;
        }
    }
L_000e2564:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2568:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e256c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2570:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2574:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e25ac;
        }
    }
L_000e2578:;
    {
        cpu->r[1] = rd32(0x000e2580u + - 0x438u);
    }
L_000e257c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2580:;
    {
        cpu->r[2] = rd32(0x000e2588u + - 0x43cu);
    }
L_000e2584:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2588:;
    {
        cpu->r[3] = rd32(0x000e2590u + - 0x440u);
    }
L_000e258c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2594u, cpu->r[1], 0, 0);
    }
L_000e2590:;
    {
        cpu->r[12] = rd32(0x000e2598u + - 0x444u);
    }
L_000e2594:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e259cu, cpu->r[2], 0, 0);
    }
L_000e2598:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e25a0u, cpu->r[3], 0, 0);
    }
L_000e259c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e25a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e25a8u, cpu->r[12], 0, 0);
    }
L_000e25a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e25a8:;
    {
        cpu->r[14] = 0x000e25acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e25ac:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e25b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e25b4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e25b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e25bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e44bc;
        }
    }
L_000e25c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e25c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e25c8:;
    {
        cpu->r[14] = 0x000e25ccu; fn_000c4e0c(cpu);
    }
L_000e25cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e25d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e46f4;
        }
    }
L_000e25d4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e25d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e25dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e25e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e25e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e25e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e25ec:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000e25f0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e25f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e25f8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e25fc:;
    {
        cpu->r[14] = 0x000e2600u; fn_000b5b20(cpu);
    }
L_000e2600:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2604:;
    {
        goto L_000e113c;
    }
L_000e2608:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e260c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2610:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2614:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x15cu);
    }
L_000e2618:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000e261c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e412c;
        }
    }
L_000e2620:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e2624:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2628:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e262c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2630:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_000e2634:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e2638:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e263c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e2640:;
    {
        cpu->r[14] = 0x000e2644u; fn_000baad8(cpu);
    }
L_000e2644:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2648:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e264c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2650:;
    {
        goto L_000e1148;
    }
L_000e2654:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e2658:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e265c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_000e2660:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e2664:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e2668:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e266c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e2670:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e2674:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e2678:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e267c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2680:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e2684:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e2688:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e268c:;
    {
        cpu->r[14] = 0x000e2690u; fn_000df800(cpu);
    }
L_000e2690:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4d94;
        }
    }
L_000e2698:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e269c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_000e26a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e26a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e26a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e26ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e26b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e26b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xccu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e26b8:;
    {
        cpu->r[14] = 0x000e26bcu; fn_000b5fc4(cpu);
    }
L_000e26bc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e26c0:;
    {
        goto L_000e113c;
    }
L_000e26c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e26c8:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e26cc:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e26d0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e26d4:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e26d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e26dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e26e0:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e26e4:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e26e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e26ec:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e26f0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e26f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e26f8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e26fc:;
    {
        cpu->r[14] = 0x000e2700u; fn_000df800(cpu);
    }
L_000e2700:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4e74;
        }
    }
L_000e2708:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e270c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e2710:;
    {
        cpu->r[14] = 0x000e2714u; fn_000b5a74(cpu);
    }
L_000e2714:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_000e2718:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e271c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e2720:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2724:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2728:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e272c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e2730:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2734:;
    {
        cpu->r[14] = 0x000e2738u; fn_000b5abc(cpu);
    }
L_000e2738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e273c:;
    {
        cpu->r[14] = 0x000e2740u; fn_000b5ba0(cpu);
    }
L_000e2740:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2744:;
    {
        goto L_000e113c;
    }
L_000e2748:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e274c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e2750:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e2754:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e2758:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e275c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e2760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e2764:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2768:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_000e276c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e2770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e2778u + + 0x358u);
    }
L_000e2774:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e2778:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e277c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2780:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000e2784:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e2788:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_000e278c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e2790:;
    {
        cpu->r[14] = 0x000e2794u; fn_000b5b10(cpu);
    }
L_000e2794:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2798:;
    {
        goto L_000e113c;
    }
L_000e279c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e27a0:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e27a4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e27a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e27ac:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e27b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e27b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e27b8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e27bc:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e27c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e27c4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e27c8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e27cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e27d0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e27d4:;
    {
        cpu->r[14] = 0x000e27d8u; fn_000df800(cpu);
    }
L_000e27d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e27dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4ee4;
        }
    }
L_000e27e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e27e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_000e27e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e27ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e27f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e27f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e27f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e27fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2800:;
    {
        cpu->r[14] = 0x000e2804u; fn_000b5c44(cpu);
    }
L_000e2804:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2808:;
    {
        goto L_000e113c;
    }
L_000e280c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e2810:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e2814:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e2818:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e281c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e2820:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e2824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e2828:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e282c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e2830:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2834:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2838:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e283c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e2840:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e2844:;
    {
        cpu->r[14] = 0x000e2848u; fn_000df800(cpu);
    }
L_000e2848:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e284c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4e3c;
        }
    }
L_000e2850:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000e2854:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2858:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e285c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2864:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2868:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e286c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2870:;
    {
        cpu->r[14] = 0x000e2874u; fn_000b5ad4(cpu);
    }
L_000e2874:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2878:;
    {
        cpu->r[14] = 0x000e287cu; fn_000b5ebc(cpu);
    }
L_000e287c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2880:;
    {
        goto L_000e113c;
    }
L_000e2884:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e2888:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e288c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e2890:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e2894:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e2898:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e289c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e28a0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e28a4:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e28a8:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e28ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e28b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e28b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e28b8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000e28bc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e28c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e28c4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e28c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e28cc:;
    {
        cpu->r[14] = 0x000e28d0u; fn_000b5b20(cpu);
    }
L_000e28d0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e28d4:;
    {
        goto L_000e113c;
    }
L_000e28d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e28dc:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e28e0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e28e4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e28e8:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e28ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e28f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e28f4:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e28f8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e28fc:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e2900:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e2904:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2908:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e290c:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e2910:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2954;
        }
    }
L_000e2914:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e2918:;
    {
        cpu->r[14] = 0x000e291cu; fn_000df800(cpu);
    }
L_000e291c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4d5c;
        }
    }
L_000e2924:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e2928:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000e292c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_000e2930:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2934:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_000e2938:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e293c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0xcu);
    }
L_000e2940:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2944:;
    {
        cpu->r[14] = 0x000e2948u; fn_000b5fc4(cpu);
    }
L_000e2948:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e294c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e2950:;
    {
        cpu->r[14] = 0x000e2954u; fn_000b5b54(cpu);
    }
L_000e2954:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2958:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e295c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3acc;
        }
    }
L_000e2960:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e2964:;
    {
        cpu->r[14] = 0x000e2968u; fn_000df800(cpu);
    }
L_000e2968:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e296c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4eac;
        }
    }
L_000e2970:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e2974:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000e2978:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e297c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2980:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2984:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2988:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e298c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2990:;
    {
        cpu->r[14] = 0x000e2994u; fn_000b5c44(cpu);
    }
L_000e2994:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2998:;
    {
        goto L_000e113c;
    }
L_000e299c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e29a0:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000e29a4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e29a8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000e29ac:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e29b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e29b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e29b8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e29bc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e29c0:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e29c4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000e29c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e29cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e29d0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e29d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2a20;
        }
    }
L_000e29d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e29dc:;
    {
        cpu->r[14] = 0x000e29e0u; fn_000df800(cpu);
    }
L_000e29e0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e29e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4d24;
        }
    }
L_000e29e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e29ec:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000e29f0:;
    {
        cpu->r[14] = 0x000e29f4u; fn_000b5a74(cpu);
    }
L_000e29f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e29f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000e29fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_000e2a00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_000e2a08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_000e2a10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a14:;
    {
        cpu->r[14] = 0x000e2a18u; fn_000b5abc(cpu);
    }
L_000e2a18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2a1c:;
    {
        cpu->r[14] = 0x000e2a20u; fn_000b5ba0(cpu);
    }
L_000e2a20:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2a24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e2a28:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3b18;
        }
    }
L_000e2a2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e2a30:;
    {
        cpu->r[14] = 0x000e2a34u; fn_000df800(cpu);
    }
L_000e2a34:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2a38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4f1c;
        }
    }
L_000e2a3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2a40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000e2a44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_000e2a48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_000e2a50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_000e2a58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2a5c:;
    {
        cpu->r[14] = 0x000e2a60u; fn_000b5ad4(cpu);
    }
L_000e2a60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2a64:;
    {
        cpu->r[14] = 0x000e2a68u; fn_000b5ebc(cpu);
    }
L_000e2a68:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e2a6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e2a70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e2a9c;
        }
    }
L_000e2a74:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xcu);
    }
L_000e2a78:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000e2a7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e4148;
        }
    }
L_000e2a80:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000e2a84:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e2a88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e2a90u + + 0x40u);
    }
L_000e2a8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2a90:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_000e2a94:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e2a98:;
    {
        cpu->r[14] = 0x000e2a9cu; fn_000b5b30(cpu);
    }
L_000e2a9c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000e2aa0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e2aa4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e2aa8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e113c;
        }
    }
L_000e2aac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000e2ab0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e2ab4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2ab8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e2abc:;
    {
        cpu->r[14] = 0x000e2ac0u; fn_000b5b20(cpu);
    }
L_000e2ac0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2ac4:;
    {
        cpu->r[14] = 0x000e2ac8u; fn_000b5ebc(cpu);
    }
L_000e2ac8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2acc:;
    {
        goto L_000e113c;
    }
L_000e2ba4:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2ba8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2bac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2bc4;
        }
    }
L_000e2bb0:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2bb4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2bb8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2bbc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2bc0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2bf8;
        }
    }
L_000e2bc4:;
    {
        cpu->r[1] = rd32(0x000e2bccu + - 0xf8u);
    }
L_000e2bc8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2bcc:;
    {
        cpu->r[2] = rd32(0x000e2bd4u + - 0xfcu);
    }
L_000e2bd0:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2bd4:;
    {
        cpu->r[3] = rd32(0x000e2bdcu + - 0x100u);
    }
L_000e2bd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2be0u, cpu->r[1], 0, 0);
    }
L_000e2bdc:;
    {
        cpu->r[12] = rd32(0x000e2be4u + - 0x104u);
    }
L_000e2be0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2be8u, cpu->r[2], 0, 0);
    }
L_000e2be4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2becu, cpu->r[3], 0, 0);
    }
L_000e2be8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2bec:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2bf4u, cpu->r[12], 0, 0);
    }
L_000e2bf0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2bf4:;
    {
        cpu->r[14] = 0x000e2bf8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2bf8:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2bfc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2c00:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2c04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e41a8;
        }
    }
L_000e2c0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e2c10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2c14:;
    {
        cpu->r[14] = 0x000e2c18u; fn_000ba8ec(cpu);
    }
L_000e2c18:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4288;
        }
    }
L_000e2c20:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000e2c24:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000e2c28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2c2c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e2c30:;
    {
        cpu->r[5] = rd16(cpu->r[5] + + 0x2u);
    }
L_000e2c34:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2c38:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e2c3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000e2c40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2c44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e2c48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e113c;
        }
    }
L_000e2c4c:;
    {
        cpu->r[3] = 0x00001ca8u;
    }
L_000e2c50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2c54:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2c58:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2c5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000e2c60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3a94;
        }
    }
L_000e2c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00011c00u, 0, 0);
    }
L_000e2c68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e2c6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000acu, 0, 0);
    }
L_000e2c70:;
    {
        goto L_000e2c80;
    }
L_000e2c74:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000004u;
        cpu->r[1] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_000e2c78:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000e2c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3a94;
        }
    }
L_000e2c80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000e2c84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000e2c88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e2c74;
        }
    }
L_000e2c8c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2c90:;
    {
        goto L_000e113c;
    }
L_000e2c94:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e2c98:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000e2c9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2ca0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e2ca4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2ca8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e2cac:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000e2cb0:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e2cb4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000e2cb8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000e2cbc:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_000e2cc0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2cc4:;
    {
        goto L_000e1148;
    }
L_000e2cc8:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2ccc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e2cd0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2ce8;
        }
    }
L_000e2cd4:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2cd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2cdc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2ce0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e2ce4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2d1c;
        }
    }
L_000e2ce8:;
    {
        cpu->r[1] = rd32(0x000e2cf0u + - 0x20cu);
    }
L_000e2cec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2cf0:;
    {
        cpu->r[2] = rd32(0x000e2cf8u + - 0x210u);
    }
L_000e2cf4:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2cf8:;
    {
        cpu->r[3] = rd32(0x000e2d00u + - 0x214u);
    }
L_000e2cfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2d04u, cpu->r[1], 0, 0);
    }
L_000e2d00:;
    {
        cpu->r[12] = rd32(0x000e2d08u + - 0x218u);
    }
L_000e2d04:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2d0cu, cpu->r[2], 0, 0);
    }
L_000e2d08:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2d10u, cpu->r[3], 0, 0);
    }
L_000e2d0c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2d10:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2d18u, cpu->r[12], 0, 0);
    }
L_000e2d14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2d18:;
    {
        cpu->r[14] = 0x000e2d1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2d1c:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2d20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2d24:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2d28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e2d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4250;
        }
    }
L_000e2d30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x00018c00u, 0, 0);
    }
L_000e2d34:;
    {
        cpu->r[0] = 0x00008c50u;
    }
L_000e2d38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_000e2d3c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e2d40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000e2d44:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000e2d48:;
    {
        goto L_000e2d58;
    }
L_000e2d4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000e2d50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_000e2d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e2d9c;
        }
    }
L_000e2d58:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000e2d5c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000e2d60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2d64:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000e2d68:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x3dcu);
    }
L_000e2d6c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000e2d70:;
    {
        cpu->r[14] = 0x000e2d74u; fn_000df710(cpu);
    }
L_000e2d74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e2d4c;
        }
    }
L_000e2d7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e2d80:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000e2d84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000e2d88:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e2d8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000e2d90:;
    {
        cpu->r[14] = 0x000e2d94u; fn_00165578(cpu);
    }
L_000e2d94:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_000e2d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e2d58;
        }
    }
L_000e2d9c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2da0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2da4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2da8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2dac:;
    {
        goto L_000e1148;
    }
L_000e2db0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2db4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2db8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2dd0;
        }
    }
L_000e2dbc:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2dc0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2dc4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2dc8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2dcc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2e04;
        }
    }
L_000e2dd0:;
    {
        cpu->r[1] = rd32(0x000e2dd8u + - 0x2e4u);
    }
L_000e2dd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2dd8:;
    {
        cpu->r[2] = rd32(0x000e2de0u + - 0x2e8u);
    }
L_000e2ddc:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2de0:;
    {
        cpu->r[3] = rd32(0x000e2de8u + - 0x2ecu);
    }
L_000e2de4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2decu, cpu->r[1], 0, 0);
    }
L_000e2de8:;
    {
        cpu->r[12] = rd32(0x000e2df0u + - 0x2f0u);
    }
L_000e2dec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2df4u, cpu->r[2], 0, 0);
    }
L_000e2df0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2df8u, cpu->r[3], 0, 0);
    }
L_000e2df4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2df8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2e00u, cpu->r[12], 0, 0);
    }
L_000e2dfc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2e00:;
    {
        cpu->r[14] = 0x000e2e04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2e04:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2e08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2e0c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2e10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4218;
        }
    }
L_000e2e18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e2e1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2e20:;
    {
        cpu->r[14] = 0x000e2e24u; fn_000ba8ec(cpu);
    }
L_000e2e24:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2e28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e41e0;
        }
    }
L_000e2e2c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2e30:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e2e34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2e4c;
        }
    }
L_000e2e38:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2e3c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2e40:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2e44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e2e48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2e80;
        }
    }
L_000e2e4c:;
    {
        cpu->r[1] = rd32(0x000e2e54u + - 0x350u);
    }
L_000e2e50:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2e54:;
    {
        cpu->r[2] = rd32(0x000e2e5cu + - 0x354u);
    }
L_000e2e58:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2e5c:;
    {
        cpu->r[3] = rd32(0x000e2e64u + - 0x358u);
    }
L_000e2e60:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2e68u, cpu->r[1], 0, 0);
    }
L_000e2e64:;
    {
        cpu->r[12] = rd32(0x000e2e6cu + - 0x35cu);
    }
L_000e2e68:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2e70u, cpu->r[2], 0, 0);
    }
L_000e2e6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2e74u, cpu->r[3], 0, 0);
    }
L_000e2e70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2e74:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2e7cu, cpu->r[12], 0, 0);
    }
L_000e2e78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2e7c:;
    {
        cpu->r[14] = 0x000e2e80u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2e80:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2e84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2e88:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2e8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e2e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4410;
        }
    }
L_000e2e94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2e98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000e2e9c:;
    {
        cpu->r[14] = 0x000e2ea0u; fn_000b5a74(cpu);
    }
L_000e2ea0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000e2ea4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2ea8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e2eac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2eb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e2eb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2eb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e2ebc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e2ec0:;
    {
        cpu->r[14] = 0x000e2ec4u; fn_000b5abc(cpu);
    }
L_000e2ec4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2ec8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2ecc:;
    {
        cpu->r[14] = 0x000e2ed0u; fn_000b5ba0(cpu);
    }
L_000e2ed0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2ed4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2ed8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2edc:;
    {
        goto L_000e1148;
    }
L_000e2ee0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2ee4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2ee8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2f00;
        }
    }
L_000e2eec:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2ef0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2ef4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2ef8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2efc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2f34;
        }
    }
L_000e2f00:;
    {
        cpu->r[1] = rd32(0x000e2f08u + - 0x3f4u);
    }
L_000e2f04:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2f08:;
    {
        cpu->r[2] = rd32(0x000e2f10u + - 0x3f8u);
    }
L_000e2f0c:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2f10:;
    {
        cpu->r[3] = rd32(0x000e2f18u + - 0x3fcu);
    }
L_000e2f14:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2f1cu, cpu->r[1], 0, 0);
    }
L_000e2f18:;
    {
        cpu->r[12] = rd32(0x000e2f20u + - 0x400u);
    }
L_000e2f1c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2f24u, cpu->r[2], 0, 0);
    }
L_000e2f20:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2f28u, cpu->r[3], 0, 0);
    }
L_000e2f24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2f28:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2f30u, cpu->r[12], 0, 0);
    }
L_000e2f2c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2f30:;
    {
        cpu->r[14] = 0x000e2f34u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2f34:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2f38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2f3c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2f40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2f44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e43d8;
        }
    }
L_000e2f48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e2f4c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2f50:;
    {
        cpu->r[14] = 0x000e2f54u; fn_000ba8ec(cpu);
    }
L_000e2f54:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e2f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e43a0;
        }
    }
L_000e2f5c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e2f60:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000e2f64:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e2f68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e2f6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e2f70:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e2f74:;
    {
        cpu->r[14] = 0x000e2f78u; fn_000b5b10(cpu);
    }
L_000e2f78:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e2f7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e2f80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e2f84:;
    {
        goto L_000e1148;
    }
L_000e2f88:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e2f8c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e2f90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2fa8;
        }
    }
L_000e2f94:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e2f98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2f9c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2fa0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e2fa4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2fdc;
        }
    }
L_000e2fa8:;
    {
        cpu->r[1] = rd32(0x000e2fb0u + - 0x48cu);
    }
L_000e2fac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e2fb0:;
    {
        cpu->r[2] = rd32(0x000e2fb8u + - 0x490u);
    }
L_000e2fb4:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e2fb8:;
    {
        cpu->r[3] = rd32(0x000e2fc0u + - 0x494u);
    }
L_000e2fbc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e2fc4u, cpu->r[1], 0, 0);
    }
L_000e2fc0:;
    {
        cpu->r[12] = rd32(0x000e2fc8u + - 0x498u);
    }
L_000e2fc4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e2fccu, cpu->r[2], 0, 0);
    }
L_000e2fc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e2fd0u, cpu->r[3], 0, 0);
    }
L_000e2fcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e2fd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e2fd8u, cpu->r[12], 0, 0);
    }
L_000e2fd4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e2fd8:;
    {
        cpu->r[14] = 0x000e2fdcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e2fdc:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e2fe0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e2fe4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e2fe8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e2fec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4368;
        }
    }
L_000e2ff0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e2ff4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e2ff8:;
    {
        cpu->r[14] = 0x000e2ffcu; fn_000ba8ec(cpu);
    }
L_000e2ffc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e3000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4330;
        }
    }
L_000e3004:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3008:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e300c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3024;
        }
    }
L_000e3010:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e3014:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3018:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e301c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e3020:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3058;
        }
    }
L_000e3024:;
    {
        cpu->r[1] = rd32(0x000e302cu + - 0x4f8u);
    }
L_000e3028:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e302c:;
    {
        cpu->r[2] = rd32(0x000e3034u + - 0x4fcu);
    }
L_000e3030:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e3034:;
    {
        cpu->r[3] = rd32(0x000e303cu + - 0x500u);
    }
L_000e3038:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3040u, cpu->r[1], 0, 0);
    }
L_000e303c:;
    {
        cpu->r[12] = rd32(0x000e3044u + - 0x504u);
    }
L_000e3040:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e3048u, cpu->r[2], 0, 0);
    }
L_000e3044:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e304cu, cpu->r[3], 0, 0);
    }
L_000e3048:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e304c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e3054u, cpu->r[12], 0, 0);
    }
L_000e3050:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e3054:;
    {
        cpu->r[14] = 0x000e3058u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3058:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e305c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3060:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3064:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e3068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e42f8;
        }
    }
L_000e306c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000e3070:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e3074:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e3078:;
    {
        vfp_vneg(cpu, 12, 13);
    }
L_000e307c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xd00u);
    }
L_000e3080:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e3084:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e3088:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e308c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000e3090:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3094:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000e3098:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,12);
    }
L_000e309c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000e30a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000e30a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e30a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e30ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e30b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_000e30b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[1]);
        }
    }
L_000e30b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e30bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
        }
    }
L_000e30c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000e30c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e30c8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000e30cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e30d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e30d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3d4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000e30d8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e30dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3d8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e30e0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e30e4:;
    {
        cpu->r[14] = 0x000e30e8u; fn_000b5fc4(cpu);
    }
L_000e30e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e30ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000e30f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e30f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e30f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e30fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3100:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e3104:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3108:;
    {
        cpu->r[14] = 0x000e310cu; fn_000b5abc(cpu);
    }
L_000e310c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3110:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3114:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3118:;
    {
        goto L_000e1148;
    }
L_000e311c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e3120:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e3124:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000e3128:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000e312c:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000e3130:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e3134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e3138:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e313c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000e3140:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e3144:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000e3148:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e314c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3150:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000e3154:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3158:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e315c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3160:;
    {
        cpu->r[14] = 0x000e3164u; fn_00148c2c(cpu);
    }
L_000e3164:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3168:;
    {
        goto L_000e113c;
    }
L_000e316c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3170:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e3174:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e318c;
        }
    }
L_000e3178:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e317c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3180:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3184:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e3188:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e31c0;
        }
    }
L_000e318c:;
    {
        cpu->r[1] = rd32(0x000e3194u + - 0x650u);
    }
L_000e3190:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3194:;
    {
        cpu->r[2] = rd32(0x000e319cu + - 0x654u);
    }
L_000e3198:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e319c:;
    {
        cpu->r[3] = rd32(0x000e31a4u + - 0x658u);
    }
L_000e31a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e31a8u, cpu->r[1], 0, 0);
    }
L_000e31a4:;
    {
        cpu->r[12] = rd32(0x000e31acu + - 0x65cu);
    }
L_000e31a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e31b0u, cpu->r[2], 0, 0);
    }
L_000e31ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e31b4u, cpu->r[3], 0, 0);
    }
L_000e31b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e31b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e31bcu, cpu->r[12], 0, 0);
    }
L_000e31b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e31bc:;
    {
        cpu->r[14] = 0x000e31c0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e31c0:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e31c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e31c8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e31cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e31d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e42c0;
        }
    }
L_000e31d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e31d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e31dc:;
    {
        cpu->r[14] = 0x000e31e0u; fn_000ba8ec(cpu);
    }
L_000e31e0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e31e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e48ec;
        }
    }
L_000e31e8:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e31ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e31f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3208;
        }
    }
L_000e31f4:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e31f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e31fc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3200:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e3204:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e323c;
        }
    }
L_000e3208:;
    {
        cpu->r[1] = rd32(0x000e3210u + - 0x6bcu);
    }
L_000e320c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3210:;
    {
        cpu->r[2] = rd32(0x000e3218u + - 0x6c0u);
    }
L_000e3214:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e3218:;
    {
        cpu->r[3] = rd32(0x000e3220u + - 0x6c4u);
    }
L_000e321c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3224u, cpu->r[1], 0, 0);
    }
L_000e3220:;
    {
        cpu->r[12] = rd32(0x000e3228u + - 0x6c8u);
    }
L_000e3224:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e322cu, cpu->r[2], 0, 0);
    }
L_000e3228:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e3230u, cpu->r[3], 0, 0);
    }
L_000e322c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e3230:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e3238u, cpu->r[12], 0, 0);
    }
L_000e3234:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e3238:;
    {
        cpu->r[14] = 0x000e323cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e323c:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e3240:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3244:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3248:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e324c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e48b4;
        }
    }
L_000e3250:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3254:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000e3258:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e325c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3260:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e3264:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3268:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e326c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3270:;
    {
        cpu->r[14] = 0x000e3274u; fn_000b5c44(cpu);
    }
L_000e3274:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3278:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e327c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3280:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3284:;
    {
        goto L_000e1148;
    }
L_000e3288:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e328c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e3290:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e32a8;
        }
    }
L_000e3294:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e3298:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e329c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e32a0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e32a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e32dc;
        }
    }
L_000e32a8:;
    {
        cpu->r[1] = rd32(0x000e32b0u + - 0x74cu);
    }
L_000e32ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e32b0:;
    {
        cpu->r[2] = rd32(0x000e32b8u + - 0x750u);
    }
L_000e32b4:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e32b8:;
    {
        cpu->r[3] = rd32(0x000e32c0u + - 0x754u);
    }
L_000e32bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e32c4u, cpu->r[1], 0, 0);
    }
L_000e32c0:;
    {
        cpu->r[12] = rd32(0x000e32c8u + - 0x758u);
    }
L_000e32c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e32ccu, cpu->r[2], 0, 0);
    }
L_000e32c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e32d0u, cpu->r[3], 0, 0);
    }
L_000e32cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e32d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e32d8u, cpu->r[12], 0, 0);
    }
L_000e32d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e32d8:;
    {
        cpu->r[14] = 0x000e32dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e32dc:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e32e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e32e4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e32e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e32ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e487c;
        }
    }
L_000e32f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e32f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e32f8:;
    {
        cpu->r[14] = 0x000e32fcu; fn_000ba8ec(cpu);
    }
L_000e32fc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e3300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4844;
        }
    }
L_000e3304:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3308:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e330c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3324;
        }
    }
L_000e3310:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e3314:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3318:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e331c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000e3320:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3358;
        }
    }
L_000e3324:;
    {
        cpu->r[1] = rd32(0x000e332cu + - 0x7b8u);
    }
L_000e3328:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e332c:;
    {
        cpu->r[2] = rd32(0x000e3334u + - 0x7bcu);
    }
L_000e3330:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e3334:;
    {
        cpu->r[3] = rd32(0x000e333cu + - 0x7c0u);
    }
L_000e3338:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3340u, cpu->r[1], 0, 0);
    }
L_000e333c:;
    {
        cpu->r[12] = rd32(0x000e3344u + - 0x7c4u);
    }
L_000e3340:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e3348u, cpu->r[2], 0, 0);
    }
L_000e3344:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e334cu, cpu->r[3], 0, 0);
    }
L_000e3348:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e334c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e3354u, cpu->r[12], 0, 0);
    }
L_000e3350:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e3354:;
    {
        cpu->r[14] = 0x000e3358u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3358:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e335c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3360:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3364:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 6u, &shc), 0, 1);
    }
L_000e3368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e480c;
        }
    }
L_000e336c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000e3370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3374:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_000e3378:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e337c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000e3380:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3384:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_000e3388:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e338c:;
    {
        cpu->r[14] = 0x000e3390u; fn_000b5ad4(cpu);
    }
L_000e3390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3394:;
    {
        cpu->r[14] = 0x000e3398u; fn_000b5ebc(cpu);
    }
L_000e3398:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e339c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e33a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e33a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e33a8:;
    {
        goto L_000e1148;
    }
L_000e33ac:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e33b0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e33b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e33cc;
        }
    }
L_000e33b8:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e33bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e33c0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e33c4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e33c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e3400;
        }
    }
L_000e33cc:;
    {
        cpu->r[1] = rd32(0x000e33d4u + - 0x850u);
    }
L_000e33d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e33d4:;
    {
        cpu->r[2] = rd32(0x000e33dcu + - 0x854u);
    }
L_000e33d8:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e33dc:;
    {
        cpu->r[3] = rd32(0x000e33e4u + - 0x858u);
    }
L_000e33e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e33e8u, cpu->r[1], 0, 0);
    }
L_000e33e4:;
    {
        cpu->r[12] = rd32(0x000e33ecu + - 0x85cu);
    }
L_000e33e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e33f0u, cpu->r[2], 0, 0);
    }
L_000e33ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e33f4u, cpu->r[3], 0, 0);
    }
L_000e33f0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e33f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e33fcu, cpu->r[12], 0, 0);
    }
L_000e33f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e33fc:;
    {
        cpu->r[14] = 0x000e3400u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3400:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e3404:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3408:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e340c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e3410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e47d4;
        }
    }
L_000e3414:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e3418:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e341c:;
    {
        cpu->r[14] = 0x000e3420u; fn_000ba8ec(cpu);
    }
L_000e3420:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e3424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e479c;
        }
    }
L_000e3428:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e342c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3430:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3434:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e3438:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e343c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000e3440:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e3444:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e3448:;
    {
        cpu->r[14] = 0x000e344cu; fn_000b5b20(cpu);
    }
L_000e344c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3450:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3454:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3458:;
    {
        goto L_000e1148;
    }
L_000e345c:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3460:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e3464:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e347c;
        }
    }
L_000e3468:;
    {
        cpu->r[3] = 0x000087d0u;
    }
L_000e346c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3470:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3474:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000e3478:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e34b0;
        }
    }
L_000e347c:;
    {
        cpu->r[1] = rd32(0x000e3484u + - 0x8f0u);
    }
L_000e3480:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3484:;
    {
        cpu->r[2] = rd32(0x000e348cu + - 0x8f4u);
    }
L_000e3488:;
    {
        cpu->r[14] = 0x00000084u;
    }
L_000e348c:;
    {
        cpu->r[3] = rd32(0x000e3494u + - 0x8f8u);
    }
L_000e3490:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3498u, cpu->r[1], 0, 0);
    }
L_000e3494:;
    {
        cpu->r[12] = rd32(0x000e349cu + - 0x8fcu);
    }
L_000e3498:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e34a0u, cpu->r[2], 0, 0);
    }
L_000e349c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e34a4u, cpu->r[3], 0, 0);
    }
L_000e34a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000e34a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e34acu, cpu->r[12], 0, 0);
    }
L_000e34a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e34ac:;
    {
        cpu->r[14] = 0x000e34b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e34b0:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e34b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e34b8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e34bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 6u, &shc), 0, 1);
    }
L_000e34c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4764;
        }
    }
L_000e34c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000e34c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000e34cc:;
    {
        cpu->r[14] = 0x000e34d0u; fn_000ba8ec(cpu);
    }
L_000e34d0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e34d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4ae8;
        }
    }
L_000e34d8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e34dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e34e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e34e4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e34e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e34ec:;
    {
        cpu->r[14] = 0x000e34f0u; fn_000b5a9c(cpu);
    }
L_000e34f0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e34f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e34f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e34fc:;
    {
        goto L_000e1148;
    }
L_000e3500:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e3504:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3508:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e350c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e3510:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e3514:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000e3518:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e351c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e3520:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e3524:;
    {
        cpu->r[14] = 0x000e3528u; fn_000bad1c(cpu);
    }
L_000e3528:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e352c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3530:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3534:;
    {
        goto L_000e1148;
    }
L_000e3538:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e353c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000e3540:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e3544:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e354cu + + 0x2dcu);
    }
L_000e3548:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e354c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3550:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3554:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000e3558:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e355c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000e3560:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e3564:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3568:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_000e356c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e3570:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e3574:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e3578:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e357c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000e3580:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e3584:;
    {
        vfp_vdiv(cpu, 12, 13, 15);
    }
L_000e3588:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000e358c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e3590:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000e3594:;
    {
        cpu->r[14] = 0x000e3598u; fn_000bba44(cpu);
    }
L_000e3598:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e359c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e35a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e35a4:;
    {
        goto L_000e1148;
    }
L_000e35a8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e35ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e35b0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e35b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e35bcu + + 0x26cu);
    }
L_000e35b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e35bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e35c0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e35c4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e35c8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e35cc:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000e35d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000e35d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e35d8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000e35dc:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e35e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e35e4:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e35e8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e35ec:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000e35f0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_000e35f4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e35f8:;
    {
        vfp_vdiv(cpu, 12, 13, 15);
    }
L_000e35fc:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000e3600:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e3604:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e3608:;
    {
        cpu->r[14] = 0x000e360cu; fn_000bb9a0(cpu);
    }
L_000e360c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3610:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3614:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3618:;
    {
        goto L_000e1148;
    }
L_000e361c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e3620:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3624:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e3628:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000e362c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3630:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000e3634:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3638:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e363c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e3640:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[6];
    }
L_000e3644:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000e3648:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e364c:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e3650:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000e3654:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e3658:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e365c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000e3660:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000e3664:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e3668:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e366c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3670:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000e3674:;
    {
        cpu->r[14] = 0x000e3678u; fn_000bad2c(cpu);
    }
L_000e3678:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e367c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3680:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3684:;
    {
        goto L_000e1148;
    }
L_000e3688:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e368c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3690:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3694:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_000e3698:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e369c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e36a0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e36a4:;
    {
        cpu->r[14] = 0x000e36a8u; fn_000bb764(cpu);
    }
L_000e36a8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e36ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e36b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e36b4:;
    {
        goto L_000e1148;
    }
L_000e36b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e36bc:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_000e36c0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e36c4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000e36c8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000e36cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e36d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e36d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e36d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000e36dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e3b9c;
        }
    }
L_000e36e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000e36e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e40f0;
        }
    }
L_000e36e8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e36ec:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e36f0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e36f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e36f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e36fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000e3700:;
    {
        cpu->r[14] = 0x000e3704u; fn_000bb394(cpu);
    }
L_000e3704:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3708:;
    {
        goto L_000e113c;
    }
L_000e370c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e3710:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3714:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000e3718:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e371c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000e3720:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e3724:;
    {
        cpu->r[14] = 0x000e3728u; fn_000bb368(cpu);
    }
L_000e3728:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e372c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3730:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3734:;
    {
        goto L_000e1148;
    }
L_000e3738:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e373c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000e3740:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3744:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3748:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000e374c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000e3750:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000e3754:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000e3758:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000e375c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000e3760:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000e3764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00004700u, 0, 0);
    }
L_000e3768:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_000e376c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000e3770:;
    {
        cpu->r[14] = 0x000e3774u; fn_000af828(cpu);
    }
L_000e3774:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3778:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e377c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3780:;
    {
        goto L_000e1148;
    }
L_000e3784:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e3788:;
    {
        cpu->r[2] = 0x000081c0u;
    }
L_000e378c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e3790:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e3794:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000e3798:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e379c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000e37a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e37a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e37a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e37bc;
        }
    }
L_000e37ac:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x3cu);
    }
L_000e37b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4cu);
    }
L_000e37b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000e37b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e113c;
        }
    }
L_000e37bc:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000e37c0:;
    {
        cpu->r[12] = 0x000081c4u;
    }
L_000e37c4:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e37c8:;
    {
        cpu->r[0] = 0x000081c8u;
    }
L_000e37cc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e37d0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e37d4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_000e37d8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000e37dc:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e37e0:;
    {
        cpu->r[1] = 0x000081ccu;
    }
L_000e37e4:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e37e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000e37ec:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000e37f0:;
    {
        cpu->r[2] = 0x000081d0u;
    }
L_000e37f4:;
    {
        wr32(cpu->r[8] + cpu->r[12], cpu->r[6]);
    }
L_000e37f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e37fc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_000e3800:;
    {
        cpu->r[5] = 0x000081d4u;
    }
L_000e3804:;
    {
        wr32(cpu->r[8] + cpu->r[0], cpu->r[11]);
    }
L_000e3808:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000e380c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_000e3810:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_000e3814:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000e3818:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[6]);
    }
L_000e381c:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[11]);
    }
L_000e3820:;
    {
        wr32(cpu->r[8] + cpu->r[5], cpu->r[12]);
    }
L_000e3824:;
    {
        goto L_000e113c;
    }
L_000e382c:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_000e3830:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e3834:;
    {
        cpu->r[14] = 0x000e3838u; fn_0018ba6c(cpu);
    }
L_000e3838:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x8u);
    }
L_000e383c:;
    {
        *(uint32_t*)vfp_s(cpu,24) = cpu->r[2];
    }
L_000e3840:;
    {
        *vfp_d(cpu,12) = (double)*(int32_t*)vfp_s(cpu,24);
    }
L_000e3844:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xeu);
    }
L_000e3848:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[3];
    }
L_000e384c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x000e3854u + + 0x3c4u);
    }
L_000e3850:;
    {
        cpu->r[2] = 0x0000a638u;
    }
L_000e3854:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e3858:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[6];
    }
L_000e385c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_000e3860:;
    {
        *(uint32_t*)vfp_s(cpu,0) = cpu->r[11];
    }
L_000e3864:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x6u);
    }
L_000e3868:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[12];
    }
L_000e386c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xcu);
    }
L_000e3870:;
    {
        *(uint32_t*)vfp_s(cpu,2) = cpu->r[1];
    }
L_000e3874:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_000e3878:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e387c:;
    {
        *(uint32_t*)vfp_s(cpu,4) = cpu->r[6];
    }
L_000e3880:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x10u);
    }
L_000e3884:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xau);
    }
L_000e3888:;
    {
        *(uint32_t*)vfp_s(cpu,6) = cpu->r[3];
    }
L_000e388c:;
    {
        *(uint32_t*)vfp_s(cpu,22) = cpu->r[11];
    }
L_000e3890:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x12u);
    }
L_000e3894:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x16u);
    }
L_000e3898:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[12];
    }
L_000e389c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[1];
    }
L_000e38a0:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x000e38a8u + + 0x378u);
    }
L_000e38a4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000e38a8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e38ac:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_000e38b0:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x14u);
    }
L_000e38b4:;
    {
        cpu->r[12] = rd32(0x000e38bcu + + 0x374u);
    }
L_000e38b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e38bc:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e38c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e38c8u, cpu->r[12], 0, 0);
    }
L_000e38c4:;
    {
        *vfp_d(cpu, 12) = *vfp_d(cpu, 12) / *vfp_d(cpu, 7);
    }
L_000e38c8:;
    {
        wr8(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_000e38cc:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[3]);
    }
L_000e38d0:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_000e38d4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_000e38d8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_000e38dc:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) / *vfp_d(cpu, 7);
    }
L_000e38e0:;
    {
        *vfp_d(cpu,0) = (double)*(int32_t*)vfp_s(cpu,0);
    }
L_000e38e4:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,16);
    }
L_000e38e8:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) / *vfp_d(cpu, 7);
    }
L_000e38ec:;
    {
        *vfp_d(cpu,1) = (double)*(int32_t*)vfp_s(cpu,2);
    }
L_000e38f0:;
    {
        *vfp_d(cpu, 0) = *vfp_d(cpu, 0) / *vfp_d(cpu, 7);
    }
L_000e38f4:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) / *vfp_d(cpu, 7);
    }
L_000e38f8:;
    {
        *vfp_d(cpu,2) = (double)*(int32_t*)vfp_s(cpu,4);
    }
L_000e38fc:;
    {
        *vfp_d(cpu, 1) = *vfp_d(cpu, 1) / *vfp_d(cpu, 7);
    }
L_000e3900:;
    {
        *vfp_d(cpu,11) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_000e3904:;
    {
        *vfp_d(cpu,3) = (double)*(int32_t*)vfp_s(cpu,6);
    }
L_000e3908:;
    {
        *vfp_d(cpu, 2) = *vfp_d(cpu, 2) / *vfp_d(cpu, 7);
    }
L_000e390c:;
    {
        *vfp_d(cpu, 3) = *vfp_d(cpu, 3) / *vfp_d(cpu, 7);
    }
L_000e3910:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) / *vfp_d(cpu, 7);
    }
L_000e3914:;
    {
        *vfp_d(cpu,4) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_000e3918:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_000e391c:;
    {
        *vfp_d(cpu, 4) = *vfp_d(cpu, 4) / *vfp_d(cpu, 7);
    }
L_000e3920:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 5) / *vfp_d(cpu, 7);
    }
L_000e3924:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 12) * *vfp_d(cpu, 6);
    }
L_000e3928:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) * *vfp_d(cpu, 6);
    }
L_000e392c:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) * *vfp_d(cpu, 6);
    }
L_000e3930:;
    {
        *vfp_d(cpu, 0) = *vfp_d(cpu, 0) * *vfp_d(cpu, 6);
    }
L_000e3934:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) * *vfp_d(cpu, 6);
    }
L_000e3938:;
    {
        *vfp_d(cpu, 1) = *vfp_d(cpu, 1) * *vfp_d(cpu, 6);
    }
L_000e393c:;
    {
        *vfp_d(cpu, 2) = *vfp_d(cpu, 2) * *vfp_d(cpu, 6);
    }
L_000e3940:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_d(cpu,7);
    }
L_000e3944:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,10);
    }
L_000e3948:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e394c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 8u, &shc); cpu->r[5] = v;
    }
L_000e3950:;
    {
        *vfp_d(cpu, 3) = *vfp_d(cpu, 3) * *vfp_d(cpu, 6);
    }
L_000e3954:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3958:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 8u, &shc); cpu->r[12] = v;
    }
L_000e395c:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 11) * *vfp_d(cpu, 6);
    }
L_000e3960:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_d(cpu,9);
    }
L_000e3964:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,8);
    }
L_000e3968:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e396c:;
    {
        *(int32_t*)vfp_s(cpu,1) = (int32_t)*vfp_d(cpu,0);
    }
L_000e3970:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_d(cpu,1);
    }
L_000e3974:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,1);
    }
L_000e3978:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[11], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000e397c:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3980:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[5] = v;
    }
L_000e3984:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,2);
    }
L_000e3988:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e398c:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[11], 2, 16u, &shc); cpu->r[12] = v;
    }
L_000e3990:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_d(cpu,6);
    }
L_000e3994:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3998:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000e399c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000e39a0:;
    {
        cpu->r[6] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000e39a4:;
    {
        cpu->r[3] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000e39a8:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[3]);
    }
L_000e39ac:;
    {
        wr8(cpu->r[0], cpu->r[6]);
    }
L_000e39b0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,3);
    }
L_000e39b4:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000e39b8:;
    {
        uint32_t v = cpu->r[5] | cpu->r[11]; cpu->r[5] = v;
    }
L_000e39bc:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[5]);
    }
L_000e39c0:;
    {
        cpu->r[3] = (cpu->r[5] >> 16) & 0xffu;
    }
L_000e39c4:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[3]);
    }
L_000e39c8:;
    {
        cpu->r[5] = (cpu->r[5] >> 8) & 0xffu;
    }
L_000e39cc:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[5]);
    }
L_000e39d0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e39d4:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,4);
    }
L_000e39d8:;
    {
        uint32_t v = cpu->r[12] | cpu->r[3]; cpu->r[12] = v;
    }
L_000e39dc:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[12]);
    }
L_000e39e0:;
    {
        cpu->r[3] = (cpu->r[12] >> 16) & 0xffu;
    }
L_000e39e4:;
    {
        cpu->r[12] = (cpu->r[12] >> 8) & 0xffu;
    }
L_000e39e8:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000e39ec:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[12]);
    }
L_000e39f0:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000e39f4:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e39f8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e39fc:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,5);
    }
L_000e3a00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000e3a04:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000e3a08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000e3a0c:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[0]);
    }
L_000e3a10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000e3a14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e096c;
        }
    }
L_000e3a18:;
    {
        goto L_000e1148;
    }
L_000e3a1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_000e3a20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e08dc;
        }
    }
L_000e3a24:;
    {
        goto L_000e1148;
    }
L_000e3a28:;
    {
        cpu->r[1] = rd32(0x000e3a30u + + 0x204u);
    }
L_000e3a2c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3a30:;
    {
        cpu->r[12] = rd32(0x000e3a38u + + 0x200u);
    }
L_000e3a34:;
    {
        cpu->r[14] = 0x000000aau;
    }
L_000e3a38:;
    {
        cpu->r[2] = rd32(0x000e3a40u + + 0x1fcu);
    }
L_000e3a3c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3a44u, cpu->r[1], 0, 0);
    }
L_000e3a40:;
    {
        cpu->r[3] = rd32(0x000e3a48u + + 0x1f8u);
    }
L_000e3a44:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e3a4cu, cpu->r[12], 0, 0);
    }
L_000e3a48:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e3a50u, cpu->r[2], 0, 0);
    }
L_000e3a4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e3a50:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e3a58u, cpu->r[3], 0, 0);
    }
L_000e3a54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e3a58:;
    {
        cpu->r[14] = 0x000e3a5cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3a5c:;
    {
        goto L_000e08e4;
    }
L_000e3a60:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000e3a64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000e3a68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e3a6c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000e3a70:;
    {
        cpu->r[14] = 0x000e3a74u; fn_00149b48(cpu);
    }
L_000e3a74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e3a78:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000e3a7c:;
    {
        goto L_000e0910;
    }
L_000e3a80:;
    {
        cpu->r[1] = 0x00005f58u;
    }
L_000e3a84:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000e3a88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e3a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e3a90:;
    {
        goto L_000e1214;
    }
L_000e3a94:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000e3a98:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000e3a9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000e3aa0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e3aa4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000e3aa8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
        }
    }
L_000e3aac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000e3ab0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000e3ab4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000e3ab8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000e3abc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000e3ac0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3ac4:;
    {
        wr8(cpu->r[2] + + 0x5a0u, cpu->r[5]);
    }
L_000e3ac8:;
    {
        goto L_000e113c;
    }
L_000e3acc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e3ad0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e3ad4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
        }
    }
L_000e3ad8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e113c;
        }
    }
L_000e3adc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000e3ae0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e3ae4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e3aecu + + 0x13cu);
    }
L_000e3ae8:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x6u);
    }
L_000e3aec:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000e3af0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e3af4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000e3af8:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(0x000e3b00u + + 0x12cu);
        }
    }
L_000e3afc:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_000e3b00:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[2], 1, 1);
    }
L_000e3b04:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000e3b08:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3b0c:;
    {
        cpu->r[14] = 0x000e3b10u; fn_000b61ec(cpu);
    }
L_000e3b10:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3b14:;
    {
        goto L_000e113c;
    }
L_000e3b18:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e3b1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e3b20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e2a68;
        }
    }
L_000e3b24:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000e3b28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000e3b2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e3b34u + + 0xf4u);
    }
L_000e3b30:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0xau);
    }
L_000e3b34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3b38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e3b3c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000e3b40:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(0x000e3b48u + + 0xe4u);
        }
    }
L_000e3b44:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_000e3b48:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[2], 1, 1);
    }
L_000e3b4c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000e3b50:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e3b54:;
    {
        cpu->r[14] = 0x000e3b58u; fn_000b6328(cpu);
    }
L_000e3b58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e3b5c:;
    {
        cpu->r[14] = 0x000e3b60u; fn_000b5ebc(cpu);
    }
L_000e3b60:;
    {
        goto L_000e2a68;
    }
L_000e3b64:;
    {
        cpu->r[3] = 0x000001e1u;
    }
L_000e3b68:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_000e3b6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e3b70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3b74:;
    {
        cpu->r[1] = rd32(0x000e3b7cu + + 0xc8u);
    }
L_000e3b78:;
    {
        cpu->r[2] = rd32(0x000e3b80u + + 0xc8u);
    }
L_000e3b7c:;
    {
        cpu->r[3] = rd32(0x000e3b84u + + 0xc8u);
    }
L_000e3b80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3b88u, cpu->r[1], 0, 0);
    }
L_000e3b84:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e3b8cu, cpu->r[2], 0, 0);
    }
L_000e3b88:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000e3b8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e3b94u, cpu->r[3], 0, 0);
    }
L_000e3b90:;
    {
        cpu->r[14] = 0x000e3b94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3b94:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x2u);
    }
L_000e3b98:;
    {
        goto L_000e1694;
    }
L_000e3b9c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e3ba0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e3ba4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e3ba8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000e3bac:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e3bb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e3bb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e3bb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e3bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e3bc0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e3bc4:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000e3bc8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e3bcc:;
    {
        { uint32_t v = cpu->r[2] & 0x04000000u; set_nz(cpu, v); }
    }
L_000e3bd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e113c;
        }
    }
L_000e3bd4:;
    {
        goto L_000e36e8;
    }
L_000e3bd8:;
    {
        cpu->r[3] = 0x0000012cu;
    }
L_000e3bdc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_000e3be0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e3be4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e3be8:;
    {
        cpu->r[1] = rd32(0x000e3bf0u + + 0x60u);
    }
L_000e3bec:;
    {
        cpu->r[2] = rd32(0x000e3bf4u + + 0x60u);
    }
L_000e3bf0:;
    {
        cpu->r[3] = rd32(0x000e3bf8u + + 0x60u);
    }
L_000e3bf4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e3bfcu, cpu->r[1], 0, 0);
    }
L_000e3bf8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e3c00u, cpu->r[2], 0, 0);
    }
L_000e3bfc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000e3c00:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e3c08u, cpu->r[3], 0, 0);
    }
L_000e3c04:;
    {
        cpu->r[14] = 0x000e3c08u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e3c08:;
    {
        cpu->r[2] = rd16(cpu->r[5]);
    }
L_000e3c0c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e3c10:;
    {
        goto L_000e1d78;
    }
L_000e407c:;
    {
        cpu->r[1] = rd32(0x000e4084u + - 0x428u);
    }
L_000e4080:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4084:;
    {
        cpu->r[12] = rd32(0x000e408cu + - 0x42cu);
    }
L_000e4088:;
    {
        cpu->r[14] = 0x00000123u;
    }
L_000e408c:;
    {
        cpu->r[2] = rd32(0x000e4094u + - 0x430u);
    }
L_000e4090:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4098u, cpu->r[1], 0, 0);
    }
L_000e4094:;
    {
        cpu->r[3] = rd32(0x000e409cu + - 0x434u);
    }
L_000e4098:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e40a0u, cpu->r[12], 0, 0);
    }
L_000e409c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e40a4u, cpu->r[2], 0, 0);
    }
L_000e40a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e40a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e40acu, cpu->r[3], 0, 0);
    }
L_000e40a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e40ac:;
    {
        cpu->r[14] = 0x000e40b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e40b0:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_000e40b4:;
    {
        goto L_000e1d28;
    }
L_000e40b8:;
    {
        cpu->r[3] = 0x000001e9u;
    }
L_000e40bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e40c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000e40c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e40c8:;
    {
        cpu->r[1] = rd32(0x000e40d0u + - 0x464u);
    }
L_000e40cc:;
    {
        cpu->r[2] = rd32(0x000e40d4u + - 0x464u);
    }
L_000e40d0:;
    {
        cpu->r[3] = rd32(0x000e40d8u + - 0x464u);
    }
L_000e40d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e40dcu, cpu->r[1], 0, 0);
    }
L_000e40d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e40e0u, cpu->r[2], 0, 0);
    }
L_000e40dc:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000e40e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e40e8u, cpu->r[3], 0, 0);
    }
L_000e40e4:;
    {
        cpu->r[14] = 0x000e40e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e40e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x4u);
    }
L_000e40ec:;
    {
        goto L_000e16b4;
    }
L_000e40f0:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000e40f4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000e40f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e40fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000e4100:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e4104:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e4108:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000e410c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000e4110:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000e4114:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e4118:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000e411c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000e4120:;
    {
        { uint32_t v = cpu->r[2] & 0x04000000u; set_nz(cpu, v); }
    }
L_000e4124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e113c;
        }
    }
L_000e4128:;
    {
        goto L_000e36e8;
    }
L_000e412c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000e4130:;
    {
        cpu->r[14] = 0x000e4134u; fn_00149b48(cpu);
    }
L_000e4134:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e4138:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000e413c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_000e4140:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000e4144:;
    {
        goto L_000e2620;
    }
L_000e4148:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000e414c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000e4150:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e4158u + - 0x1b4u);
    }
L_000e4154:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e4158:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_000e415c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000e4160:;
    {
        cpu->r[14] = 0x000e4164u; fn_000b5b10(cpu);
    }
L_000e4164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000e4168:;
    {
        cpu->r[14] = 0x000e416cu; fn_000b5ba0(cpu);
    }
L_000e416c:;
    {
        goto L_000e2a9c;
    }
L_000e4170:;
    {
        cpu->r[1] = rd32(0x000e4178u + - 0x500u);
    }
L_000e4174:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4178:;
    {
        cpu->r[12] = rd32(0x000e4180u + - 0x504u);
    }
L_000e417c:;
    {
        cpu->r[14] = 0x00000150u;
    }
L_000e4180:;
    {
        cpu->r[2] = rd32(0x000e4188u + - 0x508u);
    }
L_000e4184:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e418cu, cpu->r[1], 0, 0);
    }
L_000e4188:;
    {
        cpu->r[3] = rd32(0x000e4190u + - 0x50cu);
    }
L_000e418c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4194u, cpu->r[12], 0, 0);
    }
L_000e4190:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4198u, cpu->r[2], 0, 0);
    }
L_000e4194:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4198:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e41a0u, cpu->r[3], 0, 0);
    }
L_000e419c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e41a0:;
    {
        cpu->r[14] = 0x000e41a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e41a4:;
    {
        goto L_000e1294;
    }
L_000e41a8:;
    {
        cpu->r[1] = rd32(0x000e41b0u + - 0x528u);
    }
L_000e41ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e41b0:;
    {
        cpu->r[12] = rd32(0x000e41b8u + - 0x52cu);
    }
L_000e41b4:;
    {
        cpu->r[14] = 0x000003f2u;
    }
L_000e41b8:;
    {
        cpu->r[2] = rd32(0x000e41c0u + - 0x530u);
    }
L_000e41bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e41c4u, cpu->r[1], 0, 0);
    }
L_000e41c0:;
    {
        cpu->r[3] = rd32(0x000e41c8u + - 0x534u);
    }
L_000e41c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e41ccu, cpu->r[12], 0, 0);
    }
L_000e41c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e41d0u, cpu->r[2], 0, 0);
    }
L_000e41cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e41d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e41d8u, cpu->r[3], 0, 0);
    }
L_000e41d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e41d8:;
    {
        cpu->r[14] = 0x000e41dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e41dc:;
    {
        goto L_000e2c0c;
    }
L_000e41e0:;
    {
        cpu->r[1] = rd32(0x000e41e8u + - 0x550u);
    }
L_000e41e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e41e8:;
    {
        cpu->r[12] = rd32(0x000e41f0u + - 0x554u);
    }
L_000e41ec:;
    {
        cpu->r[14] = 0x0000041du;
    }
L_000e41f0:;
    {
        cpu->r[2] = rd32(0x000e41f8u + - 0x558u);
    }
L_000e41f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e41fcu, cpu->r[1], 0, 0);
    }
L_000e41f8:;
    {
        cpu->r[3] = rd32(0x000e4200u + - 0x55cu);
    }
L_000e41fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4204u, cpu->r[12], 0, 0);
    }
L_000e4200:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4208u, cpu->r[2], 0, 0);
    }
L_000e4204:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4208:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4210u, cpu->r[3], 0, 0);
    }
L_000e420c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4210:;
    {
        cpu->r[14] = 0x000e4214u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4214:;
    {
        goto L_000e2e2c;
    }
L_000e4218:;
    {
        cpu->r[1] = rd32(0x000e4220u + - 0x578u);
    }
L_000e421c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4220:;
    {
        cpu->r[12] = rd32(0x000e4228u + - 0x57cu);
    }
L_000e4224:;
    {
        cpu->r[14] = 0x0000041au;
    }
L_000e4228:;
    {
        cpu->r[2] = rd32(0x000e4230u + - 0x580u);
    }
L_000e422c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4234u, cpu->r[1], 0, 0);
    }
L_000e4230:;
    {
        cpu->r[3] = rd32(0x000e4238u + - 0x584u);
    }
L_000e4234:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e423cu, cpu->r[12], 0, 0);
    }
L_000e4238:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4240u, cpu->r[2], 0, 0);
    }
L_000e423c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4240:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4248u, cpu->r[3], 0, 0);
    }
L_000e4244:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4248:;
    {
        cpu->r[14] = 0x000e424cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e424c:;
    {
        goto L_000e2e18;
    }
L_000e4250:;
    {
        cpu->r[1] = rd32(0x000e4258u + - 0x5a0u);
    }
L_000e4254:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4258:;
    {
        cpu->r[12] = rd32(0x000e4260u + - 0x5a4u);
    }
L_000e425c:;
    {
        cpu->r[14] = 0x000002acu;
    }
L_000e4260:;
    {
        cpu->r[2] = rd32(0x000e4268u + - 0x5a8u);
    }
L_000e4264:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e426cu, cpu->r[1], 0, 0);
    }
L_000e4268:;
    {
        cpu->r[3] = rd32(0x000e4270u + - 0x5acu);
    }
L_000e426c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4274u, cpu->r[12], 0, 0);
    }
L_000e4270:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4278u, cpu->r[2], 0, 0);
    }
L_000e4274:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4278:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4280u, cpu->r[3], 0, 0);
    }
L_000e427c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4280:;
    {
        cpu->r[14] = 0x000e4284u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4284:;
    {
        goto L_000e2d30;
    }
L_000e4288:;
    {
        cpu->r[1] = rd32(0x000e4290u + - 0x5c8u);
    }
L_000e428c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4290:;
    {
        cpu->r[12] = rd32(0x000e4298u + - 0x5ccu);
    }
L_000e4294:;
    {
        cpu->r[14] = 0x000003f5u;
    }
L_000e4298:;
    {
        cpu->r[2] = rd32(0x000e42a0u + - 0x5d0u);
    }
L_000e429c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e42a4u, cpu->r[1], 0, 0);
    }
L_000e42a0:;
    {
        cpu->r[3] = rd32(0x000e42a8u + - 0x5d4u);
    }
L_000e42a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e42acu, cpu->r[12], 0, 0);
    }
L_000e42a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e42b0u, cpu->r[2], 0, 0);
    }
L_000e42ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e42b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e42b8u, cpu->r[3], 0, 0);
    }
L_000e42b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e42b8:;
    {
        cpu->r[14] = 0x000e42bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e42bc:;
    {
        goto L_000e2c20;
    }
L_000e42c0:;
    {
        cpu->r[1] = rd32(0x000e42c8u + - 0x5f0u);
    }
L_000e42c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e42c8:;
    {
        cpu->r[12] = rd32(0x000e42d0u + - 0x5f4u);
    }
L_000e42cc:;
    {
        cpu->r[14] = 0x00000437u;
    }
L_000e42d0:;
    {
        cpu->r[2] = rd32(0x000e42d8u + - 0x5f8u);
    }
L_000e42d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e42dcu, cpu->r[1], 0, 0);
    }
L_000e42d8:;
    {
        cpu->r[3] = rd32(0x000e42e0u + - 0x5fcu);
    }
L_000e42dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e42e4u, cpu->r[12], 0, 0);
    }
L_000e42e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e42e8u, cpu->r[2], 0, 0);
    }
L_000e42e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e42e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e42f0u, cpu->r[3], 0, 0);
    }
L_000e42ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e42f0:;
    {
        cpu->r[14] = 0x000e42f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e42f4:;
    {
        goto L_000e31d4;
    }
L_000e42f8:;
    {
        cpu->r[1] = rd32(0x000e4300u + - 0x618u);
    }
L_000e42fc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4300:;
    {
        cpu->r[12] = rd32(0x000e4308u + - 0x61cu);
    }
L_000e4304:;
    {
        cpu->r[14] = 0x0000040du;
    }
L_000e4308:;
    {
        cpu->r[2] = rd32(0x000e4310u + - 0x620u);
    }
L_000e430c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4314u, cpu->r[1], 0, 0);
    }
L_000e4310:;
    {
        cpu->r[3] = rd32(0x000e4318u + - 0x624u);
    }
L_000e4314:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e431cu, cpu->r[12], 0, 0);
    }
L_000e4318:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4320u, cpu->r[2], 0, 0);
    }
L_000e431c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4320:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4328u, cpu->r[3], 0, 0);
    }
L_000e4324:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4328:;
    {
        cpu->r[14] = 0x000e432cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e432c:;
    {
        goto L_000e306c;
    }
L_000e4330:;
    {
        cpu->r[1] = rd32(0x000e4338u + - 0x640u);
    }
L_000e4334:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4338:;
    {
        cpu->r[12] = rd32(0x000e4340u + - 0x644u);
    }
L_000e433c:;
    {
        cpu->r[14] = 0x0000040au;
    }
L_000e4340:;
    {
        cpu->r[2] = rd32(0x000e4348u + - 0x648u);
    }
L_000e4344:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e434cu, cpu->r[1], 0, 0);
    }
L_000e4348:;
    {
        cpu->r[3] = rd32(0x000e4350u + - 0x64cu);
    }
L_000e434c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4354u, cpu->r[12], 0, 0);
    }
L_000e4350:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4358u, cpu->r[2], 0, 0);
    }
L_000e4354:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4358:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4360u, cpu->r[3], 0, 0);
    }
L_000e435c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4360:;
    {
        cpu->r[14] = 0x000e4364u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4364:;
    {
        goto L_000e3004;
    }
L_000e4368:;
    {
        cpu->r[1] = rd32(0x000e4370u + - 0x668u);
    }
L_000e436c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4370:;
    {
        cpu->r[12] = rd32(0x000e4378u + - 0x66cu);
    }
L_000e4374:;
    {
        cpu->r[14] = 0x00000407u;
    }
L_000e4378:;
    {
        cpu->r[2] = rd32(0x000e4380u + - 0x670u);
    }
L_000e437c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4384u, cpu->r[1], 0, 0);
    }
L_000e4380:;
    {
        cpu->r[3] = rd32(0x000e4388u + - 0x674u);
    }
L_000e4384:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e438cu, cpu->r[12], 0, 0);
    }
L_000e4388:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4390u, cpu->r[2], 0, 0);
    }
L_000e438c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4390:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4398u, cpu->r[3], 0, 0);
    }
L_000e4394:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4398:;
    {
        cpu->r[14] = 0x000e439cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e439c:;
    {
        goto L_000e2ff0;
    }
L_000e43a0:;
    {
        cpu->r[1] = rd32(0x000e43a8u + - 0x690u);
    }
L_000e43a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e43a8:;
    {
        cpu->r[12] = rd32(0x000e43b0u + - 0x694u);
    }
L_000e43ac:;
    {
        cpu->r[14] = 0x0000042eu;
    }
L_000e43b0:;
    {
        cpu->r[2] = rd32(0x000e43b8u + - 0x698u);
    }
L_000e43b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e43bcu, cpu->r[1], 0, 0);
    }
L_000e43b8:;
    {
        cpu->r[3] = rd32(0x000e43c0u + - 0x69cu);
    }
L_000e43bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e43c4u, cpu->r[12], 0, 0);
    }
L_000e43c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e43c8u, cpu->r[2], 0, 0);
    }
L_000e43c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e43c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e43d0u, cpu->r[3], 0, 0);
    }
L_000e43cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e43d0:;
    {
        cpu->r[14] = 0x000e43d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e43d4:;
    {
        goto L_000e2f5c;
    }
L_000e43d8:;
    {
        cpu->r[1] = rd32(0x000e43e0u + - 0x6b8u);
    }
L_000e43dc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e43e0:;
    {
        cpu->r[12] = rd32(0x000e43e8u + - 0x6bcu);
    }
L_000e43e4:;
    {
        cpu->r[14] = 0x0000042bu;
    }
L_000e43e8:;
    {
        cpu->r[2] = rd32(0x000e43f0u + - 0x6c0u);
    }
L_000e43ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e43f4u, cpu->r[1], 0, 0);
    }
L_000e43f0:;
    {
        cpu->r[3] = rd32(0x000e43f8u + - 0x6c4u);
    }
L_000e43f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e43fcu, cpu->r[12], 0, 0);
    }
L_000e43f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4400u, cpu->r[2], 0, 0);
    }
L_000e43fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4400:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4408u, cpu->r[3], 0, 0);
    }
L_000e4404:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4408:;
    {
        cpu->r[14] = 0x000e440cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e440c:;
    {
        goto L_000e2f48;
    }
L_000e4410:;
    {
        cpu->r[1] = rd32(0x000e4418u + - 0x6e0u);
    }
L_000e4414:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4418:;
    {
        cpu->r[12] = rd32(0x000e4420u + - 0x6e4u);
    }
L_000e441c:;
    {
        cpu->r[14] = 0x00000420u;
    }
L_000e4420:;
    {
        cpu->r[2] = rd32(0x000e4428u + - 0x6e8u);
    }
L_000e4424:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e442cu, cpu->r[1], 0, 0);
    }
L_000e4428:;
    {
        cpu->r[3] = rd32(0x000e4430u + - 0x6ecu);
    }
L_000e442c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4434u, cpu->r[12], 0, 0);
    }
L_000e4430:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4438u, cpu->r[2], 0, 0);
    }
L_000e4434:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4438:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4440u, cpu->r[3], 0, 0);
    }
L_000e443c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4440:;
    {
        cpu->r[14] = 0x000e4444u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4444:;
    {
        goto L_000e2e94;
    }
L_000e4448:;
    {
        cpu->r[1] = rd32(0x000e4450u + - 0x708u);
    }
L_000e444c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4450:;
    {
        cpu->r[12] = rd32(0x000e4458u + - 0x70cu);
    }
L_000e4454:;
    {
        cpu->r[14] = 0x000001d1u;
    }
L_000e4458:;
    {
        cpu->r[2] = rd32(0x000e4460u + - 0x710u);
    }
L_000e445c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4464u, cpu->r[1], 0, 0);
    }
L_000e4460:;
    {
        cpu->r[3] = rd32(0x000e4468u + - 0x714u);
    }
L_000e4464:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e446cu, cpu->r[12], 0, 0);
    }
L_000e4468:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4470u, cpu->r[2], 0, 0);
    }
L_000e446c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4470:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4478u, cpu->r[3], 0, 0);
    }
L_000e4474:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4478:;
    {
        cpu->r[14] = 0x000e447cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e447c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e4480:;
    {
        goto L_000e113c;
    }
L_000e4484:;
    {
        cpu->r[1] = rd32(0x000e448cu + - 0x734u);
    }
L_000e4488:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e448c:;
    {
        cpu->r[12] = rd32(0x000e4494u + - 0x738u);
    }
L_000e4490:;
    {
        cpu->r[14] = 0x000001ceu;
    }
L_000e4494:;
    {
        cpu->r[2] = rd32(0x000e449cu + - 0x73cu);
    }
L_000e4498:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e44a0u, cpu->r[1], 0, 0);
    }
L_000e449c:;
    {
        cpu->r[3] = rd32(0x000e44a4u + - 0x740u);
    }
L_000e44a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e44a8u, cpu->r[12], 0, 0);
    }
L_000e44a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e44acu, cpu->r[2], 0, 0);
    }
L_000e44a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e44ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e44b4u, cpu->r[3], 0, 0);
    }
L_000e44b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e44b4:;
    {
        cpu->r[14] = 0x000e44b8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e44b8:;
    {
        goto L_000e1624;
    }
L_000e44bc:;
    {
        cpu->r[1] = rd32(0x000e44c4u + - 0x75cu);
    }
L_000e44c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e44c4:;
    {
        cpu->r[12] = rd32(0x000e44ccu + - 0x760u);
    }
L_000e44c8:;
    {
        cpu->r[14] = 0x0000028cu;
    }
L_000e44cc:;
    {
        cpu->r[2] = rd32(0x000e44d4u + - 0x764u);
    }
L_000e44d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e44d8u, cpu->r[1], 0, 0);
    }
L_000e44d4:;
    {
        cpu->r[3] = rd32(0x000e44dcu + - 0x768u);
    }
L_000e44d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e44e0u, cpu->r[12], 0, 0);
    }
L_000e44dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e44e4u, cpu->r[2], 0, 0);
    }
L_000e44e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e44e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e44ecu, cpu->r[3], 0, 0);
    }
L_000e44e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e44ec:;
    {
        cpu->r[14] = 0x000e44f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e44f0:;
    {
        goto L_000e25c0;
    }
L_000e44f4:;
    {
        cpu->r[1] = rd32(0x000e44fcu + - 0x784u);
    }
L_000e44f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e44fc:;
    {
        cpu->r[12] = rd32(0x000e4504u + - 0x788u);
    }
L_000e4500:;
    {
        cpu->r[14] = 0x0000026bu;
    }
L_000e4504:;
    {
        cpu->r[2] = rd32(0x000e450cu + - 0x78cu);
    }
L_000e4508:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4510u, cpu->r[1], 0, 0);
    }
L_000e450c:;
    {
        cpu->r[3] = rd32(0x000e4514u + - 0x790u);
    }
L_000e4510:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4518u, cpu->r[12], 0, 0);
    }
L_000e4514:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e451cu, cpu->r[2], 0, 0);
    }
L_000e4518:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e451c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4524u, cpu->r[3], 0, 0);
    }
L_000e4520:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4524:;
    {
        cpu->r[14] = 0x000e4528u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4528:;
    {
        goto L_000e2514;
    }
L_000e452c:;
    {
        cpu->r[1] = rd32(0x000e4534u + - 0x7acu);
    }
L_000e4530:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4534:;
    {
        cpu->r[12] = rd32(0x000e453cu + - 0x7b0u);
    }
L_000e4538:;
    {
        cpu->r[14] = 0x00000268u;
    }
L_000e453c:;
    {
        cpu->r[2] = rd32(0x000e4544u + - 0x7b4u);
    }
L_000e4540:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4548u, cpu->r[1], 0, 0);
    }
L_000e4544:;
    {
        cpu->r[3] = rd32(0x000e454cu + - 0x7b8u);
    }
L_000e4548:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4550u, cpu->r[12], 0, 0);
    }
L_000e454c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4554u, cpu->r[2], 0, 0);
    }
L_000e4550:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4554:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e455cu, cpu->r[3], 0, 0);
    }
L_000e4558:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e455c:;
    {
        cpu->r[14] = 0x000e4560u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4560:;
    {
        goto L_000e24ac;
    }
L_000e4564:;
    {
        cpu->r[1] = rd32(0x000e456cu + - 0x7d4u);
    }
L_000e4568:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e456c:;
    {
        cpu->r[12] = rd32(0x000e4574u + - 0x7d8u);
    }
L_000e4570:;
    {
        cpu->r[14] = 0x00000265u;
    }
L_000e4574:;
    {
        cpu->r[2] = rd32(0x000e457cu + - 0x7dcu);
    }
L_000e4578:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4580u, cpu->r[1], 0, 0);
    }
L_000e457c:;
    {
        cpu->r[3] = rd32(0x000e4584u + - 0x7e0u);
    }
L_000e4580:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4588u, cpu->r[12], 0, 0);
    }
L_000e4584:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e458cu, cpu->r[2], 0, 0);
    }
L_000e4588:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e458c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4594u, cpu->r[3], 0, 0);
    }
L_000e4590:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4594:;
    {
        cpu->r[14] = 0x000e4598u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4598:;
    {
        goto L_000e2498;
    }
L_000e459c:;
    {
        cpu->r[1] = rd32(0x000e45a4u + - 0x7fcu);
    }
L_000e45a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e45a4:;
    {
        cpu->r[12] = rd32(0x000e45acu + - 0x800u);
    }
L_000e45a8:;
    {
        cpu->r[14] = 0x0000027du;
    }
L_000e45ac:;
    {
        cpu->r[2] = rd32(0x000e45b4u + - 0x804u);
    }
L_000e45b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e45b8u, cpu->r[1], 0, 0);
    }
L_000e45b4:;
    {
        cpu->r[3] = rd32(0x000e45bcu + - 0x808u);
    }
L_000e45b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e45c0u, cpu->r[12], 0, 0);
    }
L_000e45bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e45c4u, cpu->r[2], 0, 0);
    }
L_000e45c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e45c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e45ccu, cpu->r[3], 0, 0);
    }
L_000e45c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e45cc:;
    {
        cpu->r[14] = 0x000e45d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e45d0:;
    {
        goto L_000e23e4;
    }
L_000e45d4:;
    {
        cpu->r[1] = rd32(0x000e45dcu + - 0x824u);
    }
L_000e45d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e45dc:;
    {
        cpu->r[12] = rd32(0x000e45e4u + - 0x828u);
    }
L_000e45e0:;
    {
        cpu->r[14] = 0x0000027au;
    }
L_000e45e4:;
    {
        cpu->r[2] = rd32(0x000e45ecu + - 0x82cu);
    }
L_000e45e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e45f0u, cpu->r[1], 0, 0);
    }
L_000e45ec:;
    {
        cpu->r[3] = rd32(0x000e45f4u + - 0x830u);
    }
L_000e45f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e45f8u, cpu->r[12], 0, 0);
    }
L_000e45f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e45fcu, cpu->r[2], 0, 0);
    }
L_000e45f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e45fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4604u, cpu->r[3], 0, 0);
    }
L_000e4600:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4604:;
    {
        cpu->r[14] = 0x000e4608u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4608:;
    {
        goto L_000e237c;
    }
L_000e460c:;
    {
        cpu->r[1] = rd32(0x000e4614u + - 0x84cu);
    }
L_000e4610:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4614:;
    {
        cpu->r[12] = rd32(0x000e461cu + - 0x850u);
    }
L_000e4618:;
    {
        cpu->r[14] = 0x00000277u;
    }
L_000e461c:;
    {
        cpu->r[2] = rd32(0x000e4624u + - 0x854u);
    }
L_000e4620:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4628u, cpu->r[1], 0, 0);
    }
L_000e4624:;
    {
        cpu->r[3] = rd32(0x000e462cu + - 0x858u);
    }
L_000e4628:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4630u, cpu->r[12], 0, 0);
    }
L_000e462c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4634u, cpu->r[2], 0, 0);
    }
L_000e4630:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4634:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e463cu, cpu->r[3], 0, 0);
    }
L_000e4638:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e463c:;
    {
        cpu->r[14] = 0x000e4640u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4640:;
    {
        goto L_000e2368;
    }
L_000e4644:;
    {
        cpu->r[1] = rd32(0x000e464cu + - 0x874u);
    }
L_000e4648:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e464c:;
    {
        cpu->r[12] = rd32(0x000e4654u + - 0x878u);
    }
L_000e4650:;
    {
        cpu->r[14] = 0x000002a1u;
    }
L_000e4654:;
    {
        cpu->r[2] = rd32(0x000e465cu + - 0x87cu);
    }
L_000e4658:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4660u, cpu->r[1], 0, 0);
    }
L_000e465c:;
    {
        cpu->r[3] = rd32(0x000e4664u + - 0x880u);
    }
L_000e4660:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4668u, cpu->r[12], 0, 0);
    }
L_000e4664:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e466cu, cpu->r[2], 0, 0);
    }
L_000e4668:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e466c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4674u, cpu->r[3], 0, 0);
    }
L_000e4670:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4674:;
    {
        cpu->r[14] = 0x000e4678u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4678:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e467c:;
    {
        goto L_000e113c;
    }
L_000e4680:;
    {
        cpu->r[1] = rd32(0x000e4688u + - 0x8a0u);
    }
L_000e4684:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4688:;
    {
        cpu->r[12] = rd32(0x000e4690u + - 0x8a4u);
    }
L_000e468c:;
    {
        cpu->r[14] = 0x0000029eu;
    }
L_000e4690:;
    {
        cpu->r[2] = rd32(0x000e4698u + - 0x8a8u);
    }
L_000e4694:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e469cu, cpu->r[1], 0, 0);
    }
L_000e4698:;
    {
        cpu->r[3] = rd32(0x000e46a0u + - 0x8acu);
    }
L_000e469c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e46a4u, cpu->r[12], 0, 0);
    }
L_000e46a0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e46a8u, cpu->r[2], 0, 0);
    }
L_000e46a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e46a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e46b0u, cpu->r[3], 0, 0);
    }
L_000e46ac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e46b0:;
    {
        cpu->r[14] = 0x000e46b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e46b4:;
    {
        goto L_000e2258;
    }
L_000e46b8:;
    {
        cpu->r[1] = rd32(0x000e46c0u + - 0x8c8u);
    }
L_000e46bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e46c0:;
    {
        cpu->r[12] = rd32(0x000e46c8u + - 0x8ccu);
    }
L_000e46c4:;
    {
        cpu->r[14] = 0x00000221u;
    }
L_000e46c8:;
    {
        cpu->r[2] = rd32(0x000e46d0u + - 0x8d0u);
    }
L_000e46cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e46d4u, cpu->r[1], 0, 0);
    }
L_000e46d0:;
    {
        cpu->r[3] = rd32(0x000e46d8u + - 0x8d4u);
    }
L_000e46d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e46dcu, cpu->r[12], 0, 0);
    }
L_000e46d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e46e0u, cpu->r[2], 0, 0);
    }
L_000e46dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e46e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e46e8u, cpu->r[3], 0, 0);
    }
L_000e46e4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e46e8:;
    {
        cpu->r[14] = 0x000e46ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e46ec:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e46f0:;
    {
        goto L_000e113c;
    }
L_000e46f4:;
    {
        cpu->r[1] = rd32(0x000e46fcu + - 0x8f4u);
    }
L_000e46f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e46fc:;
    {
        cpu->r[12] = rd32(0x000e4704u + - 0x8f8u);
    }
L_000e4700:;
    {
        cpu->r[14] = 0x0000028fu;
    }
L_000e4704:;
    {
        cpu->r[2] = rd32(0x000e470cu + - 0x8fcu);
    }
L_000e4708:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4710u, cpu->r[1], 0, 0);
    }
L_000e470c:;
    {
        cpu->r[3] = rd32(0x000e4714u + - 0x900u);
    }
L_000e4710:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4718u, cpu->r[12], 0, 0);
    }
L_000e4714:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e471cu, cpu->r[2], 0, 0);
    }
L_000e4718:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e471c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4724u, cpu->r[3], 0, 0);
    }
L_000e4720:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4724:;
    {
        cpu->r[14] = 0x000e4728u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4728:;
    {
        goto L_000e25d4;
    }
L_000e472c:;
    {
        cpu->r[1] = rd32(0x000e4734u + - 0x91cu);
    }
L_000e4730:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4734:;
    {
        cpu->r[12] = rd32(0x000e473cu + - 0x920u);
    }
L_000e4738:;
    {
        cpu->r[14] = 0x000000f4u;
    }
L_000e473c:;
    {
        cpu->r[2] = rd32(0x000e4744u + - 0x924u);
    }
L_000e4740:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4748u, cpu->r[1], 0, 0);
    }
L_000e4744:;
    {
        cpu->r[3] = rd32(0x000e474cu + - 0x928u);
    }
L_000e4748:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4750u, cpu->r[12], 0, 0);
    }
L_000e474c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4754u, cpu->r[2], 0, 0);
    }
L_000e4750:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4754:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e475cu, cpu->r[3], 0, 0);
    }
L_000e4758:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e475c:;
    {
        cpu->r[14] = 0x000e4760u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4760:;
    {
        goto L_000e1968;
    }
L_000e4764:;
    {
        cpu->r[1] = rd32(0x000e476cu + - 0x944u);
    }
L_000e4768:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e476c:;
    {
        cpu->r[12] = rd32(0x000e4774u + - 0x948u);
    }
L_000e4770:;
    {
        cpu->r[14] = 0x00000465u;
    }
L_000e4774:;
    {
        cpu->r[2] = rd32(0x000e477cu + - 0x94cu);
    }
L_000e4778:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4780u, cpu->r[1], 0, 0);
    }
L_000e477c:;
    {
        cpu->r[3] = rd32(0x000e4784u + - 0x950u);
    }
L_000e4780:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4788u, cpu->r[12], 0, 0);
    }
L_000e4784:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e478cu, cpu->r[2], 0, 0);
    }
L_000e4788:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e478c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4794u, cpu->r[3], 0, 0);
    }
L_000e4790:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4794:;
    {
        cpu->r[14] = 0x000e4798u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4798:;
    {
        goto L_000e34c4;
    }
L_000e479c:;
    {
        cpu->r[1] = rd32(0x000e47a4u + - 0x96cu);
    }
L_000e47a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e47a4:;
    {
        cpu->r[12] = rd32(0x000e47acu + - 0x970u);
    }
L_000e47a8:;
    {
        cpu->r[14] = 0x00000459u;
    }
L_000e47ac:;
    {
        cpu->r[2] = rd32(0x000e47b4u + - 0x974u);
    }
L_000e47b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e47b8u, cpu->r[1], 0, 0);
    }
L_000e47b4:;
    {
        cpu->r[3] = rd32(0x000e47bcu + - 0x978u);
    }
L_000e47b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e47c0u, cpu->r[12], 0, 0);
    }
L_000e47bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e47c4u, cpu->r[2], 0, 0);
    }
L_000e47c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e47c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e47ccu, cpu->r[3], 0, 0);
    }
L_000e47c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e47cc:;
    {
        cpu->r[14] = 0x000e47d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e47d0:;
    {
        goto L_000e3428;
    }
L_000e47d4:;
    {
        cpu->r[1] = rd32(0x000e47dcu + - 0x994u);
    }
L_000e47d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e47dc:;
    {
        cpu->r[12] = rd32(0x000e47e4u + - 0x998u);
    }
L_000e47e0:;
    {
        cpu->r[14] = 0x00000456u;
    }
L_000e47e4:;
    {
        cpu->r[2] = rd32(0x000e47ecu + - 0x99cu);
    }
L_000e47e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e47f0u, cpu->r[1], 0, 0);
    }
L_000e47ec:;
    {
        cpu->r[3] = rd32(0x000e47f4u + - 0x9a0u);
    }
L_000e47f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e47f8u, cpu->r[12], 0, 0);
    }
L_000e47f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e47fcu, cpu->r[2], 0, 0);
    }
L_000e47f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e47fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4804u, cpu->r[3], 0, 0);
    }
L_000e4800:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4804:;
    {
        cpu->r[14] = 0x000e4808u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4808:;
    {
        goto L_000e3414;
    }
L_000e480c:;
    {
        cpu->r[1] = rd32(0x000e4814u + - 0x9bcu);
    }
L_000e4810:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4814:;
    {
        cpu->r[12] = rd32(0x000e481cu + - 0x9c0u);
    }
L_000e4818:;
    {
        cpu->r[14] = 0x0000044cu;
    }
L_000e481c:;
    {
        cpu->r[2] = rd32(0x000e4824u + - 0x9c4u);
    }
L_000e4820:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4828u, cpu->r[1], 0, 0);
    }
L_000e4824:;
    {
        cpu->r[3] = rd32(0x000e482cu + - 0x9c8u);
    }
L_000e4828:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4830u, cpu->r[12], 0, 0);
    }
L_000e482c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4834u, cpu->r[2], 0, 0);
    }
L_000e4830:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4834:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e483cu, cpu->r[3], 0, 0);
    }
L_000e4838:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e483c:;
    {
        cpu->r[14] = 0x000e4840u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4840:;
    {
        goto L_000e336c;
    }
L_000e4844:;
    {
        cpu->r[1] = rd32(0x000e484cu + - 0x9e4u);
    }
L_000e4848:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e484c:;
    {
        cpu->r[12] = rd32(0x000e4854u + - 0x9e8u);
    }
L_000e4850:;
    {
        cpu->r[14] = 0x00000449u;
    }
L_000e4854:;
    {
        cpu->r[2] = rd32(0x000e485cu + - 0x9ecu);
    }
L_000e4858:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4860u, cpu->r[1], 0, 0);
    }
L_000e485c:;
    {
        cpu->r[3] = rd32(0x000e4864u + - 0x9f0u);
    }
L_000e4860:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4868u, cpu->r[12], 0, 0);
    }
L_000e4864:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e486cu, cpu->r[2], 0, 0);
    }
L_000e4868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e486c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4874u, cpu->r[3], 0, 0);
    }
L_000e4870:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4874:;
    {
        cpu->r[14] = 0x000e4878u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4878:;
    {
        goto L_000e3304;
    }
L_000e487c:;
    {
        cpu->r[1] = rd32(0x000e4884u + - 0xa0cu);
    }
L_000e4880:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4884:;
    {
        cpu->r[12] = rd32(0x000e488cu + - 0xa10u);
    }
L_000e4888:;
    {
        cpu->r[14] = 0x00000446u;
    }
L_000e488c:;
    {
        cpu->r[2] = rd32(0x000e4894u + - 0xa14u);
    }
L_000e4890:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4898u, cpu->r[1], 0, 0);
    }
L_000e4894:;
    {
        cpu->r[3] = rd32(0x000e489cu + - 0xa18u);
    }
L_000e4898:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e48a0u, cpu->r[12], 0, 0);
    }
L_000e489c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e48a4u, cpu->r[2], 0, 0);
    }
L_000e48a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e48a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e48acu, cpu->r[3], 0, 0);
    }
L_000e48a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e48ac:;
    {
        cpu->r[14] = 0x000e48b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e48b0:;
    {
        goto L_000e32f0;
    }
L_000e48b4:;
    {
        cpu->r[1] = rd32(0x000e48bcu + - 0xa34u);
    }
L_000e48b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e48bc:;
    {
        cpu->r[12] = rd32(0x000e48c4u + - 0xa38u);
    }
L_000e48c0:;
    {
        cpu->r[14] = 0x0000043du;
    }
L_000e48c4:;
    {
        cpu->r[2] = rd32(0x000e48ccu + - 0xa3cu);
    }
L_000e48c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e48d0u, cpu->r[1], 0, 0);
    }
L_000e48cc:;
    {
        cpu->r[3] = rd32(0x000e48d4u + - 0xa40u);
    }
L_000e48d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e48d8u, cpu->r[12], 0, 0);
    }
L_000e48d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e48dcu, cpu->r[2], 0, 0);
    }
L_000e48d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e48dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e48e4u, cpu->r[3], 0, 0);
    }
L_000e48e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e48e4:;
    {
        cpu->r[14] = 0x000e48e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e48e8:;
    {
        goto L_000e3250;
    }
L_000e48ec:;
    {
        cpu->r[1] = rd32(0x000e48f4u + - 0xa5cu);
    }
L_000e48f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e48f4:;
    {
        cpu->r[12] = rd32(0x000e48fcu + - 0xa60u);
    }
L_000e48f8:;
    {
        cpu->r[14] = 0x0000043au;
    }
L_000e48fc:;
    {
        cpu->r[2] = rd32(0x000e4904u + - 0xa64u);
    }
L_000e4900:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4908u, cpu->r[1], 0, 0);
    }
L_000e4904:;
    {
        cpu->r[3] = rd32(0x000e490cu + - 0xa68u);
    }
L_000e4908:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4910u, cpu->r[12], 0, 0);
    }
L_000e490c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4914u, cpu->r[2], 0, 0);
    }
L_000e4910:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4914:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e491cu, cpu->r[3], 0, 0);
    }
L_000e4918:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e491c:;
    {
        cpu->r[14] = 0x000e4920u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4920:;
    {
        goto L_000e31e8;
    }
L_000e4924:;
    {
        cpu->r[1] = rd32(0x000e492cu + - 0xa84u);
    }
L_000e4928:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e492c:;
    {
        cpu->r[12] = rd32(0x000e4934u + - 0xa88u);
    }
L_000e4930:;
    {
        cpu->r[14] = 0x0000021eu;
    }
L_000e4934:;
    {
        cpu->r[2] = rd32(0x000e493cu + - 0xa8cu);
    }
L_000e4938:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4940u, cpu->r[1], 0, 0);
    }
L_000e493c:;
    {
        cpu->r[3] = rd32(0x000e4944u + - 0xa90u);
    }
L_000e4940:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4948u, cpu->r[12], 0, 0);
    }
L_000e4944:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e494cu, cpu->r[2], 0, 0);
    }
L_000e4948:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e494c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4954u, cpu->r[3], 0, 0);
    }
L_000e4950:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4954:;
    {
        cpu->r[14] = 0x000e4958u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4958:;
    {
        goto L_000e21c0;
    }
L_000e495c:;
    {
        cpu->r[1] = rd32(0x000e4964u + - 0xaacu);
    }
L_000e4960:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4964:;
    {
        cpu->r[12] = rd32(0x000e496cu + - 0xab0u);
    }
L_000e4968:;
    {
        cpu->r[14] = 0x00000245u;
    }
L_000e496c:;
    {
        cpu->r[2] = rd32(0x000e4974u + - 0xab4u);
    }
L_000e4970:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4978u, cpu->r[1], 0, 0);
    }
L_000e4974:;
    {
        cpu->r[3] = rd32(0x000e497cu + - 0xab8u);
    }
L_000e4978:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4980u, cpu->r[12], 0, 0);
    }
L_000e497c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4984u, cpu->r[2], 0, 0);
    }
L_000e4980:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4984:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e498cu, cpu->r[3], 0, 0);
    }
L_000e4988:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e498c:;
    {
        cpu->r[14] = 0x000e4990u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4990:;
    {
        goto L_000e2058;
    }
L_000e4994:;
    {
        cpu->r[1] = rd32(0x000e499cu + - 0xad4u);
    }
L_000e4998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e499c:;
    {
        cpu->r[12] = rd32(0x000e49a4u + - 0xad8u);
    }
L_000e49a0:;
    {
        cpu->r[14] = 0x00000242u;
    }
L_000e49a4:;
    {
        cpu->r[2] = rd32(0x000e49acu + - 0xadcu);
    }
L_000e49a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e49b0u, cpu->r[1], 0, 0);
    }
L_000e49ac:;
    {
        cpu->r[3] = rd32(0x000e49b4u + - 0xae0u);
    }
L_000e49b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e49b8u, cpu->r[12], 0, 0);
    }
L_000e49b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e49bcu, cpu->r[2], 0, 0);
    }
L_000e49b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e49bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e49c4u, cpu->r[3], 0, 0);
    }
L_000e49c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e49c4:;
    {
        cpu->r[14] = 0x000e49c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e49c8:;
    {
        goto L_000e1ff0;
    }
L_000e49cc:;
    {
        cpu->r[1] = rd32(0x000e49d4u + - 0xafcu);
    }
L_000e49d0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e49d4:;
    {
        cpu->r[12] = rd32(0x000e49dcu + - 0xb00u);
    }
L_000e49d8:;
    {
        cpu->r[14] = 0x0000023fu;
    }
L_000e49dc:;
    {
        cpu->r[2] = rd32(0x000e49e4u + - 0xb04u);
    }
L_000e49e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e49e8u, cpu->r[1], 0, 0);
    }
L_000e49e4:;
    {
        cpu->r[3] = rd32(0x000e49ecu + - 0xb08u);
    }
L_000e49e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e49f0u, cpu->r[12], 0, 0);
    }
L_000e49ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e49f4u, cpu->r[2], 0, 0);
    }
L_000e49f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e49f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e49fcu, cpu->r[3], 0, 0);
    }
L_000e49f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e49fc:;
    {
        cpu->r[14] = 0x000e4a00u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4a00:;
    {
        goto L_000e1fdc;
    }
L_000e4a04:;
    {
        cpu->r[1] = rd32(0x000e4a0cu + - 0xb24u);
    }
L_000e4a08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4a0c:;
    {
        cpu->r[12] = rd32(0x000e4a14u + - 0xb28u);
    }
L_000e4a10:;
    {
        cpu->r[14] = 0x00000233u;
    }
L_000e4a14:;
    {
        cpu->r[2] = rd32(0x000e4a1cu + - 0xb2cu);
    }
L_000e4a18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4a20u, cpu->r[1], 0, 0);
    }
L_000e4a1c:;
    {
        cpu->r[3] = rd32(0x000e4a24u + - 0xb30u);
    }
L_000e4a20:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4a28u, cpu->r[12], 0, 0);
    }
L_000e4a24:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4a2cu, cpu->r[2], 0, 0);
    }
L_000e4a28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4a2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4a34u, cpu->r[3], 0, 0);
    }
L_000e4a30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4a34:;
    {
        cpu->r[14] = 0x000e4a38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4a38:;
    {
        goto L_000e1108;
    }
L_000e4a3c:;
    {
        cpu->r[1] = rd32(0x000e4a44u + - 0xb4cu);
    }
L_000e4a40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4a44:;
    {
        cpu->r[12] = rd32(0x000e4a4cu + - 0xb50u);
    }
L_000e4a48:;
    {
        cpu->r[14] = 0x00000230u;
    }
L_000e4a4c:;
    {
        cpu->r[2] = rd32(0x000e4a54u + - 0xb54u);
    }
L_000e4a50:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4a58u, cpu->r[1], 0, 0);
    }
L_000e4a54:;
    {
        cpu->r[3] = rd32(0x000e4a5cu + - 0xb58u);
    }
L_000e4a58:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4a60u, cpu->r[12], 0, 0);
    }
L_000e4a5c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4a64u, cpu->r[2], 0, 0);
    }
L_000e4a60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4a64:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4a6cu, cpu->r[3], 0, 0);
    }
L_000e4a68:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4a6c:;
    {
        cpu->r[14] = 0x000e4a70u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4a70:;
    {
        goto L_000e10a0;
    }
L_000e4a74:;
    {
        cpu->r[1] = rd32(0x000e4a7cu + - 0xb74u);
    }
L_000e4a78:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4a7c:;
    {
        cpu->r[12] = rd32(0x000e4a84u + - 0xb78u);
    }
L_000e4a80:;
    {
        cpu->r[14] = 0x0000022du;
    }
L_000e4a84:;
    {
        cpu->r[2] = rd32(0x000e4a8cu + - 0xb7cu);
    }
L_000e4a88:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4a90u, cpu->r[1], 0, 0);
    }
L_000e4a8c:;
    {
        cpu->r[3] = rd32(0x000e4a94u + - 0xb80u);
    }
L_000e4a90:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4a98u, cpu->r[12], 0, 0);
    }
L_000e4a94:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4a9cu, cpu->r[2], 0, 0);
    }
L_000e4a98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4a9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4aa4u, cpu->r[3], 0, 0);
    }
L_000e4aa0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4aa4:;
    {
        cpu->r[14] = 0x000e4aa8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4aa8:;
    {
        goto L_000e108c;
    }
L_000e4aac:;
    {
        cpu->r[1] = rd32(0x000e4ab4u + - 0xb9cu);
    }
L_000e4ab0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4ab4:;
    {
        cpu->r[12] = rd32(0x000e4abcu + - 0xba0u);
    }
L_000e4ab8:;
    {
        cpu->r[14] = 0x00000258u;
    }
L_000e4abc:;
    {
        cpu->r[2] = rd32(0x000e4ac4u + - 0xba4u);
    }
L_000e4ac0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4ac8u, cpu->r[1], 0, 0);
    }
L_000e4ac4:;
    {
        cpu->r[3] = rd32(0x000e4accu + - 0xba8u);
    }
L_000e4ac8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4ad0u, cpu->r[12], 0, 0);
    }
L_000e4acc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4ad4u, cpu->r[2], 0, 0);
    }
L_000e4ad0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4ad4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4adcu, cpu->r[3], 0, 0);
    }
L_000e4ad8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4adc:;
    {
        cpu->r[14] = 0x000e4ae0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4ae0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e4ae4:;
    {
        goto L_000e113c;
    }
L_000e4ae8:;
    {
        cpu->r[1] = rd32(0x000e4af0u + - 0xbc8u);
    }
L_000e4aec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4af0:;
    {
        cpu->r[12] = rd32(0x000e4af8u + - 0xbccu);
    }
L_000e4af4:;
    {
        cpu->r[14] = 0x00000468u;
    }
L_000e4af8:;
    {
        cpu->r[2] = rd32(0x000e4b00u + - 0xbd0u);
    }
L_000e4afc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4b04u, cpu->r[1], 0, 0);
    }
L_000e4b00:;
    {
        cpu->r[3] = rd32(0x000e4b08u + - 0xbd4u);
    }
L_000e4b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4b0cu, cpu->r[12], 0, 0);
    }
L_000e4b08:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4b10u, cpu->r[2], 0, 0);
    }
L_000e4b0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4b10:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4b18u, cpu->r[3], 0, 0);
    }
L_000e4b14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4b18:;
    {
        cpu->r[14] = 0x000e4b1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4b1c:;
    {
        goto L_000e34d8;
    }
L_000e4b20:;
    {
        cpu->r[1] = rd32(0x000e4b28u + - 0xbf0u);
    }
L_000e4b24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4b28:;
    {
        cpu->r[12] = rd32(0x000e4b30u + - 0xbf4u);
    }
L_000e4b2c:;
    {
        cpu->r[14] = 0x000001bau;
    }
L_000e4b30:;
    {
        cpu->r[2] = rd32(0x000e4b38u + - 0xbf8u);
    }
L_000e4b34:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4b3cu, cpu->r[1], 0, 0);
    }
L_000e4b38:;
    {
        cpu->r[3] = rd32(0x000e4b40u + - 0xbfcu);
    }
L_000e4b3c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4b44u, cpu->r[12], 0, 0);
    }
L_000e4b40:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4b48u, cpu->r[2], 0, 0);
    }
L_000e4b44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4b48:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4b50u, cpu->r[3], 0, 0);
    }
L_000e4b4c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4b50:;
    {
        cpu->r[14] = 0x000e4b54u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4b54:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e4b58:;
    {
        goto L_000e113c;
    }
L_000e4b5c:;
    {
        cpu->r[1] = rd32(0x000e4b64u + - 0xc1cu);
    }
L_000e4b60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4b64:;
    {
        cpu->r[12] = rd32(0x000e4b6cu + - 0xc20u);
    }
L_000e4b68:;
    {
        cpu->r[14] = 0x000000e8u;
    }
L_000e4b6c:;
    {
        cpu->r[2] = rd32(0x000e4b74u + - 0xc24u);
    }
L_000e4b70:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4b78u, cpu->r[1], 0, 0);
    }
L_000e4b74:;
    {
        cpu->r[3] = rd32(0x000e4b7cu + - 0xc28u);
    }
L_000e4b78:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4b80u, cpu->r[12], 0, 0);
    }
L_000e4b7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4b84u, cpu->r[2], 0, 0);
    }
L_000e4b80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4b84:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4b8cu, cpu->r[3], 0, 0);
    }
L_000e4b88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4b8c:;
    {
        cpu->r[14] = 0x000e4b90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4b90:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e4b94:;
    {
        goto L_000e1b2c;
    }
L_000e4b98:;
    {
        cpu->r[1] = rd32(0x000e4ba0u + - 0xc48u);
    }
L_000e4b9c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4ba0:;
    {
        cpu->r[12] = rd32(0x000e4ba8u + - 0xc4cu);
    }
L_000e4ba4:;
    {
        cpu->r[14] = 0x000000deu;
    }
L_000e4ba8:;
    {
        cpu->r[2] = rd32(0x000e4bb0u + - 0xc50u);
    }
L_000e4bac:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4bb4u, cpu->r[1], 0, 0);
    }
L_000e4bb0:;
    {
        cpu->r[3] = rd32(0x000e4bb8u + - 0xc54u);
    }
L_000e4bb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4bbcu, cpu->r[12], 0, 0);
    }
L_000e4bb8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4bc0u, cpu->r[2], 0, 0);
    }
L_000e4bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4bc0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4bc8u, cpu->r[3], 0, 0);
    }
L_000e4bc4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4bc8:;
    {
        cpu->r[14] = 0x000e4bccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4bcc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x8u);
    }
L_000e4bd0:;
    {
        goto L_000e1ad8;
    }
L_000e4bd4:;
    {
        cpu->r[1] = rd32(0x000e4bdcu + - 0xc74u);
    }
L_000e4bd8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4bdc:;
    {
        cpu->r[12] = rd32(0x000e4be4u + - 0xc78u);
    }
L_000e4be0:;
    {
        cpu->r[14] = 0x00000255u;
    }
L_000e4be4:;
    {
        cpu->r[2] = rd32(0x000e4becu + - 0xc7cu);
    }
L_000e4be8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4bf0u, cpu->r[1], 0, 0);
    }
L_000e4bec:;
    {
        cpu->r[3] = rd32(0x000e4bf4u + - 0xc80u);
    }
L_000e4bf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4bf8u, cpu->r[12], 0, 0);
    }
L_000e4bf4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4bfcu, cpu->r[2], 0, 0);
    }
L_000e4bf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4bfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4c04u, cpu->r[3], 0, 0);
    }
L_000e4c00:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4c04:;
    {
        cpu->r[14] = 0x000e4c08u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4c08:;
    {
        goto L_000e1f38;
    }
L_000e4c0c:;
    {
        cpu->r[1] = rd32(0x000e4c14u + - 0xc9cu);
    }
L_000e4c10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4c14:;
    {
        cpu->r[12] = rd32(0x000e4c1cu + - 0xca0u);
    }
L_000e4c18:;
    {
        cpu->r[14] = 0x00000213u;
    }
L_000e4c1c:;
    {
        cpu->r[2] = rd32(0x000e4c24u + - 0xca4u);
    }
L_000e4c20:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4c28u, cpu->r[1], 0, 0);
    }
L_000e4c24:;
    {
        cpu->r[3] = rd32(0x000e4c2cu + - 0xca8u);
    }
L_000e4c28:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4c30u, cpu->r[12], 0, 0);
    }
L_000e4c2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4c34u, cpu->r[2], 0, 0);
    }
L_000e4c30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4c34:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4c3cu, cpu->r[3], 0, 0);
    }
L_000e4c38:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4c3c:;
    {
        cpu->r[14] = 0x000e4c40u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4c40:;
    {
        goto L_000e1e8c;
    }
L_000e4c44:;
    {
        cpu->r[1] = rd32(0x000e4c4cu + - 0xcc4u);
    }
L_000e4c48:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4c4c:;
    {
        cpu->r[12] = rd32(0x000e4c54u + - 0xcc8u);
    }
L_000e4c50:;
    {
        cpu->r[14] = 0x00000210u;
    }
L_000e4c54:;
    {
        cpu->r[2] = rd32(0x000e4c5cu + - 0xcccu);
    }
L_000e4c58:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4c60u, cpu->r[1], 0, 0);
    }
L_000e4c5c:;
    {
        cpu->r[3] = rd32(0x000e4c64u + - 0xcd0u);
    }
L_000e4c60:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4c68u, cpu->r[12], 0, 0);
    }
L_000e4c64:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4c6cu, cpu->r[2], 0, 0);
    }
L_000e4c68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4c6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4c74u, cpu->r[3], 0, 0);
    }
L_000e4c70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4c74:;
    {
        cpu->r[14] = 0x000e4c78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4c78:;
    {
        goto L_000e1e78;
    }
L_000e4c7c:;
    {
        cpu->r[1] = rd32(0x000e4c84u + - 0xcecu);
    }
L_000e4c80:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4c84:;
    {
        cpu->r[12] = rd32(0x000e4c8cu + - 0xcf0u);
    }
L_000e4c88:;
    {
        cpu->r[14] = 0x000000feu;
    }
L_000e4c8c:;
    {
        cpu->r[2] = rd32(0x000e4c94u + - 0xcf4u);
    }
L_000e4c90:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4c98u, cpu->r[1], 0, 0);
    }
L_000e4c94:;
    {
        cpu->r[3] = rd32(0x000e4c9cu + - 0xcf4u);
    }
L_000e4c98:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4ca0u, cpu->r[12], 0, 0);
    }
L_000e4c9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4ca4u, cpu->r[2], 0, 0);
    }
L_000e4ca0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4ca4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4cacu, cpu->r[3], 0, 0);
    }
L_000e4ca8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4cac:;
    {
        cpu->r[14] = 0x000e4cb0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4cb0:;
    {
        goto L_000e19b4;
    }
L_000e4cb4:;
    {
        cpu->r[1] = rd32(0x000e4cbcu + - 0xd10u);
    }
L_000e4cb8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4cbc:;
    {
        cpu->r[12] = rd32(0x000e4cc4u + - 0xd14u);
    }
L_000e4cc0:;
    {
        cpu->r[14] = 0x00000100u;
    }
L_000e4cc4:;
    {
        cpu->r[2] = rd32(0x000e4cccu + - 0xd18u);
    }
L_000e4cc8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4cd0u, cpu->r[1], 0, 0);
    }
L_000e4ccc:;
    {
        cpu->r[3] = rd32(0x000e4cd4u + - 0xd1cu);
    }
L_000e4cd0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4cd8u, cpu->r[12], 0, 0);
    }
L_000e4cd4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4cdcu, cpu->r[2], 0, 0);
    }
L_000e4cd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4cdc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4ce4u, cpu->r[3], 0, 0);
    }
L_000e4ce0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4ce4:;
    {
        cpu->r[14] = 0x000e4ce8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4ce8:;
    {
        goto L_000e19cc;
    }
L_000e4cec:;
    {
        cpu->r[1] = rd32(0x000e4cf4u + - 0xd38u);
    }
L_000e4cf0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4cf4:;
    {
        cpu->r[12] = rd32(0x000e4cfcu + - 0xd3cu);
    }
L_000e4cf8:;
    {
        cpu->r[14] = 0x00000103u;
    }
L_000e4cfc:;
    {
        cpu->r[2] = rd32(0x000e4d04u + - 0xd40u);
    }
L_000e4d00:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4d08u, cpu->r[1], 0, 0);
    }
L_000e4d04:;
    {
        cpu->r[3] = rd32(0x000e4d0cu + - 0xd44u);
    }
L_000e4d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4d10u, cpu->r[12], 0, 0);
    }
L_000e4d0c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4d14u, cpu->r[2], 0, 0);
    }
L_000e4d10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4d14:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4d1cu, cpu->r[3], 0, 0);
    }
L_000e4d18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4d1c:;
    {
        cpu->r[14] = 0x000e4d20u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4d20:;
    {
        goto L_000e1a18;
    }
L_000e4d24:;
    {
        cpu->r[1] = rd32(0x000e4d2cu + - 0xd60u);
    }
L_000e4d28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4d2c:;
    {
        cpu->r[12] = rd32(0x000e4d34u + - 0xd64u);
    }
L_000e4d30:;
    {
        cpu->r[14] = 0x000003a9u;
    }
L_000e4d34:;
    {
        cpu->r[2] = rd32(0x000e4d3cu + - 0xd68u);
    }
L_000e4d38:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4d40u, cpu->r[1], 0, 0);
    }
L_000e4d3c:;
    {
        cpu->r[3] = rd32(0x000e4d44u + - 0xd6cu);
    }
L_000e4d40:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4d48u, cpu->r[12], 0, 0);
    }
L_000e4d44:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4d4cu, cpu->r[2], 0, 0);
    }
L_000e4d48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4d4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4d54u, cpu->r[3], 0, 0);
    }
L_000e4d50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4d54:;
    {
        cpu->r[14] = 0x000e4d58u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4d58:;
    {
        goto L_000e29e8;
    }
L_000e4d5c:;
    {
        cpu->r[1] = rd32(0x000e4d64u + - 0xd88u);
    }
L_000e4d60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4d64:;
    {
        cpu->r[12] = rd32(0x000e4d6cu + - 0xd8cu);
    }
L_000e4d68:;
    {
        cpu->r[14] = 0x00000382u;
    }
L_000e4d6c:;
    {
        cpu->r[2] = rd32(0x000e4d74u + - 0xd90u);
    }
L_000e4d70:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4d78u, cpu->r[1], 0, 0);
    }
L_000e4d74:;
    {
        cpu->r[3] = rd32(0x000e4d7cu + - 0xd94u);
    }
L_000e4d78:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4d80u, cpu->r[12], 0, 0);
    }
L_000e4d7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4d84u, cpu->r[2], 0, 0);
    }
L_000e4d80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4d84:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4d8cu, cpu->r[3], 0, 0);
    }
L_000e4d88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4d8c:;
    {
        cpu->r[14] = 0x000e4d90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4d90:;
    {
        goto L_000e2924;
    }
L_000e4d94:;
    {
        cpu->r[1] = rd32(0x000e4d9cu + - 0xdb0u);
    }
L_000e4d98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4d9c:;
    {
        cpu->r[12] = rd32(0x000e4da4u + - 0xdb4u);
    }
L_000e4da0:;
    {
        cpu->r[14] = 0x0000031fu;
    }
L_000e4da4:;
    {
        cpu->r[2] = rd32(0x000e4dacu + - 0xdb8u);
    }
L_000e4da8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4db0u, cpu->r[1], 0, 0);
    }
L_000e4dac:;
    {
        cpu->r[3] = rd32(0x000e4db4u + - 0xdbcu);
    }
L_000e4db0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4db8u, cpu->r[12], 0, 0);
    }
L_000e4db4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4dbcu, cpu->r[2], 0, 0);
    }
L_000e4db8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4dbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4dc4u, cpu->r[3], 0, 0);
    }
L_000e4dc0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4dc4:;
    {
        cpu->r[14] = 0x000e4dc8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4dc8:;
    {
        goto L_000e2698;
    }
L_000e4dcc:;
    {
        cpu->r[1] = rd32(0x000e4dd4u + - 0xdd8u);
    }
L_000e4dd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4dd4:;
    {
        cpu->r[12] = rd32(0x000e4ddcu + - 0xddcu);
    }
L_000e4dd8:;
    {
        cpu->r[14] = 0x000002e5u;
    }
L_000e4ddc:;
    {
        cpu->r[2] = rd32(0x000e4de4u + - 0xde0u);
    }
L_000e4de0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4de8u, cpu->r[1], 0, 0);
    }
L_000e4de4:;
    {
        cpu->r[3] = rd32(0x000e4decu + - 0xde4u);
    }
L_000e4de8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4df0u, cpu->r[12], 0, 0);
    }
L_000e4dec:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4df4u, cpu->r[2], 0, 0);
    }
L_000e4df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4df4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4dfcu, cpu->r[3], 0, 0);
    }
L_000e4df8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4dfc:;
    {
        cpu->r[14] = 0x000e4e00u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4e00:;
    {
        goto L_000e1c88;
    }
L_000e4e04:;
    {
        cpu->r[1] = rd32(0x000e4e0cu + - 0xe00u);
    }
L_000e4e08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4e0c:;
    {
        cpu->r[12] = rd32(0x000e4e14u + - 0xe04u);
    }
L_000e4e10:;
    {
        cpu->r[14] = 0x000002e2u;
    }
L_000e4e14:;
    {
        cpu->r[2] = rd32(0x000e4e1cu + - 0xe08u);
    }
L_000e4e18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4e20u, cpu->r[1], 0, 0);
    }
L_000e4e1c:;
    {
        cpu->r[3] = rd32(0x000e4e24u + - 0xe0cu);
    }
L_000e4e20:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4e28u, cpu->r[12], 0, 0);
    }
L_000e4e24:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4e2cu, cpu->r[2], 0, 0);
    }
L_000e4e28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4e2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4e34u, cpu->r[3], 0, 0);
    }
L_000e4e30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4e34:;
    {
        cpu->r[14] = 0x000e4e38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4e38:;
    {
        goto L_000e1c74;
    }
L_000e4e3c:;
    {
        cpu->r[1] = rd32(0x000e4e44u + - 0xe28u);
    }
L_000e4e40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4e44:;
    {
        cpu->r[12] = rd32(0x000e4e4cu + - 0xe2cu);
    }
L_000e4e48:;
    {
        cpu->r[14] = 0x0000035eu;
    }
L_000e4e4c:;
    {
        cpu->r[2] = rd32(0x000e4e54u + - 0xe30u);
    }
L_000e4e50:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4e58u, cpu->r[1], 0, 0);
    }
L_000e4e54:;
    {
        cpu->r[3] = rd32(0x000e4e5cu + - 0xe34u);
    }
L_000e4e58:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4e60u, cpu->r[12], 0, 0);
    }
L_000e4e5c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4e64u, cpu->r[2], 0, 0);
    }
L_000e4e60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4e64:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4e6cu, cpu->r[3], 0, 0);
    }
L_000e4e68:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4e6c:;
    {
        cpu->r[14] = 0x000e4e70u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4e70:;
    {
        goto L_000e2850;
    }
L_000e4e74:;
    {
        cpu->r[1] = rd32(0x000e4e7cu + - 0xe50u);
    }
L_000e4e78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4e7c:;
    {
        cpu->r[12] = rd32(0x000e4e84u + - 0xe54u);
    }
L_000e4e80:;
    {
        cpu->r[14] = 0x0000032eu;
    }
L_000e4e84:;
    {
        cpu->r[2] = rd32(0x000e4e8cu + - 0xe58u);
    }
L_000e4e88:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4e90u, cpu->r[1], 0, 0);
    }
L_000e4e8c:;
    {
        cpu->r[3] = rd32(0x000e4e94u + - 0xe5cu);
    }
L_000e4e90:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4e98u, cpu->r[12], 0, 0);
    }
L_000e4e94:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4e9cu, cpu->r[2], 0, 0);
    }
L_000e4e98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4e9c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4ea4u, cpu->r[3], 0, 0);
    }
L_000e4ea0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4ea4:;
    {
        cpu->r[14] = 0x000e4ea8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4ea8:;
    {
        goto L_000e2708;
    }
L_000e4eac:;
    {
        cpu->r[1] = rd32(0x000e4eb4u + - 0xe78u);
    }
L_000e4eb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4eb4:;
    {
        cpu->r[12] = rd32(0x000e4ebcu + - 0xe7cu);
    }
L_000e4eb8:;
    {
        cpu->r[14] = 0x0000038cu;
    }
L_000e4ebc:;
    {
        cpu->r[2] = rd32(0x000e4ec4u + - 0xe80u);
    }
L_000e4ec0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4ec8u, cpu->r[1], 0, 0);
    }
L_000e4ec4:;
    {
        cpu->r[3] = rd32(0x000e4eccu + - 0xe84u);
    }
L_000e4ec8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4ed0u, cpu->r[12], 0, 0);
    }
L_000e4ecc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4ed4u, cpu->r[2], 0, 0);
    }
L_000e4ed0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4ed4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4edcu, cpu->r[3], 0, 0);
    }
L_000e4ed8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4edc:;
    {
        cpu->r[14] = 0x000e4ee0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4ee0:;
    {
        goto L_000e2970;
    }
L_000e4ee4:;
    {
        cpu->r[1] = rd32(0x000e4eecu + - 0xea0u);
    }
L_000e4ee8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4eec:;
    {
        cpu->r[12] = rd32(0x000e4ef4u + - 0xea4u);
    }
L_000e4ef0:;
    {
        cpu->r[14] = 0x0000034eu;
    }
L_000e4ef4:;
    {
        cpu->r[2] = rd32(0x000e4efcu + - 0xea8u);
    }
L_000e4ef8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4f00u, cpu->r[1], 0, 0);
    }
L_000e4efc:;
    {
        cpu->r[3] = rd32(0x000e4f04u + - 0xeacu);
    }
L_000e4f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4f08u, cpu->r[12], 0, 0);
    }
L_000e4f04:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4f0cu, cpu->r[2], 0, 0);
    }
L_000e4f08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4f0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4f14u, cpu->r[3], 0, 0);
    }
L_000e4f10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4f14:;
    {
        cpu->r[14] = 0x000e4f18u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4f18:;
    {
        goto L_000e27e0;
    }
L_000e4f1c:;
    {
        cpu->r[1] = rd32(0x000e4f24u + - 0xec8u);
    }
L_000e4f20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000e4f24:;
    {
        cpu->r[12] = rd32(0x000e4f2cu + - 0xeccu);
    }
L_000e4f28:;
    {
        cpu->r[14] = 0x000003b3u;
    }
L_000e4f2c:;
    {
        cpu->r[2] = rd32(0x000e4f34u + - 0xed0u);
    }
L_000e4f30:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4f38u, cpu->r[1], 0, 0);
    }
L_000e4f34:;
    {
        cpu->r[3] = rd32(0x000e4f3cu + - 0xed4u);
    }
L_000e4f38:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4f40u, cpu->r[12], 0, 0);
    }
L_000e4f3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4f44u, cpu->r[2], 0, 0);
    }
L_000e4f40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4f44:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4f4cu, cpu->r[3], 0, 0);
    }
L_000e4f48:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4f4c:;
    {
        cpu->r[14] = 0x000e4f50u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4f50:;
    {
        goto L_000e2a3c;
    }
L_000e4f54:;
    {
        cpu->r[1] = rd32(0x000e4f5cu + - 0xef0u);
    }
L_000e4f58:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e4f5c:;
    {
        cpu->r[12] = rd32(0x000e4f64u + - 0xef4u);
    }
L_000e4f60:;
    {
        cpu->r[14] = 0x00000161u;
    }
L_000e4f64:;
    {
        cpu->r[2] = rd32(0x000e4f6cu + - 0xef8u);
    }
L_000e4f68:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e4f70u, cpu->r[1], 0, 0);
    }
L_000e4f6c:;
    {
        cpu->r[3] = rd32(0x000e4f74u + - 0xefcu);
    }
L_000e4f70:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e4f78u, cpu->r[12], 0, 0);
    }
L_000e4f74:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e4f7cu, cpu->r[2], 0, 0);
    }
L_000e4f78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_000e4f7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e4f84u, cpu->r[3], 0, 0);
    }
L_000e4f80:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e4f84:;
    {
        cpu->r[14] = 0x000e4f88u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e4f88:;
    {
        goto L_000e136c;
    }
}

/* _ZN5Scene14UpdateTriggersEv @ 000e4f90 (arm) */
void fn_000e4f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e4f90:;
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
L_000e4f94:;
    {
        cpu->r[6] = 0x000087d0u;
    }
L_000e4f98:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000e4f9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000e4fa0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e4fa4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000e4fa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e4fac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e5050;
        }
    }
L_000e4fb0:;
    {
        cpu->r[7] = rd32(0x000e4fb8u + + 0xa4u);
    }
L_000e4fb4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000e4fb8:;
    {
        cpu->r[8] = rd32(0x000e4fc0u + + 0xa0u);
    }
L_000e4fbc:;
    {
        cpu->r[10] = rd32(0x000e4fc4u + + 0xa0u);
    }
L_000e4fc0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000e4fc8u, cpu->r[7], 0, 0);
    }
L_000e4fc4:;
    {
        cpu->r[9] = rd32(0x000e4fccu + + 0x9cu);
    }
L_000e4fc8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000e4fd0u, cpu->r[8], 0, 0);
    }
L_000e4fcc:;
    {
        cpu->r[10] = add_flags(cpu, 0x000e4fd4u, cpu->r[10], 0, 0);
    }
L_000e4fd0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000e4fd8u, cpu->r[9], 0, 0);
    }
L_000e4fd4:;
    {
        goto L_000e4fe8;
    }
L_000e4fd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e4fdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e4fe0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000e4fe4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000e5050;
        }
    }
L_000e4fe8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000e4fec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e4ff0:;
    {
        cpu->r[14] = 0x000e4ff4u; fn_000e0434(cpu);
    }
L_000e4ff4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e4ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000e4fd8;
        }
    }
L_000e4ffc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e5000:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e5004:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000e5008:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000e500c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_000e5010:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5014:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e5024;
        }
    }
L_000e5018:;
    {
        cpu->r[12] = 0x00000084u;
    }
L_000e501c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000e5020:;
    {
        cpu->r[14] = 0x000e5024u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5024:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000e5028:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000e502c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e5030:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000e5034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 6u, &shc), 0, 0);
    }
L_000e5038:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000e503c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x10u);
    }
L_000e5040:;
    {
        cpu->r[14] = 0x000e5044u; fn_000e0890(cpu);
    }
L_000e5044:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000e5048:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000e504c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e4fe8;
        }
    }
L_000e5050:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000e5054:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000e5058:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e505cu)) return;
    }
}

/* _ZN5Scene21RunStartupSceneScriptEv @ 000e506c (arm) */
void fn_000e506c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e506c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000e5070:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000e5074:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e5078:;
    {
        cpu->r[14] = 0x000e507cu; fn_000e0368(cpu);
    }
L_000e507c:;
    {
        cpu->r[5] = rd32(0x000e5084u + + 0xe8u);
    }
L_000e5080:;
    {
        cpu->r[5] = add_flags(cpu, 0x000e5088u, cpu->r[5], 0, 0);
    }
L_000e5084:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5088:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e5130;
        }
    }
L_000e508c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e5090:;
    {
        cpu->r[7] = 0x00001b38u;
    }
L_000e5094:;
    {
        cpu->r[14] = 0x000e5098u; fn_000e0890(cpu);
    }
L_000e5098:;
    {
        cpu->r[1] = rd32(0x000e50a0u + + 0xd0u);
    }
L_000e509c:;
    {
        cpu->r[3] = 0x0000a42du;
    }
L_000e50a0:;
    {
        cpu->r[2] = 0x0000a428u;
    }
L_000e50a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000e50a8:;
    {
        cpu->r[12] = 0x0000a42eu;
    }
L_000e50ac:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000e50b0:;
    {
        cpu->r[5] = 0x0000a634u;
    }
L_000e50b4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000e50b8:;
    {
        cpu->r[0] = 0x0000a630u;
    }
L_000e50bc:;
    {
        cpu->r[14] = 0x0000a430u;
    }
L_000e50c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000e50c4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000e50c8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000e50cc:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000e50d0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000e50d4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000e50d8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[1]);
    }
L_000e50dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000e50e0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000e50e4:;
    {
        cpu->r[3] = 0x00009fbcu;
    }
L_000e50e8:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[1]);
    }
L_000e50ec:;
    {
        wr16(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000e50f0:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000e50f4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000e50f8:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000e50fc:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_000e5100:;
    {
        cpu->r[12] = 0x0000001eu;
    }
L_000e5104:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[14]);
    }
L_000e5108:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000e510c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000e5110:;
    {
        cpu->r[14] = 0x000e5114u; fn_00096b88(cpu);
    }
L_000e5114:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000e5118:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000856cu;
        }
    }
L_000e511c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_000e5120:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[6]);
        }
    }
L_000e5124:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[5]);
        }
    }
L_000e5128:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000e512c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e5130u)) return;
    }
L_000e5130:;
    {
        cpu->r[1] = rd32(0x000e5138u + + 0x3cu);
    }
L_000e5134:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000e5138:;
    {
        cpu->r[12] = rd32(0x000e5140u + + 0x38u);
    }
L_000e513c:;
    {
        cpu->r[14] = 0x00000051u;
    }
L_000e5140:;
    {
        cpu->r[2] = rd32(0x000e5148u + + 0x34u);
    }
L_000e5144:;
    {
        cpu->r[1] = add_flags(cpu, 0x000e514cu, cpu->r[1], 0, 0);
    }
L_000e5148:;
    {
        cpu->r[3] = rd32(0x000e5150u + + 0x30u);
    }
L_000e514c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000e5154u, cpu->r[12], 0, 0);
    }
L_000e5150:;
    {
        cpu->r[2] = add_flags(cpu, 0x000e5158u, cpu->r[2], 0, 0);
    }
L_000e5154:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000006cu, 0, 0);
    }
L_000e5158:;
    {
        cpu->r[3] = add_flags(cpu, 0x000e5160u, cpu->r[3], 0, 0);
    }
L_000e515c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000e5160:;
    {
        cpu->r[14] = 0x000e5164u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000e5164:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_000e5168:;
    {
        goto L_000e5128;
    }
}

/* _ZN5Scene24CalculateTrafficPositionEPK11CTrafficCarbiiiPKiS4_S4_S4_i @ 000e5184 (arm) */
void fn_000e5184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e5184:;
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
L_000e5188:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000e518c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000e5190:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_000e5194:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000e5198:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_000e519c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_000e51a0:;
    {
        cpu->r[9] = rd32(cpu->r[1]);
    }
L_000e51a4:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x4u);
    }
L_000e51a8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_000e51ac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x60u);
    }
L_000e51b0:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_000e51b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000e51b8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x634u);
    }
L_000e51bc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000e51c0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
    }
L_000e51c4:;
    {
        cpu->r[10] = rd32(cpu->r[12]);
    }
L_000e51c8:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_000e51cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000e51d0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[2], 1, 0);
    }
L_000e51d4:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x8u);
    }
L_000e51d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000e51dc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_000e51e0:;
    {
        cpu->r[5] = rd32(cpu->r[11]);
    }
L_000e51e4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[6]; cpu->r[6] = v;
    }
L_000e51e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000e51ec:;
    {
        cpu->r[11] = rd32(cpu->r[11] + + 0x4u);
    }
L_000e51f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000e51f4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000e51f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e51fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_000e5200:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00001000u, cpu->r[12], 1, 0);
    }
L_000e5204:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000e5208:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[12] = v;
    }
L_000e520c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000ff0u, 0, 0);
    }
L_000e5210:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[1] = v;
    }
L_000e5214:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000e5218:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[9] = v;
    }
L_000e521c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000fu, 0, 0);
    }
L_000e5220:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[8] = v;
    }
L_000e5224:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_000e5228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000e522c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3] + cpu->r[9]; cpu->r[9] = v;
    }
L_000e5230:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_000e5234:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000e5238:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3] + cpu->r[8]; cpu->r[8] = v;
    }
L_000e523c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000ff0u, 0, 0);
    }
L_000e5240:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_000e5244:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000e5248:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000ff0u, 0, 0);
    }
L_000e524c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000e5250:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000fu, 0, 0);
    }
L_000e5254:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000fu, 0, 0);
    }
L_000e5258:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_000e525c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[10];
        }
    }
L_000e5260:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000e5264:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000ff0u, 0, 0);
    }
L_000e5268:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_000e526c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000e5270:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000ff0u, 0, 0);
    }
L_000e5274:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_000e5278:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_000e527c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000e5280:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000ff0u, 0, 0);
    }
L_000e5284:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_000e5288:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_000e528c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e5290:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_000e5294:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000fu, 0, 0);
    }
L_000e5298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e529c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_000e52a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[7];
        }
    }
L_000e52a4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[6] = v;
    }
L_000e52a8:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_000e52ac:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_000e52b0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_000e52b4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_000e52b8:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[6] = v;
    }
L_000e52bc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_000e52c0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[6]; cpu->r[3] = v;
    }
L_000e52c4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[9]; cpu->r[9] = v;
    }
L_000e52c8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[9]; cpu->r[12] = v;
    }
L_000e52cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000ff0u, 0, 0);
    }
L_000e52d0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[8]; cpu->r[8] = v;
    }
L_000e52d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e52d8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[8]; cpu->r[1] = v;
    }
L_000e52dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000ff0u, 0, 0);
    }
L_000e52e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000fu, 0, 0);
    }
L_000e52e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000000fu, 0, 0);
    }
L_000e52e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_000e52ec:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000e52f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000ff0u, 0, 0);
    }
L_000e52f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[9];
        }
    }
L_000e52f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000fu, 0, 0);
    }
L_000e52fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e5300:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[5];
        }
    }
L_000e5304:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000e5308:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_000e530c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_000e5310:;
    {
        { uint32_t v = cpu->r[5] & 0x00000002u; set_nz(cpu, v); }
    }
L_000e5314:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000e5318:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_000e531c:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_000e5320:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_000e5324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e5400;
        }
    }
L_000e5328:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000e532c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_000e5330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e5418;
        }
    }
L_000e5334:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000e5338:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000e533c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e53f4;
        }
    }
L_000e5340:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e5344:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x3d4u);
    }
L_000e5348:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_000e534c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_000e5350:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000e5354:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_000e5358:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000e535c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e53f4;
        }
    }
L_000e5360:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e5364:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_000e5368:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_000e536c:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000e5370:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_000e5374:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000e5378:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e53f4;
        }
    }
L_000e537c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e5380:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_000e5384:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000e5388:;
    {
        uint32_t v = cpu->r[8] ^ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000e538c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[8], 1, 31u, &shc), 1, 0);
    }
L_000e5390:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000e5394:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000e53f4;
        }
    }
L_000e5398:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_000e539c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_000e53a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_000e53a4:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000e53a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000e53ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_000e53b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_000e53b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000e53b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000e53bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000e53c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000e53c4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000e53c8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000e53cc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[7] = v;
    }
L_000e53d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[0] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000e53d4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000e53d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000e53dc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 3u, &shc), cpu->r[6], 1, 0);
    }
L_000e53e0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_000e53e4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 3u, &shc), cpu->r[5], 1, 0);
    }
L_000e53e8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_000e53ec:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 3u, &shc), cpu->r[7], 1, 0);
    }
L_000e53f0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_000e53f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000e53f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000e53fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e5400u)) return;
    }
L_000e5400:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e5404:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000e5408:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_000e540c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x550u);
    }
L_000e5410:;
    {
        cpu->r[14] = 0x000e5414u; fn_00175050(cpu);
    }
L_000e5414:;
    {
        goto L_000e53f4;
    }
L_000e5418:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000e541c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000e5420:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_000e5424:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x550u);
    }
L_000e5428:;
    {
        cpu->r[14] = 0x000e542cu; fn_00177994(cpu);
    }
L_000e542c:;
    {
        goto L_000e53f4;
    }
}

/* _ZN5Scene18SetTrafficRotationEP11CTrafficCarii @ 000e5430 (arm) */
void fn_000e5430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e5430:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000e5434:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000e5438:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_000e543c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_000e5440:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000e5444:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e5448:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000e544c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000e5450:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000e5454:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000e5458:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000e545c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e5460:;
    {
        cpu->r[14] = 0x000e5464u; fn_00180c78(cpu);
    }
L_000e5464:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000e5468:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000e546c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000e5470:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000e5474:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000e5478:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb6u);
    }
L_000e547c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000e5480:;
    {
        cpu->r[14] = 0x000e5484u; fn_00180c78(cpu);
    }
L_000e5484:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e548cu + + 0xdcu);
    }
L_000e5488:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_000e548c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e5494u + + 0xd8u);
    }
L_000e5490:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000e5494:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000e5498:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e549c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb6u);
    }
L_000e54a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e54a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000e54a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000e54c4;
        }
    }
L_000e54ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000400u, 1, 0);
    }
L_000e54b0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000800u, 1, 0);
    }
L_000e54b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000e54b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_000e54bc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
    }
L_000e54c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 11u, &shc), 1, 0);
    }
L_000e54c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], 0x00000400u, 1, 0);
    }
L_000e54c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000e54cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000e54d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
        }
    }
L_000e54d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_000e54d8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x62cu);
    }
L_000e54dc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
        }
    }
L_000e54e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 11u, &shc), 0, 0);
        }
    }
L_000e54e4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_000e54e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000e5540;
        }
    }
L_000e54ec:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000800u, cpu->r[3], 1, 0);
    }
L_000e54f0:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2]; cpu->r[4] = v;
    }
L_000e54f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[4]; cpu->r[3] = v;
    }
L_000e54f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000007f0u, 0, 0);
    }
L_000e54fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000e5500:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_000e5504:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000e5508:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 11u, &shc); cpu->r[3] = v;
    }
L_000e550c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000e5510:;
    {
        wr32(cpu->r[6] + + 0x550u, cpu->r[3]);
    }
L_000e5514:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000550u, 0, 0);
    }
L_000e5518:;
    {
        cpu->r[3] = 0x0000f000u;
    }
L_000e551c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_000e5520:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e5524:;
    {
        wr32(cpu->r[6] + + 0x560u, cpu->r[3]);
    }
L_000e5528:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000e552c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x550u);
    }
L_000e5530:;
    {
        wr32(cpu->r[6] + + 0x55cu, cpu->r[3]);
    }
L_000e5534:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000e5538:;
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
L_000e553c:;
    {
        return fn_001850e0(cpu);
    }
L_000e5540:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000800u, cpu->r[3], 1, 0);
    }
L_000e5544:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[3] = v;
    }
L_000e5548:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_000e554c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000007f0u, 0, 0);
    }
L_000e5550:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000e5554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_000e5558:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_000e555c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 11u, &shc); cpu->r[2] = v;
    }
L_000e5560:;
    {
        wr32(cpu->r[6] + + 0x550u, cpu->r[2]);
    }
L_000e5564:;
    {
        goto L_000e5514;
    }
}

/* _ZN5Scene26GetSectionOffsetByPositionEP8CCarBase8Vector4sRib @ 000e5570 (arm) */
void fn_000e5570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e5570:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000e5574:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000e5578:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000e557c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000e5580:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000e5584:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000e5588:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000e558c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_000e5590:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000e5594:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000e5598:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x40u);
    }
L_000e559c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000e55a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000e55a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000e55a8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000e55ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000e55b0:;
    {
        cpu->r[14] = 0x000e55b4u; fn_0017bf58(cpu);
    }
L_000e55b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000e55b8:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_000e55bc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000e55c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000e55c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000e55c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000e55cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_000e55d0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000e55d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000e55d8:;
    {
        cpu->r[14] = 0x000e55dcu; fn_00180c78(cpu);
    }
L_000e55dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000e55e0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000e55e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000e55e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000e55ec:;
    {
        cpu->r[14] = 0x000e55f0u; fn_00180c78(cpu);
    }
L_000e55f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_000e55f4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x34u);
    }
L_000e55f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000e55fc:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x30u);
    }
L_000e5600:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000e5604:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000e5608:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_000e560c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_000e5610:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x38u);
    }
L_000e5614:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000e5618:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_000e561c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000e5620:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000e5624:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000e5628:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000e562c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_000e5630:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000e5634:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x38u);
    }
L_000e5638:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x34u);
    }
L_000e563c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_000e5640:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000e5644:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000e5648:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_000e564c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000e5650:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000e5654:;
    {
        cpu->r[14] = 0x000e5658u; fn_0018572c(cpu);
    }
L_000e5658:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000e565c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000e5660:;
    {
        cpu->r[14] = 0x000e5664u; fn_0018572c(cpu);
    }
L_000e5664:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000e5668:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000e566c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000e5670:;
    {
        vfp_vdiv(cpu, 14, 16, 15);
    }
L_000e5674:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000e567cu + + 0x14u);
    }
L_000e5678:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000e567c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000e5680:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000e5684:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000e5688:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000e568c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000e5690u)) return;
    }
}

/* _ZN5Scene21TraficReInitForReplayEv @ 000e5694 (arm) */
void fn_000e5694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000e5694:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000e5698:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000e569c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e56a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000e56a4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000e56a8:;
    {
        cpu->r[2] = 0x000082a8u;
    }
L_000e56ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000e56b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000e56b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000e56b8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x62cu);
    }
L_000e56bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000e56c0:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000040u; cpu->r[12] = v;
    }
L_000e56c4:;
    {
        wr32(cpu->r[2] + + 0x630u, cpu->r[12]);
    }
L_000e56c8:;
    {
        wr32(cpu->r[2] + + 0x62cu, cpu->r[12]);
    }
L_000e56cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000680u, 0, 0);
    }
L_000e56d0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000e56d4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000e56d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000e56b8;
        }
    }
L_000e56dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
