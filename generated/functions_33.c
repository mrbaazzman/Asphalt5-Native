#include "functions.h"

/* _ZN5Scene20DrawIngamePlayerQuitEv @ 000d8fa4 (arm) */
void fn_000d8fa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d8fa4:;
    {
        cpu->r[3] = 0x00001b3cu;
    }
L_000d8fa8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8fac:;
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
L_000d8fb0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d8fb4:;
    {
        cpu->r[5] = rd32(0x000d8fbcu + + 0x1fcu);
    }
L_000d8fb8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000260u, 1, 0);
    }
L_000d8fbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d8fc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d8fc4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d8fccu, cpu->r[5], 0, 0);
    }
L_000d8fc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d916c;
        }
    }
L_000d8fcc:;
    {
        cpu->r[2] = 0x00001b40u;
    }
L_000d8fd0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d8fd4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d8fd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d8fdc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d916c;
        }
    }
L_000d8fe0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000d8fe4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000d8fe8:;
    {
        cpu->r[3] = rd32(0x000d8ff0u + + 0x1ccu);
    }
L_000d8fec:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8ff0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8ff4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d8ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9174;
        }
    }
L_000d8ffc:;
    {
        cpu->r[6] = rd32(0x000d9004u + + 0x1bcu);
    }
L_000d9000:;
    {
        cpu->r[8] = 0x00001c90u;
    }
L_000d9004:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d9008:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d900c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000001acu, 0, 0);
    }
L_000d9010:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000210u, 0, 0);
    }
L_000d9014:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_000d9018:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d901c:;
    {
        cpu->r[14] = 0x000d9020u; fn_00096a08(cpu);
    }
L_000d9020:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9024:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9028:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d902c:;
    {
        cpu->r[14] = 0x000d9030u; fn_0018aa44(cpu);
    }
L_000d9030:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d9034:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_000d9038:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_000d903c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d9040:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000d9044:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[0]);
    }
L_000d9048:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000d904c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[3]);
    }
L_000d9050:;
    {
        wr8(cpu->r[6] + + 0x50u, cpu->r[0]);
    }
L_000d9054:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9058:;
    {
        cpu->r[14] = 0x000d905cu; imp_memset(cpu); /* memset */
    }
L_000d905c:;
    {
        cpu->r[3] = 0x00001b40u;
    }
L_000d9060:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9064:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d9068:;
    {
        cpu->r[8] = 0x00000066u;
    }
L_000d906c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9070:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3] + cpu->r[2]; cpu->r[8] = v;
    }
L_000d9074:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00006300u, 0, 0);
    }
L_000d9078:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000f4u, 0, 0);
    }
L_000d907c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9080:;
    {
        cpu->r[14] = 0x000d9084u; fn_000ae12c(cpu);
    }
L_000d9084:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d9088:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d908c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000d9090:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9094:;
    {
        cpu->r[14] = 0x000d9098u; imp_memcpy(cpu); /* memcpy */
    }
L_000d9098:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_000d909c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d90a0:;
    {
        cpu->r[14] = 0x000d90a4u; fn_000ae3a0(cpu);
    }
L_000d90a4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000d90a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d90ac:;
    {
        cpu->r[12] = 0x000000b4u;
    }
L_000d90b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d90b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000d90b8:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[0], cpu->r[3]);
        }
    }
L_000d90bc:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000d90c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000d90c4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d90c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d90cc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d90d0:;
    {
        cpu->r[14] = 0x000d90d4u; fn_00099114(cpu);
    }
L_000d90d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d90d8:;
    {
        cpu->r[0] = 0x00000411u;
    }
L_000d90dc:;
    {
        cpu->r[14] = 0x000d90e0u; fn_000aeb58(cpu);
    }
L_000d90e0:;
    {
        cpu->r[1] = rd32(0x000d90e8u + + 0xdcu);
    }
L_000d90e4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000d90e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d90f0u, cpu->r[1], 0, 0);
    }
L_000d90ec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d90f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d90f4:;
    {
        cpu->r[14] = 0x000d90f8u; fn_000ae830(cpu);
    }
L_000d90f8:;
    {
        cpu->r[3] = rd32(0x000d9100u + + 0xc8u);
    }
L_000d90fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d9100:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d9104:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d9108:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d910c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d9110:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000b4u, 1, 0);
    }
L_000d9114:;
    {
        cpu->r[14] = 0x000d9118u; fn_000a9818(cpu);
    }
L_000d9118:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d911c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d9120:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d9124:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d9128:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d912c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d9130:;
    {
        cpu->r[14] = 0x0000003cu;
    }
L_000d9134:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000d9138:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d913c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000d9140:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d9144:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000d9148:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d914c:;
    {
        cpu->r[14] = 0x000d9150u; fn_000ac4bc(cpu);
    }
L_000d9150:;
    {
        cpu->r[3] = 0x00001b3cu;
    }
L_000d9154:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9158:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d915c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d9160:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001b40u;
        }
    }
L_000d9164:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d9168:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
        }
    }
L_000d916c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000260u, 0, 0);
    }
L_000d9170:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d9174u)) return;
    }
L_000d9174:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9178:;
    {
        cpu->r[14] = 0x000d917cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d917c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8ffc;
        }
    }
L_000d9184:;
    {
        cpu->r[6] = rd32(0x000d918cu + + 0x34u);
    }
L_000d9188:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d918c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9190:;
    {
        cpu->r[14] = 0x000d9194u; fn_0018aa20(cpu);
    }
L_000d9194:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9198:;
    {
        cpu->r[14] = 0x000d919cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d919c:;
    {
        cpu->r[3] = rd32(0x000d91a4u + + 0x28u);
    }
L_000d91a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d91a4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d91a8:;
    {
        cpu->r[3] = rd32(0x000d91b0u + + 0x20u);
    }
L_000d91ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d91b0:;
    {
        cpu->r[14] = 0x000d91b4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d91b4:;
    {
        goto L_000d9000;
    }
}

/* _ZN5Scene14Message_RenderEv @ 000d91d4 (arm) */
void fn_000d91d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d91d4:;
    {
        cpu->r[3] = 0x00004290u;
    }
L_000d91d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d91dc:;
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
L_000d91e0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d91e4:;
    {
        cpu->r[5] = rd32(0x000d91ecu + + 0x1bcu);
    }
L_000d91e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000d91ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d91f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d91f4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d91fcu, cpu->r[5], 0, 0);
    }
L_000d91f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d9204;
        }
    }
L_000d91fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000d9200:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d9204u)) return;
    }
L_000d9204:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9208:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d920c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d9210:;
    {
        cpu->r[14] = 0x000d9214u; fn_00096b88(cpu);
    }
L_000d9214:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d91fc;
        }
    }
L_000d921c:;
    {
        cpu->r[10] = rd32(0x000d9224u + + 0x188u);
    }
L_000d9220:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d9224:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d9228:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d922c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d92ec;
        }
    }
L_000d9230:;
    {
        cpu->r[6] = rd32(0x000d9238u + + 0x178u);
    }
L_000d9234:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d9238:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d923c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9240:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9244:;
    {
        cpu->r[14] = 0x000d9248u; fn_0018aa44(cpu);
    }
L_000d9248:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d924c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d9250:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9254:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d9258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9330;
        }
    }
L_000d925c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9260:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d9264:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9268:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d926c:;
    {
        cpu->r[14] = 0x000d9270u; fn_00096a08(cpu);
    }
L_000d9270:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9274:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9278:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d927c:;
    {
        cpu->r[14] = 0x000d9280u; fn_0018aa44(cpu);
    }
L_000d9280:;
    {
        cpu->r[3] = 0x000042b0u;
    }
L_000d9284:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d9288:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d928c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d9290:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d9294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d936c;
        }
    }
L_000d9298:;
    {
        cpu->r[3] = 0x000042b1u;
    }
L_000d929c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d92a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d92a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d92a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d91fc;
        }
    }
L_000d92ac:;
    {
        cpu->r[1] = 0x00004294u;
    }
L_000d92b0:;
    {
        cpu->r[2] = 0x000042a8u;
    }
L_000d92b4:;
    {
        cpu->r[3] = 0x000042acu;
    }
L_000d92b8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d92bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d92c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d92c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d92c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d92cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d92d0:;
    {
        cpu->r[12] = 0x00000021u;
    }
L_000d92d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d92d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d92dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d92e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d92e4:;
    {
        cpu->r[14] = 0x000d92e8u; fn_000ad158(cpu);
    }
L_000d92e8:;
    {
        goto L_000d91fc;
    }
L_000d92ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d92f0:;
    {
        cpu->r[14] = 0x000d92f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d92f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d92f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9230;
        }
    }
L_000d92fc:;
    {
        cpu->r[6] = rd32(0x000d9304u + + 0xacu);
    }
L_000d9300:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d9304:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9308:;
    {
        cpu->r[14] = 0x000d930cu; fn_0018aa20(cpu);
    }
L_000d930c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9310:;
    {
        cpu->r[14] = 0x000d9314u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9314:;
    {
        cpu->r[3] = rd32(0x000d931cu + + 0x98u);
    }
L_000d9318:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d931c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d9320:;
    {
        cpu->r[3] = rd32(0x000d9328u + + 0x90u);
    }
L_000d9324:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d9328:;
    {
        cpu->r[14] = 0x000d932cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d932c:;
    {
        goto L_000d9234;
    }
L_000d9330:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d9334:;
    {
        cpu->r[14] = 0x000d9338u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d933c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d925c;
        }
    }
L_000d9340:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9344:;
    {
        cpu->r[14] = 0x000d9348u; fn_0018aa20(cpu);
    }
L_000d9348:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d934c:;
    {
        cpu->r[14] = 0x000d9350u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9350:;
    {
        cpu->r[3] = rd32(0x000d9358u + + 0x5cu);
    }
L_000d9354:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9358:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d935c:;
    {
        cpu->r[3] = rd32(0x000d9364u + + 0x54u);
    }
L_000d9360:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d9364:;
    {
        cpu->r[14] = 0x000d9368u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9368:;
    {
        goto L_000d925c;
    }
L_000d936c:;
    {
        cpu->r[1] = 0x00004298u;
    }
L_000d9370:;
    {
        cpu->r[2] = 0x000042a0u;
    }
L_000d9374:;
    {
        cpu->r[3] = 0x000042a4u;
    }
L_000d9378:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d937c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d9380:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d9384:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d9388:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d938c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d9390:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d9394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9398:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d939c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d93a0:;
    {
        cpu->r[14] = 0x000d93a4u; fn_000ad8a0(cpu);
    }
L_000d93a4:;
    {
        goto L_000d9298;
    }
}

/* _ZN5Scene23MP_RenderSimulatedPanelEv @ 000d93bc (arm) */
void fn_000d93bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d93bc:;
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
L_000d93c0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000d93c4:;
    {
        cpu->r[4] = rd32(0x000d93ccu + + 0x53cu);
    }
L_000d93c8:;
    {
        cpu->r[11] = rd32(0x000d93d0u + + 0x53cu);
    }
L_000d93cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000009cu, 1, 0);
    }
L_000d93d0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d93d8u, cpu->r[4], 0, 0);
    }
L_000d93d4:;
    {
        cpu->r[3] = rd32(0x000d93dcu + + 0x534u);
    }
L_000d93d8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d93dc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d93e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d93e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d93e8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d93ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d93f0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000d93f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9598;
        }
    }
L_000d93f8:;
    {
        cpu->r[9] = rd32(0x000d9400u + + 0x514u);
    }
L_000d93fc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9400:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000d9404:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9408:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d940c:;
    {
        cpu->r[14] = 0x000d9410u; fn_00096a08(cpu);
    }
L_000d9410:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d9414:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9418:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d941c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d9420:;
    {
        cpu->r[14] = 0x000d9424u; fn_0018aa44(cpu);
    }
L_000d9424:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d9428:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_000d942c:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_000d9430:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d9434:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000d9438:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d943c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9888;
        }
    }
L_000d9440:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9444:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000d9448:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d944c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d9450:;
    {
        cpu->r[14] = 0x000d9454u; fn_00096a08(cpu);
    }
L_000d9454:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d9458:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d945c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d9464:;
    {
        cpu->r[14] = 0x000d9468u; fn_0018aa44(cpu);
    }
L_000d9468:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d946c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d9470:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9474:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000d9478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d984c;
        }
    }
L_000d947c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d9480:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d9484:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d9488:;
    {
        cpu->r[7] = 0x000043e4u;
    }
L_000d948c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d9490:;
    {
        cpu->r[10] = 0x00004be8u;
    }
L_000d9494:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000d9498:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000d949c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d94a0:;
    {
        cpu->r[8] = 0x00004becu;
    }
L_000d94a4:;
    {
        cpu->r[14] = 0x000d94a8u; fn_0018aa44(cpu);
    }
L_000d94a8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d94ac:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000d94b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_000d94b4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000d94b8:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000d94bc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000d94c0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000d94c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000d94c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_000d94cc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000d94d0:;
    {
        cpu->r[14] = 0x000d94d4u; fn_000a8a2c(cpu);
    }
L_000d94d4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000d94d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x90u);
    }
L_000d94dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_000d94e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000d94e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d94e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000d94ec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000d94f0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 25u, &shc); cpu->r[1] = v;
    }
L_000d94f4:;
    {
        cpu->r[14] = 0x000d94f8u; fn_0012dd58(cpu);
    }
L_000d94f8:;
    {
        cpu->r[3] = rd32(0x000d9500u + + 0x418u);
    }
L_000d94fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d9500:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d9504:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d9508:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d950c:;
    {
        cpu->r[3] = rd32(0x000d9514u + + 0x408u);
    }
L_000d9510:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000d9514:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9518:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000d951c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d9520:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d9524:;
    {
        cpu->r[14] = 0x000d9528u; fn_00130908(cpu);
    }
L_000d9528:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000d952c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000d9530:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d9534:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_000d9538:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d953c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000d9540:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000d9544:;
    {
        cpu->r[12] = 0x00190000u;
    }
L_000d9548:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000d954c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d9550:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d9554:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d9558:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000d955c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d9560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d9568u + + 0x398u);
    }
L_000d9564:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000d9568:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000d956c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d9570:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000d9574:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d9578:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_000d957c:;
    {
        cpu->r[14] = 0x000d9580u; fn_000adab4(cpu);
    }
L_000d9580:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000d9584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000d9588:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d95dc;
        }
    }
L_000d958c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000d9590:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000d9594:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d9598u)) return;
    }
L_000d9598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d959c:;
    {
        cpu->r[14] = 0x000d95a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d95a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d95a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d93f8;
        }
    }
L_000d95a8:;
    {
        cpu->r[9] = rd32(0x000d95b0u + + 0x364u);
    }
L_000d95ac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d95b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d95b4:;
    {
        cpu->r[14] = 0x000d95b8u; fn_0018aa20(cpu);
    }
L_000d95b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d95bc:;
    {
        cpu->r[14] = 0x000d95c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d95c0:;
    {
        cpu->r[3] = rd32(0x000d95c8u + + 0x358u);
    }
L_000d95c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d95c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d95cc:;
    {
        cpu->r[3] = rd32(0x000d95d4u + + 0x350u);
    }
L_000d95d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d95d4:;
    {
        cpu->r[14] = 0x000d95d8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d95d8:;
    {
        goto L_000d93fc;
    }
L_000d95dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d95e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00064000u, 0, 0);
    }
L_000d95e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000d95e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000003e8u, 0, 0);
    }
L_000d95ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d95f0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d95f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], 0x00000014u, 1, 0);
    }
L_000d95f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d95fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000d9600:;
    {
        cpu->r[14] = 0x000d9604u; fn_000a9818(cpu);
    }
L_000d9604:;
    {
        cpu->r[2] = 0x000043dcu;
    }
L_000d9608:;
    {
        cpu->r[14] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000d960c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d9610:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000d9614:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d9618:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d961c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d9620:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000d9624:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d9628:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d962c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_000d9630:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d9634:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_000d9638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_000d963c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d9640:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000d9644:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d9648:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d964c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d9650:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000d9654:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d9658:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000d965c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
    }
L_000d9660:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d9664:;
    {
        cpu->r[14] = 0x000d9668u; fn_000ac4bc(cpu);
    }
L_000d9668:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d966c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d9670:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d98c4;
        }
    }
L_000d9678:;
    {
        cpu->r[3] = rd32(0x000d9680u + + 0x2a8u);
    }
L_000d967c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d9680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9684:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d9688:;
    {
        cpu->r[14] = 0x000d968cu; fn_000f3430(cpu);
    }
L_000d968c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9690:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000d9694:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d9698:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000d969c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_000d96a0:;
    {
        cpu->r[14] = 0x000d96a4u; fn_0018aa44(cpu);
    }
L_000d96a4:;
    {
        cpu->r[3] = 0x000043dcu;
    }
L_000d96a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d96ac:;
    {
        cpu->r[2] = 0x000043e0u;
    }
L_000d96b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d96b4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000d96bcu + + 0x248u);
    }
L_000d96b8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d96bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000d96c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000d96c4:;
    {
        vfp_vsub(cpu, 11, 11, 15);
    }
L_000d96c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d96cc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000d96d0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d96d4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_000d96d8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000d96dc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x34u);
    }
L_000d96e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d96e4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000d96e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d96ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d96f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_000d96f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_000d96f8:;
    {
        vfp_vsub(cpu, 16, 16, 14);
    }
L_000d96fc:;
    {
        vfp_vsub(cpu, 17, 17, 12);
    }
L_000d9700:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d9704:;
    {
        vfp_vadd(cpu, 11, 11, 13);
    }
L_000d9708:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_000d970c:;
    {
        vfp_vadd(cpu, 17, 17, 13);
    }
L_000d9710:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,11);
    }
L_000d9714:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d9718:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000d971c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000d9720:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d9724:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000d9728:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_000d972c:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d9730:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[14] = v;
    }
L_000d9734:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[14];
    }
L_000d9738:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000d973c:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000d9740:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d9744:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000d9748:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_000d974c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_000d9750:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000d9754:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000d9758:;
    {
        vfp_vadd(cpu, 16, 14, 16);
    }
L_000d975c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d9760:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000d9764:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000d9768:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d976c:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000d9770:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d9774:;
    {
        vfp_vadd(cpu, 17, 12, 17);
    }
L_000d9778:;
    {
        cpu->r[14] = 0x000d977cu; fn_000ad8a0(cpu);
    }
L_000d977c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000d9780:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d9784:;
    {
        cpu->r[0] = 0x0000000eu;
    }
L_000d9788:;
    {
        wr8(cpu->r[7] + + 0x50u, cpu->r[3]);
    }
L_000d978c:;
    {
        cpu->r[14] = 0x000d9790u; fn_000aeb58(cpu);
    }
L_000d9790:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000d9794:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d9798:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d979c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d97a0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000d97a4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d97a8:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000d97ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d97b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d97b4:;
    {
        cpu->r[14] = 0x000d97b8u; fn_000ad19c(cpu);
    }
L_000d97b8:;
    {
        cpu->r[3] = 0x000043e0u;
    }
L_000d97bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d97c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d97c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d97c8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d97cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000d97d0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d97d4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x34u);
    }
L_000d97d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000d97dc:;
    {
        cpu->r[3] = 0x000043dcu;
    }
L_000d97e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d97e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000000deu;
        }
    }
L_000d97e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_000d97ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x000000dfu;
        }
    }
L_000d97f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d97f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d97f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000d97fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d9800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_000d9804:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000d9808:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000d980c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d9810:;
    {
        cpu->r[14] = 0x000d9814u; fn_000ad8a0(cpu);
    }
L_000d9814:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d9818:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d981c:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_000d9820:;
    {
        wr8(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_000d9824:;
    {
        cpu->r[14] = 0x000d9828u; fn_000aeb58(cpu);
    }
L_000d9828:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000d982c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_000d9830:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d9834:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000d9838:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d983c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d9844:;
    {
        cpu->r[14] = 0x000d9848u; fn_000ad19c(cpu);
    }
L_000d9848:;
    {
        goto L_000d958c;
    }
L_000d984c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9850:;
    {
        cpu->r[14] = 0x000d9854u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d947c;
        }
    }
L_000d985c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d9860:;
    {
        cpu->r[14] = 0x000d9864u; fn_0018aa20(cpu);
    }
L_000d9864:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9868:;
    {
        cpu->r[14] = 0x000d986cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d986c:;
    {
        cpu->r[3] = rd32(0x000d9874u + + 0xacu);
    }
L_000d9870:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d9874:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9878:;
    {
        cpu->r[3] = rd32(0x000d9880u + + 0xa4u);
    }
L_000d987c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9880:;
    {
        cpu->r[14] = 0x000d9884u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9884:;
    {
        goto L_000d947c;
    }
L_000d9888:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d988c:;
    {
        cpu->r[14] = 0x000d9890u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9890:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9440;
        }
    }
L_000d9898:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d989c:;
    {
        cpu->r[14] = 0x000d98a0u; fn_0018aa20(cpu);
    }
L_000d98a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d98a4:;
    {
        cpu->r[14] = 0x000d98a8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d98a8:;
    {
        cpu->r[3] = rd32(0x000d98b0u + + 0x70u);
    }
L_000d98ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d98b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d98b4:;
    {
        cpu->r[3] = rd32(0x000d98bcu + + 0x68u);
    }
L_000d98b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d98bc:;
    {
        cpu->r[14] = 0x000d98c0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d98c0:;
    {
        goto L_000d9440;
    }
L_000d98c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d98c8:;
    {
        cpu->r[14] = 0x000d98ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d98cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d98d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9678;
        }
    }
L_000d98d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d98d8:;
    {
        cpu->r[14] = 0x000d98dcu; fn_0018aa20(cpu);
    }
L_000d98dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d98e0:;
    {
        cpu->r[14] = 0x000d98e4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d98e4:;
    {
        cpu->r[3] = rd32(0x000d98ecu + + 0x34u);
    }
L_000d98e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d98ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d98f0:;
    {
        cpu->r[3] = rd32(0x000d98f8u + + 0x2cu);
    }
L_000d98f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d98f8:;
    {
        cpu->r[14] = 0x000d98fcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d98fc:;
    {
        goto L_000d9678;
    }
}

/* _ZN5Scene31RenderEndRaceLooseReasonTextLOLEv @ 000d992c (arm) */
void fn_000d992c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d992c:;
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
L_000d9930:;
    {
        cpu->r[4] = rd32(0x000d9938u + + 0x130u);
    }
L_000d9934:;
    {
        cpu->r[5] = rd32(0x000d993cu + + 0x130u);
    }
L_000d9938:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_000d993c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d9944u, cpu->r[4], 0, 0);
    }
L_000d9940:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d9944:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d9948:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d994c:;
    {
        cpu->r[14] = 0x000d9950u; fn_00097d9c(cpu);
    }
L_000d9950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9960;
        }
    }
L_000d9958:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000d995c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d9960u)) return;
    }
L_000d9960:;
    {
        cpu->r[3] = rd32(0x000d9968u + + 0x108u);
    }
L_000d9964:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9968:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d996c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9a24;
        }
    }
L_000d9974:;
    {
        cpu->r[7] = rd32(0x000d997cu + + 0xf8u);
    }
L_000d9978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d997c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d9980:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0006a000u, 0, 0);
    }
L_000d9984:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d9988:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000430u, 0, 0);
    }
L_000d998c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d9990:;
    {
        cpu->r[14] = 0x000d9994u; fn_00096a08(cpu);
    }
L_000d9994:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9998:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d999c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d99a0:;
    {
        cpu->r[14] = 0x000d99a4u; fn_0018aa44(cpu);
    }
L_000d99a4:;
    {
        cpu->r[3] = rd32(0x000d99acu + + 0xccu);
    }
L_000d99a8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d99ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d99b0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d99b4:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000d99b8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000d99bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000007u, 0, 0);
    }
L_000d99c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_000d99c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 3u, &shc), 1, 0);
    }
L_000d99c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d99cc:;
    {
        cpu->r[14] = 0x000d99d0u; fn_000a9818(cpu);
    }
L_000d99d0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d99d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d99d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d99dc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d99e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d99e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d99e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d99ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d99f0:;
    {
        cpu->r[12] = 0x00000019u;
    }
L_000d99f4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d99f8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d99fc:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000d9a00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d9a04:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000d9a08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d9a0c:;
    {
        cpu->r[14] = 0x000d9a10u; fn_000ac4bc(cpu);
    }
L_000d9a10:;
    {
        cpu->r[3] = rd32(0x000d9a18u + + 0x64u);
    }
L_000d9a14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9a18:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d9a1c:;
    {
        cpu->r[14] = 0x000d9a20u; fn_0012f780(cpu);
    }
L_000d9a20:;
    {
        goto L_000d9958;
    }
L_000d9a24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9a28:;
    {
        cpu->r[14] = 0x000d9a2cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9a2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9974;
        }
    }
L_000d9a34:;
    {
        cpu->r[7] = rd32(0x000d9a3cu + + 0x38u);
    }
L_000d9a38:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d9a3c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d9a40:;
    {
        cpu->r[14] = 0x000d9a44u; fn_0018aa20(cpu);
    }
L_000d9a44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9a48:;
    {
        cpu->r[14] = 0x000d9a4cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9a4c:;
    {
        cpu->r[3] = rd32(0x000d9a54u + + 0x2cu);
    }
L_000d9a50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d9a54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9a58:;
    {
        cpu->r[3] = rd32(0x000d9a60u + + 0x24u);
    }
L_000d9a5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9a60:;
    {
        cpu->r[14] = 0x000d9a64u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9a64:;
    {
        goto L_000d9978;
    }
}

/* _ZN5Scene22RenderMessageInterfaceEbRiS0_i @ 000d9a88 (arm) */
void fn_000d9a88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d9a88:;
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
L_000d9a8c:;
    {
        cpu->r[4] = rd32(0x000d9a94u + + 0x5acu);
    }
L_000d9a90:;
    {
        cpu->r[11] = rd32(0x000d9a98u + + 0x5acu);
    }
L_000d9a94:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000d9a98:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d9aa0u, cpu->r[4], 0, 0);
    }
L_000d9a9c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000d9aa0:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_000d9aa4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_000d9aa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d9aac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d9ab0:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000d9ab4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d9ab8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d9abc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_000d9ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9e40;
        }
    }
L_000d9ac4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d9ac8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d9acc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d9ad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d9e40;
        }
    }
L_000d9ad4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d9ad8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9adc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d9ae0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d9ae4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d9ae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d9aec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d9af0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d9af4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d9af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9e40;
        }
    }
L_000d9afc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d9b00:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000d9b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9e40;
        }
    }
L_000d9b08:;
    {
        cpu->r[10] = rd32(0x000d9b10u + + 0x538u);
    }
L_000d9b0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d9b10:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d9b14:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9b18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9e48;
        }
    }
L_000d9b1c:;
    {
        cpu->r[8] = rd32(0x000d9b24u + + 0x528u);
    }
L_000d9b20:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9b24:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000d9b28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9b2c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d9b30:;
    {
        cpu->r[14] = 0x000d9b34u; fn_00096a08(cpu);
    }
L_000d9b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d9b38:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000d9b3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9b40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9b44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d9b48:;
    {
        cpu->r[14] = 0x000d9b4cu; fn_0018aa44(cpu);
    }
L_000d9b4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d9b50:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d9b54:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9b58:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000d9b5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9ee0;
        }
    }
L_000d9b60:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d9b64:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d9b68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d9b6c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d9b70:;
    {
        cpu->r[14] = 0x000d9b74u; fn_00096a08(cpu);
    }
L_000d9b74:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d9b78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9b7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d9b80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9b84:;
    {
        cpu->r[14] = 0x000d9b88u; fn_0018aa44(cpu);
    }
L_000d9b88:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d9b8c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d9b90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d9b94:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000d9b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9ea4;
        }
    }
L_000d9b9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d9ba0:;
    {
        cpu->r[1] = 0x0000003du;
    }
L_000d9ba4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d9ba8:;
    {
        cpu->r[14] = 0x000d9bacu; fn_0018aa44(cpu);
    }
L_000d9bac:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_000d9bb0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d9bb4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x38u);
    }
L_000d9bb8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d9bbc:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000d9bc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000d9bc4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d9e04;
        }
    }
L_000d9bc8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000d9bcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d9be8;
        }
    }
L_000d9bd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d9bd4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d9bd8:;
    {
        cpu->r[3] = 0x00008cc0u;
    }
L_000d9bdc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d9be0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_000d9be4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000d9f38;
        }
    }
L_000d9be8:;
    {
        cpu->r[0] = 0x00000656u;
    }
L_000d9bec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d9bf0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000d9bf4:;
    {
        cpu->r[14] = 0x000d9bf8u; fn_000aeb28(cpu);
    }
L_000d9bf8:;
    {
        cpu->r[12] = rd32(0x000d9c00u + + 0x450u);
    }
L_000d9bfc:;
    {
        cpu->r[1] = rd32(0x000d9c04u + + 0x450u);
    }
L_000d9c00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000d9c04:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000d9c08:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d9c10u, cpu->r[1], 0, 0);
    }
L_000d9c0c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000d9c10:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d9c14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d9c18:;
    {
        cpu->r[14] = 0x000d9c1cu; fn_000ae830(cpu);
    }
L_000d9c1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d9c20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d9c24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_000d9c28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_000d9c2c:;
    {
        cpu->r[12] = 0x0000270fu;
    }
L_000d9c30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d9c34:;
    {
        cpu->r[14] = 0x000d9c38u; fn_000aa0c0(cpu);
    }
L_000d9c38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d9c3c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9c40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xdcu);
    }
L_000d9c44:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000d9c48:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d9c4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_000d9c50:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d9c54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_000d9c58:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[12]);
    }
L_000d9c5c:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_000d9c60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000d9c64:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], 0x0000000au, 1, 0);
    }
L_000d9c68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_000d9c6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d9c70:;
    {
        cpu->r[12] = 0x00000095u;
    }
L_000d9c74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000d9c78:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d9c7c:;
    {
        cpu->r[14] = 0x000d9c80u; fn_000a8cb8(cpu);
    }
L_000d9c80:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc8u);
    }
L_000d9c84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd0u);
    }
L_000d9c88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xdcu);
    }
L_000d9c8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_000d9c90:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[10]);
    }
L_000d9c94:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000d9c98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d9c9c:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_000d9ca0:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[2]);
    }
L_000d9ca4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_000d9ca8:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[2]);
    }
L_000d9cac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[9];
        }
    }
L_000d9cb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d9d58;
        }
    }
L_000d9cb4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000d9cb8:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_000d9cbc:;
    {
        cpu->r[7] = 0x00000003u;
    }
L_000d9cc0:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000d9cc4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000d9cc8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_000d9ccc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_000d9cd0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000d9cd4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9cd8:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_000d9cdc:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000d9ce0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d9ce4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_000d9ce8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d9cec:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_000d9cf0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000d9cf4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000003u, 0, 0);
    }
L_000d9cf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d9cfc:;
    {
        cpu->r[12] = 0x00000095u;
    }
L_000d9d00:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_000d9d04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d9d08:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_000d9d0c:;
    {
        cpu->r[14] = 0x000d9d10u; fn_000a8cb8(cpu);
    }
L_000d9d10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc0u);
    }
L_000d9d14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000d9d18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xdcu);
    }
L_000d9d1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000d9d20:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000d9d24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d9f4c;
        }
    }
L_000d9d28:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[2]);
    }
L_000d9d2c:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000fu, 1, 1);
    }
L_000d9d30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000d9d34:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[3]);
    }
L_000d9d38:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[2]);
    }
L_000d9d3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc4u);
    }
L_000d9d40:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[2]);
    }
L_000d9d44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d9cd0;
        }
    }
L_000d9d48:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000d9d4c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d9d50:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000d9d54:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000d9d58:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_000d9d5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9d60:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d9d64:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000d9d68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_000d9d6c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d9d70:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000d9d74:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d9d78:;
    {
        cpu->r[14] = 0x000d9d7cu; fn_000a8888(cpu);
    }
L_000d9d7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d9d80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d9d84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000d9d88:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000d9d8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d9d90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000d9d94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_000d9d98:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000d9d9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_000d9da0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9da4:;
    {
        cpu->r[14] = 0x000d9da8u; fn_000adb30(cpu);
    }
L_000d9da8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d9dac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc8u);
    }
L_000d9db0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d9db4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xd0u);
    }
L_000d9db8:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[3]);
    }
L_000d9dbc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xd4u);
    }
L_000d9dc0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000d9dc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d9dc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_000d9dcc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d9dd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_000d9dd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000d9dd8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 1u, &shc), 1, 0);
    }
L_000d9ddc:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d9de0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d9de4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d9de8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d9dec:;
    {
        cpu->r[14] = 0x000d9df0u; fn_000ad19c(cpu);
    }
L_000d9df0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d9df4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d9df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9f60;
        }
    }
L_000d9dfc:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x38u);
    }
L_000d9e00:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d9e04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d9e08:;
    {
        wr32(cpu->r[6], cpu->r[1]);
    }
L_000d9e0c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d9e10:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d9e14:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000d9e18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d9e40;
        }
    }
L_000d9e1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d9e20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000d9e24:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5], cpu->r[2]);
        }
    }
L_000d9e28:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6], cpu->r[3]);
        }
    }
L_000d9e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9e40;
        }
    }
L_000d9e30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d9e34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9f2c;
        }
    }
L_000d9e38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d9e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9f24;
        }
    }
L_000d9e40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_000d9e44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d9e48u)) return;
    }
L_000d9e48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d9e4c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d9e50:;
    {
        cpu->r[14] = 0x000d9e54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9e54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d9e58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9b1c;
        }
    }
L_000d9e60:;
    {
        cpu->r[8] = rd32(0x000d9e68u + + 0x1e4u);
    }
L_000d9e64:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d9e68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d9e6c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d9e70:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000d9e74:;
    {
        cpu->r[14] = 0x000d9e78u; fn_0018aa20(cpu);
    }
L_000d9e78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d9e7c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d9e80:;
    {
        cpu->r[14] = 0x000d9e84u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9e84:;
    {
        cpu->r[3] = rd32(0x000d9e8cu + + 0x1ccu);
    }
L_000d9e88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d9e8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9e90:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d9e94:;
    {
        cpu->r[3] = rd32(0x000d9e9cu + + 0x1c0u);
    }
L_000d9e98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9e9c:;
    {
        cpu->r[14] = 0x000d9ea0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9ea0:;
    {
        goto L_000d9b20;
    }
L_000d9ea4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d9ea8:;
    {
        cpu->r[14] = 0x000d9eacu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9eac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9b9c;
        }
    }
L_000d9eb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9eb8:;
    {
        cpu->r[14] = 0x000d9ebcu; fn_0018aa20(cpu);
    }
L_000d9ebc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d9ec0:;
    {
        cpu->r[14] = 0x000d9ec4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9ec4:;
    {
        cpu->r[3] = rd32(0x000d9eccu + + 0x18cu);
    }
L_000d9ec8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d9ecc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9ed0:;
    {
        cpu->r[3] = rd32(0x000d9ed8u + + 0x184u);
    }
L_000d9ed4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9ed8:;
    {
        cpu->r[14] = 0x000d9edcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9edc:;
    {
        goto L_000d9b9c;
    }
L_000d9ee0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d9ee4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d9ee8:;
    {
        cpu->r[14] = 0x000d9eecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d9eec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d9ef0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9b60;
        }
    }
L_000d9ef4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d9ef8:;
    {
        cpu->r[14] = 0x000d9efcu; fn_0018aa20(cpu);
    }
L_000d9efc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d9f00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d9f04:;
    {
        cpu->r[14] = 0x000d9f08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d9f08:;
    {
        cpu->r[3] = rd32(0x000d9f10u + + 0x148u);
    }
L_000d9f0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d9f10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9f14:;
    {
        cpu->r[3] = rd32(0x000d9f1cu + + 0x140u);
    }
L_000d9f18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d9f1c:;
    {
        cpu->r[14] = 0x000d9f20u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d9f20:;
    {
        goto L_000d9b60;
    }
L_000d9f24:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000d9f28:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_000d9f2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d9f30:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000d9f34:;
    {
        goto L_000d9e40;
    }
L_000d9f38:;
    {
        cpu->r[2] = rd32(0x000d9f40u + + 0x120u);
    }
L_000d9f3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d9f44u, cpu->r[2], 0, 0);
    }
L_000d9f40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d9f44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x2fcu);
    }
L_000d9f48:;
    {
        goto L_000d9bec;
    }
L_000d9f4c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000d9f50:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000d9f54:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d9f58:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xc8u);
    }
L_000d9f5c:;
    {
        goto L_000d9d58;
    }
L_000d9f60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d9f64:;
    {
        cpu->r[3] = 0x000000b6u;
    }
L_000d9f68:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000d9f6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d9f70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d9f74:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_000d9f78:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d9f7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000d9f80:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_000d9f84:;
    {
        cpu->r[14] = 0x000d9f88u; fn_000ad8a0(cpu);
    }
L_000d9f88:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000d9f8c:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000d9f90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d9f94:;
    {
        cpu->r[14] = 0x000d9f98u; imp_memset(cpu); /* memset */
    }
L_000d9f98:;
    {
        cpu->r[1] = rd32(0x000d9fa0u + + 0xc4u);
    }
L_000d9f9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x108u);
    }
L_000d9fa0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d9fa4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d9facu, cpu->r[1], 0, 0);
    }
L_000d9fa8:;
    {
        cpu->r[14] = 0x000d9facu; fn_000ae830(cpu);
    }
L_000d9fac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d9fb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d9fb4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d9fb8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x48u);
    }
L_000d9fbc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000d9fc0:;
    {
        wr32(cpu->r[12] + + 0x48u, cpu->r[2]);
    }
L_000d9fc4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d9fc8:;
    {
        wr32(cpu->r[12] + + 0x4cu, cpu->r[3]);
    }
L_000d9fcc:;
    {
        cpu->r[14] = 0x000d9fd0u; fn_000962d0(cpu);
    }
L_000d9fd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000d9fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da038;
        }
    }
L_000d9fd8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d9fdc:;
    {
        cpu->r[14] = 0x000d9fe0u; fn_000962d0(cpu);
    }
L_000d9fe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000d9fe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000b4u;
        }
    }
L_000d9fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da038;
        }
    }
L_000d9fec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d9ff0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000d9ff4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d9ff8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d9ffc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000da000:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da004:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000da008:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000da00c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000da010:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_000da014:;
    {
        cpu->r[14] = 0x000da018u; fn_000ad19c(cpu);
    }
L_000da018:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000da01c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000da020:;
    {
        cpu->r[14] = 0x000da024u; fn_000962d0(cpu);
    }
L_000da024:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000da028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d9dfc;
        }
    }
L_000da02c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000da030:;
    {
        cpu->r[14] = 0x000da034u; fn_000962d0(cpu);
    }
L_000da034:;
    {
        goto L_000d9dfc;
    }
L_000da038:;
    {
        cpu->r[3] = 0x000000bau;
    }
L_000da03c:;
    {
        goto L_000d9fec;
    }
}

/* _ZN5Scene16RenderRankTrofeeEv @ 000da068 (arm) */
void fn_000da068(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000da068:;
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
L_000da06c:;
    {
        cpu->r[1] = rd32(0x000da074u + + 0x58cu);
    }
L_000da070:;
    {
        cpu->r[4] = rd32(0x000da078u + + 0x58cu);
    }
L_000da074:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_000da078:;
    {
        cpu->r[10] = rd32(0x000da080u + + 0x588u);
    }
L_000da07c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000da080:;
    {
        cpu->r[4] = add_flags(cpu, 0x000da088u, cpu->r[4], 0, 0);
    }
L_000da084:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000da088:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000da08c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000da090:;
    {
        cpu->r[7] = rd32(0x000da098u + + 0x574u);
    }
L_000da094:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000da098:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000da09c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000da0a0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da0a4:;
    {
        cpu->r[11] = rd32(cpu->r[3]);
    }
L_000da0a8:;
    {
        cpu->r[9] = rd32(cpu->r[1]);
    }
L_000da0ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da280;
        }
    }
L_000da0b0:;
    {
        cpu->r[6] = rd32(0x000da0b8u + + 0x558u);
    }
L_000da0b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da0b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da0bc:;
    {
        cpu->r[1] = 0x00000047u;
    }
L_000da0c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000da0c4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000da0c8:;
    {
        cpu->r[14] = 0x000da0ccu; fn_0018aa44(cpu);
    }
L_000da0cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000da0d0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000da0d4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da0d8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000da0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da2f8;
        }
    }
L_000da0e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000da0e4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000da0e8:;
    {
        cpu->r[14] = 0x000da0ecu; fn_000962d0(cpu);
    }
L_000da0ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da0f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000004du, 0, 0);
    }
L_000da0f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da0f8:;
    {
        cpu->r[14] = 0x000da0fcu; fn_0018aa44(cpu);
    }
L_000da0fc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000da100:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da104:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_000da108:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_000da10c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da110:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000da114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000da118:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000da11c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[5]; cpu->r[3] = v;
    }
L_000da120:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000da124:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000da128:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000da12c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_000da130:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000da134:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000da138:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000da13c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da33c;
        }
    }
L_000da140:;
    {
        cpu->r[3] = 0x00009fbcu;
    }
L_000da144:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000da148:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da190;
        }
    }
L_000da150:;
    {
        cpu->r[3] = 0x00009fc0u;
    }
L_000da154:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_000da158:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da15c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000da160:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000da5e0;
        }
    }
L_000da164:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000da168:;
    {
        cpu->r[1] = 0x00009fc0u;
    }
L_000da16c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000da170:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000da174:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000da178:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da17c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000da180:;
    {
        cpu->r[14] = 0x000da184u; fn_000a9010(cpu);
    }
L_000da184:;
    {
        cpu->r[3] = 0x00009fbcu;
    }
L_000da188:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da18c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000da190:;
    {
        cpu->r[2] = rd32(0x000da198u + + 0x47cu);
    }
L_000da194:;
    {
        cpu->r[1] = 0x00003344u;
    }
L_000da198:;
    {
        cpu->r[3] = rd32(0x000da1a0u + + 0x478u);
    }
L_000da19c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da1a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x9900u << 16);
    }
L_000da1a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000da1a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000da1ac:;
    {
        cpu->r[14] = 0x000da1b0u; fn_0012dd58(cpu);
    }
L_000da1b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da1b4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da1b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000da1bc:;
    {
        cpu->r[11] = 0x00000176u;
    }
L_000da1c0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da1c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000da1c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000da1cc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000da1d0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000da1d4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000da1d8:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000da1dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000da1e0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000da1e4:;
    {
        cpu->r[14] = 0x000da1e8u; fn_00130908(cpu);
    }
L_000da1e8:;
    {
        cpu->r[3] = 0x00009fc0u;
    }
L_000da1ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da1f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da1f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da1f8:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_000da1fc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000da200:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000da204:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_000da208:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000da20c:;
    {
        cpu->r[14] = 0x000da210u; fn_000adc50(cpu);
    }
L_000da210:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da214:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da218:;
    {
        cpu->r[14] = 0x000da21cu; fn_000a931c(cpu);
    }
L_000da21c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000da220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da2cc;
        }
    }
L_000da224:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000da228:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da22c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000da230:;
    {
        cpu->r[14] = 0x000da234u; fn_0012f780(cpu);
    }
L_000da234:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000da238:;
    {
        cpu->r[14] = 0x000da23cu; fn_000d992c(cpu);
    }
L_000da23c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000da240:;
    {
        cpu->r[3] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_000da244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da25c;
        }
    }
L_000da24c:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000da250:;
    {
        cpu->r[3] = rd8(cpu->r[9] + cpu->r[3]);
    }
L_000da254:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da49c;
        }
    }
L_000da25c:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000da260:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000da264:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000da268:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da26c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da278;
        }
    }
L_000da270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000da274:;
    {
        cpu->r[14] = 0x000da278u; fn_000d93bc(cpu);
    }
L_000da278:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000da27c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000da280u)) return;
    }
L_000da280:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da284:;
    {
        cpu->r[14] = 0x000da288u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000da288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da28c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da0b0;
        }
    }
L_000da290:;
    {
        cpu->r[6] = rd32(0x000da298u + + 0x378u);
    }
L_000da294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da298:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000da29c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000da2a0:;
    {
        cpu->r[14] = 0x000da2a4u; fn_0018aa20(cpu);
    }
L_000da2a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da2a8:;
    {
        cpu->r[14] = 0x000da2acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000da2ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000da2b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000da2b4:;
    {
        cpu->r[3] = rd32(0x000da2bcu + + 0x360u);
    }
L_000da2b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da2bc:;
    {
        cpu->r[3] = rd32(0x000da2c4u + + 0x35cu);
    }
L_000da2c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da2c4:;
    {
        cpu->r[14] = 0x000da2c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000da2c8:;
    {
        goto L_000da0b4;
    }
L_000da2cc:;
    {
        cpu->r[2] = 0x00009fc0u;
    }
L_000da2d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000da2d4:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_000da2d8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000da2dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000da2e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_000da2e4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000da2e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[11];
        }
    }
L_000da2ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000da2f0:;
    {
        cpu->r[14] = 0x000da2f4u; fn_000ad8a0(cpu);
    }
L_000da2f4:;
    {
        goto L_000da224;
    }
L_000da2f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000da2fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000da300:;
    {
        cpu->r[14] = 0x000da304u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000da304:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da308:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da0e0;
        }
    }
L_000da30c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da310:;
    {
        cpu->r[14] = 0x000da314u; fn_0018aa20(cpu);
    }
L_000da314:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000da318:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000da31c:;
    {
        cpu->r[14] = 0x000da320u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000da320:;
    {
        cpu->r[3] = rd32(0x000da328u + + 0x2f4u);
    }
L_000da324:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da328:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da32c:;
    {
        cpu->r[3] = rd32(0x000da334u + + 0x2ecu);
    }
L_000da330:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da334:;
    {
        cpu->r[14] = 0x000da338u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000da338:;
    {
        goto L_000da0e0;
    }
L_000da33c:;
    {
        cpu->r[7] = 0x00009fbcu;
    }
L_000da340:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[7]);
    }
L_000da344:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da578;
        }
    }
L_000da34c:;
    {
        cpu->r[1] = rd32(0x000da354u + + 0x2c0u);
    }
L_000da350:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da354:;
    {
        cpu->r[2] = rd32(0x000da35cu + + 0x2bcu);
    }
L_000da358:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000da35c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000da360:;
    {
        cpu->r[1] = 0x00003344u;
    }
L_000da364:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x9900u << 16);
    }
L_000da368:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000da36c:;
    {
        cpu->r[14] = 0x000da370u; fn_0012dd58(cpu);
    }
L_000da370:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da374:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000da378:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da37c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000da380:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da388:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da38c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000da390:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000da394:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000da398:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000da39c:;
    {
        cpu->r[14] = 0x000da3a0u; fn_00130908(cpu);
    }
L_000da3a0:;
    {
        cpu->r[2] = 0x00009fc0u;
    }
L_000da3a4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000da3a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da3ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da3b0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000da3b4:;
    {
        cpu->r[2] = 0x00000176u;
    }
L_000da3b8:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000da3bc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 1);
    }
L_000da3c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_000da3c4:;
    {
        cpu->r[14] = 0x000da3c8u; fn_000adc50(cpu);
    }
L_000da3c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da3cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da3d0:;
    {
        cpu->r[14] = 0x000da3d4u; fn_000a931c(cpu);
    }
L_000da3d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000da3d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da558;
        }
    }
L_000da3dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000da3e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000da3e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000da3e8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000da3ec:;
    {
        cpu->r[14] = 0x000da3f0u; fn_0012f780(cpu);
    }
L_000da3f0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000da3f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da3f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da3fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000da400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000da404:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000da408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000da40c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000da410:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000da414:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000da418:;
    {
        cpu->r[14] = 0x000da41cu; fn_0015d718(cpu);
    }
L_000da41c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000da420:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000da424:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da428:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000da42c:;
    {
        cpu->r[14] = 0x000da430u; fn_000f38e8(cpu);
    }
L_000da430:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000da434:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000da438:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da43c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da518;
        }
    }
L_000da440:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000da444:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000da448:;
    {
        cpu->r[14] = 0x000da44cu; fn_00096a08(cpu);
    }
L_000da44c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da450:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da454:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da458:;
    {
        cpu->r[14] = 0x000da45cu; fn_0018aa44(cpu);
    }
L_000da45c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da460:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_000da464:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000da468:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000da46c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da470:;
    {
        cpu->r[3] = 0x000000fau;
    }
L_000da474:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_000da478:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000da47c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000da480:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000da484:;
    {
        cpu->r[14] = 0x000da488u; fn_000ad19c(cpu);
    }
L_000da488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000da48c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da490:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000da494:;
    {
        cpu->r[14] = 0x000da498u; fn_0012f780(cpu);
    }
L_000da498:;
    {
        goto L_000da23c;
    }
L_000da49c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000da4a0:;
    {
        cpu->r[14] = 0x000da4a4u; fn_000ba990(cpu);
    }
L_000da4a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da4a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da25c;
        }
    }
L_000da4ac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000da4b0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000da4b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da4b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da5a0;
        }
    }
L_000da4bc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000da4c0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000da4c4:;
    {
        cpu->r[14] = 0x000da4c8u; fn_00096a08(cpu);
    }
L_000da4c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da4cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da4d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da4d4:;
    {
        cpu->r[14] = 0x000da4d8u; fn_0018aa44(cpu);
    }
L_000da4d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000da4dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000da4e0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000da4e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000da4e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000da4ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000da4f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da4f4:;
    {
        cpu->r[1] = 0x0000042bu;
    }
L_000da4f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000da4fc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000da500:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000da504:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000da508:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000da50c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003cu, 0, 0);
    }
L_000da510:;
    {
        cpu->r[14] = 0x000da514u; fn_000ad200(cpu);
    }
L_000da514:;
    {
        goto L_000da25c;
    }
L_000da518:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da51c:;
    {
        cpu->r[14] = 0x000da520u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000da520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da440;
        }
    }
L_000da528:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da52c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da530:;
    {
        cpu->r[14] = 0x000da534u; fn_0018aa20(cpu);
    }
L_000da534:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da538:;
    {
        cpu->r[14] = 0x000da53cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000da53c:;
    {
        cpu->r[3] = rd32(0x000da544u + + 0xd8u);
    }
L_000da540:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000da544:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da548:;
    {
        cpu->r[3] = rd32(0x000da550u + + 0xd0u);
    }
L_000da54c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da550:;
    {
        cpu->r[14] = 0x000da554u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000da554:;
    {
        goto L_000da440;
    }
L_000da558:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000da55c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000da560:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000da564:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000da568:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000da56c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000da570:;
    {
        cpu->r[14] = 0x000da574u; fn_000ad8a0(cpu);
    }
L_000da574:;
    {
        goto L_000da3dc;
    }
L_000da578:;
    {
        cpu->r[3] = 0x00009fc0u;
    }
L_000da57c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000da580:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da584:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000da588:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[12]);
    }
L_000da58c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000da590:;
    {
        cpu->r[14] = 0x000da594u; fn_000a9010(cpu);
    }
L_000da594:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000da598:;
    {
        wr8(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000da59c:;
    {
        goto L_000da34c;
    }
L_000da5a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000da5a4:;
    {
        cpu->r[14] = 0x000da5a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000da5a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da4bc;
        }
    }
L_000da5b0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da5b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da5b8:;
    {
        cpu->r[14] = 0x000da5bcu; fn_0018aa20(cpu);
    }
L_000da5bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000da5c0:;
    {
        cpu->r[14] = 0x000da5c4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000da5c4:;
    {
        cpu->r[3] = rd32(0x000da5ccu + + 0x50u);
    }
L_000da5c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da5cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da5d0:;
    {
        cpu->r[3] = rd32(0x000da5d8u + + 0x48u);
    }
L_000da5d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da5d8:;
    {
        cpu->r[14] = 0x000da5dcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000da5dc:;
    {
        goto L_000da4bc;
    }
L_000da5e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000da5e4:;
    {
        cpu->r[14] = 0x000da5e8u; fn_00097d9c(cpu);
    }
L_000da5e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000da5ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da5f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da164;
        }
    }
L_000da5f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000da5f8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000da5fc:;
    {
        goto L_000da174;
    }
}

/* _ZN5Scene13RenderRaceEndEv @ 000da624 (arm) */
void fn_000da624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000da624:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000da628:;
    {
        cpu->r[4] = rd32(0x000da630u + + 0xa4u);
    }
L_000da62c:;
    {
        cpu->r[3] = rd32(0x000da634u + + 0xa4u);
    }
L_000da630:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000da634:;
    {
        cpu->r[4] = add_flags(cpu, 0x000da63cu, cpu->r[4], 0, 0);
    }
L_000da638:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da63c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000da640:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da690;
        }
    }
L_000da648:;
    {
        cpu->r[6] = rd32(0x000da650u + + 0x8cu);
    }
L_000da64c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000da650:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000da654:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da658:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da65c:;
    {
        cpu->r[14] = 0x000da660u; fn_00096a08(cpu);
    }
L_000da660:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da664:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da668:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da66c:;
    {
        cpu->r[14] = 0x000da670u; fn_0018aa44(cpu);
    }
L_000da670:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000da674:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000da678:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000da680:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000da684u)) return;
        }
    }
L_000da684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000da688:;
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
L_000da68c:;
    {
        return fn_000da068(cpu);
    }
L_000da690:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000da694:;
    {
        cpu->r[14] = 0x000da698u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000da698:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000da69c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da648;
        }
    }
L_000da6a0:;
    {
        cpu->r[6] = rd32(0x000da6a8u + + 0x34u);
    }
L_000da6a4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da6a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da6ac:;
    {
        cpu->r[14] = 0x000da6b0u; fn_0018aa20(cpu);
    }
L_000da6b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000da6b4:;
    {
        cpu->r[14] = 0x000da6b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000da6b8:;
    {
        cpu->r[3] = rd32(0x000da6c0u + + 0x20u);
    }
L_000da6bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da6c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da6c4:;
    {
        cpu->r[3] = rd32(0x000da6ccu + + 0x18u);
    }
L_000da6c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000da6cc:;
    {
        cpu->r[14] = 0x000da6d0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000da6d0:;
    {
        goto L_000da64c;
    }
}

/* _ZN5Scene15RenderInterfaceEv @ 000da6e8 (arm) */
void fn_000da6e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000da6e8:;
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
L_000da6ec:;
    {
        cpu->r[13] -= 64u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
        wr64(cpu->r[13] + 48u, *(uint64_t*)vfp_d(cpu, 14));
        wr64(cpu->r[13] + 56u, *(uint64_t*)vfp_d(cpu, 15));
    }
L_000da6f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000da6f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000018cu, 1, 0);
    }
L_000da6f8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000da6fc:;
    {
        cpu->r[14] = 0x000da700u; fn_00093f34(cpu);
    }
L_000da700:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000da708u + + 0x38u);
    }
L_000da704:;
    {
        cpu->r[4] = rd32(0x000da70cu + + 0x38u);
    }
L_000da708:;
    {
        cpu->r[4] = add_flags(cpu, 0x000da710u, cpu->r[4], 0, 0);
    }
L_000da70c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000da710:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000da714:;
    {
        vfp_sync_flags(cpu);
    }
L_000da718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000da734;
        }
    }
L_000da71c:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000da720:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da724:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da728:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000da72c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da768;
        }
    }
L_000da734:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000018cu, 0, 0);
    }
L_000da738:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        *(uint64_t*)vfp_d(cpu, 14) = rd64(cpu->r[13] + 48u);
        *(uint64_t*)vfp_d(cpu, 15) = rd64(cpu->r[13] + 56u);
        cpu->r[13] += 64u;
    }
L_000da73c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000da740u)) return;
    }
L_000da768:;
    {
        cpu->r[2] = 0x00008d74u;
    }
L_000da76c:;
    {
        cpu->r[8] = rd32(0x000da774u + - 0x2cu);
    }
L_000da770:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000da774:;
    {
        cpu->r[1] = 0x00001ca0u;
    }
L_000da778:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000da77c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000da780:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000da784:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000da788:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000da78c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000da790:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000da794:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000da798:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da79c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x4u);
    }
L_000da7a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db488;
        }
    }
L_000da7a4:;
    {
        cpu->r[6] = rd32(0x000da7acu + - 0x60u);
    }
L_000da7a8:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000da7ac:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000da7b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da7b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da7b8:;
    {
        cpu->r[14] = 0x000da7bcu; fn_00096a08(cpu);
    }
L_000da7bc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da7c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da7c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da7c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000da7cc:;
    {
        cpu->r[14] = 0x000da7d0u; fn_0018aa44(cpu);
    }
L_000da7d0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000da7d4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000da7d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da7dc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000da7e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db44c;
        }
    }
L_000da7e4:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000da7e8:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_000da7ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da7f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da7f4:;
    {
        cpu->r[14] = 0x000da7f8u; fn_00096a08(cpu);
    }
L_000da7f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da7fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da800:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da804:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000da808:;
    {
        cpu->r[14] = 0x000da80cu; fn_0018aa44(cpu);
    }
L_000da80c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000da810:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000da814:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da818:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000da81c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db410;
        }
    }
L_000da820:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000da824:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_000da828:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da82c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da830:;
    {
        cpu->r[14] = 0x000da834u; fn_00096a08(cpu);
    }
L_000da834:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da838:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da83c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da840:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000da844:;
    {
        cpu->r[14] = 0x000da848u; fn_0018aa44(cpu);
    }
L_000da848:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000da84c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000da850:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da854:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000da858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db3d4;
        }
    }
L_000da85c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000da860:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_000da864:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000da868:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da86c:;
    {
        cpu->r[14] = 0x000da870u; fn_00096a08(cpu);
    }
L_000da870:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da874:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da878:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000da87c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000da880:;
    {
        cpu->r[14] = 0x000da884u; fn_0018aa44(cpu);
    }
L_000da884:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000da888:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000da88c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000da890:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000da894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db398;
        }
    }
L_000da898:;
    {
        cpu->r[0] = rd32(0x000da8a0u + - 0x150u);
    }
L_000da89c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000da8a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000da8a4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000da8a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000da8ac:;
    {
        cpu->r[14] = 0x000da8b0u; fn_0018aa44(cpu);
    }
L_000da8b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000da8b4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000da8b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000da8bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000da8c0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000da8c4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000da8c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da8cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db31c;
        }
    }
L_000da8d0:;
    {
        cpu->r[2] = rd32(0x000da8d8u + - 0x184u);
    }
L_000da8d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000da8d8:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_000da8dc:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000da8e0:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000da8e4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000da8e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000da8ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000da8f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000da8f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_000da8f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000013u;
        }
    }
L_000da8fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_000da900:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000012u;
        }
    }
L_000da904:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000da908:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000da90c:;
    {
        cpu->r[14] = 0x000da910u; fn_000ad8a0(cpu);
    }
L_000da910:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000da914:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_000da918:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000da91c:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000da920:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000da924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000da928:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
        }
    }
L_000da92c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dab18;
        }
    }
L_000da930:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000da934:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000da938:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000da93c:;
    {
        cpu->r[14] = 0x000da940u; fn_000a88e0(cpu);
    }
L_000da940:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000da944:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000da948:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000da94c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000da950:;
    {
        cpu->r[14] = 0x000da954u; fn_000a8910(cpu);
    }
L_000da954:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000da958:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000da95c:;
    {
        cpu->r[14] = 0x000da960u; fn_000962d0(cpu);
    }
L_000da960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000da964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db610;
        }
    }
L_000da968:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000da96c:;
    {
        cpu->r[14] = 0x000da970u; fn_000962d0(cpu);
    }
L_000da970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000da974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db610;
        }
    }
L_000da978:;
    {
        cpu->r[10] = 0x0000173cu;
    }
L_000da97c:;
    {
        cpu->r[1] = rd32(0x000da984u + - 0x22cu);
    }
L_000da980:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000da984:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000da988:;
    {
        cpu->r[1] = add_flags(cpu, 0x000da990u, cpu->r[1], 0, 0);
    }
L_000da98c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000da990:;
    {
        cpu->r[14] = 0x000da994u; fn_000ae830(cpu);
    }
L_000da994:;
    {
        cpu->r[2] = 0x00004230u;
    }
L_000da998:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000da99c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000da9a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000da9a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000da9a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da9dc;
        }
    }
L_000da9ac:;
    {
        cpu->r[3] = 0x0000a42eu;
    }
L_000da9b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000da9b4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000da9b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000da9bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000da9c0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_000da9c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db618;
        }
    }
L_000da9c8:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000da9cc:;
    {
        cpu->r[3] = 0x00004230u;
    }
L_000da9d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000da9d4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000da9d8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000da9dc:;
    {
        cpu->r[3] = 0x0000a630u;
    }
L_000da9e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000da9e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000da9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000da9ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000daa14;
        }
    }
L_000da9f0:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000da9f4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000da9f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000da9fc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[10] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000daa00:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000daa04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000daa08:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 0);
    }
L_000daa0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000daa10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000db6ac;
        }
    }
L_000daa14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x0000005cu, 0, 0);
    }
L_000daa18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x0000000du, 0, 0);
    }
L_000daa1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000daa20:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000daa24:;
    {
        cpu->r[12] = 0x00000012u;
    }
L_000daa28:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000daa2c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000daa30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000daa34:;
    {
        cpu->r[14] = 0x000daa38u; fn_000ad19c(cpu);
    }
L_000daa38:;
    {
        cpu->r[3] = 0x0000a630u;
    }
L_000daa3c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000daa40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000daa44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daa48:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000daa4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001du, 1, 1);
    }
L_000daa50:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000daa54:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_000daa58:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000daa5c:;
    {
        cpu->r[14] = 0x000daa60u; fn_000a88e0(cpu);
    }
L_000daa60:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000daa64:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000daa68:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000daa6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daa70:;
    {
        cpu->r[14] = 0x000daa74u; fn_000a8910(cpu);
    }
L_000daa74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000038u, 0, 0);
    }
L_000daa78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000daa7c:;
    {
        cpu->r[1] = 0x0000001du;
    }
L_000daa80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000daa84:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000daa88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000bu, 0, 0);
    }
L_000daa8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daa90:;
    {
        cpu->r[14] = 0x000daa94u; fn_000ad8a0(cpu);
    }
L_000daa94:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000daa98:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000daa9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daaa0:;
    {
        cpu->r[14] = 0x000daaa4u; fn_000a88e0(cpu);
    }
L_000daaa4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000daaa8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000daaac:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000daab0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daab4:;
    {
        cpu->r[14] = 0x000daab8u; fn_000a8910(cpu);
    }
L_000daab8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000daabc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000daac0:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000daac4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000daac8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000daacc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000daad0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000daad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db668;
        }
    }
L_000daad8:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000daadc:;
    {
        cpu->r[1] = rd32(0x000daae4u + - 0x388u);
    }
L_000daae0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000daae4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000daae8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000daaf0u, cpu->r[1], 0, 0);
    }
L_000daaec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000daaf0:;
    {
        cpu->r[14] = 0x000daaf4u; fn_000ae830(cpu);
    }
L_000daaf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000005cu, 0, 0);
    }
L_000daaf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x0000000du, 0, 0);
    }
L_000daafc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dab00:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dab04:;
    {
        cpu->r[12] = 0x00000020u;
    }
L_000dab08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dab0c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dab10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dab14:;
    {
        cpu->r[14] = 0x000dab18u; fn_000ad19c(cpu);
    }
L_000dab18:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dab1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dab20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dab24:;
    {
        cpu->r[14] = 0x000dab28u; fn_000a88e0(cpu);
    }
L_000dab28:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dab2c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dab30:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000dab34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dab38:;
    {
        cpu->r[14] = 0x000dab3cu; fn_000a8910(cpu);
    }
L_000dab3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000dab40:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dab44:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000dab48:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000dab4c:;
    {
        cpu->r[14] = 0x000dab50u; fn_000962d0(cpu);
    }
L_000dab50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_000dab54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db608;
        }
    }
L_000dab58:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000dab5c:;
    {
        cpu->r[14] = 0x000dab60u; fn_000962d0(cpu);
    }
L_000dab60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_000dab64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db608;
        }
    }
L_000dab68:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_000dab6c:;
    {
        cpu->r[11] = rd32(0x000dab74u + - 0x414u);
    }
L_000dab70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dab74:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000dab78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000dab7c:;
    {
        cpu->r[11] = add_flags(cpu, 0x000dab84u, cpu->r[11], 0, 0);
    }
L_000dab80:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000dab84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000dab88:;
    {
        cpu->r[14] = 0x000dab8cu; fn_000ae830(cpu);
    }
L_000dab8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x0000002cu, 0, 0);
    }
L_000dab90:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dab94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dab98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dab9c:;
    {
        cpu->r[12] = 0x00000012u;
    }
L_000daba0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000005cu, 0, 0);
    }
L_000daba4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000daba8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dabac:;
    {
        cpu->r[14] = 0x000dabb0u; fn_000ad19c(cpu);
    }
L_000dabb0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dabb4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dabb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dabbc:;
    {
        cpu->r[14] = 0x000dabc0u; fn_000a88e0(cpu);
    }
L_000dabc0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dabc4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dabc8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000dabcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dabd0:;
    {
        cpu->r[14] = 0x000dabd4u; fn_000a8910(cpu);
    }
L_000dabd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000038u, 0, 0);
    }
L_000dabd8:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000dabdc:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000dabe0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dabe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000002au, 0, 0);
    }
L_000dabe8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dabec:;
    {
        cpu->r[14] = 0x000dabf0u; fn_000ad8a0(cpu);
    }
L_000dabf0:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dabf4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000dabf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dabfc:;
    {
        cpu->r[14] = 0x000dac00u; fn_000a88e0(cpu);
    }
L_000dac00:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dac04:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000dac08:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000dac0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dac10:;
    {
        cpu->r[14] = 0x000dac14u; fn_000a8910(cpu);
    }
L_000dac14:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dac18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dac1c:;
    {
        cpu->r[1] = rd32(0x000dac24u + - 0x4c0u);
    }
L_000dac20:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dac24:;
    {
        cpu->r[3] = 0x000010d4u;
    }
L_000dac28:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dac30u, cpu->r[1], 0, 0);
    }
L_000dac2c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000dac30:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000dac34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dac38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000dac3c:;
    {
        cpu->r[14] = 0x000dac40u; fn_000ae830(cpu);
    }
L_000dac40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000dac44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000005cu, 0, 0);
    }
L_000dac48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dac4c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dac50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_000dac54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dac58:;
    {
        cpu->r[12] = 0x00000020u;
    }
L_000dac5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dac60:;
    {
        cpu->r[14] = 0x000dac64u; fn_000ad19c(cpu);
    }
L_000dac64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dac68:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000dac6c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000dac70:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dac74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dac78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000dac7c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000dac80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dac84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000092u, 1, 0);
    }
L_000dac88:;
    {
        cpu->r[14] = 0x000dac8cu; fn_000ad8a0(cpu);
    }
L_000dac8c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dac90:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dac94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dac98:;
    {
        cpu->r[14] = 0x000dac9cu; fn_000a88e0(cpu);
    }
L_000dac9c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000daca0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000daca4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000daca8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dacac:;
    {
        cpu->r[14] = 0x000dacb0u; fn_000a8910(cpu);
    }
L_000dacb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x354u);
    }
L_000dacb4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dacbcu + + 0x394u);
    }
L_000dacb8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000dacbc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[7] + + 0x35cu);
    }
L_000dacc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000dacc8u + + 0x38cu);
    }
L_000dacc4:;
    {
        cpu->r[3] = 0x00004304u;
    }
L_000dacc8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000daccc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dacd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_000dacd4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dacd8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dacdc:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_000dace0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000dace8u + + 0x370u);
    }
L_000dace4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000dace8:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_000dacec:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x35cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dacf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db4fc;
        }
    }
L_000dacf4:;
    {
        cpu->r[2] = rd32(0x000dacfcu + + 0x370u);
    }
L_000dacf8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000dacfc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000dad00:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000dad04:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000dad08:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000078u, 1, 1);
    }
L_000dad0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000dad10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dad00;
        }
    }
L_000dad14:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000dad18:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dad1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dad24u + + 0x338u);
    }
L_000dad20:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000dad24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000dad2cu + + 0x334u);
    }
L_000dad28:;
    {
        cpu->r[1] = rd32(0x000dad30u + + 0x340u);
    }
L_000dad2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dad30:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dad38u, cpu->r[1], 0, 0);
    }
L_000dad34:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000dad38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000dad3c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dad40:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_000dad44:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000dad48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dad4c:;
    {
        vfp_vnmls(cpu, 15, 14, 13);
    }
L_000dad50:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dad54:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dad58:;
    {
        cpu->r[14] = 0x000dad5cu; fn_000ae830(cpu);
    }
L_000dad5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dad60:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000dad64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dad68:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dad6c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dad70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000023u, 0, 0);
    }
L_000dad74:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dad78:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000dad7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000dad80:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000dad84:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000dad88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dad8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000007eu, 1, 0);
    }
L_000dad90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000dad94:;
    {
        cpu->r[14] = 0x000dad98u; fn_000ad19c(cpu);
    }
L_000dad98:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dad9c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000dada0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dada4:;
    {
        cpu->r[14] = 0x000dada8u; fn_000a88e0(cpu);
    }
L_000dada8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dadac:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000dadb0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000dadb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dadb8:;
    {
        cpu->r[14] = 0x000dadbcu; fn_000a8910(cpu);
    }
L_000dadbc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dadc0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dadc4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000dadc8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dadcc:;
    {
        cpu->r[14] = 0x000dadd0u; fn_000f43ec(cpu);
    }
L_000dadd0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dadd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db58c;
        }
    }
L_000dadd8:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000daddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000005u, 0, 0);
    }
L_000dade0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dade4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dade8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000092u, 1, 0);
    }
L_000dadec:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000dadf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000dadf4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dadf8:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000dadfc:;
    {
        cpu->r[14] = 0x000dae00u; fn_000ad8a0(cpu);
    }
L_000dae00:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dae04:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dae08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dae0c:;
    {
        cpu->r[14] = 0x000dae10u; fn_000a88e0(cpu);
    }
L_000dae10:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dae14:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dae18:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000dae1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dae20:;
    {
        cpu->r[14] = 0x000dae24u; fn_000a8910(cpu);
    }
L_000dae24:;
    {
        cpu->r[3] = 0x0000192cu;
    }
L_000dae28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dae30u + + 0x220u);
    }
L_000dae2c:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_000dae30:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000dae34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000dae38:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000dae3c:;
    {
        cpu->r[14] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000dae40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dae44:;
    {
        cpu->r[2] = 0x00002710u;
    }
L_000dae48:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_000dae4c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x360u);
    }
L_000dae50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = cpu->r[2];
        }
    }
L_000dae54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00001f40u;
        }
    }
L_000dae58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dae5c:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_000dae60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_000dae64:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_000dae68:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x000dae70u + + 0x1d8u);
    }
L_000dae6c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000dae70:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000dae74:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000dae78:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000007cu, 1, 0);
    }
L_000dae7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_000dae80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dae84:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dae88:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 1);
    }
L_000dae8c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
        }
    }
L_000dae90:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
        }
    }
L_000dae94:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[14]; cpu->r[10] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000dae98:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[14] = v;
    }
L_000dae9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000001bu, 0, 0);
    }
L_000daea0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daea4:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 2u, &shc), cpu->r[14], 1, 0);
    }
L_000daea8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000daeac:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000daeb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000daeb8u + + 0x1acu);
    }
L_000daeb4:;
    {
        wr32(cpu->r[7] + + 0x360u, cpu->r[12]);
    }
L_000daeb8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000daebc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000daec4u + + 0x1a4u);
    }
L_000daec0:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000daec4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000daeccu + + 0x1e0u);
    }
L_000daec8:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_000daecc:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_000daed0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) - *vfp_d(cpu, 6);
    }
L_000daed4:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_000daed8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000daedc:;
    {
        cpu->r[14] = 0x000daee0u; fn_000abcec(cpu);
    }
L_000daee0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000daee4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000daee8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daeec:;
    {
        cpu->r[14] = 0x000daef0u; fn_000a88e0(cpu);
    }
L_000daef0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000daef4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000daef8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000daefc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daf00:;
    {
        cpu->r[14] = 0x000daf04u; fn_000a8910(cpu);
    }
L_000daf04:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000daf08:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000daf0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000daf10:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000daf14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db574;
        }
    }
L_000daf18:;
    {
        cpu->r[1] = rd32(0x000daf20u + + 0x154u);
    }
L_000daf1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000daf20:;
    {
        cpu->r[1] = add_flags(cpu, 0x000daf28u, cpu->r[1], 0, 0);
    }
L_000daf24:;
    {
        cpu->r[14] = 0x000daf28u; fn_000ae830(cpu);
    }
L_000daf28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000daf2c:;
    {
        cpu->r[11] = 0x00000011u;
    }
L_000daf30:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000daf34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000023u, 0, 0);
    }
L_000daf38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000daf3c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000daf40:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000daf44:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000daf48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000daf4c:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000daf50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000daf54:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000067u, 1, 0);
    }
L_000daf58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000daf5c:;
    {
        cpu->r[14] = 0x000daf60u; fn_000ad19c(cpu);
    }
L_000daf60:;
    {
        cpu->r[3] = 0x00004218u;
    }
L_000daf64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000daf68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000daf6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_000daf70:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000db01c;
        }
    }
L_000daf74:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_000daf78:;
    {
        cpu->r[2] = 0x00004210u;
    }
L_000daf7c:;
    {
        cpu->r[3] = 0x00004214u;
    }
L_000daf80:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000daf84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000daf88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000daf8c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000daf90:;
    {
        cpu->r[6] = 0x00000064u;
    }
L_000daf94:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000daf98:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000daf9c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_000dafa0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000dafa4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_000dafa8:;
    {
        cpu->r[14] = 0x000dafacu; fn_000adb30(cpu);
    }
L_000dafac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dafb0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 1);
    }
L_000dafb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db01c;
        }
    }
L_000dafb8:;
    {
        cpu->r[3] = 0x0000420cu;
    }
L_000dafbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dafc0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dafc4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_000dafc8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000db01c;
        }
    }
L_000dafcc:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x48u);
    }
L_000dafd0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000dafd4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000dafd8:;
    {
        wr32(cpu->r[14] + + 0x48u, cpu->r[2]);
    }
L_000dafdc:;
    {
        wr32(cpu->r[14] + + 0x4cu, cpu->r[0]);
    }
L_000dafe0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dafe4:;
    {
        cpu->r[14] = 0x000dafe8u; fn_000aeb58(cpu);
    }
L_000dafe8:;
    {
        cpu->r[1] = rd32(0x000daff0u + + 0x88u);
    }
L_000dafec:;
    {
        cpu->r[1] = add_flags(cpu, 0x000daff4u, cpu->r[1], 0, 0);
    }
L_000daff0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000daff4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000daff8:;
    {
        cpu->r[14] = 0x000daffcu; fn_000ae830(cpu);
    }
L_000daffc:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000db000:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000db004:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000db008:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000db00c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000db010:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000db014:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000db018:;
    {
        cpu->r[14] = 0x000db01cu; fn_000ad19c(cpu);
    }
L_000db01c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db020:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000db024:;
    {
        cpu->r[14] = 0x000db028u; fn_000d5ca0(cpu);
    }
L_000db028:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db02c:;
    {
        cpu->r[6] = 0x00005f60u;
    }
L_000db030:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000db034:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000db038:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000db03c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db5b8;
        }
    }
L_000db044:;
    {
        goto L_000db0b0;
    }
L_000db0b0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000db0b4:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000db0b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000db0bc:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000db0c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000db0c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db0c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000db0cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000db0d0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_000db0d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008c00u, 0, 0);
    }
L_000db0d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000000b0u, 0, 0);
    }
L_000db0dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000acu, 0, 0);
    }
L_000db0e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_000db0e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_000db0e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000db0ec:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x4u);
    }
L_000db0f0:;
    {
        cpu->r[12] = 0x00001c44u;
    }
L_000db0f4:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000db0f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000db0fc:;
    {
        cpu->r[14] = 0x000db100u; fn_000d9a88(cpu);
    }
L_000db100:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000db108:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000db10c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000db110:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000db114:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000db118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db4cc;
        }
    }
L_000db11c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db120:;
    {
        cpu->r[14] = 0x000db124u; fn_000d6328(cpu);
    }
L_000db124:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db128:;
    {
        cpu->r[14] = 0x000db12cu; fn_000d5560(cpu);
    }
L_000db12c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db130:;
    {
        cpu->r[14] = 0x000db134u; fn_000badd8(cpu);
    }
L_000db134:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db138:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000db13c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000db140:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db144:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000db148:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000db14c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db4f4;
        }
    }
L_000db150:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x41eu);
    }
L_000db154:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000db158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db4f4;
        }
    }
L_000db15c:;
    {
        cpu->r[14] = 0x000db160u; fn_00097ad0(cpu);
    }
L_000db160:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000db164:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000db168:;
    {
        cpu->r[14] = 0x000db16cu; fn_0018aa44(cpu);
    }
L_000db16c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db170:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000db174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dbe04;
        }
    }
L_000db178:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000db17c:;
    {
        cpu->r[3] = rd32(0x000db184u + - 0x108u);
    }
L_000db180:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000db184:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], 0x0000009cu, 0, 0);
    }
L_000db188:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000db18c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_000db190:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000db194:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000db19cu + - 0x108u);
    }
L_000db198:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000db1a0u + - 0x108u);
    }
L_000db19c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000db1a4u + - 0xf8u);
    }
L_000db1a0:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x000db1a8u + - 0x10cu);
    }
L_000db1a4:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x000db1acu + - 0x10cu);
    }
L_000db1a8:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x000db1b0u + - 0x10cu);
    }
L_000db1ac:;
    {
        *vfp_s(cpu, 25) = *(float*)G(0x000db1b4u + - 0x10cu);
    }
L_000db1b0:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000db1b4:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000db1b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000db1bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000db1c0:;
    {
        cpu->r[6] = rd32(cpu->r[10]);
    }
L_000db1c4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000db1c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000db1cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_000db1d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000db1d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000db1d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00001ce8u;
        }
    }
L_000db1dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00001cf0u;
        }
    }
L_000db1e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000db1e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000db1e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_000db1ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000db1f0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[0]);
        }
    }
L_000db1f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000db1f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db1fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x178u);
    }
L_000db200:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db204:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db2a0;
        }
    }
L_000db208:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000db20c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db2a0;
        }
    }
L_000db210:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000db214:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_000db218:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0010u << 16);
    }
L_000db21c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000db220:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_000db224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db2a0;
        }
    }
L_000db22c:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_000db230:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000db234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000db238:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db2a0;
        }
    }
L_000db23c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_000db240:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000db244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000db248:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_000db24c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000db250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000db254:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000db258:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000db25c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000db260:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_000db264:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000db268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x000003fcu, 0, 0);
    }
L_000db26c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000003fcu, 0, 0);
    }
L_000db270:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000db274:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_000db278:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000db27c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_000db280:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000db284:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_000db288:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 10u, &shc); cpu->r[12] = v;
    }
L_000db28c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 10u, &shc); cpu->r[1] = v;
    }
L_000db290:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_000db294:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[12]; cpu->r[1] = v;
    }
L_000db298:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000400u, 1, 1);
    }
L_000db29c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000db700;
        }
    }
L_000db2a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000db2a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000db2a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000007u, 1, 1);
    }
L_000db2ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db1b0;
        }
    }
L_000db2b0:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_000db2b4:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_000db2b8:;
    {
        cpu->r[0] = 0x00008c54u;
    }
L_000db2bc:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000db2c0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000db2c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000db2c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000db2cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x0000007cu, 0, 0);
    }
L_000db2d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000db2d4:;
    {
        cpu->r[6] = 0x00008548u;
    }
L_000db2d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000db2dc:;
    {
        cpu->r[14] = 0x000db2e0u; fn_000b82d8(cpu);
    }
L_000db2e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db2e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000db2e8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000db2ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000db2f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db2f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dbd88;
        }
    }
L_000db2f8:;
    {
        cpu->r[14] = 0x000db2fcu; fn_0018922c(cpu);
    }
L_000db2fc:;
    {
        cpu->r[3] = rd32(0x000db304u + - 0x284u);
    }
L_000db300:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db304:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db308:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db30c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000db5fc;
        }
    }
L_000db310:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db314:;
    {
        cpu->r[14] = 0x000db318u; fn_000b9e78(cpu);
    }
L_000db318:;
    {
        goto L_000da734;
    }
L_000db31c:;
    {
        cpu->r[10] = 0x00001be0u;
    }
L_000db320:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000db324:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000db328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db684;
        }
    }
L_000db32c:;
    {
        cpu->r[14] = 0x000db330u; fn_000a04f8(cpu);
    }
L_000db330:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000db334:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000db64c;
        }
    }
L_000db338:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_000db33c:;
    {
        cpu->r[11] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000db340:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000005u, 1, 1);
    }
L_000db344:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dbc9c;
        }
    }
L_000db348:;
    {
        cpu->r[12] = rd32(0x000db350u + - 0x2ccu);
    }
L_000db34c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000db350:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_000db354:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_000db358:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000db35c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000db360:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000db364:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000db368:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000db36c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000db370:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000db374:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000144u, 1, 0);
    }
L_000db378:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000db37c:;
    {
        cpu->r[14] = 0x000db380u; fn_000ad8a0(cpu);
    }
L_000db380:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000db384:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dbcd8;
        }
    }
L_000db388:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db38c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000db390:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000db394:;
    {
        goto L_000da8d8;
    }
L_000db398:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000db39c:;
    {
        cpu->r[14] = 0x000db3a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000db3a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db3a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da898;
        }
    }
L_000db3a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db3ac:;
    {
        cpu->r[14] = 0x000db3b0u; fn_0018aa20(cpu);
    }
L_000db3b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000db3b4:;
    {
        cpu->r[14] = 0x000db3b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000db3b8:;
    {
        cpu->r[3] = rd32(0x000db3c0u + - 0x334u);
    }
L_000db3bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db3c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db3c4:;
    {
        cpu->r[3] = rd32(0x000db3ccu + - 0x33cu);
    }
L_000db3c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db3cc:;
    {
        cpu->r[14] = 0x000db3d0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000db3d0:;
    {
        goto L_000da898;
    }
L_000db3d4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db3d8:;
    {
        cpu->r[14] = 0x000db3dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000db3dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da85c;
        }
    }
L_000db3e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db3e8:;
    {
        cpu->r[14] = 0x000db3ecu; fn_0018aa20(cpu);
    }
L_000db3ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db3f0:;
    {
        cpu->r[14] = 0x000db3f4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000db3f4:;
    {
        cpu->r[3] = rd32(0x000db3fcu + - 0x370u);
    }
L_000db3f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db3fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db400:;
    {
        cpu->r[3] = rd32(0x000db408u + - 0x378u);
    }
L_000db404:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db408:;
    {
        cpu->r[14] = 0x000db40cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000db40c:;
    {
        goto L_000da85c;
    }
L_000db410:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db414:;
    {
        cpu->r[14] = 0x000db418u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000db418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db41c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da820;
        }
    }
L_000db420:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db424:;
    {
        cpu->r[14] = 0x000db428u; fn_0018aa20(cpu);
    }
L_000db428:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db42c:;
    {
        cpu->r[14] = 0x000db430u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000db430:;
    {
        cpu->r[3] = rd32(0x000db438u + - 0x3acu);
    }
L_000db434:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db438:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db43c:;
    {
        cpu->r[3] = rd32(0x000db444u + - 0x3b4u);
    }
L_000db440:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db444:;
    {
        cpu->r[14] = 0x000db448u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000db448:;
    {
        goto L_000da820;
    }
L_000db44c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db450:;
    {
        cpu->r[14] = 0x000db454u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000db454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da7e4;
        }
    }
L_000db45c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db460:;
    {
        cpu->r[14] = 0x000db464u; fn_0018aa20(cpu);
    }
L_000db464:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db468:;
    {
        cpu->r[14] = 0x000db46cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000db46c:;
    {
        cpu->r[3] = rd32(0x000db474u + - 0x3e8u);
    }
L_000db470:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db474:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db478:;
    {
        cpu->r[3] = rd32(0x000db480u + - 0x3f0u);
    }
L_000db47c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db480:;
    {
        cpu->r[14] = 0x000db484u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000db484:;
    {
        goto L_000da7e4;
    }
L_000db488:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db48c:;
    {
        cpu->r[14] = 0x000db490u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000db490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000da7a4;
        }
    }
L_000db498:;
    {
        cpu->r[6] = rd32(0x000db4a0u + - 0x418u);
    }
L_000db49c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000db4a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db4a4:;
    {
        cpu->r[14] = 0x000db4a8u; fn_0018aa20(cpu);
    }
L_000db4a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000db4ac:;
    {
        cpu->r[14] = 0x000db4b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000db4b0:;
    {
        cpu->r[3] = rd32(0x000db4b8u + - 0x42cu);
    }
L_000db4b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000db4b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db4bc:;
    {
        cpu->r[3] = rd32(0x000db4c4u + - 0x434u);
    }
L_000db4c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000db4c4:;
    {
        cpu->r[14] = 0x000db4c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000db4c8:;
    {
        goto L_000da7a8;
    }
L_000db4cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000db4d0:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000db4d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db4d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00008c00u, 0, 0);
    }
L_000db4dc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000db4e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x000000b8u, 0, 0);
    }
L_000db4e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000b4u, 0, 0);
    }
L_000db4e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000db4ec:;
    {
        cpu->r[14] = 0x000db4f0u; fn_000d9a88(cpu);
    }
L_000db4f0:;
    {
        goto L_000db11c;
    }
L_000db4f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000db4f8:;
    {
        goto L_000db2b8;
    }
L_000db4fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000db500:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000db504:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000db508:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000db50c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000db510:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db514:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000db518:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_000db51c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000db520:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000db524:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000db528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000db530u + + 0x3a8u);
    }
L_000db52c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000db530:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000db534:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000db538:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000db53c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
        }
    }
L_000db540:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000db544:;
    {
        cpu->r[14] = 0x000db548u; fn_000f4468(cpu);
    }
L_000db548:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000db54c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000db550:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000db554:;
    {
        cpu->r[14] = 0x000db558u; fn_000ae830(cpu);
    }
L_000db558:;
    {
        cpu->r[14] = 0x000db55cu; fn_000a5994(cpu);
    }
L_000db55c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_000db560:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dad5c;
        }
    }
L_000db564:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000db568:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_000db56c:;
    {
        cpu->r[14] = 0x000db570u; fn_000a5c04(cpu);
    }
L_000db570:;
    {
        goto L_000dad5c;
    }
L_000db574:;
    {
        cpu->r[1] = rd32(0x000db57cu + + 0x368u);
    }
L_000db578:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000db57c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x340u);
    }
L_000db580:;
    {
        cpu->r[1] = add_flags(cpu, 0x000db588u, cpu->r[1], 0, 0);
    }
L_000db584:;
    {
        cpu->r[14] = 0x000db588u; fn_000ae830(cpu);
    }
L_000db588:;
    {
        goto L_000daf28;
    }
L_000db58c:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000db590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000005u, 0, 0);
    }
L_000db594:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000db598:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000db59c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000092u, 1, 0);
    }
L_000db5a0:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_000db5a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_000db5a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000db5ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000db5b0:;
    {
        cpu->r[14] = 0x000db5b4u; fn_000ad8a0(cpu);
    }
L_000db5b4:;
    {
        goto L_000dae00;
    }
L_000db5b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db5bc:;
    {
        cpu->r[14] = 0x000db5c0u; fn_000d8fa4(cpu);
    }
L_000db5c0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000db5c4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000db5c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db5cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db0b0;
        }
    }
L_000db5d0:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000db5d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000db5d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000db5dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000db5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db690;
        }
    }
L_000db5e4:;
    {
        cpu->r[3] = 0x00001b44u;
    }
L_000db5e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000db5ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000db5f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db5f4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000db11c;
        }
    }
L_000db5f8:;
    {
        goto L_000db0b0;
    }
L_000db5fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db600:;
    {
        cpu->r[14] = 0x000db604u; fn_000d5608(cpu);
    }
L_000db604:;
    {
        goto L_000db310;
    }
L_000db608:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 0);
    }
L_000db60c:;
    {
        goto L_000dab68;
    }
L_000db610:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 0);
    }
L_000db614:;
    {
        goto L_000da978;
    }
L_000db618:;
    {
        cpu->r[3] = 0x0000a630u;
    }
L_000db61c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000db620:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000db624:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000db628:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000db62c:;
    {
        cpu->r[3] = 0x0000a634u;
    }
L_000db630:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000db634:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000db638:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x0000ff22u;
        }
    }
L_000db63c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00ff0000u;
        }
    }
L_000db640:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0022u << 16);
        }
    }
L_000db644:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000db648:;
    {
        goto L_000da9c8;
    }
L_000db64c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000db650:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_000db654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000db658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db338;
        }
    }
L_000db65c:;
    {
        cpu->r[10] = rd32(0x000db664u + + 0x288u);
    }
L_000db660:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_000db664:;
    {
        goto L_000da8d8;
    }
L_000db668:;
    {
        cpu->r[2] = 0x000010dcu;
    }
L_000db66c:;
    {
        cpu->r[1] = rd32(0x000db674u + + 0x274u);
    }
L_000db670:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000db674:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000db678:;
    {
        cpu->r[1] = add_flags(cpu, 0x000db680u, cpu->r[1], 0, 0);
    }
L_000db67c:;
    {
        cpu->r[14] = 0x000db680u; fn_000ae830(cpu);
    }
L_000db680:;
    {
        goto L_000daaf4;
    }
L_000db684:;
    {
        cpu->r[3] = rd32(0x000db68cu + + 0x260u);
    }
L_000db688:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000db68c:;
    {
        goto L_000da8d8;
    }
L_000db690:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000db694:;
    {
        cpu->r[14] = 0x000db698u; fn_000d7468(cpu);
    }
L_000db698:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000db69c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[6]);
    }
L_000db6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000db6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000db0b0;
        }
    }
L_000db6a8:;
    {
        goto L_000db5e4;
    }
L_000db6ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000db6b0:;
    {
        cpu->r[1] = 0x0000a634u;
    }
L_000db6b4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000db6b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x0000000du, 0, 0);
    }
L_000db6bc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000db6c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x0000005cu, 0, 0);
    }
L_000db6c4:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x48u);
    }
L_000db6c8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000db6cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000db6d0:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[10]);
    }
L_000db6d4:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[12]);
    }
L_000db6d8:;
    {
        cpu->r[12] = 0x00000012u;
    }
L_000db6dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000db6e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000db6e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000db6e8:;
    {
        cpu->r[14] = 0x000db6ecu; fn_000ad19c(cpu);
    }
L_000db6ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000db6f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_000db6f4:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[10]);
    }
L_000db6f8:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[3]);
    }
L_000db6fc:;
    {
        goto L_000daa38;
    }
L_000db700:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_000db704:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000db708:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000db70c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_000db710:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db714:;
    {
        cpu->r[14] = 0x000db71cu;
    }
L_000db718:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000db71cu)) return;
    }
L_000db71c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000db720:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10cu);
    }
L_000db724:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000db728:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_000db72c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000db730:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000db734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000db738:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000db73c:;
    {
        vfp_vmul(cpu, 17, 15, 18);
    }
L_000db740:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000db744:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000db748:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db74c:;
    {
        cpu->r[14] = 0x000db754u;
    }
L_000db750:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000db754u)) return;
    }
L_000db754:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000db758:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_000db75c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000db760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000db764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000db768:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000db76c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000db770:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000db774:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000db778:;
    {
        cpu->r[14] = 0x000db780u;
    }
L_000db77c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000db780u)) return;
    }
L_000db780:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000db784:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xfcu);
    }
L_000db788:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000db78c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_000db790:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_000db794:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000db798:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000db79c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000db7a0:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_000db7a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000db7a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000db7ac:;
    {
        vfp_vmul(cpu, 19, 15, 18);
    }
L_000db7b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000db7b4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000db7b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000db7bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000db7c0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000db7c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000db7c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000db7cc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000db7d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000db7d4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000db7d8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000db7dc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000db7e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000db7e4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000db7e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000db7ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000db7f0:;
    {
        cpu->r[14] = 0x000db7f4u; fn_00155f80(cpu);
    }
L_000db7f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000180u, 0, 0);
    }
L_000db7f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000178u, 0, 0);
    }
L_000db7fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe8u);
    }
L_000db800:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x180u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000db804:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x178u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000db808:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000db80c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xf0u);
    }
L_000db810:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x17cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000db814:;
    {
        cpu->r[14] = 0x000db818u; fn_00156668(cpu);
    }
L_000db818:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_000db81c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_000db820:;
    {
        vfp_sync_flags(cpu);
    }
L_000db824:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000db840;
        }
    }
L_000db828:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_000db82c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_000db830:;
    {
        vfp_sync_flags(cpu);
    }
L_000db834:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000db828;
        }
    }
L_000db838:;
    {
        goto L_000db840;
    }
L_000db83c:;
    {
        vfp_vadd(cpu, 17, 17, 16);
    }
L_000db840:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), 0.0f);
    }
L_000db844:;
    {
        vfp_sync_flags(cpu);
    }
L_000db848:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000db83c;
        }
    }
L_000db84c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,20));
    }
L_000db850:;
    {
        vfp_sync_flags(cpu);
    }
L_000db854:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_000db858:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[4]);
        }
    }
L_000db85c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000db878;
        }
    }
L_000db860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000db868u + + 0x74u);
    }
L_000db864:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_000db868:;
    {
        vfp_sync_flags(cpu);
    }
L_000db86c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000db870:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000db874:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_000db878:;
    {
        vfp_vadd(cpu, 14, 17, 21);
    }
L_000db87c:;
    {
        vfp_vdiv(cpu, 15, 14, 22);
    }
L_000db880:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000db884:;
    {
        vfp_sync_flags(cpu);
    }
L_000db888:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000db890u + + 0x50u);
        }
    }
L_000db88c:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_000db890:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000db894:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000db898:;
    {
        vfp_vsub(cpu, 17, 25, 17);
    }
L_000db89c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_000db8a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000db8a4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000db8a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,23));
    }
L_000db8ac:;
    {
        vfp_sync_flags(cpu);
    }
L_000db8b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_000db8b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000db8b8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000db8bc:;
    {
        vfp_sync_flags(cpu);
    }
L_000db8c0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000db928;
        }
    }
L_000db8c4:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_000db8c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_000db8cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000db8d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000db8c4;
        }
    }
L_000db8d4:;
    {
        goto L_000db928;
    }
L_000db924:;
    {
        vfp_vadd(cpu, 17, 17, 16);
    }
L_000db928:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), 0.0f);
    }
L_000db92c:;
    {
        vfp_sync_flags(cpu);
    }
L_000db930:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000db924;
        }
    }
L_000db934:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000db938:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000170u, 0, 0);
    }
L_000db93c:;
    {
        cpu->r[14] = 0x000db940u; imp_cosf(cpu); /* cosf */
    }
L_000db940:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000db948u + - 0x38u);
    }
L_000db944:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000db948:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000db94c:;
    {
        vfp_vmul(cpu, 29, 14, 15);
    }
L_000db950:;
    {
        cpu->r[14] = 0x000db954u; imp_sinf(cpu); /* sinf */
    }
L_000db954:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000db95cu + - 0x48u);
    }
L_000db958:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000db95c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000db960:;
    {
        *(int32_t*)vfp_s(cpu,29) = (int32_t)*vfp_s(cpu,29);
    }
L_000db964:;
    {
        *vfp_s(cpu,27) = (float)*(int32_t*)vfp_s(cpu,29);
    }
L_000db968:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000db96c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000db970:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000db974:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000db978:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000db97c:;
    {
        cpu->r[14] = 0x000db980u; fn_000a8940(cpu);
    }
L_000db980:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000db984:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000db988:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000db98c:;
    {
        cpu->r[14] = 0x000db990u; fn_000a897c(cpu);
    }
L_000db990:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000db994:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000db998:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000168u, 0, 0);
    }
L_000db99c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000db9a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000db9a4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
        }
    }
L_000db9a8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_000db9ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000db9b0:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000db9b8u + - 0xa0u);
        }
    }
L_000db9b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000db9b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000150u, 0, 0);
    }
L_000db9bc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_000db9c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000158u, 0, 0);
    }
L_000db9c4:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000db9c8:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 26) = *(float*)G(0x000db9d0u + - 0xb4u);
        }
    }
L_000db9cc:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000db9d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x168u) = *(uint32_t*)vfp_s(cpu, 27);
    }
L_000db9d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000db9d8:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_000db9dc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_000db9e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_000db9e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_000db9e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000db9ec:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000db9f0:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000005u, cpu->r[12], 1, 0);
    }
L_000db9f4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000db9f8:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000db9fc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dba00:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000064u, cpu->r[12], 1, 0);
    }
L_000dba04:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_000dba08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dba0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000dba10:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000dba14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000160u, 0, 0);
    }
L_000dba18:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_000dba1c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dba20:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,26) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_000dba24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_000dba28:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,26);
        }
    }
L_000dba2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x16cu) = *(uint32_t*)vfp_s(cpu, 26);
    }
L_000dba30:;
    {
        *vfp_s(cpu,24) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000dba34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000dba38:;
    {
        vfp_vdiv(cpu, 17, 27, 15);
    }
L_000dba3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dba44u + - 0x128u);
    }
L_000dba40:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x164u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dba44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x170u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dba48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x174u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dba4c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x160u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dba50:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[14];
    }
L_000dba54:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x15cu) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_000dba58:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x154u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_000dba5c:;
    {
        *vfp_s(cpu,28) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dba60:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000dba64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x158u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_000dba68:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x150u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000dba6c:;
    {
        cpu->r[14] = 0x000dba70u; fn_00155864(cpu);
    }
L_000dba70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dba74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dbdc8;
        }
    }
L_000dba78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dba7c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000006eu, 1, 0);
    }
L_000dba80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000dba84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000148u, 0, 0);
    }
L_000dba88:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000dba8c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000dba90:;
    {
        *vfp_s(cpu,30) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000dba94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000140u, 0, 0);
    }
L_000dba98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dba9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x148u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_000dbaa0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000dbaa4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x140u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000dbaa8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dbaac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14cu) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_000dbab0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x144u) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_000dbab4:;
    {
        cpu->r[14] = 0x000dbab8u; fn_00155864(cpu);
    }
L_000dbab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dbabc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dbde8;
        }
    }
L_000dbac0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_000dbac4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000138u, 0, 0);
    }
L_000dbac8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000130u, 0, 0);
    }
L_000dbacc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dbad0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000dbad4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x138u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_000dbad8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x13cu) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_000dbadc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x130u) = *(uint32_t*)vfp_s(cpu, 28);
    }
L_000dbae0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x134u) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_000dbae4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000dbae8:;
    {
        cpu->r[14] = 0x000dbaecu; fn_00155864(cpu);
    }
L_000dbaec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dbaf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dbe3c;
        }
    }
L_000dbaf4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x40u);
    }
L_000dbaf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_000dbafc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dbb00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000120u, 0, 0);
    }
L_000dbb04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000dbb08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x128u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000dbb0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000dbb10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x12cu) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_000dbb14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x124u) = *(uint32_t*)vfp_s(cpu, 30);
    }
L_000dbb18:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000dbb1c:;
    {
        cpu->r[14] = 0x000dbb20u; fn_00155864(cpu);
    }
L_000dbb20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dbb24:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 29);
        }
    }
L_000dbb28:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 15, 19, 17);
        }
    }
L_000dbb2c:;
    {
        if (cond_test(cpu, 2)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_000dbb30:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,26) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_000dbb34:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000dbb38:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,19) = *vfp_s(cpu,27);
        }
    }
L_000dbb3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000118u, 0, 0);
    }
L_000dbb40:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000dbb44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 26);
    }
L_000dbb48:;
    {
        cpu->r[14] = 0x000dbb4cu; fn_00156034(cpu);
    }
L_000dbb4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x118u);
    }
L_000dbb50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dbb58u + - 0x238u);
    }
L_000dbb54:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000dbb58:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x11cu);
    }
L_000dbb5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dbb60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dbb64:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dbb68:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000dbb6c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000dbb70:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dbb74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000dbb78:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000dbb7c:;
    {
        cpu->r[14] = rd32(cpu->r[2]);
    }
L_000dbb80:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000dbb84:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000dbb88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000dbb8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_000dbb90:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dbb94:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000dbb98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x118u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000dbb9c:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 1u, &shc); cpu->r[14] = v;
    }
L_000dbba0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dbba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_000dbba8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000dbbac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x11cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbbb0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dbbb4:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000dbbb8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 0);
    }
L_000dbbbc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dbbc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000dbbc4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000dbbc8:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dbbcc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[4], 1, 0);
    }
L_000dbbd0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dbbd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_000dbbd8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000dbbdc:;
    {
        cpu->r[14] = 0x000dbbe0u; fn_000ad8a0(cpu);
    }
L_000dbbe0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dbbe4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dbbe8:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_000dbbec:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_000dbbf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_000dbbf4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dbbf8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_000dbbfc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000dbc00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000dbc04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000dbc08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dbc0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000dbc10:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_000dbc14:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000dbc18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000dbc1c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000dbc20:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
    }
L_000dbc24:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[1]);
    }
L_000dbc28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000dbc2c:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[14]);
    }
L_000dbc30:;
    {
        wr32(cpu->r[13] + + 0xe4u, cpu->r[3]);
    }
L_000dbc34:;
    {
        cpu->r[14] = 0x000dbc38u; fn_0018572c(cpu);
    }
L_000dbc38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_000dbc3c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000dbc40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x000f0000u;
        }
    }
L_000dbc44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dbc78;
        }
    }
L_000dbc48:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 4u, &shc), cpu->r[0], 1, 0);
    }
L_000dbc4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000bb0u, 1, 0);
    }
L_000dbc50:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_000dbc54:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_000dbc58:;
    {
        cpu->r[3] = sub_flags(cpu, 0x0000000fu, cpu->r[3], 1, 0);
    }
L_000dbc5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000dbc60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00040000u;
        }
    }
L_000dbc64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dbc78;
        }
    }
L_000dbc68:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000dbc6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_000dbc70:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[12] = v;
    }
L_000dbc74:;
    {
        uint32_t v = cpu->r[12] & 0x00ff0000u; cpu->r[12] = v;
    }
L_000dbc78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dbc7c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000dbc80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dbc84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dbc88:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dbc8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dbc90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dbc94:;
    {
        cpu->r[14] = 0x000dbc98u; fn_000ad8a0(cpu);
    }
L_000dbc98:;
    {
        goto L_000db2a0;
    }
L_000dbc9c:;
    {
        cpu->r[3] = rd32(0x000dbca4u + - 0x3b8u);
    }
L_000dbca0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dbca4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000dbca8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbcac:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000dbcb0:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_000dbcb4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000dbcb8:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_000dbcbc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dbcc0:;
    {
        cpu->r[11] = 0x00000005u;
    }
L_000dbcc4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dbcc8:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_000dbccc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000144u, 1, 0);
    }
L_000dbcd0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000dbcd4:;
    {
        cpu->r[14] = 0x000dbcd8u; fn_000ad8a0(cpu);
    }
L_000dbcd8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dbcdc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbce0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ccu, 0, 0);
    }
L_000dbce4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_000dbce8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000dbcec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dbcf0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dbcf4:;
    {
        cpu->r[8] = cpu->r[12];
    }
L_000dbcf8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000dbcfc:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_000dbd00:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000dbd04:;
    {
        cpu->r[14] = 0x000dbd08u; fn_000a8a2c(cpu);
    }
L_000dbd08:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_000dbd0c:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000dbd10:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dbd14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000dbd18:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_000dbd1c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000dbd20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbd24:;
    {
        cpu->r[14] = 0x000dbd28u; fn_000a88e0(cpu);
    }
L_000dbd28:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_000dbd2c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000dbd30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000dbd34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbd38:;
    {
        cpu->r[14] = 0x000dbd3cu; fn_000a8910(cpu);
    }
L_000dbd3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dbd40:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000dbd44:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000dbd48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000dbd4c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000dbd50:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000144u, 1, 0);
    }
L_000dbd54:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000dbd58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_000dbd5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000dbd60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbd64:;
    {
        cpu->r[14] = 0x000dbd68u; fn_000ad8a0(cpu);
    }
L_000dbd68:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_000dbd6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000dbd14;
        }
    }
L_000dbd70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000dbd74:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_000dbd78:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dbd7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dbd80:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dbd84:;
    {
        goto L_000da8d8;
    }
L_000dbd88:;
    {
        cpu->r[1] = rd32(0x000dbd90u + - 0x4a0u);
    }
L_000dbd8c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dbd90:;
    {
        cpu->r[12] = rd32(0x000dbd98u + - 0x4a4u);
    }
L_000dbd94:;
    {
        cpu->r[14] = 0x00002f89u;
    }
L_000dbd98:;
    {
        cpu->r[2] = rd32(0x000dbda0u + - 0x4a8u);
    }
L_000dbd9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dbda4u, cpu->r[1], 0, 0);
    }
L_000dbda0:;
    {
        cpu->r[3] = rd32(0x000dbda8u + - 0x4acu);
    }
L_000dbda4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000dbdacu, cpu->r[12], 0, 0);
    }
L_000dbda8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dbdb0u, cpu->r[2], 0, 0);
    }
L_000dbdac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000378u, 0, 0);
    }
L_000dbdb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dbdb8u, cpu->r[3], 0, 0);
    }
L_000dbdb4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000dbdb8:;
    {
        cpu->r[14] = 0x000dbdbcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dbdbc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000dbdc0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000dbdc4:;
    {
        goto L_000db2f8;
    }
L_000dbdc8:;
    {
        vfp_vmul(cpu, 15, 17, 24);
    }
L_000dbdcc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dbdd0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000dbdd4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dbdd8:;
    {
        *vfp_s(cpu,26) = *vfp_s(cpu,24);
    }
L_000dbddc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbde0:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dbde4:;
    {
        goto L_000dbb3c;
    }
L_000dbde8:;
    {
        vfp_vmul(cpu, 15, 17, 30);
    }
L_000dbdec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_000dbdf0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dbdf4:;
    {
        *vfp_s(cpu,26) = *vfp_s(cpu,30);
    }
L_000dbdf8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbdfc:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dbe00:;
    {
        goto L_000dbb3c;
    }
L_000dbe04:;
    {
        cpu->r[1] = rd32(0x000dbe0cu + - 0x50cu);
    }
L_000dbe08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000dbe0c:;
    {
        cpu->r[12] = rd32(0x000dbe14u + - 0x510u);
    }
L_000dbe10:;
    {
        cpu->r[14] = 0x00002e98u;
    }
L_000dbe14:;
    {
        cpu->r[2] = rd32(0x000dbe1cu + - 0x514u);
    }
L_000dbe18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dbe20u, cpu->r[1], 0, 0);
    }
L_000dbe1c:;
    {
        cpu->r[3] = rd32(0x000dbe24u + - 0x518u);
    }
L_000dbe20:;
    {
        cpu->r[12] = add_flags(cpu, 0x000dbe28u, cpu->r[12], 0, 0);
    }
L_000dbe24:;
    {
        cpu->r[2] = add_flags(cpu, 0x000dbe2cu, cpu->r[2], 0, 0);
    }
L_000dbe28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000378u, 0, 0);
    }
L_000dbe2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000dbe34u, cpu->r[3], 0, 0);
    }
L_000dbe30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000dbe34:;
    {
        cpu->r[14] = 0x000dbe38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000dbe38:;
    {
        goto L_000db178;
    }
L_000dbe3c:;
    {
        vfp_vdiv(cpu, 15, 28, 17);
    }
L_000dbe40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dbe44:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000dbe48:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dbe4c:;
    {
        *vfp_s(cpu,19) = *vfp_s(cpu,28);
    }
L_000dbe50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbe54:;
    {
        *vfp_s(cpu,26) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dbe58:;
    {
        goto L_000dbb3c;
    }
}

/* _ZN5Scene6RenderEv @ 000dbe60 (arm) */
void fn_000dbe60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dbe60:;
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
L_000dbe64:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000dbe68:;
    {
        cpu->r[4] = rd32(0x000dbe70u + + 0x35cu);
    }
L_000dbe6c:;
    {
        cpu->r[2] = rd32(0x000dbe74u + + 0x35cu);
    }
L_000dbe70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000dbe74:;
    {
        cpu->r[4] = add_flags(cpu, 0x000dbe7cu, cpu->r[4], 0, 0);
    }
L_000dbe78:;
    {
        cpu->r[8] = rd32(0x000dbe80u + + 0x354u);
    }
L_000dbe7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001acu, 1, 0);
    }
L_000dbe80:;
    {
        cpu->r[1] = rd32(0x000dbe88u + + 0x350u);
    }
L_000dbe84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000dbe88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dbe8c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dbe90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dbe94:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_000dbe98:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000dbe9c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000dbea0:;
    {
        wr32(cpu->r[13] + + 0x1a4u, cpu->r[3]);
    }
L_000dbea4:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_000dbea8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000dbeac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dbeb0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_000dbeb4:;
    {
        cpu->r[1] = 0xff000000u;
    }
L_000dbeb8:;
    {
        wr32(cpu->r[2] + + 0x3f0u, cpu->r[0]);
    }
L_000dbebc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbec0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_000dbec4:;
    {
        cpu->r[3] = 0x00001294u;
    }
L_000dbec8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dbecc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000dbed0:;
    {
        cpu->r[14] = 0x000dbed4u; fn_0012dd58(cpu);
    }
L_000dbed4:;
    {
        cpu->r[3] = 0x0000a638u;
    }
L_000dbed8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dbedc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dbee0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dbee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dbfac;
        }
    }
L_000dbee8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dbeec:;
    {
        cpu->r[14] = 0x000dbef0u; fn_000960a4(cpu);
    }
L_000dbef0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dbef4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc71c;
        }
    }
L_000dbef8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbefc:;
    {
        cpu->r[14] = 0x000dbf00u; fn_00131630(cpu);
    }
L_000dbf00:;
    {
        wr32(cpu->r[0] + + 0x110u, cpu->r[7]);
    }
L_000dbf04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbf08:;
    {
        cpu->r[14] = 0x000dbf0cu; fn_00131630(cpu);
    }
L_000dbf0c:;
    {
        cpu->r[3] = 0x0000a638u;
    }
L_000dbf10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dbf14:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dbf18:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000dbf1c:;
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
        cpu->r[7] = base + 16u;
    }
L_000dbf20:;
    {
        cpu->r[14] = cpu->r[12];
    }
L_000dbf24:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_000dbf28:;
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
        cpu->r[7] = base + 16u;
    }
L_000dbf2c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_000dbf30:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000dbf34:;
    {
        wr8(cpu->r[14], cpu->r[3]);
    }
L_000dbf38:;
    {
        cpu->r[14] = rd8(cpu->r[12] + + 0x3u);
    }
L_000dbf3c:;
    {
        cpu->r[0] = rd8(cpu->r[12] + + 0x15u);
    }
L_000dbf40:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x5u);
    }
L_000dbf44:;
    {
        cpu->r[11] = rd8(cpu->r[12]);
    }
L_000dbf48:;
    {
        cpu->r[9] = rd8(cpu->r[12] + + 0x1u);
    }
L_000dbf4c:;
    {
        cpu->r[10] = rd8(cpu->r[12] + + 0x14u);
    }
L_000dbf50:;
    {
        cpu->r[7] = rd8(cpu->r[12] + + 0x2u);
    }
L_000dbf54:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x4u);
    }
L_000dbf58:;
    {
        wr8(cpu->r[12] + + 0xe0u, cpu->r[14]);
    }
L_000dbf5c:;
    {
        wr8(cpu->r[12] + + 0xe1u, cpu->r[0]);
    }
L_000dbf60:;
    {
        wr8(cpu->r[12] + + 0xdcu, cpu->r[11]);
    }
L_000dbf64:;
    {
        wr8(cpu->r[12] + + 0xddu, cpu->r[9]);
    }
L_000dbf68:;
    {
        wr8(cpu->r[12] + + 0xdeu, cpu->r[10]);
    }
L_000dbf6c:;
    {
        wr8(cpu->r[12] + + 0xdfu, cpu->r[7]);
    }
L_000dbf70:;
    {
        wr8(cpu->r[12] + + 0xe2u, cpu->r[1]);
    }
L_000dbf74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_000dbf78:;
    {
        wr8(cpu->r[12] + + 0xe3u, cpu->r[2]);
    }
L_000dbf7c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbf80:;
    {
        cpu->r[14] = rd8(cpu->r[12] + + 0x16u);
    }
L_000dbf84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x10u);
    }
L_000dbf88:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0xcu);
    }
L_000dbf8c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000dbf90:;
    {
        cpu->r[1] = rd8(cpu->r[12] + + 0x17u);
    }
L_000dbf94:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x18u);
    }
L_000dbf98:;
    {
        wr8(cpu->r[12] + + 0xf6u, cpu->r[3]);
    }
L_000dbf9c:;
    {
        wr8(cpu->r[12] + + 0xe4u, cpu->r[14]);
    }
L_000dbfa0:;
    {
        wr32(cpu->r[12] + + 0xe8u, cpu->r[0]);
    }
L_000dbfa4:;
    {
        wr8(cpu->r[12] + + 0xf4u, cpu->r[1]);
    }
L_000dbfa8:;
    {
        wr8(cpu->r[12] + + 0xf5u, cpu->r[2]);
    }
L_000dbfac:;
    {
        cpu->r[11] = rd32(0x000dbfb4u + + 0x228u);
    }
L_000dbfb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbfb4:;
    {
        cpu->r[14] = 0x000dbfb8u; fn_00131630(cpu);
    }
L_000dbfb8:;
    {
        cpu->r[9] = rd32(0x000dbfc0u + + 0x220u);
    }
L_000dbfbc:;
    {
        cpu->r[14] = 0x000dbfc0u; fn_001324e4(cpu);
    }
L_000dbfc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dbfc4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dbfc8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dbfcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dbfd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbfd4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000dbfd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dbfdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dbfe0:;
    {
        cpu->r[14] = 0x000dbfe4u; fn_00130908(cpu);
    }
L_000dbfe4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dbfe8:;
    {
        cpu->r[14] = 0x000dbfecu; fn_0012f780(cpu);
    }
L_000dbfec:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000dbff0:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_000dbff4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dbff8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dbffc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000dc000:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dc004:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc008:;
    {
        cpu->r[14] = 0x000dc010u;
    }
L_000dc00c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dc010u)) return;
    }
L_000dc010:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000dc014:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc018:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dc020u + + 0x1a0u);
    }
L_000dc01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000dc020:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000dc024:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000dc028:;
    {
        vfp_sync_flags(cpu);
    }
L_000dc02c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc238;
        }
    }
L_000dc030:;
    {
        cpu->r[1] = 0x00003333u;
    }
L_000dc034:;
    {
        cpu->r[2] = 0x00003333u;
    }
L_000dc038:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3f73u << 16);
    }
L_000dc03c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc040:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3f33u << 16);
    }
L_000dc044:;
    {
        cpu->r[14] = 0x000dc048u; fn_0012e478(cpu);
    }
L_000dc048:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000dc04c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc050:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc054:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x8u);
    }
L_000dc058:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dc05c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcb44;
        }
    }
L_000dc060:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dc064:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000dc068:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xd8u);
    }
L_000dc06c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dc070:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_000dc074:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000dc078:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000dc07c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dc080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000dc084:;
    {
        cpu->r[14] = 0x000dc088u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000dc088:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dc08c:;
    {
        cpu->r[1] = 0x000042d4u;
    }
L_000dc090:;
    {
        cpu->r[14] = 0x000042d5u;
    }
L_000dc094:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000dc098:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000dc09c:;
    {
        cpu->r[0] = 0x000042d6u;
    }
L_000dc0a0:;
    {
        cpu->r[12] = 0x000042d7u;
    }
L_000dc0a4:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[1]);
    }
L_000dc0a8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000dc0ac:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000dc0b0:;
    {
        cpu->r[2] = 0x000042d8u;
    }
L_000dc0b4:;
    {
        cpu->r[3] = 0x000042d9u;
    }
L_000dc0b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000dc0bc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_000dc0c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc0c4:;
    {
        cpu->r[14] = rd8(cpu->r[5] + cpu->r[14]);
    }
L_000dc0c8:;
    {
        cpu->r[1] = 0x0000851fu;
    }
L_000dc0cc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x51ebu << 16);
    }
L_000dc0d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dc0d8u + + 0xecu);
    }
L_000dc0d4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_000dc0d8:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_000dc0dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dc0e0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dc0e4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000dc0e8:;
    {
        cpu->r[0] = 0x000042b4u;
    }
L_000dc0ec:;
    {
        cpu->r[12] = rd8(cpu->r[5] + cpu->r[12]);
    }
L_000dc0f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000dc0f4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[2]);
    }
L_000dc0f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000dc0fc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_000dc100:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dc104:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc108:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_000dc10c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[12] = v;
    }
L_000dc110:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000dc114:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_000dc118:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[2] = v;
    }
L_000dc11c:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_000dc120:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_000dc124:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc128:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[12]; cpu->r[14] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_000dc12c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000dc130:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000dc134:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_000dc138:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[2]; cpu->r[10] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_000dc13c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000dc140:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[10] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000dc144:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000dc148:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000dc14c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dc150:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 5u, &shc), 1, 0);
    }
L_000dc154:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dc158:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_000dc15c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[10], 1, 5u, &shc), 1, 0);
    }
L_000dc160:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000dc164:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000dc168:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc16c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dc170:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_000dc174:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, 5u, &shc), 1, 0);
    }
L_000dc178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000dc17c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_000dc180:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000dc184:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000dc188:;
    {
        cpu->r[14] = 0x000dc18cu; fn_0012e514(cpu);
    }
L_000dc18c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[7];
    }
L_000dc190:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000dc194:;
    {
        cpu->r[0] = 0x00000b62u;
    }
L_000dc198:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_000dc19c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dc1a4u + + 0x24u);
    }
L_000dc1a0:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000dc1a4:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_000dc1a8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dc1ac:;
    {
        cpu->r[14] = 0x000dc1b0u; imp_glFogf(cpu); /* glFogf */
    }
L_000dc1b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc1b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000dc1b8:;
    {
        cpu->r[14] = 0x000dc1bcu; fn_0012e4c8(cpu);
    }
L_000dc1bc:;
    {
        goto L_000dc2b0;
    }
L_000dc238:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000dc23c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc240:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc244:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8u);
    }
L_000dc248:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc24c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc030;
        }
    }
L_000dc250:;
    {
        cpu->r[1] = 0x000042d4u;
    }
L_000dc254:;
    {
        cpu->r[2] = 0x000042d5u;
    }
L_000dc258:;
    {
        cpu->r[3] = 0x000042d6u;
    }
L_000dc25c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000dc260:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000dc264:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc268:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[1]);
    }
L_000dc26c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc270:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dc274:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[2]);
    }
L_000dc278:;
    {
        cpu->r[14] = 0x000dc27cu; fn_0012e514(cpu);
    }
L_000dc27c:;
    {
        cpu->r[2] = 0x0000e148u;
    }
L_000dc280:;
    {
        cpu->r[1] = 0x00003333u;
    }
L_000dc284:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc288:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3f7au << 16);
    }
L_000dc28c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3f33u << 16);
    }
L_000dc290:;
    {
        cpu->r[14] = 0x000dc294u; fn_0012e478(cpu);
    }
L_000dc294:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc298:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000dc29c:;
    {
        cpu->r[14] = 0x000dc2a0u; fn_0012e4c8(cpu);
    }
L_000dc2a0:;
    {
        cpu->r[1] = 0x0000c5acu;
    }
L_000dc2a4:;
    {
        cpu->r[0] = 0x00000b62u;
    }
L_000dc2a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3727u << 16);
    }
L_000dc2ac:;
    {
        cpu->r[14] = 0x000dc2b0u; imp_glFogf(cpu); /* glFogf */
    }
L_000dc2b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc2b4:;
    {
        cpu->r[10] = rd32(0x000dc2bcu + - 0xd8u);
    }
L_000dc2b8:;
    {
        cpu->r[14] = 0x000dc2bcu; fn_0012e0e8(cpu);
    }
L_000dc2bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc2c0:;
    {
        cpu->r[14] = 0x000dc2c4u; fn_000bea18(cpu);
    }
L_000dc2c4:;
    {
        cpu->r[3] = rd32(0x000dc2ccu + - 0xe4u);
    }
L_000dc2c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc2cc:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_000dc2d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc2d4:;
    {
        cpu->r[14] = 0x000dc2d8u; imp_memset(cpu); /* memset */
    }
L_000dc2d8:;
    {
        cpu->r[3] = rd32(0x000dc2e0u + - 0xf4u);
    }
L_000dc2dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc2e0:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_000dc2e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc2e8:;
    {
        cpu->r[14] = 0x000dc2ecu; imp_memset(cpu); /* memset */
    }
L_000dc2ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc2f0:;
    {
        cpu->r[14] = 0x000dc2f4u; fn_000c270c(cpu);
    }
L_000dc2f4:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000dc2f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000dc2fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dc300:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc304:;
    {
        cpu->r[14] = 0x000dc30cu;
    }
L_000dc308:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dc30cu)) return;
    }
L_000dc30c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dc310:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dca00;
        }
    }
L_000dc31c:;
    {
        cpu->r[3] = rd32(0x000dc324u + - 0x134u);
    }
L_000dc320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc324:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc328:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc9ec;
        }
    }
L_000dc330:;
    {
        cpu->r[3] = rd32(0x000dc338u + - 0x144u);
    }
L_000dc334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc338:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc33c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc9dc;
        }
    }
L_000dc344:;
    {
        cpu->r[2] = 0x00001c60u;
    }
L_000dc348:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000dc34c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc350:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dc354:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x0000a100u, 0, 0);
    }
L_000dc358:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000054u, 0, 0);
    }
L_000dc35c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000dc360:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc364:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc368:;
    {
        cpu->r[14] = 0x000dc36cu; fn_0012c968(cpu);
    }
L_000dc36c:;
    {
        cpu->r[3] = rd32(0x000dc374u + - 0x17cu);
    }
L_000dc370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc374:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc37c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc9c8;
        }
    }
L_000dc380:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc384:;
    {
        cpu->r[14] = 0x000dc388u; fn_000be228(cpu);
    }
L_000dc388:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc38c:;
    {
        cpu->r[14] = 0x000dc390u; fn_000bbb0c(cpu);
    }
L_000dc390:;
    {
        cpu->r[3] = rd32(0x000dc398u + - 0x19cu);
    }
L_000dc394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc398:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc39c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc3a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc9b8;
        }
    }
L_000dc3a4:;
    {
        cpu->r[3] = rd32(0x000dc3acu + - 0x1acu);
    }
L_000dc3a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc3ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc3b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc3b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc9a4;
        }
    }
L_000dc3b8:;
    {
        cpu->r[3] = rd32(0x000dc3c0u + - 0x1bcu);
    }
L_000dc3bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc3c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc3c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc3c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc990;
        }
    }
L_000dc3cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dc3d0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dc3d4:;
    {
        cpu->r[14] = 0x000dc3d8u; fn_0012e0e8(cpu);
    }
L_000dc3d8:;
    {
        cpu->r[3] = rd32(0x000dc3e0u + - 0x1d8u);
    }
L_000dc3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc3e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc3e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc3e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc97c;
        }
    }
L_000dc3ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc3f0:;
    {
        cpu->r[14] = 0x000dc3f4u; fn_000be228(cpu);
    }
L_000dc3f4:;
    {
        cpu->r[3] = rd32(0x000dc3fcu + - 0x1f0u);
    }
L_000dc3f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc3fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc404:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc96c;
        }
    }
L_000dc408:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dc40c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc95c;
        }
    }
L_000dc418:;
    {
        cpu->r[3] = rd32(0x000dc420u + - 0x210u);
    }
L_000dc41c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc420:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc950;
        }
    }
L_000dc42c:;
    {
        cpu->r[3] = rd32(0x000dc434u + - 0x220u);
    }
L_000dc430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc434:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc43c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc944;
        }
    }
L_000dc440:;
    {
        cpu->r[3] = rd32(0x000dc448u + - 0x230u);
    }
L_000dc444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc448:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc44c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc934;
        }
    }
L_000dc454:;
    {
        cpu->r[3] = rd32(0x000dc45cu + - 0x240u);
    }
L_000dc458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc45c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc464:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc928;
        }
    }
L_000dc468:;
    {
        cpu->r[3] = rd32(0x000dc470u + - 0x250u);
    }
L_000dc46c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc470:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc474:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc914;
        }
    }
L_000dc47c:;
    {
        cpu->r[3] = rd32(0x000dc484u + - 0x260u);
    }
L_000dc480:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc484:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc488:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc48c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc900;
        }
    }
L_000dc490:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000dc494:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc498:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000dc49c:;
    {
        cpu->r[14] = 0x000dc4a0u; fn_0012e11c(cpu);
    }
L_000dc4a0:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000dc4a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000dc4a8:;
    {
        cpu->r[14] = 0x000dc4acu; fn_000f3430(cpu);
    }
L_000dc4ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000dc4b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dc4b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001c0du;
        }
    }
L_000dc4b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001c0du;
        }
    }
L_000dc4bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000dc4c0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
        }
    }
L_000dc4c4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_000dc4c8:;
    {
        cpu->r[3] = 0x000083f0u;
    }
L_000dc4cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc4d0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dc4d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc4d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc8d0;
        }
    }
L_000dc4dc:;
    {
        cpu->r[0] = rd32(0x000dc4e4u + - 0x2bcu);
    }
L_000dc4e0:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000dc4e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc4e8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000dc4ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc4f0:;
    {
        cpu->r[14] = 0x000dc4f4u; fn_0015b960(cpu);
    }
L_000dc4f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc4f8:;
    {
        cpu->r[14] = 0x000dc4fcu; fn_000be228(cpu);
    }
L_000dc4fc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dc500:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dc504:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc508:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dc50c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc510:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000dc514:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000dc518:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc51c:;
    {
        cpu->r[14] = 0x000dc520u; fn_0012ed70(cpu);
    }
L_000dc520:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000dc524:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc528:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000dc52c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dc530:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc534:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc538:;
    {
        cpu->r[14] = 0x000dc53cu; fn_0012fa2c(cpu);
    }
L_000dc53c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc540:;
    {
        cpu->r[14] = 0x000dc544u; fn_00131630(cpu);
    }
L_000dc544:;
    {
        cpu->r[14] = 0x000dc548u; fn_001324ec(cpu);
    }
L_000dc548:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dc54c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dc550:;
    {
        cpu->r[14] = 0x000dc554u; fn_0012f66c(cpu);
    }
L_000dc554:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000dc558:;
    {
        cpu->r[3] = 0x000012c4u;
    }
L_000dc55c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000dc560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc564:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000dc568:;
    {
        cpu->r[14] = 0x000dc56cu; fn_000d72e8(cpu);
    }
L_000dc56c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dc570:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc574:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc578:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc57c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dc580:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000dc584:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000dc588:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000dc58c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000dc590:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dc594:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dc598:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000dc59c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc734;
        }
    }
L_000dc5a0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x10cu);
    }
L_000dc5a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dc5a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc5d0;
        }
    }
L_000dc5ac:;
    {
        cpu->r[2] = 0x0000433cu;
    }
L_000dc5b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000dc5b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000dc5b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dc5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcddc;
        }
    }
L_000dc5c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000dc5c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc5d0;
        }
    }
L_000dc5c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc5cc:;
    {
        cpu->r[14] = 0x000dc5d0u; fn_000d6ad4(cpu);
    }
L_000dc5d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dc5d4:;
    {
        cpu->r[2] = 0x000012c4u;
    }
L_000dc5d8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000dc5dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc5e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dc5e4:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[7]);
    }
L_000dc5e8:;
    {
        cpu->r[14] = 0x000dc5ecu; fn_0012ea40(cpu);
    }
L_000dc5ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dc5f0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dc5f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc5f8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000dc5fc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000dc600:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000dc604:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000dc608:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc60c:;
    {
        cpu->r[14] = 0x000dc610u; fn_0012ed70(cpu);
    }
L_000dc610:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_000dc614:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000dc618:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000dc61c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc620:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000dc624:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc628:;
    {
        cpu->r[14] = 0x000dc62cu; fn_0012fa2c(cpu);
    }
L_000dc62c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_000dc630:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc634:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000dc638:;
    {
        cpu->r[14] = 0x000dc63cu; fn_0012ec44(cpu);
    }
L_000dc63c:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000dc640:;
    {
        cpu->r[14] = 0x000dc644u; imp_glDisable(cpu); /* glDisable */
    }
L_000dc644:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc648:;
    {
        cpu->r[14] = 0x000dc64cu; fn_0012dfe0(cpu);
    }
L_000dc64c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dc650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000dc654:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dc658:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000dc65c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000dc660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dc664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc6f8;
        }
    }
L_000dc668:;
    {
        cpu->r[3] = 0x0000672du;
    }
L_000dc66c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000dc670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dc674:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc68c;
        }
    }
L_000dc678:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000dc67c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc680:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc684:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dc688:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dca0c;
        }
    }
L_000dc68c:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000dc690:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000dc694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc698:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dcb98;
        }
    }
L_000dc69c:;
    {
        cpu->r[3] = 0x0000852cu;
    }
L_000dc6a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000dc6a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dc6a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dc6f8;
        }
    }
L_000dc6ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000dc6b0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000dc6b4:;
    {
        cpu->r[3] = rd32(0x000dc6bcu + - 0x490u);
    }
L_000dc6b8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dc6bc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dc6c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000dc6c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcaa4;
        }
    }
L_000dc6c8:;
    {
        cpu->r[7] = rd32(0x000dc6d0u + - 0x4a0u);
    }
L_000dc6cc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dc6d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc6d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dc6d8:;
    {
        cpu->r[14] = 0x000dc6dcu; fn_0018aa44(cpu);
    }
L_000dc6dc:;
    {
        cpu->r[1] = 0x00000049u;
    }
L_000dc6e0:;
    {
        cpu->r[2] = 0x00000043u;
    }
L_000dc6e4:;
    {
        cpu->r[3] = 0x00000034u;
    }
L_000dc6e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dc6ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dc6f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc6f4:;
    {
        cpu->r[14] = 0x000dc6f8u; fn_000ad8a0(cpu);
    }
L_000dc6f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000dc6fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1a4u);
    }
L_000dc700:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dc704:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dc708:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000dc70c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd1ec;
        }
    }
L_000dc710:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001acu, 0, 0);
    }
L_000dc714:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000dc718:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dc71cu)) return;
    }
L_000dc71c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dc720:;
    {
        cpu->r[14] = 0x000dc724u; fn_00131630(cpu);
    }
L_000dc724:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x110u);
    }
L_000dc728:;
    {
        uint32_t v = cpu->r[3] | 0x00000002u; cpu->r[3] = v;
    }
L_000dc72c:;
    {
        wr32(cpu->r[0] + + 0x110u, cpu->r[3]);
    }
L_000dc730:;
    {
        goto L_000dbf04;
    }
L_000dc734:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x10cu);
    }
L_000dc738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dc73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc5d0;
        }
    }
L_000dc740:;
    {
        cpu->r[10] = rd32(0x000dc748u + - 0x51cu);
    }
L_000dc744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dc748:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000dc74c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000dc750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcae8;
        }
    }
L_000dc754:;
    {
        cpu->r[7] = rd32(0x000dc75cu + - 0x52cu);
    }
L_000dc758:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dc75c:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_000dc760:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc764:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc768:;
    {
        cpu->r[14] = 0x000dc76cu; fn_00096a08(cpu);
    }
L_000dc76c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dc770:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000dc774:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc778:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dc77c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc780:;
    {
        cpu->r[14] = 0x000dc784u; fn_0018aa44(cpu);
    }
L_000dc784:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dc788:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000dc78c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000dc790:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_000dc794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcbe4;
        }
    }
L_000dc798:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dc79c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dc7a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc7a4:;
    {
        cpu->r[14] = 0x000dc7a8u; fn_0018aa44(cpu);
    }
L_000dc7a8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dc7ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dc7b0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dc7b4:;
    {
        cpu->r[14] = 0x000dc7b8u; fn_000a88e0(cpu);
    }
L_000dc7b8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000dc7bc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000dc7c0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_000dc7c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc7c8:;
    {
        cpu->r[14] = 0x000dc7ccu; fn_000a8910(cpu);
    }
L_000dc7cc:;
    {
        cpu->r[1] = rd32(0x000dc7d4u + - 0x5a0u);
    }
L_000dc7d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dc7d4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000dc7d8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_000dc7dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dc7e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000dc7e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000dc7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 1);
    }
L_000dc7ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000dc7f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc7e0;
        }
    }
L_000dc7f4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000dc7f8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dc7fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000dc804u + + 0x3c0u);
    }
L_000dc800:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dc804:;
    {
        cpu->r[3] = 0x000012c8u;
    }
L_000dc808:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000dc80c:;
    {
        cpu->r[1] = 0xff000000u;
    }
L_000dc810:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_000dc814:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000dc818:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000dc81c:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000dc820:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000dc824:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000dc828:;
    {
        cpu->r[14] = 0x000dc82cu; fn_0012dd58(cpu);
    }
L_000dc82c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dc830:;
    {
        cpu->r[2] = 0x00000019u;
    }
L_000dc834:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc838:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dc83c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dc840:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000dc844:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000dc848:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000008fu, 1, 0);
    }
L_000dc84c:;
    {
        cpu->r[14] = 0x000dc850u; fn_00130908(cpu);
    }
L_000dc850:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dc854:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dc858:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000dc85c:;
    {
        cpu->r[14] = 0x000dc860u; fn_0012dd58(cpu);
    }
L_000dc860:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000dc864:;
    {
        cpu->r[1] = rd32(0x000dc86cu + + 0x360u);
    }
L_000dc868:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dc86c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dc874u, cpu->r[1], 0, 0);
    }
L_000dc870:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,16);
    }
L_000dc874:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000dc878:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_000dc87c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000dc880:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000dc884:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000dc88cu + + 0x33cu);
    }
L_000dc888:;
    {
        vfp_vnmls(cpu, 15, 16, 14);
    }
L_000dc88c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000dc890:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dc894:;
    {
        cpu->r[14] = 0x000dc898u; imp_sprintf(cpu); /* sprintf */
    }
L_000dc898:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000dc89c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_000dc8a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dc8a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000092u, 1, 0);
    }
L_000dc8a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000dc8ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_000dc8b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_000dc8b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000005u, 0, 0);
    }
L_000dc8b8:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000dc8bc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dc8c0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dc8c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dc8c8:;
    {
        cpu->r[14] = 0x000dc8ccu; fn_000ad83c(cpu);
    }
L_000dc8cc:;
    {
        goto L_000dc5d0;
    }
L_000dc8d0:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000dc8d4:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000dc8d8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dc8dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dc8e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000dc8e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc8e8:;
    {
        cpu->r[3] = 0x00001c0du;
    }
L_000dc8ec:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000dc8f0:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 1);
    }
L_000dc8f4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000dc8f8:;
    {
        cpu->r[14] = 0x000dc8fcu; fn_0018728c(cpu);
    }
L_000dc8fc:;
    {
        goto L_000dc4dc;
    }
L_000dc900:;
    {
        cpu->r[3] = 0x00008c4cu;
    }
L_000dc904:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc908:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc90c:;
    {
        cpu->r[14] = 0x000dc910u; fn_0015907c(cpu);
    }
L_000dc910:;
    {
        goto L_000dc490;
    }
L_000dc914:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc918:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000dc91c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dc920:;
    {
        cpu->r[14] = 0x000dc924u; fn_0012caa0(cpu);
    }
L_000dc924:;
    {
        goto L_000dc47c;
    }
L_000dc928:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc92c:;
    {
        cpu->r[14] = 0x000dc930u; fn_000c6a4c(cpu);
    }
L_000dc930:;
    {
        goto L_000dc468;
    }
L_000dc934:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc938:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000dc93c:;
    {
        cpu->r[14] = 0x000dc940u; fn_000bf4f0(cpu);
    }
L_000dc940:;
    {
        goto L_000dc454;
    }
L_000dc944:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc948:;
    {
        cpu->r[14] = 0x000dc94cu; fn_000d3054(cpu);
    }
L_000dc94c:;
    {
        goto L_000dc440;
    }
L_000dc950:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc954:;
    {
        cpu->r[14] = 0x000dc958u; fn_000c4e7c(cpu);
    }
L_000dc958:;
    {
        goto L_000dc42c;
    }
L_000dc95c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc960:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000dc964:;
    {
        cpu->r[14] = 0x000dc968u; fn_000bf8a8(cpu);
    }
L_000dc968:;
    {
        goto L_000dc418;
    }
L_000dc96c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000dc970:;
    {
        cpu->r[14] = 0x000dc974u; fn_00097924(cpu);
    }
L_000dc974:;
    {
        cpu->r[14] = 0x000dc978u; fn_001573f4(cpu);
    }
L_000dc978:;
    {
        goto L_000dc408;
    }
L_000dc97c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc980:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dc984:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc988:;
    {
        cpu->r[14] = 0x000dc98cu; fn_0012caa0(cpu);
    }
L_000dc98c:;
    {
        goto L_000dc3ec;
    }
L_000dc990:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc994:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000dc998:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc99c:;
    {
        cpu->r[14] = 0x000dc9a0u; fn_0012caa0(cpu);
    }
L_000dc9a0:;
    {
        goto L_000dc3cc;
    }
L_000dc9a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc9a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000dc9ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dc9b0:;
    {
        cpu->r[14] = 0x000dc9b4u; fn_0012caa0(cpu);
    }
L_000dc9b4:;
    {
        goto L_000dc3b8;
    }
L_000dc9b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dc9bc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dc9c0:;
    {
        cpu->r[14] = 0x000dc9c4u; fn_0012e11c(cpu);
    }
L_000dc9c4:;
    {
        goto L_000dc3a4;
    }
L_000dc9c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dc9cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc9d0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dc9d4:;
    {
        cpu->r[14] = 0x000dc9d8u; fn_0012caa0(cpu);
    }
L_000dc9d8:;
    {
        goto L_000dc380;
    }
L_000dc9dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dc9e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dc9e4:;
    {
        cpu->r[14] = 0x000dc9e8u; fn_000c34d4(cpu);
    }
L_000dc9e8:;
    {
        goto L_000dc344;
    }
L_000dc9ec:;
    {
        cpu->r[3] = 0x00008c4cu;
    }
L_000dc9f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dc9f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dc9f8:;
    {
        cpu->r[14] = 0x000dc9fcu; fn_00159258(cpu);
    }
L_000dc9fc:;
    {
        goto L_000dc330;
    }
L_000dca00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dca04:;
    {
        cpu->r[14] = 0x000dca08u; fn_000cadb0(cpu);
    }
L_000dca08:;
    {
        goto L_000dc31c;
    }
L_000dca0c:;
    {
        cpu->r[3] = rd32(0x000dca14u + + 0x1bcu);
    }
L_000dca10:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dca14:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000dca18:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000dca1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcb54;
        }
    }
L_000dca20:;
    {
        cpu->r[7] = rd32(0x000dca28u + + 0x1acu);
    }
L_000dca24:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dca28:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000dca2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dca30:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dca34:;
    {
        cpu->r[14] = 0x000dca38u; fn_00096a08(cpu);
    }
L_000dca38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dca3c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dca40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dca44:;
    {
        cpu->r[14] = 0x000dca48u; fn_0018aa44(cpu);
    }
L_000dca48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dca4c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000dca50:;
    {
        cpu->r[0] = 0x0000042bu;
    }
L_000dca54:;
    {
        cpu->r[14] = 0x000dca58u; fn_000aeb58(cpu);
    }
L_000dca58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dca5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dca60:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000dca64:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dca68:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dca6c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000dca70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dca74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dca78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000dca7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000dca80:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000dca84:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000dca88:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dca8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dca90:;
    {
        cpu->r[14] = 0x000dca94u; fn_000ad19c(cpu);
    }
L_000dca94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dca98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dca9c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dcaa0:;
    {
        goto L_000dc69c;
    }
L_000dcaa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dcaa8:;
    {
        cpu->r[14] = 0x000dcaacu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000dcaac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc6c8;
        }
    }
L_000dcab4:;
    {
        cpu->r[7] = rd32(0x000dcabcu + + 0x118u);
    }
L_000dcab8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dcabc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcac0:;
    {
        cpu->r[14] = 0x000dcac4u; fn_0018aa20(cpu);
    }
L_000dcac4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dcac8:;
    {
        cpu->r[14] = 0x000dcaccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000dcacc:;
    {
        cpu->r[3] = rd32(0x000dcad4u + + 0x104u);
    }
L_000dcad0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcad4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcad8:;
    {
        cpu->r[3] = rd32(0x000dcae0u + + 0xfcu);
    }
L_000dcadc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcae0:;
    {
        cpu->r[14] = 0x000dcae4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000dcae4:;
    {
        goto L_000dc6cc;
    }
L_000dcae8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dcaec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000dcaf0:;
    {
        cpu->r[14] = 0x000dcaf4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000dcaf4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dcaf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc754;
        }
    }
L_000dcb00:;
    {
        cpu->r[7] = rd32(0x000dcb08u + + 0xccu);
    }
L_000dcb04:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000dcb08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dcb0c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000dcb10:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000dcb14:;
    {
        cpu->r[14] = 0x000dcb18u; fn_0018aa20(cpu);
    }
L_000dcb18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dcb1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000dcb20:;
    {
        cpu->r[14] = 0x000dcb24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000dcb24:;
    {
        cpu->r[3] = rd32(0x000dcb2cu + + 0xacu);
    }
L_000dcb28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dcb2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcb30:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000dcb34:;
    {
        cpu->r[3] = rd32(0x000dcb3cu + + 0xa0u);
    }
L_000dcb38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcb3c:;
    {
        cpu->r[14] = 0x000dcb40u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000dcb40:;
    {
        goto L_000dc758;
    }
L_000dcb44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dcb48:;
    {
        cpu->r[14] = 0x000dcb4cu; fn_000b975c(cpu);
    }
L_000dcb4c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dcb50:;
    {
        goto L_000dc08c;
    }
L_000dcb54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcb58:;
    {
        cpu->r[14] = 0x000dcb5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000dcb5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcb60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dca20;
        }
    }
L_000dcb64:;
    {
        cpu->r[7] = rd32(0x000dcb6cu + + 0x68u);
    }
L_000dcb68:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dcb6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcb70:;
    {
        cpu->r[14] = 0x000dcb74u; fn_0018aa20(cpu);
    }
L_000dcb74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcb78:;
    {
        cpu->r[14] = 0x000dcb7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000dcb7c:;
    {
        cpu->r[3] = rd32(0x000dcb84u + + 0x54u);
    }
L_000dcb80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcb84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcb88:;
    {
        cpu->r[3] = rd32(0x000dcb90u + + 0x4cu);
    }
L_000dcb8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcb90:;
    {
        cpu->r[14] = 0x000dcb94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000dcb94:;
    {
        goto L_000dca24;
    }
L_000dcb98:;
    {
        cpu->r[14] = 0x000dcb9cu; fn_000f34a0(cpu);
    }
L_000dcb9c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000dcba0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000dcba4:;
    {
        cpu->r[14] = 0x000dcbacu;
    }
L_000dcba8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dcbacu)) return;
    }
L_000dcbac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcbb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dcc20;
        }
    }
L_000dcbb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dcbb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000dcbbc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dcbc0:;
    {
        goto L_000dc69c;
    }
L_000dcbe4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000dcbe8:;
    {
        cpu->r[14] = 0x000dcbecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000dcbec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcbf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc798;
        }
    }
L_000dcbf4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcbf8:;
    {
        cpu->r[14] = 0x000dcbfcu; fn_0018aa20(cpu);
    }
L_000dcbfc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000dcc00:;
    {
        cpu->r[14] = 0x000dcc04u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000dcc04:;
    {
        cpu->r[3] = rd32(0x000dcc0cu + - 0x34u);
    }
L_000dcc08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcc0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcc10:;
    {
        cpu->r[3] = rd32(0x000dcc18u + - 0x3cu);
    }
L_000dcc14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcc18:;
    {
        cpu->r[14] = 0x000dcc1cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000dcc1c:;
    {
        goto L_000dc798;
    }
L_000dcc20:;
    {
        cpu->r[3] = rd32(0x000dcc28u + - 0x58u);
    }
L_000dcc24:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcc28:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000dcc2c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000dcc30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcd98;
        }
    }
L_000dcc34:;
    {
        cpu->r[7] = rd32(0x000dcc3cu + - 0x68u);
    }
L_000dcc38:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dcc3c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000dcc40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dcc44:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000dcc48:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[10]);
    }
L_000dcc4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dcc50:;
    {
        cpu->r[14] = 0x000dcc54u; fn_00096a08(cpu);
    }
L_000dcc54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dcc58:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dcc5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dcc60:;
    {
        cpu->r[14] = 0x000dcc64u; fn_0018aa44(cpu);
    }
L_000dcc64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dcc68:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000dcc6c:;
    {
        cpu->r[0] = 0x0000042au;
    }
L_000dcc70:;
    {
        cpu->r[14] = 0x000dcc74u; fn_000aeb58(cpu);
    }
L_000dcc74:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dcc78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcc7c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dcc80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_000dcc84:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dcc88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcc8c:;
    {
        cpu->r[14] = 0x000dcc90u; fn_000a9818(cpu);
    }
L_000dcc90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dcc94:;
    {
        cpu->r[0] = 0x0000042au;
    }
L_000dcc98:;
    {
        cpu->r[14] = 0x000dcc9cu; fn_000aeb58(cpu);
    }
L_000dcc9c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dcca0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dcca4:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000dcca8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000dccac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dccb0:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_000dccb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000dccb8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000dccbc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000dccc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 3, 31u, &shc), 0, 0);
    }
L_000dccc4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000dccc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcccc:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_000dccd0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000dccd4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000dccd8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000001eu, 1, 0);
    }
L_000dccdc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dcce0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dcce4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcce8:;
    {
        cpu->r[14] = 0x000dccecu; fn_000ac4bc(cpu);
    }
L_000dccec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dccf0:;
    {
        cpu->r[3] = 0x00005f53u;
    }
L_000dccf4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000dccf8:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000dccfc:;
    {
        cpu->r[6] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000dcd00:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000dcd04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc69c;
        }
    }
L_000dcd08:;
    {
        cpu->r[3] = 0x0000fea4u;
    }
L_000dcd0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000001a8u, 0, 0);
    }
L_000dcd10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_000dcd14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000dcd18:;
    {
        cpu->r[0] = 0x00000429u;
    }
L_000dcd1c:;
    {
        wr16(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_000dcd20:;
    {
        cpu->r[14] = 0x000dcd24u; fn_000aeb58(cpu);
    }
L_000dcd24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dcd28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcd2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_000dcd30:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dcd34:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcd38:;
    {
        cpu->r[14] = 0x000dcd3cu; fn_000a9818(cpu);
    }
L_000dcd3c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000dcd40:;
    {
        cpu->r[0] = 0x00000429u;
    }
L_000dcd44:;
    {
        cpu->r[14] = 0x000dcd48u; fn_000aeb58(cpu);
    }
L_000dcd48:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dcd4c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_000dcd50:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000dcd54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dcd58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000dcd5c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000dcd60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_000dcd64:;
    {
        cpu->r[14] = 0x00000011u;
    }
L_000dcd68:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000dcd6c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_000dcd70:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000dcd74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000dcd78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_000dcd7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000dcd80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dcd84:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dcd88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcd8c:;
    {
        cpu->r[14] = 0x000dcd90u; fn_000ac4bc(cpu);
    }
L_000dcd90:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000dcd94:;
    {
        goto L_000dc69c;
    }
L_000dcd98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcd9c:;
    {
        cpu->r[14] = 0x000dcda0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000dcda0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcda4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcc34;
        }
    }
L_000dcda8:;
    {
        cpu->r[7] = rd32(0x000dcdb0u + - 0x1dcu);
    }
L_000dcdac:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000dcdb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcdb4:;
    {
        cpu->r[14] = 0x000dcdb8u; fn_0018aa20(cpu);
    }
L_000dcdb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dcdbc:;
    {
        cpu->r[14] = 0x000dcdc0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000dcdc0:;
    {
        cpu->r[3] = rd32(0x000dcdc8u + - 0x1f0u);
    }
L_000dcdc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dcdc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcdcc:;
    {
        cpu->r[3] = rd32(0x000dcdd4u + - 0x1f8u);
    }
L_000dcdd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dcdd4:;
    {
        cpu->r[14] = 0x000dcdd8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000dcdd8:;
    {
        goto L_000dcc38;
    }
L_000dcddc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dcde0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dce54;
        }
    }
L_000dcde4:;
    {
        cpu->r[2] = 0x00001740u;
    }
L_000dcde8:;
    {
        cpu->r[7] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000dcdec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dcdf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dce54;
        }
    }
L_000dcdf4:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000dcdf8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000dcdfc:;
    {
        { uint32_t v = cpu->r[2] & 0x20000000u; set_nz(cpu, v); }
    }
L_000dce00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dce8c;
        }
    }
L_000dce04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dce08:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000dce0c:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_000dce10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000dce14:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_000dce18:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000dce1c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000dce20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000dce24:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000dce28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_000dce2c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000dce30:;
    {
        cpu->r[14] = 0x000dce34u; fn_000aeb58(cpu);
    }
L_000dce34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dce38:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000dce3c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000dce40:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000dce44:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000dce48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dce4c:;
    {
        cpu->r[14] = 0x000dce50u; fn_000d5a7c(cpu);
    }
L_000dce50:;
    {
        goto L_000dc5d0;
    }
L_000dce54:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dce58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dce5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dce60:;
    {
        cpu->r[14] = 0x000dce64u; fn_00096b88(cpu);
    }
L_000dce64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dce68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dc5d0;
        }
    }
L_000dce6c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000dce70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dce74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dce78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000dce7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dc5d0;
        }
    }
L_000dce80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dce84:;
    {
        cpu->r[14] = 0x000dce88u; fn_000da624(cpu);
    }
L_000dce88:;
    {
        goto L_000dc5d0;
    }
L_000dce8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dce90:;
    {
        cpu->r[14] = 0x000dce94u; fn_000be7f4(cpu);
    }
L_000dce94:;
    {
        cpu->r[3] = 0x000083f0u;
    }
L_000dce98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dce9c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dcea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dcea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dced4;
        }
    }
L_000dcea8:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dceac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dceb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dceb4:;
    {
        cpu->r[3] = 0x00001c0du;
    }
L_000dceb8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000dcebc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dcec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dced4;
        }
    }
L_000dcec4:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000dcec8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dcecc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dced0:;
    {
        cpu->r[14] = 0x000dced4u; fn_00186dd4(cpu);
    }
L_000dced4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_000dced8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dcedc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dcee0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dcee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd198;
        }
    }
L_000dcee8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dceec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000dcef0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dcef4:;
    {
        cpu->r[14] = 0x000dcef8u; fn_00096b88(cpu);
    }
L_000dcef8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dcefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dcf54;
        }
    }
L_000dcf00:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000dcf04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dcf08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dcf0c:;
    {
        cpu->r[10] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000dcf10:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000dcf14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dcf54;
        }
    }
L_000dcf18:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000dcf1c:;
    {
        cpu->r[3] = 0x000067c0u;
    }
L_000dcf20:;
    {
        cpu->r[7] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000dcf24:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dcf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd1f0;
        }
    }
L_000dcf2c:;
    {
        cpu->r[14] = 0x000dcf30u; fn_00097ad0(cpu);
    }
L_000dcf30:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000dcf34:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dcf38:;
    {
        cpu->r[14] = 0x000dcf3cu; fn_0018aa44(cpu);
    }
L_000dcf3c:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000dcf40:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000dcf44:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000dcf48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_000dcf4c:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000dcf50:;
    {
        cpu->r[14] = 0x000dcf54u; fn_000ad8a0(cpu);
    }
L_000dcf54:;
    {
        cpu->r[3] = 0x000081d8u;
    }
L_000dcf58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dcf5c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dcf60:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dcf64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd158;
        }
    }
L_000dcf68:;
    {
        cpu->r[3] = 0x00004344u;
    }
L_000dcf6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dcf70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dcf74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dcf78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd1bc;
        }
    }
L_000dcf7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dcf80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dcf84:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000dcf88:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dcf8c:;
    {
        cpu->r[14] = 0x000dcf90u; fn_000bad78(cpu);
    }
L_000dcf90:;
    {
        cpu->r[2] = 0x000081d8u;
    }
L_000dcf94:;
    {
        cpu->r[3] = 0x00004344u;
    }
L_000dcf98:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dcf9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dcfa0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000dcfa4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000dcfa8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000dcfac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dcfb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd158;
        }
    }
L_000dcfb4:;
    {
        cpu->r[3] = 0x000081dcu;
    }
L_000dcfb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000dcfc0u + - 0x3e0u);
    }
L_000dcfbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dcfc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000dcfc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000dcfc8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000dcfcc:;
    {
        vfp_sync_flags(cpu);
    }
L_000dcfd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dd018;
        }
    }
L_000dcfd4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_000dcfd8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000dcfdc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dcfe0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dcfe4:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000ffu, 1, 1);
    }
L_000dcfe8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = 0x000000ffu;
        }
    }
L_000dcfec:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 24u, &shc); cpu->r[1] = v;
    }
L_000dcff0:;
    {
        cpu->r[14] = 0x000dcff4u; fn_0012dd58(cpu);
    }
L_000dcff4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000dcff8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dcffc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dd000:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000dd004:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000dd008:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000dd00c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000dd010:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000dd014:;
    {
        cpu->r[14] = 0x000dd018u; fn_00130908(cpu);
    }
L_000dd018:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000dd01c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd020:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd024:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000dd028:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dd02c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd0e4;
        }
    }
L_000dd030:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dd034:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd038:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd03c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000dd040:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000dd044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dd048:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x7cu);
    }
L_000dd04c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000dd050:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000dd054:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_000dd058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd1e0;
        }
    }
L_000dd05c:;
    {
        cpu->r[14] = 0x000dd060u; fn_00097ad0(cpu);
    }
L_000dd060:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000dd064:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dd068:;
    {
        cpu->r[14] = 0x000dd06cu; fn_0018aa44(cpu);
    }
L_000dd06c:;
    {
        cpu->r[1] = 0x00000047u;
    }
L_000dd070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000dd074:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000dd078:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dd07c:;
    {
        cpu->r[14] = 0x000dd080u; fn_000a8d10(cpu);
    }
L_000dd080:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dd084:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000dd088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd08c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_000dd090:;
    {
        uint32_t v = cpu->r[3] & 0x8000000fu; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000dd094:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000dd098:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~shifter(cpu->r[3], 2, 28u, &shc));
        }
    }
L_000dd09c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 28u, &shc));
        }
    }
L_000dd0a0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000dd0a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000dd0a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dd0e4;
        }
    }
L_000dd0ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dd0b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dd0b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa0u);
    }
L_000dd0b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000dd0bc:;
    {
        cpu->r[1] = 0x00000047u;
    }
L_000dd0c0:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_000dd0c4:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000dd0c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000dd0cc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 3, 31u, &shc), 0, 0);
    }
L_000dd0d0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000dd0d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_000dd0d8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000dd0dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 1u, &shc), 1, 0);
    }
L_000dd0e0:;
    {
        cpu->r[14] = 0x000dd0e4u; fn_000ad8a0(cpu);
    }
L_000dd0e4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dd0e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd0ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd0f0:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000dd0f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000dd0f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000dd0fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd128;
        }
    }
L_000dd100:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_000dd104:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dd108:;
    {
        cpu->r[7] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000dd10c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dd110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd128;
        }
    }
L_000dd114:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000dd118:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dd11c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd120:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd124:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000dd21c;
        }
    }
L_000dd128:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd12c:;
    {
        cpu->r[14] = 0x000dd130u; fn_000d79e0(cpu);
    }
L_000dd130:;
    {
        cpu->r[14] = 0x000dd134u; fn_0009b4d0(cpu);
    }
L_000dd134:;
    {
        cpu->r[3] = 0x00004330u;
    }
L_000dd138:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dd13c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd140:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000dd144:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003d4u, 1, 1);
    }
L_000dd148:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000dc5d0;
        }
    }
L_000dd14c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd150:;
    {
        cpu->r[14] = 0x000dd154u; fn_000d6de8(cpu);
    }
L_000dd154:;
    {
        goto L_000dc5d0;
    }
L_000dd158:;
    {
        cpu->r[3] = 0x000081dcu;
    }
L_000dd15c:;
    {
        cpu->r[0] = 0x000081e0u;
    }
L_000dd160:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd164:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000dd168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000dd16c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_000dd170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000dd174:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14]);
    }
L_000dd178:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000dd17c:;
    {
        cpu->r[1] = 0x000081d8u;
    }
L_000dd180:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000dd184:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000dd188:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000dd18c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000dd190:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_000dd194:;
    {
        goto L_000dcfb4;
    }
L_000dd198:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000dd19c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000dd1a0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000dd1a4:;
    {
        cpu->r[14] = 0x000dd1a8u; fn_00096b88(cpu);
    }
L_000dd1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd1ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dcee8;
        }
    }
L_000dd1b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd1b4:;
    {
        cpu->r[14] = 0x000dd1b8u; fn_000da6e8(cpu);
    }
L_000dd1b8:;
    {
        goto L_000dcf54;
    }
L_000dd1bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000dd1c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dcf90;
        }
    }
L_000dd1c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dd1c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd1cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dd1d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x437fu << 16);
    }
L_000dd1d4:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000dd1d8:;
    {
        cpu->r[14] = 0x000dd1dcu; fn_000bad78(cpu);
    }
L_000dd1dc:;
    {
        goto L_000dcf90;
    }
L_000dd1e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd1e4:;
    {
        cpu->r[14] = 0x000dd1e8u; fn_000d91d4(cpu);
    }
L_000dd1e8:;
    {
        goto L_000dd0e4;
    }
L_000dd1ec:;
    {
        cpu->r[14] = 0x000dd1f0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000dd1f0:;
    {
        cpu->r[14] = 0x000dd1f4u; fn_00097ad0(cpu);
    }
L_000dd1f4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000dd1f8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000dd1fc:;
    {
        cpu->r[14] = 0x000dd200u; fn_0018aa44(cpu);
    }
L_000dd200:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_000dd204:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000dd208:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000dd20c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000dd210:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000dd214:;
    {
        cpu->r[14] = 0x000dd218u; fn_000ad8a0(cpu);
    }
L_000dd218:;
    {
        goto L_000dcf54;
    }
L_000dd21c:;
    {
        cpu->r[14] = 0x000dd220u; fn_00097ad0(cpu);
    }
L_000dd220:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000dd224:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd228:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000dd22c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000dd230:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000dd234:;
    {
        cpu->r[14] = 0x000dd238u; fn_00096a08(cpu);
    }
L_000dd238:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000dd23c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000dd240:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000dd244:;
    {
        cpu->r[14] = 0x000dd248u; fn_0018aa44(cpu);
    }
L_000dd248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000dd24c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000dd250:;
    {
        cpu->r[1] = 0x00000023u;
    }
L_000dd254:;
    {
        cpu->r[3] = 0x00000082u;
    }
L_000dd258:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000dd25c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000dd260:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000dd264:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000dd268:;
    {
        cpu->r[14] = 0x000dd26cu; fn_000ad200(cpu);
    }
L_000dd26c:;
    {
        goto L_000dd130;
    }
}

/* _ZN5Scene18UpdateAIPhaseBeginEv @ 000dd270 (arm) */
void fn_000dd270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dd270:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5Scene16UpdateAIPhaseEndEv @ 000dd274 (arm) */
void fn_000dd274(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dd274:;
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
L_000dd278:;
    {
        cpu->r[7] = rd32(0x000dd280u + + 0xacu);
    }
L_000dd27c:;
    {
        cpu->r[8] = rd32(0x000dd284u + + 0xacu);
    }
L_000dd280:;
    {
        cpu->r[9] = 0x00001be4u;
    }
L_000dd284:;
    {
        cpu->r[7] = add_flags(cpu, 0x000dd28cu, cpu->r[7], 0, 0);
    }
L_000dd288:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000dd28c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000dd290:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd294:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd29c:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd2a0u)) return;
        }
    }
L_000dd2a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dd2a4:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000dd2a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000dd2ac:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000dd2b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000dd2b4:;
    {
        cpu->r[11] = 0x000017b4u;
    }
L_000dd2b8:;
    {
        goto L_000dd2d0;
    }
L_000dd2bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000dd2c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd2c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd2c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000dd2cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000dd328;
        }
    }
L_000dd2d0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000dd2d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dd2d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000dd2dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd2e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd2bc;
        }
    }
L_000dd2e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000dd2e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000dd2ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000dd2f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000dd2f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dd2f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000dd2fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000dd300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd2bc;
        }
    }
L_000dd304:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_000dd308:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_000dd30c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd2bc;
        }
    }
L_000dd310:;
    {
        cpu->r[14] = 0x000dd314u; fn_00161914(cpu);
    }
L_000dd314:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000dd318:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd31c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd320:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000dd324:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dd2d0;
        }
    }
L_000dd328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd32cu)) return;
    }
}

/* _ZN5Scene11InitAIPhaseEv @ 000dd334 (arm) */
void fn_000dd334(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dd334:;
    {
        cpu->r[3] = 0x000040a4u;
    }
L_000dd338:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000dd33c:;
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
L_000dd340:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000dd344:;
    {
        cpu->r[5] = rd32(0x000dd34cu + + 0x1a4u);
    }
L_000dd348:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000dd34c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000dd350:;
    {
        cpu->r[5] = add_flags(cpu, 0x000dd358u, cpu->r[5], 0, 0);
    }
L_000dd354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd46c;
        }
    }
L_000dd358:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_000dd35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd3e8;
        }
    }
L_000dd360:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dd364:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd368u)) return;
        }
    }
L_000dd368:;
    {
        cpu->r[6] = rd32(0x000dd370u + + 0x184u);
    }
L_000dd36c:;
    {
        cpu->r[9] = 0x00001be4u;
    }
L_000dd370:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd374:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd378:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd37c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd380:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd384u)) return;
        }
    }
L_000dd384:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dd388:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000dd38c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000007cu, 0, 0);
    }
L_000dd390:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000dd394:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000dd398:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000dd39c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000dd3a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000dd3a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd3a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd3d0;
        }
    }
L_000dd3ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dd3b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000dd3b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000dd3b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000dd3bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dd3c0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000dd3c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000dd3c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd3d0;
        }
    }
L_000dd3cc:;
    {
        cpu->r[14] = 0x000dd3d0u; fn_00161914(cpu);
    }
L_000dd3d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd3d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd3d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd3dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dd3e0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dd394;
        }
    }
L_000dd3e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd3e8u)) return;
    }
L_000dd3e8:;
    {
        cpu->r[6] = rd32(0x000dd3f0u + + 0x104u);
    }
L_000dd3ec:;
    {
        cpu->r[9] = 0x00001be4u;
    }
L_000dd3f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd3f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd3f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd3fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd400:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd404u)) return;
        }
    }
L_000dd404:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dd408:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000dd40c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000007cu, 0, 0);
    }
L_000dd410:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000dd414:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000dd418:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000dd41c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000dd420:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000dd424:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000dd428:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd454;
        }
    }
L_000dd430:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dd434:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000dd438:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000dd43c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000dd440:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dd444:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000dd448:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000dd44c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd454;
        }
    }
L_000dd450:;
    {
        cpu->r[14] = 0x000dd454u; fn_00161914(cpu);
    }
L_000dd454:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd458:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd45c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd460:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dd464:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dd418;
        }
    }
L_000dd468:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd46cu)) return;
    }
L_000dd46c:;
    {
        cpu->r[6] = rd32(0x000dd474u + + 0x80u);
    }
L_000dd470:;
    {
        cpu->r[9] = 0x00001be4u;
    }
L_000dd474:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd478:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd47c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd480:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd484:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd488u)) return;
        }
    }
L_000dd488:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dd48c:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000dd490:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000007cu, 0, 0);
    }
L_000dd494:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000dd498:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000dd49c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000dd4a0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000dd4a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000dd4a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000dd4ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd4d8;
        }
    }
L_000dd4b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000dd4b8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000dd4bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000dd4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000dd4c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dd4c8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000dd4cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000dd4d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd4d8;
        }
    }
L_000dd4d4:;
    {
        cpu->r[14] = 0x000dd4d8u; fn_00161914(cpu);
    }
L_000dd4d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000dd4dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd4e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000dd4e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000dd4e8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dd49c;
        }
    }
L_000dd4ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd4f0u)) return;
    }
}

/* _ZN5Scene10InitRaceAIEv @ 000dd4f8 (arm) */
void fn_000dd4f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dd4f8:;
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
L_000dd4fc:;
    {
        cpu->r[8] = rd32(0x000dd504u + + 0xa8u);
    }
L_000dd500:;
    {
        cpu->r[9] = rd32(0x000dd508u + + 0xa8u);
    }
L_000dd504:;
    {
        cpu->r[11] = 0x00001be4u;
    }
L_000dd508:;
    {
        cpu->r[8] = add_flags(cpu, 0x000dd510u, cpu->r[8], 0, 0);
    }
L_000dd50c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dd510:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_000dd514:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd518:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000dd51c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd520:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd524u)) return;
        }
    }
L_000dd524:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dd528:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000dd52c:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000dd530:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000007cu, 0, 0);
    }
L_000dd534:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000dd538:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000dd53c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000dd540:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000dd544:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000dd548:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd590;
        }
    }
L_000dd550:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000dd554:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000dd558:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000dd55c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000dd560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dd564:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000dd568:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000dd56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd590;
        }
    }
L_000dd570:;
    {
        cpu->r[14] = 0x000dd574u; fn_00161914(cpu);
    }
L_000dd574:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000dd578:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dd57c:;
    {
        wr32(cpu->r[3] + + 0x564u, cpu->r[6]);
    }
L_000dd580:;
    {
        wr32(cpu->r[3] + + 0x550u, cpu->r[2]);
    }
L_000dd584:;
    {
        wr32(cpu->r[3] + + 0x554u, cpu->r[6]);
    }
L_000dd588:;
    {
        wr32(cpu->r[3] + + 0x558u, cpu->r[6]);
    }
L_000dd58c:;
    {
        wr32(cpu->r[3] + + 0x55cu, cpu->r[6]);
    }
L_000dd590:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_000dd594:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000dd598:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dd59c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000dd5a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000dd5a4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dd53c;
        }
    }
L_000dd5a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd5acu)) return;
    }
}

/* _ZN5Scene20UpdateAICopsStrategyEv @ 000dd5b4 (arm) */
void fn_000dd5b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dd5b4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dd5b8:;
    {
        cpu->r[1] = rd32(0x000dd5c0u + + 0x45cu);
    }
L_000dd5bc:;
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
L_000dd5c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dd5c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000dd5c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_000dd5cc:;
    {
        cpu->r[2] = 0x00000048u;
    }
L_000dd5d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000dd5d8u, cpu->r[1], 0, 0);
    }
L_000dd5d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dd5d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000dd5dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000dd5e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000dd5e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000dd5e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000dd5ec:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_000dd5f0:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_000dd5f4:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000dd5f8:;
    {
        cpu->r[14] = 0x000dd5fcu; imp_memcpy(cpu); /* memcpy */
    }
L_000dd5fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000dd600:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dd604:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000dd608:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_000dd60c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000dd610:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000dd614:;
    {
        cpu->r[1] = rd32(cpu->r[1] + - 0x44u);
    }
L_000dd618:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000dd61c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + - 0x40u);
    }
L_000dd620:;
    {
        cpu->r[5] = rd32(cpu->r[5] + - 0x48u);
    }
L_000dd624:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000dd628:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_000dd62c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000dd630:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000dd634:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00018c00u, 0, 0);
    }
L_000dd638:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001cu, 1, 1);
    }
L_000dd63c:;
    {
        wr32(cpu->r[1] + + 0xc8u, cpu->r[3]);
    }
L_000dd640:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd62c;
        }
    }
L_000dd644:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000dd648:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000dd64c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x000000ecu, 0, 0);
    }
L_000dd650:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x0000009cu, 0, 0);
    }
L_000dd654:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000dd658:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_000dd65c:;
    {
        cpu->r[11] = 0x000017b4u;
    }
L_000dd660:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_000dd664:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000dd668:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000dd66c:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_000dd670:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000dd674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd690;
        }
    }
L_000dd678:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000dd67c:;
    {
        uint32_t v = cpu->r[9] & 0x00100000u; cpu->r[9] = v;
        set_nz(cpu, v);
    }
L_000dd680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd690;
        }
    }
L_000dd684:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000dd688:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_000dd68c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd890;
        }
    }
L_000dd690:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000dd694:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000dd698:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000007u, 1, 1);
    }
L_000dd69c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_000dd6a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd66c;
        }
    }
L_000dd6a4:;
    {
        cpu->r[0] = 0x000040acu;
    }
L_000dd6a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000dd6ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000dd6b0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000dd6b4:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_000dd6b8:;
    {
        cpu->r[6] = 0x000017b4u;
    }
L_000dd6bc:;
    {
        cpu->r[7] = 0x000018b8u;
    }
L_000dd6c0:;
    {
        cpu->r[8] = 0x00001850u;
    }
L_000dd6c4:;
    {
        cpu->r[10] = 0x00001851u;
    }
L_000dd6c8:;
    {
        cpu->r[9] = 0x00001852u;
    }
L_000dd6cc:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_000dd6d0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000dd6d4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000dd6d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000dd6dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_000dd6e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x9cu);
    }
L_000dd6e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd6e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd704;
        }
    }
L_000dd6ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000dd6f0:;
    {
        { uint32_t v = cpu->r[0] & 0x00100000u; set_nz(cpu, v); }
    }
L_000dd6f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd704;
        }
    }
L_000dd6f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000dd6fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000dd700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd818;
        }
    }
L_000dd704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000dd708:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001cu, 1, 1);
    }
L_000dd70c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd6d8;
        }
    }
L_000dd710:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000dd714:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000dd718:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x000000c8u, 0, 0);
    }
L_000dd71c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000138u, 0, 0);
    }
L_000dd720:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000dd724:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dd728:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000dd72c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd7fc;
        }
    }
L_000dd730:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x70u);
    }
L_000dd734:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000dd738:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000dd73c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c8u, 1, 1);
    }
L_000dd740:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dd7fc;
        }
    }
L_000dd744:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dd748:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dd74c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000dd750:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_000dd754:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000dd758:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000dd75c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd7e8;
        }
    }
L_000dd760:;
    {
        cpu->r[4] = rd32(cpu->r[2] + - 0x70u);
    }
L_000dd764:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000dd768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd7e8;
        }
    }
L_000dd76c:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000dd770:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000dd774:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_000dd778:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000c8u, 1, 1);
    }
L_000dd77c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dd7e8;
        }
    }
L_000dd780:;
    {
        cpu->r[10] = rd32(cpu->r[1] + - 0x8u);
    }
L_000dd784:;
    {
        cpu->r[9] = rd32(cpu->r[12] + - 0x8u);
    }
L_000dd788:;
    {
        cpu->r[7] = rd32(cpu->r[1] + - 0x4u);
    }
L_000dd78c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[6] = v;
    }
L_000dd790:;
    {
        cpu->r[8] = rd32(cpu->r[12] + - 0x4u);
    }
L_000dd794:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9]; cpu->r[11] = v;
    }
L_000dd798:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_000dd79c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[9] = v;
    }
L_000dd7a0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7] + cpu->r[9]; cpu->r[9] = v;
    }
L_000dd7a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_000dd7a8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_000dd7ac:;
    {
        cpu->r[6] = rd32(cpu->r[12]);
    }
L_000dd7b0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8] + cpu->r[11]; cpu->r[11] = v;
    }
L_000dd7b4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[7] + cpu->r[10]; cpu->r[10] = v;
    }
L_000dd7b8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[9]; cpu->r[9] = v;
    }
L_000dd7bc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6] + cpu->r[11]; cpu->r[11] = v;
    }
L_000dd7c0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000dd7c4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_000dd7c8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5] + cpu->r[10]; cpu->r[10] = v;
    }
L_000dd7cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dd7e8;
        }
    }
L_000dd7d0:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 1);
    }
L_000dd7d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00001850u;
        }
    }
L_000dd7d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000dd7dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000dd7e0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[2] + - 0x70u, cpu->r[7]);
        }
    }
L_000dd7e4:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[4] + cpu->r[5], cpu->r[6]);
        }
    }
L_000dd7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000dd7ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000dd7f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000dd7f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd754;
        }
    }
L_000dd7f8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dd7fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000dd800:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000dd804:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_000dd808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000dd80c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd724;
        }
    }
L_000dd810:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000dd814:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dd818u)) return;
    }
L_000dd818:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000dd81c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 0);
    }
L_000dd820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000dd824:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000dd704;
        }
    }
L_000dd828:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_000dd82c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd704;
        }
    }
L_000dd834:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[10]);
    }
L_000dd838:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd83c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd704;
        }
    }
L_000dd840:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[9]);
    }
L_000dd844:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd848:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000dd84c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd704;
        }
    }
L_000dd850:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dd854:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000dd858:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000dd85c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dd9c0;
        }
    }
L_000dd860:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dd864:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000dd868:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000dd86c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dd9e0;
        }
    }
L_000dd870:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000dd874:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000dd878:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000dd87c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000dd880:;
    {
        wr8(cpu->r[3] + cpu->r[10], cpu->r[0]);
    }
L_000dd884:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[12]);
    }
L_000dd888:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[12]);
    }
L_000dd88c:;
    {
        goto L_000dd704;
    }
L_000dd890:;
    {
        cpu->r[12] = 0x00001824u;
    }
L_000dd894:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dd898:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000dd89c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000dd8a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000dd8a4:;
    {
        cpu->r[14] = 0x000dd8a8u; fn_001615c0(cpu);
    }
L_000dd8a8:;
    {
        cpu->r[1] = 0x00001824u;
    }
L_000dd8ac:;
    {
        wr32(cpu->r[6] + + 0x2cu, cpu->r[5]);
    }
L_000dd8b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000dd8b4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000dd8b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000dd8bc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000dd8c0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000dd8c4:;
    {
        wr32(cpu->r[6] + + 0x9cu, cpu->r[0]);
    }
L_000dd8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd8dc;
        }
    }
L_000dd8cc:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000dd8d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_000dd8d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x000003e8u, 1, 1);
    }
L_000dd8d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dd938;
        }
    }
L_000dd8dc:;
    {
        cpu->r[9] = 0x00001850u;
    }
L_000dd8e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000dd8e4:;
    {
        cpu->r[0] = 0x00001851u;
    }
L_000dd8e8:;
    {
        cpu->r[1] = 0x00001852u;
    }
L_000dd8ec:;
    {
        wr8(cpu->r[5] + cpu->r[9], cpu->r[12]);
    }
L_000dd8f0:;
    {
        cpu->r[9] = 0x00001824u;
    }
L_000dd8f4:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_000dd8f8:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[12]);
    }
L_000dd8fc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000dd900:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x3d4u);
    }
L_000dd904:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x3dcu);
    }
L_000dd908:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_000dd90c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000dd910:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_000dd914:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x3d8u);
    }
L_000dd918:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_000dd91c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_000dd920:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000dd924:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_000dd928:;
    {
        wr32(cpu->r[8], cpu->r[9]);
    }
L_000dd92c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000dd930:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base - 8;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000dd934:;
    {
        goto L_000dd690;
    }
L_000dd938:;
    {
        cpu->r[0] = 0x00001850u;
    }
L_000dd93c:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[0]);
    }
L_000dd940:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000dd944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd968;
        }
    }
L_000dd948:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dd94c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000dd950:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000dd954:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001850u;
        }
    }
L_000dd958:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_000dd95c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
        }
    }
L_000dd960:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[9]);
        }
    }
L_000dd964:;
    {
        goto L_000dd900;
    }
L_000dd968:;
    {
        cpu->r[9] = 0x00001851u;
    }
L_000dd96c:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[9]);
    }
L_000dd970:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dd974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dd9a8;
        }
    }
L_000dd978:;
    {
        cpu->r[9] = 0x00001852u;
    }
L_000dd97c:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[9]);
    }
L_000dd980:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000dd984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dd900;
        }
    }
L_000dd988:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dd98c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dd990:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_000dd994:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001852u;
        }
    }
L_000dd998:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
        }
    }
L_000dd99c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
        }
    }
L_000dd9a0:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[0]);
        }
    }
L_000dd9a4:;
    {
        goto L_000dd900;
    }
L_000dd9a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000dd9ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000dd9b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00001851u;
        }
    }
L_000dd9b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000dd9b8:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[5] + cpu->r[9], cpu->r[1]);
        }
    }
L_000dd9bc:;
    {
        goto L_000dd900;
    }
L_000dd9c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000dd9c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000dd9c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000dd9cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000dd9d0:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[0]);
    }
L_000dd9d4:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[12]);
    }
L_000dd9d8:;
    {
        wr8(cpu->r[3] + cpu->r[10], cpu->r[12]);
    }
L_000dd9dc:;
    {
        goto L_000dd704;
    }
L_000dd9e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000dd9e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dd9e8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000dd9ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dda0c;
        }
    }
L_000dd9f0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000dd9f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000dd9f8:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[12]);
    }
L_000dd9fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000dda00:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_000dda04:;
    {
        wr8(cpu->r[3] + cpu->r[10], cpu->r[11]);
    }
L_000dda08:;
    {
        goto L_000dd704;
    }
L_000dda0c:;
    {
        wr8(cpu->r[3] + cpu->r[9], cpu->r[11]);
    }
L_000dda10:;
    {
        wr8(cpu->r[3] + cpu->r[8], cpu->r[11]);
    }
L_000dda14:;
    {
        wr8(cpu->r[3] + cpu->r[10], cpu->r[11]);
    }
L_000dda18:;
    {
        goto L_000dd704;
    }
}

/* _ZN5Scene15UpdateAIGeneralEv @ 000dda20 (arm) */
void fn_000dda20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dda20:;
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
L_000dda24:;
    {
        cpu->r[7] = rd32(0x000dda2cu + + 0x588u);
    }
L_000dda28:;
    {
        cpu->r[8] = rd32(0x000dda30u + + 0x588u);
    }
L_000dda2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000dda30:;
    {
        cpu->r[7] = add_flags(cpu, 0x000dda38u, cpu->r[7], 0, 0);
    }
L_000dda34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000dda38:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000dda3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000dda40:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000dda44:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_000dda48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dda4c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000dda50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000dda54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ddf90;
        }
    }
L_000dda58:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000dda5c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000dda60:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dda64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000dda68:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000dda6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000dda70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dda74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000dda78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_000dda7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000dda80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000dda84:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000dda88:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000dda8c:;
    {
        cpu->r[12] = 0x000017b4u;
    }
L_000dda90:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000dda94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000dda98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000dda9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddaa0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddaa4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ddaa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ddaac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ddab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddacc;
        }
    }
L_000ddab4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000ddab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddacc;
        }
    }
L_000ddabc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000ddac0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 0);
    }
L_000ddac4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000ddac8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_000ddacc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000ddad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ddaa4;
        }
    }
L_000ddad4:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000ddad8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000ddadc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000ddae0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ddae4:;
    {
        cpu->r[3] = 0x000017bcu;
    }
L_000ddae8:;
    {
        cpu->r[11] = 0x000017b4u;
    }
L_000ddaec:;
    {
        cpu->r[9] = 0x0000173cu;
    }
L_000ddaf0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000ddaf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ddaf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddb74;
        }
    }
L_000ddafc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000ddb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddb74;
        }
    }
L_000ddb04:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000ddb08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ddb0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddb1c;
        }
    }
L_000ddb10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ddb14:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ddb18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddec4;
        }
    }
L_000ddb1c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ddb20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000ddb24:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_000ddb28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000ddb2c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_000dde64;
        case 1: goto L_000dde40;
        case 2: goto L_000dddd8;
        case 3: goto L_000ddbb0;
        case 4: goto L_000ddbb0;
        case 5: goto L_000ddb4c;
        default: guest_unimplemented(cpu, 0x000ddb2cu); return; }
        }
    }
L_000ddb30:;
    {
        goto L_000ddb74;
    }
L_000ddb4c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000ddb50:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ddb54:;
    {
        cpu->r[14] = 0x000ddb58u; fn_00161914(cpu);
    }
L_000ddb58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddb5c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ddb60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ddb64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000ddb68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000ddb6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddb70:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddb74:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddb78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ddb7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000ddb80:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000ddb84:;
    {
        cpu->r[1] = 0x00001be4u;
    }
L_000ddb88:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ddb8c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000ddb90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ddc04;
        }
    }
L_000ddb94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddb98:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ddb9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000ddba0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000ddba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddba8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddbac:;
    {
        goto L_000ddaf0;
    }
L_000ddbb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ddbb4:;
    {
        cpu->r[1] = 0x0000873cu;
    }
L_000ddbb8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_000ddbbc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000ddbc0:;
    {
        cpu->r[1] = 0x000017c8u;
    }
L_000ddbc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ddbc8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ddbcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000ddbd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000003e8u, 0, 0);
    }
L_000ddbd4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000ddbd8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000ddbdc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000ddbe0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ddb50;
        }
    }
L_000ddbe4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddbe8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ddbec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000ddbf0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000ddbf4:;
    {
        cpu->r[1] = 0x00001be4u;
    }
L_000ddbf8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ddbfc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000ddc00:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ddb94;
        }
    }
L_000ddc04:;
    {
        cpu->r[3] = 0x000040a8u;
    }
L_000ddc08:;
    {
        cpu->r[1] = 0x0000173cu;
    }
L_000ddc0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ddc10:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ddc14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ddc18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ddc1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddcc4;
        }
    }
L_000ddc20:;
    {
        cpu->r[0] = 0x00008c50u;
    }
L_000ddc24:;
    {
        cpu->r[2] = 0x00008c58u;
    }
L_000ddc28:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc2c:;
    {
        cpu->r[5] = 0x00008c5cu;
    }
L_000ddc30:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc34:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc38:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000ddc3c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000ddc40:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000ddc44:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_000ddc48:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_000ddc4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000ddc50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000ddc54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddc58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddc5c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ddc60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000ddc64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ddf28;
        }
    }
L_000ddc68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000ddc6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddf7c;
        }
    }
L_000ddc70:;
    {
        cpu->r[14] = 0x000ddc74u; fn_0009b4d0(cpu);
    }
L_000ddc74:;
    {
        cpu->r[3] = 0x00008c58u;
    }
L_000ddc78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc7c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000ddc80:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000ddc84:;
    {
        cpu->r[2] = 0x00008c68u;
    }
L_000ddc88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc8c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ddc90:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ddc94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ddc98:;
    {
        cpu->r[3] = 0x000040a8u;
    }
L_000ddc9c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000ddca0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ddca4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000ddca8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000ddcac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000ddcb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddcb4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddcb8:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000ddcbc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ddcc0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ddcc4:;
    {
        cpu->r[5] = 0x00008c58u;
    }
L_000ddcc8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ddccc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddcd0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ddcd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddd10;
        }
    }
L_000ddcd8:;
    {
        cpu->r[14] = 0x000ddcdcu; fn_0009b4d0(cpu);
    }
L_000ddcdc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddce0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddce4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ddce8:;
    {
        cpu->r[3] = 0x00008742u;
    }
L_000ddcec:;
    {
        cpu->r[1] = rd16(cpu->r[1] + cpu->r[3]);
    }
L_000ddcf0:;
    {
        cpu->r[3] = 0x000003e8u;
    }
L_000ddcf4:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_000ddcf8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000ddcfc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000ddd00:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00008c68u;
        }
    }
L_000ddd04:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000ddd08:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ddd0c:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000ddd10:;
    {
        cpu->r[5] = 0x00008c5cu;
    }
L_000ddd14:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ddd18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddd1c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ddd20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddd5c;
        }
    }
L_000ddd24:;
    {
        cpu->r[14] = 0x000ddd28u; fn_0009b4d0(cpu);
    }
L_000ddd28:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddd2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddd30:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000ddd34:;
    {
        cpu->r[3] = 0x00008744u;
    }
L_000ddd38:;
    {
        cpu->r[1] = rd16(cpu->r[1] + cpu->r[3]);
    }
L_000ddd3c:;
    {
        cpu->r[3] = 0x000003e8u;
    }
L_000ddd40:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_000ddd44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000ddd48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000ddd4c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00008c68u;
        }
    }
L_000ddd50:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_000ddd54:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ddd58:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000ddd5c:;
    {
        cpu->r[5] = 0x00008c60u;
    }
L_000ddd60:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ddd64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddd68:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ddd6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddf1c;
        }
    }
L_000ddd70:;
    {
        cpu->r[14] = 0x000ddd74u; fn_0009b4d0(cpu);
    }
L_000ddd74:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddd78:;
    {
        cpu->r[2] = 0x00008746u;
    }
L_000ddd7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ddd80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ddd84:;
    {
        cpu->r[12] = rd16(cpu->r[3] + cpu->r[2]);
    }
L_000ddd88:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_000ddd8c:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[12] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_000ddd90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000ddd94:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000ddd98:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00008c68u;
        }
    }
L_000ddd9c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000ddda0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000ddda4:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
        }
    }
L_000ddda8:;
    {
        cpu->r[2] = 0x00008c64u;
    }
L_000dddac:;
    {
        cpu->r[1] = 0x00008748u;
    }
L_000dddb0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000dddb4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[1]);
    }
L_000dddb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000dddbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000dddc0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00008c68u;
        }
    }
L_000dddc4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_000dddc8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000dddcc:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000dddd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000dddd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000dddd8u)) return;
    }
L_000dddd8:;
    {
        cpu->r[1] = 0x000017c8u;
    }
L_000ddddc:;
    {
        cpu->r[12] = 0x0000873cu;
    }
L_000ddde0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ddde4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000ddde8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dddec:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_000dddf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dddf4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000dddf8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000dddfc:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
        }
    }
L_000dde00:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dde10;
        }
    }
L_000dde04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000dde08:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000dde0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ddf34;
        }
    }
L_000dde10:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000dde14:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000dde18:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000dde1c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ddedc;
        }
    }
L_000dde20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dde24:;
    {
        cpu->r[1] = 0x0000873au;
    }
L_000dde28:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_000dde2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dde30:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000dde34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000dde38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ddb74;
        }
    }
L_000dde3c:;
    {
        goto L_000ddb50;
    }
L_000dde40:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000dde44:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000dde48:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000dde4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000dde98;
        }
    }
L_000dde50:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dde54:;
    {
        cpu->r[1] = 0x00008738u;
    }
L_000dde58:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_000dde5c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000dde60:;
    {
        goto L_000dde84;
    }
L_000dde64:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000dde68:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000dde6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000dde70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dde98;
        }
    }
L_000dde74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000dde78:;
    {
        cpu->r[12] = 0x0000873au;
    }
L_000dde7c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[12]);
    }
L_000dde80:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000dde84:;
    {
        cpu->r[12] = 0x000017c8u;
    }
L_000dde88:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000dde8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000dde90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000dde94:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ddb74;
        }
    }
L_000dde98:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000dde9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ddea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ddf08;
        }
    }
L_000ddea4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000ddea8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ddeac:;
    {
        cpu->r[14] = 0x000ddeb0u; fn_00161914(cpu);
    }
L_000ddeb0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ddeb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddeb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000ddebc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000ddec0:;
    {
        goto L_000ddb5c;
    }
L_000ddec4:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000ddec8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_000ddecc:;
    {
        uint32_t v = cpu->r[12] ^ 0x04000000u; cpu->r[12] = v;
    }
L_000dded0:;
    {
        cpu->r[12] = (cpu->r[12] >> 26) & 0x1u;
    }
L_000dded4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000dded8:;
    {
        goto L_000ddb24;
    }
L_000ddedc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000ddee0:;
    {
        cpu->r[1] = 0x00008738u;
    }
L_000ddee4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_000ddee8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ddeec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000ddef0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ddb74;
        }
    }
L_000ddef4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ddef8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ddefc:;
    {
        cpu->r[14] = 0x000ddf00u; fn_00161914(cpu);
    }
L_000ddf00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddf04:;
    {
        goto L_000ddb5c;
    }
L_000ddf08:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000ddf0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ddf10:;
    {
        cpu->r[14] = 0x000ddf14u; fn_00161914(cpu);
    }
L_000ddf14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddf18:;
    {
        goto L_000ddb5c;
    }
L_000ddf1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddf20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ddf24:;
    {
        goto L_000ddda8;
    }
L_000ddf28:;
    {
        cpu->r[14] = 0x000ddf2cu; fn_0009b4d0(cpu);
    }
L_000ddf2c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_000ddf30:;
    {
        goto L_000ddc80;
    }
L_000ddf34:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000ddf38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ddf3c:;
    {
        cpu->r[14] = 0x000ddf40u; fn_00161914(cpu);
    }
L_000ddf40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000ddf44:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000ddf48:;
    {
        cpu->r[12] = 0x000017c8u;
    }
L_000ddf4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000ddf50:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ddf54:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000ddf58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000ddf5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000ddf60:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000ddf64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000ddf68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ddf6c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000ddf70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ddf74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000ddf78:;
    {
        goto L_000dde10;
    }
L_000ddf7c:;
    {
        cpu->r[14] = 0x000ddf80u; fn_0009b4d0(cpu);
    }
L_000ddf80:;
    {
        cpu->r[3] = 0x00008c60u;
    }
L_000ddf84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ddf88:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000ddf8c:;
    {
        goto L_000ddc70;
    }
L_000ddf90:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000ddf94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ddf98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000ddf9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ddfa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ddfa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ddfa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ddfac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ddfb0:;
    {
        goto L_000ddc04;
    }
}

/* _ZN5Scene19UpdateAIPhaseMidwayEv @ 000ddfbc (arm) */
void fn_000ddfbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ddfbc:;
    {
        return fn_000dda20(cpu);
    }
}

/* _ZN5Scene16UpdateAIStrategyEv @ 000ddfc0 (arm) */
void fn_000ddfc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ddfc0:;
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
L_000ddfc4:;
    {
        cpu->r[7] = rd32(0x000ddfccu + + 0x220u);
    }
L_000ddfc8:;
    {
        cpu->r[8] = rd32(0x000ddfd0u + + 0x220u);
    }
L_000ddfcc:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ddfd0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000ddfd8u, cpu->r[7], 0, 0);
    }
L_000ddfd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ddfd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ddfdc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000ddfe0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ddfe4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ddfe8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ddfec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de090;
        }
    }
L_000ddff0:;
    {
        cpu->r[9] = 0x00001be4u;
    }
L_000ddff4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000ddff8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ddffc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000de088;
        }
    }
L_000de000:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000de004:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000de008:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000007cu, 0, 0);
    }
L_000de00c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000de010:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000de014:;
    {
        cpu->r[11] = 0x00001788u;
    }
L_000de018:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000de01c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000de020:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000de024:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000de028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de054;
        }
    }
L_000de02c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000de030:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_000de034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de054;
        }
    }
L_000de038:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000de03c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000de040:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de044:;
    {
        cpu->r[14] = 0x000de04cu;
    }
L_000de048:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de04cu)) return;
    }
L_000de04c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000de050:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000de054:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000de058:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de05c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000de060:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000de064:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000de018;
        }
    }
L_000de068:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000de06c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de088;
        }
    }
L_000de070:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000de074:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000de078:;
    {
        cpu->r[14] = 0x000de07cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000de07c:;
    {
        cpu->r[3] = 0x000040b0u;
    }
L_000de080:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000de084:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000de088:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000de08c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000de090u)) return;
    }
L_000de090:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000de094:;
    {
        cpu->r[3] = 0x000040a4u;
    }
L_000de098:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000de09c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000de0a0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000de0a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000de0a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_000de0ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000de0b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000de0b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000de0b8:;
    {
        cpu->r[0] = 0x00001684u;
    }
L_000de0bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000de0c0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000de0c4:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x1b0u);
    }
L_000de0c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de0cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de118;
        }
    }
L_000de0d0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x1cu);
    }
L_000de0d4:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_000de0d8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_000de0dc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[6]; cpu->r[7] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000de0e0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000de0e4:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 2u, &shc), cpu->r[6], 1, 0);
    }
L_000de0e8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000de0ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000de108;
        }
    }
L_000de0f0:;
    {
        cpu->r[1] = 0x000040a4u;
    }
L_000de0f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000de0f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000de0fc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000de100:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000de104:;
    {
        goto L_000de170;
    }
L_000de108:;
    {
        cpu->r[12] = 0x00001688u;
    }
L_000de10c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000de110:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000de114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de0f0;
        }
    }
L_000de118:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000de11c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000de120:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000de124:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_000de128:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000de12c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000de130:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000de134:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000de15c;
        }
    }
L_000de138:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1cu);
    }
L_000de13c:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000de140:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000de144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000de148:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000de14c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000de150:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_000de154:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000de158:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000de1d4;
        }
    }
L_000de15c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000de160:;
    {
        cpu->r[1] = 0x000040a4u;
    }
L_000de164:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000de168:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000de16c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000de170:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000de174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de18c;
        }
    }
L_000de178:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000de17c:;
    {
        cpu->r[14] = 0x000de180u; fn_000dd334(cpu);
    }
L_000de180:;
    {
        cpu->r[3] = 0x000040a4u;
    }
L_000de184:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000de188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000de18c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000de190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de1c4;
        }
    }
L_000de194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000de198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de1b4;
        }
    }
L_000de19c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000de1a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de088;
        }
    }
L_000de1a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000de1a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000de1ac:;
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
L_000de1b0:;
    {
        return fn_000dd270(cpu);
    }
L_000de1b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000de1b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000de1bc:;
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
L_000de1c0:;
    {
        return fn_000dd274(cpu);
    }
L_000de1c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000de1c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000de1cc:;
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
L_000de1d0:;
    {
        return fn_000ddfbc(cpu);
    }
L_000de1d4:;
    {
        cpu->r[1] = 0x000040a4u;
    }
L_000de1d8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000de1dc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000de1e0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000de1e4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000de1e8:;
    {
        goto L_000de170;
    }
}

/* _ZN5Scene18RenderBlockingCarsEv @ 000de1f4 (arm) */
void fn_000de1f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000de1f4:;
    {
        cpu->r[1] = rd32(0x000de1fcu + + 0x138u);
    }
L_000de1f8:;
    {
        cpu->r[3] = rd32(0x000de200u + + 0x138u);
    }
L_000de1fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000de204u, cpu->r[1], 0, 0);
    }
L_000de200:;
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
L_000de204:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000de208:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000de20c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000de210:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000de214:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000de218:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000de21c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000de220:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000de224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de230;
        }
    }
L_000de228:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000de22c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000de230u)) return;
    }
L_000de230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000de234:;
    {
        cpu->r[8] = 0x00008268u;
    }
L_000de238:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e4u, 0, 0);
    }
L_000de23c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000de240:;
    {
        cpu->r[3] = rd32(0x000de248u + + 0xf4u);
    }
L_000de244:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000de248:;
    {
        cpu->r[9] = 0x000011e8u;
    }
L_000de24c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000de250:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000de254:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000de258:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000de25c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000de260:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000de264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000de310;
        }
    }
L_000de268:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_000de26c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000de270:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000de274:;
    {
        goto L_000de280;
    }
L_000de278:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000de27c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000de310;
        }
    }
L_000de280:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000de284:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000de288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018000u, 0, 0);
    }
L_000de28c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000de290:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_000de294:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000de298:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1f0u);
    }
L_000de29c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000de2a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de278;
        }
    }
L_000de2a4:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x178u);
    }
L_000de2a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000de2ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de278;
        }
    }
L_000de2b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000de2b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000de2b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000de2bc:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000de2c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000de2c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000de2c8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000de2cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de2d0:;
    {
        cpu->r[14] = 0x000de2d8u;
    }
L_000de2d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de2d8u)) return;
    }
L_000de2d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000de2dc:;
    {
        cpu->r[1] = 0x00008000u;
    }
L_000de2e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000de2e4:;
    {
        cpu->r[14] = 0x000de2e8u; fn_000b2ebc(cpu);
    }
L_000de2e8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000de2ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000de2f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000de2f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de2f8:;
    {
        cpu->r[14] = 0x000de300u;
    }
L_000de2fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de300u)) return;
    }
L_000de300:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000de304:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000de308:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000de30c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000de280;
        }
    }
L_000de310:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000de314:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000de318:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_000de31c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000de320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 1);
    }
L_000de324:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000de328:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000de32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de258;
        }
    }
L_000de330:;
    {
        goto L_000de228;
    }
}

/* _ZN5Scene26UpdateBlockingCarsMatricesEh @ 000de340 (arm) */
void fn_000de340(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000de340:;
    {
        cpu->r[1] = rd32(0x000de348u + + 0x464u);
    }
L_000de344:;
    {
        cpu->r[2] = rd32(0x000de34cu + + 0x464u);
    }
L_000de348:;
    {
        cpu->r[1] = add_flags(cpu, 0x000de350u, cpu->r[1], 0, 0);
    }
L_000de34c:;
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
L_000de350:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000de354:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000de358:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_000de35c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000de360:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_000de364:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000de368:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000de36c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_000de370:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000de374:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000de378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de388;
        }
    }
L_000de37c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_000de380:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000de384:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000de388u)) return;
    }
L_000de388:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000de38c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000de390:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x0000013cu, 0, 0);
    }
L_000de394:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000000b4u, 0, 0);
    }
L_000de398:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000de39c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000de3a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e4u, 0, 0);
    }
L_000de3a4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000de3a8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000de3ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000de3b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000de3b4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_000de3b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000de3bc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000de3c4u + + 0x3e0u);
    }
L_000de3c0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_000de3c4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000de3ccu + + 0x3dcu);
    }
L_000de3c8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000de3cc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_000de3d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000de3d4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000de3d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000de3dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000de6fc;
        }
    }
L_000de3e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000de3e4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000de3e8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_000de3ec:;
    {
        cpu->r[3] = 0x0000826cu;
    }
L_000de3f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00006000u, 0, 0);
    }
L_000de3f4:;
    {
        cpu->r[12] = 0x00008c78u;
    }
L_000de3f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000007cu, 0, 0);
    }
L_000de3fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000de400:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000de404:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000de408:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000de40c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000de410:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_000de414:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_000de418:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_000de41c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000de420:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000de424:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_000de428:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000de42c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_000de430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de434:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_000de438:;
    {
        cpu->r[14] = 0x000de440u;
    }
L_000de43c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de440u)) return;
    }
L_000de440:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de6e0;
        }
    }
L_000de448:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3a8u);
    }
L_000de44c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000de450:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_000de454:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000de458:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_000de45c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_000de460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de72c;
        }
    }
L_000de464:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000de468:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000de46c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000de470:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000de474:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000de478:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de47c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000de480:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000de484:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de488:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000de48c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000de490:;
    {
        cpu->r[14] = 0x000de494u; fn_00154734(cpu);
    }
L_000de494:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000de498:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de49c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000de4a0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de4a4:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000de4a8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000de4ac:;
    {
        cpu->r[14] = 0x000de4b0u; fn_00154514(cpu);
    }
L_000de4b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000de4b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de4b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000de4bc:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de4c0:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000de4c4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000de4c8:;
    {
        cpu->r[14] = 0x000de4ccu; fn_00154350(cpu);
    }
L_000de4cc:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[5]);
    }
L_000de4d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_000de4d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de4d8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[5]);
    }
L_000de4dc:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[5]);
    }
L_000de4e0:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_000de4e4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[5]);
    }
L_000de4e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x420u);
    }
L_000de4ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x41cu);
    }
L_000de4f0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[5]);
    }
L_000de4f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x424u);
    }
L_000de4f8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000de4fc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000de500:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000de504:;
    {
        cpu->r[14] = 0x000de508u; fn_00153600(cpu);
    }
L_000de508:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_000de50c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000de510:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000de514:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000de518:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000de51c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000de520:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000de524:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000de528:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000de52c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000de530:;
    {
        cpu->r[14] = 0x000de534u; fn_0015e4f4(cpu);
    }
L_000de534:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000de538:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000de53c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de540:;
    {
        cpu->r[14] = 0x000de548u;
    }
L_000de544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de548u)) return;
    }
L_000de548:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000de54c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de6e0;
        }
    }
L_000de550:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000de554:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000de558:;
    {
        cpu->r[14] = 0x000de55cu; fn_00096b6c(cpu);
    }
L_000de55c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000de560:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de7b4;
        }
    }
L_000de564:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000de568:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000de56c:;
    {
        cpu->r[14] = 0x000de570u; fn_00096b88(cpu);
    }
L_000de570:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de74c;
        }
    }
L_000de578:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de57c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000de580:;
    {
        cpu->r[14] = 0x000de584u; fn_00153478(cpu);
    }
L_000de584:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000de588:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de58c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de590:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de594:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_000de598:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000de59c:;
    {
        cpu->r[14] = 0x000de5a0u; fn_00154350(cpu);
    }
L_000de5a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000de5a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de5a8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000de5ac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000de5b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de5b4:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de5b8:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000de5bc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000de5c0:;
    {
        cpu->r[14] = 0x000de5c4u; fn_00154734(cpu);
    }
L_000de5c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000de5c8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de5cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de5d0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000de5d4:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000de5d8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000de5dc:;
    {
        cpu->r[14] = 0x000de5e0u; fn_00154514(cpu);
    }
L_000de5e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_000de5e4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_000de5e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000de5ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000de5f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de5f4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000de5f8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_000de5fc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000de600:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_000de604:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000de608:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000de60c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000de610:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000de614:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000de618:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000de61c:;
    {
        cpu->r[14] = 0x000de620u; fn_0015364c(cpu);
    }
L_000de620:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_000de624:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000de628:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000de62c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000de630:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000de634:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000de638:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000de63c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000de640:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000de644:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000de648:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000de64c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000de650:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000de654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000de658:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000de65c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000de660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de634;
        }
    }
L_000de664:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_000de668:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_000de66c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000de670:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000de674:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000de678:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000de67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000de680:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de6e0;
        }
    }
L_000de684:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000de688:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_000de68c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000de690:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000de694:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000de698:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000de69c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
    }
L_000de6a0:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[1]);
    }
L_000de6a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000de6a8:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[0]);
    }
L_000de6ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000de6b0:;
    {
        wr32(cpu->r[4] + + 0x424u, cpu->r[12]);
    }
L_000de6b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003f8u, 0, 0);
    }
L_000de6b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000de6bc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000de6c0:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[1]);
    }
L_000de6c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000de6c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000de6cc:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[1]);
    }
L_000de6d0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000de6d4:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[12]);
    }
L_000de6d8:;
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
L_000de6dc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000de6e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_000de6e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000de6e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000de6ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000044u, 0, 0);
    }
L_000de6f0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000de6f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000de6f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000de420;
        }
    }
L_000de6fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000de700:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000de704:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000au, 0, 0);
    }
L_000de708:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000de70c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_000de710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000de714:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a8u, 0, 0);
    }
L_000de718:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_000de71c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000de720:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_000de724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000de3d0;
        }
    }
L_000de728:;
    {
        goto L_000de37c;
    }
L_000de72c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000de730:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_000de734:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000de738:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000de73c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000de740:;
    {
        cpu->r[14] = 0x000de744u; fn_00173250(cpu);
    }
L_000de744:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_000de748:;
    {
        goto L_000de478;
    }
L_000de74c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000de750:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000de754:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000de758:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000de75c:;
    {
        cpu->r[14] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000de760:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000de764:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000de768:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_000de76c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000de770:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000de774:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000de778:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000de77c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_000de780:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000de784:;
    {
        cpu->r[14] = 0x000de788u; fn_0009950c(cpu);
    }
L_000de788:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_000de78c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_000de790:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000de794:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_000de798:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x60u);
    }
L_000de79c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_000de7a0:;
    {
        goto L_000de578;
    }
L_000de7b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000de7b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000de7bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000de7c0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000de7c4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000de7c8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000de7cc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000de7d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000de7d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
    }
L_000de7d8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000de7dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_000de7e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_000de7e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_000de7e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_000de7ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_000de7f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000de7f4:;
    {
        cpu->r[14] = 0x000de7f8u; fn_0009965c(cpu);
    }
L_000de7f8:;
    {
        goto L_000de564;
    }
}

/* _ZN5Scene19LoadBlockingCarMeshEii @ 000de7fc (arm) */
void fn_000de7fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000de7fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000de800:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000007cu, 0, 0);
    }
L_000de804:;
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
L_000de808:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000de80c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_000de810:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000de814:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000de818:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000de81c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de820:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000de824:;
    {
        cpu->r[14] = 0x000de82cu;
    }
L_000de828:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de82cu)) return;
    }
L_000de82c:;
    {
        cpu->r[4] = rd32(0x000de834u + + 0x340u);
    }
L_000de830:;
    {
        cpu->r[4] = add_flags(cpu, 0x000de838u, cpu->r[4], 0, 0);
    }
L_000de834:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de838:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000deb04;
        }
    }
L_000de83c:;
    {
        cpu->r[9] = rd32(0x000de844u + + 0x334u);
    }
L_000de840:;
    {
        cpu->r[0] = 0x00000dfcu;
    }
L_000de844:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000de848:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de84c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x450u);
    }
L_000de850:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x8u);
    }
L_000de854:;
    {
        cpu->r[14] = 0x000de858u; fn_0018ba6c(cpu);
    }
L_000de858:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_000de85c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000de860:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000de864:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000de868:;
    {
        cpu->r[14] = 0x000de86cu; fn_000b23f0(cpu);
    }
L_000de86c:;
    {
        cpu->r[2] = 0x00008268u;
    }
L_000de870:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000de874:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000de878:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000de87c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000de880:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000de884:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000de888:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[8]);
    }
L_000de88c:;
    {
        cpu->r[14] = 0x000de894u;
    }
L_000de890:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000de894u)) return;
    }
L_000de894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de898:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_000de89c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000deaa8;
        }
    }
L_000de8a0:;
    {
        cpu->r[3] = rd32(0x000de8a8u + + 0x2d4u);
    }
L_000de8a4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000de8a8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000de8ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000de8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000deac0;
        }
    }
L_000de8b4:;
    {
        cpu->r[6] = rd32(0x000de8bcu + + 0x2c4u);
    }
L_000de8b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000de8bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000de8c0:;
    {
        cpu->r[14] = 0x000de8c4u; fn_00189f5c(cpu);
    }
L_000de8c4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000de8c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000de8cc:;
    {
        cpu->r[14] = 0x000de8d0u; fn_001897b4(cpu);
    }
L_000de8d0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000de8d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000deb3c;
        }
    }
L_000de8d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de8dc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000de8e0:;
    {
        cpu->r[14] = 0x000de8e4u; fn_000fc5dc(cpu);
    }
L_000de8e4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000de8e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de8ec:;
    {
        cpu->r[14] = 0x000de8f0u; fn_000fc650(cpu);
    }
L_000de8f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000de8f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000de8f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x45cu);
    }
L_000de8fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000de900:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_000de904:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_000de908:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000de90c:;
    {
        cpu->r[4] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000de910:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de914:;
    {
        cpu->r[14] = 0x000de918u; fn_000fc5ec(cpu);
    }
L_000de918:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de91c:;
    {
        cpu->r[14] = 0x000de920u; fn_000fc628(cpu);
    }
L_000de920:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000de924:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de928:;
    {
        cpu->r[14] = 0x000de92cu; fn_000fc5dc(cpu);
    }
L_000de92c:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000de930:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_000de934:;
    {
        cpu->r[4] = (uint32_t)((int32_t)(int16_t)(cpu->r[4] & 0xffff) * (int32_t)(int16_t)(cpu->r[1] & 0xffff));
    }
L_000de938:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_000de93c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_000de940:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de944:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 0);
    }
L_000de948:;
    {
        cpu->r[14] = 0x000de94cu; fn_000fc5ec(cpu);
    }
L_000de94c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de950:;
    {
        cpu->r[14] = 0x000de954u; fn_000fc678(cpu);
    }
L_000de954:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000de958:;
    {
        cpu->r[3] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_000de95c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de960:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000de964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000de968:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000de96c:;
    {
        cpu->r[14] = 0x000de970u; fn_000fc5f4(cpu);
    }
L_000de970:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_000de974:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000de978:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de97c:;
    {
        cpu->r[14] = 0x000de980u; fn_000fc5f4(cpu);
    }
L_000de980:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ccu, 0, 0);
    }
L_000de984:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000de988:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de98c:;
    {
        cpu->r[14] = 0x000de990u; fn_000fc5f4(cpu);
    }
L_000de990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_000de994:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000de998:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de99c:;
    {
        cpu->r[14] = 0x000de9a0u; fn_000fc5f4(cpu);
    }
L_000de9a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000de9a4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000de9a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9ac:;
    {
        cpu->r[14] = 0x000de9b0u; fn_000fc5f4(cpu);
    }
L_000de9b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000de9b4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000de9b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9bc:;
    {
        cpu->r[14] = 0x000de9c0u; fn_000fc5f4(cpu);
    }
L_000de9c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000de9c4:;
    {
        cpu->r[2] = 0x0000001au;
    }
L_000de9c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9cc:;
    {
        cpu->r[14] = 0x000de9d0u; fn_000fc5f4(cpu);
    }
L_000de9d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000de9d4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000de9d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9dc:;
    {
        cpu->r[14] = 0x000de9e0u; fn_000fc5f4(cpu);
    }
L_000de9e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_000de9e4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000de9e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9ec:;
    {
        cpu->r[14] = 0x000de9f0u; fn_000fc5f4(cpu);
    }
L_000de9f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000de9f4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000de9f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000de9fc:;
    {
        cpu->r[14] = 0x000dea00u; fn_000fc5f4(cpu);
    }
L_000dea00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_000dea04:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000dea08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea0c:;
    {
        cpu->r[14] = 0x000dea10u; fn_000fc5f4(cpu);
    }
L_000dea10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_000dea14:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea18:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000dea1c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x1u;
        wr8(cpu->r[1] + - 0x1u, cpu->r[7]);
        cpu->r[1] = wb_tmp;
    }
L_000dea20:;
    {
        cpu->r[14] = 0x000dea24u; fn_000fc5f4(cpu);
    }
L_000dea24:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0xcfu);
    }
L_000dea28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000dea2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000deab8;
        }
    }
L_000dea30:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[7]);
        }
    }
L_000dea34:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000deab0;
        }
    }
L_000dea38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000dea3c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000dea40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea44:;
    {
        cpu->r[14] = 0x000dea48u; fn_000fc5f4(cpu);
    }
L_000dea48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea4c:;
    {
        cpu->r[14] = 0x000dea50u; fn_000fc628(cpu);
    }
L_000dea50:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000dea54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea58:;
    {
        cpu->r[14] = 0x000dea5cu; fn_000fc628(cpu);
    }
L_000dea5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000dea64:;
    {
        cpu->r[14] = 0x000dea68u; fn_000fc628(cpu);
    }
L_000dea68:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_000dea6c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000dea70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dea8c;
        }
    }
L_000dea74:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000dea78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dea7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000dea80:;
    {
        cpu->r[14] = 0x000dea84u; fn_000fc5fc(cpu);
    }
L_000dea84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000dea88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dea78;
        }
    }
L_000dea8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000dea90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dea94:;
    {
        cpu->r[14] = 0x000dea98u; fn_001785fc(cpu);
    }
L_000dea98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000dea9c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000deaa0:;
    {
        cpu->r[14] = 0x000deaa4u; fn_00189870(cpu);
    }
L_000deaa4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000deaa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000deaac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000deab0u)) return;
    }
L_000deab0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000deab4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_000deab8:;
    {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[3]);
    }
L_000deabc:;
    {
        goto L_000dea38;
    }
L_000deac0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000deac4:;
    {
        cpu->r[14] = 0x000deac8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000deac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000deacc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000de8b4;
        }
    }
L_000dead0:;
    {
        cpu->r[6] = rd32(0x000dead8u + + 0xa8u);
    }
L_000dead4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000dead8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000deadc:;
    {
        cpu->r[14] = 0x000deae0u; fn_00189f48(cpu);
    }
L_000deae0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000deae4:;
    {
        cpu->r[14] = 0x000deae8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000deae8:;
    {
        cpu->r[3] = rd32(0x000deaf0u + + 0x94u);
    }
L_000deaec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000deaf0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000deaf4:;
    {
        cpu->r[3] = rd32(0x000deafcu + + 0x8cu);
    }
L_000deaf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000deafc:;
    {
        cpu->r[14] = 0x000deb00u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000deb00:;
    {
        goto L_000de8b8;
    }
L_000deb04:;
    {
        cpu->r[1] = rd32(0x000deb0cu + + 0x80u);
    }
L_000deb08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000deb0c:;
    {
        cpu->r[2] = rd32(0x000deb14u + + 0x7cu);
    }
L_000deb10:;
    {
        cpu->r[14] = 0x00000041u;
    }
L_000deb14:;
    {
        cpu->r[3] = rd32(0x000deb1cu + + 0x78u);
    }
L_000deb18:;
    {
        cpu->r[1] = add_flags(cpu, 0x000deb20u, cpu->r[1], 0, 0);
    }
L_000deb1c:;
    {
        cpu->r[12] = rd32(0x000deb24u + + 0x74u);
    }
L_000deb20:;
    {
        cpu->r[2] = add_flags(cpu, 0x000deb28u, cpu->r[2], 0, 0);
    }
L_000deb24:;
    {
        cpu->r[3] = add_flags(cpu, 0x000deb2cu, cpu->r[3], 0, 0);
    }
L_000deb28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000deb2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000deb34u, cpu->r[12], 0, 0);
    }
L_000deb30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000deb34:;
    {
        cpu->r[14] = 0x000deb38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000deb38:;
    {
        goto L_000de83c;
    }
L_000deb3c:;
    {
        cpu->r[1] = rd32(0x000deb44u + + 0x58u);
    }
L_000deb40:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000deb44:;
    {
        cpu->r[2] = rd32(0x000deb4cu + + 0x54u);
    }
L_000deb48:;
    {
        cpu->r[14] = 0x0000004bu;
    }
L_000deb4c:;
    {
        cpu->r[3] = rd32(0x000deb54u + + 0x50u);
    }
L_000deb50:;
    {
        cpu->r[1] = add_flags(cpu, 0x000deb58u, cpu->r[1], 0, 0);
    }
L_000deb54:;
    {
        cpu->r[12] = rd32(0x000deb5cu + + 0x4cu);
    }
L_000deb58:;
    {
        cpu->r[2] = add_flags(cpu, 0x000deb60u, cpu->r[2], 0, 0);
    }
L_000deb5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000deb64u, cpu->r[3], 0, 0);
    }
L_000deb60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000deb64:;
    {
        cpu->r[12] = add_flags(cpu, 0x000deb6cu, cpu->r[12], 0, 0);
    }
L_000deb68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000deb6c:;
    {
        cpu->r[14] = 0x000deb70u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000deb70:;
    {
        goto L_000de8d8;
    }
}

/* _ZN5Scene16InitBlockingCarsEv @ 000debac (arm) */
void fn_000debac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000debac:;
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
L_000debb0:;
    {
        cpu->r[8] = rd32(0x000debb8u + + 0x1a8u);
    }
L_000debb4:;
    {
        cpu->r[10] = rd32(0x000debbcu + + 0x1a8u);
    }
L_000debb8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000debbc:;
    {
        cpu->r[8] = add_flags(cpu, 0x000debc4u, cpu->r[8], 0, 0);
    }
L_000debc0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000debc4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000debc8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000debcc:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000debd0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000debd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000debd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000debe4;
        }
    }
L_000debdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000debe0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000debe4u)) return;
    }
L_000debe4:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_000debe8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000debec:;
    {
        cpu->r[14] = 0x000debf0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000debf0:;
    {
        cpu->r[3] = 0x00008268u;
    }
L_000debf4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000debf8:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000debfc:;
    {
        cpu->r[0] = 0x00000800u;
    }
L_000dec00:;
    {
        cpu->r[14] = 0x000dec04u; imp__Znaj(cpu); /* _Znaj */
    }
L_000dec04:;
    {
        cpu->r[3] = 0x00000044u;
    }
L_000dec08:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000dec0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000800u, 0, 0);
    }
L_000dec10:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_000dec14:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000dec18:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_000dec1c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000dec20:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[4]);
    }
L_000dec24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000dec28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_000dec2c:;
    {
        cpu->r[14] = 0x000dec30u; fn_001535e0(cpu);
    }
L_000dec30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_000dec34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dec20;
        }
    }
L_000dec38:;
    {
        cpu->r[3] = 0x0000826cu;
    }
L_000dec3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00018000u, 0, 0);
    }
L_000dec40:;
    {
        cpu->r[9] = 0x00006667u;
    }
L_000dec44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dec48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000001f0u, 0, 0);
    }
L_000dec4c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x6666u << 16);
    }
L_000dec50:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000dec54:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[11]);
    }
L_000dec58:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_000dec5c:;
    {
        cpu->r[14] = 0x000dec60u; fn_0018ba6c(cpu);
    }
L_000dec60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000dec64:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000dec68:;
    {
        cpu->r[14] = 0x000dec6cu; fn_00166fa4(cpu);
    }
L_000dec6c:;
    {
        wr32(cpu->r[5], cpu->r[11]);
    }
L_000dec70:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000dec74:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000dec78:;
    {
        cpu->r[14] = 0x000dec80u;
    }
L_000dec7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000dec80u)) return;
    }
L_000dec80:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[4]; cpu->r[3] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_000dec84:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_000dec88:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000dec8c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000dec90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000dec94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000dec98:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000dec9c:;
    {
        wr32(cpu->r[3] + + 0x3d4u, cpu->r[6]);
    }
L_000deca0:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[14], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_000deca4:;
    {
        wr32(cpu->r[3] + + 0x3dcu, cpu->r[6]);
    }
L_000deca8:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_000decac:;
    {
        wr32(cpu->r[3] + + 0x3d8u, cpu->r[6]);
    }
L_000decb0:;
    {
        wr8(cpu->r[3] + + 0x6au, cpu->r[14]);
    }
L_000decb4:;
    {
        wr32(cpu->r[0] + + 0x5d4u, cpu->r[12]);
    }
L_000decb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000decbc:;
    {
        cpu->r[14] = 0x000decc0u; fn_000de7fc(cpu);
    }
L_000decc0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000decc4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000decc8:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000deccc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001840u, 0, 0);
    }
L_000decd0:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000decd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_000decd8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000decdc:;
    {
        cpu->r[14] = 0x000dece0u; fn_00160820(cpu);
    }
L_000dece0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[5]);
        cpu->r[5] = wb_tmp;
    }
L_000dece4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000dece8:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000decec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001840u, 0, 0);
    }
L_000decf0:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000decf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000decf8:;
    {
        cpu->r[12] = 0x000000a0u;
    }
L_000decfc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000ded00:;
    {
        cpu->r[14] = 0x000ded04u; fn_00160820(cpu);
    }
L_000ded04:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001eu, 1, 1);
    }
L_000ded08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dec58;
        }
    }
L_000ded0c:;
    {
        cpu->r[4] = 0x000081e4u;
    }
L_000ded10:;
    {
        cpu->r[0] = 0x000081e8u;
    }
L_000ded14:;
    {
        cpu->r[2] = 0x000081ecu;
    }
L_000ded18:;
    {
        cpu->r[12] = 0x00008270u;
    }
L_000ded1c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000ded20:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000ded24:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ded28:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000ded2c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000ded30:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000ded34:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[6]);
    }
L_000ded38:;
    {
        wr32(cpu->r[7] + cpu->r[12], cpu->r[6]);
    }
L_000ded3c:;
    {
        wr32(cpu->r[7] + cpu->r[0], cpu->r[6]);
    }
L_000ded40:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[6]);
    }
L_000ded44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000ded48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000ded4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018000u, 0, 0);
    }
L_000ded50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_000ded54:;
    {
        wr32(cpu->r[2] + + 0x274u, cpu->r[1]);
    }
L_000ded58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ded44;
        }
    }
L_000ded5c:;
    {
        goto L_000debdc;
    }
}

/* _ZN5Scene32RemoveBlockingCarByWaypointIndexEib @ 000ded68 (arm) */
void fn_000ded68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ded68:;
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
L_000ded6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00006000u, 0, 0);
    }
L_000ded70:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000ded74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x0000009cu, 0, 0);
    }
L_000ded78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ded7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_000ded80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000ded84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000ded88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ded8c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_000ded90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000012u, 1, 0);
    }
L_000ded94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00006000u, 0, 0);
    }
L_000ded98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000ded9c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x1e4u);
    }
L_000deda0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000deda4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dee58;
        }
    }
L_000deda8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000dedac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000dedb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000dede4;
        }
    }
L_000dedb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000dedb8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000dedbc:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000dedc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000dedc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000dedc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00018000u, 0, 0);
    }
L_000dedcc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x274u);
    }
L_000dedd0:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x12u);
    }
L_000dedd4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000dedd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_000deddc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_000dede0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dedc0;
        }
    }
L_000dede4:;
    {
        cpu->r[12] = 0x00008270u;
    }
L_000dede8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000dedec:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000dedf0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000dedf4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000dedf8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dee44;
        }
    }
L_000dedfc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00006000u, 0, 0);
    }
L_000dee00:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000009cu, 0, 0);
    }
L_000dee04:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_000dee08:;
    {
        cpu->r[9] = rd32(cpu->r[9] + + 0x4u);
    }
L_000dee0c:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x12u);
    }
L_000dee10:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_000dee14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000dee18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
        }
    }
L_000dee1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dee38;
        }
    }
L_000dee20:;
    {
        goto L_000deedc;
    }
L_000dee24:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x8u);
    }
L_000dee28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000dee2c:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x12u);
    }
L_000dee30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_000dee34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000deedc;
        }
    }
L_000dee38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000dee3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000dee40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000dee24;
        }
    }
L_000dee44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006000u, 0, 0);
    }
L_000dee48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000078u, 0, 0);
    }
L_000dee4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000dee50:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_000dee54:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[10]);
    }
L_000dee58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000dee5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000dee60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000deed4;
        }
    }
L_000dee64:;
    {
        cpu->r[3] = 0x00008270u;
    }
L_000dee68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000dee6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000dee70:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000dee74:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000dee78:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000dee9c;
        }
    }
L_000dee7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000dee80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000278u, 0, 0);
    }
L_000dee84:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000dee88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000dee8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000dee90:;
    {
        wr32(cpu->r[6] + - 0x4u, cpu->r[3]);
    }
L_000dee94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000dee98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000dee84;
        }
    }
L_000dee9c:;
    {
        cpu->r[5] = 0x00008270u;
    }
L_000deea0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006000u, 0, 0);
    }
L_000deea4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000deea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000009cu, 0, 0);
    }
L_000deeac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000deeb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000deeb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000deeb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000deebc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_000deec0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000df028;
        }
    }
L_000deec4:;
    {
        cpu->r[3] = 0x00008270u;
    }
L_000deec8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000deecc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000deed0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000deed4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000deed8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000deedcu)) return;
    }
L_000deedc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000deee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000dee44;
        }
    }
L_000deee4:;
    {
        cpu->r[3] = 0x00008268u;
    }
L_000deee8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000deeec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000deef0:;
    {
        cpu->r[9] = 0x0000826cu;
    }
L_000deef4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000deef8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000deefc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000def00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000def04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_000def08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_000def0c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[8], 0x00006000u, 0, 0);
    }
L_000def10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00006000u, 0, 0);
    }
L_000def14:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000def18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007cu, 0, 0);
    }
L_000def1c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000007cu, 0, 0);
    }
L_000def20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000def24:;
    {
        cpu->r[11] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000def28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000def2c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000def30:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000def34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_000def38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000def3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000def40:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[0]);
    }
L_000def44:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000def48:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[11]);
    }
L_000def4c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000def50:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_000def54:;
    {
        wr8(cpu->r[14] + + 0x250u, cpu->r[3]);
    }
L_000def58:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_000def5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000def60:;
    {
        wr8(cpu->r[11] + + 0x250u, cpu->r[3]);
    }
L_000def64:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[2]);
    }
L_000def68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 4u, &shc), 0, 0);
    }
L_000def6c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000def70:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000def74:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_000def78:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_000def7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_000def80:;
    {
        cpu->r[14] = 0x000def84u; fn_00153624(cpu);
    }
L_000def84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000def88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000def8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000def90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000def94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000def98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000def9c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000defa0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000defa4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000defa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000defac:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000defb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000defb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000defb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000defbc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000defc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_000defc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000def98;
        }
    }
L_000defc8:;
    {
        cpu->r[0] = 0x0000826cu;
    }
L_000defcc:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000defd0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000defd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000040u, 0, 0);
    }
L_000defd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000defdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_000defe0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000defe4:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000defe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000defec:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000deff0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000deff4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000deff8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000deffc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000df000:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000df004:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000df008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_000df00c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000defe0;
        }
    }
L_000df010:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000df014:;
    {
        cpu->r[14] = 0x000df018u; fn_000b2bc8(cpu);
    }
L_000df018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_000df01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000df020:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_000df024:;
    {
        goto L_000dee4c;
    }
L_000df028:;
    {
        cpu->r[1] = rd32(0x000df030u + + 0x34u);
    }
L_000df02c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000df030:;
    {
        cpu->r[12] = rd32(0x000df038u + + 0x30u);
    }
L_000df034:;
    {
        cpu->r[14] = 0x000001b7u;
    }
L_000df038:;
    {
        cpu->r[2] = rd32(0x000df040u + + 0x2cu);
    }
L_000df03c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000df044u, cpu->r[1], 0, 0);
    }
L_000df040:;
    {
        cpu->r[3] = rd32(0x000df048u + + 0x28u);
    }
L_000df044:;
    {
        cpu->r[12] = add_flags(cpu, 0x000df04cu, cpu->r[12], 0, 0);
    }
L_000df048:;
    {
        cpu->r[2] = add_flags(cpu, 0x000df050u, cpu->r[2], 0, 0);
    }
L_000df04c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_000df050:;
    {
        cpu->r[3] = add_flags(cpu, 0x000df058u, cpu->r[3], 0, 0);
    }
L_000df054:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000df058:;
    {
        cpu->r[14] = 0x000df05cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000df05c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000df060:;
    {
        goto L_000deec4;
    }
}
